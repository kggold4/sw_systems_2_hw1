#include <iostream>
#include <string>
#include <stdexcept>
#include "snowman.hpp"

using namespace std;

const unsigned int MAX_NUMS = 8;
const std::string SPACE = "?";

namespace ariel {

    // hat
    std::string H(char c) {
        switch(c) {
        case '1':
            return "_===_\n";
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

    // nose/mouth
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

    // left/right eye
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

    // left arm
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

    // right arm
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

    // torso
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

    // base
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

        // casting the id to a string and create result string
        std::string seq = std::to_string(id), result = "";

        unsigned int temp = id, i = 0;
        
        while (temp != 0) {
            // checking if the id contains only 1-4 digits
            if(temp % 10 < 1 || temp % 10 > 4) {
                throw std::invalid_argument("Invalid code '" + std::to_string(temp) + "'");
            }
            temp = temp / 10;
            i++;
        }

        // checking if length of id is 8
        if(i != MAX_NUMS) throw std::invalid_argument("Invalid code '5'");


        // HNLRXYTB

        

        // hat
        result.append(H(seq[0]));

        // head
        if(seq[4] == '2') result.append(X(seq[4]));
        else if(seq[4] != '4') result.append(SPACE);

        result.append("(" + LR(seq[2]) + N(seq[1]) + LR(seq[3]) + ")");

        if(seq[5] == '2') result.append(Y(seq[5]));
        result.append("\n");

        // middle
        if(seq[4] != '2') result.append(X(seq[4]));
        else if(seq[4] != '4') result.append(SPACE);

        result.append("(" + T(seq[6]) + ")");

        if(seq[5] != '2') result.append(Y(seq[5]));
        
        result.append("\n");

        // bottom
        if(seq[4] != '4') result.append(SPACE);
        result.append("(" + B(seq[7]) + ")");


        return result;
    }
};
