#include<stdio.h>
int main(){
	int n,moi;
	int a[]={1,2,3,4,5,6};
	int size=sizeof(a)/sizeof(a[0]);
	printf("mang:");
	for(int i=0;i<size;i++){
		printf("%d,",a[i]);
	}
	printf("\nmoi nhap vi tri can sua: ");
	scanf("%d",&n);
	if(n>=0&&n<size){
		printf("nhap gia tri moi: ");
		scanf("%d",&moi);
		a[n]=moi;
		printf("mang sau khi sua");
		for(int i =0;i<size;i++){
			printf("%d,",a[i]);
		}
		printf("\n");
	}
	else{
		printf("vi tri mang ko hop le");
}
	return 0;
} 
