#include "TreeNode.hpp"
// using datastruct::TreeNode;
// template<int T>
// template <typename T>
// class TreeNode
// {
    
// };

template <typename T>
    void datastruct::TreeNode<T>::traverse(TreeNode<T> root)
    {
        traverse(root.left);
        traverse(root.right);
    }

    template <typename T>

    void datastruct::TreeNode<T>::put(TreeNode<T> node)
    {
        this->left = node;
    }

    template <typename T>
    T datastruct::TreeNode<T>::get(T key)
    {
        this->left = key;
    }

    template <typename T>
    datastruct::TreeNode<T>::TreeNode(T val)
    {
        this->val = val;
    }

     template <typename T>
    datastruct::TreeNode<T>::TreeNode()
    {
        this->val = 0;
    }