#include "Span.hpp"


int main(void)
{
    Span jean(3);
    jean.addNumber(2);
    jean.addNumber(9);
    jean.addNumber(5);
    jean.addNumber(1);
    std::cout << "longest : " << jean.longestSpan() << std::endl;
    std::cout << "shortest : " << jean.shortestSpan() << std::endl;

    std::cout << "-----------------------" << std::endl;

    Span jeannot(10000);
    for (int i=0; i<10000; i++){
        jeannot.addNumber(i * 3 + 3);
    }
    std::cout << "longest : " << jeannot.longestSpan() << std::endl;
    std::cout << "shortest : " << jeannot.shortestSpan() << std::endl;

    std::cout << "-----------------------" << std::endl;

    Span didier(2);
    std::cout << "longest : " << didier.longestSpan() << std::endl;
    std::cout << "shortest : " << didier.shortestSpan() << std::endl;
    didier.addNumber(1);
    std::cout << "longest : " << didier.longestSpan() << std::endl;
    std::cout << "shortest : " << didier.shortestSpan() << std::endl;
    didier.addNumber(10);
    std::cout << "longest : " << didier.longestSpan() << std::endl;
    std::cout << "shortest : " << didier.shortestSpan() << std::endl;
    return 0;
}
