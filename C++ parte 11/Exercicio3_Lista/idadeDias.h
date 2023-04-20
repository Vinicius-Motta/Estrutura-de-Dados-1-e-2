#ifndef IDADEDIAS_H
#define IDADEDIAS_H

class idadeDias {
public:
    idadeDias();
    idadeDias(const idadeDias& orig);
    virtual ~idadeDias();
    void lerDados();
    int lerIdade (int dias, int meses, int anos);
private:

};

#endif /* IDADEDIAS_H */

