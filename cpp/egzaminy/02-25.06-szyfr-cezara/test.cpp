#define CATCH_CONFIG_MAIN //uzyj main() Catcha
#include "catch.hpp"
#include "source.h"

// Kompilacja i uruchomienie testów:
// g++ test.cpp source.cpp -std=c++17 -o test.exe
//./test.exe

TEST_CASE("Podstawowy szyfr", "[basic]") {
    REQUIRE(szyfruj("abc", 3) == "def");
}

TEST_CASE("Zawijanie alfabetu", "[wrap]") {
    REQUIRE(szyfruj("xyz", 3) == "abc");
}

TEST_CASE("Odszyfrowanie ujemnym kluczem", "[negative]") {
    REQUIRE(szyfruj("def", -3) == "abc");
}

TEST_CASE("Długi klucz (większy niż alfabet)", "[longkey]") {
    REQUIRE(szyfruj("abc", 29) == "def");
}

TEST_CASE("Spacje w tekście", "[space]") {
    REQUIRE(szyfruj("ab cd", 2) == "cd ef");
}

