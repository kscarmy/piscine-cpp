#ifndef CLASSES_HPP
# define CLASSES_HPP

# include <iostream>
# include <string>

class Base
{
	public:

		Base();
		virtual	~Base();
	private:
};

class A : public Base	{};

class B : public Base	{};

class C : public Base	{};



#endif