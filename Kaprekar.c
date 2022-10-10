
#include <stdio.h>
#include <math.h>
int func();
int main()
{   long int x,n;
    scanf("%ld",&x);
    n=pow(x,2);
    if (x<0){
        printf("Wrong Input");
    }
    else if (func(n,x)==1){
        return 1;
    }
    else
        printf("Not Kaprekar");

    return 0;
}

int func(int n,int x){
    long int pl,a,i,b,sum,flag;
    pl=(int)(log10(n))+1;
    for (i=0;i<pl;i++){
        b=n%((int)(pow(10,i)));
        a=n/((int)(pow(10,i)));
       // printf("%ld\n",a);
      //  printf("%ld\n",b);
        if(a+b==x && x!=1){
            printf("%ld + %ld = %d",a,b,x);
            return 1;
        }
        else if(x==1){
            printf("%ld + %ld = %d",b,a,x);
            return 1;
        }
        
    }
    return 0;
}