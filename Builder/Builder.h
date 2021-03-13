#include <iostream>

class PersonBuider{
public:
    virtual void createHead() = 0;
    virtual void createHandLeg() = 0;
    virtual void createBody() = 0;

};

class PersonThinBuilder:public PersonBuider{
public:
    virtual void createHead() ;
    virtual void createHandLeg() ;
    virtual void createBody() ; 
};

class PersonFatBuilder:public PersonBuider{
public:
    virtual void createHead() ;
    virtual void createHandLeg() ;
    virtual void createBody() ; 
};

class PersonDirector{
private:
    PersonBuider *pb;
public:
    PersonDirector(PersonBuider *pb_in):pb(pb_in){};
    void CreatePerson();
};
