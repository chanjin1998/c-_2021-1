#include "Kvector.h"

class Bvector : public Kvector {

protected:

    unsigned int* u_m;
    const int NBITS;
public:

    Bvector(int nbits = 32);
    Bvector(const Bvector& e);
    bool bit(int pos) const; //pos��° bit�� �� T or F ����
    void set(int pos); //pos��° bit�� ���� 1�� ���� 
    void reset(int pos); //pos��° bit�� ���� 0���� ����
    int size() const { return NBITS; } // NBITS return
    void clear() { for (int i = 0; i < len; i++) m[i] = 0; } //��� bits�� false(0)�� clear
    void print() const;
    bool operator[](int idx) const { return bit(idx); } //reference�� ��ȯ���� �ʰ� ��ü�� ��ȯ

    Bvector& operator=(const Bvector& v);
    friend std::ostream& operator<<(std::ostream& os, const Bvector& v);

};