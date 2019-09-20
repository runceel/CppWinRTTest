#include "pch.h"
#include "Person.h"
#include "Person.g.cpp" // é©ìÆê∂ê¨Ç≥ÇÍÇΩ cpp Ç include

namespace winrt::MyComponents::implementation
{
	winrt::hstring Person::Name() const
	{
		return _name;
	}
	void Person::Name(winrt::hstring const& name)
	{
		_name = name;
		_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs(L"Name"));
	}
	winrt::event_token Person::PropertyChanged(winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
	{
		return _propertyChanged.add(handler);
	}
	void Person::PropertyChanged(winrt::event_token const& token)
	{
		_propertyChanged.remove(token);
	}
}