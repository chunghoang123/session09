#include<stdio.h>
int main(){
	int n,b;
	int a[50];
	do{
	printf("MENU\n");
	printf("1.nhap vao mang\n");
	printf("2.hien thi mang\n");
	printf("3.them phan tu\n");
	printf("4.sua phan tu\n");
	printf("5.xoa phan tu\n");
	printf("6.thoat\n");
	scanf("%d",&n);	
	switch(n){
		case 1:
			printf("moi nhap kich thuoc mang: ");
			scanf("%d",&b);
			for(int i=0;i<b;i++){
				printf("gia tri thu %d cua mang",i+1);
				scanf("%d",&a[i]);
			}
			break;
		case 2:
			printf("mang: ");
			for(int i=0;i<b;i++){
				printf("%d, ",a[i]);
			}
			printf("\n");
			break;
		case 3:
			int m,addindex;
			printf("moi nhap gia tri muon them");
			scanf("%d",&m);
			printf("moi nhap vi tri(0-%d)",b-1);
			scanf("%d",&addindex);
			if(addindex<0||addindex>b){
				printf("vi tri ko hop le\n");
			}
			else{
				for(int i=b;i>addindex;i--){
					a[i]=a[i-1];
				}
				a[addindex]=m;
				b++;
				for(int i=0;i<b;i++){
					printf("%d, ",a[i]);
				}
				printf("\n");
			}
			break;
		case 4:
			m=0;
			addindex=0;
			printf ("moi ban nhap gia tri muon sua :");
			scanf("%d",&m);
			printf ("moi ban nhap vi tri muon sua :");
			scanf ("%d",&addindex);
			 if (addindex<0 || addindex > b){
	  	  printf ("khong hop le\n"); 
	    } else{
			for (int i=0; i<=addindex-1; i++){
				a[i]=a[i];  
			} 
			a[addindex-1] = m;
			for (int i=0; i<b; i++){
			  printf ("%d ",a[i]); 
			} 
			printf ("\n");
		}
		break;
		case 5:
		   addindex=0; 
		   printf ("moi ban nhap vi tri muon xoa :");
		   scanf ("%d",&addindex);
		    if (addindex<0 || addindex > b)
		    {
		  	  printf ("khong hop le\n"); 
		    } else
			{
				for (int i=addindex-1; i<b; i++)
				{
					a[i]=a[i+1];  
				}
				b--; 
				for (int i=0; i<b; i++)
				{
				  printf ("%d ",a[i]); 
				} 
				printf ("\n");
			}
			break;
		case 6:
			return 1; 
			default:
				printf ("khong hop le");
				break;	
	}
}while(n>0 && n<7);
	
	
	
	
	return 0;
}
