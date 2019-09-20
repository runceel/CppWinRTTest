#pragma once

#include "Person.g.h" // ê∂ê¨Ç≥ÇÍÇΩÉwÉbÉ_Å[Ç include

namespace winrt::MyComponents::implementation
{
	struct Person : PersonT<Person>
	{
		Person() = default;
		winrt::hstring Name() const;
		void Name(winrt::hstring const& name);

		winrt::event_token PropertyChanged(winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
		void PropertyChanged(winrt::event_token const& token);

	private:
		winrt::hstring _name;
		winrt::event<winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler> _propertyChanged;
	};
}

namespace winrt::MyComponents::factory_implementation
{
	struct Person : PersonT<Person, implementation::Person>
	{
	};
}