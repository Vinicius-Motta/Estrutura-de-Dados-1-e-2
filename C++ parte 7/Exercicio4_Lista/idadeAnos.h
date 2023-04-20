#ifndef IDADEANOS_H
#define IDADEANOS_H

class idadeAnos {
public:
    idadeAnos();
    idadeAnos(const idadeAnos& orig);
    virtual ~idadeAnos();
    void lerDados();
    int lerIdade (int dias, int meses, int anos);
private:

};

#endif /* IDADEANOS_H */

