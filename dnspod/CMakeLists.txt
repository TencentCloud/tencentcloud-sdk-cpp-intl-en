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

set(dnspod_public_header
  include/tencentcloud/dnspod/v20210323/DnspodClient.h
  )

set(dnspod_public_header_model
  include/tencentcloud/dnspod/v20210323/model/ModifyDomainStatusResponse.h
  include/tencentcloud/dnspod/v20210323/model/CreateRecordRequest.h
  include/tencentcloud/dnspod/v20210323/model/DeleteDomainRequest.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDomainRemarkResponse.h
  include/tencentcloud/dnspod/v20210323/model/DescribeRecordResponse.h
  include/tencentcloud/dnspod/v20210323/model/CreateDomainRequest.h
  include/tencentcloud/dnspod/v20210323/model/ModifyRecordResponse.h
  include/tencentcloud/dnspod/v20210323/model/CreateRecordResponse.h
  include/tencentcloud/dnspod/v20210323/model/DeleteRecordResponse.h
  include/tencentcloud/dnspod/v20210323/model/DomainCreateInfo.h
  include/tencentcloud/dnspod/v20210323/model/RecordInfo.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDomainStatusRequest.h
  include/tencentcloud/dnspod/v20210323/model/DeleteDomainResponse.h
  include/tencentcloud/dnspod/v20210323/model/CreateDomainResponse.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainRequest.h
  include/tencentcloud/dnspod/v20210323/model/ModifyDomainRemarkRequest.h
  include/tencentcloud/dnspod/v20210323/model/DescribeRecordRequest.h
  include/tencentcloud/dnspod/v20210323/model/DescribeDomainResponse.h
  include/tencentcloud/dnspod/v20210323/model/DomainInfo.h
  include/tencentcloud/dnspod/v20210323/model/DeleteRecordRequest.h
  include/tencentcloud/dnspod/v20210323/model/ModifyRecordRequest.h
  )

set(dnspod_src
  src/v20210323/DnspodClient.cpp
  src/v20210323/model/ModifyDomainStatusResponse.cpp
  src/v20210323/model/CreateRecordRequest.cpp
  src/v20210323/model/DeleteDomainRequest.cpp
  src/v20210323/model/ModifyDomainRemarkResponse.cpp
  src/v20210323/model/DescribeRecordResponse.cpp
  src/v20210323/model/CreateDomainRequest.cpp
  src/v20210323/model/ModifyRecordResponse.cpp
  src/v20210323/model/CreateRecordResponse.cpp
  src/v20210323/model/DeleteRecordResponse.cpp
  src/v20210323/model/DomainCreateInfo.cpp
  src/v20210323/model/RecordInfo.cpp
  src/v20210323/model/ModifyDomainStatusRequest.cpp
  src/v20210323/model/DeleteDomainResponse.cpp
  src/v20210323/model/CreateDomainResponse.cpp
  src/v20210323/model/DescribeDomainRequest.cpp
  src/v20210323/model/ModifyDomainRemarkRequest.cpp
  src/v20210323/model/DescribeRecordRequest.cpp
  src/v20210323/model/DescribeDomainResponse.cpp
  src/v20210323/model/DomainInfo.cpp
  src/v20210323/model/DeleteRecordRequest.cpp
  src/v20210323/model/ModifyRecordRequest.cpp
  )

set(dnspod_include
    include/tencentcloud/dnspod
  )

add_library(dnspod ${LIB_TYPE}
  ${dnspod_public_header}
  ${dnspod_public_header_model}
  ${dnspod_src})

set_target_properties(dnspod
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dnspod
  )

target_include_directories(dnspod
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dnspod
  core)

#install(FILES ${dnspod_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dnspod/v20210323)
#install(FILES ${dnspod_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dnspod/v20210323/model)
install(DIRECTORY ${dnspod_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dnspod
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
