#include <vector>

class IntStack
{
    public:

        /// Returns true if there are no elements on the stack
        bool empty() const { return _container.empty(); };

        /// Returns the number of elements on the stack
        int size() const { return _container.size(); };

        /// Return the top element of the stack, i.e. the last element that was pushed
        int top() const { return _container.back(); };

        /// Adds a new element to the top of the stack
        void push(const int& new_value) { _container.emplace_back(new_value); };

        /// Remove the topmost element of the stack
        void pop() { _container.pop_back(); };

    private:

        /// The elements of the stack, stored in a vector
        std::vector<int> _container;
};
