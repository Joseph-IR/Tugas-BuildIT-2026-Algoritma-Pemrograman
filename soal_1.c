#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    long long value, sum=0;
    
    scanf("%d", &n);
   
    for (int i = 0; i < n; i++) {
        scanf("%lld", &value);
        sum += value;
    }

    printf("%lld", llabs(sum));

    return 0;
}