#ifndef _LIST
#define _LIST
#include <string>
#include <iostream>


using namespace std;



template <typename T>
class List
{	
public:
	List();
	~List();
	void AddItem(const T& item );
	T& GetItem( int index );
	void OutPutAll();
	int GetSize();
private:	
	void Resize( );
	bool IsAlreadyInList(const T& item);
	T* m_list;
	int m_size;
	int m_allocatedSize;
};




template <typename T>
List<T>::List()                        ////constructor
{	
	m_size = 0;
	m_allocatedSize = 10;
	m_list = new T[ m_allocatedSize ];              ////Allocated space
}




template <typename T>
List<T>::~List()
{	
	delete [] m_list;                                   /////Destructor
}



template <typename T>
void List<T>::AddItem(const T& item )
{	
	if ( m_size == m_allocatedSize )
	{		
		Resize();
	}
	if(IsAlreadyInList(item) == false)
	{
	m_list[ m_size ] = item;
	m_size++;
	}
	
}


template <typename T>
void List<T>::OutPutAll()
{	
	for ( int i = 0; i < m_size; i++ )
	
	{
		cout << i << ": "<< m_list[i] << endl;
	}
}



template <typename T>
bool List<T>::IsAlreadyInList(const T& item)
{	
	for ( int i = 0; i < m_allocatedSize; i++ )
	
	{
		if (m_list[i] == item)
		{
			return true;
		}
	}
	return false;
		
	
}
template <typename T>
int List<T>::GetSize()
{
	return m_size;
}




template <typename T>
void List<T>::Resize( )
{	
	T* tempList = new T[ m_allocatedSize ];
	int oldSize = m_size;	
	                                      // Copy values into temp	
	for ( int i = 0; i < oldSize; i++ )
	{	
		tempList[i] = m_list[i];
	}	
	                                     // Reallocate space for m_list	
	delete [] m_list;
	m_allocatedSize += 10;
	m_list = new T[ m_allocatedSize ];
	
	// Copy data back to m_list	
	for ( int i = 0; i < oldSize; i++ )	
	{	
		m_list[i] = tempList[i];	
	}

	                                     // free memory for tempList	
	delete [] tempList;
}


template <typename T>
T& List<T>:: GetItem( int index )
{	
	return m_list[ index ];
}


#endif;