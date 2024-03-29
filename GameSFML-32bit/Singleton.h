#ifndef SINGLETON_H
#define SINGLETON_H

#include <memory>

template <typename TypeName>
class Singleton {

protected:
	virtual ~Singleton() {};
	Singleton();
private:

public:
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	static TypeName& getInstance();
};


template<typename TypeName>
Singleton<TypeName>::Singleton() {
}

template<typename TypeName>
TypeName & Singleton<TypeName>::getInstance() {

	static std::unique_ptr<TypeName> instance = std::unique_ptr<TypeName>(new TypeName());
	return *instance;
}




#endif // !SINGLETON_H
