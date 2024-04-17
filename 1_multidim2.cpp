/******************************************************************************
https://github.com/hadjitejuco/CCS0015_TN05
    read and print the value of multi dim array
*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int a[10][10];
    int i,j; //loop
    int n,m; //matrix 
    
    cout << "Enter order of matrix ";
    cin >> n >> m;
    cout << "Enter " << n << " X " << m << " matrix ";
    //input
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
            cin >> a[i][j];
            
    cout << "given martix is " << endl;
    for (i=1;i<=n;i++){
        for (j=1; j<=m;j++)
            cout << a[i][j] << " ";
        cout << "\n";
        
    }

    return 0;
}
