完成的crypto项目存放在CrypyoTool文件夹中。第二层是CMakeLists.txt文件和crc（放置源代码）和build的环境编译文件，buid中还有提前创建的被加密文件input.txt和加密后储存文件encrypted.txt
第一步：创建项目目录
//创建总目录
mkdir CryptoTool
cd CryptoTool
//创建src目录存放源代码
mkdir src
//进入src目录，创建所有代码文件
cd src
//在这里创建：main.cpp, crypto.h, crypto.cpp, file_handler.h, file_handler.cpp, menu.h, menu.cpp
第二步：编写各类源代码
第三步：编译项目

=== 文本加密解密工具 ===
1. 文本加密
2. 文本解密
3. 文件加密
4. 文件解密
0. 退出
请选择功能:

上述是成功的结果
输入1进行文本加密测试

请选择功能: 1
请输入要加密的文本: Hello World!
请输入密钥: 3
加密结果: Khoor Zruog!

输入2进行文本解密测试

=== 文本加密解密工具 ===
1. 文本加密
2. 文本解密
3. 文件加密
4. 文件解密
0. 退出
请选择功能: 2
请输入要解密的文本: Lipps Asvph!
请输入密钥: 4
解密结果: Hello World!

输入3进行文本加密测试

=== 文本加密解密工具 ===
1. 文本加密
2. 文本解密
3. 文件加密
4. 文件解密
0. 退出
请选择功能: 3
请输入要加密的文件路径: input.txt
请输入密钥: 3
请输入输出文件路径: encrypted.txt
文件加密成功！结果保存在: encrypted.txt

输入4进行文件解密测试

=== 文本加密解密工具 ===
1. 文本加密
2. 文本解密
3. 文件加密
4. 文件解密
0. 退出
请选择功能: 4
请输入要解密的文件路径: encrypted.txt
请输入密钥: 3
请输入输出文件路径: input.txt
文件解密成功！结果保存在: input.txt

项目验证完毕，然后通过git远程递交到gihub仓库上
git init
git add .
git commit -m "crypto项目"
git remote add origin https://github.com/kaelis1/HelloCV.git
git branch -M main
git push -u origin main
以上就完成了整个项目的构建运行和测试
