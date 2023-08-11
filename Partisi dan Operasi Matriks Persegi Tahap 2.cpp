#include <iostream>
#include <conio.h>
using namespace std;
//pendeklarasian variabel global
int n;
int kolom = 0, baris = 0;

void garis (){
    cout << "--------------------"<<endl;
}
void isimatriks(int length, int matriksa[], int matriksb[]){
    cout << "\nMatriks A"<<endl;
    garis();
    for (int i = 0; i < length; ++i)
    {
        if (kolom == 0)
        {
            ++baris;
            if (baris > 1)
            {
                garis();
            } 
        }
        
        cout << "Baris "<<baris;
        cout << " kolom "<<++kolom<<" = ";
        cin >> matriksa[i];

        if (kolom >= n)
        {
            kolom = 0;
        }
    }

    cout << "\nMatriks B"<<endl;
    garis();
    baris = 0;
    for (int i = 0; i < length; ++i)
    {
        if (kolom == 0)
        {
            ++baris;
            if (baris > 1)
            {
                garis();
            } 
        }
        
        cout << "Baris "<<baris;
        cout << " kolom "<<++kolom<<" = ";
        cin >> matriksb[i];

        if (kolom >= n)
        {
            kolom = 0;
        }
    }
}
void cetakmatriks(int length, int matriksa[], int matriksb[]){
    cout << "\nBentuk Matriks A"<<endl;
    baris = 0;
    for (int i = 0; i < length; ++i)
    {
        if (kolom == 0)
        {
            ++baris;
            if (baris > 1)
            {
                cout << endl;
            } 
        }
        
        kolom++;
        cout << matriksa[i] << "    ";

        if (kolom >= n)
        {
            kolom = 0;
        }
    } cout << endl; 

    cout << "\nBentuk Matriks B"<<endl;
    baris = 0;
    for (int i = 0; i < length; ++i)
    {
        if (kolom == 0)
        {
            ++baris;
            if (baris > 1)
            {
                cout << endl;
            } 
        }
        
        kolom++;
        cout << matriksb[i] << "    ";

        if (kolom >= n)
        {
            kolom = 0;
        }
    } cout << endl;

}
void partisi_jml(int length, int matriksa[], int matriksb[]){
    //Partisi Matriks A
        cout << "Partisi Matriks A"<<endl;
        baris = 0;
        for (int i = 0; i < length; ++i)
        {
            if (kolom == 0)
            {
                ++baris;
                if (baris > 1)
                {
                    cout << endl;
                } 
            }
            
            kolom++;
            cout << matriksa[i] << "  ";

            if (kolom >= n)
            {
                kolom = 0;
            }

            if (kolom == n/2)
            {
                cout << ":  ";
            }

            if ((baris == (n/2))&&(kolom == 0))
            {
                cout << "\n";
                for (int k = 0; k < n ; ++k)
                {
                    if (k == n/2)
                        {
                            cout << "-";
                        }
                    if (matriksa[0] >= 10)
                    {
                        cout << "----";
                        
                    }else
                    {
                        cout << "---";
                    }
                }
                
            }
        } cout << endl; 

    //Partisi Matriks B
        cout << "\n=================="<<endl;
        cout << "Partisi Matriks B"<<endl;
        baris = 0;
        for (int i = 0; i < length; ++i)
        {
            if (kolom == 0)
            {
                ++baris;
                if (baris > 1)
                {
                    cout << endl;
                } 
            }
            
            kolom++;
            cout << matriksb[i] << "  ";

            if (kolom >= n)
            {
                kolom = 0;
            }

            if (kolom == n/2)
            {
                cout << ":  ";
            }

            if ((baris == (n/2))&&(kolom == 0))
            {
                cout << "\n";
                for (int k = 0; k < n ; ++k)
                {
                    if (k == n/2)
                        {
                            cout << "-";
                        }
                    if (matriksa[0] >= 10)
                    {
                        cout << "----";
                        
                    }else
                    {
                        cout << "---";
                    }
                }
                
            }
        } cout << endl;
}
void partisi_ganjilkali(int length, int matriksa[], int matriksb[]){
    //Partisi Matriks Ganjil A untuk perkalian
        cout << "Partisi Matriks A"<<endl;
        baris = 0;
        for (int i = 0; i < length; ++i)
        {
            if (kolom == 0)
            {
                ++baris;
                if (baris > 1)
                {
                    cout << endl;
                } 
            }
            
            kolom++;
            cout << matriksa[i] << "  ";

            if (kolom >= n)
            {
                kolom = 0;
            }

            if (kolom == (n+1)/2)
            {
                cout << ":  ";
            }

            if ((baris == ((n+1)/2))&&(kolom == 0))
            {
                cout << "\n";
                for (int k = 0; k < n ; ++k)
                {
                    if (k == n/2)
                        {
                            cout << "-";
                        }
                    if (matriksa[0] >= 10)
                    {
                        cout << "----";
                        
                    }else
                    {
                        cout << "---";
                    }
                }
                
            }
        } cout << endl; 

    //Partisi Matriks Ganjil B untuk perkalian
        cout << "\n=================="<<endl;
        cout << "Partisi Matriks B"<<endl;
        baris = 0;
        for (int i = 0; i < length; ++i)
        {
            if (kolom == 0)
            {
                ++baris;
                if (baris > 1)
                {
                    cout << endl;
                } 
            }
            
            kolom++;
            cout << matriksb[i] << "  ";

            if (kolom >= n)
            {
                kolom = 0;
            }

            if (kolom == ((n+1)/2)-1)
            {
                cout << ":  ";
            }

            if ((baris == ((n+1)/2))&&(kolom == 0))
            {
                cout << "\n";
                for (int k = 0; k < n ; ++k)
                {
                    if (k == n/2)
                        {
                            cout << "-";
                        }
                    if (matriksa[0] >= 10)
                    {
                        cout << "----";
                        
                    }else
                    {
                        cout << "---";
                    }
                }
                
            }
        } cout << endl;
}

int main (){ 
//header
    cout << "========================================="<<endl;
    cout << "---------PARTISI MATRIKS PERSEGI---------"<<endl;
    cout << "========================================="<<endl;

    cout << "Matriks Persegi (nxn)"<<endl;
    cout << "Masukan jumlah baris/kolom : "; 
    cin >> n;

    int pilih;
    int length = n*n;
    int matriksa[length], matriksb[length];
//Deklarasi variabel untuk partisi satu satu
    int isi_sub = length/4;
    int a11[0], a12[0], a21[0], a22[0];
    int b11[0], b12[0], b21[0], b22[0];
    int ka11[0], ka12[0], ka21[0], ka22[0];
    int kb11[0], kb12[0], kb21[0], kb22[0];
//variabel bantu untuk memasukan data partisi matriks
    int help11 = 0, help12 = 0, help21 = 0, help22 = 0;
    int help11b = 0, help12b = 0, help21b = 0, help22b = 0;
//variabel seperti isi sub tapi ini untuk perkalian ganjil
    int kali_11 = (n/2)*((n/2)+1);
    int kali_12 = ((n/2)+1)*((n/2)+1);
    int kali_21 = (n/2)*(n/2);
    int kali_22 = (n/2)*((n/2)+1);

//pengisian matriks
    isimatriks(length, matriksa, matriksb);

//visualisasi matriks
    cetakmatriks(length, matriksa, matriksb);

    cout << "\n<KLIK ENTER UNTUK MULAI MEMPARTISI>"<<endl;
    getch ();
    system("cls");

//Visualisasi Partisi Matriks Genap
    if (n%2 == 0)
    {
        partisi_jml(length, matriksa, matriksb);
    }else
//Visualisasi Partisi Matriks Ganjil
    {
        cout << "Matriks yang baris/kolom nya ganjil"<<endl;
        cout << "\n====================================="<<endl;
        cout << "Partisi untuk Penjumlahan/pengurangan"<<endl;
        cout << "====================================="<<endl;
        partisi_jml(length, matriksa, matriksb);
    
        cout << "\n====================================="<<endl;
        cout << "-------Partisi untuk Perkalian-------"<<endl;
        cout << "====================================="<<endl;
        partisi_ganjilkali(length, matriksa, matriksb);
    }

    cout << "\n"; garis();
    cout << "Pilih Operasi :"<<endl;
    cout << "1. Penjumlahan"<<endl;
    cout << "2. Pengurangan"<<endl;
    cout << "3. Perkalian"<<endl;
    cout << "Pilihan saya <1/2/3> : "; cin >> pilih;

// sedang mempartisi satu per satu
    if ((pilih == 1)||(pilih == 2)||(n%2 == 0))
    {
        int a11[isi_sub], a12[isi_sub], a21[isi_sub], a22[isi_sub], b11[isi_sub], b12[isi_sub], b21[isi_sub], b22[isi_sub];
        baris = 0;
        for (int i = 0; i < length; ++i)
        {
            if (kolom == 0)
            {
                ++baris; 
            }
            kolom++;
            if (((baris >= 1)&&(baris <= n/2))&&((kolom >= 1)&&(kolom <= n/2)))
            {
                a11[help11] = matriksa[i];
                b11[help11] = matriksb[i];
                cout << matriksa[i];
                help11++;
            } else if (((baris >= 1)&&(baris <= n/2))&&((kolom >= n/2)&&(kolom <= n)))
            {
                a12[help12] = matriksa[i];
                b12[help12] = matriksb[i];
                help12++;
            }else if (((baris >= n/2)&&(baris <= n))&&((kolom >= 1)&&(kolom <= n/2)))
            {
                a21[help21] = matriksa[i];
                b21[help21] = matriksb[i];
                help21++;
            }else if (((baris >= n/2)&&(baris <= n))&&((kolom >= n/2)&&(kolom <= n)))
            {
                a22[help22] = matriksa[i];
                b22[help22] = matriksb[i];
                help22++;
            }

            if (kolom >= n)
            {
                kolom = 0;
            }
        }
    }
    // }else if ((pilih == 3)||(n%2 == 1))
    // {
    //     a11[kali_12], a12[kali_11], a21[kali_22], a22[kali_21], b11[kali_11], b12[kali_12], b21[kali_21], b22[kali_22];
    //     baris = 0;
    //     for (int i = 0; i < length; ++i)
    //     {
    //         if (kolom == 0)
    //         {
    //             ++baris; 
    //         }
    //         kolom++;

    //         if ((((baris >= 1)&&(baris <= (n/2)+1))&&((kolom >= 1)&&(kolom <= (n/2)+1)))||(((baris >= 1)&&(baris <= (n/2)+1))&&((kolom >= 1)&&(kolom <= n/2))))
    //         {
    //             ka11[help11] = matriksa[i];;
                
    //         } else if (((baris >= 1)&&(baris <= (n/2)+1))&&((kolom >= (n/2)+1)&&(kolom <= n)))
    //         {
    //             ka12[help12] = matriksa[i];
            
    //         }else if (((baris >= (n/2)+1)&&(baris <= n))&&((kolom >= 1)&&(kolom <= (n/2)+1)))
    //         {
    //             ka21[help21] = matriksa[i];
                
    //         }else if (((baris >= (n/2)+1)&&(baris <= n))&&((kolom >= (n/2)+1)&&(kolom <= n)))
    //         {
    //             ka22[help22] = matriksa[i];
                
    //         } 
            
    //         else if (((baris >= 1)&&(baris <= (n/2)+1))&&((kolom >= 1)&&(kolom <= n/2)))
    //         {
    //             kb11[help11] = matriksb[i];
    //             help11++;
    //         } else if (((baris >= 1)&&(baris <= (n/2)+1))&&((kolom >= n/2)&&(kolom <= n)))
    //         {
    //             kb12[help12] = matriksb[i];
    //             help12++;
    //         }else if (((baris >= (n/2)+1)&&(baris <= n))&&((kolom >= 1)&&(kolom <= n/2)))
    //         {
    //             kb21[help21] = matriksb[i];
    //             help21++;
    //         }else if (((baris >= (n/2)+1)&&(baris <= n))&&((kolom >= n/2)&&(kolom <= n)))
    //         {
    //             kb22[help22] = matriksb[i];
    //             help22++;
    //         }

    //         if (kolom >= n)
    //         {
    //             kolom = 0;
    //         }
    //     }
        
    if (pilih == 1)
    {
        partisi_jml(length, matriksa, matriksb);

        cout <<"Bentuk Sub Matriks"<<endl;
        cout << "A11"<<endl;
        for (int i = 0; i < isi_sub; i++)
        {
            if (kolom == 0)
            {
                ++baris;
                if (baris > 1)
                {
                cout << endl;
                } 
            }
        
            kolom++;
            cout << a11[i] << "    ";

            if (kolom >= n)
            {
                kolom = 0;
            }
        } cout << endl;
        
        
    }
    
    
    
    
    getch();
    return 0;
}