#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int top;
    int size;
    char *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *s, char element)
{
    if (isFull(s))
    {
        printf("stack is full so cannot do push operation ");
    }
    else
    {
        s->top++;
        s->arr[s->top] == element;
    }
}
char pop(struct stack *s)
{
    if (isEmpty(s))
    {
        printf("stack is empty so cannot do pop operation\n");
    }
    else
    {
        char element = s->arr[s->top];
        s->top--;
        return element;
    }
}
int match(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    else if (a == '[' && b == ']')
    {
        return 1;
    }
    else if (a == '{' && b == '}')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int multi_parenthesis_matching(struct stack *s, char *arr)
{
    char popped_char;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == '(' || arr[i] == '[' || arr[i] == '{')
        {
            push(s, arr[i]);
        }
        else if (arr[i] == ')' || arr[i] == ']' || arr[i] == '}')
        {
            if (isEmpty(s))
            {
                return 0;
            }
            popped_char = pop(s);
            if (match(popped_char, arr[i]))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    if (isEmpty(s))
    {
        return 1;
    }
    return 0;
}
int main()
{
    struct stack *s;
    s->top = -1;
    s->size = 6;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char arr[] = "{[]}[]";
    if (multi_parenthesis_matching(s, arr))
    {
        printf("Parenthesis are matching ");
    }
    else
    {
        printf("Parenthesis are not matching ");
    }
    return 0;
}