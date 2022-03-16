#include <stdarg.h>
#include <cstring>
#include <cstdlib>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;

static int Add(int a, int b)
{
	return a + b;
}

static int Add(int a, int b, int c)
{
	return a + b + c;
}

static int Add(double a, double b)
{
	return (a + b);
}

static int Add(double a, double b, double c)
{
	return a + b + c;
}

static int Mul(int a, int b)
{
	return a * b;
}

static int Mul(int a, int b, int c)
{
	return a * b * c;
}

static int Mul(double a, double b)
{
	return a * b;
}

static int Mul(double a, double b, double c)
{
	return a * b * c;
}

static int Add(int count, ...)
{
	int val = 0;
	va_list ap;
	int i;
	va_start(ap, count);
	for (i = 0; i < count; i++)
	{
		val += va_arg(ap, int);
	}
	va_end(ap);
	return val;

}

static char* Add(const char* a, const char* b)
{
	size_t len1 = strlen(a);
	size_t len2 = strlen(b);
	char* raspuns = (char *)malloc(len1 + len2 + 1);
	raspuns = strcpy(raspuns, a);
	raspuns = strcat(raspuns, b);
	if (a == nullptr || b == nullptr)
		return nullptr;
	return raspuns;
}
