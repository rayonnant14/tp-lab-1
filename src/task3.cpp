#include <task3.h>

unsigned long long sumPrime(unsigned int hbound) {

    unsigned long long sum = 0;

    bool was[2000001]{false};

    for (unsigned int i = 2; i < hbound; i++){
        if (!was[i]){
            for (unsigned int j = i * i; j < hbound; j += i)
                was[j] = true;
            sum += i;
        }
    }

    return sum;

}