#include<stdio.h>


void point(int *a){

	printf("%p,%d",*a,&a);
}

int main(){
	int a[10];
	int i;

	for(i=0;i<10;i++){
		point(a[i]);

	}

	return 0;
}
