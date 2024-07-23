#include <iostream>
#include "tools/hint.h"
#include "tools/color.h"

static const std::string BANNER = "\
\t__          ___           _          __  __            _        _       _\n\
\t\\ \\        / / |         | |        |  \\/  |          | |      | |     | |\n\
\t \\ \\  /\\  / /| |__   __ _| | ___    | \\  / | __ _ _ __| | _____| |_    | |\n\
\t  \\ \\/  \\/ / | '_ \\ / _` | |/ _ \\   | |\\/| |/ _` | '__| |/ / _ \\ __|   | |\n\
\t   \\  /\\  /  | | | | (_| | |  __/   | |  | | (_| | |  |   <  __/ |_    |_|\n\
\t    \\/  \\/   |_| |_|\\__,_|_|\\___|   |_|  |_|\\__,_|_|  |_|\\_\\___|\\__|   (_)\n\
";

void welcomeMessage()
{
    // printf("\n%s%sWelcome to%s\n", BOLD, FRONT_RED, RESET);
    std::cout << std::endl << BOLD << FRONT_RED << "Welcome to" << RESET << std::endl;
    // printf("%s%s%s%s\n", FRONT_BLUE, BOLD, BANNER, RESET);
    std::cout << FRONT_BLUE << BOLD << BANNER << RESET << std::endl;
    // printf("%sThis is WinterCode Project for C-Beginners.%s\n\n", FRONT_PURPLE, RESET);
    std::cout << FRONT_PURPLE << "This is WinterCode Project for C-Beginners." << RESET << std::endl << std::endl;
}
