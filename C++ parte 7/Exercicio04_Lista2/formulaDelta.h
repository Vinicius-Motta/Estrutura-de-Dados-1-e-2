#ifndef FORMULADELTA_H
#define FORMULADELTA_H

class formulaDelta {
public:
    formulaDelta();
    formulaDelta(const formulaDelta& orig);
    virtual ~formulaDelta();
    void lerDados();
    double calcularDelta(double a, double b, double c);
private:

};

#endif /* FORMULADELTA_H */

