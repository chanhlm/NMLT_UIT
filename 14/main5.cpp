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

int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void ChenChuoiTaiVitriK(char s[], char s1[], int k);

int main()
{
	char s[MAX], s1[MAX];
	cin.getline(s, 299);
	cin.getline(s1, 299);
	int k;
	cin >> k;
	if (k < 0 || k>myStrlen(s, 0))
		cout << "Vi tri " << k << " khong thoa dieu kien." << endl;
	else
	{

//###INSERT CODE HERE -
    ChenChuoiTaiVitriK(s,s1,k);
	}
    return 0;
}
void ChenChuoiTaiVitriK(char s[], char s1[], int k)
{
    for (int i=0; i<k; i++)
        cout << s[i];
    cout << s1;
    for (int i=k; i<myStrlen(s,0); i++)
        cout << s[i];
}

int myStrlen(char s[],int k)
{
	int n = 0;
	while (s[n] != '\0')
		n++;
	return n;
}
// bool myStrcat(char s1[], char s2[])
// {   
//     if (myStrlen(s1)+myStrlen(s2)>254)
//         return false;
//     return true;
// }