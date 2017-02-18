#include<stdio.h>

int main(){
    char heart[] = "My heart will go on";
    const char * head = "I love welkin";
    heart[7] = 'M';
    *(heart + 8) = 'M';
    puts(head);
    puts(heart);
    return 0;
}
