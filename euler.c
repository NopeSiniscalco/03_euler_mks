#include <stdio.h>


int prob1(int limit){
    int sum=0;
    int i;
    for(i=1;i<limit;i++){
        if(i%3==0){sum+=i;}
        else if(i%5==0){sum+=i;}
    }
    return sum;
}

int prob5(int num_to){
    int current;
    for(current=1;1;current++){
        int factor;
        for(factor=1;factor<=num_to;factor++){
            if(current%factor!=0)
                break;
            if(factor==num_to)
                return current;
        }
    }
}


int main(){
    printf("Test?\n");
    printf("Problem 1 with limit of 1000: %d\n",prob1(1000));
    printf("Problem 5 with factor from 1-20: %d\n",prob5(20));
    //printf();
    //printf();
    //printf();
    return 0;
}