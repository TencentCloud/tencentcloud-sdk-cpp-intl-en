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
  include/tencentcloud/ocr/v20181119/model/DetectedWords.h
  include/tencentcloud/ocr/v20181119/model/Polygon.h
  include/tencentcloud/ocr/v20181119/model/TextDetectionResult.h
  include/tencentcloud/ocr/v20181119/model/HKIDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesVoteIDOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/GeneralAccurateOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/MLIDPassportOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/TextTable.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesDrivingLicenseOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/WordItem.h
  include/tencentcloud/ocr/v20181119/model/MLIDPassportOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/GeneralAccurateOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/ItemInfo.h
  include/tencentcloud/ocr/v20181119/model/SmartStructuralOCRV2Request.h
  include/tencentcloud/ocr/v20181119/model/GeneralBasicOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesDrivingLicenseOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/BankCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesSssIDOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/Key.h
  include/tencentcloud/ocr/v20181119/model/SmartStructuralOCRV2Response.h
  include/tencentcloud/ocr/v20181119/model/HKIDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/GroupInfo.h
  include/tencentcloud/ocr/v20181119/model/MLIDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/TableOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/DetectedWordCoordPoint.h
  include/tencentcloud/ocr/v20181119/model/Value.h
  include/tencentcloud/ocr/v20181119/model/Coord.h
  include/tencentcloud/ocr/v20181119/model/RecognizeKoreanIDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizeKoreanIDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesSssIDOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizeKoreanDrivingLicenseOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizeIndonesiaIDCardOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizeIndonesiaIDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizeKoreanDrivingLicenseOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/MLIDCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesTinIDOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesVoteIDOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/TableOCRRequest.h
  include/tencentcloud/ocr/v20181119/model/LineInfo.h
  include/tencentcloud/ocr/v20181119/model/BankCardOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/ItemCoord.h
  include/tencentcloud/ocr/v20181119/model/TextDetection.h
  include/tencentcloud/ocr/v20181119/model/RecognizePhilippinesTinIDOCRResponse.h
  include/tencentcloud/ocr/v20181119/model/GeneralBasicOCRRequest.h
  )

set(ocr_src
  src/v20181119/OcrClient.cpp
  src/v20181119/model/DetectedWords.cpp
  src/v20181119/model/Polygon.cpp
  src/v20181119/model/TextDetectionResult.cpp
  src/v20181119/model/HKIDCardOCRRequest.cpp
  src/v20181119/model/RecognizePhilippinesVoteIDOCRResponse.cpp
  src/v20181119/model/GeneralAccurateOCRResponse.cpp
  src/v20181119/model/MLIDPassportOCRResponse.cpp
  src/v20181119/model/TextTable.cpp
  src/v20181119/model/RecognizePhilippinesDrivingLicenseOCRRequest.cpp
  src/v20181119/model/WordItem.cpp
  src/v20181119/model/MLIDPassportOCRRequest.cpp
  src/v20181119/model/GeneralAccurateOCRRequest.cpp
  src/v20181119/model/ItemInfo.cpp
  src/v20181119/model/SmartStructuralOCRV2Request.cpp
  src/v20181119/model/GeneralBasicOCRResponse.cpp
  src/v20181119/model/RecognizePhilippinesDrivingLicenseOCRResponse.cpp
  src/v20181119/model/BankCardOCRRequest.cpp
  src/v20181119/model/RecognizePhilippinesSssIDOCRRequest.cpp
  src/v20181119/model/Key.cpp
  src/v20181119/model/SmartStructuralOCRV2Response.cpp
  src/v20181119/model/HKIDCardOCRResponse.cpp
  src/v20181119/model/GroupInfo.cpp
  src/v20181119/model/MLIDCardOCRRequest.cpp
  src/v20181119/model/TableOCRResponse.cpp
  src/v20181119/model/DetectedWordCoordPoint.cpp
  src/v20181119/model/Value.cpp
  src/v20181119/model/Coord.cpp
  src/v20181119/model/RecognizeKoreanIDCardOCRRequest.cpp
  src/v20181119/model/RecognizeKoreanIDCardOCRResponse.cpp
  src/v20181119/model/RecognizePhilippinesSssIDOCRResponse.cpp
  src/v20181119/model/RecognizeKoreanDrivingLicenseOCRRequest.cpp
  src/v20181119/model/RecognizeIndonesiaIDCardOCRRequest.cpp
  src/v20181119/model/RecognizeIndonesiaIDCardOCRResponse.cpp
  src/v20181119/model/RecognizeKoreanDrivingLicenseOCRResponse.cpp
  src/v20181119/model/MLIDCardOCRResponse.cpp
  src/v20181119/model/RecognizePhilippinesTinIDOCRRequest.cpp
  src/v20181119/model/RecognizePhilippinesVoteIDOCRRequest.cpp
  src/v20181119/model/TableOCRRequest.cpp
  src/v20181119/model/LineInfo.cpp
  src/v20181119/model/BankCardOCRResponse.cpp
  src/v20181119/model/ItemCoord.cpp
  src/v20181119/model/TextDetection.cpp
  src/v20181119/model/RecognizePhilippinesTinIDOCRResponse.cpp
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
