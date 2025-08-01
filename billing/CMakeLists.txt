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

set(billing_public_header
  include/tencentcloud/billing/v20180709/BillingClient.h
  )

set(billing_public_header_model
  include/tencentcloud/billing/v20180709/model/CreateAllocationUnitRequest.h
  include/tencentcloud/billing/v20180709/model/DeleteAllocationTagRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByProductRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeCostExplorerSummaryResponse.h
  include/tencentcloud/billing/v20180709/model/ConsumptionBusinessSummaryDataItem.h
  include/tencentcloud/billing/v20180709/model/ModifyAllocationRuleRequest.h
  include/tencentcloud/billing/v20180709/model/DeleteAllocationRuleRequest.h
  include/tencentcloud/billing/v20180709/model/CreateAllocationRuleResponse.h
  include/tencentcloud/billing/v20180709/model/BillTagInfo.h
  include/tencentcloud/billing/v20180709/model/ConditionBusiness.h
  include/tencentcloud/billing/v20180709/model/AnalyseActionTypeDetail.h
  include/tencentcloud/billing/v20180709/model/DescribeCostExplorerSummaryRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByProductResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeAllocationTreeResponse.h
  include/tencentcloud/billing/v20180709/model/DeleteAllocationTagResponse.h
  include/tencentcloud/billing/v20180709/model/AllocationTree.h
  include/tencentcloud/billing/v20180709/model/DescribeBillDetailForOrganizationResponse.h
  include/tencentcloud/billing/v20180709/model/BillDetailComponentConfig.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByResourceResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByRegionRequest.h
  include/tencentcloud/billing/v20180709/model/AdjustInfoDetail.h
  include/tencentcloud/billing/v20180709/model/CreateAllocationRuleRequest.h
  include/tencentcloud/billing/v20180709/model/ConsumptionRegionSummaryDataItem.h
  include/tencentcloud/billing/v20180709/model/BusinessSummaryInfo.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeGatherRuleDetailRequest.h
  include/tencentcloud/billing/v20180709/model/DistributionBillDetail.h
  include/tencentcloud/billing/v20180709/model/DescribeDosageCosDetailByDateRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillAdjustInfoResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeAllocationRuleDetailRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeAllocationUnitDetailResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByProductRequest.h
  include/tencentcloud/billing/v20180709/model/AllocationUnit.h
  include/tencentcloud/billing/v20180709/model/AllocationRationExpression.h
  include/tencentcloud/billing/v20180709/model/DescribeVoucherUsageDetailsResponse.h
  include/tencentcloud/billing/v20180709/model/ConsumptionSummaryTotal.h
  include/tencentcloud/billing/v20180709/model/BillDistributionResourceSummary.h
  include/tencentcloud/billing/v20180709/model/DescribeCostDetailResponse.h
  include/tencentcloud/billing/v20180709/model/VoucherInfos.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByProjectResponse.h
  include/tencentcloud/billing/v20180709/model/AnalyseProjectDetail.h
  include/tencentcloud/billing/v20180709/model/ProjectSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByTagResponse.h
  include/tencentcloud/billing/v20180709/model/ModifyGatherRuleRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByPayModeResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByTagRequest.h
  include/tencentcloud/billing/v20180709/model/AnalyseDetail.h
  include/tencentcloud/billing/v20180709/model/DeleteGatherRuleRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeAllocationRuleSummaryResponse.h
  include/tencentcloud/billing/v20180709/model/AnalyseAmountDetail.h
  include/tencentcloud/billing/v20180709/model/ModifyGatherRuleResponse.h
  include/tencentcloud/billing/v20180709/model/CreateGatherRuleRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryForOrganizationRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByRegionRequest.h
  include/tencentcloud/billing/v20180709/model/ConsumptionSummaryTrend.h
  include/tencentcloud/billing/v20180709/model/DescribeBillDownloadUrlRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByPayModeRequest.h
  include/tencentcloud/billing/v20180709/model/DeleteGatherRuleResponse.h
  include/tencentcloud/billing/v20180709/model/ApplicableProducts.h
  include/tencentcloud/billing/v20180709/model/ConditionPayMode.h
  include/tencentcloud/billing/v20180709/model/PayDealsResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByProjectRequest.h
  include/tencentcloud/billing/v20180709/model/BillDetailAssociatedOrder.h
  include/tencentcloud/billing/v20180709/model/BillDetail.h
  include/tencentcloud/billing/v20180709/model/DescribeBillDetailResponse.h
  include/tencentcloud/billing/v20180709/model/Deal.h
  include/tencentcloud/billing/v20180709/model/DescribeDealsByCondResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByProjectRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByProjectResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeBillAdjustInfoRequest.h
  include/tencentcloud/billing/v20180709/model/DeleteAllocationRuleResponse.h
  include/tencentcloud/billing/v20180709/model/TagDataInfo.h
  include/tencentcloud/billing/v20180709/model/PayDealsRequest.h
  include/tencentcloud/billing/v20180709/model/SummaryTotal.h
  include/tencentcloud/billing/v20180709/model/BusinessSummaryTotal.h
  include/tencentcloud/billing/v20180709/model/CostComponentSet.h
  include/tencentcloud/billing/v20180709/model/AnalyseHeaderDetail.h
  include/tencentcloud/billing/v20180709/model/AnalysePayModeDetail.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryResponse.h
  include/tencentcloud/billing/v20180709/model/AnalyseOwnerUinDetail.h
  include/tencentcloud/billing/v20180709/model/Conditions.h
  include/tencentcloud/billing/v20180709/model/AnalyseTimeDetail.h
  include/tencentcloud/billing/v20180709/model/RegionSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/ConsumptionProjectSummaryDataItem.h
  include/tencentcloud/billing/v20180709/model/AnalyseRegionDetail.h
  include/tencentcloud/billing/v20180709/model/ProductInfo.h
  include/tencentcloud/billing/v20180709/model/DescribeAllocationUnitDetailRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryForOrganizationRequest.h
  include/tencentcloud/billing/v20180709/model/ActionSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/DescribeBillDetailForOrganizationRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeVoucherUsageDetailsRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryRequest.h
  include/tencentcloud/billing/v20180709/model/BillDetailComponent.h
  include/tencentcloud/billing/v20180709/model/ConditionRegion.h
  include/tencentcloud/billing/v20180709/model/TagSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/ConsumptionResourceSummaryConditionValue.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByRegionResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeCostDetailRequest.h
  include/tencentcloud/billing/v20180709/model/GatherRuleSummary.h
  include/tencentcloud/billing/v20180709/model/DescribeTagListRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillResourceSummaryForOrganizationResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeAllocationTreeRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeCostSummaryByResourceRequest.h
  include/tencentcloud/billing/v20180709/model/CreateAllocationTagRequest.h
  include/tencentcloud/billing/v20180709/model/ExcludedProducts.h
  include/tencentcloud/billing/v20180709/model/PayModeSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/DescribeAllocationRuleDetailResponse.h
  include/tencentcloud/billing/v20180709/model/UsageDetails.h
  include/tencentcloud/billing/v20180709/model/AnalyseBusinessDetail.h
  include/tencentcloud/billing/v20180709/model/AnalyseConditions.h
  include/tencentcloud/billing/v20180709/model/CostDetail.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByProductResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryByRegionResponse.h
  include/tencentcloud/billing/v20180709/model/CreateAllocationTagResponse.h
  include/tencentcloud/billing/v20180709/model/ModifyAllocationUnitRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillDownloadUrlResponse.h
  include/tencentcloud/billing/v20180709/model/ConsumptionResourceSummaryDataItem.h
  include/tencentcloud/billing/v20180709/model/DescribeAccountBalanceRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeBillDetailRequest.h
  include/tencentcloud/billing/v20180709/model/AnalyseZoneDetail.h
  include/tencentcloud/billing/v20180709/model/DescribeVoucherInfoResponse.h
  include/tencentcloud/billing/v20180709/model/AllocationRulesSummary.h
  include/tencentcloud/billing/v20180709/model/SummaryDetail.h
  include/tencentcloud/billing/v20180709/model/DescribeAccountBalanceResponse.h
  include/tencentcloud/billing/v20180709/model/BusinessSummaryOverviewItem.h
  include/tencentcloud/billing/v20180709/model/CreateGatherRuleResponse.h
  include/tencentcloud/billing/v20180709/model/UsageRecords.h
  include/tencentcloud/billing/v20180709/model/ModifyAllocationRuleResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeVoucherInfoRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeDealsByCondRequest.h
  include/tencentcloud/billing/v20180709/model/CreateAllocationUnitResponse.h
  include/tencentcloud/billing/v20180709/model/DescribeDosageCosDetailByDateResponse.h
  include/tencentcloud/billing/v20180709/model/AnalyseHeaderTimeDetail.h
  include/tencentcloud/billing/v20180709/model/AllocationRuleExpression.h
  include/tencentcloud/billing/v20180709/model/DescribeBillSummaryForOrganizationResponse.h
  include/tencentcloud/billing/v20180709/model/DeleteAllocationUnitResponse.h
  include/tencentcloud/billing/v20180709/model/ConditionProject.h
  include/tencentcloud/billing/v20180709/model/DescribeTagListResponse.h
  include/tencentcloud/billing/v20180709/model/CosDetailSets.h
  include/tencentcloud/billing/v20180709/model/DescribeAllocationRuleSummaryRequest.h
  include/tencentcloud/billing/v20180709/model/ModifyAllocationUnitResponse.h
  include/tencentcloud/billing/v20180709/model/AnalyseConditionDetail.h
  include/tencentcloud/billing/v20180709/model/BillResourceSummary.h
  include/tencentcloud/billing/v20180709/model/DeleteAllocationUnitRequest.h
  include/tencentcloud/billing/v20180709/model/DescribeGatherRuleDetailResponse.h
  include/tencentcloud/billing/v20180709/model/AllocationRuleOverview.h
  )

set(billing_src
  src/v20180709/BillingClient.cpp
  src/v20180709/model/CreateAllocationUnitRequest.cpp
  src/v20180709/model/DeleteAllocationTagRequest.cpp
  src/v20180709/model/DescribeCostSummaryByProductRequest.cpp
  src/v20180709/model/DescribeCostExplorerSummaryResponse.cpp
  src/v20180709/model/ConsumptionBusinessSummaryDataItem.cpp
  src/v20180709/model/ModifyAllocationRuleRequest.cpp
  src/v20180709/model/DeleteAllocationRuleRequest.cpp
  src/v20180709/model/CreateAllocationRuleResponse.cpp
  src/v20180709/model/BillTagInfo.cpp
  src/v20180709/model/ConditionBusiness.cpp
  src/v20180709/model/AnalyseActionTypeDetail.cpp
  src/v20180709/model/DescribeCostExplorerSummaryRequest.cpp
  src/v20180709/model/DescribeCostSummaryByProductResponse.cpp
  src/v20180709/model/DescribeAllocationTreeResponse.cpp
  src/v20180709/model/DeleteAllocationTagResponse.cpp
  src/v20180709/model/AllocationTree.cpp
  src/v20180709/model/DescribeBillDetailForOrganizationResponse.cpp
  src/v20180709/model/BillDetailComponentConfig.cpp
  src/v20180709/model/DescribeCostSummaryByResourceResponse.cpp
  src/v20180709/model/DescribeBillSummaryByRegionRequest.cpp
  src/v20180709/model/AdjustInfoDetail.cpp
  src/v20180709/model/CreateAllocationRuleRequest.cpp
  src/v20180709/model/ConsumptionRegionSummaryDataItem.cpp
  src/v20180709/model/BusinessSummaryInfo.cpp
  src/v20180709/model/DescribeBillSummaryRequest.cpp
  src/v20180709/model/DescribeBillResourceSummaryResponse.cpp
  src/v20180709/model/DescribeGatherRuleDetailRequest.cpp
  src/v20180709/model/DistributionBillDetail.cpp
  src/v20180709/model/DescribeDosageCosDetailByDateRequest.cpp
  src/v20180709/model/DescribeBillAdjustInfoResponse.cpp
  src/v20180709/model/DescribeAllocationRuleDetailRequest.cpp
  src/v20180709/model/DescribeAllocationUnitDetailResponse.cpp
  src/v20180709/model/DescribeBillSummaryByProductRequest.cpp
  src/v20180709/model/AllocationUnit.cpp
  src/v20180709/model/AllocationRationExpression.cpp
  src/v20180709/model/DescribeVoucherUsageDetailsResponse.cpp
  src/v20180709/model/ConsumptionSummaryTotal.cpp
  src/v20180709/model/BillDistributionResourceSummary.cpp
  src/v20180709/model/DescribeCostDetailResponse.cpp
  src/v20180709/model/VoucherInfos.cpp
  src/v20180709/model/DescribeCostSummaryByProjectResponse.cpp
  src/v20180709/model/AnalyseProjectDetail.cpp
  src/v20180709/model/ProjectSummaryOverviewItem.cpp
  src/v20180709/model/DescribeBillSummaryByTagResponse.cpp
  src/v20180709/model/ModifyGatherRuleRequest.cpp
  src/v20180709/model/DescribeBillSummaryByPayModeResponse.cpp
  src/v20180709/model/DescribeBillSummaryByTagRequest.cpp
  src/v20180709/model/AnalyseDetail.cpp
  src/v20180709/model/DeleteGatherRuleRequest.cpp
  src/v20180709/model/DescribeAllocationRuleSummaryResponse.cpp
  src/v20180709/model/AnalyseAmountDetail.cpp
  src/v20180709/model/ModifyGatherRuleResponse.cpp
  src/v20180709/model/CreateGatherRuleRequest.cpp
  src/v20180709/model/DescribeBillResourceSummaryForOrganizationRequest.cpp
  src/v20180709/model/DescribeCostSummaryByRegionRequest.cpp
  src/v20180709/model/ConsumptionSummaryTrend.cpp
  src/v20180709/model/DescribeBillDownloadUrlRequest.cpp
  src/v20180709/model/DescribeBillSummaryByPayModeRequest.cpp
  src/v20180709/model/DeleteGatherRuleResponse.cpp
  src/v20180709/model/ApplicableProducts.cpp
  src/v20180709/model/ConditionPayMode.cpp
  src/v20180709/model/PayDealsResponse.cpp
  src/v20180709/model/DescribeCostSummaryByProjectRequest.cpp
  src/v20180709/model/BillDetailAssociatedOrder.cpp
  src/v20180709/model/BillDetail.cpp
  src/v20180709/model/DescribeBillDetailResponse.cpp
  src/v20180709/model/Deal.cpp
  src/v20180709/model/DescribeDealsByCondResponse.cpp
  src/v20180709/model/DescribeBillSummaryByProjectRequest.cpp
  src/v20180709/model/DescribeBillSummaryByProjectResponse.cpp
  src/v20180709/model/DescribeBillAdjustInfoRequest.cpp
  src/v20180709/model/DeleteAllocationRuleResponse.cpp
  src/v20180709/model/TagDataInfo.cpp
  src/v20180709/model/PayDealsRequest.cpp
  src/v20180709/model/SummaryTotal.cpp
  src/v20180709/model/BusinessSummaryTotal.cpp
  src/v20180709/model/CostComponentSet.cpp
  src/v20180709/model/AnalyseHeaderDetail.cpp
  src/v20180709/model/AnalysePayModeDetail.cpp
  src/v20180709/model/DescribeBillSummaryResponse.cpp
  src/v20180709/model/AnalyseOwnerUinDetail.cpp
  src/v20180709/model/Conditions.cpp
  src/v20180709/model/AnalyseTimeDetail.cpp
  src/v20180709/model/RegionSummaryOverviewItem.cpp
  src/v20180709/model/ConsumptionProjectSummaryDataItem.cpp
  src/v20180709/model/AnalyseRegionDetail.cpp
  src/v20180709/model/ProductInfo.cpp
  src/v20180709/model/DescribeAllocationUnitDetailRequest.cpp
  src/v20180709/model/DescribeBillSummaryForOrganizationRequest.cpp
  src/v20180709/model/ActionSummaryOverviewItem.cpp
  src/v20180709/model/DescribeBillDetailForOrganizationRequest.cpp
  src/v20180709/model/DescribeVoucherUsageDetailsRequest.cpp
  src/v20180709/model/DescribeBillResourceSummaryRequest.cpp
  src/v20180709/model/BillDetailComponent.cpp
  src/v20180709/model/ConditionRegion.cpp
  src/v20180709/model/TagSummaryOverviewItem.cpp
  src/v20180709/model/ConsumptionResourceSummaryConditionValue.cpp
  src/v20180709/model/DescribeCostSummaryByRegionResponse.cpp
  src/v20180709/model/DescribeCostDetailRequest.cpp
  src/v20180709/model/GatherRuleSummary.cpp
  src/v20180709/model/DescribeTagListRequest.cpp
  src/v20180709/model/DescribeBillResourceSummaryForOrganizationResponse.cpp
  src/v20180709/model/DescribeAllocationTreeRequest.cpp
  src/v20180709/model/DescribeCostSummaryByResourceRequest.cpp
  src/v20180709/model/CreateAllocationTagRequest.cpp
  src/v20180709/model/ExcludedProducts.cpp
  src/v20180709/model/PayModeSummaryOverviewItem.cpp
  src/v20180709/model/DescribeAllocationRuleDetailResponse.cpp
  src/v20180709/model/UsageDetails.cpp
  src/v20180709/model/AnalyseBusinessDetail.cpp
  src/v20180709/model/AnalyseConditions.cpp
  src/v20180709/model/CostDetail.cpp
  src/v20180709/model/DescribeBillSummaryByProductResponse.cpp
  src/v20180709/model/DescribeBillSummaryByRegionResponse.cpp
  src/v20180709/model/CreateAllocationTagResponse.cpp
  src/v20180709/model/ModifyAllocationUnitRequest.cpp
  src/v20180709/model/DescribeBillDownloadUrlResponse.cpp
  src/v20180709/model/ConsumptionResourceSummaryDataItem.cpp
  src/v20180709/model/DescribeAccountBalanceRequest.cpp
  src/v20180709/model/DescribeBillDetailRequest.cpp
  src/v20180709/model/AnalyseZoneDetail.cpp
  src/v20180709/model/DescribeVoucherInfoResponse.cpp
  src/v20180709/model/AllocationRulesSummary.cpp
  src/v20180709/model/SummaryDetail.cpp
  src/v20180709/model/DescribeAccountBalanceResponse.cpp
  src/v20180709/model/BusinessSummaryOverviewItem.cpp
  src/v20180709/model/CreateGatherRuleResponse.cpp
  src/v20180709/model/UsageRecords.cpp
  src/v20180709/model/ModifyAllocationRuleResponse.cpp
  src/v20180709/model/DescribeVoucherInfoRequest.cpp
  src/v20180709/model/DescribeDealsByCondRequest.cpp
  src/v20180709/model/CreateAllocationUnitResponse.cpp
  src/v20180709/model/DescribeDosageCosDetailByDateResponse.cpp
  src/v20180709/model/AnalyseHeaderTimeDetail.cpp
  src/v20180709/model/AllocationRuleExpression.cpp
  src/v20180709/model/DescribeBillSummaryForOrganizationResponse.cpp
  src/v20180709/model/DeleteAllocationUnitResponse.cpp
  src/v20180709/model/ConditionProject.cpp
  src/v20180709/model/DescribeTagListResponse.cpp
  src/v20180709/model/CosDetailSets.cpp
  src/v20180709/model/DescribeAllocationRuleSummaryRequest.cpp
  src/v20180709/model/ModifyAllocationUnitResponse.cpp
  src/v20180709/model/AnalyseConditionDetail.cpp
  src/v20180709/model/BillResourceSummary.cpp
  src/v20180709/model/DeleteAllocationUnitRequest.cpp
  src/v20180709/model/DescribeGatherRuleDetailResponse.cpp
  src/v20180709/model/AllocationRuleOverview.cpp
  )

set(billing_include
    include/tencentcloud/billing
  )

add_library(billing ${LIB_TYPE}
  ${billing_public_header}
  ${billing_public_header_model}
  ${billing_src})

set_target_properties(billing
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}billing
  )

target_include_directories(billing
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(billing
  core)

#install(FILES ${billing_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/billing/v20180709)
#install(FILES ${billing_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/billing/v20180709/model)
install(DIRECTORY ${billing_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS billing
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
