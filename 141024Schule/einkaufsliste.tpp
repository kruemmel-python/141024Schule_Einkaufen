#pragma once

#include "einkaufsliste.hpp"
#include <iostream>
#include <type_traits>

// Überprüfen, ob eine Klasse die Methode anzeigen() besitzt
template <typename T>
using hat_anzeigen_t = decltype(std::declval<T>().anzeigen());

template <typename T, typename = void>
constexpr bool hat_anzeigen_v = false;

template <typename T>
constexpr bool hat_anzeigen_v<T, std::void_t<hat_anzeigen_t<T>>> = true;

// Implementierung der Methoden der Einkaufsliste

// Hinzufügen eines Produkts zur Einkaufsliste
template <typename T>
void Einkaufsliste<T>::hinzufuegen(const T& produkt) {
    produkte.push_back(produkt);
}

// Entfernen eines Produkts aus der Einkaufsliste
template <typename T>
void Einkaufsliste<T>::entfernen(const T& produkt) {
    auto it = std::find(produkte.begin(), produkte.end(), produkt);
    if (it != produkte.end()) {
        produkte.erase(it);
    }
}

// Anzeigen der Einkaufsliste
template <typename T>
void Einkaufsliste<T>::anzeigen() const {
    if (produkte.empty()) {
        std::cout << "Die Einkaufsliste ist leer." << std::endl;
    } else {
        std::cout << "Produkte in der Einkaufsliste:" << std::endl;
        for (const auto& produkt : produkte) {
            if constexpr (hat_anzeigen_v<std::remove_pointer_t<T>>) {
                // Wenn das Produkt ein Zeiger ist, dereferenzieren
                if constexpr (std::is_pointer_v<T>) {
                    produkt->anzeigen();
                } else {
                    produkt.anzeigen();
                }
            } else {
                // Fallback für Produkte ohne anzeigen()-Methode
                std::cout << produkt << std::endl;
            }
        }
    }
}
