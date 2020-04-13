#pragma once
template<typename T> class Observer
{
public:
	virtual ~Observer() = default;
	virtual void field_changed(T& source, const string& field_name) = 0;
};
