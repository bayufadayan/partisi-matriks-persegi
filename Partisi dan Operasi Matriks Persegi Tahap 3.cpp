#include <iostream>
#include <conio.h>
using namespace std;

void garis (){
    cout << "--------------------"<<endl;
}

int main (){
//pendeklarasian
    int n;
    int kolom = 0, baris = 0;
    
//header
    cout << "========================================="<<endl;
    cout << "---------PARTISI MATRIKS PERSEGI---------"<<endl;
    cout << "========================================="<<endl;

    cout << "Matriks Persegi (nxn)"<<endl;
    cout << "Masukan jumlah baris/kolom : "; 
    cin >> n;

    int length = n*n;
    int matriksa[length], matriksb[length];

//pengisian matriks
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

//visualisasi matriks
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

    cout << "\n<KLIK ENTER UNTUK MULAI MEMPARTISI>"<<endl;
    getch ();
    system("cls");

//Partisi Matriks Genap
    if (n%2 == 0)
    {
    //Partisi Matriks Genap A
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

    //Partisi Matriks Genap B
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
        
          //Hasil penjumlahan 
        cout << "\n=================="<<endl;
        cout << "Hasil penjumlahan"<<endl;
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
            cout << matriksa[i]+matriksb[i]  << "  ";

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
        
          //Hasil pengurangan
        cout << "\n=================="<<endl;
        cout << "Hasil pengurangan"<<endl;
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
            cout << matriksa[i]-matriksb[i]  << "  ";

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
        
        
        
       /* proses perkalian
        
  
    
    int simpan_kali=0;
    int matriks_kali[length],hasil_kali;
    
    for (int i = 0; i < length; ++i)
    {
       
       if (i==0) {
        
        hasil_kali= matriksa[i]*matriksb[i];
        simpan_kali = simpan_kali + hasil_kali;
         
       } else {
       
       
       for (int j= 0;j<n; ++j) {


        hasil_kali= matriksa[i]*matriksb[i+(n-2)];
        simpan_kali = simpan_kali + hasil_kali;
        }}
        
      matriks_kali [i] = simpan_kali;
      simpan_kali =0;}
            
            
     
        cout << "\n=================="<<endl;
        cout << "Hasil perkalian"<<endl;
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
            cout << matriks_kali [i] << "  ";

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
        } cout << endl; */
        
               
            
            
            
    
    }else
//Partisi Matriks Ganjil
    {
    //Partisi Matriks Ganjil A untuk perkalian
        cout << "Matriks yang baris/kolom nya ganjil"<<endl;
        cout << "Partisi untuk Perkalian"<<endl;
        cout << "====================================="<<endl;
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

        cout << "\nPartisi untuk Penjumlahan/pengurangan"<<endl;
        cout << "====================================="<<endl;
    //Partisi Matriks Ganjil B untuk penjumlahan/pengurangan
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

    //Partisi Matriks Ganjil B untuk penjumlahan/pengurangan
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
    
    getch();
    return 0;
}