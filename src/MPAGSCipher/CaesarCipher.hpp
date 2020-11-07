#include <string>
#include <vector>
#include <iostream>

class CaesarCipher {
    
    
    public:
    explicit CaesarCipher(const size_t key);
    explicit CaesarCipher(const std::string& key);
    int key_{0};

    std::string applyCipher( const std::string& inputText, const size_t key_, CipherMode cipherMode );
    

   
    private:
    //int key_{0};
    const std::vector<char> alphabet_ = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    const std::vector<char>::size_type alphabetsize_ = alphabet_.size();
};

