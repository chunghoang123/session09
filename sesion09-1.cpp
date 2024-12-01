#include<stdio.h>
int main(){
	// khai bao mang va bien
	int a[100];
	int i;
	int n;//gia tri nhap vao
	int value;//gia tri thay the
	int vitri;
	// kiem tra pt nhap co hop le
	printf("moi nhap phan tu muon nhap toi da(100): ");
	scanf("%d",&n);
	if(n>100||n<1){
		printf("phan tu ko hop le\n");
			return 1;
	}
	// nhap pt vao mang
	printf("moi nhap pt muon nhap vao mang\n");
	for(i=0;i<n;i++){
		printf("pt thu %d: ",i +1);
		scanf("%d",&a[i]);
	}
	//nhap gia tri cua value va vitri
	printf("nhap gia tri muon them: ");
	scanf("%d",&value);
	printf("nhap vi tri muon them : ");
	scanf("%d",&vitri);
	vitri-=1;
	// kiem tra vi tri co hop le 
	if(vitri<0||vitri>n){
		printf("vi tri ko hop le");
		}
		else{
		for(i=n;i>vitri;i--){
			a[i]=a[i-1];
			
		}
		a[vitri]=value;
			n++;
			printf("mang sau khi them ptu:\n");
			for(i=0;i<n;i++){
				printf("%d",a[i]);
			}
			printf("\n");
			
			
	}
	return 0;
}

	
	

	


