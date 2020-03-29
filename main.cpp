#include <iostream>
using namespace std;
#include <algorithm>

unsigned long int algorithm(int n, unsigned long int cycleLenght);
unsigned long int UVa100(int x, int y);


int main() {

    int i, j;
    while (cin>>i>>j)
        cout<<i<<" "<<j<<" "<<UVa100(i,j)<<endl;

    return 0;
}

unsigned long int algorithm(int n, unsigned long int cycleLenght){

    cycleLenght++;

    if (n==1)
        return cycleLenght;

    n = n%2==0 ? n/2 : 3*n+1;

    return algorithm(n, cycleLenght);

}

unsigned long int UVa100(int i, int j){

    unsigned long int maxCycleLenght = algorithm(min(i, j), 0);

    for (int k = min(i, j)+1; k <= max(i, j); k++)
        maxCycleLenght = max(algorithm(k, 0), maxCycleLenght);

    return maxCycleLenght;
}
