#include <stdio.h>
    int main(){
    	int num;
    	printf ("Enter the integer:", num);
    	scanf ("%d", &num); 
    	if((num % 3==0)&& (num % 7 ==0)){
    		printf ("%d is divisible by either 3 and 7.\n.",num);
    	}else {
    		printf ( "%d is not divisible by either  3 and 7.\n",num);
    		
		
	}
	return 0;
}
    	