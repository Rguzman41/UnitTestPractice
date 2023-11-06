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

TEST(PasswordTest, smoke_test)
{
    ASSERT_TRUE( 1 == 1 );
}
TEST(PasswordTest, single_letter_password)
{
    Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1,actual);
}

TEST(PasswordTest, find_password)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("Ben"));

}

TEST(PasswordTest, empty_password)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters(" "));

}

TEST(PasswordTest, has_upper_only)
{
	Password my_password;
	bool actual = my_password.has_mixed_case("AAAAAAAA");
	ASSIST_EQ(false, actual);


}

TEST(PasswordTest, has_lower_only)
{
        Password my_password;
        bool actual = my_password.has_mixed_case("aaaaaaaa");
        ASSIST_EQ(false, actual);


}

