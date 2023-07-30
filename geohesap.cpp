#include <iostream>
using namespace std;

class geometrikSekil {
protected:
    double alan;
    double cevre;

public:
    geometrikSekil() : alan(0), cevre(0) {}

    virtual void hesaplaAlan() {
        cout << "geometrikSekil sinifinin hesaplaAlan() fonksiyonu" << endl;
    }

    virtual void hesaplaCevre() {
        cout << "geometrikSekil sinifinin hesaplaCevre() fonksiyonu" << endl;
    }

    double getAlan() const {
        return alan;
    }

    double getCevre() const {
        return cevre;
    }
};

class dikdortgen : public geometrikSekil {
private:
    double kenar1;
    double kenar2;

public:
    dikdortgen(double kenar1, double kenar2) : kenar1(kenar1), kenar2(kenar2) {}

    void hesaplaAlan() override {
        alan = kenar1 * kenar2;
        cout << "dikdortgen sinifinin hesaplaAlan() fonksiyonu" << endl;
    }

    void hesaplaCevre() override {
        cevre = 2 * (kenar1 + kenar2);
        cout << "dikdortgen sinifinin hesaplaCevre() fonksiyonu" << endl;
    }
};

int main() {
    dikdortgen d(5, 8);
    d.hesaplaAlan();
    d.hesaplaCevre();

    cout << "Alan: " << d.getAlan() << " birim kare" << endl;
    cout << "Cevre: " << d.getCevre() << " birim" << endl;

    return 0;
}