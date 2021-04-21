#include<stdio.h> 
typedef struct worker{
    char id[10];
    char name[10];
    char sex[10];
    int pay;
 }WOR;
int  main(){
  WOR a[6]={
    {"0001","陈文杰","男",1200},
    {"0002","张三丰","女",5000},
    {"0003","张四丰","女",1200}, 
    {"0004","张五丰","男",2200},
    {"0005","张六丰","男",5200},
    {"0006","张七丰","男",6200}                  
  };
  int i;
  for(i=0;i<6;i++){
    printf("%s,%s,%s,%d\n",a[i].id,a[i].name,a[i].sex,a[i].pay);
  }
}
