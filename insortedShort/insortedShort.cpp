#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
    while (true) {
        cout << "Masukkan Jumlah Data Pada Array : ";
        cin >> n;

        if (n <= 20) {
            break;
        }
        else {
            cout << "\nArray yang anda masukan maksimal 20 elemnet. \n";
        }
    }
    cout << endl;
    cout << "=========================" << endl;
    cout << "MASUKKAN ELEMENT ARRAY" << endl;
    cout << "=========================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];

    }
}

void insertionSort() {
    int temp; //variable data temporer / peenyimpanan sementara
    int j; // variable j sebagai penanda

    for (int i = 1; i < n; i++) { //1. looping dengan i dimulai dari 1 hingga n - 1
        temp = arr[i];  //2. simpan nilai arr[i] ke variable sementara temp

        j = i - 1; //3. Setting nilai j sama dengan i-1

        while (j >= 0 && arr[j] > temp) {  //4. looping while dimana niai  j lebih besar sama dengan 0 dan array[j] lebih besar dari temp
            arr[j + 1] - arr[j];  //simpan arr[j] kedalam variable arr[j+1]
            j--; //j decrement
        }

        arr[j + 1] = temp; //simpan nilai temp ke dalam arr[j+1]

        cout << endl;
        cout << "\nPass " << i << ": ";  //output ke layar
        for (int k = 0; k < n; k++) {  //Looping nilai k dimulai dari 0 hingga n-1
            cout << arr[i] << " ";  //display output
        }
    }
}

void display() {
    cout << endl;
    cout << "Total Element Movement= " << n - 1 << endl;
    cout << "\n==========================" << endl;
    cout << "Element Array yang telah Tersusun" << endl;
    cout << "\n==========================" << endl;

    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl;
    }
    cout << endl;
}

int main()
{
    input();
    insertionSort();
    display();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
