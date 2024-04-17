/******************************************************************************
https://github.com/hadjitejuco/CCS0015_TN05
    identity matrix
*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int a[10][10];
    int i,j; //loop
    int n,m; //order matrix
    int t=0; //total

    cout << "Enter order of matrix ";
    cin >> n >> m;
    cout << "Please enter " << n << " x " << m << " matrix";
    //input matrix
    for (i=1; i<=n; i++)
        for (j=1;j<=m;j++)
            cin >> a[i][j];
    cout << "Given matrix\n";
    for (i=1; i<=n;i++){
        for (j=1;j<=m;j++)
            cout << a[i][j] << "  ";
        cout << "\n";
        
    }
    if (m==n){
        for (i=1; i<=n;i++)
            for (j=1; j<=m;j++)
            {
                if ((i==j) && (a[i][j] !=1))
                    t=1;
                if ((i!=j) && (a[i][j]!=0))
                    t=1;
            }
            if (t==0)
                cout << "identity matrix";
            else
                cout << "not identiy matrix ";
        
    }else{
        cout << "Not a trace matrix";
    }
    return 0;
}
