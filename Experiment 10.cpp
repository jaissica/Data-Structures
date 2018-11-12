#include<iostream>
using namespace std;
int Merge(int *A,int X,int *B,int Y,int *C)
{       int p = 0;
        int q = 0;
        int k = 0;
        int c=0;
while ( p < X && q < Y) {
if (A[p] < B[q])
{
C[k++] = A[p++];
c++;
}
else
{
C[k++] = B[q++];
c++;
}
}
while ( p < X)
    {
     C[k++] = A[p++];
    }
while ( q < Y)
{
    C[k++] = B[q++];
     }
return c;
}
int main()
{
    int i,X,Y;
    cin >> X >> Y;
    int A[X],B[Y],C[X+Y];
    for(i=0;i<=X-1;i++)
        cin >> A[i];
    for(i=0;i<=Y-1;i++)
        cin >> B[i];
    X = Merge(A,X,B,Y,C);
    for(i=0;i<=X+Y-1;i++)
        cout << C[i] << " ";
    cout << endl << X;
    return 0; }
