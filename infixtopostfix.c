#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int pre(char a);

void convert(char input[]) {
    char post[100] = ""; 
    int i = 0;
    int j = 0;
    char stack[100];
    int top = -1;

    while (input[i] != '\0') {
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {
            post[j++] = input[i];
            i++;
        } else if (input[i] == '(') {
            stack[++top] = input[i];
            i++;
        } else if (input[i] == ')') {
            while (top != -1 && stack[top] != '(') {
                post[j++] = stack[top--];
            }
            if (top != -1 && stack[top] == '(') {
                top--; 
            }
            i++;
        } else {
            while (top != -1 && pre(input[i]) <= pre(stack[top])) {
                post[j++] = stack[top--];
            }

            stack[++top] = input[i];
            i++;
        }
    }

    while (top != -1) {
        post[j++] = stack[top--];
    }

    post[j] = '\0';
    printf("Postfix is: %s\n", post);
}

int pre(char a) {
    if (a == '^') {
        return 3;
    } else if (a == '*' || a == '/') {
        return 2;
    } else if (a == '+' || a == '-') {
        return 1;
    }
    return 0;
}

int main() {
    char input[100]; 
    printf("Give input: ");
    scanf("%s", input);
    convert(input);
    return 0;
}
