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

set(tbaas_public_header
  include/tencentcloud/tbaas/v20180416/TbaasClient.h
  )

set(tbaas_public_header_model
  include/tencentcloud/tbaas/v20180416/model/DescribeFabricBlockRequest.h
  include/tencentcloud/tbaas/v20180416/model/InvokeFabricChaincodeResponse.h
  include/tencentcloud/tbaas/v20180416/model/Transaction.h
  include/tencentcloud/tbaas/v20180416/model/InvokeFabricChaincodeRequest.h
  include/tencentcloud/tbaas/v20180416/model/QueryFabricChaincodeRequest.h
  include/tencentcloud/tbaas/v20180416/model/DescribeFabricBlockResponse.h
  include/tencentcloud/tbaas/v20180416/model/QueryFabricChaincodeResponse.h
  include/tencentcloud/tbaas/v20180416/model/DescribeFabricTransactionResponse.h
  include/tencentcloud/tbaas/v20180416/model/DescribeFabricTransactionRequest.h
  )

set(tbaas_src
  src/v20180416/TbaasClient.cpp
  src/v20180416/model/DescribeFabricBlockRequest.cpp
  src/v20180416/model/InvokeFabricChaincodeResponse.cpp
  src/v20180416/model/Transaction.cpp
  src/v20180416/model/InvokeFabricChaincodeRequest.cpp
  src/v20180416/model/QueryFabricChaincodeRequest.cpp
  src/v20180416/model/DescribeFabricBlockResponse.cpp
  src/v20180416/model/QueryFabricChaincodeResponse.cpp
  src/v20180416/model/DescribeFabricTransactionResponse.cpp
  src/v20180416/model/DescribeFabricTransactionRequest.cpp
  )

set(tbaas_include
    include/tencentcloud/tbaas
  )

add_library(tbaas ${LIB_TYPE}
  ${tbaas_public_header}
  ${tbaas_public_header_model}
  ${tbaas_src})

set_target_properties(tbaas
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}tbaas
  )

target_include_directories(tbaas
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(tbaas
  core)

#install(FILES ${tbaas_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tbaas/v20180416)
#install(FILES ${tbaas_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/tbaas/v20180416/model)
install(DIRECTORY ${tbaas_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS tbaas
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
