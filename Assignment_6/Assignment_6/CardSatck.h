#ifndef _STACK
#define _STACK


#include <iostream>
#include <cassert>


using namespace std;



class Node
{
	private:
	Node* m_next;
	int m_data;
	friend class CardStack;
};



class CardStack
{
public:
	 CardStack();
	~CardStack();
	void Pop();
	void Push( int value );
	int Top();
	int GetSize();
	
private:
	Node  * m_ptrTop;
	Node  * m_ptrBottom;
	int m_size;
};



 CardStack::CardStack()
	: m_ptrTop( 0 ), m_ptrBottom( 0 ), m_size( 0 )
{
	cout << " " << endl;
}



 CardStack::~CardStack()
{
	
	while ( m_ptrBottom != NULL )
	{
		Pop();
	}
}



void CardStack::Push(int value )
{
	
	Node* newNode = new Node;                               // Create new node
	newNode->m_data = value;
	newNode->m_next = NULL;


	if ( m_ptrBottom == NULL )
	{
		
		m_ptrBottom = newNode;                              // Empty Stack
		m_ptrTop = newNode;
	}
	else
	{
		
		m_ptrTop->m_next = newNode;                          // Add value to top of stack
		m_ptrTop = newNode;
	}


	m_size++;
}



void CardStack::Pop()
{
	if ( m_ptrBottom->m_next == NULL )
	{
		
		delete m_ptrBottom;
		m_ptrBottom = NULL;                                // Only one value in list
	}
	else
	{
		

		Node* currentNode = m_ptrBottom;                             // Remove the topmost value.
		while ( currentNode->m_next != m_ptrTop )
		{
			currentNode = currentNode->m_next;                       // First, we need the 2nd to top value.
		}


		currentNode->m_next = NULL;
		delete m_ptrTop;
		m_ptrTop = currentNode;
	}


	m_size--;
}



int CardStack::Top()
{
	assert ( m_ptrTop != NULL );


	return m_ptrTop->m_data;
}



int CardStack::GetSize()
{
	return m_size;
}
#endif
