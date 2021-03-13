#include "Builder.h"

void PersonThinBuilder::createHead(){
    std::cout<<"create thin head"<<std::endl;
}
void PersonThinBuilder::createHandLeg(){
    std::cout<<"create thin hands and legs"<<std::endl;
}
void PersonThinBuilder::createBody(){
    std::cout<<"create thin body"<<std::endl;
} 

void PersonFatBuilder::createHead(){
    std::cout<<"create fat head"<<std::endl;
}
void PersonFatBuilder::createHandLeg(){
    std::cout<<"create fat hands and legs"<<std::endl;
}
void PersonFatBuilder::createBody(){
    std::cout<<"create fat body"<<std::endl;
}

void PersonDirector::CreatePerson(){
    pb->createHead();
    pb->createHandLeg();
    pb->createBody();
}


int main(){
    PersonBuider *pb1 = new PersonThinBuilder();
    PersonDirector pb1_director(pb1);
    pb1_director.CreatePerson();
}