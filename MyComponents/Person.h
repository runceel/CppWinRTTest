#pragma once

#include "Person.g.h" // ¶¬‚³‚ê‚½ƒwƒbƒ_[‚ğ include

namespace winrt::MyComponents::implementation
{
	struct Person : PersonT<Person>
	{
	};
}

namespace winrt::MyComponents::factory_implementation
{
	struct Person : PersonT<Person, implementation::Person>
	{
	};
}