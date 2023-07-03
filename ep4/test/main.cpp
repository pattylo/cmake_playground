#include <gan.h>
#include <fuck.h>

int main(int argc, char **argv)
{
    std::cout<<"HI, FUCK VERSION @: "<<FUCK_VERSION_MAJOR<<"."<<FUCK_VERSION_MINOR<<std::endl;
    gan::greet();
    int g = gan::add(5,6);
    std::cout<<g<<std::endl;
    return 0;
}