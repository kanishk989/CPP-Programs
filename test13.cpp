#include<stdio.h>
#include<stdlib.h>

int main(){
    int i,j,r1,r2,c1,c2,d;
    system("cls");
    printf("Enter the rows and columns of 1st matrix: \n");
    scanf("%d%d",&r1,&c1);
    int a[r1][c1];
    for(i=0;i<r1;++i){
        for(j=0;j<c1;++j){
            printf("Enter the value of matix[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the rows and columns of 2nd matrix: \n");
    scanf("%d%d",&r2,&c2);
    int b[r2][c2];
    for(i=0;i<r2;++i){
        for(j=0;j<c2;++j){
            printf("Enter the value of matix[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int e=0;;){
        printf("Which operation you want to do: \n1.Addition  2.Subtraction  3.Multiplication  4.Transpose  5.Exit\n");
        scanf("%d",&d);
        switch(d){
            case 1:
            if(r1==r2 && c1==c2){
                printf("Addition: \n");
                int c[r1][c1];
                for(i=0;i<r1;++i){
                    for(j=0;j<c1;++j){
                        printf("%d ",c[i][j]=(a[i][j]+b[i][j]));
                    }
                    printf("\n");
                }
            }else{
                printf("Addition not possible because in matrix 1 %dx%d is not equal to matrix 2 %dx%d.",r1,c1,r2,c2);
            }break;
            case 2:
            if(r1==r2 && c1==c2){
                printf("Subtraction: \n");
                int c[r1][c1];
                for(i=0;i<r1;++i){
                    for(j=0;j<c1;++j){
                        printf("%d ",c[i][j]=(a[i][j]-b[i][j]));
                    }
                    printf("\n");
                }
            }else{
                printf("Subtraction not possible because in matrix 1 %dx%d is not equal to matrix 2 %dx%d.",r1,c1,r2,c2);
            }break;
            case 3:
            printf("How you want to multiply: \n1.AxB  2.BxA\n");
            scanf("%d",&d);
            switch(d){
                case 1:
                if(c1==r2){
                    printf("Multiplication of AxB: \n");
                    int mul[5][5];
                    for(i=0;i<r1;++i){
                        for(j=0;j<c2;++j){
                            mul[i][j]=0;
                            for(int k=0;k<c1;++k){
                                mul[i][j]+=(a[i][k]*b[k][j]);
                            }
                        }
                    }
                    for(i=0;i<r1;++i){
                        for(j=0;j<c2;++j){
                            printf("%d ",mul[i][j]);
                        }
                        printf("\n");
                    }
                }else{
                    printf("Not valid");
                }break;
                case 2:
                if(c2==r1){
                    printf("Multiplication of BxA: \n");
                    int mul[5][5];
                    for(i=0;i<r2;++i){
                        for(j=0;j<c2;++j){
                            mul[i][j]=0;
                            for(int k=0;k<c1;++k){
                                mul[i][j]+=(b[i][k]*a[k][j]);
                            }
                        }
                    }
                    for(i=0;i<r2;++i){
                        for(j=0;j<c1;++j){
                            printf("%d ",mul[i][j]);
                        }
                        printf("\n");
                    }
                }else{
                    printf("Not valid");
                }break;
                default:
                printf("Invalid choice");
                break;
            }break;
            case 4:
            printf("Transpose of 1.A  2.B: \n");
            scanf("%d",&d);
            switch(d){
                case 1:
                int transpose[5][5];
                printf("Transpose of A: \n");
                for(i=0;i<r1;++i){
                    for(j=0;j<c1;++j){
                        transpose[j][i]=a[i][j];
                    }
                }
                for(i=0;i<c1;++i){
                    for(j=0;j<r1;++j){
                        printf("%d ",transpose[i][j]);
                    }
                    printf("\n");
                }break;
                case 2:
                int transpose[5][5];
                printf("Transpose of B: \n");
                for(i=0;i<r2;++i){
                    for(j=0;j<c2;++j){
                        transpose[j][i]=b[i][j];
                    }
                }
                for(i=0;i<c2;++i){
                    for(j=0;j<r2;++j){
                        printf("%d ",transpose[i][j]);
                    }
                    printf("\n");
                }break;
                default:
                printf("Invalid choice");
                break;
            }break;
            case 5:
            return 0;
            default:
            printf("Invalid choice!");
            break;
        }
    }
    return 0;
}