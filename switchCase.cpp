#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int n;
    cout<< "Masukkan Ranking  (dari 1-5): " ;
    cin>>n;

    switch (n)
    {
        case 1 :
        cout << "anda ranking ke -"<<n<<endl;
        break  ;

        case 2 :
        cout << "anda ranking ke -"<<n<<endl;
        break;

        case 3:
            cout<< "anda ranking ke -"<<n<<endl;
            break;

        case 4:
            cout<<"anda ranking ke-"<<n<<endl;
            break;

        case 5:
            cout<<"anda ranking ke-"<<n<<endl;
            break;

            default:
            cout<<"anda memasukkan angka yang di salah"<<endl;
    }
    cout<<"===================================="<<endl;
    cout<<"selamat dan sukses"<<endl;

    return 0;








    }




