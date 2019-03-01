/*
1009. 说反话 (20)
给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

输入格式：测试输入包含一个测试用例，在一行内给出总长度不超过80的字符串。字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用1个空格分开，输入保证句子末尾没有多余的空格。

输出格式：每个测试用例的输出占一行，输出倒序后的句子。

输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello
 */
#include <stdio.h>
#include <string.h>
#define MAX 100
char data[MAX] = {0};
void myPrint(int i);
int main()
{
    int length, i, isFirst = 1;
    memset(data, 0x00, sizeof(data));
    //freopen("a.in", "r", stdin);
    gets(data);
    length = strlen(data);
    for(i=length-1; i>=0; i--) {
        if (data[i] == ' ' || i == 0){
            if (!isFirst){
                printf(" ");
            }
            isFirst = 0;
            myPrint(i);
        }
    }
    return 0;
}
void myPrint(int i){
    int j;
    int length = strlen(data);
    if (i == 0){
        j = i;
    }else{
        j = i+1;
    }
    for (; data[j]!=' ' && j<length; j++){
        putchar(data[j]);
    }
}
