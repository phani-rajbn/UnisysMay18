
#pragma once


// CSinkClass command target

class CSinkClass : public CCmdTarget
{
	DECLARE_DYNAMIC(CSinkClass)

public:
	CSinkClass();
	virtual ~CSinkClass();

	virtual void OnFinalRelease();

protected:
	DECLARE_MESSAGE_MAP()
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
public:
	//Event handlers for UR Functions...
	void Click();
	void Apple();
};


