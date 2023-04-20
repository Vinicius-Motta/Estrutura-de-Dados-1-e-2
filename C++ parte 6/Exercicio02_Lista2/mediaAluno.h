

#ifndef MEDIAALUNO_H
#define MEDIAALUNO_H

class mediaAluno {
public:
    mediaAluno();
    mediaAluno(const mediaAluno& orig);
    virtual ~mediaAluno();
    void lerDados ();
    float calcMedia(float n1, float n2, float n3, char tipoMedia);
private:

};

#endif /* MEDIAALUNO_H */

