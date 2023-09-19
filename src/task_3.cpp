#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // int, long, char, float, and double
    int i;
    long l;
    char c;
    float f;
    double d;

    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%f\n", f);
    printf("%lf\n", d);
    return 0;
}