#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int func_a(int passed, int non_passed) {
    return (passed > 1 && non_passed == 0);
}

int func_b(int scores[3]) {
    int answer = 0;
    if(scores[0] < 40) {
        answer++;
    }
    if(scores[1] < 44) {
        answer++;
    }
    if(scores[2] < 35) {
        answer++;
    }
    return answer;
}

int func_c(int scores[3]) {
    int answer = 0;
    if(scores[0] >= 80) {
        answer++;
    }
    if(scores[1] >= 88) {
        answer++;
    }
    if(scores[2] >= 70) {
        answer++;
    }
    return answer;
}
