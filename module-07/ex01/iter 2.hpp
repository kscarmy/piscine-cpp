#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>


template <typename T>
	void iter (T *tab, size_t size, void (*founction)(T &) ) {
		for (size_t i=0; i < size; i++){
			founction(tab[i]);
		}
}

#endif