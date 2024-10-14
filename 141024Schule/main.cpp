#ifndef RUN_TESTS

#include <iostream>
#include "lebensmittel.hpp"
#include "elektronik.hpp"
#include "einkaufsliste.hpp"

/**
 * @brief Hauptfunktion des Programms.
 *
 * Diese Funktion erstellt eine Einkaufsliste, fügt Produkte hinzu, zeigt die
 * Liste an, entfernt ein Produkt und zeigt die Liste erneut an.
 *
 * @return 0 bei erfolgreicher Ausführung.
 */
int main() {
    Einkaufsliste<Produkt*> einkaufsliste;

    // Erstellen von Produkten
    Lebensmittel* apfel = new Lebensmittel("Apfel", "2023-12-31", 0.2);
    Lebensmittel* banane = new Lebensmittel("Banane", "2023-11-30", 0.3);
    Elektronik* laptop = new Elektronik("Laptop", "2 Jahre", 999.99);
    Elektronik* smartphone = new Elektronik("Smartphone", "1 Jahr", 499.99);

    // Produkte zur Einkaufsliste hinzufügen
    einkaufsliste.hinzufuegen(apfel);
    einkaufsliste.hinzufuegen(banane);
    einkaufsliste.hinzufuegen(laptop);
    einkaufsliste.hinzufuegen(smartphone);

    // Einkaufsliste anzeigen
    std::cout << "Einkaufsliste:" << std::endl;
    einkaufsliste.anzeigen();

    // Ein Produkt entfernen und erneut anzeigen
    einkaufsliste.entfernen(banane);
    std::cout << "\nEinkaufsliste nach Entfernen der Banane:" << std::endl;
    einkaufsliste.anzeigen();

    // Speicher freigeben
    delete apfel;
    delete banane;
    delete laptop;
    delete smartphone;

    return 0;
}

#endif  // RUN_TESTS
