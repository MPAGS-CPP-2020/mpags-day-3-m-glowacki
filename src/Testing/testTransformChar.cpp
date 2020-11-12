#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "TransformChar.hpp"

TEST_CASE("Characters are uppercased", "[alphanumeric]"){
    const std::string upper{"ABCDEFG"};
    const std::string lower{"abcdefg"};

 for(size_t i = 0; i < upper.size(); i ++){
     REQUIRE(transformChar(lower[i]) == std::string{upper[i]});
 }

}

TEST_CASE("Digits are transliterated", "[alphanumeric]"){
    REQUIRE( transformChar('0') == "ZERO");
}

TEST_CASE("Special characters are removed", "[punctuation]"){
    REQUIRE(transformChar('!') == "");
}



