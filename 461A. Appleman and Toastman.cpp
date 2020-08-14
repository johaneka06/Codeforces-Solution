#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#define MAX 400000
     
using namespace std;
     
int main(){
    long long int t, n;
    long long int arr[MAX+10];
    scanf("%lld", &t);
    for(int i = 0; i < t; i++){
    	scanf("%lld", &arr[i]);
   	}
    sort(arr, arr+t);
    long long int sc = 0;
    for(int i = 0; i < t-1; i++){
    	sc += (arr[i]) * (i+2); 
    }
    sc += arr[t-1]*t;
    printf("%lld\n", sc);
    return 0;
}
