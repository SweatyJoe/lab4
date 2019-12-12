#include <stdio.h>

int main()
{
	char a[10] = { "bakadweqoz" },b[10],felm;
	for (int i = 0; i <= 10; i++) {
		printf("%c", a[i]);
	}
	printf("\n");
	for(int j=1;j<=8;j++){
	   for(int i=1;i<=9;i++){
	       if(a[i-1]>a[i]){
	            felm=a[i];
	            a[i]=a[i-1];
	            a[i-1]=felm;
	       }
	    }
	}
    for(int i=0;i<=9;i++){
        if(a[i]==a[i+1]){
            i++;
        }
        printf("%c",a[i]);
    }
 
	return 0;
}
