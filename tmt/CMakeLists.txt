#
# Copyright (c) 2017-2025 Tencent. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(tmt_public_header
  include/tencentcloud/tmt/v20180321/TmtClient.h
  )

set(tmt_public_header_model
  include/tencentcloud/tmt/v20180321/model/TextTranslateResponse.h
  include/tencentcloud/tmt/v20180321/model/TextTranslateRequest.h
  )

set(tmt_src
  src/v20180321/TmtClient.cpp
  src/v20180321/model/TextTranslateResponse.cpp
  src/v20180321/model/TextTranslateRequest.cpp
  )

set(tmt_include
    include/tencentcloud/tmt
  )

add_library(tmt ${LIB_TYPE}
  ${tmt_public_header}
  ${tmt_public_header_model}
  ${tmt_src})

set_target_properties(tmt
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tmt
  )

target_include_directories(tmt
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tmt
  core)

#install(FILES ${tmt_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tmt/v20180321)
#install(FILES ${tmt_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tmt/v20180321/model)
install(DIRECTORY ${tmt_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tmt
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
