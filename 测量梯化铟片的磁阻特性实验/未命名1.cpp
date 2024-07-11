#include <stdio.h>

int main(){
	double R,R0,L,k;
	scanf("%lf",&L);
	R=((100-L)/L)*400;
	R0=R;
	k=(R-R0)/R0;
	printf("电阻R = %lf,电阻变化率k = %lf\n",R,k);
	while(L!=-1){
		scanf("%lf",&L);
		R=((100-L)/L)*400;
		k=(R-R0)/R0;
		printf("电阻R = %lf,电阻变化率k = %lf\n",R,k);
	}
	return 0;
}
