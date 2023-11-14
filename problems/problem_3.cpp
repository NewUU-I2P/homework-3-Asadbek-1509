#include <string>

std::string problemSolution3(float height, char sex) {

    std::string result;


    if (sex == 'M') {
        if (height < 1.70) {
            result = "Short";
        } else if (height >= 1.70 && height < 1.85) {
            result = "Normal";
        } else if (height >= 1.85) {
            result = "Tall";
        }
    }

    else if (sex == 'F') {
        if (height < 1.60) {
            result = "Short";
        } else if (height >= 1.60 && height < 1.75) {
            result = "Normal";
        } else if (height >= 1.75) {
            result = "Tall";
        }
    }


    return result;

}















