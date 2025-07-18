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

set(iai_public_header
  include/tencentcloud/iai/v20200303/IaiClient.h
  )

set(iai_public_header_model
  include/tencentcloud/iai/v20200303/model/GetPersonGroupInfoResponse.h
  include/tencentcloud/iai/v20200303/model/Eye.h
  include/tencentcloud/iai/v20200303/model/Candidate.h
  include/tencentcloud/iai/v20200303/model/ModifyGroupResponse.h
  include/tencentcloud/iai/v20200303/model/GetGroupInfoResponse.h
  include/tencentcloud/iai/v20200303/model/DeletePersonRequest.h
  include/tencentcloud/iai/v20200303/model/DetectLiveFaceResponse.h
  include/tencentcloud/iai/v20200303/model/SearchPersonsReturnsByGroupResponse.h
  include/tencentcloud/iai/v20200303/model/DeleteFaceRequest.h
  include/tencentcloud/iai/v20200303/model/HeadPose.h
  include/tencentcloud/iai/v20200303/model/DetectFaceSimilarityResponse.h
  include/tencentcloud/iai/v20200303/model/ModifyPersonGroupInfoRequest.h
  include/tencentcloud/iai/v20200303/model/GetGroupListResponse.h
  include/tencentcloud/iai/v20200303/model/GroupInfo.h
  include/tencentcloud/iai/v20200303/model/GetPersonListResponse.h
  include/tencentcloud/iai/v20200303/model/Hat.h
  include/tencentcloud/iai/v20200303/model/FaceQualityCompleteness.h
  include/tencentcloud/iai/v20200303/model/FaceAttributesInfo.h
  include/tencentcloud/iai/v20200303/model/DetectFaceAttributesRequest.h
  include/tencentcloud/iai/v20200303/model/ModifyGroupRequest.h
  include/tencentcloud/iai/v20200303/model/CreatePersonRequest.h
  include/tencentcloud/iai/v20200303/model/GetGroupListRequest.h
  include/tencentcloud/iai/v20200303/model/DeleteGroupRequest.h
  include/tencentcloud/iai/v20200303/model/CreateFaceResponse.h
  include/tencentcloud/iai/v20200303/model/DetectFaceAttributesResponse.h
  include/tencentcloud/iai/v20200303/model/DetectFaceSimilarityRequest.h
  include/tencentcloud/iai/v20200303/model/SearchPersonsResponse.h
  include/tencentcloud/iai/v20200303/model/DetectLiveFaceAccurateRequest.h
  include/tencentcloud/iai/v20200303/model/CompareFaceResponse.h
  include/tencentcloud/iai/v20200303/model/PersonExDescriptionInfo.h
  include/tencentcloud/iai/v20200303/model/DetectLiveFaceRequest.h
  include/tencentcloud/iai/v20200303/model/VerifyFaceResponse.h
  include/tencentcloud/iai/v20200303/model/GetPersonBaseInfoResponse.h
  include/tencentcloud/iai/v20200303/model/ResultsReturnsByGroup.h
  include/tencentcloud/iai/v20200303/model/CreateFaceRequest.h
  include/tencentcloud/iai/v20200303/model/Mouth.h
  include/tencentcloud/iai/v20200303/model/CreateGroupRequest.h
  include/tencentcloud/iai/v20200303/model/PersonGroupInfo.h
  include/tencentcloud/iai/v20200303/model/GetPersonGroupInfoRequest.h
  include/tencentcloud/iai/v20200303/model/Result.h
  include/tencentcloud/iai/v20200303/model/SearchFacesReturnsByGroupResponse.h
  include/tencentcloud/iai/v20200303/model/FaceInfo.h
  include/tencentcloud/iai/v20200303/model/DeleteGroupResponse.h
  include/tencentcloud/iai/v20200303/model/SearchPersonsRequest.h
  include/tencentcloud/iai/v20200303/model/SearchFacesReturnsByGroupRequest.h
  include/tencentcloud/iai/v20200303/model/FaceQualityInfo.h
  include/tencentcloud/iai/v20200303/model/CompareFaceRequest.h
  include/tencentcloud/iai/v20200303/model/PersonInfo.h
  include/tencentcloud/iai/v20200303/model/Eyebrow.h
  include/tencentcloud/iai/v20200303/model/FaceShape.h
  include/tencentcloud/iai/v20200303/model/DetectFaceResponse.h
  include/tencentcloud/iai/v20200303/model/CopyPersonRequest.h
  include/tencentcloud/iai/v20200303/model/GetPersonListNumRequest.h
  include/tencentcloud/iai/v20200303/model/GroupCandidate.h
  include/tencentcloud/iai/v20200303/model/SearchPersonsReturnsByGroupRequest.h
  include/tencentcloud/iai/v20200303/model/DeletePersonFromGroupResponse.h
  include/tencentcloud/iai/v20200303/model/VerifyPersonResponse.h
  include/tencentcloud/iai/v20200303/model/AnalyzeFaceResponse.h
  include/tencentcloud/iai/v20200303/model/GetGroupInfoRequest.h
  include/tencentcloud/iai/v20200303/model/FaceDetailInfo.h
  include/tencentcloud/iai/v20200303/model/FaceHairAttributesInfo.h
  include/tencentcloud/iai/v20200303/model/VerifyPersonRequest.h
  include/tencentcloud/iai/v20200303/model/DetectLiveFaceAccurateResponse.h
  include/tencentcloud/iai/v20200303/model/AnalyzeFaceRequest.h
  include/tencentcloud/iai/v20200303/model/Point.h
  include/tencentcloud/iai/v20200303/model/DetectFaceRequest.h
  include/tencentcloud/iai/v20200303/model/CreatePersonResponse.h
  include/tencentcloud/iai/v20200303/model/GetPersonBaseInfoRequest.h
  include/tencentcloud/iai/v20200303/model/SearchFacesResponse.h
  include/tencentcloud/iai/v20200303/model/GroupExDescriptionInfo.h
  include/tencentcloud/iai/v20200303/model/VerifyFaceRequest.h
  include/tencentcloud/iai/v20200303/model/CopyPersonResponse.h
  include/tencentcloud/iai/v20200303/model/Hair.h
  include/tencentcloud/iai/v20200303/model/GetPersonListNumResponse.h
  include/tencentcloud/iai/v20200303/model/GetPersonListRequest.h
  include/tencentcloud/iai/v20200303/model/FaceDetailAttributesInfo.h
  include/tencentcloud/iai/v20200303/model/DeleteFaceResponse.h
  include/tencentcloud/iai/v20200303/model/DeletePersonResponse.h
  include/tencentcloud/iai/v20200303/model/AttributeItem.h
  include/tencentcloud/iai/v20200303/model/FaceRect.h
  include/tencentcloud/iai/v20200303/model/ModifyPersonGroupInfoResponse.h
  include/tencentcloud/iai/v20200303/model/SearchFacesRequest.h
  include/tencentcloud/iai/v20200303/model/DeletePersonFromGroupRequest.h
  include/tencentcloud/iai/v20200303/model/CreateGroupResponse.h
  )

set(iai_src
  src/v20200303/IaiClient.cpp
  src/v20200303/model/GetPersonGroupInfoResponse.cpp
  src/v20200303/model/Eye.cpp
  src/v20200303/model/Candidate.cpp
  src/v20200303/model/ModifyGroupResponse.cpp
  src/v20200303/model/GetGroupInfoResponse.cpp
  src/v20200303/model/DeletePersonRequest.cpp
  src/v20200303/model/DetectLiveFaceResponse.cpp
  src/v20200303/model/SearchPersonsReturnsByGroupResponse.cpp
  src/v20200303/model/DeleteFaceRequest.cpp
  src/v20200303/model/HeadPose.cpp
  src/v20200303/model/DetectFaceSimilarityResponse.cpp
  src/v20200303/model/ModifyPersonGroupInfoRequest.cpp
  src/v20200303/model/GetGroupListResponse.cpp
  src/v20200303/model/GroupInfo.cpp
  src/v20200303/model/GetPersonListResponse.cpp
  src/v20200303/model/Hat.cpp
  src/v20200303/model/FaceQualityCompleteness.cpp
  src/v20200303/model/FaceAttributesInfo.cpp
  src/v20200303/model/DetectFaceAttributesRequest.cpp
  src/v20200303/model/ModifyGroupRequest.cpp
  src/v20200303/model/CreatePersonRequest.cpp
  src/v20200303/model/GetGroupListRequest.cpp
  src/v20200303/model/DeleteGroupRequest.cpp
  src/v20200303/model/CreateFaceResponse.cpp
  src/v20200303/model/DetectFaceAttributesResponse.cpp
  src/v20200303/model/DetectFaceSimilarityRequest.cpp
  src/v20200303/model/SearchPersonsResponse.cpp
  src/v20200303/model/DetectLiveFaceAccurateRequest.cpp
  src/v20200303/model/CompareFaceResponse.cpp
  src/v20200303/model/PersonExDescriptionInfo.cpp
  src/v20200303/model/DetectLiveFaceRequest.cpp
  src/v20200303/model/VerifyFaceResponse.cpp
  src/v20200303/model/GetPersonBaseInfoResponse.cpp
  src/v20200303/model/ResultsReturnsByGroup.cpp
  src/v20200303/model/CreateFaceRequest.cpp
  src/v20200303/model/Mouth.cpp
  src/v20200303/model/CreateGroupRequest.cpp
  src/v20200303/model/PersonGroupInfo.cpp
  src/v20200303/model/GetPersonGroupInfoRequest.cpp
  src/v20200303/model/Result.cpp
  src/v20200303/model/SearchFacesReturnsByGroupResponse.cpp
  src/v20200303/model/FaceInfo.cpp
  src/v20200303/model/DeleteGroupResponse.cpp
  src/v20200303/model/SearchPersonsRequest.cpp
  src/v20200303/model/SearchFacesReturnsByGroupRequest.cpp
  src/v20200303/model/FaceQualityInfo.cpp
  src/v20200303/model/CompareFaceRequest.cpp
  src/v20200303/model/PersonInfo.cpp
  src/v20200303/model/Eyebrow.cpp
  src/v20200303/model/FaceShape.cpp
  src/v20200303/model/DetectFaceResponse.cpp
  src/v20200303/model/CopyPersonRequest.cpp
  src/v20200303/model/GetPersonListNumRequest.cpp
  src/v20200303/model/GroupCandidate.cpp
  src/v20200303/model/SearchPersonsReturnsByGroupRequest.cpp
  src/v20200303/model/DeletePersonFromGroupResponse.cpp
  src/v20200303/model/VerifyPersonResponse.cpp
  src/v20200303/model/AnalyzeFaceResponse.cpp
  src/v20200303/model/GetGroupInfoRequest.cpp
  src/v20200303/model/FaceDetailInfo.cpp
  src/v20200303/model/FaceHairAttributesInfo.cpp
  src/v20200303/model/VerifyPersonRequest.cpp
  src/v20200303/model/DetectLiveFaceAccurateResponse.cpp
  src/v20200303/model/AnalyzeFaceRequest.cpp
  src/v20200303/model/Point.cpp
  src/v20200303/model/DetectFaceRequest.cpp
  src/v20200303/model/CreatePersonResponse.cpp
  src/v20200303/model/GetPersonBaseInfoRequest.cpp
  src/v20200303/model/SearchFacesResponse.cpp
  src/v20200303/model/GroupExDescriptionInfo.cpp
  src/v20200303/model/VerifyFaceRequest.cpp
  src/v20200303/model/CopyPersonResponse.cpp
  src/v20200303/model/Hair.cpp
  src/v20200303/model/GetPersonListNumResponse.cpp
  src/v20200303/model/GetPersonListRequest.cpp
  src/v20200303/model/FaceDetailAttributesInfo.cpp
  src/v20200303/model/DeleteFaceResponse.cpp
  src/v20200303/model/DeletePersonResponse.cpp
  src/v20200303/model/AttributeItem.cpp
  src/v20200303/model/FaceRect.cpp
  src/v20200303/model/ModifyPersonGroupInfoResponse.cpp
  src/v20200303/model/SearchFacesRequest.cpp
  src/v20200303/model/DeletePersonFromGroupRequest.cpp
  src/v20200303/model/CreateGroupResponse.cpp
  )

set(iai_include
    include/tencentcloud/iai
  )

add_library(iai ${LIB_TYPE}
  ${iai_public_header}
  ${iai_public_header_model}
  ${iai_src})

set_target_properties(iai
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}iai
  )

target_include_directories(iai
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(iai
  core)

#install(FILES ${iai_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iai/v20200303)
#install(FILES ${iai_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/iai/v20200303/model)
install(DIRECTORY ${iai_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS iai
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
