//Bibhashree Pradhan 
#include<stdio.h>
#define pin 1234
int main()
{
    int attempts=5;
    int p;
    for(int i=1; i<=attempts; i++) 
    {
        printf("Enter pin:");
        scanf("%d",&p);
        if(p==pin)
        {
            printf("log in successful");
            return 0;
        }
        else{
            printf("wrong password");
        };
        
        
       if(i == 3){  
          printf("reset password");
       };

        if(i==5){
            printf("account blocked");
        };
    }
      return 0;
  
}
 

     