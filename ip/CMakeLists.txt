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

set(ip_public_header
  include/tencentcloud/ip/v20210409/IpClient.h
  )

set(ip_public_header_model
  include/tencentcloud/ip/v20210409/model/AllocateCustomerCreditRequest.h
  include/tencentcloud/ip/v20210409/model/GetCountryCodesResponse.h
  include/tencentcloud/ip/v20210409/model/QueryCustomersCreditRequest.h
  include/tencentcloud/ip/v20210409/model/QueryCreditAllocationHistoryResponse.h
  include/tencentcloud/ip/v20210409/model/QueryCreditAllocationHistoryRequest.h
  include/tencentcloud/ip/v20210409/model/QueryCustomersCreditResponse.h
  include/tencentcloud/ip/v20210409/model/CreateAccountRequest.h
  include/tencentcloud/ip/v20210409/model/QueryPartnerCreditResponse.h
  include/tencentcloud/ip/v20210409/model/CreateAccountResponse.h
  include/tencentcloud/ip/v20210409/model/QueryCreditAllocationHistoryData.h
  include/tencentcloud/ip/v20210409/model/AllocateCustomerCreditResponse.h
  include/tencentcloud/ip/v20210409/model/QueryCustomersCreditData.h
  include/tencentcloud/ip/v20210409/model/GetCountryCodesRequest.h
  include/tencentcloud/ip/v20210409/model/QueryPartnerCreditRequest.h
  include/tencentcloud/ip/v20210409/model/CountryCodeItem.h
  )

set(ip_src
  src/v20210409/IpClient.cpp
  src/v20210409/model/AllocateCustomerCreditRequest.cpp
  src/v20210409/model/GetCountryCodesResponse.cpp
  src/v20210409/model/QueryCustomersCreditRequest.cpp
  src/v20210409/model/QueryCreditAllocationHistoryResponse.cpp
  src/v20210409/model/QueryCreditAllocationHistoryRequest.cpp
  src/v20210409/model/QueryCustomersCreditResponse.cpp
  src/v20210409/model/CreateAccountRequest.cpp
  src/v20210409/model/QueryPartnerCreditResponse.cpp
  src/v20210409/model/CreateAccountResponse.cpp
  src/v20210409/model/QueryCreditAllocationHistoryData.cpp
  src/v20210409/model/AllocateCustomerCreditResponse.cpp
  src/v20210409/model/QueryCustomersCreditData.cpp
  src/v20210409/model/GetCountryCodesRequest.cpp
  src/v20210409/model/QueryPartnerCreditRequest.cpp
  src/v20210409/model/CountryCodeItem.cpp
  )

set(ip_include
    include/tencentcloud/ip
  )

add_library(ip ${LIB_TYPE}
  ${ip_public_header}
  ${ip_public_header_model}
  ${ip_src})

set_target_properties(ip
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ip
  )

target_include_directories(ip
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ip
  core)

#install(FILES ${ip_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ip/v20210409)
#install(FILES ${ip_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ip/v20210409/model)
install(DIRECTORY ${ip_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ip
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
