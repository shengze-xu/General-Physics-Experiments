#include <stdio.h>

int main(){
	double ux[10],uy[10];
	double hm[10],bm[10];
	double ua[10];
	double h0=8.97,b0=0.0212,u0;
	u0=4*3.14159*0.0000001;
	for(int i=0;i<10;i++){
		scanf("%lf",&ux[i]);
		hm[i]=h0*ux[i];
	}
	for(int i=0;i<10;i++){
		scanf("%lf",&uy[i]);
		bm[i]=b0*uy[i];
	}
	for(int i=0;i<10;i++){
		ua[i]=bm[i]/(hm[i]*u0);
	}
	for(int i=0;i<10;i++){
		printf("Hm[%2d] = %5.1lf, Bm[%2d] = %4.3lf, ua[%2d] = %5.0lf\n",i+1,hm[i],i+1,bm[i],i+1,ua[i]);
	}
	return 0;
}
