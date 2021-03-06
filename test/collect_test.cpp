///============================================================================
/// @file        : test.cpp
/// @author      : Gaurav Raut, Advait Patole, Sameep Pote
/// @version     : 1.0
/// @copyright   : MIT License
/// @brief       : Test definition
///============================================================================

#include <gtest/gtest.h>
#include <ros/ros.h>

#include <collect.hpp>


TEST(spawnr, test_gas_constructor) {
	Collect c;
	c.spawn("box1",0,0,0,1);
	EXPECT_TRUE(c.checks);
}

TEST(spawng, test_gas_constructor) {
	Collect c;
	c.spawn("box1",0,0,0,2);
	EXPECT_TRUE(c.checks);
}

TEST(spawnb, test_gas_constructor) {
	Collect c;
	c.spawn("box1",0,0,0,3);
	EXPECT_TRUE(c.checks);
}

TEST(remove, test_gas_constructor) {
	Collect b;
	b.spawn("box3",2,3,0,1);
	b.remove_ob("box3");
	EXPECT_FALSE(!b.checkr);
}

