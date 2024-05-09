#include <iostream>
#include <cstring>
using namespace std;

char *concat(const char* str1, const char *str2, char result[])
{
	size_t len1 = strlen(str1);
	size_t len2 = strlen(str2);
	for (int i = 0;i < len1;i++)
	{
		result[i] = str1[i];
	}
	for (int i = 0;i < len2;i++)
	{
		result[len1 + i] = str2[i];
	}
	result[len1 + len2] = '\0';
	return result;
}
int main()
{
	const char* str1 = "Hello";
	const char* str2 = "World";
	const int length = 100;
	char result[length];
	char* c =concat(str1, str2, result);
	/*for (size_t i = 0;i < strlen(str1) + strlen(str2);i++)
	{
		cout << *c;
		c++;
	}*/
	cout << c;
}