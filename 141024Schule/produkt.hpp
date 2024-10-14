#pragma once

#include <string>

/**
 * @brief Abstrakte Basisklasse für alle Produktarten.
 *
 * Diese Klasse stellt eine Schnittstelle zur Verfügung, die von allen
 * abgeleiteten Produktklassen implementiert werden muss.
 */
class Produkt {
public:
    /**
     * @brief Zeigt die Details des Produkts an.
     *
     * Diese Methode muss von abgeleiteten Klassen implementiert werden,
     * um produktspezifische Informationen anzuzeigen.
     */
    virtual void anzeigen() const = 0;

    /// Virtueller Destruktor.
    virtual ~Produkt() {}
};
