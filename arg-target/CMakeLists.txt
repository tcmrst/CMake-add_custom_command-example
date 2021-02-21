# 実行ファイルtarget-mainの生成
add_executable(target_main sum.c) 

# ライブラリlibsum.aの生成
add_library(sum STATIC sum.c) 
# stripコマンドでlibsum.aからmainシンボルを削除
add_custom_command(
  TARGET sum
  POST_BUILD
  COMMAND strip --strip-symbol=main $<TARGET_FILE:sum>
)

# libsum.a用のテストsum_testの生成
add_executable(sum_test sum_test.c) 
target_link_libraries(sum_test sum)
add_test(NAME sum COMMAND sum_test)