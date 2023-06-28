cmake_minimum_required(VERSION 3.20)
project(exemplo VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

# Adicione na linha abaixo todo arquivo .c e .h do seu projeto e 
# precise para gerar o executável
add_executable(exemplo main.c)

# Para adicionar dependência da biblioteca math.h
target_link_libraries(exemplo m)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
