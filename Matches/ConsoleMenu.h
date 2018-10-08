#pragma once
#include <iostream>
using namespace std;
class ConsoleMenu : public IMenu
{
private:
	IAlgorythm* algo = nullptr;
	void SetData(IData* dataToAdd) {
		data = dataToAdd;
	}
public:
	ConsoleMenu(IAlgorythm* algo) : algo(algo)
	{
	}
	~ConsoleMenu();

	// Inherited via IMenu
	virtual void Show() override;
protected:
	/*virtual bool CheckValue(IData* value) {
		int value1 = dynamic_cast<IGenericData<int>*>(value)->GetValue();
		return value1 >= 1 && value1 <= INT64_MAX;
	}*/
	IData* data = nullptr;

	virtual IData& GetData() override;
	virtual IData& ExtractResult(IData& value);
};

