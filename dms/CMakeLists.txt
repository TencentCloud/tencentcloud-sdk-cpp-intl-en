#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

set(dms_public_header
  include/tencentcloud/dms/v20200819/DmsClient.h
  )

set(dms_public_header_model
  include/tencentcloud/dms/v20200819/model/SendTemplatedEmailRequest.h
  include/tencentcloud/dms/v20200819/model/SendTemplatedEmailResponse.h
  include/tencentcloud/dms/v20200819/model/SendEmailRequest.h
  include/tencentcloud/dms/v20200819/model/SendEmailResponse.h
  )

set(dms_src
  src/v20200819/DmsClient.cpp
  src/v20200819/model/SendTemplatedEmailRequest.cpp
  src/v20200819/model/SendTemplatedEmailResponse.cpp
  src/v20200819/model/SendEmailRequest.cpp
  src/v20200819/model/SendEmailResponse.cpp
  )

set(dms_include
    include/tencentcloud/dms
  )

add_library(dms ${LIB_TYPE}
  ${dms_public_header}
  ${dms_public_header_model}
  ${dms_src})

set_target_properties(dms
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dms
  )

target_include_directories(dms
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dms
  core)

#install(FILES ${dms_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dms/v20200819)
#install(FILES ${dms_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dms/v20200819/model)
install(DIRECTORY ${dms_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dms
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
