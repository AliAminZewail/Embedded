#include"STD_TYPES.h"
#include"GPIO_DRV.h"

void _delay_ms(uint32 n)
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < 3180; j++)
        {
        } /* do nothing for 1 ms */
}

int main(void)
{

    GPIO_PIN_INIT(PF, PIN1, Out, I_4mA);
    GPIO_PIN_INIT(PF, PIN2, Out, I_4mA);
    GPIO_PIN_INIT(PF, PIN3, Out, I_4mA);

    while (1)
    {
        //red
        GPIO_WRITE_PORT(PF, 0b00000010);
        _delay_ms(1000);
        //blue
        GPIO_WRITE_PORT(PF, 0b00000100);
        _delay_ms(1000);
        //green
        GPIO_WRITE_PORT(PF, 0b00001000);
        _delay_ms(1000);

    }

    return 0;
}

