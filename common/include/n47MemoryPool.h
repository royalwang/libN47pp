/*
* @brief 
* @author
*/

#ifndef _N47_MEMORYPOOL_H_
#define _N47_MEMORYPOOL_H_

#include <list>

#define DEFALUT_MEMORY_POOL_SIZE 16 * 1024 * 1024 //! 16MB

class N47MemoryPool
{
public:
    N47MemoryPool(void) { m_root = (char *)malloc(DEFALUT_MEMORY_POOL_SIZE); }
    ~N47MemoryPool(void) { free(m_root); }
	char *AllocMem(const size_t size);
	bool ReallocMem(const size_t size);
	void FreeMem(char * ptr);
private:
    typedef struct _FREE_BLOCK
    {
        char *ptr;
        size_t size;
    }FREE_BLOCK, *PFREE_BLOCK;

    char *m_root;
	std::list<PFREE_BLOCK> m_freeBlockList;
};

#define //!_N47_MEMORYPOOL_H_
