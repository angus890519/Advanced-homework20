/* 計算機概論實務-進階練習作業-作業20*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/05/24 10:00 */
#include <stdio.h> //函示庫 
#include <stdlib.h>//函示庫 
#define f(a, b, c) (a+b+c)*(a-b-c) //定義 
int main(void)
{
	printf("計算機概論實務-進階練習作業-作業20\n");
    printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/05/24 10:00\n");
	printf("-----------------------------------\n");
   float i, j, k;
   printf("請輸入三個數字：");
   scanf(" %f %f %f", &i, &j, &k);
   printf("計算結果為%f\n", f(i, j, k));
   system("pause");//暫停視窗 
   return 0;//回傳值 0 
}
