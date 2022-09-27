#include"STD_TYPES.h"
#include"UART.h"
#include"GPS_DRV.h"

uint8 GPS_latitude[12];
uint8 GPS_longitude[12];
uint8 LatAlt[12]={'3','1','.','2','0','5','6','3','5',' ','N',' '};
uint8 LongAlt[12]={'2','9','.','9','2','4','8'  ,'7','6',' ','E',' '};


void GPS_Receive(void)
{

    uint8 x = 0, i = 0;
    while (1)
    {
        x = UART_Receive(UART_MODULE);
        if (x == '$')
        {
            x = UART_Receive(UART_MODULE);
            if (x == 'G')
            {
                x = UART_Receive(UART_MODULE);
                if (x == 'P')
                {
                    x = UART_Receive(UART_MODULE);
                    if (x == 'G')
                    {
                        x = UART_Receive(UART_MODULE);
                        if (x == 'G')
                        {
                            x = UART_Receive(UART_MODULE);
                            if (x == 'A')
                            {

                                x = UART_Receive(UART_MODULE);
                                if (x == ',')
                                {
                                    x = UART_Receive(UART_MODULE);
                                    while (x != ',')
                                    {
                                        x = UART_Receive(UART_MODULE);
                                    }

                                    GPS_latitude[0] = UART_Receive(UART_MODULE);

                                    x = GPS_latitude[0];
                                    i = 1;
                                    while (x != ',')
                                    {
                                        x = UART_Receive(UART_MODULE);
                                        if (x != ',')
                                        {
                                            GPS_latitude[i] = x;
                                            i++;

                                        }

                                    }
                                    x = UART_Receive(UART_MODULE);
                                    GPS_latitude[i + 1] = x;
                                    x = UART_Receive(UART_MODULE);
                                    //longitude
                                    i = 1;
                                    x = UART_Receive(UART_MODULE);
                                    x = UART_Receive(UART_MODULE);
                                    GPS_longitude[0] = x;
                                    while (x != ',')
                                    {
                                        x = UART_Receive(UART_MODULE);
                                        if (x != ',')
                                        {
                                            GPS_longitude[i] = x;
                                            i++;

                                        }

                                    }
                                    x = UART_Receive(UART_MODULE);
                                    GPS_longitude[i + 1] = x;
                                    i = 0;
                                    break;
                                }

                            }
                        }
                    }
                }
            }
        }
    }
    if(GPS_latitude[0]>='0'&&GPS_latitude[0]<='9') {

    }else{
        uint8 m=0;
        for(m=0;m<12;m++)
        {
            GPS_latitude[m]=LatAlt[m];
            GPS_longitude[m]=LongAlt[m];
        }
    }



}
