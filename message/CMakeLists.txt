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

set(message_public_header
  include/tencentcloud/message/v20181225/MessageClient.h
  )

set(message_public_header_model
  include/tencentcloud/message/v20181225/model/ModifySendChannelOnMsgTypesResponse.h
  include/tencentcloud/message/v20181225/model/SendType.h
  include/tencentcloud/message/v20181225/model/ModifySendChannelOnMsgTypesRequest.h
  )

set(message_src
  src/v20181225/MessageClient.cpp
  src/v20181225/model/ModifySendChannelOnMsgTypesResponse.cpp
  src/v20181225/model/SendType.cpp
  src/v20181225/model/ModifySendChannelOnMsgTypesRequest.cpp
  )

set(message_include
    include/tencentcloud/message
  )

add_library(message ${LIB_TYPE}
  ${message_public_header}
  ${message_public_header_model}
  ${message_src})

set_target_properties(message
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}message
  )

target_include_directories(message
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(message
  core)

#install(FILES ${message_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/message/v20181225)
#install(FILES ${message_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/message/v20181225/model)
install(DIRECTORY ${message_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS message
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
