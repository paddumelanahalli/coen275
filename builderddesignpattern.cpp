/*
Builder
The Builder Creational Pattern is used to separate the construction of a complex object 
from its representation so that the same construction process can create different objects
 representations.

Problem
We want to construct a complex object, however we do not want to have a complex 
constructor member or one that would need many arguments.

Solution
Define an intermediate object whose member functions define the desired object 
part by part before the object is available to the client. Builder Pattern lets us 
defer the construction of the 
object until all the options for creation have been specified.

*/


#include <string>
#include <iostream>
#include <memory>
using namespace std;

// "Product"
class Pizza
{
public:
	void setDough(const string& dough)
	{
		m_dough = dough;
	}
	void setSauce(const string& sauce)
	{
		m_sauce = sauce;
	}
	void setTopping(const string& topping)
	{
		m_topping = topping;
	}
	void open() const
	{
		cout << "Pizza with " << m_dough << " dough, " << m_sauce << " sauce and "
			<< m_topping << " topping. Mmm." << endl;
	}
private:
	string m_dough;
	string m_sauce;
	string m_topping;
};

// "Abstract Builder"
class PizzaBuilder
{
public:
	virtual ~PizzaBuilder() {};

	Pizza* getPizza()
	{
		return m_pizza.get();
	}
	void createNewPizzaProduct()
	{
		m_pizza = make_unique<Pizza>();
	}
	virtual void buildDough() = 0;
	virtual void buildSauce() = 0;
	virtual void buildTopping() = 0;
protected:
	unique_ptr<Pizza> m_pizza;
};

//----------------------------------------------------------------

class HawaiianPizzaBuilder : public PizzaBuilder
{
public:
	virtual ~HawaiianPizzaBuilder() {};

	virtual void buildDough()
	{
		m_pizza->setDough("cross");
	}
	virtual void buildSauce()
	{
		m_pizza->setSauce("mild");
	}
	virtual void buildTopping()
	{
		m_pizza->setTopping("ham+pineapple");
	}
};

class SpicyPizzaBuilder : public PizzaBuilder
{
public:
	virtual ~SpicyPizzaBuilder() {};

	virtual void buildDough()
	{
		m_pizza->setDough("pan baked");
	}
	virtual void buildSauce()
	{
		m_pizza->setSauce("hot");
	}
	virtual void buildTopping()
	{
		m_pizza->setTopping("pepperoni+salami");
	}
};

//----------------------------------------------------------------

class Cook
{
public:
	void openPizza()
	{
		m_pizzaBuilder->getPizza()->open();
	}
	void makePizza(PizzaBuilder* pb)
	{
		m_pizzaBuilder = pb;
		m_pizzaBuilder->createNewPizzaProduct();
		m_pizzaBuilder->buildDough();
		m_pizzaBuilder->buildSauce();
		m_pizzaBuilder->buildTopping();
	}
private:
	PizzaBuilder* m_pizzaBuilder;
};

int main()
{
	Cook cook;
	HawaiianPizzaBuilder hawaiianPizzaBuilder;
	SpicyPizzaBuilder    spicyPizzaBuilder;

	cook.makePizza(&hawaiianPizzaBuilder);
	cook.openPizza();

	cook.makePizza(&spicyPizzaBuilder);
	cook.openPizza();
}

/*output

Pizza with cross dough, mild sauce and ham+pineapple topping. Mmm.
Pizza with pan baked dough, hot sauce and pepperoni+salami topping. Mmm.

*/
