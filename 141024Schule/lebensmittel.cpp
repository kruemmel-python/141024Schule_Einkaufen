#include "lebensmittel.hpp"
#include <iostream>

/**
 * @brief Konstruktor für Lebensmittel.
 *
 * @param name Der Name des Lebensmittels.
 * @param haltbarkeitsdatum Das Haltbarkeitsdatum des Lebensmittels.
 * @param gewicht Das Gewicht des Lebensmittels in Kilogramm.
 */
Lebensmittel::Lebensmittel(const std::string& name, const std::string& haltbarkeitsdatum, double gewicht)
    : name(name), haltbarkeitsdatum(haltbarkeitsdatum), gewicht(gewicht) {}

/**
 * @brief Zeigt die Details des Lebensmittels an.
 *
 * Gibt den Namen, das Haltbarkeitsdatum und das Gewicht des Lebensmittels auf
 * der Konsole aus.
 */
void Lebensmittel::anzeigen() const {
    std::cout << "Lebensmittel: " << name << ", Haltbarkeitsdatum: " << haltbarkeitsdatum
        << ", Gewicht: " << gewicht << " kg" << std::endl;
}

/**
 * @brief Überladung des Vergleichsoperators == für Lebensmittel.
 *
 * Vergleicht zwei Lebensmittel-Objekte anhand ihres Namens, Haltbarkeitsdatums und Gewichts.
 *
 * @param anderes Das andere Lebensmittel-Objekt zum Vergleich.
 * @return true, wenn alle Attribute übereinstimmen, false sonst.
 */
bool Lebensmittel::operator==(const Lebensmittel& anderes) const {
    return (name == anderes.name && haltbarkeitsdatum == anderes.haltbarkeitsdatum && gewicht == anderes.gewicht);
}
