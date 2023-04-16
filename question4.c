/*Create a c program to solve the given problem:
You are given a string s and two integers x and y. You can perform two types of operations any number of times:
• Remove the substring "ab" and gain x points.
• Remove the substring "ba" and gain y points.
• Remove the substring "aba" or "bab" and gain x + y points.
• Remove the substring "aaa" or "bbb" and gain x * y points.
Return the maximum points you can gain after applying the above operations on s.*/

#include <stdio.h>
#include <string.h>

int main() {
    // Take input string s and integers x, y
    char s[100];
    int x, y;
    scanf("%s %d %d", s, &x, &y);

    // Get the length of the string s
    int len = strlen(s);
    int ans = 0;
    int i = 0;

    // Traverse the string s
    while (i < len) {
        // If "ab" is found, add x to the answer and move to the next character
        if (s[i] == 'a' && s[i+1] == 'b') {
            ans += x;
            i += 2;
        } 
        // If "ba" is found, add y to the answer and move to the next character
        else if (s[i] == 'b' && s[i+1] == 'a') {
            ans += y;
            i += 2;
        } 
        // If "aba" or "bab" is found, add x + y to the answer and move to the next character
        else if (s[i] == 'a' && s[i+1] == 'b' && s[i+2] == 'a') {
            ans += (x + y);
            i += 3;
        } else if (s[i] == 'b' && s[i+1] == 'a' && s[i+2] == 'b') {
            ans += (x + y);
            i += 3;
        } 
        // If "aaa" or "bbb" is found, add x * y to the answer and move to the next character
        else if (s[i] == 'a' && s[i+1] == 'a' && s[i+2] == 'a') {
            ans += (x * y);
            i += 3;
        } else if (s[i] == 'b' && s[i+1] == 'b' && s[i+2] == 'b') {
            ans += (x * y);
            i += 3;
        } 
        // If none of the above conditions are met, move to the next character
        else {
            i++;
        }
    }

    // Print the maximum points that can be gained
    printf("%d", ans);
    return 0;
}

