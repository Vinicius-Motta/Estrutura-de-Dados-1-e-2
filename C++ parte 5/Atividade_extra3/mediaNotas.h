

#ifndef MEDIANOTAS_H
#define MEDIANOTAS_H

class mediaNotas {
public:
    mediaNotas();
    mediaNotas(const mediaNotas& orig);
    virtual ~mediaNotas();
    void lerDados();
    void calcMedia(float *A, float *B, float *C, float *media);
private:

};

#endif /* MEDIANOTAS_H */

