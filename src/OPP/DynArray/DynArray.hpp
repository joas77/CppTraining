#ifndef DYNARRAY_HPP
#define DYNARRAY_HPP

class DynArray {
    public:
        DynArray();
        ~DynArray();

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

        void copyTo(int* newArray);

};

DynArray::DynArray() : mData(new int[startCapacity]) {}

DynArray::~DynArray() {
    if (!mData)
        delete[] mData;
}

void DynArray::push(int elem) {
    if (mSize - mCapacity == 0){
        mCapacity *= growRatio;
        int* newArray = new int[mCapacity];
        copyTo(newArray);
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

void DynArray::copyTo(int* newArray) {
    for(std::size_t i = 0; i < mSize; i++) {
        newArray[i] = mData[i];
    }
}

#endif // DYNARRAY_HPP