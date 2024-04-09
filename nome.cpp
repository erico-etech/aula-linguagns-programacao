#include  <iostream>
#include <size>

using namespace std;

int main() {
    string nome;
    string sobrenome;

    cin >> nome;
    cin >> sobrenome;

    int ultima = nome.size() -1;

    cout << sobrenome << ", " << nome[0] << nome[ultima] << endl;

    return 0;
}