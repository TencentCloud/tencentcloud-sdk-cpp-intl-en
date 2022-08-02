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

set(ocr_public_header
  include/tencentcloud/ocr/v20181119/OcrClient.h
  )

set(ocr_public_header_model
  include/tencentcloud/ocr/v20181119/model/GeneralAccurateOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/GeneralBasicOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/DetectedWords.h
  include/tencentcloud/ocr/v20181119/model/TableOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/TableOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/DetectedWordCoordPoint.h
  include/tencentcloud/ocr/v20181119/model/BankCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/Coord.h
  include/tencentcloud/ocr/v20181119/model/HKIDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/BankCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/ItemCoord.h
  include/tencentcloud/ocr/v20181119/model/MLIDPassportOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/GeneralAccurateOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/TextDetection.h
  include/tencentcloud/ocr/v20181119/model/MLIDPassportOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/HKIDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/TextTable.h
  include/tencentcloud/ocr/v20181119/model/GeneralBasicOCRRequest.h
  )

set(ocr_src
  src/v20181119/OcrClient.cpp
  src/v20181119/model/GeneralAccurateOCRRequest.cpp
  src/v20181119/model/GeneralBasicOCRResponse.cpp
  src/v20181119/model/DetectedWords.cpp
  src/v20181119/model/TableOCRRequest.cpp
  src/v20181119/model/TableOCRResponse.cpp
  src/v20181119/model/DetectedWordCoordPoint.cpp
  src/v20181119/model/BankCardOCRRequest.cpp
  src/v20181119/model/Coord.cpp
  src/v20181119/model/HKIDCardOCRRequest.cpp
  src/v20181119/model/BankCardOCRResponse.cpp
  src/v20181119/model/ItemCoord.cpp
  src/v20181119/model/MLIDPassportOCRResponse.cpp
  src/v20181119/model/GeneralAccurateOCRResponse.cpp
  src/v20181119/model/TextDetection.cpp
  src/v20181119/model/MLIDPassportOCRRequest.cpp
  src/v20181119/model/HKIDCardOCRResponse.cpp
  src/v20181119/model/TextTable.cpp
  src/v20181119/model/GeneralBasicOCRRequest.cpp
  )

set(ocr_include
    include/tencentcloud/ocr
  )

add_library(ocr ${LIB_TYPE}
  ${ocr_public_header}
  ${ocr_public_header_model}
  ${ocr_src})

set_target_properties(ocr
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ocr
  )

target_include_directories(ocr
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ocr
  core)

#install(FILES ${ocr_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ocr/v20181119)
#install(FILES ${ocr_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ocr/v20181119/model)
install(DIRECTORY ${ocr_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ocr
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
