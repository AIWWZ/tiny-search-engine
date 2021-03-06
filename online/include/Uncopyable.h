/*********************************************
* file:   Uncopyable.h
* author: AIWWZ(wzj1524@qq.com)
* date:   2019-06-09 11:48:27
**********************************************/
#ifndef __UNCOPYABLE_H__
#define __UNCOPYABLE_H__

namespace tinyse {

class Uncopyable {
public:
    /* 不允许拷贝 */
    Uncopyable(const Uncopyable &) = delete;
    Uncopyable &operator=(const Uncopyable &) = delete;

protected:
    /* 但允许derived对象构造和析构 */
    Uncopyable() {}
    ~Uncopyable() {}
};
 
} //end of namespace tinyse

#endif /* __UNCOPYABLE_H__ */
