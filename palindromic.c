#include <stdio.h>
#include <string.h>

#define NO_TESTS 5

int isPalindromic (char* s) {
    int i;
        for (i= 0; i < strlen(s); i++)
                if (s[i] != s[strlen(s)-1-i]) 
                        return 0;
        return 1;
}

int main () {
        char* tests[NO_TESTS] = {0};
	tests[0] = "mum";
	tests[1] = "tim";
	tests[2] = "racecar";
	tests[3] = "university";
	tests[4] = "compsci";
	
	int i;
	for (i = 0; i < NO_TESTS; i++)
        	printf("%s: isPalindromic = %i\n", tests[i], isPalindromic(tests[i]));
	
}

