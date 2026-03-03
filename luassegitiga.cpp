#include <iostream>
using namespace std;

//deklarasi
float r;
float phi = 3.14159;

//function
void input(){
    cout <<"masukan angka r =" ;
    cin >> r;
}

float LuasL (float phi,float r) {
    return phi * r * r;
}
int main() {
    input();
    cout << "hasil = " << LuasL( phi,r) << endl;

}