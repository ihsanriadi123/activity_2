#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a +b)/2;
}

string status1(double r){
    if (r >=60){
        return "lulus";
    }else {
        return "gagal";
    }
}

string status2(double r, double n){
    if(r >=60 && n >= 70){
        return "lulus";
    }else {

    }
 }

string status3 (double r, double n){
    if (r >= 60 || n >=70){
        return "lulus";
    }else {
        return "gagal";
    }
}

int main(){
    double nilaimath, nilaibindo;


    cout << "masukkan nilai matematika :";
    cin >> nilaimath;
    cout << "masukkan nilai bahasa indonesia :";
    cin >> nilaibindo;

    //rerata = (nilaimath + nilaibindo)/2;

    //rata = rerata(nilaimath, nilaibindo);
    //st = status(rerata(nilaimath, nilaibindo));

    //if (rata>= 60) {
    //  status  = "lulus";
    // }else {
    //  status  = "gagal";
    //}

    cout << "nilai rata-rata nya : " << rerata(nilaimath, nilaibindo);
    cout << "\nstatus kelulusannya : " << status1(rerata(nilaimath, nilaibindo));
    cout << "\nstatus kelulusannya : " << status2(rerata(nilaimath, nilaibindo), nilaimath);
    cout << "\nstatus kelulusannya : " << status3(rerata(nilaimath, nilaibindo), nilaimath);

}