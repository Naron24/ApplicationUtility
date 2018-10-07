#pragma once
#include <type_traits>
template <typename T, typename A>
class Converter
{
public:
	static  A* Convert(T* t) {
		if (std::is_convertible<T*, A*>::value) {
			return  dynamic_cast<A*>(t);
		}
	}

	static  T* Convert(A* a) {
		if (std::is_convertible<T*, A*>::value) {
			return  dynamic_cast<T*>(a);
		}
	}
};