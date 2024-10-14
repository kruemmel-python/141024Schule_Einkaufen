#pragma once

#include "produkt.hpp"
#include <iostream>

/**
 * @brief Eine Klasse, die ein Elektronikprodukt repräsentiert.
 *
 * Die Klasse enthält Informationen über den Namen, die Garantie und den Preis
 * eines Elektronikprodukts.
 */
class Elektronik : public Produkt {
public:
    /**
     * @brief Konstruktor für Elektronikprodukte.
     *
     * @param name Der Name des Produkts.
     * @param garantie Die Garantiezeit des Produkts.
     * @param preis Der Preis des Produkts.
     */
    Elektronik(const std::string& name, const std::string& garantie, double preis)
        : name(name), garantie(garantie), preis(preis) {}

    /**
     * @brief Zeigt die Details des Elektronikprodukts an.
     *
     * Diese Methode gibt den Namen, die Garantie und den Preis des Produkts aus.
     */
    void anzeigen() const override {
        std::cout << "Elektronik: " << name
            << ", Garantie: " << garantie
            << ", Preis: " << preis << " EUR" << std::endl;
    }

private:
    /// Der Name des Elektronikprodukts.
    std::string name;

    /// Die Garantiezeit des Produkts.
    std::string garantie;

    /// Der Preis des Produkts.
    double preis;
};
