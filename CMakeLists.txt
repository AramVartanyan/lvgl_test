cmake_minimum_required(VERSION 3.5)

set(EXTRA_COMPONENT_DIRS
    "../components"
    ${extra_components_dirs_append})

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(lcd_lvgl)

