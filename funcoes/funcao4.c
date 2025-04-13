#include <stdio.h>
/*Implemente uma função chamada min que recebe dois valores double e retorna o menor valor entre eles e a função max
 que recebe dois valores double e retorna o maior valor entre eles. */

double min(double a, double b){
  if(a > b){
    return b;
  }else{
    return a;
  }

}
double max(double a, double b){
  if(a > b){
    return a;
  }else{
    return b;
  }
}

int main(){
  int num; // quantas comparacoes quer fazer?
  scanf("%d", &num);
  double a,b;
  for(int i=0; i<num;i++){
  
    scanf("%lf, %lf", &a, &b);
    printf("%.2f %.2f", min(a,b), max(a,b));
  }



return 0;
}