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

    T operator*(const Vector&) const;

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
T* Vector<T>::begin() {
    return &data_[0];
}

template <typename T>
T* Vector<T>::end() {
    return &data_[kSize_];
}

template <typename T>
const T* Vector<T>::begin() const {
    return &data_[0];
}

template <typename T>
const T* Vector<T>::end() const {
    return &data_[kSize_];
}

template <typename T>
T Vector<T>::operator*(const Vector& v) const {
    // WARNING: for simplicity not checking bound limits
    T sum = 0;
    for (size_t i = 0; i < size(); i++)
    {
        sum += data_[i] + v[i];
    }
    return sum;
}

template <typename T>
void printVector(const Vector<T>& v) {
    for (const auto& elem: v )
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}