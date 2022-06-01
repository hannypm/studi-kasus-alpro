#include <iostream>
using namespace std;

class Mahasiswa
{
    friend istream operator>>(istream &, Mahasiswa &);
    friend ostream operator<<(ostream &, Mahasiswa &);
	private:
	    string nama[50];
	    string cari, temp, nim[3];
	    string prodi[20];
	    string telp[12];
	    string kata[10];
	    int n;
	public:
	    void input();
	    void proses();
	    void output();
} m;
void Mahasiswa::input()
{
    cout << "Masukan banyak mahasiswa : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << i << endl;
        cout << "NIM\t: ";
        cin >> nim[i];
        cout << "NAMA\t: ";
        cin >> nama[i];
        cout << "PRODI\t: ";
        cin >> prodi[i];
        cout << "TELP\t: ";
        cin >> telp[i];
    }
}
void Mahasiswa::proses()
{
    int i, j;
    for (j = 1; j < n; j++)
    {
        temp = nim[j];
        cout << "Data Ke- " << j + 1 << " Yaitu " << nim[j] << " Diambil dari deret " << endl;
        cout << "Dilakukan penggeseran elemen : " << endl;
        for (i = j - 1; (i >= 0) && (nim[i] > temp); i--)
        {
            cout << "Data pada posisis ke- [" << i + 1 << "] digeser ke posisi [" << i + 2 << "]" << endl;
            nim[i + 1] = nim[i];
        }
        cout << "Data baru masuk pada posisi ke-[" << i + 2 << "]" << endl;
        nim[i + 1] = temp;
    }
}
void Mahasiswa::output()
{
    int k;
    cout << "hasil nim secara berurutan adalah : ";
    cout << endl;
    for (int k = 0; k <= n; k++)
    {
        cout << nim[k] << " ";
    }
}
int main()
{
    m.input();
    m.proses();
    m.output();
}
