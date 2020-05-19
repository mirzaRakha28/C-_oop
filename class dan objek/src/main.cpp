#include<iostream>
#include<string>
using namespace std;

// class Mahasiswa{
//     public:
//         string nama ;
//         string nim;
//         string jurusan;
// };

/*kelas contructor*/
class Mahasiswa{
    public :
        string nama;
        string nim;
        double ipk;
    // ini adalah contructor
        Mahasiswa (string nama,string nim,double ipk) {
            Mahasiswa::nama = nama;
            Mahasiswa::nim = nim;
            Mahasiswa::ipk = ipk;
        }

        string getNama (){
            return Mahasiswa::nama;
        }
        string getNim(){
            return Mahasiswa::nim;
        }
        double getIpk(){
            return Mahasiswa::ipk;
        }
        void katrolNilai (const double &tambahnilai ){
            Mahasiswa::ipk = Mahasiswa::ipk + tambahnilai;
            // return Mahasiswa::ipk + tambahnilai;
        }

};



int main(int argc, char const *argv[])
{
    
    Mahasiswa data1 = Mahasiswa("mirza rakha dwi pradana","105217024",4.00);
     data1.katrolNilai(1);



    cout << "nama : " << data1.getIpk();
    // data1.nama = "mirza rakha dwi pradana";
    // data1.jurusan = "ilmu komputer";
    // data1.nim = "105217024";

    // cout << data1.nama; 
    return 0;
}
