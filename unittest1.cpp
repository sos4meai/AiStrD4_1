#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Sem4_Lab1/List.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ListTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		
		TEST_METHOD(list_creates_with_size_0)
		{
			List<int> list;
			Assert::IsTrue(list.size_equal(0));
		}
		
		TEST_METHOD(creating_list_is_empty)
		{
			List<int> list;
			Assert::IsTrue(list.isEmpty());
		}
		/***************************************************/
		TEST_METHOD(push_back_empty_list_int) 
		{
			List<int> list;
			list.push_back(5);
			Assert::IsFalse(list.isEmpty());
		}

		TEST_METHOD(push_back_empty_list_float) 
		{
			List<float> list;
			list.push_back(5.67);
			Assert::IsFalse(list.isEmpty());
		}

		TEST_METHOD(push_back_empty_list_char) 
		{
			List<char> list;
			list.push_back('5');
			Assert::IsFalse(list.isEmpty());
		}

		TEST_METHOD(push_back_increase_size_int) 
		{
			List<int> list;
			list.push_back(5);
			Assert::IsTrue(list.size_equal(1));
		}

		TEST_METHOD(push_back_increase_size_float) 
		{
			List<float> list;
			list.push_back(5.98);
			Assert::IsTrue(list.size_equal(1));
		}

		TEST_METHOD(push_back_increase_size_char) 
		{
			List<char> list;
			list.push_back('5');
			Assert::IsTrue(list.size_equal(1));
		}

		TEST_METHOD(push_back_correct_data_int)
		{
			List<int> list;
			list.push_back(5);
			Assert::IsTrue(list.tail_equal(5));
		}

		TEST_METHOD(push_back_correct_data_float)
		{
			List<float> list;
			list.push_back(5.09);
			Assert::IsTrue(list.tail_equal(5.09));
		}

		TEST_METHOD(push_back_correct_data_char)
		{
			List<char> list;
			list.push_back('5');
			Assert::IsTrue(list.tail_equal('5'));
		}

		TEST_METHOD(push_back_add_in_tail_int)
		{
			List<int> list;
			for (int i = 0; i < 6; i++)
				list.push_back(i);
			Assert::IsTrue(list.tail_equal(5));
		}

		TEST_METHOD(push_back_add_in_tail_float)
		{
			List<float> list;
			list.push_back(1.1);
			list.push_back(1.2);
			list.push_back(1.3);
			list.push_back(2.1);
			list.push_back(2.2);
			Assert::IsTrue(list.tail_equal(2.2));
		}

		TEST_METHOD(push_back_add_in_tail_char)
		{
			List<char> list;
			for (char i = '1'; i < '6'; i++)
				list.push_back(i);
			Assert::IsTrue(list.tail_equal('5'));
		}
		//push front
		TEST_METHOD(push_front_empty_list_int) 
		{
			List<int> list;
			list.push_front(1);
			Assert::IsFalse(list.isEmpty());
		}

		TEST_METHOD(push_front_empty_list_float)
		{
			List<float> list;
			list.push_front(1.1);
			Assert::IsFalse(list.isEmpty());
		}

		TEST_METHOD(push_front_empty_list_char)
		{
			List<int> list;
			list.push_front('1');
			Assert::IsFalse(list.isEmpty());
		}

		TEST_METHOD(push_front_increase_size_int) 
		{
			List<int> list;
			list.push_front(1);
			Assert::IsTrue(list.size_equal(1));
		}

		TEST_METHOD(push_front_increase_size_float)
		{
			List<float> list;
			list.push_front(1.1);
			Assert::IsTrue(list.size_equal(1));
		}

		TEST_METHOD(push_front_increase_size_char)
		{
			List<char> list;
			list.push_front('1');
			Assert::IsTrue(list.size_equal(1));
		}

		TEST_METHOD(push_front_correct_data_int) 
		{
			List<int> list;
			list.push_front(0);
			Assert::IsTrue(list.tail_equal(0));
		}

		TEST_METHOD(push_front_correct_data_float)
		{
			List<float> list;
			list.push_front(0.2);
			Assert::IsTrue(list.tail_equal(0.2));
		}

		TEST_METHOD(push_front_correct_data_char)
		{
			List<char> list;
			list.push_front('0');
			Assert::IsTrue(list.tail_equal('0'));
		}

		TEST_METHOD(push_front_change_head_int) 
		{
			List<int> list;
			for (int i = 0; i <= 5; i++)
				list.push_front(i);
			Assert::IsTrue(list.head_equal(5));
		}

		TEST_METHOD(push_front_change_head_float)
		{
			List<float> list;
			list.push_front(4.8);
			list.push_front(7.9);
			list.push_front(2.28);
			list.push_front(9.08);
			Assert::IsTrue(list.head_equal(9.08));
		}
		
		TEST_METHOD(push_front_change_head_char)
		{
			List<char> list;
			for (char i = '1'; i <= '5'; i++)
				list.push_front(i);
			Assert::IsTrue(list.head_equal('5'));
		}
		//pop back
		TEST_METHOD(pop_back_list_with_one_elem_int)
		{
			List<int> list;
			list.push_back(1);
			list.pop_back();
			Assert::IsTrue(list.isEmpty());
		}

		TEST_METHOD(pop_back_list_with_one_elem_float)
		{
			List<float> list;
			list.push_back(1.8);
			list.pop_back();
			Assert::IsTrue(list.isEmpty());
		}

		TEST_METHOD(pop_back_list_with_one_elem_char)
		{
			List<char> list;
			list.push_back('1');
			list.pop_back();
			Assert::IsTrue(list.isEmpty());
		}

		TEST_METHOD(pop_back_delete_last_elem_int) 
		{
			List<int> list;
			for (int i = 0; i < 6; i++)
				list.push_back(i);
			list.pop_back();
			Assert::IsTrue(list.tail_equal(4));
		}

		TEST_METHOD(pop_back_delete_last_elem_float)
		{
			List<float> list;
			list.push_back(1.1);
			list.push_back(2.2);
			list.push_back(3.3);
			list.push_back(4.4);
			list.pop_back();
			Assert::IsTrue(list.tail_equal(3.3));
		}

		TEST_METHOD(pop_back_delete_last_elem_char)
		{
			List<char> list;
			for (char i = '1'; i < '6'; i++)
				list.push_back(i);
			list.pop_back();
			Assert::IsTrue(list.tail_equal('4'));
		}

		TEST_METHOD(pop_back_decrease_size_int) 
		{
			List<int> list;
			list.push_back(1);
			list.pop_back();
			Assert::IsTrue(list.size_equal(0));
		}

		TEST_METHOD(pop_back_decrease_size_float)
		{
			List<float> list;
			list.push_back(1.7);
			list.pop_back();
			Assert::IsTrue(list.size_equal(0));
		}

		TEST_METHOD(pop_back_decrease_size_char)
		{
			List<char> list;
			list.push_back('1');
			list.pop_back();
			Assert::IsTrue(list.size_equal(0));
		}
		/****************************************************/
		TEST_METHOD(pop_back_empty_list_exception)
		{
			List<int> list;
			try
			{
				list.pop_back();
			}
			catch (int error)
			{
				Assert::AreEqual(0, error);
			}
		}
		//pop front
		TEST_METHOD(pop_front_list_with_one_elem_int)
		{
			List<int> list;
			list.push_back(1);
			list.pop_front();
			Assert::IsTrue(list.isEmpty());
		}

		TEST_METHOD(pop_front_list_with_one_elem_float)
		{
			List<float> list;
			list.push_back(1.9);
			list.pop_front();
			Assert::IsTrue(list.isEmpty());
		}

		TEST_METHOD(pop_front_list_with_one_elem_char)
		{
			List<char> list;
			list.push_back('1');
			list.pop_front();
			Assert::IsTrue(list.isEmpty());
		}

		TEST_METHOD(pop_front_delete_last_elem_int) 
		{
			List<int> list;
			for (int i = 0; i < 6; i++)
				list.push_back(i);
			list.pop_front();
			Assert::IsTrue(list.head_equal(1));
		}

		TEST_METHOD(pop_front_delete_last_elem_float)
		{
			List<float> list;
			list.push_back(1.1);
			list.push_back(1.2);
			list.push_back(1.3);
			list.push_back(1.4);
			list.pop_front();
			Assert::IsTrue(list.head_equal(1.2));
		}

		TEST_METHOD(pop_front_delete_last_elem_char)
		{
			List<char> list;
			for (int i = '1'; i < '6'; i++)
				list.push_back(i);
			list.pop_front();
			Assert::IsTrue(list.head_equal('2'));
		}
		/**************************************************************/
		/**************************************************************/
		TEST_METHOD(pop_front_decrease_size_int) 
		{
			List<int> list;
			list.push_back(1);
			list.pop_front();
			Assert::IsTrue(list.size_equal(0));
		}

		TEST_METHOD(pop_front_decrease_size_char)
		{
			List<char> list;
			list.push_back('1');
			list.pop_front();
			Assert::IsTrue(list.size_equal(0));
		}

		TEST_METHOD(pop_front_empty_list_exception_int)
		{
			List<int> list;
			try
			{
				list.pop_back();
			}
			catch (int error)
			{
				Assert::AreEqual(0, error);
			}
		}

		TEST_METHOD(pop_front_empty_list_exception_char)
		{
			List<char> list;
			try
			{
				list.pop_back();
			}
			catch (int error)
			{
				Assert::AreEqual(0, error);
			}
		}
		//insert
		TEST_METHOD(insert_index_0_add_head_empty_list_int) 
		{
			List<int> list;
			list.insert(2, 0);
			Assert::IsFalse(list.isEmpty());
		}

		TEST_METHOD(insert_index_0_add_head_empty_list_char)
		{
			List<char> list;
			list.insert('2', 0);
			Assert::IsFalse(list.isEmpty());
		}

		TEST_METHOD(insert_index_size_add_tail_int) 
		{
			List<int> list;
			for (int i = 1; i < 6; i++)
				list.push_back(i);
			list.insert(6, list.get_size());
			Assert::IsTrue(list.tail_equal(6));
		}

		TEST_METHOD(insert_index_size_add_tail_char)
		{
			List<char> list;
			for (int i = '1'; i < '6'; i++)
				list.push_back(i);
			list.insert('6', list.get_size());
			Assert::IsTrue(list.tail_equal('6'));
		}

		TEST_METHOD(insert_increase_size_int) 
		{
			List<int> list;
			list.push_back(1);
			list.push_back(3);
			list.insert(2, 1);
			Assert::IsTrue(list.size_equal(3));
		}

		TEST_METHOD(insert_increase_size_char)
		{
			List<char> list;
			list.push_back('1');
			list.push_back('3');
			list.insert('2', 1);
			Assert::IsTrue(list.size_equal(3));
		}

		TEST_METHOD(insert_index_greater_than_size_int) 
		{
			List<int> list;
			list.push_back(1);
			list.push_back(3);
			try
			{
				list.insert(6, 6);
			}
			catch (int error)
			{
				Assert::AreEqual(1, error);
			}
		}

		TEST_METHOD(insert_index_greater_than_size_char)
		{
			List<char> list;
			list.push_back('1');
			list.push_back('3');
			try
			{
				list.insert('6', 6);
			}
			catch (int error)
			{
				Assert::AreEqual(1, error);
			}
		}
		//at
		TEST_METHOD(at_is_correct_index_0_int)
		{
			List<int> list;
			list.push_back(1);
			list.push_back(3);
			Assert::AreEqual(1, list.at(0));
		}

		TEST_METHOD(at_is_correct_index_0_char)
		{
			List<char> list;
			list.push_back('1');
			list.push_back('3');
			Assert::AreEqual('1', list.at(0));
		}

		TEST_METHOD(at_is_correct_index_size_int)
		{
			List<int> list;
			list.push_back(1);
			list.push_back(2);
			list.push_back(3);
			Assert::AreEqual(3, list.at(list.get_size() - 1));
		}

		TEST_METHOD(at_is_correct_index_size_char)
		{
			List<char> list;
			list.push_back('1');
			list.push_back('2');
			list.push_back('3');
			Assert::AreEqual('3', list.at(list.get_size() - 1));
		}

		TEST_METHOD(at_is_correct_middle_int)
		{
			List<int> list;
			list.push_back(1); //0
			list.push_back(2); //1
			list.push_back(3); //2
			Assert::AreEqual(2, list.at(1));
		}

		TEST_METHOD(at_is_correct_middle_char)
		{
			List<char> list;
			list.push_back('1'); //0
			list.push_back('2'); //1
			list.push_back('3'); //2
			Assert::AreEqual('2', list.at(1));
		}

		TEST_METHOD(insert_add_middle_int)
		{
			List<int> list;
			list.push_back(1);//0
			list.push_back(3);//1
			list.insert(2, 1);// move 3
			Assert::AreEqual(2, list.at(1));
		}

		TEST_METHOD(insert_add_middle_char)
		{
			List<char> list;
			list.push_back('1');//0
			list.push_back('3');//1
			list.insert('2', 1);// move 3
			Assert::AreEqual('2', list.at(1));
		}

		TEST_METHOD(at_index_greater_than_size_int)
		{
			List<int> list;
			list.push_back(1); //0
			list.push_back(2); //1
			list.push_back(3); //2
			try
			{
				list.at(999);
			}
			catch (int error)
			{
				Assert::AreEqual(1, error);
			}
		}

		TEST_METHOD(at_index_greater_than_size_char)
		{
			List<char> list;
			list.push_back('1'); //0
			list.push_back('2'); //1
			list.push_back('3'); //2
			try
			{
				list.at(999);
			}
			catch (int error)
			{
				Assert::AreEqual(1, error);
			}
		}
		//remove
		TEST_METHOD(remove_delete_first_int)
		{
			List<int> list;
			list.push_back(1); //0
			list.push_back(2); //1
			list.push_back(3); //2
			list.remove(0);
			Assert::IsTrue(list.head_equal(2));
		}

		TEST_METHOD(remove_delete_first_char)
		{
			List<char> list;
			list.push_back('1'); //0
			list.push_back('2'); //1
			list.push_back('3'); //2
			list.remove(0);
			Assert::IsTrue(list.head_equal('2'));
		}

		TEST_METHOD(remove_delete_last_int)
		{
			List<int> list;
			list.push_back(1); //0
			list.push_back(2); //1
			list.push_back(3); //2
			list.remove(2);
			Assert::IsTrue(list.tail_equal(2));
		}

		TEST_METHOD(remove_delete_last_char)
		{
			List<char> list;
			list.push_back('1'); //0
			list.push_back('2'); //1
			list.push_back('3'); //2
			list.remove(2);
			Assert::IsTrue(list.tail_equal('2'));
		}

		TEST_METHOD(remove_middle_int)
		{
			List<int> list;
			list.push_back(1); //0
			list.push_back(2); //1
			list.push_back(3); //2
			list.push_back(4); //3
			list.push_back(5); //4
			list.push_back(6); //5
			list.remove(3);
			Assert::AreEqual(5, list.at(3));
		}

		TEST_METHOD(remove_middle_char)
		{
			List<char> list;
			list.push_back('1'); //0
			list.push_back('2'); //1
			list.push_back('3'); //2
			list.push_back('4'); //3
			list.push_back('5'); //4
			list.push_back('6'); //5
			list.remove(3);
			Assert::AreEqual('5', list.at(3));
		}

		TEST_METHOD(remove_position_greater_than_size_int)
		{
			List<int> list;
			list.push_back(1); //0
			list.push_back(2); //1
			list.push_back(3); //2
			try
			{
				list.remove(999);
			}
			catch (int error)
			{
				Assert::AreEqual(1, error);
			}
		}

		TEST_METHOD(remove_position_greater_than_size_char)
		{
			List<char> list;
			list.push_back('1'); //0
			list.push_back('2'); //1
			list.push_back('3'); //2
			try
			{
				list.remove(999);
			}
			catch (int error)
			{
				Assert::AreEqual(1, error);
			}
		}

		TEST_METHOD(remove_decrease_size_int)
		{
			List<int> list;
			list.push_back(1); //0
			list.push_back(2); //1
			list.push_back(3); //2
			list.remove(1);
			Assert::IsTrue(list.size_equal(2));
		}

		TEST_METHOD(remove_decrease_size_float)
		{
			List<float> list;
			list.push_back(1.2); //0
			list.push_back(2.4); //1
			list.push_back(36.4); //2
			list.remove(1);
			Assert::IsTrue(list.size_equal(2));
		}

		TEST_METHOD(remove_decrease_size_char)
		{
			List<char> list;
			list.push_back('1'); //0
			list.push_back('2'); //1
			list.push_back('3'); //2
			list.remove(1);
			Assert::IsTrue(list.size_equal(2));
		}
		//clear
		TEST_METHOD(clear_make_list_empty_int)
		{
			List<int> list;
			list.push_back(1); //0
			list.push_back(2); //1
			list.push_back(3); //2
			list.clear();
			Assert::IsTrue(list.isEmpty());
		}

		TEST_METHOD(clear_make_list_empty_float)
		{
			List<float> list;
			list.push_back(1.9); //0
			list.push_back(2.9); //1
			list.push_back(3.9); //2
			list.clear();
			Assert::IsTrue(list.isEmpty());
		}

		TEST_METHOD(clear_make_list_empty_char)
		{
			List<char> list;
			list.push_back('1'); //0
			list.push_back('2'); //1
			list.push_back('3'); //2
			list.clear();
			Assert::IsTrue(list.isEmpty());
		}

		TEST_METHOD(clear_size_equals_0_int)
		{
			List<int> list;
			list.push_back(1); //0
			list.push_back(2); //1
			list.push_back(3); //2
			list.clear();
			Assert::IsTrue(list.size_equal(0));
		}

		TEST_METHOD(clear_size_equals_0_float)
		{
			List<float> list;
			list.push_back(1.9); //0
			list.push_back(2.9); //1
			list.push_back(3.9); //2
			list.clear();
			Assert::IsTrue(list.size_equal(0));
		}

		TEST_METHOD(clear_size_equals_0_char)
		{
			List<char> list;
			list.push_back('1'); //0
			list.push_back('2'); //1
			list.push_back('3'); //2
			list.clear();
			Assert::IsTrue(list.size_equal(0));
		}
		//set
		TEST_METHOD(set_change_first_int)
		{
			List<int> list;
			list.push_back(1); //0
			list.push_back(2); //1
			list.push_back(3); //2
			list.push_back(4); //3
			list.push_back(5); //4
			list.set(0, 99);
			Assert::IsTrue(list.head_equal(99));
		}

		TEST_METHOD(set_change_first_float)
		{
			List<float> list;
			list.push_back(1.2); //0
			list.push_back(2.3); //1
			list.push_back(3.5); //2
			list.push_back(4.7); //3
			list.push_back(5.7); //4
			list.set(0, 9.9);
			Assert::IsTrue(list.head_equal(9.9));
		}

		TEST_METHOD(set_change_first_char)
		{
			List<char> list;
			list.push_back('1'); //0
			list.push_back('2'); //1
			list.push_back('3'); //2
			list.push_back('4'); //3
			list.push_back('5'); //4
			list.set(0, '9');
			Assert::IsTrue(list.head_equal('9'));
		}

		TEST_METHOD(set_change_last_int)
		{
			List<int> list;
			list.push_back(1); //0
			list.push_back(2); //1
			list.push_back(3); //2
			list.push_back(4); //3
			list.push_back(5); //4
			list.set(4, 99);
			Assert::IsTrue(list.tail_equal(99));
		}

		TEST_METHOD(set_change_last_float)
		{
			List<float> list;
			list.push_back(1.4); //0
			list.push_back(2.8); //1
			list.push_back(3.8); //2
			list.push_back(4.8); //3
			list.push_back(5.8); //4
			list.set(4, 99.8);
			Assert::IsTrue(list.tail_equal(99.8));
		}

		TEST_METHOD(set_change_last_char)
		{
			List<char> list;
			list.push_back('1'); //0
			list.push_back('2'); //1
			list.push_back('3'); //2
			list.push_back('4'); //3
			list.push_back('5'); //4
			list.set(4, '9');
			Assert::IsTrue(list.tail_equal('9'));
		}

		TEST_METHOD(set_change_middle_int)
		{
			List<int> list;
			list.push_back(1); //0
			list.push_back(2); //1
			list.push_back(3); //2
			list.push_back(4); //3
			list.push_back(5); //4
			list.set(2, 99);
			Assert::AreEqual(99, list.at(2));
		}

		TEST_METHOD(set_change_middle_float)
		{
			List<float> list;
			list.push_back(1.8); //0
			list.push_back(2.8); //1
			list.push_back(3.8); //2
			list.push_back(4.8); //3
			list.push_back(5.8); //4
			list.set(2, 99.8);
			Assert::AreEqual((float)99.8, list.at(2));
		}

		TEST_METHOD(set_change_middle_char)
		{
			List<char> list;
			list.push_back('1'); //0
			list.push_back('2'); //1
			list.push_back('3'); //2
			list.push_back('4'); //3
			list.push_back('5'); //4
			list.set(2, '9');
			Assert::AreEqual('9', list.at(2));
		}

		TEST_METHOD(set_position_greater_than_size_int)
		{
			List<int> list;
			list.push_back(1); //0
			list.push_back(2); //1
			list.push_back(3); //2
			try
			{
				list.set(9, 999);
			}
			catch (int error)
			{
				Assert::AreEqual(1, error);
			}
		}

		TEST_METHOD(set_position_greater_than_size_char)
		{
			List<char> list;
			list.push_back('1'); //0
			list.push_back('2'); //1
			list.push_back('3'); //2
			try
			{
				list.set(99, '9');
			}
			catch (int error)
			{
				Assert::AreEqual(1, error);
			}
		}

	};
}