#include <iostream>
using namespace std;
#include <algorithm>

unsigned long int algoritmo(int n, unsigned long int counter);
unsigned long int UVa100(int x, int y);

int main() {

    int x, y;
    cin>>x>>y;
    cout<<y<<endl;
    algoritmo(y,0);
    //cout<<algorithm(x, 0)<<endl<<" "<<algorithm(y, 0)<<endl;
    //cout<<UVa100(x,y);

    return 0;
}

unsigned long int algoritmo(int n, unsigned long int counter){

    cout<<n<<counter<<endl;

    counter++;

    if (n==1)
        return counter;

    n = n%2==0 ? 3*n+1 : n/2;

    algoritmo(n, counter);

}

unsigned long int UVa100(int x, int y){

    return max(algoritmo(x, 0), algoritmo(y, 0));

}