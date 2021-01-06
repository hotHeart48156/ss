#include<iostream>
namespace datastruct
{
    //模板参数的实现，不能放在cpp文件里
    //模板参数的实现，不能放在cpp文件里
    //模板参数的实现，不能放在cpp文件里
    //模板参数的实现，不能放在cpp文件里
    template <typename T> 
    class TreeNode
    {
    private:
        T val;
        T key;
        TreeNode<T> left(), right(); //如果是基本类型不用执行他的构造函数，如果是自己定义的泪要执行构造函数。相当于new出自己的对象
        /* data */
    public:
        void traverse(TreeNode<T> root)
        {
            traverse(root.left);
            traverse(root.right);
        }
        void put(TreeNode<T> node)
        {
            this->left = node;
        }
        T get(T key)
        {
            this->left = key;
        }
        TreeNode(T val)
        {
            this->val = val;
        }
        TreeNode()
        {
            this->val = 0;
        }
    };

} // namespace datastruct