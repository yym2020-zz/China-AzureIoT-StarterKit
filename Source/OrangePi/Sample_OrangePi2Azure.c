//By Microsoft DX and Orange Pi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <OrangePi2Azure.h>

const char *connect = "HostName=xxx.azure-devices.net;DeviceId=xxx";

int main()
{
    OrangePi_Update_Azure_Key(connect);
    OrangePi2Azure("rgbled","255");
    return 0;
}
