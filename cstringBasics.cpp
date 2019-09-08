/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

char maxOccuredChar(const char s[], int N) {
    
    //single character case
    if(N<2) return s[0]; 
    
    int charFrequency[256] {0};
    //int N = strlen(s)-1;
    int max {0};
    char result;
    
    for(int i=0; i<N; i++) {
        charFrequency[s[i]]++;
        
        if(max < charFrequency[s[i]]) {
            max = charFrequency[s[i]];
            result = s[i];
        }
    }
    
    // Taken care for unique character string
    return (charFrequency[result] > 1) ? result : '\0';
}

char* removeDuplicates(char* s) {
    bool isDuplicate[256]{false};
    
    int currentIndex{0}, resultIndex{0};
    while(*(s+currentIndex)) {
       if(isDuplicate[*(s+currentIndex)] == false) {
           isDuplicate[*(s+currentIndex)] = true;
           *(s+resultIndex) = *(s+currentIndex);
           resultIndex++;
       }
       currentIndex++;
    }
    
    *(s+resultIndex) = '\0';
    return s;
}

int main()
{
    printf("Hello World \n");
    
    char s[] = "sssssssss";
    
    cout << removeDuplicates(s) << endl;
    
    int N = strlen(s)-1;
    cout << maxOccuredChar(s, N) << endl;
    
    

    return 0;
}
