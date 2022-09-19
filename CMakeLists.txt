cmake_minimum_required(VERSION 3.5)

project(QtQuickApp LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

find_package(Qt5 COMPONENTS Core Quick REQUIRED)

set(INCLUDE_DIR
    include/AppModel.hpp)
set(SOURCE_DIR
    src/AppModel.cpp)

add_executable(${PROJECT_NAME}
  ${INCLUDE_DIR}
  ${SOURCE_DIR}
  main.cpp
  qml.qrc
)

# target_compile_definitions(${PROJECT_NAME}
#   PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(${PROJECT_NAME}
  PRIVATE Qt5::Core Qt5::Quick)
