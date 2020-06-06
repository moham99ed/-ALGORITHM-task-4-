#include <stdio.h>
#include <stdlib.h>
int optimal_Profit(int price[], int start, int end)
{
int profit,optimal_profit= 0;
    int i,j;
    int f1=i,f2=j;
    if(end<=1){
        printf("there is no options\n");
         return 0;
    }
    if (end <= start)
        return 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {

             profit = price[j] - price[i] ;
             f1=i,f2=j;
            if (profit > optimal_profit&&f2>f1){

               optimal_profit=profit;
            }
        }
    }

    return optimal_profit;
}


int main()
{
int x=0;
printf("enter number of days : ");
scanf("%d",&x);
printf("enter offered price sir:\n");
int price[x];
for(int i=0;i<x;i++){
    scanf("%d",&price[i]);
   }

printf("optimal profit=%d",optimal_Profit(price,0,x-1));
}
