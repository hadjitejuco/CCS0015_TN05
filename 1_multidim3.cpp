/******************************************************************************
https://github.com/hadjitejuco/CCS0015_TN05
    trace matrix
    requirements
        n=m 3x3 (trace matrix) , 3x4 (not trace matrix)
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
    cout << "Given matrix";
    for (i=1; i<=n;i++){
        for (j=1;j<=m;j++)
            cout << a[i][j] << "  ";
        cout << "\n";
        
    }
    if (m==n){
        //compute values
        for (i=1; i<=n;i++)
            for (j=1; j<=m;j++)
                if (i==j)
                    t+=a[i][j];
        cout << "Trace matrix " << t;
        
        
    }else{
        cout << "Not a trace matrix";
    }
    return 0;
}
