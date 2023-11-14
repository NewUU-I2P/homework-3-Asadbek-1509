#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    std::string first_octet = macAddress.substr(0, 8);

    std::stringstream ss;
    ss << std::hex << first_octet;
    unsigned int octect = 0;
    ss >> octect;

    if (octect % 2 == 0) {
        return "Unicast" ;
    } else if (octect == 255) {
        return "Broadcast" ;
    } else {
        return "Multicast" ;
    }
}

