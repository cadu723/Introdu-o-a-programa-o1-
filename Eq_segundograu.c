#include <stdio.h>
#include <math.h>
int main(){
float a=0,b=0,c=0,delta=0,raiz1=0,raiz2=0,verticex=0,verticey=0;
int inter;
printf("digite os valores de a,b e c da equacao de segundo grau para ver suas raizes:\n");
scanf("%f %f %f",&a,&b,&c);

delta=(b*b)-(4*a*c);
raiz1=(-b+sqrt(delta))/(2*a);
raiz2=(-b-sqrt(delta))/(2*a);
inter=c;
verticex=-b/(2*a);
verticey=-delta/(4*a);
if(a>0){
 printf("possui concavidade para baixo!\n");}
  else{ 
  printf("possui concavidade para cima!\n");}
 
if(delta>0){
printf("a equação possui duas raízes!\n");
printf("a priemeira raiz e: %2.f\na segunda raiz e: %2.f\n\n",raiz1,raiz2);
printf("a intercessao com o eixo sera:(0,%d)\n\n",inter);
printf("o x do vertice sera: %f e o y do vertice sera: %f\n",verticex,verticey);
}else{
if(delta==0){
 printf("só tem uma raiz!\n");
  if(raiz1>0){
   printf("a raiz é:%2.f\n",raiz1);
   printf("a intercessao com o eixo sera:(0,%d)\n\n",inter);
  printf("o x do vertice sera: %f e o y do vertice sera: %f\n",verticex,verticey);

   }else{
   printf("a raiz é %2.f\n",raiz2);
  printf("a intercessao com o eixo sera:(0,%d)\n\n",inter);
  printf("o x do vertice sera: %f e o y do vertice sera: %f\n",verticex,verticey);

   }
    }else{
    if(delta<0){
    printf("a equação apresentada não tem raízes!\n\n");
    printf("a intercessao com o eixo sera:(0,%d)\n\n",inter);
    printf("o x do vertice sera: %f e o y do vertice sera: %f\n",verticex,verticey);
}}}
return 0;

}
