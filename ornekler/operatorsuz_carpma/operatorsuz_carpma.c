

#include <stdio.h>
int main () {
int a,b;
int c=0;
	printf("birinci sayiyi gir: ");

	scanf("%d",&a);

	printf("ikinci sayiyi gir: ");

	scanf("%d",&b);

for (int i=1; i<=b; i++)
{
c=a+c;
}
printf("sonuc= %d",c);
}
