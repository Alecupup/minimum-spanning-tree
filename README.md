# minimum-spanning-tree

输入形式：

n个点、m条带权边

接下来输入m条边：第i个点和第j的点之间的权值

输出联通所有点的最小权重

运用了割点和割边的思想

定义两个集合S和T

S用来存放未选中的点，T用来存放已选中的点

根据算法，刚开始S中的元素是所有点，T中的元素是空的。

1.随意将一个点放入T中并从S中删除该点

2.在S中找到与上述放入T中的点联通最小权值的点并放入T中并在S中删除，总的最小权值加上该最小的权值

3.对刚加入T中的点重复2操作

直到所有点都存入T中即S为空结束

输出总的最小权值


![image](https://user-images.githubusercontent.com/68764044/172040192-22e49688-904c-41e7-8c72-b444bfd094f9.png)

图示：

原图

![image](https://user-images.githubusercontent.com/68764044/172040224-725eaa17-376f-419d-9add-68b12701ca09.png)

执行后

![image](https://user-images.githubusercontent.com/68764044/172040245-f6d5e2ca-80e7-4a14-bcfc-7a373d2e1091.png)

可能不止一种答案
