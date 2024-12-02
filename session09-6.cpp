#include <stdio.h>

int main() {
    int b, c, d, a[100][100], sum=0, maxsum=0, maxb;
    
    do {
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In cac gia tri theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va chan\n");
        printf("4. In cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu lon nhat\n");
        printf("8. Thoat\n");
        printf("Moi ban nhap lua chon: ");
        scanf("%d", &d);
        
        switch (d) {
            case 1:
                printf("Moi ban nhap so hang: ");
                scanf("%d", &b);
                printf("Moi ban nhap so cot: ");
                scanf("%d", &c);
                
                for (int i = 0; i < b; i++) {
                    for (int j = 0; j < c; j++) {
                        printf("Moi ban nhap gia tri phan tu [%d][%d]: ", i + 1, j + 1);
                        scanf("%d", &a[i][j]);
                    }
                }
                break;
                
            case 2:
                for (int i = 0; i < b; i++) {
                    for (int j = 0; j < c; j++) {
                        printf("%d ", a[i][j]);
                    }
                    printf("\n");
                }
                break;
                
            case 3:
                printf("Cac phan tu la so le: ");
                for (int i = 0; i < b; i++) {
                    for (int j = 0; j < c; j++) {
                        if (a[i][j] % 2 != 0) {
                            printf("%d ", a[i][j]);
                        }
                    }
                }
                printf("\nCac phan tu la so chan: ");
                for (int i = 0; i < b; i++) {
                    for (int j = 0; j < c; j++) {
                        if (a[i][j] % 2 == 0) {
                            printf("%d ", a[i][j]);
                        }
                    }
                }
                printf("\n");
                break;
            case 4:
            	if (b<=1 && c<=1)
				{
					printf ("cac phan tu nam tren duong bien :");
			      for (int i=0; i<c; i++)
			     {
			    	printf ("%d ",a[0][i]); 
				 }
				 } else 
				 {
				 	printf ("cac phan tu nam tren duong bien :");
			     for (int i=0; i<c; i++)
			     {
			    	printf ("%d ",a[0][i]); 
				 }
				 for (int j=0; j<b-1; j++)
			     {
			    	printf ("%d ",a[j][c-1]);
			     }
				 for (int i=0; i<c; i++)
			     {
			    	printf ("%d ",a[b-1][i]);
			     }
				 for (int i=0; i<b-1; i++)
				 {
					printf ("%d ",a[i][0]); 
				 }
				  } 
			    
				printf ("\n");
				break; 
			case 5:
			    if (b==c)
				{
				 	printf ("cac phan tu tren duong cheo chinh :");
					for (int i=0; i<b; i++)
					{
						printf ("%d ",a[i][i]); 
					} 
				} else
					{
						printf ("khong hop le"); 
					 } 
					 printf ("\n");
				break;
			case 6:
				 if (b==c)
				{
				 	printf ("cac phan tu tren duong cheo chinh :");
					for (int i=0; i<b; i++)
					{
						printf ("%d ",a[i][b-1-i]); 
					} 
				} else
					{
						printf ("khong hop le"); 
					 } 
					 printf ("\n");
				break;
			case 7:
			  for (int i = 0; i < b; i++) {
                    for (int j = 0; j < c; j++) {
                        sum +=a[i][j]; 
                    }
                  if (sum > maxsum)
				  {
				  	maxsum=sum;
					  maxb=i; 
				   } 
                }
                for (int i=0; i<b; i++)
				{
					printf ("%d ", a[maxb][i]); 
				 } 
				 printf ("\n"); 
				 break; 
            case 8:
               return 1; 
            default:
                printf("Lua chon khong hop le.\n");
                break;
        }
    } while (d>0 && d<9);
    
    return 0;
}

