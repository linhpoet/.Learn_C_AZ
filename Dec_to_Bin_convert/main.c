#include <stdio.h>
#include <stdint.h>

uint32_t dec;
char bin[] = {};

int main()
{   while (1)
    {
        printf ("nhap so thap phan: ");
        fflush(stdin);
        scanf ("%d",&dec);
        Bin_Convert(dec);
        for(int i=31;i>=0;i--) printf("%d",bin[i]);
        printf("\n");
        Bin_Conver_use_bitmask(dec);
        for(int i=31;i>=0;i--) printf("%d",bin[i]);
        printf("\n\n");
    }
    return 0;
}

void Bin_Conver_use_bitmask(uint32_t dec)
{
    for(int i=0; i<32; i++)
    {
        if(dec & 0x01 == 1)
        {
            bin[i] = 1;
        }else
        {
            bin[i] = 0;
        }
        dec = dec>>1;
    }
}

void Bin_Convert(uint32_t dec)
{
    uint32_t somu = 1;
    for(int i=31; i>=0; i--)
    {
        /*tinh 2^i*/
        for(int m=1; m<=i; m++) somu = somu*2;
        if (dec>=somu)
        {
            bin[i] = 1;
            dec = dec - somu;
            somu = 1;
        } else
        {
            bin[i]=0;
            somu = 1;
        }
    }
}

void Dec_to_Hex(uint32_t dec)
{

}
