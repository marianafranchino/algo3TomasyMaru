
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main() {

}

bool operaciones (vector<int> v, int i, int m, int r , int resparcial){

    if(i == v.size() - 1){

        return (resparcial * (v[i]))% m == r || (resparcial + (v[i]))% m == r || (resparcial - (v[i]))% m == r || static_cast<int>(pow(resparcial,v[i])) % m == r;

    }else {

        return operaciones(v,i++,m,r,resparcial + v[i]) || operaciones(v,i++,m,r,resparcial * v[i]) || operaciones(v,i++,m,r,resparcial - v[i]) || operaciones(v,i++,m,r,static_cast<int>(pow(resparcial,v[i])));

    }
}
