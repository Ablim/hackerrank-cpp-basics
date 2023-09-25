#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

string isEven(int number);

int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);

    string numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = a; i <= b; i++)
    {
        string output;
        if (i >= 1 && i <= 9)
        {
            output = numbers[i - 1];
        }
        else
        {
            output = isEven(i);
        }

        printf("%s\n", output.c_str());
    }

    return 0;
}

string isEven(int number)
{
    if (number % 2 == 0)
    {
        return "even";
    }
    else
    {
        return "odd";
    }
}