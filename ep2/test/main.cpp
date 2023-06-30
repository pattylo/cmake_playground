#include <gan.h>

int main(int argc, char **argv)
{
    gan::greet();
    int g = gan::add(5,6);
    std::cout<<g<<std::endl;
    return 0;
}