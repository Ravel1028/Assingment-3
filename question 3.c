#include<stdio.h>

//N is taken less otherwise, it would take a huge amount of time to calculate
#define N 1000001

int primeArray[N]={1, 1};

void sieve(){
   for(int i=2; i*i<=N; i++) {
       if(primeArray[i]==0){
           for(long long j=i*i; j<=N; j+=i){
               primeArray[j]=1;
           }
       }
   }
}

void printPrimes(){
    for(int i=0; i<N; i++){
        if(primeArray[i]==0)printf("%d ", i);
    }
}

int main(){
    sieve();
    printPrimes();
    return 0;
}