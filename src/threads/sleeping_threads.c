#include "sleeping_threads.h"
#include "thread.h"

unsigned
sleeping_hash_func (const struct hash_elem *e, void *aux UNUSED)
{
  struct thread *thread = hash_entry(e, struct thread, hash_elem);
  return hash_int(thread->tick_to_awake);
}

bool
sleeping_hash_less_func (const struct hash_elem *a, const struct hash_elem *b, void *aux UNUSED)
{
  struct thread *thread1 = hash_entry(a, struct thread, hash_elem);
  struct thread *thread2 = hash_entry(b, struct thread, hash_elem);
  if (thread1->tid == -1 || thread2->tid == -1)
  {
    return thread1->tick_to_awake < thread2->tick_to_awake;
  }
  else
      return thread1->tick_to_awake < thread2->tick_to_awake ||  thread1->tid < thread2->tid;
}
