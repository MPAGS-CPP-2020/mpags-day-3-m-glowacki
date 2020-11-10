#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>
#include "CipherMode.hpp"

struct ProgramSettings {        // Declare a local structure 
    bool helpRequested;
    bool versionRequested;
    std::string cipher_key;
    std::string inputFile;
    std::string outputFile;
    CipherMode cipherMode;
};

bool processCommandLine(const std::vector<std::string>& args,
                        ProgramSettings& setttings);



#endif // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP 
