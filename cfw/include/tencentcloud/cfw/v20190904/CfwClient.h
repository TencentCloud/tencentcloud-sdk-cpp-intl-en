/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CFW_V20190904_CFWCLIENT_H_
#define TENCENTCLOUD_CFW_V20190904_CFWCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cfw/v20190904/model/AddAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/AddAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/AddEnterpriseSecurityGroupRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/AddEnterpriseSecurityGroupRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/AddNatAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/AddNatAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateAcRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateAcRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateNatFwInstanceRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateNatFwInstanceResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateNatFwInstanceWithDomainRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateNatFwInstanceWithDomainResponse.h>
#include <tencentcloud/cfw/v20190904/model/CreateSecurityGroupRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/CreateSecurityGroupRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAllAccessControlRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteAllAccessControlRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteResourceGroupRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteResourceGroupResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteSecurityGroupRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteSecurityGroupRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DeleteVpcInstanceRequest.h>
#include <tencentcloud/cfw/v20190904/model/DeleteVpcInstanceResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAcListsRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAcListsResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAssociatedInstanceListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeAssociatedInstanceListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeBlockByIpTimesListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeBlockByIpTimesListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeBlockIgnoreListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeBlockIgnoreListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeBlockStaticListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeBlockStaticListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeDefenseSwitchRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeDefenseSwitchResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeEnterpriseSecurityGroupRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeEnterpriseSecurityGroupRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeGuideScanInfoRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeGuideScanInfoResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeIPStatusListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeIPStatusListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInfoCountRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInfoCountResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInstanceRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInstanceResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInstanceWithRegionRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInstanceWithRegionResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInstancesInfoRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwInstancesInfoResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwVpcDnsLstRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeNatFwVpcDnsLstResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeResourceGroupNewRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeResourceGroupNewResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeRuleOverviewRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeRuleOverviewResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSecurityGroupListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSecurityGroupListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSourceAssetRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSourceAssetResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSwitchListsRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeSwitchListsResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTLogInfoRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTLogInfoResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTLogIpListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTLogIpListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTableStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeTableStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeUnHandleEventTabListRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeUnHandleEventTabListResponse.h>
#include <tencentcloud/cfw/v20190904/model/DescribeVpcAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/DescribeVpcAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/ExpandCfwVerticalRequest.h>
#include <tencentcloud/cfw/v20190904/model/ExpandCfwVerticalResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllPublicIPSwitchStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllPublicIPSwitchStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllRuleStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllRuleStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllVPCSwitchStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAllVPCSwitchStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAssetScanRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyAssetScanResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreListRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreListResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyBlockTopRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyBlockTopResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyEnterpriseSecurityDispatchStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyEnterpriseSecurityDispatchStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyEnterpriseSecurityGroupRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyEnterpriseSecurityGroupRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatFwReSelectRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatFwReSelectResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatFwSwitchRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatFwSwitchResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatFwVpcDnsSwitchRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatFwVpcDnsSwitchResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatSequenceRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyNatSequenceRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyPublicIPSwitchStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyPublicIPSwitchStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyResourceGroupRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyResourceGroupResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyRunSyncAssetRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyRunSyncAssetResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifySecurityGroupItemRuleStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifySecurityGroupItemRuleStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifySecurityGroupSequenceRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifySecurityGroupSequenceRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifySequenceRulesRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifySequenceRulesResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyStorageSettingRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyStorageSettingResponse.h>
#include <tencentcloud/cfw/v20190904/model/ModifyTableStatusRequest.h>
#include <tencentcloud/cfw/v20190904/model/ModifyTableStatusResponse.h>
#include <tencentcloud/cfw/v20190904/model/RemoveAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/RemoveAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/RemoveEnterpriseSecurityGroupRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/RemoveEnterpriseSecurityGroupRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/RemoveNatAcRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/RemoveNatAcRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/SetNatFwDnatRuleRequest.h>
#include <tencentcloud/cfw/v20190904/model/SetNatFwDnatRuleResponse.h>
#include <tencentcloud/cfw/v20190904/model/SetNatFwEipRequest.h>
#include <tencentcloud/cfw/v20190904/model/SetNatFwEipResponse.h>
#include <tencentcloud/cfw/v20190904/model/StopSecurityGroupRuleDispatchRequest.h>
#include <tencentcloud/cfw/v20190904/model/StopSecurityGroupRuleDispatchResponse.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            class CfwClient : public AbstractClient
            {
            public:
                CfwClient(const Credential &credential, const std::string &region);
                CfwClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddAcRuleResponse> AddAcRuleOutcome;
                typedef std::future<AddAcRuleOutcome> AddAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::AddAcRuleRequest&, AddAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddEnterpriseSecurityGroupRulesResponse> AddEnterpriseSecurityGroupRulesOutcome;
                typedef std::future<AddEnterpriseSecurityGroupRulesOutcome> AddEnterpriseSecurityGroupRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::AddEnterpriseSecurityGroupRulesRequest&, AddEnterpriseSecurityGroupRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddEnterpriseSecurityGroupRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddNatAcRuleResponse> AddNatAcRuleOutcome;
                typedef std::future<AddNatAcRuleOutcome> AddNatAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::AddNatAcRuleRequest&, AddNatAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddNatAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAcRulesResponse> CreateAcRulesOutcome;
                typedef std::future<CreateAcRulesOutcome> CreateAcRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateAcRulesRequest&, CreateAcRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAcRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNatFwInstanceResponse> CreateNatFwInstanceOutcome;
                typedef std::future<CreateNatFwInstanceOutcome> CreateNatFwInstanceOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateNatFwInstanceRequest&, CreateNatFwInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatFwInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNatFwInstanceWithDomainResponse> CreateNatFwInstanceWithDomainOutcome;
                typedef std::future<CreateNatFwInstanceWithDomainOutcome> CreateNatFwInstanceWithDomainOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateNatFwInstanceWithDomainRequest&, CreateNatFwInstanceWithDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatFwInstanceWithDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityGroupRulesResponse> CreateSecurityGroupRulesOutcome;
                typedef std::future<CreateSecurityGroupRulesOutcome> CreateSecurityGroupRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::CreateSecurityGroupRulesRequest&, CreateSecurityGroupRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAcRuleResponse> DeleteAcRuleOutcome;
                typedef std::future<DeleteAcRuleOutcome> DeleteAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteAcRuleRequest&, DeleteAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAllAccessControlRuleResponse> DeleteAllAccessControlRuleOutcome;
                typedef std::future<DeleteAllAccessControlRuleOutcome> DeleteAllAccessControlRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteAllAccessControlRuleRequest&, DeleteAllAccessControlRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllAccessControlRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourceGroupResponse> DeleteResourceGroupOutcome;
                typedef std::future<DeleteResourceGroupOutcome> DeleteResourceGroupOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteResourceGroupRequest&, DeleteResourceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityGroupRuleResponse> DeleteSecurityGroupRuleOutcome;
                typedef std::future<DeleteSecurityGroupRuleOutcome> DeleteSecurityGroupRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteSecurityGroupRuleRequest&, DeleteSecurityGroupRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcInstanceResponse> DeleteVpcInstanceOutcome;
                typedef std::future<DeleteVpcInstanceOutcome> DeleteVpcInstanceOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DeleteVpcInstanceRequest&, DeleteVpcInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAcListsResponse> DescribeAcListsOutcome;
                typedef std::future<DescribeAcListsOutcome> DescribeAcListsOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeAcListsRequest&, DescribeAcListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAcListsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssociatedInstanceListResponse> DescribeAssociatedInstanceListOutcome;
                typedef std::future<DescribeAssociatedInstanceListOutcome> DescribeAssociatedInstanceListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeAssociatedInstanceListRequest&, DescribeAssociatedInstanceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssociatedInstanceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlockByIpTimesListResponse> DescribeBlockByIpTimesListOutcome;
                typedef std::future<DescribeBlockByIpTimesListOutcome> DescribeBlockByIpTimesListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeBlockByIpTimesListRequest&, DescribeBlockByIpTimesListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockByIpTimesListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlockIgnoreListResponse> DescribeBlockIgnoreListOutcome;
                typedef std::future<DescribeBlockIgnoreListOutcome> DescribeBlockIgnoreListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeBlockIgnoreListRequest&, DescribeBlockIgnoreListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockIgnoreListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlockStaticListResponse> DescribeBlockStaticListOutcome;
                typedef std::future<DescribeBlockStaticListOutcome> DescribeBlockStaticListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeBlockStaticListRequest&, DescribeBlockStaticListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockStaticListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefenseSwitchResponse> DescribeDefenseSwitchOutcome;
                typedef std::future<DescribeDefenseSwitchOutcome> DescribeDefenseSwitchOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeDefenseSwitchRequest&, DescribeDefenseSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefenseSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnterpriseSecurityGroupRuleResponse> DescribeEnterpriseSecurityGroupRuleOutcome;
                typedef std::future<DescribeEnterpriseSecurityGroupRuleOutcome> DescribeEnterpriseSecurityGroupRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeEnterpriseSecurityGroupRuleRequest&, DescribeEnterpriseSecurityGroupRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnterpriseSecurityGroupRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGuideScanInfoResponse> DescribeGuideScanInfoOutcome;
                typedef std::future<DescribeGuideScanInfoOutcome> DescribeGuideScanInfoOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeGuideScanInfoRequest&, DescribeGuideScanInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGuideScanInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIPStatusListResponse> DescribeIPStatusListOutcome;
                typedef std::future<DescribeIPStatusListOutcome> DescribeIPStatusListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeIPStatusListRequest&, DescribeIPStatusListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPStatusListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatAcRuleResponse> DescribeNatAcRuleOutcome;
                typedef std::future<DescribeNatAcRuleOutcome> DescribeNatAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatAcRuleRequest&, DescribeNatAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatFwInfoCountResponse> DescribeNatFwInfoCountOutcome;
                typedef std::future<DescribeNatFwInfoCountOutcome> DescribeNatFwInfoCountOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatFwInfoCountRequest&, DescribeNatFwInfoCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatFwInfoCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatFwInstanceResponse> DescribeNatFwInstanceOutcome;
                typedef std::future<DescribeNatFwInstanceOutcome> DescribeNatFwInstanceOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatFwInstanceRequest&, DescribeNatFwInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatFwInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatFwInstanceWithRegionResponse> DescribeNatFwInstanceWithRegionOutcome;
                typedef std::future<DescribeNatFwInstanceWithRegionOutcome> DescribeNatFwInstanceWithRegionOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatFwInstanceWithRegionRequest&, DescribeNatFwInstanceWithRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatFwInstanceWithRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatFwInstancesInfoResponse> DescribeNatFwInstancesInfoOutcome;
                typedef std::future<DescribeNatFwInstancesInfoOutcome> DescribeNatFwInstancesInfoOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatFwInstancesInfoRequest&, DescribeNatFwInstancesInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatFwInstancesInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatFwVpcDnsLstResponse> DescribeNatFwVpcDnsLstOutcome;
                typedef std::future<DescribeNatFwVpcDnsLstOutcome> DescribeNatFwVpcDnsLstOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeNatFwVpcDnsLstRequest&, DescribeNatFwVpcDnsLstOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatFwVpcDnsLstAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceGroupNewResponse> DescribeResourceGroupNewOutcome;
                typedef std::future<DescribeResourceGroupNewOutcome> DescribeResourceGroupNewOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeResourceGroupNewRequest&, DescribeResourceGroupNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceGroupNewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleOverviewResponse> DescribeRuleOverviewOutcome;
                typedef std::future<DescribeRuleOverviewOutcome> DescribeRuleOverviewOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeRuleOverviewRequest&, DescribeRuleOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupListResponse> DescribeSecurityGroupListOutcome;
                typedef std::future<DescribeSecurityGroupListOutcome> DescribeSecurityGroupListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeSecurityGroupListRequest&, DescribeSecurityGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSourceAssetResponse> DescribeSourceAssetOutcome;
                typedef std::future<DescribeSourceAssetOutcome> DescribeSourceAssetOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeSourceAssetRequest&, DescribeSourceAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSourceAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSwitchListsResponse> DescribeSwitchListsOutcome;
                typedef std::future<DescribeSwitchListsOutcome> DescribeSwitchListsOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeSwitchListsRequest&, DescribeSwitchListsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSwitchListsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTLogInfoResponse> DescribeTLogInfoOutcome;
                typedef std::future<DescribeTLogInfoOutcome> DescribeTLogInfoOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeTLogInfoRequest&, DescribeTLogInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTLogInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTLogIpListResponse> DescribeTLogIpListOutcome;
                typedef std::future<DescribeTLogIpListOutcome> DescribeTLogIpListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeTLogIpListRequest&, DescribeTLogIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTLogIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTableStatusResponse> DescribeTableStatusOutcome;
                typedef std::future<DescribeTableStatusOutcome> DescribeTableStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeTableStatusRequest&, DescribeTableStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTableStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnHandleEventTabListResponse> DescribeUnHandleEventTabListOutcome;
                typedef std::future<DescribeUnHandleEventTabListOutcome> DescribeUnHandleEventTabListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeUnHandleEventTabListRequest&, DescribeUnHandleEventTabListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnHandleEventTabListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcAcRuleResponse> DescribeVpcAcRuleOutcome;
                typedef std::future<DescribeVpcAcRuleOutcome> DescribeVpcAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::DescribeVpcAcRuleRequest&, DescribeVpcAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ExpandCfwVerticalResponse> ExpandCfwVerticalOutcome;
                typedef std::future<ExpandCfwVerticalOutcome> ExpandCfwVerticalOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ExpandCfwVerticalRequest&, ExpandCfwVerticalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExpandCfwVerticalAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAcRuleResponse> ModifyAcRuleOutcome;
                typedef std::future<ModifyAcRuleOutcome> ModifyAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAcRuleRequest&, ModifyAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAllPublicIPSwitchStatusResponse> ModifyAllPublicIPSwitchStatusOutcome;
                typedef std::future<ModifyAllPublicIPSwitchStatusOutcome> ModifyAllPublicIPSwitchStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAllPublicIPSwitchStatusRequest&, ModifyAllPublicIPSwitchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAllPublicIPSwitchStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAllRuleStatusResponse> ModifyAllRuleStatusOutcome;
                typedef std::future<ModifyAllRuleStatusOutcome> ModifyAllRuleStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAllRuleStatusRequest&, ModifyAllRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAllRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAllVPCSwitchStatusResponse> ModifyAllVPCSwitchStatusOutcome;
                typedef std::future<ModifyAllVPCSwitchStatusOutcome> ModifyAllVPCSwitchStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAllVPCSwitchStatusRequest&, ModifyAllVPCSwitchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAllVPCSwitchStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssetScanResponse> ModifyAssetScanOutcome;
                typedef std::future<ModifyAssetScanOutcome> ModifyAssetScanOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyAssetScanRequest&, ModifyAssetScanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssetScanAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBlockIgnoreListResponse> ModifyBlockIgnoreListOutcome;
                typedef std::future<ModifyBlockIgnoreListOutcome> ModifyBlockIgnoreListOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyBlockIgnoreListRequest&, ModifyBlockIgnoreListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlockIgnoreListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBlockTopResponse> ModifyBlockTopOutcome;
                typedef std::future<ModifyBlockTopOutcome> ModifyBlockTopOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyBlockTopRequest&, ModifyBlockTopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlockTopAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEnterpriseSecurityDispatchStatusResponse> ModifyEnterpriseSecurityDispatchStatusOutcome;
                typedef std::future<ModifyEnterpriseSecurityDispatchStatusOutcome> ModifyEnterpriseSecurityDispatchStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyEnterpriseSecurityDispatchStatusRequest&, ModifyEnterpriseSecurityDispatchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnterpriseSecurityDispatchStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyEnterpriseSecurityGroupRuleResponse> ModifyEnterpriseSecurityGroupRuleOutcome;
                typedef std::future<ModifyEnterpriseSecurityGroupRuleOutcome> ModifyEnterpriseSecurityGroupRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyEnterpriseSecurityGroupRuleRequest&, ModifyEnterpriseSecurityGroupRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyEnterpriseSecurityGroupRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatAcRuleResponse> ModifyNatAcRuleOutcome;
                typedef std::future<ModifyNatAcRuleOutcome> ModifyNatAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyNatAcRuleRequest&, ModifyNatAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatFwReSelectResponse> ModifyNatFwReSelectOutcome;
                typedef std::future<ModifyNatFwReSelectOutcome> ModifyNatFwReSelectOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyNatFwReSelectRequest&, ModifyNatFwReSelectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatFwReSelectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatFwSwitchResponse> ModifyNatFwSwitchOutcome;
                typedef std::future<ModifyNatFwSwitchOutcome> ModifyNatFwSwitchOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyNatFwSwitchRequest&, ModifyNatFwSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatFwSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatFwVpcDnsSwitchResponse> ModifyNatFwVpcDnsSwitchOutcome;
                typedef std::future<ModifyNatFwVpcDnsSwitchOutcome> ModifyNatFwVpcDnsSwitchOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyNatFwVpcDnsSwitchRequest&, ModifyNatFwVpcDnsSwitchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatFwVpcDnsSwitchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatSequenceRulesResponse> ModifyNatSequenceRulesOutcome;
                typedef std::future<ModifyNatSequenceRulesOutcome> ModifyNatSequenceRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyNatSequenceRulesRequest&, ModifyNatSequenceRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatSequenceRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPublicIPSwitchStatusResponse> ModifyPublicIPSwitchStatusOutcome;
                typedef std::future<ModifyPublicIPSwitchStatusOutcome> ModifyPublicIPSwitchStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyPublicIPSwitchStatusRequest&, ModifyPublicIPSwitchStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPublicIPSwitchStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourceGroupResponse> ModifyResourceGroupOutcome;
                typedef std::future<ModifyResourceGroupOutcome> ModifyResourceGroupOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyResourceGroupRequest&, ModifyResourceGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRunSyncAssetResponse> ModifyRunSyncAssetOutcome;
                typedef std::future<ModifyRunSyncAssetOutcome> ModifyRunSyncAssetOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyRunSyncAssetRequest&, ModifyRunSyncAssetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRunSyncAssetAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityGroupItemRuleStatusResponse> ModifySecurityGroupItemRuleStatusOutcome;
                typedef std::future<ModifySecurityGroupItemRuleStatusOutcome> ModifySecurityGroupItemRuleStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifySecurityGroupItemRuleStatusRequest&, ModifySecurityGroupItemRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupItemRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityGroupSequenceRulesResponse> ModifySecurityGroupSequenceRulesOutcome;
                typedef std::future<ModifySecurityGroupSequenceRulesOutcome> ModifySecurityGroupSequenceRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifySecurityGroupSequenceRulesRequest&, ModifySecurityGroupSequenceRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupSequenceRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySequenceRulesResponse> ModifySequenceRulesOutcome;
                typedef std::future<ModifySequenceRulesOutcome> ModifySequenceRulesOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifySequenceRulesRequest&, ModifySequenceRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySequenceRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStorageSettingResponse> ModifyStorageSettingOutcome;
                typedef std::future<ModifyStorageSettingOutcome> ModifyStorageSettingOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyStorageSettingRequest&, ModifyStorageSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStorageSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTableStatusResponse> ModifyTableStatusOutcome;
                typedef std::future<ModifyTableStatusOutcome> ModifyTableStatusOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::ModifyTableStatusRequest&, ModifyTableStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTableStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveAcRuleResponse> RemoveAcRuleOutcome;
                typedef std::future<RemoveAcRuleOutcome> RemoveAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::RemoveAcRuleRequest&, RemoveAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveEnterpriseSecurityGroupRuleResponse> RemoveEnterpriseSecurityGroupRuleOutcome;
                typedef std::future<RemoveEnterpriseSecurityGroupRuleOutcome> RemoveEnterpriseSecurityGroupRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::RemoveEnterpriseSecurityGroupRuleRequest&, RemoveEnterpriseSecurityGroupRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveEnterpriseSecurityGroupRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveNatAcRuleResponse> RemoveNatAcRuleOutcome;
                typedef std::future<RemoveNatAcRuleOutcome> RemoveNatAcRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::RemoveNatAcRuleRequest&, RemoveNatAcRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveNatAcRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::SetNatFwDnatRuleResponse> SetNatFwDnatRuleOutcome;
                typedef std::future<SetNatFwDnatRuleOutcome> SetNatFwDnatRuleOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::SetNatFwDnatRuleRequest&, SetNatFwDnatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetNatFwDnatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::SetNatFwEipResponse> SetNatFwEipOutcome;
                typedef std::future<SetNatFwEipOutcome> SetNatFwEipOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::SetNatFwEipRequest&, SetNatFwEipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetNatFwEipAsyncHandler;
                typedef Outcome<Core::Error, Model::StopSecurityGroupRuleDispatchResponse> StopSecurityGroupRuleDispatchOutcome;
                typedef std::future<StopSecurityGroupRuleDispatchOutcome> StopSecurityGroupRuleDispatchOutcomeCallable;
                typedef std::function<void(const CfwClient*, const Model::StopSecurityGroupRuleDispatchRequest&, StopSecurityGroupRuleDispatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopSecurityGroupRuleDispatchAsyncHandler;



                /**
                 *This API is used to add edge firewall rules.
                 * @param req AddAcRuleRequest
                 * @return AddAcRuleOutcome
                 */
                AddAcRuleOutcome AddAcRule(const Model::AddAcRuleRequest &request);
                void AddAcRuleAsync(const Model::AddAcRuleRequest& request, const AddAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAcRuleOutcomeCallable AddAcRuleCallable(const Model::AddAcRuleRequest& request);

                /**
                 *This API is used to create enterprise security group rules (new).
                 * @param req AddEnterpriseSecurityGroupRulesRequest
                 * @return AddEnterpriseSecurityGroupRulesOutcome
                 */
                AddEnterpriseSecurityGroupRulesOutcome AddEnterpriseSecurityGroupRules(const Model::AddEnterpriseSecurityGroupRulesRequest &request);
                void AddEnterpriseSecurityGroupRulesAsync(const Model::AddEnterpriseSecurityGroupRulesRequest& request, const AddEnterpriseSecurityGroupRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddEnterpriseSecurityGroupRulesOutcomeCallable AddEnterpriseSecurityGroupRulesCallable(const Model::AddEnterpriseSecurityGroupRulesRequest& request);

                /**
                 *This API is used to add NAT access control rules.
                 * @param req AddNatAcRuleRequest
                 * @return AddNatAcRuleOutcome
                 */
                AddNatAcRuleOutcome AddNatAcRule(const Model::AddNatAcRuleRequest &request);
                void AddNatAcRuleAsync(const Model::AddNatAcRuleRequest& request, const AddNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddNatAcRuleOutcomeCallable AddNatAcRuleCallable(const Model::AddNatAcRuleRequest& request);

                /**
                 *This API is used to create access control rules.
                 * @param req CreateAcRulesRequest
                 * @return CreateAcRulesOutcome
                 */
                CreateAcRulesOutcome CreateAcRules(const Model::CreateAcRulesRequest &request);
                void CreateAcRulesAsync(const Model::CreateAcRulesRequest& request, const CreateAcRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAcRulesOutcomeCallable CreateAcRulesCallable(const Model::CreateAcRulesRequest& request);

                /**
                 *This API is used to create a NAT firewall instance (The Region parameter is required).
                 * @param req CreateNatFwInstanceRequest
                 * @return CreateNatFwInstanceOutcome
                 */
                CreateNatFwInstanceOutcome CreateNatFwInstance(const Model::CreateNatFwInstanceRequest &request);
                void CreateNatFwInstanceAsync(const Model::CreateNatFwInstanceRequest& request, const CreateNatFwInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatFwInstanceOutcomeCallable CreateNatFwInstanceCallable(const Model::CreateNatFwInstanceRequest& request);

                /**
                 *This API is used to create a firewall instance with domain name (The Region parameter is required).
                 * @param req CreateNatFwInstanceWithDomainRequest
                 * @return CreateNatFwInstanceWithDomainOutcome
                 */
                CreateNatFwInstanceWithDomainOutcome CreateNatFwInstanceWithDomain(const Model::CreateNatFwInstanceWithDomainRequest &request);
                void CreateNatFwInstanceWithDomainAsync(const Model::CreateNatFwInstanceWithDomainRequest& request, const CreateNatFwInstanceWithDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatFwInstanceWithDomainOutcomeCallable CreateNatFwInstanceWithDomainCallable(const Model::CreateNatFwInstanceWithDomainRequest& request);

                /**
                 *This API is used to create enterprise security group rules.
                 * @param req CreateSecurityGroupRulesRequest
                 * @return CreateSecurityGroupRulesOutcome
                 */
                CreateSecurityGroupRulesOutcome CreateSecurityGroupRules(const Model::CreateSecurityGroupRulesRequest &request);
                void CreateSecurityGroupRulesAsync(const Model::CreateSecurityGroupRulesRequest& request, const CreateSecurityGroupRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupRulesOutcomeCallable CreateSecurityGroupRulesCallable(const Model::CreateSecurityGroupRulesRequest& request);

                /**
                 *This API is used to delete a rule.
                 * @param req DeleteAcRuleRequest
                 * @return DeleteAcRuleOutcome
                 */
                DeleteAcRuleOutcome DeleteAcRule(const Model::DeleteAcRuleRequest &request);
                void DeleteAcRuleAsync(const Model::DeleteAcRuleRequest& request, const DeleteAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAcRuleOutcomeCallable DeleteAcRuleCallable(const Model::DeleteAcRuleRequest& request);

                /**
                 *This API is used to delete all rules.
                 * @param req DeleteAllAccessControlRuleRequest
                 * @return DeleteAllAccessControlRuleOutcome
                 */
                DeleteAllAccessControlRuleOutcome DeleteAllAccessControlRule(const Model::DeleteAllAccessControlRuleRequest &request);
                void DeleteAllAccessControlRuleAsync(const Model::DeleteAllAccessControlRuleRequest& request, const DeleteAllAccessControlRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAllAccessControlRuleOutcomeCallable DeleteAllAccessControlRuleCallable(const Model::DeleteAllAccessControlRuleRequest& request);

                /**
                 *This API is used to delete asset groups in Asset Management.
                 * @param req DeleteResourceGroupRequest
                 * @return DeleteResourceGroupOutcome
                 */
                DeleteResourceGroupOutcome DeleteResourceGroup(const Model::DeleteResourceGroupRequest &request);
                void DeleteResourceGroupAsync(const Model::DeleteResourceGroupRequest& request, const DeleteResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourceGroupOutcomeCallable DeleteResourceGroupCallable(const Model::DeleteResourceGroupRequest& request);

                /**
                 *This API is used to delete security group rules.
                 * @param req DeleteSecurityGroupRuleRequest
                 * @return DeleteSecurityGroupRuleOutcome
                 */
                DeleteSecurityGroupRuleOutcome DeleteSecurityGroupRule(const Model::DeleteSecurityGroupRuleRequest &request);
                void DeleteSecurityGroupRuleAsync(const Model::DeleteSecurityGroupRuleRequest& request, const DeleteSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupRuleOutcomeCallable DeleteSecurityGroupRuleCallable(const Model::DeleteSecurityGroupRuleRequest& request);

                /**
                 *This API is used to delete firewall instance.
                 * @param req DeleteVpcInstanceRequest
                 * @return DeleteVpcInstanceOutcome
                 */
                DeleteVpcInstanceOutcome DeleteVpcInstance(const Model::DeleteVpcInstanceRequest &request);
                void DeleteVpcInstanceAsync(const Model::DeleteVpcInstanceRequest& request, const DeleteVpcInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcInstanceOutcomeCallable DeleteVpcInstanceCallable(const Model::DeleteVpcInstanceRequest& request);

                /**
                 *This API is used to get the access control list.
                 * @param req DescribeAcListsRequest
                 * @return DescribeAcListsOutcome
                 */
                DescribeAcListsOutcome DescribeAcLists(const Model::DescribeAcListsRequest &request);
                void DescribeAcListsAsync(const Model::DescribeAcListsRequest& request, const DescribeAcListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAcListsOutcomeCallable DescribeAcListsCallable(const Model::DescribeAcListsRequest& request);

                /**
                 *This API is used to get the list of instances associated with a security group.
                 * @param req DescribeAssociatedInstanceListRequest
                 * @return DescribeAssociatedInstanceListOutcome
                 */
                DescribeAssociatedInstanceListOutcome DescribeAssociatedInstanceList(const Model::DescribeAssociatedInstanceListRequest &request);
                void DescribeAssociatedInstanceListAsync(const Model::DescribeAssociatedInstanceListRequest& request, const DescribeAssociatedInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssociatedInstanceListOutcomeCallable DescribeAssociatedInstanceListCallable(const Model::DescribeAssociatedInstanceListRequest& request);

                /**
                 *This API is used to get blocked IP data.
                 * @param req DescribeBlockByIpTimesListRequest
                 * @return DescribeBlockByIpTimesListOutcome
                 */
                DescribeBlockByIpTimesListOutcome DescribeBlockByIpTimesList(const Model::DescribeBlockByIpTimesListRequest &request);
                void DescribeBlockByIpTimesListAsync(const Model::DescribeBlockByIpTimesListRequest& request, const DescribeBlockByIpTimesListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlockByIpTimesListOutcomeCallable DescribeBlockByIpTimesListCallable(const Model::DescribeBlockByIpTimesListRequest& request);

                /**
                 *This API is used to get allowlists or blocklists for intrusion prevention.
                 * @param req DescribeBlockIgnoreListRequest
                 * @return DescribeBlockIgnoreListOutcome
                 */
                DescribeBlockIgnoreListOutcome DescribeBlockIgnoreList(const Model::DescribeBlockIgnoreListRequest &request);
                void DescribeBlockIgnoreListAsync(const Model::DescribeBlockIgnoreListRequest& request, const DescribeBlockIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlockIgnoreListOutcomeCallable DescribeBlockIgnoreListCallable(const Model::DescribeBlockIgnoreListRequest& request);

                /**
                 *This API is used to get the most frequent attacker.

                 * @param req DescribeBlockStaticListRequest
                 * @return DescribeBlockStaticListOutcome
                 */
                DescribeBlockStaticListOutcome DescribeBlockStaticList(const Model::DescribeBlockStaticListRequest &request);
                void DescribeBlockStaticListAsync(const Model::DescribeBlockStaticListRequest& request, const DescribeBlockStaticListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlockStaticListOutcomeCallable DescribeBlockStaticListCallable(const Model::DescribeBlockStaticListRequest& request);

                /**
                 *This API is used to query the list of firewall toggles with Intrusion Defense enabled.
                 * @param req DescribeDefenseSwitchRequest
                 * @return DescribeDefenseSwitchOutcome
                 */
                DescribeDefenseSwitchOutcome DescribeDefenseSwitch(const Model::DescribeDefenseSwitchRequest &request);
                void DescribeDefenseSwitchAsync(const Model::DescribeDefenseSwitchRequest& request, const DescribeDefenseSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefenseSwitchOutcomeCallable DescribeDefenseSwitchCallable(const Model::DescribeDefenseSwitchRequest& request);

                /**
                 *This API is used to get enterprise security group rules (new).
                 * @param req DescribeEnterpriseSecurityGroupRuleRequest
                 * @return DescribeEnterpriseSecurityGroupRuleOutcome
                 */
                DescribeEnterpriseSecurityGroupRuleOutcome DescribeEnterpriseSecurityGroupRule(const Model::DescribeEnterpriseSecurityGroupRuleRequest &request);
                void DescribeEnterpriseSecurityGroupRuleAsync(const Model::DescribeEnterpriseSecurityGroupRuleRequest& request, const DescribeEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnterpriseSecurityGroupRuleOutcomeCallable DescribeEnterpriseSecurityGroupRuleCallable(const Model::DescribeEnterpriseSecurityGroupRuleRequest& request);

                /**
                 *This API is used to get the scan interface information in Get Started.
                 * @param req DescribeGuideScanInfoRequest
                 * @return DescribeGuideScanInfoOutcome
                 */
                DescribeGuideScanInfoOutcome DescribeGuideScanInfo(const Model::DescribeGuideScanInfoRequest &request);
                void DescribeGuideScanInfoAsync(const Model::DescribeGuideScanInfoRequest& request, const DescribeGuideScanInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGuideScanInfoOutcomeCallable DescribeGuideScanInfoCallable(const Model::DescribeGuideScanInfoRequest& request);

                /**
                 *This API is used to get the IP protection status.
                 * @param req DescribeIPStatusListRequest
                 * @return DescribeIPStatusListOutcome
                 */
                DescribeIPStatusListOutcome DescribeIPStatusList(const Model::DescribeIPStatusListRequest &request);
                void DescribeIPStatusListAsync(const Model::DescribeIPStatusListRequest& request, const DescribeIPStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPStatusListOutcomeCallable DescribeIPStatusListCallable(const Model::DescribeIPStatusListRequest& request);

                /**
                 *This API is used to get the NAT access control list.
                 * @param req DescribeNatAcRuleRequest
                 * @return DescribeNatAcRuleOutcome
                 */
                DescribeNatAcRuleOutcome DescribeNatAcRule(const Model::DescribeNatAcRuleRequest &request);
                void DescribeNatAcRuleAsync(const Model::DescribeNatAcRuleRequest& request, const DescribeNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatAcRuleOutcomeCallable DescribeNatAcRuleCallable(const Model::DescribeNatAcRuleRequest& request);

                /**
                 *This API is used to get the number of a user's subnets connected to NAT firewall and the number of NAT firewall instances.
                 * @param req DescribeNatFwInfoCountRequest
                 * @return DescribeNatFwInfoCountOutcome
                 */
                DescribeNatFwInfoCountOutcome DescribeNatFwInfoCount(const Model::DescribeNatFwInfoCountRequest &request);
                void DescribeNatFwInfoCountAsync(const Model::DescribeNatFwInfoCountRequest& request, const DescribeNatFwInfoCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatFwInfoCountOutcomeCallable DescribeNatFwInfoCountCallable(const Model::DescribeNatFwInfoCountRequest& request);

                /**
                 *This API is used to get all NAT instances of a tenant.
                 * @param req DescribeNatFwInstanceRequest
                 * @return DescribeNatFwInstanceOutcome
                 */
                DescribeNatFwInstanceOutcome DescribeNatFwInstance(const Model::DescribeNatFwInstanceRequest &request);
                void DescribeNatFwInstanceAsync(const Model::DescribeNatFwInstanceRequest& request, const DescribeNatFwInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatFwInstanceOutcomeCallable DescribeNatFwInstanceCallable(const Model::DescribeNatFwInstanceRequest& request);

                /**
                 *This API is used to get the NAT instance with the region that is newly maintained by the tenant.
                 * @param req DescribeNatFwInstanceWithRegionRequest
                 * @return DescribeNatFwInstanceWithRegionOutcome
                 */
                DescribeNatFwInstanceWithRegionOutcome DescribeNatFwInstanceWithRegion(const Model::DescribeNatFwInstanceWithRegionRequest &request);
                void DescribeNatFwInstanceWithRegionAsync(const Model::DescribeNatFwInstanceWithRegionRequest& request, const DescribeNatFwInstanceWithRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatFwInstanceWithRegionOutcomeCallable DescribeNatFwInstanceWithRegionCallable(const Model::DescribeNatFwInstanceWithRegionRequest& request);

                /**
                 *This API is used to get all NAT instances and instance card information of a tenant.
                 * @param req DescribeNatFwInstancesInfoRequest
                 * @return DescribeNatFwInstancesInfoOutcome
                 */
                DescribeNatFwInstancesInfoOutcome DescribeNatFwInstancesInfo(const Model::DescribeNatFwInstancesInfoRequest &request);
                void DescribeNatFwInstancesInfoAsync(const Model::DescribeNatFwInstancesInfoRequest& request, const DescribeNatFwInstancesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatFwInstancesInfoOutcomeCallable DescribeNatFwInstancesInfoCallable(const Model::DescribeNatFwInstancesInfoRequest& request);

                /**
                 *This API is used to get the VPC DNS status of NAT firewall instances.
                 * @param req DescribeNatFwVpcDnsLstRequest
                 * @return DescribeNatFwVpcDnsLstOutcome
                 */
                DescribeNatFwVpcDnsLstOutcome DescribeNatFwVpcDnsLst(const Model::DescribeNatFwVpcDnsLstRequest &request);
                void DescribeNatFwVpcDnsLstAsync(const Model::DescribeNatFwVpcDnsLstRequest& request, const DescribeNatFwVpcDnsLstAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatFwVpcDnsLstOutcomeCallable DescribeNatFwVpcDnsLstCallable(const Model::DescribeNatFwVpcDnsLstRequest& request);

                /**
                 *This API is used to get the asset tree information in Asset Management.
                 * @param req DescribeResourceGroupNewRequest
                 * @return DescribeResourceGroupNewOutcome
                 */
                DescribeResourceGroupNewOutcome DescribeResourceGroupNew(const Model::DescribeResourceGroupNewRequest &request);
                void DescribeResourceGroupNewAsync(const Model::DescribeResourceGroupNewRequest& request, const DescribeResourceGroupNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceGroupNewOutcomeCallable DescribeResourceGroupNewCallable(const Model::DescribeResourceGroupNewRequest& request);

                /**
                 *This API is used to get the rule list overview.
                 * @param req DescribeRuleOverviewRequest
                 * @return DescribeRuleOverviewOutcome
                 */
                DescribeRuleOverviewOutcome DescribeRuleOverview(const Model::DescribeRuleOverviewRequest &request);
                void DescribeRuleOverviewAsync(const Model::DescribeRuleOverviewRequest& request, const DescribeRuleOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleOverviewOutcomeCallable DescribeRuleOverviewCallable(const Model::DescribeRuleOverviewRequest& request);

                /**
                 *This API is used to get the security group rule list.
                 * @param req DescribeSecurityGroupListRequest
                 * @return DescribeSecurityGroupListOutcome
                 */
                DescribeSecurityGroupListOutcome DescribeSecurityGroupList(const Model::DescribeSecurityGroupListRequest &request);
                void DescribeSecurityGroupListAsync(const Model::DescribeSecurityGroupListRequest& request, const DescribeSecurityGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupListOutcomeCallable DescribeSecurityGroupListCallable(const Model::DescribeSecurityGroupListRequest& request);

                /**
                 *This API is used to get all asset information of an asset group.

                 * @param req DescribeSourceAssetRequest
                 * @return DescribeSourceAssetOutcome
                 */
                DescribeSourceAssetOutcome DescribeSourceAsset(const Model::DescribeSourceAssetRequest &request);
                void DescribeSourceAssetAsync(const Model::DescribeSourceAssetRequest& request, const DescribeSourceAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSourceAssetOutcomeCallable DescribeSourceAssetCallable(const Model::DescribeSourceAssetRequest& request);

                /**
                 *This API is used to get the firewall status list.
                 * @param req DescribeSwitchListsRequest
                 * @return DescribeSwitchListsOutcome
                 */
                DescribeSwitchListsOutcome DescribeSwitchLists(const Model::DescribeSwitchListsRequest &request);
                void DescribeSwitchListsAsync(const Model::DescribeSwitchListsRequest& request, const DescribeSwitchListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSwitchListsOutcomeCallable DescribeSwitchListsCallable(const Model::DescribeSwitchListsRequest& request);

                /**
                 *This API is used to get the current alert monitoring data.

                 * @param req DescribeTLogInfoRequest
                 * @return DescribeTLogInfoOutcome
                 */
                DescribeTLogInfoOutcome DescribeTLogInfo(const Model::DescribeTLogInfoRequest &request);
                void DescribeTLogInfoAsync(const Model::DescribeTLogInfoRequest& request, const DescribeTLogInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTLogInfoOutcomeCallable DescribeTLogInfoCallable(const Model::DescribeTLogInfoRequest& request);

                /**
                 *This API is used to get the most frequent attacker IP.

                 * @param req DescribeTLogIpListRequest
                 * @return DescribeTLogIpListOutcome
                 */
                DescribeTLogIpListOutcome DescribeTLogIpList(const Model::DescribeTLogIpListRequest &request);
                void DescribeTLogIpListAsync(const Model::DescribeTLogIpListRequest& request, const DescribeTLogIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTLogIpListOutcomeCallable DescribeTLogIpListCallable(const Model::DescribeTLogIpListRequest& request);

                /**
                 *This API is used to get the rule list status.
                 * @param req DescribeTableStatusRequest
                 * @return DescribeTableStatusOutcome
                 */
                DescribeTableStatusOutcome DescribeTableStatus(const Model::DescribeTableStatusRequest &request);
                void DescribeTableStatusAsync(const Model::DescribeTableStatusRequest& request, const DescribeTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTableStatusOutcomeCallable DescribeTableStatusCallable(const Model::DescribeTableStatusRequest& request);

                /**
                 *This API is used to get unhandled security events.

                 * @param req DescribeUnHandleEventTabListRequest
                 * @return DescribeUnHandleEventTabListOutcome
                 */
                DescribeUnHandleEventTabListOutcome DescribeUnHandleEventTabList(const Model::DescribeUnHandleEventTabListRequest &request);
                void DescribeUnHandleEventTabListAsync(const Model::DescribeUnHandleEventTabListRequest& request, const DescribeUnHandleEventTabListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnHandleEventTabListOutcomeCallable DescribeUnHandleEventTabListCallable(const Model::DescribeUnHandleEventTabListRequest& request);

                /**
                 *Query Inter-VPC rules
                 * @param req DescribeVpcAcRuleRequest
                 * @return DescribeVpcAcRuleOutcome
                 */
                DescribeVpcAcRuleOutcome DescribeVpcAcRule(const Model::DescribeVpcAcRuleRequest &request);
                void DescribeVpcAcRuleAsync(const Model::DescribeVpcAcRuleRequest& request, const DescribeVpcAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcAcRuleOutcomeCallable DescribeVpcAcRuleCallable(const Model::DescribeVpcAcRuleRequest& request);

                /**
                 *This API is used to increase the firewall bandwidth.
                 * @param req ExpandCfwVerticalRequest
                 * @return ExpandCfwVerticalOutcome
                 */
                ExpandCfwVerticalOutcome ExpandCfwVertical(const Model::ExpandCfwVerticalRequest &request);
                void ExpandCfwVerticalAsync(const Model::ExpandCfwVerticalRequest& request, const ExpandCfwVerticalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExpandCfwVerticalOutcomeCallable ExpandCfwVerticalCallable(const Model::ExpandCfwVerticalRequest& request);

                /**
                 *This API is used to modify rules.
                 * @param req ModifyAcRuleRequest
                 * @return ModifyAcRuleOutcome
                 */
                ModifyAcRuleOutcome ModifyAcRule(const Model::ModifyAcRuleRequest &request);
                void ModifyAcRuleAsync(const Model::ModifyAcRuleRequest& request, const ModifyAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAcRuleOutcomeCallable ModifyAcRuleCallable(const Model::ModifyAcRuleRequest& request);

                /**
                 *This API is used to enable or disable one or multiple edge firewalls.
                 * @param req ModifyAllPublicIPSwitchStatusRequest
                 * @return ModifyAllPublicIPSwitchStatusOutcome
                 */
                ModifyAllPublicIPSwitchStatusOutcome ModifyAllPublicIPSwitchStatus(const Model::ModifyAllPublicIPSwitchStatusRequest &request);
                void ModifyAllPublicIPSwitchStatusAsync(const Model::ModifyAllPublicIPSwitchStatusRequest& request, const ModifyAllPublicIPSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAllPublicIPSwitchStatusOutcomeCallable ModifyAllPublicIPSwitchStatusCallable(const Model::ModifyAllPublicIPSwitchStatusRequest& request);

                /**
                 *This API is used to enable or disable all rules.
                 * @param req ModifyAllRuleStatusRequest
                 * @return ModifyAllRuleStatusOutcome
                 */
                ModifyAllRuleStatusOutcome ModifyAllRuleStatus(const Model::ModifyAllRuleStatusRequest &request);
                void ModifyAllRuleStatusAsync(const Model::ModifyAllRuleStatusRequest& request, const ModifyAllRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAllRuleStatusOutcomeCallable ModifyAllRuleStatusCallable(const Model::ModifyAllRuleStatusRequest& request);

                /**
                 *This API is used to enable or disable one or multiple VPC firewalls.
                 * @param req ModifyAllVPCSwitchStatusRequest
                 * @return ModifyAllVPCSwitchStatusOutcome
                 */
                ModifyAllVPCSwitchStatusOutcome ModifyAllVPCSwitchStatus(const Model::ModifyAllVPCSwitchStatusRequest &request);
                void ModifyAllVPCSwitchStatusAsync(const Model::ModifyAllVPCSwitchStatusRequest& request, const ModifyAllVPCSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAllVPCSwitchStatusOutcomeCallable ModifyAllVPCSwitchStatusCallable(const Model::ModifyAllVPCSwitchStatusRequest& request);

                /**
                 *This API is used to modify asset scan settings.
                 * @param req ModifyAssetScanRequest
                 * @return ModifyAssetScanOutcome
                 */
                ModifyAssetScanOutcome ModifyAssetScan(const Model::ModifyAssetScanRequest &request);
                void ModifyAssetScanAsync(const Model::ModifyAssetScanRequest& request, const ModifyAssetScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssetScanOutcomeCallable ModifyAssetScanCallable(const Model::ModifyAssetScanRequest& request);

                /**
                 *This API is used to manage blocked/allowed IPs and domains.
Add IPs/domains to the blocked/allowed list
Remove IPs/domains from the blocked/allowed list
Modify events related with the IPs/domains in the blocked/allowed list
                 * @param req ModifyBlockIgnoreListRequest
                 * @return ModifyBlockIgnoreListOutcome
                 */
                ModifyBlockIgnoreListOutcome ModifyBlockIgnoreList(const Model::ModifyBlockIgnoreListRequest &request);
                void ModifyBlockIgnoreListAsync(const Model::ModifyBlockIgnoreListRequest& request, const ModifyBlockIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlockIgnoreListOutcomeCallable ModifyBlockIgnoreListCallable(const Model::ModifyBlockIgnoreListRequest& request);

                /**
                 *This API is used to pin or unpin a blocking log.
                 * @param req ModifyBlockTopRequest
                 * @return ModifyBlockTopOutcome
                 */
                ModifyBlockTopOutcome ModifyBlockTop(const Model::ModifyBlockTopRequest &request);
                void ModifyBlockTopAsync(const Model::ModifyBlockTopRequest& request, const ModifyBlockTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBlockTopOutcomeCallable ModifyBlockTopCallable(const Model::ModifyBlockTopRequest& request);

                /**
                 *This API is used to modify the publishing status of an enterprise security group.
                 * @param req ModifyEnterpriseSecurityDispatchStatusRequest
                 * @return ModifyEnterpriseSecurityDispatchStatusOutcome
                 */
                ModifyEnterpriseSecurityDispatchStatusOutcome ModifyEnterpriseSecurityDispatchStatus(const Model::ModifyEnterpriseSecurityDispatchStatusRequest &request);
                void ModifyEnterpriseSecurityDispatchStatusAsync(const Model::ModifyEnterpriseSecurityDispatchStatusRequest& request, const ModifyEnterpriseSecurityDispatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnterpriseSecurityDispatchStatusOutcomeCallable ModifyEnterpriseSecurityDispatchStatusCallable(const Model::ModifyEnterpriseSecurityDispatchStatusRequest& request);

                /**
                 *This API is used to modify a new enterprise security group rule.
                 * @param req ModifyEnterpriseSecurityGroupRuleRequest
                 * @return ModifyEnterpriseSecurityGroupRuleOutcome
                 */
                ModifyEnterpriseSecurityGroupRuleOutcome ModifyEnterpriseSecurityGroupRule(const Model::ModifyEnterpriseSecurityGroupRuleRequest &request);
                void ModifyEnterpriseSecurityGroupRuleAsync(const Model::ModifyEnterpriseSecurityGroupRuleRequest& request, const ModifyEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyEnterpriseSecurityGroupRuleOutcomeCallable ModifyEnterpriseSecurityGroupRuleCallable(const Model::ModifyEnterpriseSecurityGroupRuleRequest& request);

                /**
                 *This API is used to modify NAT access control rules.
                 * @param req ModifyNatAcRuleRequest
                 * @return ModifyNatAcRuleOutcome
                 */
                ModifyNatAcRuleOutcome ModifyNatAcRule(const Model::ModifyNatAcRuleRequest &request);
                void ModifyNatAcRuleAsync(const Model::ModifyNatAcRuleRequest& request, const ModifyNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatAcRuleOutcomeCallable ModifyNatAcRuleCallable(const Model::ModifyNatAcRuleRequest& request);

                /**
                 *This API is used to get the VPC or NAT list for changing associated firewall instances.
                 * @param req ModifyNatFwReSelectRequest
                 * @return ModifyNatFwReSelectOutcome
                 */
                ModifyNatFwReSelectOutcome ModifyNatFwReSelect(const Model::ModifyNatFwReSelectRequest &request);
                void ModifyNatFwReSelectAsync(const Model::ModifyNatFwReSelectRequest& request, const ModifyNatFwReSelectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatFwReSelectOutcomeCallable ModifyNatFwReSelectCallable(const Model::ModifyNatFwReSelectRequest& request);

                /**
                 *This API is used to enable or disable a NAT firewall.
                 * @param req ModifyNatFwSwitchRequest
                 * @return ModifyNatFwSwitchOutcome
                 */
                ModifyNatFwSwitchOutcome ModifyNatFwSwitch(const Model::ModifyNatFwSwitchRequest &request);
                void ModifyNatFwSwitchAsync(const Model::ModifyNatFwSwitchRequest& request, const ModifyNatFwSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatFwSwitchOutcomeCallable ModifyNatFwSwitchCallable(const Model::ModifyNatFwSwitchRequest& request);

                /**
                 *This API is used to modify the VPC DNS status of NAT firewall instances.
                 * @param req ModifyNatFwVpcDnsSwitchRequest
                 * @return ModifyNatFwVpcDnsSwitchOutcome
                 */
                ModifyNatFwVpcDnsSwitchOutcome ModifyNatFwVpcDnsSwitch(const Model::ModifyNatFwVpcDnsSwitchRequest &request);
                void ModifyNatFwVpcDnsSwitchAsync(const Model::ModifyNatFwVpcDnsSwitchRequest& request, const ModifyNatFwVpcDnsSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatFwVpcDnsSwitchOutcomeCallable ModifyNatFwVpcDnsSwitchCallable(const Model::ModifyNatFwVpcDnsSwitchRequest& request);

                /**
                 *This API is used to change the sequence number of NAT firewall rules.
                 * @param req ModifyNatSequenceRulesRequest
                 * @return ModifyNatSequenceRulesOutcome
                 */
                ModifyNatSequenceRulesOutcome ModifyNatSequenceRules(const Model::ModifyNatSequenceRulesRequest &request);
                void ModifyNatSequenceRulesAsync(const Model::ModifyNatSequenceRulesRequest& request, const ModifyNatSequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatSequenceRulesOutcomeCallable ModifyNatSequenceRulesCallable(const Model::ModifyNatSequenceRulesRequest& request);

                /**
                 *This API is used to enable or disable an edge firewall.
                 * @param req ModifyPublicIPSwitchStatusRequest
                 * @return ModifyPublicIPSwitchStatusOutcome
                 */
                ModifyPublicIPSwitchStatusOutcome ModifyPublicIPSwitchStatus(const Model::ModifyPublicIPSwitchStatusRequest &request);
                void ModifyPublicIPSwitchStatusAsync(const Model::ModifyPublicIPSwitchStatusRequest& request, const ModifyPublicIPSwitchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPublicIPSwitchStatusOutcomeCallable ModifyPublicIPSwitchStatusCallable(const Model::ModifyPublicIPSwitchStatusRequest& request);

                /**
                 *This API is used to modify the asset group information in Asset Management.


                 * @param req ModifyResourceGroupRequest
                 * @return ModifyResourceGroupOutcome
                 */
                ModifyResourceGroupOutcome ModifyResourceGroup(const Model::ModifyResourceGroupRequest &request);
                void ModifyResourceGroupAsync(const Model::ModifyResourceGroupRequest& request, const ModifyResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceGroupOutcomeCallable ModifyResourceGroupCallable(const Model::ModifyResourceGroupRequest& request);

                /**
                 *This API is used to sync assets - Internet & VPC (new).
                 * @param req ModifyRunSyncAssetRequest
                 * @return ModifyRunSyncAssetOutcome
                 */
                ModifyRunSyncAssetOutcome ModifyRunSyncAsset(const Model::ModifyRunSyncAssetRequest &request);
                void ModifyRunSyncAssetAsync(const Model::ModifyRunSyncAssetRequest& request, const ModifyRunSyncAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRunSyncAssetOutcomeCallable ModifyRunSyncAssetCallable(const Model::ModifyRunSyncAssetRequest& request);

                /**
                 *This API is used to enable or disable an enterprise security group rule.
                 * @param req ModifySecurityGroupItemRuleStatusRequest
                 * @return ModifySecurityGroupItemRuleStatusOutcome
                 */
                ModifySecurityGroupItemRuleStatusOutcome ModifySecurityGroupItemRuleStatus(const Model::ModifySecurityGroupItemRuleStatusRequest &request);
                void ModifySecurityGroupItemRuleStatusAsync(const Model::ModifySecurityGroupItemRuleStatusRequest& request, const ModifySecurityGroupItemRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupItemRuleStatusOutcomeCallable ModifySecurityGroupItemRuleStatusCallable(const Model::ModifySecurityGroupItemRuleStatusRequest& request);

                /**
                 *This API is used to sort enterprise security group rules.
                 * @param req ModifySecurityGroupSequenceRulesRequest
                 * @return ModifySecurityGroupSequenceRulesOutcome
                 */
                ModifySecurityGroupSequenceRulesOutcome ModifySecurityGroupSequenceRules(const Model::ModifySecurityGroupSequenceRulesRequest &request);
                void ModifySecurityGroupSequenceRulesAsync(const Model::ModifySecurityGroupSequenceRulesRequest& request, const ModifySecurityGroupSequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupSequenceRulesOutcomeCallable ModifySecurityGroupSequenceRulesCallable(const Model::ModifySecurityGroupSequenceRulesRequest& request);

                /**
                 *This API is used to modify rule priority.
                 * @param req ModifySequenceRulesRequest
                 * @return ModifySequenceRulesOutcome
                 */
                ModifySequenceRulesOutcome ModifySequenceRules(const Model::ModifySequenceRulesRequest &request);
                void ModifySequenceRulesAsync(const Model::ModifySequenceRulesRequest& request, const ModifySequenceRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySequenceRulesOutcomeCallable ModifySequenceRulesCallable(const Model::ModifySequenceRulesRequest& request);

                /**
                 *This API is used to modify the log retention period or to clear logs.
                 * @param req ModifyStorageSettingRequest
                 * @return ModifyStorageSettingOutcome
                 */
                ModifyStorageSettingOutcome ModifyStorageSetting(const Model::ModifyStorageSettingRequest &request);
                void ModifyStorageSettingAsync(const Model::ModifyStorageSettingRequest& request, const ModifyStorageSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStorageSettingOutcomeCallable ModifyStorageSettingCallable(const Model::ModifyStorageSettingRequest& request);

                /**
                 *This API is used to modify rule list status.
                 * @param req ModifyTableStatusRequest
                 * @return ModifyTableStatusOutcome
                 */
                ModifyTableStatusOutcome ModifyTableStatus(const Model::ModifyTableStatusRequest &request);
                void ModifyTableStatusAsync(const Model::ModifyTableStatusRequest& request, const ModifyTableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTableStatusOutcomeCallable ModifyTableStatusCallable(const Model::ModifyTableStatusRequest& request);

                /**
                 *This API is used to delete edge firewall rules.
                 * @param req RemoveAcRuleRequest
                 * @return RemoveAcRuleOutcome
                 */
                RemoveAcRuleOutcome RemoveAcRule(const Model::RemoveAcRuleRequest &request);
                void RemoveAcRuleAsync(const Model::RemoveAcRuleRequest& request, const RemoveAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveAcRuleOutcomeCallable RemoveAcRuleCallable(const Model::RemoveAcRuleRequest& request);

                /**
                 *This API is used to delete enterprise security group rules (new).
                 * @param req RemoveEnterpriseSecurityGroupRuleRequest
                 * @return RemoveEnterpriseSecurityGroupRuleOutcome
                 */
                RemoveEnterpriseSecurityGroupRuleOutcome RemoveEnterpriseSecurityGroupRule(const Model::RemoveEnterpriseSecurityGroupRuleRequest &request);
                void RemoveEnterpriseSecurityGroupRuleAsync(const Model::RemoveEnterpriseSecurityGroupRuleRequest& request, const RemoveEnterpriseSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveEnterpriseSecurityGroupRuleOutcomeCallable RemoveEnterpriseSecurityGroupRuleCallable(const Model::RemoveEnterpriseSecurityGroupRuleRequest& request);

                /**
                 *This API is used to delete NAT access control rules.
                 * @param req RemoveNatAcRuleRequest
                 * @return RemoveNatAcRuleOutcome
                 */
                RemoveNatAcRuleOutcome RemoveNatAcRule(const Model::RemoveNatAcRuleRequest &request);
                void RemoveNatAcRuleAsync(const Model::RemoveNatAcRuleRequest& request, const RemoveNatAcRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveNatAcRuleOutcomeCallable RemoveNatAcRuleCallable(const Model::RemoveNatAcRuleRequest& request);

                /**
                 *This API is used to configure firewall DNAT rules.
                 * @param req SetNatFwDnatRuleRequest
                 * @return SetNatFwDnatRuleOutcome
                 */
                SetNatFwDnatRuleOutcome SetNatFwDnatRule(const Model::SetNatFwDnatRuleRequest &request);
                void SetNatFwDnatRuleAsync(const Model::SetNatFwDnatRuleRequest& request, const SetNatFwDnatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetNatFwDnatRuleOutcomeCallable SetNatFwDnatRuleCallable(const Model::SetNatFwDnatRuleRequest& request);

                /**
                 *This API is used to set the firewall instance EIP. (Available for firewall instances in the "Create new" mode. only)
                 * @param req SetNatFwEipRequest
                 * @return SetNatFwEipOutcome
                 */
                SetNatFwEipOutcome SetNatFwEip(const Model::SetNatFwEipRequest &request);
                void SetNatFwEipAsync(const Model::SetNatFwEipRequest& request, const SetNatFwEipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetNatFwEipOutcomeCallable SetNatFwEipCallable(const Model::SetNatFwEipRequest& request);

                /**
                 *This API is used to stop publishing security group rules.
                 * @param req StopSecurityGroupRuleDispatchRequest
                 * @return StopSecurityGroupRuleDispatchOutcome
                 */
                StopSecurityGroupRuleDispatchOutcome StopSecurityGroupRuleDispatch(const Model::StopSecurityGroupRuleDispatchRequest &request);
                void StopSecurityGroupRuleDispatchAsync(const Model::StopSecurityGroupRuleDispatchRequest& request, const StopSecurityGroupRuleDispatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopSecurityGroupRuleDispatchOutcomeCallable StopSecurityGroupRuleDispatchCallable(const Model::StopSecurityGroupRuleDispatchRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_CFWCLIENT_H_
