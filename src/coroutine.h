#ifndef XUV_COROUTINE_H
#define XUV_COROUTINE_H

#include <functional>

namespace co {

using task_t = std::function<void()>;

using coroutine_id_t = int;

coroutine_id_t &running_coroutine();

coroutine_id_t create(task_t &&);

void yield();

void resume(coroutine_id_t);

void wait();

void notify(coroutine_id_t);

void dispatch();

bool finished();

} // end namespace co

#endif // XUV_COROUTINE_H
