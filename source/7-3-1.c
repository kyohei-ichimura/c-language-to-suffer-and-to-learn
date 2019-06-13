#include <stdio.h>

// 西暦年を入力すると、その年にオリンピックが開かれるか、
// 表示するプログラムを作成せよ。
// 可能なら、夏季と冬季の区別も表示できればなお良い。
// ヒント:シドニー五輪(夏)は2000年開催であった。
// ※条件がややこしくなるので、
// 　以前夏季と冬季が同じ年だった時期のことは無視する。
int main(void){
    int year;
    printf("西暦を入力してください:");
    
    scanf("%d",&year);

    if (year%2 == 0){

        if (year%4 == 0){
          
            printf("夏季オリンピック\n");
        } else{
          
            printf("冬季オリンピック\n");
        }
    } else{
          
            printf("オリンピックは開催されない\n");
    }

}