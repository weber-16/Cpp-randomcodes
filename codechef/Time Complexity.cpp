#include <iostream>
using namespace std;

int main() {
    int b;
    cin >> b;
    int x,y;
    for(int a=0; a<b; ++a){
        cin >> x >> y;
        
        if ( x==y){
            cout << "NO"<< endl;
        }
        else if (x>y){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
	// your code goes here
	return 0;
}
