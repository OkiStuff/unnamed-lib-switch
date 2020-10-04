#define BLK         "\x1b[30m"
#define RED         "\x1B[31m"
#define GRN         "\x1B[32m"
#define YEL         "\x1B[33m"
#define BLU         "\x1B[34m"
#define MAG         "\x1B[35m"
#define CYN         "\x1B[36m"
#define WHT         "\x1B[37m"

#define BRIGHT_BLK  "\x1b[90m"
#define BRIGHT_RED  "\x1B[91m"
#define BRIGHT_GRN  "\x1B[92m"
#define BRIGHT_YEL  "\x1B[93m"
#define BRIGHT_BLU  "\x1B[94m"
#define BRIGHT_MAG  "\x1B[95m"
#define BRIGHT_CYN  "\x1B[96m"
#define BRIGHT_WHT  "\x1B[97m"

#define WITH_BLK    "30m"
#define WITH_RED    "31m"
#define WITH_GRN    "32m"
#define WITH_YEL    "33m"
#define WITH_BLU    "34m"
#define WITH_MAG    "35m"
#define WITH_CYN    "36m"
#define WITH_WHT    "37m"
#define WITH_RESET  "0m"

#define RED_BKG     "\033[1;41;"
#define GRN_BKG     "\033[1;42;"
#define YEL_BKG     "\033[1;43;"
#define BLU_BKG     "\033[1;44;"
#define MAG_BKG     "\033[1;45;"
#define CYN_BKG     "\033[1;46;"
#define WHT_BKG     "\033[1;47;"
#define RESET_BKG   "\033[1;0;"

struct COLOR 
{
    char COLOR [500];
    char WITH_COLOR [500];
    char COLOR_BKG [500];
} COLOR;