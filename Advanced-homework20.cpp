/* �p������׹��-�i���m�ߧ@�~-�@�~20*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/24 10:00 */
#include <stdio.h> //��ܮw 
#include <stdlib.h>//��ܮw 
#define f(a, b, c) (a+b+c)*(a-b-c) //�w�q 
int main(void)
{
	printf("�p������׹��-�i���m�ߧ@�~-�@�~20\n");
    printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/05/24 10:00\n");
	printf("-----------------------------------\n");
   float i, j, k;
   printf("�п�J�T�ӼƦr�G");
   scanf(" %f %f %f", &i, &j, &k);
   printf("�p�⵲�G��%f\n", f(i, j, k));
   system("pause");//�Ȱ����� 
   return 0;//�^�ǭ� 0 
}
