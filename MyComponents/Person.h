#pragma once

#include "Person.g.h" // �������ꂽ�w�b�_�[�� include

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