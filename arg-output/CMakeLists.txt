# sum.cを生成する
add_custom_command(
  OUTPUT sum.c
  COMMAND echo 'int sum(int x, int y) { return x + y\; }' > sum.c
)

# 生成したsum.cを、output_mainのビルドに使用する
add_executable(output_main main.c sum.c) 