#include "gtest\gtest.h"
#include "../Inlupp2/Queue.h"


TEST(QueueTests, WhenAddingElementsCountShouldIncrease)
{
	Queue<int> CountTest;
	CountTest.AddElement(1);
	CountTest.AddElement(2);
	CountTest.AddElement(3);
	EXPECT_EQ(3, CountTest.ReturnCount());
}

TEST(QueueTests, TestForQueueWithString)
{
	Queue<std::string> StringTest;
	StringTest.AddElement("Hej");
	StringTest.AddElement("Hej2");
	EXPECT_EQ("Hej", StringTest.Peek());
}

TEST(QueueTests, PeekShouldReturnFirstAddedElement)
{
	Queue<int> PeekTest;
	PeekTest.AddElement(2);
	PeekTest.AddElement(3);
	EXPECT_EQ(2, PeekTest.Peek());
}

TEST(QueueTests, RemoveFunctionShouldRemoveFirstAddedElement)
{
	Queue<int> RemoveTest;
	RemoveTest.AddElement(1);
	RemoveTest.AddElement(2);
	RemoveTest.RemoveElement();
	EXPECT_EQ(2, RemoveTest.Peek());
}