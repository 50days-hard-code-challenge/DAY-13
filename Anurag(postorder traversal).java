class Solution {
    public List<Integer> postorderTraversal(TreeNode root){
    ArrayList<Integer> postorder=new ArrayList<Integer>();
    Stack<TreeNode> st1=new Stack<TreeNode>();
     Stack<TreeNode> st2=new Stack<TreeNode>();
     if(root==null)
        {
            return postorder;
        }
        st1.push(root);
        while(!st1.isEmpty())
        {
            root= st1.pop();
            st2.push(root);
            if(root.left!=null)
            {
                st1.push(root.left);
            }
            if(root.right!=null)
            {
                st1.push(root.right);
            }
        }
        while(!st2.isEmpty())
        {
            root= st2.pop();
            postorder.add(root.val);
        }
        return postorder;
        

    }
}
