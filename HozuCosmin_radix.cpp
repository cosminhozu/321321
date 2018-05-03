#include<iostream>
using namespace std;
int M[100];
int n;
int v0[100], v1[100], v2[100], v3[100], v4[100], v5[100], v6[100], v7[100], v8[100], v9[100];
int i0,j0,i1,j1,i2,j2,i3,j3,i4,j4,i5,j5,i6,j6,i7,j7,i8,j8,i9,j9;

int read_data()
{
    cout << "n= ";
    cin >> n;
    for(int i = 1; i<=n; i++)
    {
        cin>> M[i];
    }
}
int fill_q(int name_q, int rang)
{




}
int print_q(int name_q)
{
    switch(name_q)
    {
        case 0:
        {
        for(int i = 0; i<=j0; i++) cout << v0[i] << " ";
        break;
        }
        case 1:
        {
        for(int i = 1; i<=j1; i++)
        {

        }

        }
    }
}
int main()
{
read_data();
}
