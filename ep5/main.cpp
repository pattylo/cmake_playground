// #include <gan.h>
#include <haha.h>
#include <iostream>

int main(int argc, char **argv)
{
    std::cout<<"HI, HAHA VERSION @: "<<HAHA_VERSION_MAJOR<<"."<<HAHA_VERSION_MINOR<<std::endl;
    
#ifdef USER_ADDER
    gan::greet();
    int g = gan::add(5,6);
    std::cout<<g<<std::endl;
#else
    std::cout<<"no gan, no add"<<std::endl;
#endif

    return 0;
}