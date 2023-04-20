
#ifndef NUMMULTIPLOS_H
#define NUMMULTIPLOS_H

class numMultiplos {
public:
    int n1, n2;
    numMultiplos();
    numMultiplos(const numMultiplos& orig);
    virtual ~numMultiplos();
    void lerDados();
    void verificar(int n1, int n2);
private:

};

#endif /* NUMMULTIPLOS_H */

