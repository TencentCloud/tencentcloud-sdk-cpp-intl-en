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

set(domain_public_header
  include/tencentcloud/domain/v20180808/DomainClient.h
  )

set(domain_public_header_model
  include/tencentcloud/domain/v20180808/model/UpdateProhibitionIntlBatchResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlBatchOperationLogsResponse.h
  include/tencentcloud/domain/v20180808/model/SetIntlDomainAutoRenewResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlDomainPriceNewListRequest.h
  include/tencentcloud/domain/v20180808/model/CreateIntlDomainBatchRequest.h
  include/tencentcloud/domain/v20180808/model/SendIntlPhoneEmailCodeRequest.h
  include/tencentcloud/domain/v20180808/model/CreateIntlPhoneEmailResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlPhoneEmailListRequest.h
  include/tencentcloud/domain/v20180808/model/RenewIntlDomainBatchRequest.h
  include/tencentcloud/domain/v20180808/model/BatchModifyIntlDomainInfoRequest.h
  include/tencentcloud/domain/v20180808/model/SetIntlDomainAutoRenewRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlDomainPriceNewListResponse.h
  include/tencentcloud/domain/v20180808/model/BatchDomainBuyLog.h
  include/tencentcloud/domain/v20180808/model/CreateIntlTemplateResponse.h
  include/tencentcloud/domain/v20180808/model/TechnicalContact.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlDomainListResponse.h
  include/tencentcloud/domain/v20180808/model/IntlBatchDetails.h
  include/tencentcloud/domain/v20180808/model/IntlContactInfo.h
  include/tencentcloud/domain/v20180808/model/CreateIntlPhoneEmailRequest.h
  include/tencentcloud/domain/v20180808/model/IntlDomainInfo.h
  include/tencentcloud/domain/v20180808/model/SendIntlPhoneEmailCodeResponse.h
  include/tencentcloud/domain/v20180808/model/DeleteIntlPhoneEmailResponse.h
  include/tencentcloud/domain/v20180808/model/DeleteIntlTemplateRequest.h
  include/tencentcloud/domain/v20180808/model/CheckIntlDomainNewRequest.h
  include/tencentcloud/domain/v20180808/model/BatchModifyIntlDomainInfoResponse.h
  include/tencentcloud/domain/v20180808/model/RenewIntlDomainBatchResponse.h
  include/tencentcloud/domain/v20180808/model/AdminContact.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlDomainListRequest.h
  include/tencentcloud/domain/v20180808/model/BillingContact.h
  include/tencentcloud/domain/v20180808/model/UpdateProhibitionIntlBatchRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlDomainBatchDetailsRequest.h
  include/tencentcloud/domain/v20180808/model/ModifyOwnerIntlBatchResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlDomainRequest.h
  include/tencentcloud/domain/v20180808/model/ModifyOwnerIntlBatchRequest.h
  include/tencentcloud/domain/v20180808/model/TransferProhibitionIntlBatchRequest.h
  include/tencentcloud/domain/v20180808/model/IntlTemplate.h
  include/tencentcloud/domain/v20180808/model/DeleteIntlTemplateResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlBatchDetailStatusRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlTemplateResponse.h
  include/tencentcloud/domain/v20180808/model/TransferProhibitionIntlBatchResponse.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlTemplateListRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlDomainBatchDetailsResponse.h
  include/tencentcloud/domain/v20180808/model/TransferInIntlDomainBatchRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlDomainResponse.h
  include/tencentcloud/domain/v20180808/model/CreateIntlTemplateRequest.h
  include/tencentcloud/domain/v20180808/model/DeleteIntlPhoneEmailRequest.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlBatchOperationLogsRequest.h
  include/tencentcloud/domain/v20180808/model/RegistrantContact.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlBatchDetailStatusResponse.h
  include/tencentcloud/domain/v20180808/model/IntlTemplateInfo.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlTemplateListResponse.h
  include/tencentcloud/domain/v20180808/model/CreateIntlDomainBatchResponse.h
  include/tencentcloud/domain/v20180808/model/BatchModifyIntlDomainDNSRequest.h
  include/tencentcloud/domain/v20180808/model/BatchModifyIntlDomainDNSResponse.h
  include/tencentcloud/domain/v20180808/model/BatchDomainBuyDetails.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlTemplateRequest.h
  include/tencentcloud/domain/v20180808/model/TransferInIntlDomainBatchResponse.h
  include/tencentcloud/domain/v20180808/model/CheckIntlDomainNewResponse.h
  include/tencentcloud/domain/v20180808/model/PriceInfoNew.h
  include/tencentcloud/domain/v20180808/model/DescribeIntlPhoneEmailListResponse.h
  include/tencentcloud/domain/v20180808/model/IntlPhoneEmailLists.h
  )

set(domain_src
  src/v20180808/DomainClient.cpp
  src/v20180808/model/UpdateProhibitionIntlBatchResponse.cpp
  src/v20180808/model/DescribeIntlBatchOperationLogsResponse.cpp
  src/v20180808/model/SetIntlDomainAutoRenewResponse.cpp
  src/v20180808/model/DescribeIntlDomainPriceNewListRequest.cpp
  src/v20180808/model/CreateIntlDomainBatchRequest.cpp
  src/v20180808/model/SendIntlPhoneEmailCodeRequest.cpp
  src/v20180808/model/CreateIntlPhoneEmailResponse.cpp
  src/v20180808/model/DescribeIntlPhoneEmailListRequest.cpp
  src/v20180808/model/RenewIntlDomainBatchRequest.cpp
  src/v20180808/model/BatchModifyIntlDomainInfoRequest.cpp
  src/v20180808/model/SetIntlDomainAutoRenewRequest.cpp
  src/v20180808/model/DescribeIntlDomainPriceNewListResponse.cpp
  src/v20180808/model/BatchDomainBuyLog.cpp
  src/v20180808/model/CreateIntlTemplateResponse.cpp
  src/v20180808/model/TechnicalContact.cpp
  src/v20180808/model/DescribeIntlDomainListResponse.cpp
  src/v20180808/model/IntlBatchDetails.cpp
  src/v20180808/model/IntlContactInfo.cpp
  src/v20180808/model/CreateIntlPhoneEmailRequest.cpp
  src/v20180808/model/IntlDomainInfo.cpp
  src/v20180808/model/SendIntlPhoneEmailCodeResponse.cpp
  src/v20180808/model/DeleteIntlPhoneEmailResponse.cpp
  src/v20180808/model/DeleteIntlTemplateRequest.cpp
  src/v20180808/model/CheckIntlDomainNewRequest.cpp
  src/v20180808/model/BatchModifyIntlDomainInfoResponse.cpp
  src/v20180808/model/RenewIntlDomainBatchResponse.cpp
  src/v20180808/model/AdminContact.cpp
  src/v20180808/model/DescribeIntlDomainListRequest.cpp
  src/v20180808/model/BillingContact.cpp
  src/v20180808/model/UpdateProhibitionIntlBatchRequest.cpp
  src/v20180808/model/DescribeIntlDomainBatchDetailsRequest.cpp
  src/v20180808/model/ModifyOwnerIntlBatchResponse.cpp
  src/v20180808/model/DescribeIntlDomainRequest.cpp
  src/v20180808/model/ModifyOwnerIntlBatchRequest.cpp
  src/v20180808/model/TransferProhibitionIntlBatchRequest.cpp
  src/v20180808/model/IntlTemplate.cpp
  src/v20180808/model/DeleteIntlTemplateResponse.cpp
  src/v20180808/model/DescribeIntlBatchDetailStatusRequest.cpp
  src/v20180808/model/DescribeIntlTemplateResponse.cpp
  src/v20180808/model/TransferProhibitionIntlBatchResponse.cpp
  src/v20180808/model/DescribeIntlTemplateListRequest.cpp
  src/v20180808/model/DescribeIntlDomainBatchDetailsResponse.cpp
  src/v20180808/model/TransferInIntlDomainBatchRequest.cpp
  src/v20180808/model/DescribeIntlDomainResponse.cpp
  src/v20180808/model/CreateIntlTemplateRequest.cpp
  src/v20180808/model/DeleteIntlPhoneEmailRequest.cpp
  src/v20180808/model/DescribeIntlBatchOperationLogsRequest.cpp
  src/v20180808/model/RegistrantContact.cpp
  src/v20180808/model/DescribeIntlBatchDetailStatusResponse.cpp
  src/v20180808/model/IntlTemplateInfo.cpp
  src/v20180808/model/DescribeIntlTemplateListResponse.cpp
  src/v20180808/model/CreateIntlDomainBatchResponse.cpp
  src/v20180808/model/BatchModifyIntlDomainDNSRequest.cpp
  src/v20180808/model/BatchModifyIntlDomainDNSResponse.cpp
  src/v20180808/model/BatchDomainBuyDetails.cpp
  src/v20180808/model/DescribeIntlTemplateRequest.cpp
  src/v20180808/model/TransferInIntlDomainBatchResponse.cpp
  src/v20180808/model/CheckIntlDomainNewResponse.cpp
  src/v20180808/model/PriceInfoNew.cpp
  src/v20180808/model/DescribeIntlPhoneEmailListResponse.cpp
  src/v20180808/model/IntlPhoneEmailLists.cpp
  )

set(domain_include
    include/tencentcloud/domain
  )

add_library(domain ${LIB_TYPE}
  ${domain_public_header}
  ${domain_public_header_model}
  ${domain_src})

set_target_properties(domain
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}domain
  )

target_include_directories(domain
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(domain
  core)

#install(FILES ${domain_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/domain/v20180808)
#install(FILES ${domain_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/domain/v20180808/model)
install(DIRECTORY ${domain_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS domain
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
