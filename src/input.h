#include "C:\devkitPro\libnx\include\switch.h"


// D-Pad Up/Joystick Up - Common Function
bool HID_UP(u64 isHidDown)
{
    if (isHidDown & KEY_UP) return true;
    else return false;
    
}

// D-Pad Right/Joystick Right - Common Function
bool HID_RIGHT(u64 isHidDown)
{
    if (isHidDown & KEY_RIGHT) return true;
    else return false;
}

// D-Pad Left/Joystick Left - Common Function
bool HID_LEFT(u64 isHidDown)
{
    if (isHidDown & KEY_LEFT) return true;
    else return false;
}

// D-Pad Down/Joystick Down - Common Function
bool HID_DOWN(u64 isHidDown)
{
    if (isHidDown & KEY_DOWN) return true;
    else return false;
}

// Update Input (run this every frame in appletMainLoop() loop)
void INPUT_UPDATE()
{
    hidScanInput();
}

// Returns True if key specified is pressed.. else returns else
bool CHECK_INPUT(u64 isHidDown, HidControllerKeys key)
{
    if (isHidDown & key) return true;
    else return false;
}

// Get the hidKeysDown Object
u64 GetHidDownInterface(HidControllerID id) 
{
     return hidKeysDown(id);
}