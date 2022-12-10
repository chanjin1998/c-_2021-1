#include "Kvector.h"

class Bvector : public Kvector {

protected:

    unsigned int* u_m;
    const int NBITS;
public:

    Bvector(int nbits = 32);
    Bvector(const Bvector& e);
    bool bit(int pos) const; //pos번째 bit의 값 T or F 리턴
    void set(int pos); //pos번째 bit의 값을 1로 변경 
    void reset(int pos); //pos번째 bit의 값을 0으로 변경
    int size() const { return NBITS; } // NBITS return
    void clear() { for (int i = 0; i < len; i++) m[i] = 0; } //모든 bits를 false(0)로 clear
    void print() const;
    bool operator[](int idx) const { return bit(idx); } //reference를 반환하지 않고 객체를 반환

    Bvector& operator=(const Bvector& v);
    friend std::ostream& operator<<(std::ostream& os, const Bvector& v);

};