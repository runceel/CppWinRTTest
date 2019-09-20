#pragma once

#include "Person.g.h" // 生成されたヘッダーを include

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