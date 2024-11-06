/* Arthor : VALINYALA Ian ABUNGANA

   Reg No : CT102/G/24472/24

*/

#include<stdio.h>

int main ()  {

float hours;

float wages;

float grosspay;

float overtimepay;

float taxes;

float netpay;

overtimepay = 0;

printf(" Insert the hours worked : " );

scanf("%f", &hours);


printf(" Insert wages in an hour : ");

scanf("%f", &wages);

if (hours > 40) {
	overtimepay = (hours - 40 )*wages*1.5;
	grosspay = (40 * wages) + overtimepay;
	

}else {
	
	grosspay = hours * wages ;
	
}
if (grosspay <=600) {
	 taxes = 600 * 0.15 + (grosspay - 600) * 0.2;
	 
}
netpay = grosspay - taxes ;

printf("\nthe grosspay : $%.4f\n", grosspay);
printf("the tax : $%.4f\n", taxes);
printf("the net pay : $%.4f\n", netpay);

return 0;

}