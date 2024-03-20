#include <iostream>
using namespace std;

int arr[20];
int n;

void input(){
    while (true)
    {
        cout <<"masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 eleman.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;
    for (int i = 0; i < n; i++)
{
        cout << "data ke-" << (i + 1 ) << ": ";
        cin >> arr[i];
    }
}
void sortir(){
    int pass= 1;
    do {
        for (int i = 0; i <= n -1 - pass ; i++){
            if (arr[i] > arr [i + 1]){
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            }
        }
        pass = pass + 1;
    } while ( pass <= n - 1);
    
}
void display (){
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for( int j = 0; j < n; j++){
        cout << arr[j] << endl; //output setiap element array pada garis baru
    }
    cout << "jumlah pass = " << n-1  << endl;
    cout << endl;  
}
int main(){
    input();
    sortir();
    display();
}
