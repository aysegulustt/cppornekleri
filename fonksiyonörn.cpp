//toplama

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
