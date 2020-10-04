#include "../../src/unnamed.h"
#include <time.h>

void delay(unsigned int secs) {
    unsigned int retTime = time(0) + secs;
    while (time(0) < retTime);
}


int main(int argc, char **argv)
{
    InitWindowNULL();

    DrawText(BLU "Hello, World", 1, 1);

    while(appletMainLoop())
    {
        INPUT_UPDATE();

        u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);

        if (kDown & UP()) break;

        UpdateNULL();
    }


    ExitNULL();
    return 0;
}