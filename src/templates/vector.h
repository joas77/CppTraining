#include <cstddef>
#include <iostream>

template <typename T>
class Vector
{
public:
    Vector() = delete;
    Vector(std::size_t size);
    ~Vector();
    Vector(const Vector &);
    Vector& operator=(const Vector &);
    Vector(Vector &&);
    Vector& operator=(Vector &&);
    const T& operator[](std::size_t) const;
    T& operator[](std::size_t);
    std::size_t size() const;
    T* begin();
    T* end();
    const T* begin() const;
    const T* end() const;

private:
    T* data_;
    const std::size_t kSize_;
};

template <typename T>
Vector<T>::Vector(std::size_t size) : kSize_(size) {
    data_ = new T[kSize_];
}

template <typename T>
Vector<T>::~Vector() {
    if(data_) {
        delete[] data_;
    }
}

template <typename T>
std::size_t Vector<T>::size() const {
    return kSize_;
}

template <typename T>
T& Vector<T>::operator[](std::size_t index) {
    return data_[index];
}

template <typename T>
const T& Vector<T>::operator[](std::size_t index) const {
    return data_[index];
}

template <typename T>
void printVector(const Vector<T>& v) {
    for (std::size_t i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}