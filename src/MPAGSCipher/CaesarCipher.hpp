#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP



#include <string>
#include <vector>
#include <iostream>
#include "CipherMode.hpp"


class CaesarCipher {
    
    
    public:
    explicit CaesarCipher(const size_t key);
    explicit CaesarCipher(const std::string& key);
    int key_{0};
    
    std::string applyCipher( const std::string& inputText,  const CipherMode cipherMode) const;
    
    private:
    //int key_{0};
    const std::vector<char> alphabet_ = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    const std::vector<char>::size_type alphabetSize_ = alphabet_.size();
};

#endif //MPAGSCIPHER_CAESARCIPHER_HPP