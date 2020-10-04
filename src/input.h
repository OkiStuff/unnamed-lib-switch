#include <switch.h>

bool UP()
{
    if (KEY_UP) return true;
    else return false;
    
}
bool RIGHT()
{
    if (KEY_RIGHT) return true;
    else return false;
}
bool LEFT()
{
    if (KEY_LEFT) return true;
    else return false;
}
bool DOWN()
{
    if (KEY_DOWN) return true;
    else return false;
}

void INPUT_UPDATE()
{
    hidScanInput();
}

bool CHECK_INPUT(HidControllerKeys key)
{
    if (key) return true;
    else return false;
}