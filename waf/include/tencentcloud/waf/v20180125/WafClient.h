/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WAF_V20180125_WAFCLIENT_H_
#define TENCENTCLOUD_WAF_V20180125_WAFCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/waf/v20180125/model/AddAntiFakeUrlRequest.h>
#include <tencentcloud/waf/v20180125/model/AddAntiFakeUrlResponse.h>
#include <tencentcloud/waf/v20180125/model/AddAntiInfoLeakRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/AddAntiInfoLeakRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/AddCustomRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/AddCustomRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/AddCustomWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/AddCustomWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/AddSpartaProtectionRequest.h>
#include <tencentcloud/waf/v20180125/model/AddSpartaProtectionResponse.h>
#include <tencentcloud/waf/v20180125/model/CreateDealsRequest.h>
#include <tencentcloud/waf/v20180125/model/CreateDealsResponse.h>
#include <tencentcloud/waf/v20180125/model/CreateHostRequest.h>
#include <tencentcloud/waf/v20180125/model/CreateHostResponse.h>
#include <tencentcloud/waf/v20180125/model/CreateIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/CreateIpAccessControlResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteAntiFakeUrlRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteAntiFakeUrlResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteAntiInfoLeakRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteAntiInfoLeakRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteCCRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteCCRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteCustomRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteCustomRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteCustomWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteCustomWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteHostRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteHostResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteIpAccessControlV2Request.h>
#include <tencentcloud/waf/v20180125/model/DeleteIpAccessControlV2Response.h>
#include <tencentcloud/waf/v20180125/model/DeleteSessionRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteSessionResponse.h>
#include <tencentcloud/waf/v20180125/model/DeleteSpartaProtectionRequest.h>
#include <tencentcloud/waf/v20180125/model/DeleteSpartaProtectionResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAntiFakeRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAntiFakeRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAntiInfoLeakageRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAntiInfoLeakageRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAttackOverviewRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAttackOverviewResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeAttackTypeRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeAttackTypeResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeBatchIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeBatchIpAccessControlResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeCCRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeCCRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeCCRuleListRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeCCRuleListResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeCertificateVerifyResultRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeCertificateVerifyResultResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeCiphersDetailRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeCiphersDetailResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeCustomRuleListRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeCustomRuleListResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeCustomWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeCustomWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainCountInfoRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainCountInfoResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainDetailsClbRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainDetailsClbResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainDetailsSaasRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainDetailsSaasResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainVerifyResultRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainVerifyResultResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeDomainsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeFindDomainListRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeFindDomainListResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeHistogramRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeHistogramResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeHostRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeHostResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeHostLimitRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeHostLimitResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeHostsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeHostsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeInstancesRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeInstancesResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeIpAccessControlResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeModuleStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeModuleStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeObjectsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeObjectsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribePeakPointsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribePeakPointsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribePolicyStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribePolicyStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribePortsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribePortsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeRuleLimitRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeRuleLimitResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeSessionRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeSessionResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeSpartaProtectionInfoRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeSpartaProtectionInfoResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeTlsVersionRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeTlsVersionResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeTopAttackDomainRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeTopAttackDomainResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserClbWafRegionsRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserClbWafRegionsResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserDomainInfoRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserDomainInfoResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserLevelRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeUserLevelResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeVipInfoRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeVipInfoResponse.h>
#include <tencentcloud/waf/v20180125/model/DescribeWebshellStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/DescribeWebshellStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/FreshAntiFakeUrlRequest.h>
#include <tencentcloud/waf/v20180125/model/FreshAntiFakeUrlResponse.h>
#include <tencentcloud/waf/v20180125/model/GenerateDealsAndPayNewRequest.h>
#include <tencentcloud/waf/v20180125/model/GenerateDealsAndPayNewResponse.h>
#include <tencentcloud/waf/v20180125/model/GetAttackHistogramRequest.h>
#include <tencentcloud/waf/v20180125/model/GetAttackHistogramResponse.h>
#include <tencentcloud/waf/v20180125/model/GetAttackTotalCountRequest.h>
#include <tencentcloud/waf/v20180125/model/GetAttackTotalCountResponse.h>
#include <tencentcloud/waf/v20180125/model/GetInstanceQpsLimitRequest.h>
#include <tencentcloud/waf/v20180125/model/GetInstanceQpsLimitResponse.h>
#include <tencentcloud/waf/v20180125/model/ImportIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/ImportIpAccessControlResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiFakeUrlRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiFakeUrlResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiFakeUrlStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiFakeUrlStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiInfoLeakRuleStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiInfoLeakRuleStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiInfoLeakRulesRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyAntiInfoLeakRulesResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyApiAnalyzeStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyApiAnalyzeStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyBotStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyBotStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomRuleStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomRuleStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomWhiteRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomWhiteRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomWhiteRuleStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyCustomWhiteRuleStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainIpv6StatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainIpv6StatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainPostActionRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainPostActionResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainsCLSStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyDomainsCLSStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostFlowModeRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostFlowModeResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostModeRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostModeResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyHostStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceElasticModeRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceElasticModeResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceNameRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceNameResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceQpsLimitRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceQpsLimitResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceRenewFlagRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyInstanceRenewFlagResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyIpAccessControlRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyIpAccessControlResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyModuleStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyModuleStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyObjectRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyObjectResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyProtectionStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyProtectionStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifySpartaProtectionRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifySpartaProtectionResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifySpartaProtectionModeRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifySpartaProtectionModeResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyUserLevelRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyUserLevelResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyUserSignatureRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyUserSignatureRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/ModifyWebshellStatusRequest.h>
#include <tencentcloud/waf/v20180125/model/ModifyWebshellStatusResponse.h>
#include <tencentcloud/waf/v20180125/model/RefreshAccessCheckResultRequest.h>
#include <tencentcloud/waf/v20180125/model/RefreshAccessCheckResultResponse.h>
#include <tencentcloud/waf/v20180125/model/SearchAttackLogRequest.h>
#include <tencentcloud/waf/v20180125/model/SearchAttackLogResponse.h>
#include <tencentcloud/waf/v20180125/model/SwitchElasticModeRequest.h>
#include <tencentcloud/waf/v20180125/model/SwitchElasticModeResponse.h>
#include <tencentcloud/waf/v20180125/model/UpsertCCRuleRequest.h>
#include <tencentcloud/waf/v20180125/model/UpsertCCRuleResponse.h>
#include <tencentcloud/waf/v20180125/model/UpsertSessionRequest.h>
#include <tencentcloud/waf/v20180125/model/UpsertSessionResponse.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            class WafClient : public AbstractClient
            {
            public:
                WafClient(const Credential &credential, const std::string &region);
                WafClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddAntiFakeUrlResponse> AddAntiFakeUrlOutcome;
                typedef std::future<AddAntiFakeUrlOutcome> AddAntiFakeUrlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddAntiFakeUrlRequest&, AddAntiFakeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAntiFakeUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::AddAntiInfoLeakRulesResponse> AddAntiInfoLeakRulesOutcome;
                typedef std::future<AddAntiInfoLeakRulesOutcome> AddAntiInfoLeakRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddAntiInfoLeakRulesRequest&, AddAntiInfoLeakRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddAntiInfoLeakRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCustomRuleResponse> AddCustomRuleOutcome;
                typedef std::future<AddCustomRuleOutcome> AddCustomRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddCustomRuleRequest&, AddCustomRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCustomRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddCustomWhiteRuleResponse> AddCustomWhiteRuleOutcome;
                typedef std::future<AddCustomWhiteRuleOutcome> AddCustomWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddCustomWhiteRuleRequest&, AddCustomWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddCustomWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddSpartaProtectionResponse> AddSpartaProtectionOutcome;
                typedef std::future<AddSpartaProtectionOutcome> AddSpartaProtectionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::AddSpartaProtectionRequest&, AddSpartaProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddSpartaProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDealsResponse> CreateDealsOutcome;
                typedef std::future<CreateDealsOutcome> CreateDealsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::CreateDealsRequest&, CreateDealsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDealsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHostResponse> CreateHostOutcome;
                typedef std::future<CreateHostOutcome> CreateHostOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::CreateHostRequest&, CreateHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHostAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIpAccessControlResponse> CreateIpAccessControlOutcome;
                typedef std::future<CreateIpAccessControlOutcome> CreateIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::CreateIpAccessControlRequest&, CreateIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIpAccessControlAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAntiFakeUrlResponse> DeleteAntiFakeUrlOutcome;
                typedef std::future<DeleteAntiFakeUrlOutcome> DeleteAntiFakeUrlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteAntiFakeUrlRequest&, DeleteAntiFakeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAntiFakeUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAntiInfoLeakRuleResponse> DeleteAntiInfoLeakRuleOutcome;
                typedef std::future<DeleteAntiInfoLeakRuleOutcome> DeleteAntiInfoLeakRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteAntiInfoLeakRuleRequest&, DeleteAntiInfoLeakRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAntiInfoLeakRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCCRuleResponse> DeleteCCRuleOutcome;
                typedef std::future<DeleteCCRuleOutcome> DeleteCCRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteCCRuleRequest&, DeleteCCRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCCRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomRuleResponse> DeleteCustomRuleOutcome;
                typedef std::future<DeleteCustomRuleOutcome> DeleteCustomRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteCustomRuleRequest&, DeleteCustomRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomWhiteRuleResponse> DeleteCustomWhiteRuleOutcome;
                typedef std::future<DeleteCustomWhiteRuleOutcome> DeleteCustomWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteCustomWhiteRuleRequest&, DeleteCustomWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHostResponse> DeleteHostOutcome;
                typedef std::future<DeleteHostOutcome> DeleteHostOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteHostRequest&, DeleteHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteIpAccessControlV2Response> DeleteIpAccessControlV2Outcome;
                typedef std::future<DeleteIpAccessControlV2Outcome> DeleteIpAccessControlV2OutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteIpAccessControlV2Request&, DeleteIpAccessControlV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpAccessControlV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSessionResponse> DeleteSessionOutcome;
                typedef std::future<DeleteSessionOutcome> DeleteSessionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteSessionRequest&, DeleteSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSpartaProtectionResponse> DeleteSpartaProtectionOutcome;
                typedef std::future<DeleteSpartaProtectionOutcome> DeleteSpartaProtectionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DeleteSpartaProtectionRequest&, DeleteSpartaProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSpartaProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAntiFakeRulesResponse> DescribeAntiFakeRulesOutcome;
                typedef std::future<DescribeAntiFakeRulesOutcome> DescribeAntiFakeRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAntiFakeRulesRequest&, DescribeAntiFakeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAntiFakeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAntiInfoLeakageRulesResponse> DescribeAntiInfoLeakageRulesOutcome;
                typedef std::future<DescribeAntiInfoLeakageRulesOutcome> DescribeAntiInfoLeakageRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAntiInfoLeakageRulesRequest&, DescribeAntiInfoLeakageRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAntiInfoLeakageRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackOverviewResponse> DescribeAttackOverviewOutcome;
                typedef std::future<DescribeAttackOverviewOutcome> DescribeAttackOverviewOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAttackOverviewRequest&, DescribeAttackOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAttackTypeResponse> DescribeAttackTypeOutcome;
                typedef std::future<DescribeAttackTypeOutcome> DescribeAttackTypeOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeAttackTypeRequest&, DescribeAttackTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchIpAccessControlResponse> DescribeBatchIpAccessControlOutcome;
                typedef std::future<DescribeBatchIpAccessControlOutcome> DescribeBatchIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeBatchIpAccessControlRequest&, DescribeBatchIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchIpAccessControlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCRuleResponse> DescribeCCRuleOutcome;
                typedef std::future<DescribeCCRuleOutcome> DescribeCCRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeCCRuleRequest&, DescribeCCRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCRuleListResponse> DescribeCCRuleListOutcome;
                typedef std::future<DescribeCCRuleListOutcome> DescribeCCRuleListOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeCCRuleListRequest&, DescribeCCRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateVerifyResultResponse> DescribeCertificateVerifyResultOutcome;
                typedef std::future<DescribeCertificateVerifyResultOutcome> DescribeCertificateVerifyResultOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeCertificateVerifyResultRequest&, DescribeCertificateVerifyResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateVerifyResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCiphersDetailResponse> DescribeCiphersDetailOutcome;
                typedef std::future<DescribeCiphersDetailOutcome> DescribeCiphersDetailOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeCiphersDetailRequest&, DescribeCiphersDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCiphersDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomRuleListResponse> DescribeCustomRuleListOutcome;
                typedef std::future<DescribeCustomRuleListOutcome> DescribeCustomRuleListOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeCustomRuleListRequest&, DescribeCustomRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomWhiteRuleResponse> DescribeCustomWhiteRuleOutcome;
                typedef std::future<DescribeCustomWhiteRuleOutcome> DescribeCustomWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeCustomWhiteRuleRequest&, DescribeCustomWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainCountInfoResponse> DescribeDomainCountInfoOutcome;
                typedef std::future<DescribeDomainCountInfoOutcome> DescribeDomainCountInfoOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainCountInfoRequest&, DescribeDomainCountInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainCountInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainDetailsClbResponse> DescribeDomainDetailsClbOutcome;
                typedef std::future<DescribeDomainDetailsClbOutcome> DescribeDomainDetailsClbOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainDetailsClbRequest&, DescribeDomainDetailsClbOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainDetailsClbAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainDetailsSaasResponse> DescribeDomainDetailsSaasOutcome;
                typedef std::future<DescribeDomainDetailsSaasOutcome> DescribeDomainDetailsSaasOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainDetailsSaasRequest&, DescribeDomainDetailsSaasOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainDetailsSaasAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainVerifyResultResponse> DescribeDomainVerifyResultOutcome;
                typedef std::future<DescribeDomainVerifyResultOutcome> DescribeDomainVerifyResultOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainVerifyResultRequest&, DescribeDomainVerifyResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainVerifyResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainsResponse> DescribeDomainsOutcome;
                typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeDomainsRequest&, DescribeDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFindDomainListResponse> DescribeFindDomainListOutcome;
                typedef std::future<DescribeFindDomainListOutcome> DescribeFindDomainListOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeFindDomainListRequest&, DescribeFindDomainListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFindDomainListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHistogramResponse> DescribeHistogramOutcome;
                typedef std::future<DescribeHistogramOutcome> DescribeHistogramOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeHistogramRequest&, DescribeHistogramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistogramAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostResponse> DescribeHostOutcome;
                typedef std::future<DescribeHostOutcome> DescribeHostOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeHostRequest&, DescribeHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostLimitResponse> DescribeHostLimitOutcome;
                typedef std::future<DescribeHostLimitOutcome> DescribeHostLimitOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeHostLimitRequest&, DescribeHostLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostsResponse> DescribeHostsOutcome;
                typedef std::future<DescribeHostsOutcome> DescribeHostsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeHostsRequest&, DescribeHostsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpAccessControlResponse> DescribeIpAccessControlOutcome;
                typedef std::future<DescribeIpAccessControlOutcome> DescribeIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeIpAccessControlRequest&, DescribeIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpAccessControlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModuleStatusResponse> DescribeModuleStatusOutcome;
                typedef std::future<DescribeModuleStatusOutcome> DescribeModuleStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeModuleStatusRequest&, DescribeModuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeObjectsResponse> DescribeObjectsOutcome;
                typedef std::future<DescribeObjectsOutcome> DescribeObjectsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeObjectsRequest&, DescribeObjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeObjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePeakPointsResponse> DescribePeakPointsOutcome;
                typedef std::future<DescribePeakPointsOutcome> DescribePeakPointsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribePeakPointsRequest&, DescribePeakPointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePeakPointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePolicyStatusResponse> DescribePolicyStatusOutcome;
                typedef std::future<DescribePolicyStatusOutcome> DescribePolicyStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribePolicyStatusRequest&, DescribePolicyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePolicyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePortsResponse> DescribePortsOutcome;
                typedef std::future<DescribePortsOutcome> DescribePortsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribePortsRequest&, DescribePortsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleLimitResponse> DescribeRuleLimitOutcome;
                typedef std::future<DescribeRuleLimitOutcome> DescribeRuleLimitOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeRuleLimitRequest&, DescribeRuleLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSessionResponse> DescribeSessionOutcome;
                typedef std::future<DescribeSessionOutcome> DescribeSessionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeSessionRequest&, DescribeSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpartaProtectionInfoResponse> DescribeSpartaProtectionInfoOutcome;
                typedef std::future<DescribeSpartaProtectionInfoOutcome> DescribeSpartaProtectionInfoOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeSpartaProtectionInfoRequest&, DescribeSpartaProtectionInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpartaProtectionInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTlsVersionResponse> DescribeTlsVersionOutcome;
                typedef std::future<DescribeTlsVersionOutcome> DescribeTlsVersionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeTlsVersionRequest&, DescribeTlsVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTlsVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopAttackDomainResponse> DescribeTopAttackDomainOutcome;
                typedef std::future<DescribeTopAttackDomainOutcome> DescribeTopAttackDomainOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeTopAttackDomainRequest&, DescribeTopAttackDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopAttackDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserClbWafRegionsResponse> DescribeUserClbWafRegionsOutcome;
                typedef std::future<DescribeUserClbWafRegionsOutcome> DescribeUserClbWafRegionsOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeUserClbWafRegionsRequest&, DescribeUserClbWafRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserClbWafRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserDomainInfoResponse> DescribeUserDomainInfoOutcome;
                typedef std::future<DescribeUserDomainInfoOutcome> DescribeUserDomainInfoOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeUserDomainInfoRequest&, DescribeUserDomainInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserDomainInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUserLevelResponse> DescribeUserLevelOutcome;
                typedef std::future<DescribeUserLevelOutcome> DescribeUserLevelOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeUserLevelRequest&, DescribeUserLevelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserLevelAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVipInfoResponse> DescribeVipInfoOutcome;
                typedef std::future<DescribeVipInfoOutcome> DescribeVipInfoOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeVipInfoRequest&, DescribeVipInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVipInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeWebshellStatusResponse> DescribeWebshellStatusOutcome;
                typedef std::future<DescribeWebshellStatusOutcome> DescribeWebshellStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::DescribeWebshellStatusRequest&, DescribeWebshellStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebshellStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::FreshAntiFakeUrlResponse> FreshAntiFakeUrlOutcome;
                typedef std::future<FreshAntiFakeUrlOutcome> FreshAntiFakeUrlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::FreshAntiFakeUrlRequest&, FreshAntiFakeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FreshAntiFakeUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateDealsAndPayNewResponse> GenerateDealsAndPayNewOutcome;
                typedef std::future<GenerateDealsAndPayNewOutcome> GenerateDealsAndPayNewOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::GenerateDealsAndPayNewRequest&, GenerateDealsAndPayNewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateDealsAndPayNewAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAttackHistogramResponse> GetAttackHistogramOutcome;
                typedef std::future<GetAttackHistogramOutcome> GetAttackHistogramOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::GetAttackHistogramRequest&, GetAttackHistogramOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAttackHistogramAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAttackTotalCountResponse> GetAttackTotalCountOutcome;
                typedef std::future<GetAttackTotalCountOutcome> GetAttackTotalCountOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::GetAttackTotalCountRequest&, GetAttackTotalCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAttackTotalCountAsyncHandler;
                typedef Outcome<Core::Error, Model::GetInstanceQpsLimitResponse> GetInstanceQpsLimitOutcome;
                typedef std::future<GetInstanceQpsLimitOutcome> GetInstanceQpsLimitOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::GetInstanceQpsLimitRequest&, GetInstanceQpsLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceQpsLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportIpAccessControlResponse> ImportIpAccessControlOutcome;
                typedef std::future<ImportIpAccessControlOutcome> ImportIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ImportIpAccessControlRequest&, ImportIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportIpAccessControlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAntiFakeUrlResponse> ModifyAntiFakeUrlOutcome;
                typedef std::future<ModifyAntiFakeUrlOutcome> ModifyAntiFakeUrlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyAntiFakeUrlRequest&, ModifyAntiFakeUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAntiFakeUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAntiFakeUrlStatusResponse> ModifyAntiFakeUrlStatusOutcome;
                typedef std::future<ModifyAntiFakeUrlStatusOutcome> ModifyAntiFakeUrlStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyAntiFakeUrlStatusRequest&, ModifyAntiFakeUrlStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAntiFakeUrlStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAntiInfoLeakRuleStatusResponse> ModifyAntiInfoLeakRuleStatusOutcome;
                typedef std::future<ModifyAntiInfoLeakRuleStatusOutcome> ModifyAntiInfoLeakRuleStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyAntiInfoLeakRuleStatusRequest&, ModifyAntiInfoLeakRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAntiInfoLeakRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAntiInfoLeakRulesResponse> ModifyAntiInfoLeakRulesOutcome;
                typedef std::future<ModifyAntiInfoLeakRulesOutcome> ModifyAntiInfoLeakRulesOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyAntiInfoLeakRulesRequest&, ModifyAntiInfoLeakRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAntiInfoLeakRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApiAnalyzeStatusResponse> ModifyApiAnalyzeStatusOutcome;
                typedef std::future<ModifyApiAnalyzeStatusOutcome> ModifyApiAnalyzeStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyApiAnalyzeStatusRequest&, ModifyApiAnalyzeStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiAnalyzeStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBotStatusResponse> ModifyBotStatusOutcome;
                typedef std::future<ModifyBotStatusOutcome> ModifyBotStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyBotStatusRequest&, ModifyBotStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBotStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomRuleResponse> ModifyCustomRuleOutcome;
                typedef std::future<ModifyCustomRuleOutcome> ModifyCustomRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyCustomRuleRequest&, ModifyCustomRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomRuleStatusResponse> ModifyCustomRuleStatusOutcome;
                typedef std::future<ModifyCustomRuleStatusOutcome> ModifyCustomRuleStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyCustomRuleStatusRequest&, ModifyCustomRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomWhiteRuleResponse> ModifyCustomWhiteRuleOutcome;
                typedef std::future<ModifyCustomWhiteRuleOutcome> ModifyCustomWhiteRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyCustomWhiteRuleRequest&, ModifyCustomWhiteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomWhiteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomWhiteRuleStatusResponse> ModifyCustomWhiteRuleStatusOutcome;
                typedef std::future<ModifyCustomWhiteRuleStatusOutcome> ModifyCustomWhiteRuleStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyCustomWhiteRuleStatusRequest&, ModifyCustomWhiteRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomWhiteRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainIpv6StatusResponse> ModifyDomainIpv6StatusOutcome;
                typedef std::future<ModifyDomainIpv6StatusOutcome> ModifyDomainIpv6StatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyDomainIpv6StatusRequest&, ModifyDomainIpv6StatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainIpv6StatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainPostActionResponse> ModifyDomainPostActionOutcome;
                typedef std::future<ModifyDomainPostActionOutcome> ModifyDomainPostActionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyDomainPostActionRequest&, ModifyDomainPostActionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainPostActionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainsCLSStatusResponse> ModifyDomainsCLSStatusOutcome;
                typedef std::future<ModifyDomainsCLSStatusOutcome> ModifyDomainsCLSStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyDomainsCLSStatusRequest&, ModifyDomainsCLSStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainsCLSStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostResponse> ModifyHostOutcome;
                typedef std::future<ModifyHostOutcome> ModifyHostOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyHostRequest&, ModifyHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostFlowModeResponse> ModifyHostFlowModeOutcome;
                typedef std::future<ModifyHostFlowModeOutcome> ModifyHostFlowModeOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyHostFlowModeRequest&, ModifyHostFlowModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostFlowModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostModeResponse> ModifyHostModeOutcome;
                typedef std::future<ModifyHostModeOutcome> ModifyHostModeOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyHostModeRequest&, ModifyHostModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostStatusResponse> ModifyHostStatusOutcome;
                typedef std::future<ModifyHostStatusOutcome> ModifyHostStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyHostStatusRequest&, ModifyHostStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceElasticModeResponse> ModifyInstanceElasticModeOutcome;
                typedef std::future<ModifyInstanceElasticModeOutcome> ModifyInstanceElasticModeOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyInstanceElasticModeRequest&, ModifyInstanceElasticModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceElasticModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceNameResponse> ModifyInstanceNameOutcome;
                typedef std::future<ModifyInstanceNameOutcome> ModifyInstanceNameOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyInstanceNameRequest&, ModifyInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceQpsLimitResponse> ModifyInstanceQpsLimitOutcome;
                typedef std::future<ModifyInstanceQpsLimitOutcome> ModifyInstanceQpsLimitOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyInstanceQpsLimitRequest&, ModifyInstanceQpsLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceQpsLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceRenewFlagResponse> ModifyInstanceRenewFlagOutcome;
                typedef std::future<ModifyInstanceRenewFlagOutcome> ModifyInstanceRenewFlagOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyInstanceRenewFlagRequest&, ModifyInstanceRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIpAccessControlResponse> ModifyIpAccessControlOutcome;
                typedef std::future<ModifyIpAccessControlOutcome> ModifyIpAccessControlOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyIpAccessControlRequest&, ModifyIpAccessControlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpAccessControlAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModuleStatusResponse> ModifyModuleStatusOutcome;
                typedef std::future<ModifyModuleStatusOutcome> ModifyModuleStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyModuleStatusRequest&, ModifyModuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyObjectResponse> ModifyObjectOutcome;
                typedef std::future<ModifyObjectOutcome> ModifyObjectOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyObjectRequest&, ModifyObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProtectionStatusResponse> ModifyProtectionStatusOutcome;
                typedef std::future<ModifyProtectionStatusOutcome> ModifyProtectionStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyProtectionStatusRequest&, ModifyProtectionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtectionStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySpartaProtectionResponse> ModifySpartaProtectionOutcome;
                typedef std::future<ModifySpartaProtectionOutcome> ModifySpartaProtectionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifySpartaProtectionRequest&, ModifySpartaProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySpartaProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySpartaProtectionModeResponse> ModifySpartaProtectionModeOutcome;
                typedef std::future<ModifySpartaProtectionModeOutcome> ModifySpartaProtectionModeOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifySpartaProtectionModeRequest&, ModifySpartaProtectionModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySpartaProtectionModeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserLevelResponse> ModifyUserLevelOutcome;
                typedef std::future<ModifyUserLevelOutcome> ModifyUserLevelOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyUserLevelRequest&, ModifyUserLevelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserLevelAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUserSignatureRuleResponse> ModifyUserSignatureRuleOutcome;
                typedef std::future<ModifyUserSignatureRuleOutcome> ModifyUserSignatureRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyUserSignatureRuleRequest&, ModifyUserSignatureRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserSignatureRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyWebshellStatusResponse> ModifyWebshellStatusOutcome;
                typedef std::future<ModifyWebshellStatusOutcome> ModifyWebshellStatusOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::ModifyWebshellStatusRequest&, ModifyWebshellStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebshellStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::RefreshAccessCheckResultResponse> RefreshAccessCheckResultOutcome;
                typedef std::future<RefreshAccessCheckResultOutcome> RefreshAccessCheckResultOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::RefreshAccessCheckResultRequest&, RefreshAccessCheckResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefreshAccessCheckResultAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchAttackLogResponse> SearchAttackLogOutcome;
                typedef std::future<SearchAttackLogOutcome> SearchAttackLogOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::SearchAttackLogRequest&, SearchAttackLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchAttackLogAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchElasticModeResponse> SwitchElasticModeOutcome;
                typedef std::future<SwitchElasticModeOutcome> SwitchElasticModeOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::SwitchElasticModeRequest&, SwitchElasticModeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchElasticModeAsyncHandler;
                typedef Outcome<Core::Error, Model::UpsertCCRuleResponse> UpsertCCRuleOutcome;
                typedef std::future<UpsertCCRuleOutcome> UpsertCCRuleOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::UpsertCCRuleRequest&, UpsertCCRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpsertCCRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpsertSessionResponse> UpsertSessionOutcome;
                typedef std::future<UpsertSessionOutcome> UpsertSessionOutcomeCallable;
                typedef std::function<void(const WafClient*, const Model::UpsertSessionRequest&, UpsertSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpsertSessionAsyncHandler;



                /**
                 *Add tamper-proof URL
                 * @param req AddAntiFakeUrlRequest
                 * @return AddAntiFakeUrlOutcome
                 */
                AddAntiFakeUrlOutcome AddAntiFakeUrl(const Model::AddAntiFakeUrlRequest &request);
                void AddAntiFakeUrlAsync(const Model::AddAntiFakeUrlRequest& request, const AddAntiFakeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAntiFakeUrlOutcomeCallable AddAntiFakeUrlCallable(const Model::AddAntiFakeUrlRequest& request);

                /**
                 *Add information leakage prevention rule
                 * @param req AddAntiInfoLeakRulesRequest
                 * @return AddAntiInfoLeakRulesOutcome
                 */
                AddAntiInfoLeakRulesOutcome AddAntiInfoLeakRules(const Model::AddAntiInfoLeakRulesRequest &request);
                void AddAntiInfoLeakRulesAsync(const Model::AddAntiInfoLeakRulesRequest& request, const AddAntiInfoLeakRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddAntiInfoLeakRulesOutcomeCallable AddAntiInfoLeakRulesCallable(const Model::AddAntiInfoLeakRulesRequest& request);

                /**
                 *Add access control (from custom policy)
                 * @param req AddCustomRuleRequest
                 * @return AddCustomRuleOutcome
                 */
                AddCustomRuleOutcome AddCustomRule(const Model::AddCustomRuleRequest &request);
                void AddCustomRuleAsync(const Model::AddCustomRuleRequest& request, const AddCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCustomRuleOutcomeCallable AddCustomRuleCallable(const Model::AddCustomRuleRequest& request);

                /**
                 *Add precision allowlist rules
                 * @param req AddCustomWhiteRuleRequest
                 * @return AddCustomWhiteRuleOutcome
                 */
                AddCustomWhiteRuleOutcome AddCustomWhiteRule(const Model::AddCustomWhiteRuleRequest &request);
                void AddCustomWhiteRuleAsync(const Model::AddCustomWhiteRuleRequest& request, const AddCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddCustomWhiteRuleOutcomeCallable AddCustomWhiteRuleCallable(const Model::AddCustomWhiteRuleRequest& request);

                /**
                 *Add SaaS WAF protection domain
                 * @param req AddSpartaProtectionRequest
                 * @return AddSpartaProtectionOutcome
                 */
                AddSpartaProtectionOutcome AddSpartaProtection(const Model::AddSpartaProtectionRequest &request);
                void AddSpartaProtectionAsync(const Model::AddSpartaProtectionRequest& request, const AddSpartaProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddSpartaProtectionOutcomeCallable AddSpartaProtectionCallable(const Model::AddSpartaProtectionRequest& request);

                /**
                 *Billing Resource Purchase, Renewal Order API
                 * @param req CreateDealsRequest
                 * @return CreateDealsOutcome
                 */
                CreateDealsOutcome CreateDeals(const Model::CreateDealsRequest &request);
                void CreateDealsAsync(const Model::CreateDealsRequest& request, const CreateDealsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDealsOutcomeCallable CreateDealsCallable(const Model::CreateDealsRequest& request);

                /**
                 *Add a protection domain in CLB-WAF
                 * @param req CreateHostRequest
                 * @return CreateHostOutcome
                 */
                CreateHostOutcome CreateHost(const Model::CreateHostRequest &request);
                void CreateHostAsync(const Model::CreateHostRequest& request, const CreateHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHostOutcomeCallable CreateHostCallable(const Model::CreateHostRequest& request);

                /**
                 *This API is used to add WAF IP allowlists/blocklists.
                 * @param req CreateIpAccessControlRequest
                 * @return CreateIpAccessControlOutcome
                 */
                CreateIpAccessControlOutcome CreateIpAccessControl(const Model::CreateIpAccessControlRequest &request);
                void CreateIpAccessControlAsync(const Model::CreateIpAccessControlRequest& request, const CreateIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIpAccessControlOutcomeCallable CreateIpAccessControlCallable(const Model::CreateIpAccessControlRequest& request);

                /**
                 *Delete tamper-proof URL
                 * @param req DeleteAntiFakeUrlRequest
                 * @return DeleteAntiFakeUrlOutcome
                 */
                DeleteAntiFakeUrlOutcome DeleteAntiFakeUrl(const Model::DeleteAntiFakeUrlRequest &request);
                void DeleteAntiFakeUrlAsync(const Model::DeleteAntiFakeUrlRequest& request, const DeleteAntiFakeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAntiFakeUrlOutcomeCallable DeleteAntiFakeUrlCallable(const Model::DeleteAntiFakeUrlRequest& request);

                /**
                 *Delete information leakage prevention rule
                 * @param req DeleteAntiInfoLeakRuleRequest
                 * @return DeleteAntiInfoLeakRuleOutcome
                 */
                DeleteAntiInfoLeakRuleOutcome DeleteAntiInfoLeakRule(const Model::DeleteAntiInfoLeakRuleRequest &request);
                void DeleteAntiInfoLeakRuleAsync(const Model::DeleteAntiInfoLeakRuleRequest& request, const DeleteAntiInfoLeakRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAntiInfoLeakRuleOutcomeCallable DeleteAntiInfoLeakRuleCallable(const Model::DeleteAntiInfoLeakRuleRequest& request);

                /**
                 *WAF CC V2 deletion API
                 * @param req DeleteCCRuleRequest
                 * @return DeleteCCRuleOutcome
                 */
                DeleteCCRuleOutcome DeleteCCRule(const Model::DeleteCCRuleRequest &request);
                void DeleteCCRuleAsync(const Model::DeleteCCRuleRequest& request, const DeleteCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCCRuleOutcomeCallable DeleteCCRuleCallable(const Model::DeleteCCRuleRequest& request);

                /**
                 *Delete custom rule
                 * @param req DeleteCustomRuleRequest
                 * @return DeleteCustomRuleOutcome
                 */
                DeleteCustomRuleOutcome DeleteCustomRule(const Model::DeleteCustomRuleRequest &request);
                void DeleteCustomRuleAsync(const Model::DeleteCustomRuleRequest& request, const DeleteCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomRuleOutcomeCallable DeleteCustomRuleCallable(const Model::DeleteCustomRuleRequest& request);

                /**
                 *Delete precision allowlist rules
                 * @param req DeleteCustomWhiteRuleRequest
                 * @return DeleteCustomWhiteRuleOutcome
                 */
                DeleteCustomWhiteRuleOutcome DeleteCustomWhiteRule(const Model::DeleteCustomWhiteRuleRequest &request);
                void DeleteCustomWhiteRuleAsync(const Model::DeleteCustomWhiteRuleRequest& request, const DeleteCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomWhiteRuleOutcomeCallable DeleteCustomWhiteRuleCallable(const Model::DeleteCustomWhiteRuleRequest& request);

                /**
                 *This API is used to delete a domain name protected by CLB WAF. Batch operation is supported.
                 * @param req DeleteHostRequest
                 * @return DeleteHostOutcome
                 */
                DeleteHostOutcome DeleteHost(const Model::DeleteHostRequest &request);
                void DeleteHostAsync(const Model::DeleteHostRequest& request, const DeleteHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHostOutcomeCallable DeleteHostCallable(const Model::DeleteHostRequest& request);

                /**
                 *This API is used to delete latest versions of WAF IP allowlists/blocklists.
                 * @param req DeleteIpAccessControlV2Request
                 * @return DeleteIpAccessControlV2Outcome
                 */
                DeleteIpAccessControlV2Outcome DeleteIpAccessControlV2(const Model::DeleteIpAccessControlV2Request &request);
                void DeleteIpAccessControlV2Async(const Model::DeleteIpAccessControlV2Request& request, const DeleteIpAccessControlV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIpAccessControlV2OutcomeCallable DeleteIpAccessControlV2Callable(const Model::DeleteIpAccessControlV2Request& request);

                /**
                 *Delete CC attack session settings
                 * @param req DeleteSessionRequest
                 * @return DeleteSessionOutcome
                 */
                DeleteSessionOutcome DeleteSession(const Model::DeleteSessionRequest &request);
                void DeleteSessionAsync(const Model::DeleteSessionRequest& request, const DeleteSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSessionOutcomeCallable DeleteSessionCallable(const Model::DeleteSessionRequest& request);

                /**
                 *This API is used to delete a domain name protected by SaaS WAF.
                 * @param req DeleteSpartaProtectionRequest
                 * @return DeleteSpartaProtectionOutcome
                 */
                DeleteSpartaProtectionOutcome DeleteSpartaProtection(const Model::DeleteSpartaProtectionRequest &request);
                void DeleteSpartaProtectionAsync(const Model::DeleteSpartaProtectionRequest& request, const DeleteSpartaProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSpartaProtectionOutcomeCallable DeleteSpartaProtectionCallable(const Model::DeleteSpartaProtectionRequest& request);

                /**
                 *Obtain a tamper-proof URL
                 * @param req DescribeAntiFakeRulesRequest
                 * @return DescribeAntiFakeRulesOutcome
                 */
                DescribeAntiFakeRulesOutcome DescribeAntiFakeRules(const Model::DescribeAntiFakeRulesRequest &request);
                void DescribeAntiFakeRulesAsync(const Model::DescribeAntiFakeRulesRequest& request, const DescribeAntiFakeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAntiFakeRulesOutcomeCallable DescribeAntiFakeRulesCallable(const Model::DescribeAntiFakeRulesRequest& request);

                /**
                 *Obtain the information leakage prevention rule list
                 * @param req DescribeAntiInfoLeakageRulesRequest
                 * @return DescribeAntiInfoLeakageRulesOutcome
                 */
                DescribeAntiInfoLeakageRulesOutcome DescribeAntiInfoLeakageRules(const Model::DescribeAntiInfoLeakageRulesRequest &request);
                void DescribeAntiInfoLeakageRulesAsync(const Model::DescribeAntiInfoLeakageRulesRequest& request, const DescribeAntiInfoLeakageRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAntiInfoLeakageRulesOutcomeCallable DescribeAntiInfoLeakageRulesCallable(const Model::DescribeAntiInfoLeakageRulesRequest& request);

                /**
                 *This API is used to describe the attack overview.
                 * @param req DescribeAttackOverviewRequest
                 * @return DescribeAttackOverviewOutcome
                 */
                DescribeAttackOverviewOutcome DescribeAttackOverview(const Model::DescribeAttackOverviewRequest &request);
                void DescribeAttackOverviewAsync(const Model::DescribeAttackOverviewRequest& request, const DescribeAttackOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackOverviewOutcomeCallable DescribeAttackOverviewCallable(const Model::DescribeAttackOverviewRequest& request);

                /**
                 *Query the top N attack types for a specified domain
                 * @param req DescribeAttackTypeRequest
                 * @return DescribeAttackTypeOutcome
                 */
                DescribeAttackTypeOutcome DescribeAttackType(const Model::DescribeAttackTypeRequest &request);
                void DescribeAttackTypeAsync(const Model::DescribeAttackTypeRequest& request, const DescribeAttackTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAttackTypeOutcomeCallable DescribeAttackTypeCallable(const Model::DescribeAttackTypeRequest& request);

                /**
                 *This API is used to query the IP blocklist and allowlist for WAF batch protection.
                 * @param req DescribeBatchIpAccessControlRequest
                 * @return DescribeBatchIpAccessControlOutcome
                 */
                DescribeBatchIpAccessControlOutcome DescribeBatchIpAccessControl(const Model::DescribeBatchIpAccessControlRequest &request);
                void DescribeBatchIpAccessControlAsync(const Model::DescribeBatchIpAccessControlRequest& request, const DescribeBatchIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchIpAccessControlOutcomeCallable DescribeBatchIpAccessControlCallable(const Model::DescribeBatchIpAccessControlRequest& request);

                /**
                 *WAF CC V2 query API
                 * @param req DescribeCCRuleRequest
                 * @return DescribeCCRuleOutcome
                 */
                DescribeCCRuleOutcome DescribeCCRule(const Model::DescribeCCRuleRequest &request);
                void DescribeCCRuleAsync(const Model::DescribeCCRuleRequest& request, const DescribeCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCRuleOutcomeCallable DescribeCCRuleCallable(const Model::DescribeCCRuleRequest& request);

                /**
                 *Query CC rules based on multiple conditions
                 * @param req DescribeCCRuleListRequest
                 * @return DescribeCCRuleListOutcome
                 */
                DescribeCCRuleListOutcome DescribeCCRuleList(const Model::DescribeCCRuleListRequest &request);
                void DescribeCCRuleListAsync(const Model::DescribeCCRuleListRequest& request, const DescribeCCRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCRuleListOutcomeCallable DescribeCCRuleListCallable(const Model::DescribeCCRuleListRequest& request);

                /**
                 *Obtain certificate inspection result
                 * @param req DescribeCertificateVerifyResultRequest
                 * @return DescribeCertificateVerifyResultOutcome
                 */
                DescribeCertificateVerifyResultOutcome DescribeCertificateVerifyResult(const Model::DescribeCertificateVerifyResultRequest &request);
                void DescribeCertificateVerifyResultAsync(const Model::DescribeCertificateVerifyResultRequest& request, const DescribeCertificateVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateVerifyResultOutcomeCallable DescribeCertificateVerifyResultCallable(const Model::DescribeCertificateVerifyResultRequest& request);

                /**
                 *Query SaaS WAF cipher suite information
                 * @param req DescribeCiphersDetailRequest
                 * @return DescribeCiphersDetailOutcome
                 */
                DescribeCiphersDetailOutcome DescribeCiphersDetail(const Model::DescribeCiphersDetailRequest &request);
                void DescribeCiphersDetailAsync(const Model::DescribeCiphersDetailRequest& request, const DescribeCiphersDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCiphersDetailOutcomeCallable DescribeCiphersDetailCallable(const Model::DescribeCiphersDetailRequest& request);

                /**
                 *Obtain the access control policy list in the protection configuration
                 * @param req DescribeCustomRuleListRequest
                 * @return DescribeCustomRuleListOutcome
                 */
                DescribeCustomRuleListOutcome DescribeCustomRuleList(const Model::DescribeCustomRuleListRequest &request);
                void DescribeCustomRuleListAsync(const Model::DescribeCustomRuleListRequest& request, const DescribeCustomRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomRuleListOutcomeCallable DescribeCustomRuleListCallable(const Model::DescribeCustomRuleListRequest& request);

                /**
                 *Obtain the precision allowlist policy list in the protection configuration
                 * @param req DescribeCustomWhiteRuleRequest
                 * @return DescribeCustomWhiteRuleOutcome
                 */
                DescribeCustomWhiteRuleOutcome DescribeCustomWhiteRule(const Model::DescribeCustomWhiteRuleRequest &request);
                void DescribeCustomWhiteRuleAsync(const Model::DescribeCustomWhiteRuleRequest& request, const DescribeCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomWhiteRuleOutcomeCallable DescribeCustomWhiteRuleCallable(const Model::DescribeCustomWhiteRuleRequest& request);

                /**
                 *Obtain domain overview
                 * @param req DescribeDomainCountInfoRequest
                 * @return DescribeDomainCountInfoOutcome
                 */
                DescribeDomainCountInfoOutcome DescribeDomainCountInfo(const Model::DescribeDomainCountInfoRequest &request);
                void DescribeDomainCountInfoAsync(const Model::DescribeDomainCountInfoRequest& request, const DescribeDomainCountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainCountInfoOutcomeCallable DescribeDomainCountInfoCallable(const Model::DescribeDomainCountInfoRequest& request);

                /**
                 *Obtain CLB WAF domain details
                 * @param req DescribeDomainDetailsClbRequest
                 * @return DescribeDomainDetailsClbOutcome
                 */
                DescribeDomainDetailsClbOutcome DescribeDomainDetailsClb(const Model::DescribeDomainDetailsClbRequest &request);
                void DescribeDomainDetailsClbAsync(const Model::DescribeDomainDetailsClbRequest& request, const DescribeDomainDetailsClbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainDetailsClbOutcomeCallable DescribeDomainDetailsClbCallable(const Model::DescribeDomainDetailsClbRequest& request);

                /**
                 *Query individual SaaS WAF domain details
                 * @param req DescribeDomainDetailsSaasRequest
                 * @return DescribeDomainDetailsSaasOutcome
                 */
                DescribeDomainDetailsSaasOutcome DescribeDomainDetailsSaas(const Model::DescribeDomainDetailsSaasRequest &request);
                void DescribeDomainDetailsSaasAsync(const Model::DescribeDomainDetailsSaasRequest& request, const DescribeDomainDetailsSaasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainDetailsSaasOutcomeCallable DescribeDomainDetailsSaasCallable(const Model::DescribeDomainDetailsSaasRequest& request);

                /**
                 *Obtain the result of adding domain operation
                 * @param req DescribeDomainVerifyResultRequest
                 * @return DescribeDomainVerifyResultOutcome
                 */
                DescribeDomainVerifyResultOutcome DescribeDomainVerifyResult(const Model::DescribeDomainVerifyResultRequest &request);
                void DescribeDomainVerifyResultAsync(const Model::DescribeDomainVerifyResultRequest& request, const DescribeDomainVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainVerifyResultOutcomeCallable DescribeDomainVerifyResultCallable(const Model::DescribeDomainVerifyResultRequest& request);

                /**
                 *Query detailed information of all user domains
                 * @param req DescribeDomainsRequest
                 * @return DescribeDomainsOutcome
                 */
                DescribeDomainsOutcome DescribeDomains(const Model::DescribeDomainsRequest &request);
                void DescribeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainsOutcomeCallable DescribeDomainsCallable(const Model::DescribeDomainsRequest& request);

                /**
                 *Obtain discovered domain name list API
                 * @param req DescribeFindDomainListRequest
                 * @return DescribeFindDomainListOutcome
                 */
                DescribeFindDomainListOutcome DescribeFindDomainList(const Model::DescribeFindDomainListRequest &request);
                void DescribeFindDomainListAsync(const Model::DescribeFindDomainListRequest& request, const DescribeFindDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFindDomainListOutcomeCallable DescribeFindDomainListCallable(const Model::DescribeFindDomainListRequest& request);

                /**
                 *Query various conditions of cluster analysis
                 * @param req DescribeHistogramRequest
                 * @return DescribeHistogramOutcome
                 */
                DescribeHistogramOutcome DescribeHistogram(const Model::DescribeHistogramRequest &request);
                void DescribeHistogramAsync(const Model::DescribeHistogramRequest& request, const DescribeHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHistogramOutcomeCallable DescribeHistogramCallable(const Model::DescribeHistogramRequest& request);

                /**
                 *Obtain protection domain details in CLB-WAF
                 * @param req DescribeHostRequest
                 * @return DescribeHostOutcome
                 */
                DescribeHostOutcome DescribeHost(const Model::DescribeHostRequest &request);
                void DescribeHostAsync(const Model::DescribeHostRequest& request, const DescribeHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostOutcomeCallable DescribeHostCallable(const Model::DescribeHostRequest& request);

                /**
                 *Firstly verify when adding a domain whether a package has been purchased, whether the limit of purchased package has not been reached, and whether the domain has already been added
                 * @param req DescribeHostLimitRequest
                 * @return DescribeHostLimitOutcome
                 */
                DescribeHostLimitOutcome DescribeHostLimit(const Model::DescribeHostLimitRequest &request);
                void DescribeHostLimitAsync(const Model::DescribeHostLimitRequest& request, const DescribeHostLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostLimitOutcomeCallable DescribeHostLimitCallable(const Model::DescribeHostLimitRequest& request);

                /**
                 *Obtain protection domain list in CLB-WAF
                 * @param req DescribeHostsRequest
                 * @return DescribeHostsOutcome
                 */
                DescribeHostsOutcome DescribeHosts(const Model::DescribeHostsRequest &request);
                void DescribeHostsAsync(const Model::DescribeHostsRequest& request, const DescribeHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostsOutcomeCallable DescribeHostsCallable(const Model::DescribeHostsRequest& request);

                /**
                 *Query detailed information of all user instances
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *WAF IP blocklist/allowlist query
                 * @param req DescribeIpAccessControlRequest
                 * @return DescribeIpAccessControlOutcome
                 */
                DescribeIpAccessControlOutcome DescribeIpAccessControl(const Model::DescribeIpAccessControlRequest &request);
                void DescribeIpAccessControlAsync(const Model::DescribeIpAccessControlRequest& request, const DescribeIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpAccessControlOutcomeCallable DescribeIpAccessControlCallable(const Model::DescribeIpAccessControlRequest& request);

                /**
                 *Query the switch status of each WAF basic security module, check if each module is enabled
                 * @param req DescribeModuleStatusRequest
                 * @return DescribeModuleStatusOutcome
                 */
                DescribeModuleStatusOutcome DescribeModuleStatus(const Model::DescribeModuleStatusRequest &request);
                void DescribeModuleStatusAsync(const Model::DescribeModuleStatusRequest& request, const DescribeModuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModuleStatusOutcomeCallable DescribeModuleStatusCallable(const Model::DescribeModuleStatusRequest& request);

                /**
                 *View protected object list
                 * @param req DescribeObjectsRequest
                 * @return DescribeObjectsOutcome
                 */
                DescribeObjectsOutcome DescribeObjects(const Model::DescribeObjectsRequest &request);
                void DescribeObjectsAsync(const Model::DescribeObjectsRequest& request, const DescribeObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeObjectsOutcomeCallable DescribeObjectsCallable(const Model::DescribeObjectsRequest& request);

                /**
                 *Query business and attack summary trends
                 * @param req DescribePeakPointsRequest
                 * @return DescribePeakPointsOutcome
                 */
                DescribePeakPointsOutcome DescribePeakPoints(const Model::DescribePeakPointsRequest &request);
                void DescribePeakPointsAsync(const Model::DescribePeakPointsRequest& request, const DescribePeakPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePeakPointsOutcomeCallable DescribePeakPointsCallable(const Model::DescribePeakPointsRequest& request);

                /**
                 *Obtain protection status and the effective instance ID
                 * @param req DescribePolicyStatusRequest
                 * @return DescribePolicyStatusOutcome
                 */
                DescribePolicyStatusOutcome DescribePolicyStatus(const Model::DescribePolicyStatusRequest &request);
                void DescribePolicyStatusAsync(const Model::DescribePolicyStatusRequest& request, const DescribePolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePolicyStatusOutcomeCallable DescribePolicyStatusCallable(const Model::DescribePolicyStatusRequest& request);

                /**
                 *Obtain the SaaS-type WAF protection port list
                 * @param req DescribePortsRequest
                 * @return DescribePortsOutcome
                 */
                DescribePortsOutcome DescribePorts(const Model::DescribePortsRequest &request);
                void DescribePortsAsync(const Model::DescribePortsRequest& request, const DescribePortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePortsOutcomeCallable DescribePortsCallable(const Model::DescribePortsRequest& request);

                /**
                 *Obtain specific specification limits for each module
                 * @param req DescribeRuleLimitRequest
                 * @return DescribeRuleLimitOutcome
                 */
                DescribeRuleLimitOutcome DescribeRuleLimit(const Model::DescribeRuleLimitRequest &request);
                void DescribeRuleLimitAsync(const Model::DescribeRuleLimitRequest& request, const DescribeRuleLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleLimitOutcomeCallable DescribeRuleLimitCallable(const Model::DescribeRuleLimitRequest& request);

                /**
                 *WAF session definition query API
                 * @param req DescribeSessionRequest
                 * @return DescribeSessionOutcome
                 */
                DescribeSessionOutcome DescribeSession(const Model::DescribeSessionRequest &request);
                void DescribeSessionAsync(const Model::DescribeSessionRequest& request, const DescribeSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSessionOutcomeCallable DescribeSessionCallable(const Model::DescribeSessionRequest& request);

                /**
                 *WAF Sparta - Obtain protection domain information
                 * @param req DescribeSpartaProtectionInfoRequest
                 * @return DescribeSpartaProtectionInfoOutcome
                 */
                DescribeSpartaProtectionInfoOutcome DescribeSpartaProtectionInfo(const Model::DescribeSpartaProtectionInfoRequest &request);
                void DescribeSpartaProtectionInfoAsync(const Model::DescribeSpartaProtectionInfoRequest& request, const DescribeSpartaProtectionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpartaProtectionInfoOutcomeCallable DescribeSpartaProtectionInfoCallable(const Model::DescribeSpartaProtectionInfoRequest& request);

                /**
                 *This API is used to query TLS versions supported by SaaS WAF.
                 * @param req DescribeTlsVersionRequest
                 * @return DescribeTlsVersionOutcome
                 */
                DescribeTlsVersionOutcome DescribeTlsVersion(const Model::DescribeTlsVersionRequest &request);
                void DescribeTlsVersionAsync(const Model::DescribeTlsVersionRequest& request, const DescribeTlsVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTlsVersionOutcomeCallable DescribeTlsVersionCallable(const Model::DescribeTlsVersionRequest& request);

                /**
                 *Query top 5 attack domains
                 * @param req DescribeTopAttackDomainRequest
                 * @return DescribeTopAttackDomainOutcome
                 */
                DescribeTopAttackDomainOutcome DescribeTopAttackDomain(const Model::DescribeTopAttackDomainRequest &request);
                void DescribeTopAttackDomainAsync(const Model::DescribeTopAttackDomainRequest& request, const DescribeTopAttackDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopAttackDomainOutcomeCallable DescribeTopAttackDomainCallable(const Model::DescribeTopAttackDomainRequest& request);

                /**
                 *During the addition and modification of Domain Configuration for CLB-type WAF, it is required to display the supported region list for CLB-type WAF (clb-waf) through DescribeUserClbWafRegions to obtain the currently available region list for the customer.
                 * @param req DescribeUserClbWafRegionsRequest
                 * @return DescribeUserClbWafRegionsOutcome
                 */
                DescribeUserClbWafRegionsOutcome DescribeUserClbWafRegions(const Model::DescribeUserClbWafRegionsRequest &request);
                void DescribeUserClbWafRegionsAsync(const Model::DescribeUserClbWafRegionsRequest& request, const DescribeUserClbWafRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserClbWafRegionsOutcomeCallable DescribeUserClbWafRegionsCallable(const Model::DescribeUserClbWafRegionsRequest& request);

                /**
                 *Query Domain Information for SaaS and CLB
                 * @param req DescribeUserDomainInfoRequest
                 * @return DescribeUserDomainInfoOutcome
                 */
                DescribeUserDomainInfoOutcome DescribeUserDomainInfo(const Model::DescribeUserDomainInfoRequest &request);
                void DescribeUserDomainInfoAsync(const Model::DescribeUserDomainInfoRequest& request, const DescribeUserDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserDomainInfoOutcomeCallable DescribeUserDomainInfoCallable(const Model::DescribeUserDomainInfoRequest& request);

                /**
                 *Obtain the user protection rule level
                 * @param req DescribeUserLevelRequest
                 * @return DescribeUserLevelOutcome
                 */
                DescribeUserLevelOutcome DescribeUserLevel(const Model::DescribeUserLevelRequest &request);
                void DescribeUserLevelAsync(const Model::DescribeUserLevelRequest& request, const DescribeUserLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUserLevelOutcomeCallable DescribeUserLevelCallable(const Model::DescribeUserLevelRequest& request);

                /**
                 *Query VIP information based on filter criteria
                 * @param req DescribeVipInfoRequest
                 * @return DescribeVipInfoOutcome
                 */
                DescribeVipInfoOutcome DescribeVipInfo(const Model::DescribeVipInfoRequest &request);
                void DescribeVipInfoAsync(const Model::DescribeVipInfoRequest& request, const DescribeVipInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVipInfoOutcomeCallable DescribeVipInfoCallable(const Model::DescribeVipInfoRequest& request);

                /**
                 *Obtain the webshell status of a domain
                 * @param req DescribeWebshellStatusRequest
                 * @return DescribeWebshellStatusOutcome
                 */
                DescribeWebshellStatusOutcome DescribeWebshellStatus(const Model::DescribeWebshellStatusRequest &request);
                void DescribeWebshellStatusAsync(const Model::DescribeWebshellStatusRequest& request, const DescribeWebshellStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeWebshellStatusOutcomeCallable DescribeWebshellStatusCallable(const Model::DescribeWebshellStatusRequest& request);

                /**
                 *Refresh a tamper-proof URL
                 * @param req FreshAntiFakeUrlRequest
                 * @return FreshAntiFakeUrlOutcome
                 */
                FreshAntiFakeUrlOutcome FreshAntiFakeUrl(const Model::FreshAntiFakeUrlRequest &request);
                void FreshAntiFakeUrlAsync(const Model::FreshAntiFakeUrlRequest& request, const FreshAntiFakeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FreshAntiFakeUrlOutcomeCallable FreshAntiFakeUrlCallable(const Model::FreshAntiFakeUrlRequest& request);

                /**
                 *Billing Resource Purchase, Renewal Order API
                 * @param req GenerateDealsAndPayNewRequest
                 * @return GenerateDealsAndPayNewOutcome
                 */
                GenerateDealsAndPayNewOutcome GenerateDealsAndPayNew(const Model::GenerateDealsAndPayNewRequest &request);
                void GenerateDealsAndPayNewAsync(const Model::GenerateDealsAndPayNewRequest& request, const GenerateDealsAndPayNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateDealsAndPayNewOutcomeCallable GenerateDealsAndPayNewCallable(const Model::GenerateDealsAndPayNewRequest& request);

                /**
                 *This API is used to generate a bar chart for the generation time of attack logs.
                 * @param req GetAttackHistogramRequest
                 * @return GetAttackHistogramOutcome
                 */
                GetAttackHistogramOutcome GetAttackHistogram(const Model::GetAttackHistogramRequest &request);
                void GetAttackHistogramAsync(const Model::GetAttackHistogramRequest& request, const GetAttackHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAttackHistogramOutcomeCallable GetAttackHistogramCallable(const Model::GetAttackHistogramRequest& request);

                /**
                 *Display total attack count by querying based on conditions
                 * @param req GetAttackTotalCountRequest
                 * @return GetAttackTotalCountOutcome
                 */
                GetAttackTotalCountOutcome GetAttackTotalCount(const Model::GetAttackTotalCountRequest &request);
                void GetAttackTotalCountAsync(const Model::GetAttackTotalCountRequest& request, const GetAttackTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAttackTotalCountOutcomeCallable GetAttackTotalCountCallable(const Model::GetAttackTotalCountRequest& request);

                /**
                 *Obtain the elastic QPS limit of package instances
                 * @param req GetInstanceQpsLimitRequest
                 * @return GetInstanceQpsLimitOutcome
                 */
                GetInstanceQpsLimitOutcome GetInstanceQpsLimit(const Model::GetInstanceQpsLimitRequest &request);
                void GetInstanceQpsLimitAsync(const Model::GetInstanceQpsLimitRequest& request, const GetInstanceQpsLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetInstanceQpsLimitOutcomeCallable GetInstanceQpsLimitCallable(const Model::GetInstanceQpsLimitRequest& request);

                /**
                 *This API is used to import IP allowlists/blocklists.
                 * @param req ImportIpAccessControlRequest
                 * @return ImportIpAccessControlOutcome
                 */
                ImportIpAccessControlOutcome ImportIpAccessControl(const Model::ImportIpAccessControlRequest &request);
                void ImportIpAccessControlAsync(const Model::ImportIpAccessControlRequest& request, const ImportIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportIpAccessControlOutcomeCallable ImportIpAccessControlCallable(const Model::ImportIpAccessControlRequest& request);

                /**
                 *Edit a tamper-proof URL
                 * @param req ModifyAntiFakeUrlRequest
                 * @return ModifyAntiFakeUrlOutcome
                 */
                ModifyAntiFakeUrlOutcome ModifyAntiFakeUrl(const Model::ModifyAntiFakeUrlRequest &request);
                void ModifyAntiFakeUrlAsync(const Model::ModifyAntiFakeUrlRequest& request, const ModifyAntiFakeUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAntiFakeUrlOutcomeCallable ModifyAntiFakeUrlCallable(const Model::ModifyAntiFakeUrlRequest& request);

                /**
                 *Toggle tamper-proof switch
                 * @param req ModifyAntiFakeUrlStatusRequest
                 * @return ModifyAntiFakeUrlStatusOutcome
                 */
                ModifyAntiFakeUrlStatusOutcome ModifyAntiFakeUrlStatus(const Model::ModifyAntiFakeUrlStatusRequest &request);
                void ModifyAntiFakeUrlStatusAsync(const Model::ModifyAntiFakeUrlStatusRequest& request, const ModifyAntiFakeUrlStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAntiFakeUrlStatusOutcomeCallable ModifyAntiFakeUrlStatusCallable(const Model::ModifyAntiFakeUrlStatusRequest& request);

                /**
                 *Information leakage prevention toggle rule switch
                 * @param req ModifyAntiInfoLeakRuleStatusRequest
                 * @return ModifyAntiInfoLeakRuleStatusOutcome
                 */
                ModifyAntiInfoLeakRuleStatusOutcome ModifyAntiInfoLeakRuleStatus(const Model::ModifyAntiInfoLeakRuleStatusRequest &request);
                void ModifyAntiInfoLeakRuleStatusAsync(const Model::ModifyAntiInfoLeakRuleStatusRequest& request, const ModifyAntiInfoLeakRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAntiInfoLeakRuleStatusOutcomeCallable ModifyAntiInfoLeakRuleStatusCallable(const Model::ModifyAntiInfoLeakRuleStatusRequest& request);

                /**
                 *Edit an information leakage prevention rule
                 * @param req ModifyAntiInfoLeakRulesRequest
                 * @return ModifyAntiInfoLeakRulesOutcome
                 */
                ModifyAntiInfoLeakRulesOutcome ModifyAntiInfoLeakRules(const Model::ModifyAntiInfoLeakRulesRequest &request);
                void ModifyAntiInfoLeakRulesAsync(const Model::ModifyAntiInfoLeakRulesRequest& request, const ModifyAntiInfoLeakRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAntiInfoLeakRulesOutcomeCallable ModifyAntiInfoLeakRulesCallable(const Model::ModifyAntiInfoLeakRulesRequest& request);

                /**
                 *API analysis page switch
                 * @param req ModifyApiAnalyzeStatusRequest
                 * @return ModifyApiAnalyzeStatusOutcome
                 */
                ModifyApiAnalyzeStatusOutcome ModifyApiAnalyzeStatus(const Model::ModifyApiAnalyzeStatusRequest &request);
                void ModifyApiAnalyzeStatusAsync(const Model::ModifyApiAnalyzeStatusRequest& request, const ModifyApiAnalyzeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApiAnalyzeStatusOutcomeCallable ModifyApiAnalyzeStatusCallable(const Model::ModifyApiAnalyzeStatusRequest& request);

                /**
                 *Bot_V2 bot master switch update
                 * @param req ModifyBotStatusRequest
                 * @return ModifyBotStatusOutcome
                 */
                ModifyBotStatusOutcome ModifyBotStatus(const Model::ModifyBotStatusRequest &request);
                void ModifyBotStatusAsync(const Model::ModifyBotStatusRequest& request, const ModifyBotStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBotStatusOutcomeCallable ModifyBotStatusCallable(const Model::ModifyBotStatusRequest& request);

                /**
                 *This API is used to edit a custom rule.
                 * @param req ModifyCustomRuleRequest
                 * @return ModifyCustomRuleOutcome
                 */
                ModifyCustomRuleOutcome ModifyCustomRule(const Model::ModifyCustomRuleRequest &request);
                void ModifyCustomRuleAsync(const Model::ModifyCustomRuleRequest& request, const ModifyCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomRuleOutcomeCallable ModifyCustomRuleCallable(const Model::ModifyCustomRuleRequest& request);

                /**
                 *Enable or disable access control (from custom policy)
                 * @param req ModifyCustomRuleStatusRequest
                 * @return ModifyCustomRuleStatusOutcome
                 */
                ModifyCustomRuleStatusOutcome ModifyCustomRuleStatus(const Model::ModifyCustomRuleStatusRequest &request);
                void ModifyCustomRuleStatusAsync(const Model::ModifyCustomRuleStatusRequest& request, const ModifyCustomRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomRuleStatusOutcomeCallable ModifyCustomRuleStatusCallable(const Model::ModifyCustomRuleStatusRequest& request);

                /**
                 *This API is used to edit a precise allowlist.
                 * @param req ModifyCustomWhiteRuleRequest
                 * @return ModifyCustomWhiteRuleOutcome
                 */
                ModifyCustomWhiteRuleOutcome ModifyCustomWhiteRule(const Model::ModifyCustomWhiteRuleRequest &request);
                void ModifyCustomWhiteRuleAsync(const Model::ModifyCustomWhiteRuleRequest& request, const ModifyCustomWhiteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomWhiteRuleOutcomeCallable ModifyCustomWhiteRuleCallable(const Model::ModifyCustomWhiteRuleRequest& request);

                /**
                 *Enable or disable a precision allowlist
                 * @param req ModifyCustomWhiteRuleStatusRequest
                 * @return ModifyCustomWhiteRuleStatusOutcome
                 */
                ModifyCustomWhiteRuleStatusOutcome ModifyCustomWhiteRuleStatus(const Model::ModifyCustomWhiteRuleStatusRequest &request);
                void ModifyCustomWhiteRuleStatusAsync(const Model::ModifyCustomWhiteRuleStatusRequest& request, const ModifyCustomWhiteRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomWhiteRuleStatusOutcomeCallable ModifyCustomWhiteRuleStatusCallable(const Model::ModifyCustomWhiteRuleStatusRequest& request);

                /**
                 *Toggle the IPv6 switch
                 * @param req ModifyDomainIpv6StatusRequest
                 * @return ModifyDomainIpv6StatusOutcome
                 */
                ModifyDomainIpv6StatusOutcome ModifyDomainIpv6Status(const Model::ModifyDomainIpv6StatusRequest &request);
                void ModifyDomainIpv6StatusAsync(const Model::ModifyDomainIpv6StatusRequest& request, const ModifyDomainIpv6StatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainIpv6StatusOutcomeCallable ModifyDomainIpv6StatusCallable(const Model::ModifyDomainIpv6StatusRequest& request);

                /**
                 *This API is used to modify the domain shipping status.
                 * @param req ModifyDomainPostActionRequest
                 * @return ModifyDomainPostActionOutcome
                 */
                ModifyDomainPostActionOutcome ModifyDomainPostAction(const Model::ModifyDomainPostActionRequest &request);
                void ModifyDomainPostActionAsync(const Model::ModifyDomainPostActionRequest& request, const ModifyDomainPostActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainPostActionOutcomeCallable ModifyDomainPostActionCallable(const Model::ModifyDomainPostActionRequest& request);

                /**
                 *Enable or disable access log for domain list
                 * @param req ModifyDomainsCLSStatusRequest
                 * @return ModifyDomainsCLSStatusOutcome
                 */
                ModifyDomainsCLSStatusOutcome ModifyDomainsCLSStatus(const Model::ModifyDomainsCLSStatusRequest &request);
                void ModifyDomainsCLSStatusAsync(const Model::ModifyDomainsCLSStatusRequest& request, const ModifyDomainsCLSStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainsCLSStatusOutcomeCallable ModifyDomainsCLSStatusCallable(const Model::ModifyDomainsCLSStatusRequest& request);

                /**
                 *This API is used to edit the configuration of domain names protected by CLB WAF.
                 * @param req ModifyHostRequest
                 * @return ModifyHostOutcome
                 */
                ModifyHostOutcome ModifyHost(const Model::ModifyHostRequest &request);
                void ModifyHostAsync(const Model::ModifyHostRequest& request, const ModifyHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostOutcomeCallable ModifyHostCallable(const Model::ModifyHostRequest& request);

                /**
                 *This API is used to set the traffic mode for domain names protected by CLB WAF. The mode can be mirror mode or cleaning mode.
                 * @param req ModifyHostFlowModeRequest
                 * @return ModifyHostFlowModeOutcome
                 */
                ModifyHostFlowModeOutcome ModifyHostFlowMode(const Model::ModifyHostFlowModeRequest &request);
                void ModifyHostFlowModeAsync(const Model::ModifyHostFlowModeRequest& request, const ModifyHostFlowModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostFlowModeOutcomeCallable ModifyHostFlowModeCallable(const Model::ModifyHostFlowModeRequest& request);

                /**
                 *Set CLB WAF protection domain status
                 * @param req ModifyHostModeRequest
                 * @return ModifyHostModeOutcome
                 */
                ModifyHostModeOutcome ModifyHostMode(const Model::ModifyHostModeRequest &request);
                void ModifyHostModeAsync(const Model::ModifyHostModeRequest& request, const ModifyHostModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostModeOutcomeCallable ModifyHostModeCallable(const Model::ModifyHostModeRequest& request);

                /**
                 *This API is used to enable or disable CLB WAF for a protected domain name.
Batch operation is supported.
                 * @param req ModifyHostStatusRequest
                 * @return ModifyHostStatusOutcome
                 */
                ModifyHostStatusOutcome ModifyHostStatus(const Model::ModifyHostStatusRequest &request);
                void ModifyHostStatusAsync(const Model::ModifyHostStatusRequest& request, const ModifyHostStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostStatusOutcomeCallable ModifyHostStatusCallable(const Model::ModifyHostStatusRequest& request);

                /**
                 *Modify the QPS elastic billing switch for an instance
                 * @param req ModifyInstanceElasticModeRequest
                 * @return ModifyInstanceElasticModeOutcome
                 */
                ModifyInstanceElasticModeOutcome ModifyInstanceElasticMode(const Model::ModifyInstanceElasticModeRequest &request);
                void ModifyInstanceElasticModeAsync(const Model::ModifyInstanceElasticModeRequest& request, const ModifyInstanceElasticModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceElasticModeOutcomeCallable ModifyInstanceElasticModeCallable(const Model::ModifyInstanceElasticModeRequest& request);

                /**
                 *Modify instance name
                 * @param req ModifyInstanceNameRequest
                 * @return ModifyInstanceNameOutcome
                 */
                ModifyInstanceNameOutcome ModifyInstanceName(const Model::ModifyInstanceNameRequest &request);
                void ModifyInstanceNameAsync(const Model::ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceNameOutcomeCallable ModifyInstanceNameCallable(const Model::ModifyInstanceNameRequest& request);

                /**
                 *Set elastic QPS limit for package instances
                 * @param req ModifyInstanceQpsLimitRequest
                 * @return ModifyInstanceQpsLimitOutcome
                 */
                ModifyInstanceQpsLimitOutcome ModifyInstanceQpsLimit(const Model::ModifyInstanceQpsLimitRequest &request);
                void ModifyInstanceQpsLimitAsync(const Model::ModifyInstanceQpsLimitRequest& request, const ModifyInstanceQpsLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceQpsLimitOutcomeCallable ModifyInstanceQpsLimitCallable(const Model::ModifyInstanceQpsLimitRequest& request);

                /**
                 *Enable or disable auto-renewal for instance
                 * @param req ModifyInstanceRenewFlagRequest
                 * @return ModifyInstanceRenewFlagOutcome
                 */
                ModifyInstanceRenewFlagOutcome ModifyInstanceRenewFlag(const Model::ModifyInstanceRenewFlagRequest &request);
                void ModifyInstanceRenewFlagAsync(const Model::ModifyInstanceRenewFlagRequest& request, const ModifyInstanceRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceRenewFlagOutcomeCallable ModifyInstanceRenewFlagCallable(const Model::ModifyInstanceRenewFlagRequest& request);

                /**
                 *This API is used to edit WAF IP allowlists/blocklists.
                 * @param req ModifyIpAccessControlRequest
                 * @return ModifyIpAccessControlOutcome
                 */
                ModifyIpAccessControlOutcome ModifyIpAccessControl(const Model::ModifyIpAccessControlRequest &request);
                void ModifyIpAccessControlAsync(const Model::ModifyIpAccessControlRequest& request, const ModifyIpAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIpAccessControlOutcomeCallable ModifyIpAccessControlCallable(const Model::ModifyIpAccessControlRequest& request);

                /**
                 *Set the switch for the basic security module under a certain domain
                 * @param req ModifyModuleStatusRequest
                 * @return ModifyModuleStatusOutcome
                 */
                ModifyModuleStatusOutcome ModifyModuleStatus(const Model::ModifyModuleStatusRequest &request);
                void ModifyModuleStatusAsync(const Model::ModifyModuleStatusRequest& request, const ModifyModuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleStatusOutcomeCallable ModifyModuleStatusCallable(const Model::ModifyModuleStatusRequest& request);

                /**
                 *Modify protection object
                 * @param req ModifyObjectRequest
                 * @return ModifyObjectOutcome
                 */
                ModifyObjectOutcome ModifyObject(const Model::ModifyObjectRequest &request);
                void ModifyObjectAsync(const Model::ModifyObjectRequest& request, const ModifyObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyObjectOutcomeCallable ModifyObjectCallable(const Model::ModifyObjectRequest& request);

                /**
                 *This API is used to obtain the enabling status of the basic security protection module of WAF.
                 * @param req ModifyProtectionStatusRequest
                 * @return ModifyProtectionStatusOutcome
                 */
                ModifyProtectionStatusOutcome ModifyProtectionStatus(const Model::ModifyProtectionStatusRequest &request);
                void ModifyProtectionStatusAsync(const Model::ModifyProtectionStatusRequest& request, const ModifyProtectionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProtectionStatusOutcomeCallable ModifyProtectionStatusCallable(const Model::ModifyProtectionStatusRequest& request);

                /**
                 *This API is used to edit the configuration of domain names protected by SaaS WAF.
                 * @param req ModifySpartaProtectionRequest
                 * @return ModifySpartaProtectionOutcome
                 */
                ModifySpartaProtectionOutcome ModifySpartaProtection(const Model::ModifySpartaProtectionRequest &request);
                void ModifySpartaProtectionAsync(const Model::ModifySpartaProtectionRequest& request, const ModifySpartaProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySpartaProtectionOutcomeCallable ModifySpartaProtectionCallable(const Model::ModifySpartaProtectionRequest& request);

                /**
                 *Set WAF protection status
                 * @param req ModifySpartaProtectionModeRequest
                 * @return ModifySpartaProtectionModeOutcome
                 */
                ModifySpartaProtectionModeOutcome ModifySpartaProtectionMode(const Model::ModifySpartaProtectionModeRequest &request);
                void ModifySpartaProtectionModeAsync(const Model::ModifySpartaProtectionModeRequest& request, const ModifySpartaProtectionModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySpartaProtectionModeOutcomeCallable ModifySpartaProtectionModeCallable(const Model::ModifySpartaProtectionModeRequest& request);

                /**
                 *Modify the user protection rule level
                 * @param req ModifyUserLevelRequest
                 * @return ModifyUserLevelOutcome
                 */
                ModifyUserLevelOutcome ModifyUserLevel(const Model::ModifyUserLevelRequest &request);
                void ModifyUserLevelAsync(const Model::ModifyUserLevelRequest& request, const ModifyUserLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserLevelOutcomeCallable ModifyUserLevelCallable(const Model::ModifyUserLevelRequest& request);

                /**
                 *Modify user protection rules, turn on/off specific rules
                 * @param req ModifyUserSignatureRuleRequest
                 * @return ModifyUserSignatureRuleOutcome
                 */
                ModifyUserSignatureRuleOutcome ModifyUserSignatureRule(const Model::ModifyUserSignatureRuleRequest &request);
                void ModifyUserSignatureRuleAsync(const Model::ModifyUserSignatureRuleRequest& request, const ModifyUserSignatureRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUserSignatureRuleOutcomeCallable ModifyUserSignatureRuleCallable(const Model::ModifyUserSignatureRuleRequest& request);

                /**
                 *Set the Webshell status of a domain.
                 * @param req ModifyWebshellStatusRequest
                 * @return ModifyWebshellStatusOutcome
                 */
                ModifyWebshellStatusOutcome ModifyWebshellStatus(const Model::ModifyWebshellStatusRequest &request);
                void ModifyWebshellStatusAsync(const Model::ModifyWebshellStatusRequest& request, const ModifyWebshellStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyWebshellStatusOutcomeCallable ModifyWebshellStatusCallable(const Model::ModifyWebshellStatusRequest& request);

                /**
                 *Refresh integration check results. The backend will generate integration check tasks
                 * @param req RefreshAccessCheckResultRequest
                 * @return RefreshAccessCheckResultOutcome
                 */
                RefreshAccessCheckResultOutcome RefreshAccessCheckResult(const Model::RefreshAccessCheckResultRequest &request);
                void RefreshAccessCheckResultAsync(const Model::RefreshAccessCheckResultRequest& request, const RefreshAccessCheckResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefreshAccessCheckResultOutcomeCallable RefreshAccessCheckResultCallable(const Model::RefreshAccessCheckResultRequest& request);

                /**
                 *The new version of the CLS API has parameter changes, with query changed to query_string to support Lucene syntax for API search queries.
                 * @param req SearchAttackLogRequest
                 * @return SearchAttackLogOutcome
                 */
                SearchAttackLogOutcome SearchAttackLog(const Model::SearchAttackLogRequest &request);
                void SearchAttackLogAsync(const Model::SearchAttackLogRequest& request, const SearchAttackLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchAttackLogOutcomeCallable SearchAttackLogCallable(const Model::SearchAttackLogRequest& request);

                /**
                 *Toggle elasticity switch
                 * @param req SwitchElasticModeRequest
                 * @return SwitchElasticModeOutcome
                 */
                SwitchElasticModeOutcome SwitchElasticMode(const Model::SwitchElasticModeRequest &request);
                void SwitchElasticModeAsync(const Model::SwitchElasticModeRequest& request, const SwitchElasticModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchElasticModeOutcomeCallable SwitchElasticModeCallable(const Model::SwitchElasticModeRequest& request);

                /**
                 *WAF CC V2 upsert API
                 * @param req UpsertCCRuleRequest
                 * @return UpsertCCRuleOutcome
                 */
                UpsertCCRuleOutcome UpsertCCRule(const Model::UpsertCCRuleRequest &request);
                void UpsertCCRuleAsync(const Model::UpsertCCRuleRequest& request, const UpsertCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpsertCCRuleOutcomeCallable UpsertCCRuleCallable(const Model::UpsertCCRuleRequest& request);

                /**
                 *WAF session definition upsert API
                 * @param req UpsertSessionRequest
                 * @return UpsertSessionOutcome
                 */
                UpsertSessionOutcome UpsertSession(const Model::UpsertSessionRequest &request);
                void UpsertSessionAsync(const Model::UpsertSessionRequest& request, const UpsertSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpsertSessionOutcomeCallable UpsertSessionCallable(const Model::UpsertSessionRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_WAFCLIENT_H_
