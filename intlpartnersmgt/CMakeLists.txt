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

set(intlpartnersmgt_public_header
  include/tencentcloud/intlpartnersmgt/v20220928/IntlpartnersmgtClient.h
  )

set(intlpartnersmgt_public_header_model
  include/tencentcloud/intlpartnersmgt/v20220928/model/SummaryDetails.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryDirectCustomersCreditData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillSummaryResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/TradeTwoNode.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryT1IndirectCustomersDetailRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/CreateAndSendClientInvitationMailResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/CustomerBillDetailData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/RegionSummaryOverviewItem.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QuerySubAgentsDetailV2Response.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillDownloadUrlRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerUinData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/CountryCodeItem.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByRegionRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditByUinListResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryPendingSubAgentsV2Request.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditAllocationHistoryResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/CreateAccountRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryDirectCustomersCreditRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomerBillingQuotaData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryPartnerCreditRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/GetTradeConfigListRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByProductRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/ModifyClientRemarkResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryPartnerCreditResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherPoolRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinItem.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/PolicyProductList.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomerBillingQuotaResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillSummaryRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryPendingSubAgentsV2ResponseData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/ApproveSubAgentApplyResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryInvitationInfoResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByPayModeResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryAccountVerificationStatusResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/AllocateCustomerCreditRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillDownloadUrlRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByPayModeRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryInvitationInfoData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QuerySubAgentsDetailV2Request.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/GetCountryCodesResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/AllocateCreditPoolRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/AllocateCustomerCreditResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryT1IndirectCustomersDetailResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherAmountByUinRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/GetCountryCodesRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/ForceQNResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/PayModeSummaryOverviewItem.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryPendingCustomersItem.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryDirectCustomersCreditResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillDownloadUrlResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerUinRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/TradeOneNode.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeRebateDownloadUrlResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QuerySubAgentsDetailV2ResponseData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryInvitationInfoRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryT1IndirectCustomersDetailResponseData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerInfoResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherPoolResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryAccountVerificationStatusRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/ActionSummaryOverviewItem.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryPendingClientsV2Response.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/AllocateCreditPoolResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillDetailResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditAllocationHistoryRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerUinResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/ApproveClientApplyRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/ApproveSubAgentApplyRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillDetailRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomersCreditResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/SendVerifyCodeRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherAmountByUinResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherAmountByUinItem.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditAllocationHistoryData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/BusinessInfo.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByProductResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillDetailResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillSummaryByRegionResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/GetTradeConfigListResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillDownloadUrlResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeBillDetailRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCreditByUinListRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/CreateAccountResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/ApproveClientApplyResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryPendingClientsV2Request.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/TagInfo.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryPolicyProductListByCodeRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/BusinessSummaryOverviewItem.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/ForceQNRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerInfoRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryPolicyProductListByCodeResponse.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinVoucherItem.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/ModifyClientRemarkRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryPendingSubAgentsV2Response.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/BillDetailData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/QueryCustomerBillingQuotaRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerInfoData.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/CreateAndSendClientInvitationMailRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/DescribeRebateDownloadUrlRequest.h
  include/tencentcloud/intlpartnersmgt/v20220928/model/SendVerifyCodeResponse.h
  )

set(intlpartnersmgt_src
  src/v20220928/IntlpartnersmgtClient.cpp
  src/v20220928/model/SummaryDetails.cpp
  src/v20220928/model/QueryDirectCustomersCreditData.cpp
  src/v20220928/model/DescribeCustomerBillSummaryResponse.cpp
  src/v20220928/model/TradeTwoNode.cpp
  src/v20220928/model/QueryT1IndirectCustomersDetailRequest.cpp
  src/v20220928/model/CreateAndSendClientInvitationMailResponse.cpp
  src/v20220928/model/CustomerBillDetailData.cpp
  src/v20220928/model/RegionSummaryOverviewItem.cpp
  src/v20220928/model/QuerySubAgentsDetailV2Response.cpp
  src/v20220928/model/DescribeCustomerBillDownloadUrlRequest.cpp
  src/v20220928/model/DescribeCustomerUinData.cpp
  src/v20220928/model/CountryCodeItem.cpp
  src/v20220928/model/DescribeBillSummaryByRegionRequest.cpp
  src/v20220928/model/QueryCreditByUinListResponse.cpp
  src/v20220928/model/QueryPendingSubAgentsV2Request.cpp
  src/v20220928/model/QueryCreditAllocationHistoryResponse.cpp
  src/v20220928/model/CreateAccountRequest.cpp
  src/v20220928/model/DescribeBillSummaryRequest.cpp
  src/v20220928/model/QueryDirectCustomersCreditRequest.cpp
  src/v20220928/model/QueryCustomerBillingQuotaData.cpp
  src/v20220928/model/QueryPartnerCreditRequest.cpp
  src/v20220928/model/GetTradeConfigListRequest.cpp
  src/v20220928/model/DescribeBillSummaryByProductRequest.cpp
  src/v20220928/model/ModifyClientRemarkResponse.cpp
  src/v20220928/model/QueryPartnerCreditResponse.cpp
  src/v20220928/model/QueryVoucherListByUinResponse.cpp
  src/v20220928/model/QueryVoucherPoolRequest.cpp
  src/v20220928/model/QueryVoucherListByUinItem.cpp
  src/v20220928/model/PolicyProductList.cpp
  src/v20220928/model/QueryCustomerBillingQuotaResponse.cpp
  src/v20220928/model/DescribeCustomerBillSummaryRequest.cpp
  src/v20220928/model/QueryPendingSubAgentsV2ResponseData.cpp
  src/v20220928/model/ApproveSubAgentApplyResponse.cpp
  src/v20220928/model/QueryInvitationInfoResponse.cpp
  src/v20220928/model/DescribeBillSummaryByPayModeResponse.cpp
  src/v20220928/model/QueryAccountVerificationStatusResponse.cpp
  src/v20220928/model/AllocateCustomerCreditRequest.cpp
  src/v20220928/model/DescribeBillDownloadUrlRequest.cpp
  src/v20220928/model/DescribeBillSummaryByPayModeRequest.cpp
  src/v20220928/model/QueryInvitationInfoData.cpp
  src/v20220928/model/QuerySubAgentsDetailV2Request.cpp
  src/v20220928/model/GetCountryCodesResponse.cpp
  src/v20220928/model/AllocateCreditPoolRequest.cpp
  src/v20220928/model/AllocateCustomerCreditResponse.cpp
  src/v20220928/model/QueryT1IndirectCustomersDetailResponse.cpp
  src/v20220928/model/QueryVoucherAmountByUinRequest.cpp
  src/v20220928/model/GetCountryCodesRequest.cpp
  src/v20220928/model/ForceQNResponse.cpp
  src/v20220928/model/PayModeSummaryOverviewItem.cpp
  src/v20220928/model/QueryPendingCustomersItem.cpp
  src/v20220928/model/QueryDirectCustomersCreditResponse.cpp
  src/v20220928/model/DescribeBillDownloadUrlResponse.cpp
  src/v20220928/model/DescribeCustomerUinRequest.cpp
  src/v20220928/model/TradeOneNode.cpp
  src/v20220928/model/DescribeRebateDownloadUrlResponse.cpp
  src/v20220928/model/QuerySubAgentsDetailV2ResponseData.cpp
  src/v20220928/model/DescribeBillSummaryResponse.cpp
  src/v20220928/model/QueryInvitationInfoRequest.cpp
  src/v20220928/model/QueryCustomersCreditRequest.cpp
  src/v20220928/model/QueryT1IndirectCustomersDetailResponseData.cpp
  src/v20220928/model/DescribeCustomerInfoResponse.cpp
  src/v20220928/model/QueryVoucherPoolResponse.cpp
  src/v20220928/model/QueryAccountVerificationStatusRequest.cpp
  src/v20220928/model/ActionSummaryOverviewItem.cpp
  src/v20220928/model/QueryPendingClientsV2Response.cpp
  src/v20220928/model/AllocateCreditPoolResponse.cpp
  src/v20220928/model/DescribeBillDetailResponse.cpp
  src/v20220928/model/QueryCreditAllocationHistoryRequest.cpp
  src/v20220928/model/DescribeCustomerUinResponse.cpp
  src/v20220928/model/ApproveClientApplyRequest.cpp
  src/v20220928/model/ApproveSubAgentApplyRequest.cpp
  src/v20220928/model/DescribeCustomerBillDetailRequest.cpp
  src/v20220928/model/QueryCustomersCreditData.cpp
  src/v20220928/model/QueryCustomersCreditResponse.cpp
  src/v20220928/model/SendVerifyCodeRequest.cpp
  src/v20220928/model/QueryVoucherListByUinRequest.cpp
  src/v20220928/model/QueryVoucherAmountByUinResponse.cpp
  src/v20220928/model/QueryVoucherAmountByUinItem.cpp
  src/v20220928/model/QueryCreditAllocationHistoryData.cpp
  src/v20220928/model/BusinessInfo.cpp
  src/v20220928/model/DescribeBillSummaryByProductResponse.cpp
  src/v20220928/model/DescribeCustomerBillDetailResponse.cpp
  src/v20220928/model/DescribeBillSummaryByRegionResponse.cpp
  src/v20220928/model/GetTradeConfigListResponse.cpp
  src/v20220928/model/DescribeCustomerBillDownloadUrlResponse.cpp
  src/v20220928/model/DescribeBillDetailRequest.cpp
  src/v20220928/model/QueryCreditByUinListRequest.cpp
  src/v20220928/model/CreateAccountResponse.cpp
  src/v20220928/model/ApproveClientApplyResponse.cpp
  src/v20220928/model/QueryPendingClientsV2Request.cpp
  src/v20220928/model/TagInfo.cpp
  src/v20220928/model/QueryPolicyProductListByCodeRequest.cpp
  src/v20220928/model/BusinessSummaryOverviewItem.cpp
  src/v20220928/model/ForceQNRequest.cpp
  src/v20220928/model/DescribeCustomerInfoRequest.cpp
  src/v20220928/model/QueryPolicyProductListByCodeResponse.cpp
  src/v20220928/model/QueryVoucherListByUinVoucherItem.cpp
  src/v20220928/model/ModifyClientRemarkRequest.cpp
  src/v20220928/model/QueryPendingSubAgentsV2Response.cpp
  src/v20220928/model/BillDetailData.cpp
  src/v20220928/model/QueryCustomerBillingQuotaRequest.cpp
  src/v20220928/model/DescribeCustomerInfoData.cpp
  src/v20220928/model/CreateAndSendClientInvitationMailRequest.cpp
  src/v20220928/model/DescribeRebateDownloadUrlRequest.cpp
  src/v20220928/model/SendVerifyCodeResponse.cpp
  )

set(intlpartnersmgt_include
    include/tencentcloud/intlpartnersmgt
  )

add_library(intlpartnersmgt ${LIB_TYPE}
  ${intlpartnersmgt_public_header}
  ${intlpartnersmgt_public_header_model}
  ${intlpartnersmgt_src})

set_target_properties(intlpartnersmgt
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}intlpartnersmgt
  )

target_include_directories(intlpartnersmgt
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(intlpartnersmgt
  core)

#install(FILES ${intlpartnersmgt_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/intlpartnersmgt/v20220928)
#install(FILES ${intlpartnersmgt_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/intlpartnersmgt/v20220928/model)
install(DIRECTORY ${intlpartnersmgt_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS intlpartnersmgt
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
