#ifndef MEDIAALUNO_H
#define MEDIAALUNO_H

class MediaAluno {
public:
    MediaAluno();
    MediaAluno(const MediaAluno& orig);
    virtual ~MediaAluno();
    void lerDados ();
    float calcMedia(float n1, float n2, float n3, float media);
private:

};

#endif /* MEDIAALUNO_H */

