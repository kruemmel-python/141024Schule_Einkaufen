

```
# 141024Schule Projekt

Dieses Projekt verwaltet eine Einkaufsliste, die sowohl Lebensmittel als auch Elektronikprodukte enthalten kann. Es enthält sowohl die Implementierung der Einkaufsliste als auch Tests basierend auf Google Test (GTest).

## Projektstruktur

```
.
├── einkaufsliste.hpp         # Header-Datei der Einkaufsliste
├── einkaufsliste.tpp         # Template-Definitionen der Einkaufsliste
├── lebensmittel.hpp          # Header für die Lebensmittelklasse
├── lebensmittel.cpp          # Implementierung der Lebensmittelklasse
├── elektronik.hpp            # Header für die Elektronikklasse
├── elektronik.cpp            # Implementierung der Elektronikklasse
├── produkt.hpp               # Header für die Basisklasse "Produkt"
├── main.cpp                  # Hauptprogramm
├── templates/                # Ordner mit Template-Dateien
├── tests/
│   └── test_einkaufsliste.cpp # GTest-basierte Tests
└── README.md                 # Diese Datei
```

## Voraussetzungen

1. **vcpkg** muss in Visual Studio integriert sein, um die Google Test-Bibliotheken zu verwenden.
2. Stelle sicher, dass die Google Test-Bibliotheken korrekt über vcpkg installiert wurden.

```bash
vcpkg install gtest
```

## Testkonfiguration

Um die Tests in Visual Studio auszuführen, sind einige Schritte erforderlich:

### 1. Präprozessor-Direktive für Tests aktivieren

Um sicherzustellen, dass die Tests im Debug-Modus kompiliert und ausgeführt werden, musst du eine Präprozessor-Direktive hinzufügen.

- Gehe zu den **Projekteigenschaften**.
- Navigiere zu **C/C++** → **Präprozessor** → **Präprozessordefinitionen**.
- Füge `RUN_TESTS` zur Liste der Definitionen **im Debug-Modus** hinzu.

Dies aktiviert die Testfunktionen im Projekt, da die Testdatei mit dem Präprozessor-Symbol `#ifdef RUN_TESTS` ausgestattet ist. Nur wenn dieser Präprozessorwert gesetzt ist, werden die Tests ausgeführt.

### 2. Ausführen der Tests

Nach der erfolgreichen Konfiguration der Präprozessor-Direktiven kannst du die Tests über den **Test-Explorer** in Visual Studio ausführen.

- Wähle die Datei `test_einkaufsliste.cpp` und baue das Projekt.
- Öffne den Test-Explorer und führe die Tests aus.

Wenn alles richtig konfiguriert ist, sollten die Tests wie folgt erscheinen:

```
Testlauf abgeschlossen: 3 Tests (3 erfolgreich, 0 fehlerhaft, 0 übersprungen)
```

## Verwendung des Programms

Das Programm erstellt eine Einkaufsliste, fügt Produkte hinzu und zeigt die Liste an. Zusätzlich können Produkte entfernt werden, und die Liste wird erneut angezeigt.

### Beispielausgabe

```
Einkaufsliste:
Produkte in der Einkaufsliste:
Lebensmittel: Apfel, Haltbarkeitsdatum: 2023-12-31, Gewicht: 0.2 kg
Lebensmittel: Banane, Haltbarkeitsdatum: 2023-11-30, Gewicht: 0.3 kg
Elektronik: Laptop, Garantie: 2 Jahre, Preis: 999.99 EUR
Elektronik: Smartphone, Garantie: 1 Jahr, Preis: 499.99 EUR

Einkaufsliste nach Entfernen der Banane:
Produkte in der Einkaufsliste:
Lebensmittel: Apfel, Haltbarkeitsdatum: 2023-12-31, Gewicht: 0.2 kg
Elektronik: Laptop, Garantie: 2 Jahre, Preis: 999.99 EUR
Elektronik: Smartphone, Garantie: 1 Jahr, Preis: 499.99 EUR
```

## Lizenz

Dieses Projekt ist unter der MIT-Lizenz lizenziert.
```
