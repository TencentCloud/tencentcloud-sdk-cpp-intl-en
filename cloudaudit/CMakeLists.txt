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

set(cloudaudit_public_header
  include/tencentcloud/cloudaudit/v20190319/CloudauditClient.h
  )

set(cloudaudit_public_header_model
  include/tencentcloud/cloudaudit/v20190319/model/DescribeEventsResponse.h
  include/tencentcloud/cloudaudit/v20190319/model/Resource.h
  include/tencentcloud/cloudaudit/v20190319/model/DescribeAuditTracksResponse.h
  include/tencentcloud/cloudaudit/v20190319/model/DescribeAuditTracksRequest.h
  include/tencentcloud/cloudaudit/v20190319/model/LookupAttribute.h
  include/tencentcloud/cloudaudit/v20190319/model/Event.h
  include/tencentcloud/cloudaudit/v20190319/model/DescribeEventsRequest.h
  )

set(cloudaudit_src
  src/v20190319/CloudauditClient.cpp
  src/v20190319/model/DescribeEventsResponse.cpp
  src/v20190319/model/Resource.cpp
  src/v20190319/model/DescribeAuditTracksResponse.cpp
  src/v20190319/model/DescribeAuditTracksRequest.cpp
  src/v20190319/model/LookupAttribute.cpp
  src/v20190319/model/Event.cpp
  src/v20190319/model/DescribeEventsRequest.cpp
  )

set(cloudaudit_include
    include/tencentcloud/cloudaudit
  )

add_library(cloudaudit ${LIB_TYPE}
  ${cloudaudit_public_header}
  ${cloudaudit_public_header_model}
  ${cloudaudit_src})

set_target_properties(cloudaudit
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cloudaudit
  )

target_include_directories(cloudaudit
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cloudaudit
  core)

#install(FILES ${cloudaudit_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudaudit/v20190319)
#install(FILES ${cloudaudit_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cloudaudit/v20190319/model)
install(DIRECTORY ${cloudaudit_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cloudaudit
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
