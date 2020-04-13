#pragma once
template <typename T> class Observable
{
	vector<Observer<T>*> observers;
public:
	void notify(T& source, const string& name) {
		for (auto obs : observers)
			obs->field_changed(source, name);
	}
	void subscribe(Observer<T> * f) { observers.push_back(f); }
	void unsubscribe(Observer<T>* f) { void; }
};

