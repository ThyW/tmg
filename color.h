// https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a

/*
 * This is free and unencumbered software released into the public domain.
 *
 * For more information, please refer to <https://unlicense.org>
 */

//Regular text
#define BLK "\033[0;30m"
#define RED "\033[0;31m"
#define GRN "\033[0;32m"
#define YEL "\033[0;33m"
#define BLU "\033[0;34m"
#define MAG "\033[0;35m"
#define CYN "\033[0;36m"
#define WHT "\033[0;37m"

//Regular bold text
#define BBLK "\033[1;30m"
#define BRED "\033[1;31m"
#define BGRN "\033[1;32m"
#define BYEL "\033[1;33m"
#define BBLU "\033[1;34m"
#define BMAG "\033[1;35m"
#define BCYN "\033[1;36m"
#define BWHT "\033[1;37m"

//Reset
#define reset "\033[0m"

#define TRACE MAG "[TRACE]" reset
#define INFO CYN "[INFO]" reset
#define ERR RED "[ERROR]" reset
#define WARN YEL "[WARN]" reset
#define OK BGRN "[✓]" reset
#define NOK BRED "[x]" reset
