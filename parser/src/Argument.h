//
// Created by D. A. Hosek on 2.11.20.
//

#ifndef FINL_ARGUMENT_H
#define FINL_ARGUMENT_H


#include <string>

namespace finl {
    namespace parser {
        class Argument {
        public:
            virtual std::string parseArg(std::string arg) = 0;
        };

        class StdArgument : Argument {
        public:
            std::string parseArg(std::string arg);
        };


    }
}


#endif //FINL_ARGUMENT_H
