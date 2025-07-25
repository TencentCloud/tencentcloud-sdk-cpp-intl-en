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

set(vclm_public_header
  include/tencentcloud/vclm/v20240523/VclmClient.h
  )

set(vclm_public_header_model
  include/tencentcloud/vclm/v20240523/model/LogoParam.h
  include/tencentcloud/vclm/v20240523/model/DescribeImageAnimateJobResponse.h
  include/tencentcloud/vclm/v20240523/model/LogoRect.h
  include/tencentcloud/vclm/v20240523/model/SubmitImageAnimateJobResponse.h
  include/tencentcloud/vclm/v20240523/model/SubmitImageAnimateJobRequest.h
  include/tencentcloud/vclm/v20240523/model/DescribeImageAnimateJobRequest.h
  )

set(vclm_src
  src/v20240523/VclmClient.cpp
  src/v20240523/model/LogoParam.cpp
  src/v20240523/model/DescribeImageAnimateJobResponse.cpp
  src/v20240523/model/LogoRect.cpp
  src/v20240523/model/SubmitImageAnimateJobResponse.cpp
  src/v20240523/model/SubmitImageAnimateJobRequest.cpp
  src/v20240523/model/DescribeImageAnimateJobRequest.cpp
  )

set(vclm_include
    include/tencentcloud/vclm
  )

add_library(vclm ${LIB_TYPE}
  ${vclm_public_header}
  ${vclm_public_header_model}
  ${vclm_src})

set_target_properties(vclm
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}vclm
  )

target_include_directories(vclm
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(vclm
  core)

#install(FILES ${vclm_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vclm/v20240523)
#install(FILES ${vclm_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vclm/v20240523/model)
install(DIRECTORY ${vclm_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS vclm
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
