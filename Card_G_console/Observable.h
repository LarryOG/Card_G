#pragma once
template <typename T> class Observable
{
	vector<Observer<T>*> observers;
public:
	void notify(T& source, const string& name)
	{
		for (auto obs : observers)
			obs->field_changed(source, name);
	}
	void subscribe(Observer<T> * obs) { observers.push_back(obs); }
	void unsubscribe(Observer<T>* observer)
	{
		observers.erase(remove(observers.begin(), observers.end(), observer),observers.end());
	}
};

