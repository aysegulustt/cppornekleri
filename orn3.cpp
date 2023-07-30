#include <iostream>

int main() {
    int size;
    std::cout << "dizi boyutu:";
    std::cin>>size;

    int*arr = new int[size];

    if(arr !=nullptr) {

        std::cout <<"dizi elemanlarını gir:\n";
        for(int i = 0; i<size; i++) {
            std::cout <<"dizi["<<i<<"]:";
            std::cin>>arr[i];
        }
        int sum = 0;
        for(int i=0;i<size;i++) {
            sum+=arr[i];
        }
        std::cout << "Dizi elemanlarını toplamı:"<<sum<<std::endl;

        delete[] arr;
        arr=nullptr;
    } else {
        std::cout<<"bellek aktarımı başarısız!"<<std::endl;
        return 1;
    }
    return 0;
}
