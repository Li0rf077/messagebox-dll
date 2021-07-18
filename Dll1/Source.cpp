#include <winuser.h>
#include "pch.h"
#include "malicious.h"

// DLL internal state variables:
static unsigned long long previous_;  // Previous value, if any
static unsigned long long current_;   // Current sequence value
static unsigned index_;               // Current seq. position

void msg()
{
    int msgboxID = MessageBox(
        NULL,
        (LPCWSTR)L"yeah!",
        (LPCWSTR)L"Execution Succeeded",
        MB_OK | MB_DEFBUTTON1 | MB_ICONASTERISK
    );
}