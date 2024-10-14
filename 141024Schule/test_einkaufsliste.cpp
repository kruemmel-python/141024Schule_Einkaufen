#ifdef RUN_TESTS

#include "gtest/gtest.h"
#include "einkaufsliste.hpp"
#include "lebensmittel.hpp"
#include "elektronik.hpp"

// Testfall für das Hinzufügen von Lebensmitteln zur Einkaufsliste
TEST(EinkaufslisteTest, HinzufuegenLebensmittel) {
    Einkaufsliste<Lebensmittel> einkaufsliste;
    Lebensmittel apfel("Apfel", "01-01-2025", 0.2);

    einkaufsliste.hinzufuegen(apfel);

    testing::internal::CaptureStdout();
    einkaufsliste.anzeigen();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Apfel"), std::string::npos);
}

// Testfall für das Hinzufügen von Elektronikartikeln zur Einkaufsliste
TEST(EinkaufslisteTest, HinzufuegenElektronik) {
    Einkaufsliste<Elektronik> einkaufsliste;
    Elektronik smartphone("Smartphone", "1 Jahr", 499.99);

    einkaufsliste.hinzufuegen(smartphone);

    testing::internal::CaptureStdout();
    einkaufsliste.anzeigen();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Smartphone"), std::string::npos);
}

// Testfall für das Entfernen eines Produkts aus der Einkaufsliste
TEST(EinkaufslisteTest, EntfernenProdukt) {
    Einkaufsliste<Lebensmittel> einkaufsliste;
    Lebensmittel apfel("Apfel", "01-01-2025", 0.2);
    einkaufsliste.hinzufuegen(apfel);

    einkaufsliste.entfernen(apfel);

    testing::internal::CaptureStdout();
    einkaufsliste.anzeigen();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output.find("Apfel"), std::string::npos);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

#endif  // RUN_TESTS
