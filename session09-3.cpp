#include<stdio.h>
int main(){
	int a[100];
	int n;
	printf("nhap so phan tu muon nhap(0 den 100): ");
	scanf("%d",&n);
	if(n>0&&n<=100){
		for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d, ",i+1);
		scanf("%d",&a[i]);
		}
		printf("mang sau khi nhap: ");
		for(int i=0;i<n;i++){
			printf("%d, ",a[i]);
		}
		printf("\n");
	int xoa;
	printf("moi nhap vi tri can xoa(0-%d): ",n-1);
	scanf("%d",&xoa);
		if(xoa >= 0 && xoa<n){
			for(int i=xoa;i<n-1;i++){
					a[i]=a[i+1];
			}
		
		n--;
		printf("mang sau khi xoa\n");
		for(int i =0;i<n;i++){
			printf("%d, ",a[i]);
		}
		printf("\n");
	}
	else{
		printf("vi tri ko hop le\n");
	}
}
	else{
		printf("so luong ptu ko hop le");
	}
	

	
	
	return 0; 
} 
