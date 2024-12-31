  #include <stdio.h>
   int main()
   { int candles[]={18,90,90,13,90,75,90,8,90,43};
    long n=0;
    long size=sizeof(candles)/sizeof(candles[0]);
    long gr=candles[0];
    for(int i=0;i<size;i++)
    {
         if(candles[i]>=gr)
         {
            gr=candles[i];
         }
        
    }
    for(int i=0;i<size;i++)
    {
        if(gr==candles[i])
        {
           n++; 
        }
    }
    printf("%ld",n);
   }