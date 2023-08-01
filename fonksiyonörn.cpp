//toplama hesaplama

#include <iostream>

int toplam(int a,int b) {
    return a+b;
}

int main(){
    int sayi1,sayi2;
    std::cout<<"birinci sayı:";
    std::cin>>sayi1;

    std::cout<<"ikinci sayı";
    std::cin>>sayi2;

    int sonuc= toplam(sayi1,sayi2);
    std::cout<<"sonuc"<<sonuc<<std::endl;

    return 0;

}

//faktöriyel hesaplama

#include <iostream>

int faktoriyel(int n) {
    if (n==0 || n==1)
        return 1;
    else
        return n*faktoriyel(n-1);
}

int main() {
    int sayi;
    std::cout << "sayi gir:";
    std::cin>>sayi;

    int sonuc=faktoriyel(sayi);
    std::cout<<"faktoriyel"<<sonuc<<std::endl;

    return 0;
}

//asal sayı hesaplama

#include <iostream>

bool asalMi(int n) {
    if (n <= 1)
        return false;

    for(int i=2; i <= n/2; ++i) {
        if (n%i==0)
            return false;
    }  
}

int main() {
    int sayi;
    std::cout << "sayi gir:";
    std::cin>>sayi;

    if (asalMi(sayi))
        std::cout<<"asal sayidir"<<std::endl;
    else
        std::cout<<"asal sayi değil"<<std::endl;
    
    return 0;

}