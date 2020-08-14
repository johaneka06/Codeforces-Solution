#include<stdio.h>
     
int main(){
    int n, array[101];
    int cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
    	scanf("%d", &array[i]);
    }
    for(int j = 1; j <= n; j++){
    	for(int i = 0; i < n; i++){
    		if(array[i] == j){
    			printf("%d", i+1);
    			if(cnt != n-1)  printf(" ");
    			break;
    		}
    	}
    }
    printf("\n");
    return 0;
}
