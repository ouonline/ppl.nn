if(NOT PPLNN_USE_X86 OR NOT PPLNN_ENABLE_ONNX_MODEL)
    message(WARNING "x86 and onnx support are disabled. `pplnn_samples_classification` will not be built.")
    return()
endif()

find_package(OpenCV QUIET)
if (NOT OpenCV_FOUND)
    message(WARNING "OpenCV not found. Samples need opencv will not be built!")
    return()
endif()
if(${OpenCV_VERSION} VERSION_LESS "4")
    message(WARNING "OpenCV required version >= 4.0.0. this classification sample will not be built!")
    return()
endif()

add_executable(pplnn_samples_classification classification.cpp)
target_include_directories(pplnn_samples_classification PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(pplnn_samples_classification PRIVATE pplnn_static ${OpenCV_LIBS})
