//
// Created by D. A. Hosek on 15.12.20.
//

#ifndef FINL_INPUTCHUNK_H
#define FINL_INPUTCHUNK_H

#include <string>

class InputChunk {
private:
    std::string sourceText;
    std::string sourceUrl;
    long line;
    long column;

public:
    InputChunk(std::string _sourceText, std::string _sourceUrl, long _line, long _column) :
        sourceText(_sourceText), sourceUrl(_sourceUrl), line(_line), column(_column) {
    }

};


#endif //FINL_INPUTCHUNK_H
