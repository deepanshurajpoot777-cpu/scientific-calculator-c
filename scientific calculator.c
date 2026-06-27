#include <stdio.h>
#include <math.h>
#define pi 3.14159265359

int main() {
    int  d,ope;
    float a,b,c;

    while(1) {
        printf("\n==== Calculator Menu ====\n");
        printf("1. Sum\n2. Subtraction\n3. Division\n4. Multiplication\n");
        printf("5. Square Root\n6. Square\n7. Factorial\n8.sin(c)\n9.cos(c)\n10.tan(c)\n11.sec(c)\n12.cosec(c)\n13.cot(c)\n14.e^x\n15.ln(c)\n16.log(c)\n17.a^b\n18.temp converter(fahrenheit-centigerate)\n19.matrix(ADDITION)\n20.matrix(SUBTRACTION)\n21.matrix(MULTIPLICATION)\n22.quadtratic( 2 roots)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ope);

        if (ope == 0) {
            printf("Calculator band ho raha hai...\n");
            break;
        }

        switch(ope) {
            case 1:
                printf("Enter a : ");
                scanf("%f",&a);
                printf("Enter b : ");
                scanf("%f",&b);
                
                printf("Result = %f\n", a + b);
                break;

            case 2:
                printf("Enter a : ");
                scanf("%f",&a);
                printf("Enter b : ");
                scanf("%f",&b);
                printf("Result = %f\n", a - b);
                break;

            case 3:
                printf("Enter a : ");
                scanf("%f",&a);
                printf("Enter b : ");
                scanf("%f",&b);
                
                if (b == 0)
                    printf("Error: Division by zero!\n");
                else
                    printf("Result = %.2f\n", (float)a / b);
                break;

            case 4:
                printf("Enter a : ");
                scanf("%f",&a);
                printf("Enter b : ");
                scanf("%f",&b);
            
                printf("Result = %f\n", a * b);
                break;

            case 5:
                printf("Enter number: ");
                scanf("%f", &c);
                if (c < 0)
                    printf("Error: Negative number ka square root possible nahi!\n");
                else
                    printf("Result = %.2f\n", sqrt(c));
                break;

            case 6:
                printf("Enter number: ");
                scanf("%f", &c);
                printf("Result = %.2f\n", pow(c, 2));
                break;

            case 7: {
                printf("Enter number: ");
                scanf("%d", &d);

                if (d < 0) {
                    printf("Error: Negative ka factorial nahi hota!\n");
                    break;
                }
                if(d==0){
                    printf("Factorial=1\n");
                    break;
                }
                long long int  fact = 1;
                int i;
                for(i = 1; i <= d; i++) {
                    fact = fact * i;
                }

                printf("Factorial = %lld\n", fact);
                break;
            }
            case 8 :{
                printf("enter degree : ");
                scanf("%f",&c);
                float radian =c*pi/180;
                printf("value :%f",sin(radian));
                break;
            }
            case 9 :{
                float c;
                printf("enter degree :");
                scanf("%f",&c);
                float radian =c*pi/180;
                float result = cos(radian);
                if(fabs(result)<0.0001){
                    result =0;
                }
                printf("Result :%.4f",result);
                break;
            }
            case 10 :{
                printf("Enter degree: ");
                scanf("%f",&c);

                float radian = c*pi/ 180;
                float value = cos(radian);

                if(fabs(value) < 0.0001){
                printf("tan is undefined at this angle!\n");
                }
                else{
                printf("Result = %f\n", tan(radian));
                }
                break;
                }
            
            case 11 :{
                printf("enter degree :");
                scanf("%f",&c);
                float radian =c*pi/180;
                float value = cos(radian);
                if(fabs(value)<0.0001){
                  printf("undefine !\n");}
                else{
                printf("Result :%f",1/cos(radian));
                }
                break;
            }
            case 12 :{
                printf("enter degree :");
                scanf("%f",&c);
                float radian =c*pi/180;
                float value = sin(radian);
                if(fabs(value)<0.0001){
                  printf("undefine !\n");}
                else{
                printf("Result :%f",1/sin(radian));
                }
                break;
            }
            case 13 :{
                printf("enter degree :");
                scanf("%f",&c);
                float radian =c*pi/180;
                float value = sin(radian);
                
                if(fabs(value)<0.0001){
                  printf("undefine !\n");}
                else{
                printf("Result :%f",cos(radian)/value);
                }
                break;
            }
            case 14:{
                printf("enter number :");
                scanf("%f",&c);
                printf("Result :%f",exp(c));
                break;
            }
            case 15:{
                printf("enter number :");
                scanf("%f",&c);
                if(c<=0){
                    printf("invalid input !\n");
                }
                else
                printf("value :%f",log(c));
                break;
            }
            
            case 16:{
                printf("enter number :");
                scanf("%f",&c);
                if(c<=0){
                    printf("invalid input !\n");
                }
                else
                printf("value :%f",log10(c));
                break;
            }
            case 17 :{
                printf("Enter a : ");
                scanf("%f",&a);
                printf("Enter b : ");
                scanf("%f",&b);
                printf("Result :%f",pow(a,b));
                break ;
            }
            case 18 :{
                float far;
                printf("enter f");
                scanf("%f",&far);
                float centi=(5*(far
                -32)/9);
                printf("%f",centi);
                break;
            }
            case 19 :{
                int x[10][10], y[10][10], z[10][10];
                int m1,n1,m2,n2,i,j;

                printf("Enter size of Matrix A (rows columns): ");
                scanf("%d %d",&m1,&n1);

                printf("Enter size of Matrix B (rows columns): ");
                scanf("%d %d",&m2,&n2);

    
                if(m1 != m2 || n1 != n2){
        printf("Matrix addition not possible!\n");
        break;   
    }

    printf("Enter Matrix A:\n");
    for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
            scanf("%d",&x[i][j]);

    printf("Enter Matrix B:\n");
    for(i=0;i<m2;i++)
        for(j=0;j<n2;j++)
            scanf("%d",&y[i][j]);

    for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
            z[i][j]=x[i][j]+y[i][j];

    printf("\nResult Matrix:\n");
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++)
            printf("%5d",z[i][j]);
        printf("\n");
    }

    break;
}
            case 20 :{
                int x[10][10], y[10][10], z[10][10];
                int m1,n1,m2,n2,i,j;

                printf("Enter size of Matrix A (rows columns): ");
                scanf("%d %d",&m1,&n1);

                printf("Enter size of Matrix B (rows columns): ");
                scanf("%d %d",&m2,&n2);
    
                if(m1 != m2 || n1 != n2){
        printf("Matrix addition not possible!\n");
        break;   
    }

    printf("Enter Matrix A:\n");
    for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
            scanf("%d",&x[i][j]);

    printf("Enter Matrix B:\n");
    for(i=0;i<m2;i++)
        for(j=0;j<n2;j++)
            scanf("%d",&y[i][j]);

    for(i=0;i<m1;i++)
        for(j=0;j<n1;j++)
            z[i][j]=x[i][j]-y[i][j];

    printf("\nResult Matrix:\n");
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++)
            printf("%5d",z[i][j]);
        printf("\n");
    }

    break;
}
       case 21 :{
                int x[10][10], y[10][10], z[10][10];
    int m,l,n1,n2;
    int i, j, k;

    printf("Enter order of matrix A (m n): ");
    scanf("%d %d", &m, &n1);

    printf("Enter order of matrix B (n l): ");
    scanf("%d %d", &n2, &l);   
    
    
    if(n1 !=n2){
    printf("invalid size");
    break ;
    }
       if(n2<=0 || n1 <= 0 || m <= 0 || l <= 0) {
       
        printf("Invalid size\n");
        break;
       }
    

    printf("Enter matrix A:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<n1;j++) {
            scanf("%d", &x[i][j]);
        }
    }

    printf("Enter matrix B:\n");
    for(i=0;i<n2;i++) {
        for(j=0;j<l;j++) {
            scanf("%d", &y[i][j]);
        }
    }

    
    for(i=0;i<m;i++) {
        for(j=0;j<l;j++) {
            z[i][j] = 0;
        }
    }

    
    for(i=0;i<m;i++) {
        for(j=0;j<l;j++) {
            for(k=0;k<n1;k++) {
                z[i][j] += x[i][k] * y[k][j];
            }
        }
    }

    
    printf("Result Matrix:\n");
    for(i=0;i<m;i++) {
        for(j=0;j<l;j++) {
            printf("%d ", z[i][j]);
        }
        printf("\n");
    }
}
           case 22 :{
               float a,b,c,d,x1,x2,x;
               printf("enter coefficients a :");
               scanf("%f",&a);
               printf("enter coefficients b :");
               scanf("%f",&b);
               printf("enter coefficients c :");
               scanf("%f",&c);
               
               d=b*b-4*a*c;
               if(d>0){
                   x1=(-b+sqrt(d))/(2*a);
                   x2=(-b-sqrt(d))/(2*a);
                   printf("\nroots are real and unequal");
                   printf("\n %6.2f",x1);
                   printf("\n %6.2f",x2);
               }
               else if(d==0){
                   x=-b/(2*a);
                   printf("\nroots are real and equals");
                   printf("\n %6.2f",x);
               }
               else{
                   printf("\n no real roots ande roots are complex ");
               }
               break ;
           }
            
            default:
                printf("Invalid choice!\n");
            } 
      
 }

    return 0;
}