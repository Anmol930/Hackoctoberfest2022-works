#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],d[3][3],e[3][3],f[3][3];
    int i,j,k,sum;
    sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nenter the value = ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrics 1 is = \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
            }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nenter the value = ");
            scanf("%d",&b[i][j]);
        }
    }
     printf("matrics 2 is = \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",b[i][j]);
            }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                sum += a[i][k]*b[k][j];
                c[i][j]=sum;
            }
            sum = 0;
        }
    }
    printf("multiplication of 2 matrices is = \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    printf("transpose of matric 1 = \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            d[j][i]=a[i][j];
        }
    }
   for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",d[i][j]);
        }
        printf("\n");
    } 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            e[j][i]=b[i][j];
        }
    }
     printf("transpose of matric 2 = \n");
   for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",e[i][j]);
        }
        printf("\n");
    }
    printf("sum of 2 matrics = \n");
    int sum1=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum1 = a[i][j]+b[i][j];
            f[i][j]=sum1;
        }
        sum1 = 0;
    }
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",f[i][j]);
        }
        printf("\n");
    }
    return 0;
}