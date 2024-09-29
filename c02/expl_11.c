 #include <stdio.h>

 int main(void)
 {
    char hex[3];
    char c;

    c = 'A'; //ASCII value of 'A' is 65
    hex[0] = "0123456789abcdef"[c / 16]; // 42 / 16 = 4
    hex[1] = "0123456789abcdef"[c % 16]; // 42 % 16 = 1
    hex[2] = '\0';
    // hex[3] = {4,1,'\0'} ==> A ASCII in hex 

    printf("%s", hex);
 }