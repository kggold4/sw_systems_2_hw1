#include <string>

namespace ariel {
    std::string snowman(unsigned int id) {

        std::string seq = std::to_string(id);
        std::string result = "";

        for(int i = 0; i < 8; i++) {
            switch (seq[i]) {
            case 1:

                if(i == 0) result += "_===_\n";
                else if(i == 1) result += ",";
                else if(i == 2 || i == 3) result += ".";
                else if(i == 4) result += "<";
                else if(i == 5) result += ">\n";
                else if(i == 6) result += ": ";
                else result += ": ";
                
                break;

            case 2:
                /* code */
                break;

            case 3:
                /* code */
                break;

            case 4:
                /* code */
                break;
            
            default:
                break;
            }
        }
        

        
        
        return seq;
    }
};