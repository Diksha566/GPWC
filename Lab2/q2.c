#include <iostream>
using namespace std;

void mt(int n, int m, int arr[10][10]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; 
    }
}

int main() {
    int arr[10][10];
    int n, m;
    
    cout << "Enter size of rows: ";
    cin >> n;
    
    cout << "Enter size of columns: ";
    cin >> m;
    
  
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    
    cout << "The matrix is:\n";
    mt(n, m, arr); 

    return 0;
}

