#include <stdio.h>

int main(){
	double R,R0,L,k;
	scanf("%lf",&L);
	R=((100-L)/L)*400;
	R0=R;
	k=(R-R0)/R0;
	printf("����R = %lf,����仯��k = %lf\n",R,k);
	while(L!=-1){
		scanf("%lf",&L);
		R=((100-L)/L)*400;
		k=(R-R0)/R0;
		printf("����R = %lf,����仯��k = %lf\n",R,k);
	}
	return 0;
}
