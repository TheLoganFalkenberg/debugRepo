

#include "main.h"

int main(int argc, char *argv[]) {
    std::cout << "My Command line analyzer..." << std::endl;
    std::cout << "The number of command line parameters are: " << argc << std::endl;

    if(argc > 1){
        std::cout << "The length of the first parameter is " << string_length(argv[1]) << std::endl;
    }

    return 0;
}
