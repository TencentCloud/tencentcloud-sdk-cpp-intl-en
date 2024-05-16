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
  include/tencentcloud/faceid/v20180301/model/InternationalIDPassport.h
  include/tencentcloud/faceid/v20180301/model/GetSdkVerificationResultResponse.h
  include/tencentcloud/faceid/v20180301/model/ThailandIDCard.h
  include/tencentcloud/faceid/v20180301/model/GetSdkVerificationResultRequest.h
  include/tencentcloud/faceid/v20180301/model/HKIDCard.h
  include/tencentcloud/faceid/v20180301/model/SingaporeIDCard.h
  include/tencentcloud/faceid/v20180301/model/IndonesiaDrivingLicense.h
  include/tencentcloud/faceid/v20180301/model/NormalCardInfo.h
  include/tencentcloud/faceid/v20180301/model/ApplySdkVerificationTokenRequest.h
  include/tencentcloud/faceid/v20180301/model/CardVerifyResult.h
  include/tencentcloud/faceid/v20180301/model/Address.h
  include/tencentcloud/faceid/v20180301/model/CardInfo.h
  include/tencentcloud/faceid/v20180301/model/PhilippinesVoteID.h
  include/tencentcloud/faceid/v20180301/model/PhilippinesSSSID.h
  include/tencentcloud/faceid/v20180301/model/NormalMLIDCard.h
  include/tencentcloud/faceid/v20180301/model/IndonesiaIDCard.h
  include/tencentcloud/faceid/v20180301/model/ApplySdkVerificationTokenResponse.h
  include/tencentcloud/faceid/v20180301/model/NormalHKIDCard.h
  include/tencentcloud/faceid/v20180301/model/FileInfo.h
  include/tencentcloud/faceid/v20180301/model/PhilippinesDrivingLicense.h
  include/tencentcloud/faceid/v20180301/model/NormalIndonesiaIDCard.h
  include/tencentcloud/faceid/v20180301/model/MacaoIDCard.h
  include/tencentcloud/faceid/v20180301/model/GeneralCard.h
  include/tencentcloud/faceid/v20180301/model/PhilippinesUMID.h
  include/tencentcloud/faceid/v20180301/model/PhilippinesTinID.h
  include/tencentcloud/faceid/v20180301/model/MLIDCard.h
  include/tencentcloud/faceid/v20180301/model/NormalThailandIDCard.h
  include/tencentcloud/faceid/v20180301/model/CompareResult.h
  )

set(faceid_src
  src/v20180301/FaceidClient.cpp
  src/v20180301/model/InternationalIDPassport.cpp
  src/v20180301/model/GetSdkVerificationResultResponse.cpp
  src/v20180301/model/ThailandIDCard.cpp
  src/v20180301/model/GetSdkVerificationResultRequest.cpp
  src/v20180301/model/HKIDCard.cpp
  src/v20180301/model/SingaporeIDCard.cpp
  src/v20180301/model/IndonesiaDrivingLicense.cpp
  src/v20180301/model/NormalCardInfo.cpp
  src/v20180301/model/ApplySdkVerificationTokenRequest.cpp
  src/v20180301/model/CardVerifyResult.cpp
  src/v20180301/model/Address.cpp
  src/v20180301/model/CardInfo.cpp
  src/v20180301/model/PhilippinesVoteID.cpp
  src/v20180301/model/PhilippinesSSSID.cpp
  src/v20180301/model/NormalMLIDCard.cpp
  src/v20180301/model/IndonesiaIDCard.cpp
  src/v20180301/model/ApplySdkVerificationTokenResponse.cpp
  src/v20180301/model/NormalHKIDCard.cpp
  src/v20180301/model/FileInfo.cpp
  src/v20180301/model/PhilippinesDrivingLicense.cpp
  src/v20180301/model/NormalIndonesiaIDCard.cpp
  src/v20180301/model/MacaoIDCard.cpp
  src/v20180301/model/GeneralCard.cpp
  src/v20180301/model/PhilippinesUMID.cpp
  src/v20180301/model/PhilippinesTinID.cpp
  src/v20180301/model/MLIDCard.cpp
  src/v20180301/model/NormalThailandIDCard.cpp
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
