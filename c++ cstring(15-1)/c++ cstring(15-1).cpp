#include <iostream>
using namespace std;
int my_strlen(const char* str);
char* my_strcpy(char* d, const char* s);
char* my_strcat(char* d, const char* s);
int main()
{
    char s1[10];
    char s2[10] = "xxx";
    cout << my_strcpy(s1, "12") << endl;
    s1[1] = '12';  
    //cout << "length of" << s1 << " is " << my_strlen(s1) << endl;
    my_strcpy(s2, s1);
    cout << my_strcat(s2, "ab") << endl;;
    cout << "length of " << s2 << " is " << my_strlen(s2) << endl;

}
int my_strlen(const char* str)
{
    int i;
    for (i = 0; *str != '\0'; i++, str++)
        return i;
}
char *my_strcpy(char* d, const char* s)
{
    char* r = d;
    for (; *s; s++) //*s !='\0'
        *r++ = *s;
    *r = '\0';
    return d;
}

char *my_strcat(char *d,const char *s)
{
    char* r = d;
    for (; *d; d++);
    for (; *s; s++)
        *d++ = *s;
    *d = '\0';
    return r;
}

