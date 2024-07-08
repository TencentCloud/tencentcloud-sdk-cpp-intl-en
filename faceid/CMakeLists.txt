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

set(faceid_public_header
  include/tencentcloud/faceid/v20180301/FaceidClient.h
  )

set(faceid_public_header_model
  include/tencentcloud/faceid/v20180301/model/GetLivenessResultResponse.h
  include/tencentcloud/faceid/v20180301/model/GetFaceIdTokenIntlResponse.h
  include/tencentcloud/faceid/v20180301/model/InternationalIDPassport.h
  include/tencentcloud/faceid/v20180301/model/GetSdkVerificationResultResponse.h
  include/tencentcloud/faceid/v20180301/model/GetSdkVerificationResultRequest.h
  include/tencentcloud/faceid/v20180301/model/ApplyWebVerificationBizTokenIntlResponse.h
  include/tencentcloud/faceid/v20180301/model/LivenessCompareResponse.h
  include/tencentcloud/faceid/v20180301/model/CreateUploadUrlResponse.h
  include/tencentcloud/faceid/v20180301/model/ApplyCardVerificationResponse.h
  include/tencentcloud/faceid/v20180301/model/DetectReflectLivenessAndCompareRequest.h
  include/tencentcloud/faceid/v20180301/model/GetFaceIdTokenIntlRequest.h
  include/tencentcloud/faceid/v20180301/model/VideoLivenessCompareRequest.h
  include/tencentcloud/faceid/v20180301/model/ApplyWebVerificationTokenResponse.h
  include/tencentcloud/faceid/v20180301/model/NormalHKIDCard.h
  include/tencentcloud/faceid/v20180301/model/GetWebVerificationResultRequest.h
  include/tencentcloud/faceid/v20180301/model/ThailandIDCard.h
  include/tencentcloud/faceid/v20180301/model/VerificationDetail.h
  include/tencentcloud/faceid/v20180301/model/GetWebVerificationResultIntlResponse.h
  include/tencentcloud/faceid/v20180301/model/CompareFaceLivenessRequest.h
  include/tencentcloud/faceid/v20180301/model/HKIDCard.h
  include/tencentcloud/faceid/v20180301/model/SingaporeIDCard.h
  include/tencentcloud/faceid/v20180301/model/IndonesiaDrivingLicense.h
  include/tencentcloud/faceid/v20180301/model/GetFaceIdResultIntlRequest.h
  include/tencentcloud/faceid/v20180301/model/NormalCardInfo.h
  include/tencentcloud/faceid/v20180301/model/GetFaceIdResultIntlResponse.h
  include/tencentcloud/faceid/v20180301/model/ApplySdkVerificationTokenRequest.h
  include/tencentcloud/faceid/v20180301/model/GenerateReflectSequenceRequest.h
  include/tencentcloud/faceid/v20180301/model/EditDetail.h
  include/tencentcloud/faceid/v20180301/model/VideoLivenessCompareResponse.h
  include/tencentcloud/faceid/v20180301/model/PhilippinesSSSID.h
  include/tencentcloud/faceid/v20180301/model/CardVerifyResult.h
  include/tencentcloud/faceid/v20180301/model/ApplyWebVerificationTokenRequest.h
  include/tencentcloud/faceid/v20180301/model/Address.h
  include/tencentcloud/faceid/v20180301/model/ApplyLivenessTokenResponse.h
  include/tencentcloud/faceid/v20180301/model/GetCardVerificationResultRequest.h
  include/tencentcloud/faceid/v20180301/model/CardInfo.h
  include/tencentcloud/faceid/v20180301/model/PhilippinesVoteID.h
  include/tencentcloud/faceid/v20180301/model/WebVerificationConfigIntl.h
  include/tencentcloud/faceid/v20180301/model/MainlandIDCard.h
  include/tencentcloud/faceid/v20180301/model/NormalMLIDCard.h
  include/tencentcloud/faceid/v20180301/model/NormalIndonesiaIDCard.h
  include/tencentcloud/faceid/v20180301/model/CompareFaceLivenessResponse.h
  include/tencentcloud/faceid/v20180301/model/IndonesiaIDCard.h
  include/tencentcloud/faceid/v20180301/model/ApplySdkVerificationTokenResponse.h
  include/tencentcloud/faceid/v20180301/model/CreateUploadUrlRequest.h
  include/tencentcloud/faceid/v20180301/model/ApplyWebVerificationBizTokenIntlRequest.h
  include/tencentcloud/faceid/v20180301/model/GetWebVerificationResultResponse.h
  include/tencentcloud/faceid/v20180301/model/FileInfo.h
  include/tencentcloud/faceid/v20180301/model/ApplyLivenessTokenRequest.h
  include/tencentcloud/faceid/v20180301/model/NormalThailandIDCard.h
  include/tencentcloud/faceid/v20180301/model/PhilippinesDrivingLicense.h
  include/tencentcloud/faceid/v20180301/model/GetCardVerificationResultResponse.h
  include/tencentcloud/faceid/v20180301/model/GenerateReflectSequenceResponse.h
  include/tencentcloud/faceid/v20180301/model/GetWebVerificationResultIntlRequest.h
  include/tencentcloud/faceid/v20180301/model/GeneralCard.h
  include/tencentcloud/faceid/v20180301/model/MacaoIDCard.h
  include/tencentcloud/faceid/v20180301/model/PhilippinesUMID.h
  include/tencentcloud/faceid/v20180301/model/PhilippinesTinID.h
  include/tencentcloud/faceid/v20180301/model/ApplyCardVerificationRequest.h
  include/tencentcloud/faceid/v20180301/model/LivenessCompareRequest.h
  include/tencentcloud/faceid/v20180301/model/MLIDCard.h
  include/tencentcloud/faceid/v20180301/model/OCRResult.h
  include/tencentcloud/faceid/v20180301/model/DetectReflectLivenessAndCompareResponse.h
  include/tencentcloud/faceid/v20180301/model/GetLivenessResultRequest.h
  include/tencentcloud/faceid/v20180301/model/CompareResult.h
  )

set(faceid_src
  src/v20180301/FaceidClient.cpp
  src/v20180301/model/GetLivenessResultResponse.cpp
  src/v20180301/model/GetFaceIdTokenIntlResponse.cpp
  src/v20180301/model/InternationalIDPassport.cpp
  src/v20180301/model/GetSdkVerificationResultResponse.cpp
  src/v20180301/model/GetSdkVerificationResultRequest.cpp
  src/v20180301/model/ApplyWebVerificationBizTokenIntlResponse.cpp
  src/v20180301/model/LivenessCompareResponse.cpp
  src/v20180301/model/CreateUploadUrlResponse.cpp
  src/v20180301/model/ApplyCardVerificationResponse.cpp
  src/v20180301/model/DetectReflectLivenessAndCompareRequest.cpp
  src/v20180301/model/GetFaceIdTokenIntlRequest.cpp
  src/v20180301/model/VideoLivenessCompareRequest.cpp
  src/v20180301/model/ApplyWebVerificationTokenResponse.cpp
  src/v20180301/model/NormalHKIDCard.cpp
  src/v20180301/model/GetWebVerificationResultRequest.cpp
  src/v20180301/model/ThailandIDCard.cpp
  src/v20180301/model/VerificationDetail.cpp
  src/v20180301/model/GetWebVerificationResultIntlResponse.cpp
  src/v20180301/model/CompareFaceLivenessRequest.cpp
  src/v20180301/model/HKIDCard.cpp
  src/v20180301/model/SingaporeIDCard.cpp
  src/v20180301/model/IndonesiaDrivingLicense.cpp
  src/v20180301/model/GetFaceIdResultIntlRequest.cpp
  src/v20180301/model/NormalCardInfo.cpp
  src/v20180301/model/GetFaceIdResultIntlResponse.cpp
  src/v20180301/model/ApplySdkVerificationTokenRequest.cpp
  src/v20180301/model/GenerateReflectSequenceRequest.cpp
  src/v20180301/model/EditDetail.cpp
  src/v20180301/model/VideoLivenessCompareResponse.cpp
  src/v20180301/model/PhilippinesSSSID.cpp
  src/v20180301/model/CardVerifyResult.cpp
  src/v20180301/model/ApplyWebVerificationTokenRequest.cpp
  src/v20180301/model/Address.cpp
  src/v20180301/model/ApplyLivenessTokenResponse.cpp
  src/v20180301/model/GetCardVerificationResultRequest.cpp
  src/v20180301/model/CardInfo.cpp
  src/v20180301/model/PhilippinesVoteID.cpp
  src/v20180301/model/WebVerificationConfigIntl.cpp
  src/v20180301/model/MainlandIDCard.cpp
  src/v20180301/model/NormalMLIDCard.cpp
  src/v20180301/model/NormalIndonesiaIDCard.cpp
  src/v20180301/model/CompareFaceLivenessResponse.cpp
  src/v20180301/model/IndonesiaIDCard.cpp
  src/v20180301/model/ApplySdkVerificationTokenResponse.cpp
  src/v20180301/model/CreateUploadUrlRequest.cpp
  src/v20180301/model/ApplyWebVerificationBizTokenIntlRequest.cpp
  src/v20180301/model/GetWebVerificationResultResponse.cpp
  src/v20180301/model/FileInfo.cpp
  src/v20180301/model/ApplyLivenessTokenRequest.cpp
  src/v20180301/model/NormalThailandIDCard.cpp
  src/v20180301/model/PhilippinesDrivingLicense.cpp
  src/v20180301/model/GetCardVerificationResultResponse.cpp
  src/v20180301/model/GenerateReflectSequenceResponse.cpp
  src/v20180301/model/GetWebVerificationResultIntlRequest.cpp
  src/v20180301/model/GeneralCard.cpp
  src/v20180301/model/MacaoIDCard.cpp
  src/v20180301/model/PhilippinesUMID.cpp
  src/v20180301/model/PhilippinesTinID.cpp
  src/v20180301/model/ApplyCardVerificationRequest.cpp
  src/v20180301/model/LivenessCompareRequest.cpp
  src/v20180301/model/MLIDCard.cpp
  src/v20180301/model/OCRResult.cpp
  src/v20180301/model/DetectReflectLivenessAndCompareResponse.cpp
  src/v20180301/model/GetLivenessResultRequest.cpp
  src/v20180301/model/CompareResult.cpp
  )

set(faceid_include
    include/tencentcloud/faceid
  )

add_library(faceid ${LIB_TYPE}
  ${faceid_public_header}
  ${faceid_public_header_model}
  ${faceid_src})

set_target_properties(faceid
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}faceid
  )

target_include_directories(faceid
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(faceid
  core)

#install(FILES ${faceid_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/faceid/v20180301)
#install(FILES ${faceid_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/faceid/v20180301/model)
install(DIRECTORY ${faceid_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS faceid
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
