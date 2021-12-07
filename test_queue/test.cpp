#include "pch.h"

TEST(TQueue,can_create_queue) {
	ASSERT_NO_THROW(TQueue<int> q(20));
}

TEST(TQueue,canå_create_queue_with_neg_size) {
	ASSERT_ANY_THROW(TQueue<int> q(-20));
}

TEST(TQueue, can_push_into_queue) {
	TQueue<int> q;
	ASSERT_NO_THROW(q.push(39));
}

TEST(TQueue, can_pop_from_queue) {
	TQueue<int > q;
	q.push(30);
	int y;
	ASSERT_NO_THROW(y= q.pop());
	EXPECT_EQ(y, 30);
}

TEST(TQueue, can_get_front_queue) {
	TQueue<int > q;
	q.push(30);
	ASSERT_NO_THROW(q.front());
	EXPECT_EQ(q.front(), 30);
}

TEST(TQueue , can_check_empty_queue){
	TQueue<int > q(10);
	EXPECT_TRUE(q.empty());
	for (int i = 0; i < 10; i++) {
		q.push(i + 2);
		EXPECT_FALSE(q.empty());
	}
}

TEST(TQueue , can_check_full_queue){
	TQueue<int > q(10);
	for (int i = 0; i < 10; i++) {
		EXPECT_FALSE(q.full());
		q.push(i + 2);
	}
	EXPECT_TRUE(q.full());
}

TEST(TQueue, can_copy_queue) {
	TQueue<int> q;
	q.push(4);
	q.push(5);
	q.push(0);
	q.push(2);
	TQueue<int> q1;
	ASSERT_NO_THROW(TQueue<int> q2(q));
	TQueue<int> q2(q);
	ASSERT_NO_THROW(q1 = q);
	while (!q.empty()) {
		EXPECT_EQ(q1.front(),q.front());
		EXPECT_EQ(q2.front(),q.front());
		q.pop(); q1.pop(); q2.pop();
	}

}