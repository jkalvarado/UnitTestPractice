/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("Z"));
}

TEST(PasswordTest, mixed_case_password)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("ZZz"));
}

TEST(PasswordTest, no_characters)
{
	Password my_password;
	ASSERT_EQ(3, my_password.count_leading_characters(""));
}

TEST(PasswordTest, random_input)
{
	Password my_password;
	ASSERT_EQ(4, my_password.has_mixed_case("aba"));
}

TEST(PasswordTest, all_lowercase)
{
	Password my_password;
	ASSERT_EQ(4, my_password.has_mixed_case("aba"));
}

TEST(PasswordTest, upper_and_lowercase)
{
	Password my_password;
	ASSERT_EQ(4, my_password.has_mixed_case("aBa"));
}

TEST(PasswordTest, all_uppercase){
	Password my_password;
	ASSERT_EQ(5, my_password.has_mixed_case("ABA"));
}