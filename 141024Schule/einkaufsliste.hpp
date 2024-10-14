#pragma once

#include <vector>
#include <algorithm>

/**
 * @brief Eine Klasse, um eine Einkaufsliste zu verwalten.
 *
 * Die Einkaufsliste speichert Produkte und bietet Funktionen, um Produkte
 * hinzuzufügen, zu entfernen und die Liste anzuzeigen.
 *
 * @tparam T Der Typ des Produkts, das in der Liste gespeichert wird.
 */
template <typename T>
class Einkaufsliste {
public:
    /**
     * @brief Fügt ein Produkt zur Einkaufsliste hinzu.
     *
     * @param produkt Das Produkt, das hinzugefügt werden soll.
     */
    void hinzufuegen(const T& produkt);

    /**
     * @brief Entfernt ein Produkt aus der Einkaufsliste.
     *
     * Falls das Produkt mehrfach vorhanden ist, wird nur die erste Instanz entfernt.
     *
     * @param produkt Das Produkt, das entfernt werden soll.
     */
    void entfernen(const T& produkt);

    /**
     * @brief Zeigt die Einkaufsliste an.
     *
     * Diese Funktion ruft die `anzeigen()`-Methode jedes Produkts in der Liste auf.
     */
    void anzeigen() const;

private:
    /// Eine Liste von Produkten.
    std::vector<T> produkte;
};

#include "einkaufsliste.tpp"
