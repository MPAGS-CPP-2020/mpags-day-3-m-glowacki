#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "CaesarCipher.hpp"
#include "CipherMode.hpp"


TEST_CASE("Cipher encrypts and decrypts given key", "[cipher functionality]"){
    std::string cipher_key {"2"};
    CaesarCipher caesarcipher(cipher_key);
    //REQUIRE(isdigit(caesarcipher.key_) == true);

SECTION( "Cipher is encypting") {
    CipherMode cipherMode {CipherMode::encrypt};
    REQUIRE(caesarcipher.applyCipher("AB", cipherMode) == "CD");
}

SECTION( "Cipher is decrypting"){
    CipherMode cipherMode {CipherMode::decrypt};
    REQUIRE(caesarcipher.applyCipher("CD", cipherMode) == "AB");
}
}