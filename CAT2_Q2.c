/* Arthor : VALINYALA Ian ABUNGANA

   Date : 6/11/2024

   Reg No. : CT102/G/24472/24

*/
#include<stdio.h>

    int main () {
    int n,m;
int scores[4][2] = {{65,92},{84,72},{35,70},{59,67}};
for (n=0;n<4;n++) {
for (m=0;m<2;m++) {

    printf(" scores are as follows[%d][%d]: %d\n",n,m, scores[n][m]);

      }
  }
return 0;

}