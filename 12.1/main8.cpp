/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
strlen
strcat
string
strcmp
strcpy
memmove
strstr
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}

//###INSERT CODE HERE -
int myStrcmp(char s1[], char s2[])
{
    if (s1[0]==s2[0]) 
        return 0;
    return 1;
}
void StringReverse(char s[])
{
    int p=0;
    for (int i=0; i<strlen(s); i++)
        if (s[i]==' ')
        {
            int index, end=i-1;
            for (index=p; index<end/2; index++)
            {
                char x = s[index];
                s[index]=s[end-index+1];
                s[end-index+1] = x;
            }
            p=i++;
        }
}
