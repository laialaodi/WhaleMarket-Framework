#ifndef _COLOR_H_
#define _COLOR_H_

#include <string>

// Only Effective for Linux / Unix

/** Reset all the Attributes */
extern const std::string  RESET;

/** Set Font Color
 * Format: "\033[BackColor;FrontColormString\033[0m"
 */
extern const std::string  FRONT_BLACK;
extern const std::string  FRONT_RED;
extern const std::string  FRONT_GREEN;
extern const std::string  FRONT_YELLOW;
extern const std::string  FRONT_BLUE;
extern const std::string  FRONT_PURPLE;
extern const std::string  FRONT_DARKGREEN;
extern const std::string  FRONT_WHITE;

extern const std::string  BACK_BLACK;
extern const std::string  BACK_RED;
extern const std::string  BACK_GREEN;
extern const std::string  BACK_YELLOW;
extern const std::string  BACK_BLUE;
extern const std::string  BACK_PURPLE;
extern const std::string  BACK_DARKGREEN;
extern const std::string  BACK_WHITE;

/** Set Font Effect */
extern const std::string  BOLD;
extern const std::string  UNDERLINE;
extern const std::string  TWINKLING;
extern const std::string  REVERSE;
extern const std::string  HIDE;

#endif
