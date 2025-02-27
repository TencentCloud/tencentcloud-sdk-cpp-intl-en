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

set(ssl_public_header
  include/tencentcloud/ssl/v20191205/SslClient.h
  )

set(ssl_public_header_model
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateBindResourceTaskDetailRequest.h
  include/tencentcloud/ssl/v20191205/model/GatewayCertificate.h
  include/tencentcloud/ssl/v20191205/model/Error.h
  include/tencentcloud/ssl/v20191205/model/ModifyCSRRequest.h
  include/tencentcloud/ssl/v20191205/model/TCBAccessInstance.h
  include/tencentcloud/ssl/v20191205/model/CancelCertificateOrderRequest.h
  include/tencentcloud/ssl/v20191205/model/ModifyCertificateProjectResponse.h
  include/tencentcloud/ssl/v20191205/model/Certificates.h
  include/tencentcloud/ssl/v20191205/model/CertificateExtra.h
  include/tencentcloud/ssl/v20191205/model/TeoInstanceList.h
  include/tencentcloud/ssl/v20191205/model/RootCertificates.h
  include/tencentcloud/ssl/v20191205/model/CdnInstanceDetail.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateDetailRequest.h
  include/tencentcloud/ssl/v20191205/model/TkeNameSpaceDetail.h
  include/tencentcloud/ssl/v20191205/model/CreateCertificateBindResourceSyncTaskResponse.h
  include/tencentcloud/ssl/v20191205/model/TCBHostInstance.h
  include/tencentcloud/ssl/v20191205/model/ClbListener.h
  include/tencentcloud/ssl/v20191205/model/COSInstanceList.h
  include/tencentcloud/ssl/v20191205/model/DvAuths.h
  include/tencentcloud/ssl/v20191205/model/ModifyCertificateAliasRequest.h
  include/tencentcloud/ssl/v20191205/model/BatchDeleteCSRRequest.h
  include/tencentcloud/ssl/v20191205/model/ProjectInfo.h
  include/tencentcloud/ssl/v20191205/model/TCBEnvironments.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateOperateLogsRequest.h
  include/tencentcloud/ssl/v20191205/model/CancelCertificateOrderResponse.h
  include/tencentcloud/ssl/v20191205/model/DdosInstanceList.h
  include/tencentcloud/ssl/v20191205/model/DescribeCSRSetResponse.h
  include/tencentcloud/ssl/v20191205/model/UpdateRecordDetails.h
  include/tencentcloud/ssl/v20191205/model/DescribeCSRRequest.h
  include/tencentcloud/ssl/v20191205/model/ModifyCertificateResubmitRequest.h
  include/tencentcloud/ssl/v20191205/model/SupportDownloadType.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateBindResourceTaskResultRequest.h
  include/tencentcloud/ssl/v20191205/model/UpdateRecordDetail.h
  include/tencentcloud/ssl/v20191205/model/BindResourceResult.h
  include/tencentcloud/ssl/v20191205/model/ApplyCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/CreateCertificateBindResourceSyncTaskRequest.h
  include/tencentcloud/ssl/v20191205/model/CosInstanceDetail.h
  include/tencentcloud/ssl/v20191205/model/UploadConfirmLetterResponse.h
  include/tencentcloud/ssl/v20191205/model/DescribeHostUpdateRecordDetailRequest.h
  include/tencentcloud/ssl/v20191205/model/ReplaceCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/SyncTaskBindResourceResult.h
  include/tencentcloud/ssl/v20191205/model/ClbInstanceDetail.h
  include/tencentcloud/ssl/v20191205/model/UpdateSyncProgress.h
  include/tencentcloud/ssl/v20191205/model/OperationLog.h
  include/tencentcloud/ssl/v20191205/model/VodInstanceDetail.h
  include/tencentcloud/ssl/v20191205/model/ResourceTypeRegions.h
  include/tencentcloud/ssl/v20191205/model/UpdateCertificateRecordRollbackRequest.h
  include/tencentcloud/ssl/v20191205/model/DescribeHostUpdateRecordResponse.h
  include/tencentcloud/ssl/v20191205/model/UpdateCertificateRecordRollbackResponse.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateBindResourceTaskDetailResponse.h
  include/tencentcloud/ssl/v20191205/model/DvAuthDetail.h
  include/tencentcloud/ssl/v20191205/model/ModifyCSRResponse.h
  include/tencentcloud/ssl/v20191205/model/CdnInstanceList.h
  include/tencentcloud/ssl/v20191205/model/UpdateCertificateRecordRetryRequest.h
  include/tencentcloud/ssl/v20191205/model/DdosInstanceDetail.h
  include/tencentcloud/ssl/v20191205/model/CertBasicInfo.h
  include/tencentcloud/ssl/v20191205/model/CreateCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificatesResponse.h
  include/tencentcloud/ssl/v20191205/model/CommitCertificateInformationResponse.h
  include/tencentcloud/ssl/v20191205/model/UploadCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/LiveInstanceDetail.h
  include/tencentcloud/ssl/v20191205/model/SubmitCertificateInformationRequest.h
  include/tencentcloud/ssl/v20191205/model/TCBEnvironment.h
  include/tencentcloud/ssl/v20191205/model/WafInstanceDetail.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificatesRequest.h
  include/tencentcloud/ssl/v20191205/model/ApiGatewayInstanceList.h
  include/tencentcloud/ssl/v20191205/model/TeoInstanceDetail.h
  include/tencentcloud/ssl/v20191205/model/PreAuditInfo.h
  include/tencentcloud/ssl/v20191205/model/CreateCSRResponse.h
  include/tencentcloud/ssl/v20191205/model/Certificate.h
  include/tencentcloud/ssl/v20191205/model/BatchDeleteCSRResponse.h
  include/tencentcloud/ssl/v20191205/model/CommitCertificateInformationRequest.h
  include/tencentcloud/ssl/v20191205/model/CSRItem.h
  include/tencentcloud/ssl/v20191205/model/DownloadCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/UpdateCertificateInstanceRequest.h
  include/tencentcloud/ssl/v20191205/model/ReplaceCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/TkeSecretDetail.h
  include/tencentcloud/ssl/v20191205/model/Tags.h
  include/tencentcloud/ssl/v20191205/model/DeleteCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/CreateCSRRequest.h
  include/tencentcloud/ssl/v20191205/model/TCBInstanceList.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/TSEInstanceDetail.h
  include/tencentcloud/ssl/v20191205/model/WafInstanceList.h
  include/tencentcloud/ssl/v20191205/model/Filter.h
  include/tencentcloud/ssl/v20191205/model/DescribeHostUpdateRecordDetailResponse.h
  include/tencentcloud/ssl/v20191205/model/DescribeHostUpdateRecordRequest.h
  include/tencentcloud/ssl/v20191205/model/CertTaskId.h
  include/tencentcloud/ssl/v20191205/model/TCBAccessService.h
  include/tencentcloud/ssl/v20191205/model/DescribeCSRSetRequest.h
  include/tencentcloud/ssl/v20191205/model/SubmittedData.h
  include/tencentcloud/ssl/v20191205/model/UpdateSyncProgressRegion.h
  include/tencentcloud/ssl/v20191205/model/TkeInstanceList.h
  include/tencentcloud/ssl/v20191205/model/ApiGatewayInstanceDetail.h
  include/tencentcloud/ssl/v20191205/model/LiveInstanceList.h
  include/tencentcloud/ssl/v20191205/model/DeleteCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateOperateLogsResponse.h
  include/tencentcloud/ssl/v20191205/model/ModifyCertificateProjectRequest.h
  include/tencentcloud/ssl/v20191205/model/DescribeHostTeoInstanceListResponse.h
  include/tencentcloud/ssl/v20191205/model/CancelAuditCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/ModifyCertificateResubmitResponse.h
  include/tencentcloud/ssl/v20191205/model/UpdateCertificateInstanceResponse.h
  include/tencentcloud/ssl/v20191205/model/UploadCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/ModifyCertificateAliasResponse.h
  include/tencentcloud/ssl/v20191205/model/ApplyCertificateRequest.h
  include/tencentcloud/ssl/v20191205/model/CreateCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/UpdateRecordInfo.h
  include/tencentcloud/ssl/v20191205/model/HostingConfig.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateDetailResponse.h
  include/tencentcloud/ssl/v20191205/model/DescribeCertificateBindResourceTaskResultResponse.h
  include/tencentcloud/ssl/v20191205/model/DownloadCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/ClbListenerRule.h
  include/tencentcloud/ssl/v20191205/model/DescribeHostTeoInstanceListRequest.h
  include/tencentcloud/ssl/v20191205/model/BindResourceRegionResult.h
  include/tencentcloud/ssl/v20191205/model/TkeInstanceDetail.h
  include/tencentcloud/ssl/v20191205/model/UploadConfirmLetterRequest.h
  include/tencentcloud/ssl/v20191205/model/SubmitCertificateInformationResponse.h
  include/tencentcloud/ssl/v20191205/model/DescribeCSRResponse.h
  include/tencentcloud/ssl/v20191205/model/ClbInstanceList.h
  include/tencentcloud/ssl/v20191205/model/UpdateCertificateRecordRetryResponse.h
  include/tencentcloud/ssl/v20191205/model/TCBHostService.h
  include/tencentcloud/ssl/v20191205/model/TkeIngressDetail.h
  include/tencentcloud/ssl/v20191205/model/CancelAuditCertificateResponse.h
  include/tencentcloud/ssl/v20191205/model/TSEInstanceList.h
  include/tencentcloud/ssl/v20191205/model/VODInstanceList.h
  )

set(ssl_src
  src/v20191205/SslClient.cpp
  src/v20191205/model/DescribeCertificateBindResourceTaskDetailRequest.cpp
  src/v20191205/model/GatewayCertificate.cpp
  src/v20191205/model/Error.cpp
  src/v20191205/model/ModifyCSRRequest.cpp
  src/v20191205/model/TCBAccessInstance.cpp
  src/v20191205/model/CancelCertificateOrderRequest.cpp
  src/v20191205/model/ModifyCertificateProjectResponse.cpp
  src/v20191205/model/Certificates.cpp
  src/v20191205/model/CertificateExtra.cpp
  src/v20191205/model/TeoInstanceList.cpp
  src/v20191205/model/RootCertificates.cpp
  src/v20191205/model/CdnInstanceDetail.cpp
  src/v20191205/model/DescribeCertificateDetailRequest.cpp
  src/v20191205/model/TkeNameSpaceDetail.cpp
  src/v20191205/model/CreateCertificateBindResourceSyncTaskResponse.cpp
  src/v20191205/model/TCBHostInstance.cpp
  src/v20191205/model/ClbListener.cpp
  src/v20191205/model/COSInstanceList.cpp
  src/v20191205/model/DvAuths.cpp
  src/v20191205/model/ModifyCertificateAliasRequest.cpp
  src/v20191205/model/BatchDeleteCSRRequest.cpp
  src/v20191205/model/ProjectInfo.cpp
  src/v20191205/model/TCBEnvironments.cpp
  src/v20191205/model/DescribeCertificateOperateLogsRequest.cpp
  src/v20191205/model/CancelCertificateOrderResponse.cpp
  src/v20191205/model/DdosInstanceList.cpp
  src/v20191205/model/DescribeCSRSetResponse.cpp
  src/v20191205/model/UpdateRecordDetails.cpp
  src/v20191205/model/DescribeCSRRequest.cpp
  src/v20191205/model/ModifyCertificateResubmitRequest.cpp
  src/v20191205/model/SupportDownloadType.cpp
  src/v20191205/model/DescribeCertificateBindResourceTaskResultRequest.cpp
  src/v20191205/model/UpdateRecordDetail.cpp
  src/v20191205/model/BindResourceResult.cpp
  src/v20191205/model/ApplyCertificateResponse.cpp
  src/v20191205/model/CreateCertificateBindResourceSyncTaskRequest.cpp
  src/v20191205/model/CosInstanceDetail.cpp
  src/v20191205/model/UploadConfirmLetterResponse.cpp
  src/v20191205/model/DescribeHostUpdateRecordDetailRequest.cpp
  src/v20191205/model/ReplaceCertificateResponse.cpp
  src/v20191205/model/SyncTaskBindResourceResult.cpp
  src/v20191205/model/ClbInstanceDetail.cpp
  src/v20191205/model/UpdateSyncProgress.cpp
  src/v20191205/model/OperationLog.cpp
  src/v20191205/model/VodInstanceDetail.cpp
  src/v20191205/model/ResourceTypeRegions.cpp
  src/v20191205/model/UpdateCertificateRecordRollbackRequest.cpp
  src/v20191205/model/DescribeHostUpdateRecordResponse.cpp
  src/v20191205/model/UpdateCertificateRecordRollbackResponse.cpp
  src/v20191205/model/DescribeCertificateBindResourceTaskDetailResponse.cpp
  src/v20191205/model/DvAuthDetail.cpp
  src/v20191205/model/ModifyCSRResponse.cpp
  src/v20191205/model/CdnInstanceList.cpp
  src/v20191205/model/UpdateCertificateRecordRetryRequest.cpp
  src/v20191205/model/DdosInstanceDetail.cpp
  src/v20191205/model/CertBasicInfo.cpp
  src/v20191205/model/CreateCertificateRequest.cpp
  src/v20191205/model/DescribeCertificatesResponse.cpp
  src/v20191205/model/CommitCertificateInformationResponse.cpp
  src/v20191205/model/UploadCertificateResponse.cpp
  src/v20191205/model/LiveInstanceDetail.cpp
  src/v20191205/model/SubmitCertificateInformationRequest.cpp
  src/v20191205/model/TCBEnvironment.cpp
  src/v20191205/model/WafInstanceDetail.cpp
  src/v20191205/model/DescribeCertificatesRequest.cpp
  src/v20191205/model/ApiGatewayInstanceList.cpp
  src/v20191205/model/TeoInstanceDetail.cpp
  src/v20191205/model/PreAuditInfo.cpp
  src/v20191205/model/CreateCSRResponse.cpp
  src/v20191205/model/Certificate.cpp
  src/v20191205/model/BatchDeleteCSRResponse.cpp
  src/v20191205/model/CommitCertificateInformationRequest.cpp
  src/v20191205/model/CSRItem.cpp
  src/v20191205/model/DownloadCertificateRequest.cpp
  src/v20191205/model/UpdateCertificateInstanceRequest.cpp
  src/v20191205/model/ReplaceCertificateRequest.cpp
  src/v20191205/model/DescribeCertificateResponse.cpp
  src/v20191205/model/TkeSecretDetail.cpp
  src/v20191205/model/Tags.cpp
  src/v20191205/model/DeleteCertificateResponse.cpp
  src/v20191205/model/CreateCSRRequest.cpp
  src/v20191205/model/TCBInstanceList.cpp
  src/v20191205/model/DescribeCertificateRequest.cpp
  src/v20191205/model/TSEInstanceDetail.cpp
  src/v20191205/model/WafInstanceList.cpp
  src/v20191205/model/Filter.cpp
  src/v20191205/model/DescribeHostUpdateRecordDetailResponse.cpp
  src/v20191205/model/DescribeHostUpdateRecordRequest.cpp
  src/v20191205/model/CertTaskId.cpp
  src/v20191205/model/TCBAccessService.cpp
  src/v20191205/model/DescribeCSRSetRequest.cpp
  src/v20191205/model/SubmittedData.cpp
  src/v20191205/model/UpdateSyncProgressRegion.cpp
  src/v20191205/model/TkeInstanceList.cpp
  src/v20191205/model/ApiGatewayInstanceDetail.cpp
  src/v20191205/model/LiveInstanceList.cpp
  src/v20191205/model/DeleteCertificateRequest.cpp
  src/v20191205/model/DescribeCertificateOperateLogsResponse.cpp
  src/v20191205/model/ModifyCertificateProjectRequest.cpp
  src/v20191205/model/DescribeHostTeoInstanceListResponse.cpp
  src/v20191205/model/CancelAuditCertificateRequest.cpp
  src/v20191205/model/ModifyCertificateResubmitResponse.cpp
  src/v20191205/model/UpdateCertificateInstanceResponse.cpp
  src/v20191205/model/UploadCertificateRequest.cpp
  src/v20191205/model/ModifyCertificateAliasResponse.cpp
  src/v20191205/model/ApplyCertificateRequest.cpp
  src/v20191205/model/CreateCertificateResponse.cpp
  src/v20191205/model/UpdateRecordInfo.cpp
  src/v20191205/model/HostingConfig.cpp
  src/v20191205/model/DescribeCertificateDetailResponse.cpp
  src/v20191205/model/DescribeCertificateBindResourceTaskResultResponse.cpp
  src/v20191205/model/DownloadCertificateResponse.cpp
  src/v20191205/model/ClbListenerRule.cpp
  src/v20191205/model/DescribeHostTeoInstanceListRequest.cpp
  src/v20191205/model/BindResourceRegionResult.cpp
  src/v20191205/model/TkeInstanceDetail.cpp
  src/v20191205/model/UploadConfirmLetterRequest.cpp
  src/v20191205/model/SubmitCertificateInformationResponse.cpp
  src/v20191205/model/DescribeCSRResponse.cpp
  src/v20191205/model/ClbInstanceList.cpp
  src/v20191205/model/UpdateCertificateRecordRetryResponse.cpp
  src/v20191205/model/TCBHostService.cpp
  src/v20191205/model/TkeIngressDetail.cpp
  src/v20191205/model/CancelAuditCertificateResponse.cpp
  src/v20191205/model/TSEInstanceList.cpp
  src/v20191205/model/VODInstanceList.cpp
  )

set(ssl_include
    include/tencentcloud/ssl
  )

add_library(ssl ${LIB_TYPE}
  ${ssl_public_header}
  ${ssl_public_header_model}
  ${ssl_src})

set_target_properties(ssl
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ssl
  )

target_include_directories(ssl
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ssl
  core)

#install(FILES ${ssl_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ssl/v20191205)
#install(FILES ${ssl_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ssl/v20191205/model)
install(DIRECTORY ${ssl_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ssl
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
