#include<bits/stdc++.h>
using namespace std;
//function to return max value between two strings
int max(int a,int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
//function to find longest subsequence
int lcs(char string_1[],char string_2[],int n,int m)
{
    if(n == 0 || m == 0)
    {
        return 0;
    }
    else if(string_1[n-1] == string_2[m-1])
    {
        return 1+lcs(string_1,string_2,n-1,m-1);
    }
    else
    {
        return max(lcs(string_1,string_2,n-1,m),lcs(string_1,string_2,n,m-1));
    }
}
int main()
{
    char string_1[100],string_2[100];
    cin >> string_1;
    cin >> string_2;
    int n = strlen(string_1);
    int m = strlen(string_2);
    int length = lcs(string_1,string_2,n,m);
    cout << "Longest sub-sequence: " << length;

}
