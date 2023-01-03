//
// Created by Matthew Johnson on 12/26/22.
//

#ifndef UDEMY_CPP_COURSE_3_SWAPPER_H
#define UDEMY_CPP_COURSE_3_SWAPPER_H

template<class T>
class Swapper {
  private:
    T first;
    T second;
  public:
    Swapper(T first, T second);
    void swap();
    T getFirst() const;
    T getSecond() const;
};

template<class T>
Swapper<T>::Swapper(T first, T second) {
    this->first =  first;
    this->second = second;
}

template<class T>
void Swapper<T>::swap() {
    T temp = first;
    this->first =  second;
    this->second = temp;
};

template<class T>
T Swapper<T>::getFirst() const {
    return this->first;
};

template<class T>
T Swapper<T>::getSecond() const {
    return this->second;

};


#endif //UDEMY_CPP_COURSE_3_SWAPPER_H
