#pragma once

#include "produkt.hpp"
#include <iostream>

/**
 * @brief Eine Klasse, die ein Lebensmittel repräsentiert.
 *
 * Die Klasse enthält Informationen über den Namen, das Haltbarkeitsdatum und
 * das Gewicht eines Lebensmittels.
 */
class Lebensmittel : public Produkt {
public:
    /**
     * @brief Konstruktor für Lebensmittel.
     *
     * @param name Der Name des Lebensmittels.
     * @param haltbarkeitsdatum Das Haltbarkeitsdatum des Lebensmittels.
     * @param gewicht Das Gewicht des Lebensmittels in Kilogramm.
     */
    Lebensmittel(const std::string& name, const std::string& haltbarkeitsdatum, double gewicht);

    /**
     * @brief Zeigt die Details des Lebensmittels an.
     *
     * Diese Methode gibt den Namen, das Haltbarkeitsdatum und das Gewicht des
     * Lebensmittels aus.
     */
    void anzeigen() const override;

    /**
     * @brief Überladung des Vergleichsoperators == für Lebensmittel.
     *
     * Vergleicht zwei Lebensmittel-Objekte anhand ihres Namens, Haltbarkeitsdatums und Gewichts.
     *
     * @param anderes Das andere Lebensmittel-Objekt zum Vergleich.
     * @return true, wenn alle Attribute übereinstimmen, false sonst.
     */
    bool operator==(const Lebensmittel& anderes) const;

private:
    /// Der Name des Lebensmittels.
    std::string name;

    /// Das Haltbarkeitsdatum des Lebensmittels.
    std::string haltbarkeitsdatum;

    /// Das Gewicht des Lebensmittels in Kilogramm.
    double gewicht;
};
