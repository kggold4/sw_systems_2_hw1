#include <iostream>
#include <string>

#include "snowman.hpp"

using namespace std;

namespace ariel {

    std::string H(char c) {
        switch(c) {
        case '1':
            return "     \n_===_\n";
        case '2':
            return " ___ \n.....\n";
        case '3':
            return "   _  \n  /_\\ \n";
        case '4':
            return " ___ \n(_*_)\n";
        default:
            return "";
        }
    }

    std::string N(char c) {
        switch(c) {
        case '1':
            return ",";
        case '2':
            return ".";
        case '3':
            return "_";
        default:
            return " ";
        }
    }

    std::string LR(char c) {
        switch(c) {
        case '1':
            return ".";
        case '2':
            return "o";
        case '3':
            return "O";
        case '4':
            return "-";
        default:
            return " ";
        }
    }

    std::string X(char c) {
        switch(c) {
        case '1':
            return "<";
        case '2':
            return "\\";
        case '3':
            return "/";
        default:
            return "";
        }
    }

    std::string Y(char c) {
        switch(c) {
        case '1':
            return ">";
        case '2':
            return "/";
        case '3':
            return "\\";
        default:
            return "";
        }
    }

    std::string T(char c) {
        switch(c) {
        case '1':
            return " : ";
        case '2':
            return "] [";
        case '3':
            return "> <";
        default:
            return "   ";
        }
    }

    std::string B(char c) {
        switch(c) {
        case '1':
            return " : ";
        case '2':
            return "\\ \\";
        case '3':
            return "___";
        default:
            return "   ";
        }
    }

    std::string snowman(unsigned int id) {

        std::string seq = std::to_string(id);
        std::string result = "";

        // checking if length of id is 8
        if(seq.length() != 8) {
            // Exception
            return "";
        }

        // checking if the id contains only 1-4 digits
        for(int i = 0; i < 8; i++) {
            if((int)(seq[i]) < 1 || (int)(seq[i]) > 4) {
                // Exception
                //return "";
            }
        }


        // HNLRXYTB

        result.append(H(seq[0]));

        result.append(X(seq[4]) + "(");
        result.append(LR(seq[2]));
        result.append(N(seq[1]));
        result.append(LR(seq[3]));
        result.append(")" + Y(seq[5]) + "\n");

        result.append(X(seq[4]) + "(");
        result.append(T(seq[6]));
        result.append(")" + Y(seq[5]) + "\n");

        result.append("(" + B(seq[7]) + ")");

        
        return result;
    }
};
