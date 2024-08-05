
 #include <stdio.h>
 #include <math.h>
 int main ()
 {
     float a,b,c,d,e,x0,x1,x2;
     printf("\t\tRESOLUTION DE L'EQUATION DU SECOND DEGRE\n\n");
     printf("Entrer la valeur de a:\n");
     scanf("%f",&a);
     printf("Entrer la valeur de b:\n");
     scanf("%f",&b);
     printf("entrer la valeur de c:\n");
     scanf("%f",&c);
     printf("Solution de l'equation %fx^2 + %fx + %f = 0\n\n",a,b,c);
     printf("Calcul du discriminant d\n");
     printf("d = b^2 - 4ac\n");
     d = b*b - 4*a*c;
     printf("La valeur du discriminant est d = %f\n\n",d);
     if (d==0)
     {
         printf("L'equation possède une double racine x0\n");
         printf("x0 = b^2/2a");
         x0 = -b/2*a;
         printf("La solution de l'equation est x0 = %f\n\n",x0);
     }
     else
     {
         if (d>0)
         {
             printf("L'equation possède deux racine simple réel\n");
             printf("x1 = (b^2 - d^1/2)/2a et x2 = (b^2 - d^1/2)/2a\n");
             x1 = (-b-sqrt(d))/2*a;
             x2 = (-b+sqrt(d))/2*a;
             printf("La solution de l'equation est x1 = %f et x2 = %f\n\n",x1,x2);
         }
         else
         {
             printf("L'equation possède deux racine simple complexe\n");
             printf("x1 = (b^2 - d^1/2)/2a et x2 = (b^2 - d^1/2)/2a\n");
             e = -d;
             x1 = (-b)/(2*a);
             x2 = (sqrt(e))/(2*a);
             printf("La solution de l'equation est x1 = %f - i%f et x2 = %f + i%f\n",x1,x2,x1,x2);
         }
     }
     return 0;
 }
