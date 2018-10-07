#pragma once
template <typename TInit>
class Initialization
{
private:
	TInit unit;
	int index = 0;
public:
	const virtual TInit GetInit() = 0;
	virtual void UpdateInit(TInit init) = 0; 
	Initialization(int iNdex, TInit init);
};

template<typename TInit>
inline Initialization<TInit>::Initialization(int iNdex, TInit init) : index(iNdex), unit(init)
{
}
