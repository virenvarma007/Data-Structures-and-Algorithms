#include <stdio.h>
#include <math.h>

int main(){
    long long int t,i,j,l,r,s,m,n;
	scanf("%lld",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%lld %lld %lld",&l,&r,&s);
		if(l>r)
		{
			printf("-1 -1\n");
		}
		else
		{
			if(l%s==0)
				m = l/s;
			else
				m = (l/s)+1;
			n = r/s;
		}
		if(n==0 || m==0 || m>n)
			printf("-1 -1\n");
		else
			printf("%lld %lld\n",m,n);
	}

}
