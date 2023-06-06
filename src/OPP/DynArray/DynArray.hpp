#ifndef DYNARRAY_HPP
#define DYNARRAY_HPP

class DynArray {
    public:
        DynArray();
        //DynArray(const DynArray& src);
        ~DynArray();
        //DynArray& operator=(const DynArray& rhs);

        void push(int elem);
        int& at(std::size_t index);
        // this method is const which means it does not modify the object
        std::size_t size() const;

    private:
        const int startCapacity = 4;
        const int growRatio = 2;
        int* mData;
        std::size_t mSize = 0;
        std::size_t mCapacity = startCapacity;

        void copy(int* dst, std::size_t dstSize, int* src, std::size_t srcSize);

};

DynArray::DynArray() : mData(new int[startCapacity]) {}

// DynArray::DynArray(const DynArray& src) {
//     mSize = src.mSize;
//     mCapacity = src.mCapacity;
//     mData = new int[mCapacity];
//     copy(mData, mSize, src.mData, src.mSize);
// }

// DynArray& DynArray::operator=(const DynArray& rhs) {
//     // self assignment
//     if(this == &rhs) return *this;

//     mSize = rhs.mSize;
//     mCapacity = rhs.mCapacity;

//     // Free Old memory
//     if(mData) delete[] mData;

//     copy(mData, mSize, rhs.mData, rhs.mSize);
// }

DynArray::~DynArray() {
    std::cout << "Called DynArray destructor!" << std::endl;
    if (!mData)
        delete[] mData;
}

void DynArray::push(int elem) {
    if (mSize - mCapacity == 0){
        mCapacity *= growRatio;
        int* newArray = new int[mCapacity];
        copy(newArray, mSize, mData, mSize);
        delete[] mData;
        mData = newArray;
    }
    mData[mSize] = elem;
    mSize++;
}

int& DynArray::at(std::size_t index) {
    //TODO throw if we try to access
    // an outbound element
    return mData[index];
}

std::size_t DynArray::size() const {
    return mSize;
}

void DynArray::copy(int* dst, std::size_t dstSize, int* src, std::size_t srcSize) {
    // beware!! make sure dstSize <= srcSize
    for(std::size_t i=0; i<srcSize; i++) {
        dst[i] = src[i];
    }
}

#endif // DYNARRAY_HPP