#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include <math.h>

long long int ans(long long int n){
    long long int j,an=0;
    for(int i=0; i<=n; i=i+5){
        j=i;
        while(j%5==0 && j!=0){
            j=j/5;
            an=an+1;
        }
    }
    return an;
}

long long answer (int N ) {
    long long int n=N*5;
    long long int low=1, high=n;
    long long int mid;
    while(low<=high)
   {
     mid=(low+high)/2;
     if(ans(mid)<N)
     {
         low=mid+1;
     }
     else if(ans(mid)>N)
     {
         high=mid-1;
     }
     else
     {
         return mid-(mid%5);
     }
   }
   return mid-(mid%5);

}

int main() {
    int T;
    scanf("%d", &T);
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        scanf("%d", &N);

        long long out_ = answer(N);
        printf("%lld", out_);
        printf("\n");
    }
}
