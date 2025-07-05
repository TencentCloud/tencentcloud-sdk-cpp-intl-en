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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_ANTIDDOSCLIENT_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_ANTIDDOSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/antiddos/v20200309/model/AssociateDDoSEipAddressRequest.h>
#include <tencentcloud/antiddos/v20200309/model/AssociateDDoSEipAddressResponse.h>
#include <tencentcloud/antiddos/v20200309/model/AssociateDDoSEipLoadBalancerRequest.h>
#include <tencentcloud/antiddos/v20200309/model/AssociateDDoSEipLoadBalancerResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateBoundIPRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateBoundIPResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCCPrecisionPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCCPrecisionPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCCReqLimitPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCCReqLimitPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCcBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCcBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCcGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateCcGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSAIRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSAIResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSSpeedLimitConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDDoSSpeedLimitConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDefaultAlarmThresholdRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateDefaultAlarmThresholdResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateIPAlarmThresholdConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateIPAlarmThresholdConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateL7RuleCertsRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateL7RuleCertsResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateNewL7RulesRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateNewL7RulesResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreatePacketFilterConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreatePacketFilterConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateProtocolBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateProtocolBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateSchedulingDomainRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateSchedulingDomainResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateWaterPrintConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateWaterPrintConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/CreateWaterPrintKeyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/CreateWaterPrintKeyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCCLevelPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCCLevelPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCCPrecisionPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCCPrecisionPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCCThresholdPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCCThresholdPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCcBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCcBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCcGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteCcGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteDDoSGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteDDoSGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteDDoSSpeedLimitConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteDDoSSpeedLimitConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeletePacketFilterConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeletePacketFilterConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteWaterPrintConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteWaterPrintConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteWaterPrintKeyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DeleteWaterPrintKeyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBasicDeviceStatusRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBasicDeviceStatusResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBgpBizTrendRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBgpBizTrendResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBizHttpStatusRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBizHttpStatusResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBizTrendRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeBizTrendResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCLevelListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCLevelListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCLevelPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCLevelPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCPrecisionPlyListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCPrecisionPlyListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCThresholdListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCThresholdListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCTrendRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCCTrendResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCcBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCcBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCcGeoIPBlockConfigListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeCcGeoIPBlockConfigListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeDDoSTrendRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeDDoSTrendResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeDefaultAlarmThresholdRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeDefaultAlarmThresholdResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeIpBlockListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeIpBlockListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeL7RulesBySSLCertIdRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeL7RulesBySSLCertIdResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPIPInstancesRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPIPInstancesResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPInstancesRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBGPInstancesResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSAIRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSAIResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSSpeedLimitConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListDDoSSpeedLimitConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListIPAlarmConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListIPAlarmConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListListenerRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListListenerResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListPacketFilterConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListPacketFilterConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListProtocolBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListProtocolBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListSchedulingDomainRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListSchedulingDomainResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListWaterPrintConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeListWaterPrintConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeNewL7RulesRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeNewL7RulesResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeNewL7RulesErrHealthRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeNewL7RulesErrHealthResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeOverviewDDoSEventListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribeOverviewDDoSEventListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DescribePendingRiskInfoRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DescribePendingRiskInfoResponse.h>
#include <tencentcloud/antiddos/v20200309/model/DisassociateDDoSEipAddressRequest.h>
#include <tencentcloud/antiddos/v20200309/model/DisassociateDDoSEipAddressResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyCCPrecisionPolicyRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyCCPrecisionPolicyResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyCcBlackWhiteIpListRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyCcBlackWhiteIpListResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSGeoIPBlockConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSGeoIPBlockConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSSpeedLimitConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDDoSSpeedLimitConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDomainUsrNameRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyDomainUsrNameResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyNewDomainRulesRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyNewDomainRulesResponse.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyPacketFilterConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/ModifyPacketFilterConfigResponse.h>
#include <tencentcloud/antiddos/v20200309/model/SwitchWaterPrintConfigRequest.h>
#include <tencentcloud/antiddos/v20200309/model/SwitchWaterPrintConfigResponse.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            class AntiddosClient : public AbstractClient
            {
            public:
                AntiddosClient(const Credential &credential, const std::string &region);
                AntiddosClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AssociateDDoSEipAddressResponse> AssociateDDoSEipAddressOutcome;
                typedef std::future<AssociateDDoSEipAddressOutcome> AssociateDDoSEipAddressOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::AssociateDDoSEipAddressRequest&, AssociateDDoSEipAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateDDoSEipAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateDDoSEipLoadBalancerResponse> AssociateDDoSEipLoadBalancerOutcome;
                typedef std::future<AssociateDDoSEipLoadBalancerOutcome> AssociateDDoSEipLoadBalancerOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::AssociateDDoSEipLoadBalancerRequest&, AssociateDDoSEipLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateDDoSEipLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBlackWhiteIpListResponse> CreateBlackWhiteIpListOutcome;
                typedef std::future<CreateBlackWhiteIpListOutcome> CreateBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateBlackWhiteIpListRequest&, CreateBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBoundIPResponse> CreateBoundIPOutcome;
                typedef std::future<CreateBoundIPOutcome> CreateBoundIPOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateBoundIPRequest&, CreateBoundIPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBoundIPAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCCPrecisionPolicyResponse> CreateCCPrecisionPolicyOutcome;
                typedef std::future<CreateCCPrecisionPolicyOutcome> CreateCCPrecisionPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateCCPrecisionPolicyRequest&, CreateCCPrecisionPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCCPrecisionPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCCReqLimitPolicyResponse> CreateCCReqLimitPolicyOutcome;
                typedef std::future<CreateCCReqLimitPolicyOutcome> CreateCCReqLimitPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateCCReqLimitPolicyRequest&, CreateCCReqLimitPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCCReqLimitPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCcBlackWhiteIpListResponse> CreateCcBlackWhiteIpListOutcome;
                typedef std::future<CreateCcBlackWhiteIpListOutcome> CreateCcBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateCcBlackWhiteIpListRequest&, CreateCcBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCcBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCcGeoIPBlockConfigResponse> CreateCcGeoIPBlockConfigOutcome;
                typedef std::future<CreateCcGeoIPBlockConfigOutcome> CreateCcGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateCcGeoIPBlockConfigRequest&, CreateCcGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCcGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDDoSAIResponse> CreateDDoSAIOutcome;
                typedef std::future<CreateDDoSAIOutcome> CreateDDoSAIOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateDDoSAIRequest&, CreateDDoSAIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDDoSAIAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDDoSGeoIPBlockConfigResponse> CreateDDoSGeoIPBlockConfigOutcome;
                typedef std::future<CreateDDoSGeoIPBlockConfigOutcome> CreateDDoSGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateDDoSGeoIPBlockConfigRequest&, CreateDDoSGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDDoSGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDDoSSpeedLimitConfigResponse> CreateDDoSSpeedLimitConfigOutcome;
                typedef std::future<CreateDDoSSpeedLimitConfigOutcome> CreateDDoSSpeedLimitConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateDDoSSpeedLimitConfigRequest&, CreateDDoSSpeedLimitConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDDoSSpeedLimitConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDefaultAlarmThresholdResponse> CreateDefaultAlarmThresholdOutcome;
                typedef std::future<CreateDefaultAlarmThresholdOutcome> CreateDefaultAlarmThresholdOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateDefaultAlarmThresholdRequest&, CreateDefaultAlarmThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDefaultAlarmThresholdAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIPAlarmThresholdConfigResponse> CreateIPAlarmThresholdConfigOutcome;
                typedef std::future<CreateIPAlarmThresholdConfigOutcome> CreateIPAlarmThresholdConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateIPAlarmThresholdConfigRequest&, CreateIPAlarmThresholdConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIPAlarmThresholdConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL7RuleCertsResponse> CreateL7RuleCertsOutcome;
                typedef std::future<CreateL7RuleCertsOutcome> CreateL7RuleCertsOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateL7RuleCertsRequest&, CreateL7RuleCertsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL7RuleCertsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNewL7RulesResponse> CreateNewL7RulesOutcome;
                typedef std::future<CreateNewL7RulesOutcome> CreateNewL7RulesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateNewL7RulesRequest&, CreateNewL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNewL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePacketFilterConfigResponse> CreatePacketFilterConfigOutcome;
                typedef std::future<CreatePacketFilterConfigOutcome> CreatePacketFilterConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreatePacketFilterConfigRequest&, CreatePacketFilterConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePacketFilterConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProtocolBlockConfigResponse> CreateProtocolBlockConfigOutcome;
                typedef std::future<CreateProtocolBlockConfigOutcome> CreateProtocolBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateProtocolBlockConfigRequest&, CreateProtocolBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProtocolBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSchedulingDomainResponse> CreateSchedulingDomainOutcome;
                typedef std::future<CreateSchedulingDomainOutcome> CreateSchedulingDomainOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateSchedulingDomainRequest&, CreateSchedulingDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchedulingDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWaterPrintConfigResponse> CreateWaterPrintConfigOutcome;
                typedef std::future<CreateWaterPrintConfigOutcome> CreateWaterPrintConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateWaterPrintConfigRequest&, CreateWaterPrintConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWaterPrintConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateWaterPrintKeyResponse> CreateWaterPrintKeyOutcome;
                typedef std::future<CreateWaterPrintKeyOutcome> CreateWaterPrintKeyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::CreateWaterPrintKeyRequest&, CreateWaterPrintKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateWaterPrintKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCCLevelPolicyResponse> DeleteCCLevelPolicyOutcome;
                typedef std::future<DeleteCCLevelPolicyOutcome> DeleteCCLevelPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteCCLevelPolicyRequest&, DeleteCCLevelPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCCLevelPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCCPrecisionPolicyResponse> DeleteCCPrecisionPolicyOutcome;
                typedef std::future<DeleteCCPrecisionPolicyOutcome> DeleteCCPrecisionPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteCCPrecisionPolicyRequest&, DeleteCCPrecisionPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCCPrecisionPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCCThresholdPolicyResponse> DeleteCCThresholdPolicyOutcome;
                typedef std::future<DeleteCCThresholdPolicyOutcome> DeleteCCThresholdPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteCCThresholdPolicyRequest&, DeleteCCThresholdPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCCThresholdPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCcBlackWhiteIpListResponse> DeleteCcBlackWhiteIpListOutcome;
                typedef std::future<DeleteCcBlackWhiteIpListOutcome> DeleteCcBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteCcBlackWhiteIpListRequest&, DeleteCcBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCcBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCcGeoIPBlockConfigResponse> DeleteCcGeoIPBlockConfigOutcome;
                typedef std::future<DeleteCcGeoIPBlockConfigOutcome> DeleteCcGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteCcGeoIPBlockConfigRequest&, DeleteCcGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCcGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDDoSGeoIPBlockConfigResponse> DeleteDDoSGeoIPBlockConfigOutcome;
                typedef std::future<DeleteDDoSGeoIPBlockConfigOutcome> DeleteDDoSGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteDDoSGeoIPBlockConfigRequest&, DeleteDDoSGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDDoSGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDDoSSpeedLimitConfigResponse> DeleteDDoSSpeedLimitConfigOutcome;
                typedef std::future<DeleteDDoSSpeedLimitConfigOutcome> DeleteDDoSSpeedLimitConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteDDoSSpeedLimitConfigRequest&, DeleteDDoSSpeedLimitConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDDoSSpeedLimitConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePacketFilterConfigResponse> DeletePacketFilterConfigOutcome;
                typedef std::future<DeletePacketFilterConfigOutcome> DeletePacketFilterConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeletePacketFilterConfigRequest&, DeletePacketFilterConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePacketFilterConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWaterPrintConfigResponse> DeleteWaterPrintConfigOutcome;
                typedef std::future<DeleteWaterPrintConfigOutcome> DeleteWaterPrintConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteWaterPrintConfigRequest&, DeleteWaterPrintConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWaterPrintConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteWaterPrintKeyResponse> DeleteWaterPrintKeyOutcome;
                typedef std::future<DeleteWaterPrintKeyOutcome> DeleteWaterPrintKeyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DeleteWaterPrintKeyRequest&, DeleteWaterPrintKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWaterPrintKeyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBasicDeviceStatusResponse> DescribeBasicDeviceStatusOutcome;
                typedef std::future<DescribeBasicDeviceStatusOutcome> DescribeBasicDeviceStatusOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeBasicDeviceStatusRequest&, DescribeBasicDeviceStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBasicDeviceStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBgpBizTrendResponse> DescribeBgpBizTrendOutcome;
                typedef std::future<DescribeBgpBizTrendOutcome> DescribeBgpBizTrendOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeBgpBizTrendRequest&, DescribeBgpBizTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBgpBizTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBizHttpStatusResponse> DescribeBizHttpStatusOutcome;
                typedef std::future<DescribeBizHttpStatusOutcome> DescribeBizHttpStatusOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeBizHttpStatusRequest&, DescribeBizHttpStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBizHttpStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBizTrendResponse> DescribeBizTrendOutcome;
                typedef std::future<DescribeBizTrendOutcome> DescribeBizTrendOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeBizTrendRequest&, DescribeBizTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBizTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCLevelListResponse> DescribeCCLevelListOutcome;
                typedef std::future<DescribeCCLevelListOutcome> DescribeCCLevelListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCCLevelListRequest&, DescribeCCLevelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCLevelListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCLevelPolicyResponse> DescribeCCLevelPolicyOutcome;
                typedef std::future<DescribeCCLevelPolicyOutcome> DescribeCCLevelPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCCLevelPolicyRequest&, DescribeCCLevelPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCLevelPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCPrecisionPlyListResponse> DescribeCCPrecisionPlyListOutcome;
                typedef std::future<DescribeCCPrecisionPlyListOutcome> DescribeCCPrecisionPlyListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCCPrecisionPlyListRequest&, DescribeCCPrecisionPlyListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCPrecisionPlyListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCThresholdListResponse> DescribeCCThresholdListOutcome;
                typedef std::future<DescribeCCThresholdListOutcome> DescribeCCThresholdListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCCThresholdListRequest&, DescribeCCThresholdListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCThresholdListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCCTrendResponse> DescribeCCTrendOutcome;
                typedef std::future<DescribeCCTrendOutcome> DescribeCCTrendOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCCTrendRequest&, DescribeCCTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCCTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcBlackWhiteIpListResponse> DescribeCcBlackWhiteIpListOutcome;
                typedef std::future<DescribeCcBlackWhiteIpListOutcome> DescribeCcBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCcBlackWhiteIpListRequest&, DescribeCcBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcGeoIPBlockConfigListResponse> DescribeCcGeoIPBlockConfigListOutcome;
                typedef std::future<DescribeCcGeoIPBlockConfigListOutcome> DescribeCcGeoIPBlockConfigListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeCcGeoIPBlockConfigListRequest&, DescribeCcGeoIPBlockConfigListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcGeoIPBlockConfigListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSTrendResponse> DescribeDDoSTrendOutcome;
                typedef std::future<DescribeDDoSTrendOutcome> DescribeDDoSTrendOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeDDoSTrendRequest&, DescribeDDoSTrendOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSTrendAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultAlarmThresholdResponse> DescribeDefaultAlarmThresholdOutcome;
                typedef std::future<DescribeDefaultAlarmThresholdOutcome> DescribeDefaultAlarmThresholdOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeDefaultAlarmThresholdRequest&, DescribeDefaultAlarmThresholdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultAlarmThresholdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpBlockListResponse> DescribeIpBlockListOutcome;
                typedef std::future<DescribeIpBlockListOutcome> DescribeIpBlockListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeIpBlockListRequest&, DescribeIpBlockListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpBlockListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL7RulesBySSLCertIdResponse> DescribeL7RulesBySSLCertIdOutcome;
                typedef std::future<DescribeL7RulesBySSLCertIdOutcome> DescribeL7RulesBySSLCertIdOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeL7RulesBySSLCertIdRequest&, DescribeL7RulesBySSLCertIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL7RulesBySSLCertIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListBGPIPInstancesResponse> DescribeListBGPIPInstancesOutcome;
                typedef std::future<DescribeListBGPIPInstancesOutcome> DescribeListBGPIPInstancesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListBGPIPInstancesRequest&, DescribeListBGPIPInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListBGPIPInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListBGPInstancesResponse> DescribeListBGPInstancesOutcome;
                typedef std::future<DescribeListBGPInstancesOutcome> DescribeListBGPInstancesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListBGPInstancesRequest&, DescribeListBGPInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListBGPInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListBlackWhiteIpListResponse> DescribeListBlackWhiteIpListOutcome;
                typedef std::future<DescribeListBlackWhiteIpListOutcome> DescribeListBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListBlackWhiteIpListRequest&, DescribeListBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListDDoSAIResponse> DescribeListDDoSAIOutcome;
                typedef std::future<DescribeListDDoSAIOutcome> DescribeListDDoSAIOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListDDoSAIRequest&, DescribeListDDoSAIOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListDDoSAIAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListDDoSGeoIPBlockConfigResponse> DescribeListDDoSGeoIPBlockConfigOutcome;
                typedef std::future<DescribeListDDoSGeoIPBlockConfigOutcome> DescribeListDDoSGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListDDoSGeoIPBlockConfigRequest&, DescribeListDDoSGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListDDoSGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListDDoSSpeedLimitConfigResponse> DescribeListDDoSSpeedLimitConfigOutcome;
                typedef std::future<DescribeListDDoSSpeedLimitConfigOutcome> DescribeListDDoSSpeedLimitConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListDDoSSpeedLimitConfigRequest&, DescribeListDDoSSpeedLimitConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListDDoSSpeedLimitConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListIPAlarmConfigResponse> DescribeListIPAlarmConfigOutcome;
                typedef std::future<DescribeListIPAlarmConfigOutcome> DescribeListIPAlarmConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListIPAlarmConfigRequest&, DescribeListIPAlarmConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListIPAlarmConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListListenerResponse> DescribeListListenerOutcome;
                typedef std::future<DescribeListListenerOutcome> DescribeListListenerOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListListenerRequest&, DescribeListListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListPacketFilterConfigResponse> DescribeListPacketFilterConfigOutcome;
                typedef std::future<DescribeListPacketFilterConfigOutcome> DescribeListPacketFilterConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListPacketFilterConfigRequest&, DescribeListPacketFilterConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListPacketFilterConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListProtocolBlockConfigResponse> DescribeListProtocolBlockConfigOutcome;
                typedef std::future<DescribeListProtocolBlockConfigOutcome> DescribeListProtocolBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListProtocolBlockConfigRequest&, DescribeListProtocolBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListProtocolBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListSchedulingDomainResponse> DescribeListSchedulingDomainOutcome;
                typedef std::future<DescribeListSchedulingDomainOutcome> DescribeListSchedulingDomainOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListSchedulingDomainRequest&, DescribeListSchedulingDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListSchedulingDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListWaterPrintConfigResponse> DescribeListWaterPrintConfigOutcome;
                typedef std::future<DescribeListWaterPrintConfigOutcome> DescribeListWaterPrintConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeListWaterPrintConfigRequest&, DescribeListWaterPrintConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListWaterPrintConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNewL7RulesResponse> DescribeNewL7RulesOutcome;
                typedef std::future<DescribeNewL7RulesOutcome> DescribeNewL7RulesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeNewL7RulesRequest&, DescribeNewL7RulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNewL7RulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNewL7RulesErrHealthResponse> DescribeNewL7RulesErrHealthOutcome;
                typedef std::future<DescribeNewL7RulesErrHealthOutcome> DescribeNewL7RulesErrHealthOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeNewL7RulesErrHealthRequest&, DescribeNewL7RulesErrHealthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNewL7RulesErrHealthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewDDoSEventListResponse> DescribeOverviewDDoSEventListOutcome;
                typedef std::future<DescribeOverviewDDoSEventListOutcome> DescribeOverviewDDoSEventListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribeOverviewDDoSEventListRequest&, DescribeOverviewDDoSEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewDDoSEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePendingRiskInfoResponse> DescribePendingRiskInfoOutcome;
                typedef std::future<DescribePendingRiskInfoOutcome> DescribePendingRiskInfoOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DescribePendingRiskInfoRequest&, DescribePendingRiskInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePendingRiskInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateDDoSEipAddressResponse> DisassociateDDoSEipAddressOutcome;
                typedef std::future<DisassociateDDoSEipAddressOutcome> DisassociateDDoSEipAddressOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::DisassociateDDoSEipAddressRequest&, DisassociateDDoSEipAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateDDoSEipAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCCPrecisionPolicyResponse> ModifyCCPrecisionPolicyOutcome;
                typedef std::future<ModifyCCPrecisionPolicyOutcome> ModifyCCPrecisionPolicyOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyCCPrecisionPolicyRequest&, ModifyCCPrecisionPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCCPrecisionPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCcBlackWhiteIpListResponse> ModifyCcBlackWhiteIpListOutcome;
                typedef std::future<ModifyCcBlackWhiteIpListOutcome> ModifyCcBlackWhiteIpListOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyCcBlackWhiteIpListRequest&, ModifyCcBlackWhiteIpListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcBlackWhiteIpListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSGeoIPBlockConfigResponse> ModifyDDoSGeoIPBlockConfigOutcome;
                typedef std::future<ModifyDDoSGeoIPBlockConfigOutcome> ModifyDDoSGeoIPBlockConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyDDoSGeoIPBlockConfigRequest&, ModifyDDoSGeoIPBlockConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSGeoIPBlockConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDDoSSpeedLimitConfigResponse> ModifyDDoSSpeedLimitConfigOutcome;
                typedef std::future<ModifyDDoSSpeedLimitConfigOutcome> ModifyDDoSSpeedLimitConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyDDoSSpeedLimitConfigRequest&, ModifyDDoSSpeedLimitConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDDoSSpeedLimitConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainUsrNameResponse> ModifyDomainUsrNameOutcome;
                typedef std::future<ModifyDomainUsrNameOutcome> ModifyDomainUsrNameOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyDomainUsrNameRequest&, ModifyDomainUsrNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainUsrNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNewDomainRulesResponse> ModifyNewDomainRulesOutcome;
                typedef std::future<ModifyNewDomainRulesOutcome> ModifyNewDomainRulesOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyNewDomainRulesRequest&, ModifyNewDomainRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNewDomainRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPacketFilterConfigResponse> ModifyPacketFilterConfigOutcome;
                typedef std::future<ModifyPacketFilterConfigOutcome> ModifyPacketFilterConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::ModifyPacketFilterConfigRequest&, ModifyPacketFilterConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPacketFilterConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchWaterPrintConfigResponse> SwitchWaterPrintConfigOutcome;
                typedef std::future<SwitchWaterPrintConfigOutcome> SwitchWaterPrintConfigOutcomeCallable;
                typedef std::function<void(const AntiddosClient*, const Model::SwitchWaterPrintConfigRequest&, SwitchWaterPrintConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchWaterPrintConfigAsyncHandler;



                /**
                 *This API is used to bind an EIP to an Anti-DDoS Advanced instance or a specified private IP of an ENI.
                 * @param req AssociateDDoSEipAddressRequest
                 * @return AssociateDDoSEipAddressOutcome
                 */
                AssociateDDoSEipAddressOutcome AssociateDDoSEipAddress(const Model::AssociateDDoSEipAddressRequest &request);
                void AssociateDDoSEipAddressAsync(const Model::AssociateDDoSEipAddressRequest& request, const AssociateDDoSEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateDDoSEipAddressOutcomeCallable AssociateDDoSEipAddressCallable(const Model::AssociateDDoSEipAddressRequest& request);

                /**
                 *This API is used to bind an Anti-DDoS EIP to the specified private IP of a CLB instance.
                 * @param req AssociateDDoSEipLoadBalancerRequest
                 * @return AssociateDDoSEipLoadBalancerOutcome
                 */
                AssociateDDoSEipLoadBalancerOutcome AssociateDDoSEipLoadBalancer(const Model::AssociateDDoSEipLoadBalancerRequest &request);
                void AssociateDDoSEipLoadBalancerAsync(const Model::AssociateDDoSEipLoadBalancerRequest& request, const AssociateDDoSEipLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateDDoSEipLoadBalancerOutcomeCallable AssociateDDoSEipLoadBalancerCallable(const Model::AssociateDDoSEipLoadBalancerRequest& request);

                /**
                 *This API is used to add an Anti-DDoS IP blocklist/allowlist.
                 * @param req CreateBlackWhiteIpListRequest
                 * @return CreateBlackWhiteIpListOutcome
                 */
                CreateBlackWhiteIpListOutcome CreateBlackWhiteIpList(const Model::CreateBlackWhiteIpListRequest &request);
                void CreateBlackWhiteIpListAsync(const Model::CreateBlackWhiteIpListRequest& request, const CreateBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBlackWhiteIpListOutcomeCallable CreateBlackWhiteIpListCallable(const Model::CreateBlackWhiteIpListRequest& request);

                /**
                 *This API is used to bind an IP to an Anti-DDoS Pro instance Both single IP instances and multi-IP instances are available. Note that you should wait until the current binding or unbinding completes before using this async API for new operations.
                 * @param req CreateBoundIPRequest
                 * @return CreateBoundIPOutcome
                 */
                CreateBoundIPOutcome CreateBoundIP(const Model::CreateBoundIPRequest &request);
                void CreateBoundIPAsync(const Model::CreateBoundIPRequest& request, const CreateBoundIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBoundIPOutcomeCallable CreateBoundIPCallable(const Model::CreateBoundIPRequest& request);

                /**
                 *This API is used to create a CC precise protection policy.
                 * @param req CreateCCPrecisionPolicyRequest
                 * @return CreateCCPrecisionPolicyOutcome
                 */
                CreateCCPrecisionPolicyOutcome CreateCCPrecisionPolicy(const Model::CreateCCPrecisionPolicyRequest &request);
                void CreateCCPrecisionPolicyAsync(const Model::CreateCCPrecisionPolicyRequest& request, const CreateCCPrecisionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCCPrecisionPolicyOutcomeCallable CreateCCPrecisionPolicyCallable(const Model::CreateCCPrecisionPolicyRequest& request);

                /**
                 *This API is used to create a CC frequency limit policy.
                 * @param req CreateCCReqLimitPolicyRequest
                 * @return CreateCCReqLimitPolicyOutcome
                 */
                CreateCCReqLimitPolicyOutcome CreateCCReqLimitPolicy(const Model::CreateCCReqLimitPolicyRequest &request);
                void CreateCCReqLimitPolicyAsync(const Model::CreateCCReqLimitPolicyRequest& request, const CreateCCReqLimitPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCCReqLimitPolicyOutcomeCallable CreateCCReqLimitPolicyCallable(const Model::CreateCCReqLimitPolicyRequest& request);

                /**
                 *This API is used to create a layer 4 access control list to prevent CC attacks.
                 * @param req CreateCcBlackWhiteIpListRequest
                 * @return CreateCcBlackWhiteIpListOutcome
                 */
                CreateCcBlackWhiteIpListOutcome CreateCcBlackWhiteIpList(const Model::CreateCcBlackWhiteIpListRequest &request);
                void CreateCcBlackWhiteIpListAsync(const Model::CreateCcBlackWhiteIpListRequest& request, const CreateCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCcBlackWhiteIpListOutcomeCallable CreateCcBlackWhiteIpListCallable(const Model::CreateCcBlackWhiteIpListRequest& request);

                /**
                 *This API is used to create a regional blocking configuration.
                 * @param req CreateCcGeoIPBlockConfigRequest
                 * @return CreateCcGeoIPBlockConfigOutcome
                 */
                CreateCcGeoIPBlockConfigOutcome CreateCcGeoIPBlockConfig(const Model::CreateCcGeoIPBlockConfigRequest &request);
                void CreateCcGeoIPBlockConfigAsync(const Model::CreateCcGeoIPBlockConfigRequest& request, const CreateCcGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCcGeoIPBlockConfigOutcomeCallable CreateCcGeoIPBlockConfigCallable(const Model::CreateCcGeoIPBlockConfigRequest& request);

                /**
                 *This API is used to set Anti-DDoS AI protection switches.
                 * @param req CreateDDoSAIRequest
                 * @return CreateDDoSAIOutcome
                 */
                CreateDDoSAIOutcome CreateDDoSAI(const Model::CreateDDoSAIRequest &request);
                void CreateDDoSAIAsync(const Model::CreateDDoSAIRequest& request, const CreateDDoSAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDDoSAIOutcomeCallable CreateDDoSAICallable(const Model::CreateDDoSAIRequest& request);

                /**
                 *This API is used to add an Anti-DDoS region blocking configuration.
                 * @param req CreateDDoSGeoIPBlockConfigRequest
                 * @return CreateDDoSGeoIPBlockConfigOutcome
                 */
                CreateDDoSGeoIPBlockConfigOutcome CreateDDoSGeoIPBlockConfig(const Model::CreateDDoSGeoIPBlockConfigRequest &request);
                void CreateDDoSGeoIPBlockConfigAsync(const Model::CreateDDoSGeoIPBlockConfigRequest& request, const CreateDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDDoSGeoIPBlockConfigOutcomeCallable CreateDDoSGeoIPBlockConfigCallable(const Model::CreateDDoSGeoIPBlockConfigRequest& request);

                /**
                 *This API is used to add Anti-DDoS access rate limit configurations.
                 * @param req CreateDDoSSpeedLimitConfigRequest
                 * @return CreateDDoSSpeedLimitConfigOutcome
                 */
                CreateDDoSSpeedLimitConfigOutcome CreateDDoSSpeedLimitConfig(const Model::CreateDDoSSpeedLimitConfigRequest &request);
                void CreateDDoSSpeedLimitConfigAsync(const Model::CreateDDoSSpeedLimitConfigRequest& request, const CreateDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDDoSSpeedLimitConfigOutcomeCallable CreateDDoSSpeedLimitConfigCallable(const Model::CreateDDoSSpeedLimitConfigRequest& request);

                /**
                 *This API is used to set the default alarm threshold of an IP.
                 * @param req CreateDefaultAlarmThresholdRequest
                 * @return CreateDefaultAlarmThresholdOutcome
                 */
                CreateDefaultAlarmThresholdOutcome CreateDefaultAlarmThreshold(const Model::CreateDefaultAlarmThresholdRequest &request);
                void CreateDefaultAlarmThresholdAsync(const Model::CreateDefaultAlarmThresholdRequest& request, const CreateDefaultAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDefaultAlarmThresholdOutcomeCallable CreateDefaultAlarmThresholdCallable(const Model::CreateDefaultAlarmThresholdRequest& request);

                /**
                 *This API is used to set the default alarm threshold of an IP.
                 * @param req CreateIPAlarmThresholdConfigRequest
                 * @return CreateIPAlarmThresholdConfigOutcome
                 */
                CreateIPAlarmThresholdConfigOutcome CreateIPAlarmThresholdConfig(const Model::CreateIPAlarmThresholdConfigRequest &request);
                void CreateIPAlarmThresholdConfigAsync(const Model::CreateIPAlarmThresholdConfigRequest& request, const CreateIPAlarmThresholdConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIPAlarmThresholdConfigOutcomeCallable CreateIPAlarmThresholdConfigCallable(const Model::CreateIPAlarmThresholdConfigRequest& request);

                /**
                 *This API is used to configure certificates with layer-7 forwarding rules in a batch for SSL testing.
                 * @param req CreateL7RuleCertsRequest
                 * @return CreateL7RuleCertsOutcome
                 */
                CreateL7RuleCertsOutcome CreateL7RuleCerts(const Model::CreateL7RuleCertsRequest &request);
                void CreateL7RuleCertsAsync(const Model::CreateL7RuleCertsRequest& request, const CreateL7RuleCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL7RuleCertsOutcomeCallable CreateL7RuleCertsCallable(const Model::CreateL7RuleCertsRequest& request);

                /**
                 *This API is used to add layer-7 forwarding rules.
                 * @param req CreateNewL7RulesRequest
                 * @return CreateNewL7RulesOutcome
                 */
                CreateNewL7RulesOutcome CreateNewL7Rules(const Model::CreateNewL7RulesRequest &request);
                void CreateNewL7RulesAsync(const Model::CreateNewL7RulesRequest& request, const CreateNewL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNewL7RulesOutcomeCallable CreateNewL7RulesCallable(const Model::CreateNewL7RulesRequest& request);

                /**
                 *This API is used to add Anti-DDoS feature filtering rules.
                 * @param req CreatePacketFilterConfigRequest
                 * @return CreatePacketFilterConfigOutcome
                 */
                CreatePacketFilterConfigOutcome CreatePacketFilterConfig(const Model::CreatePacketFilterConfigRequest &request);
                void CreatePacketFilterConfigAsync(const Model::CreatePacketFilterConfigRequest& request, const CreatePacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePacketFilterConfigOutcomeCallable CreatePacketFilterConfigCallable(const Model::CreatePacketFilterConfigRequest& request);

                /**
                 *This API is used to set Anti-DDoS protocol blocking configurations.
                 * @param req CreateProtocolBlockConfigRequest
                 * @return CreateProtocolBlockConfigOutcome
                 */
                CreateProtocolBlockConfigOutcome CreateProtocolBlockConfig(const Model::CreateProtocolBlockConfigRequest &request);
                void CreateProtocolBlockConfigAsync(const Model::CreateProtocolBlockConfigRequest& request, const CreateProtocolBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProtocolBlockConfigOutcomeCallable CreateProtocolBlockConfigCallable(const Model::CreateProtocolBlockConfigRequest& request);

                /**
                 *This API is used to create a domain name for IP scheduling and switching.
                 * @param req CreateSchedulingDomainRequest
                 * @return CreateSchedulingDomainOutcome
                 */
                CreateSchedulingDomainOutcome CreateSchedulingDomain(const Model::CreateSchedulingDomainRequest &request);
                void CreateSchedulingDomainAsync(const Model::CreateSchedulingDomainRequest& request, const CreateSchedulingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSchedulingDomainOutcomeCallable CreateSchedulingDomainCallable(const Model::CreateSchedulingDomainRequest& request);

                /**
                 *This API is used to add Anti-DDoS watermark configurations.
                 * @param req CreateWaterPrintConfigRequest
                 * @return CreateWaterPrintConfigOutcome
                 */
                CreateWaterPrintConfigOutcome CreateWaterPrintConfig(const Model::CreateWaterPrintConfigRequest &request);
                void CreateWaterPrintConfigAsync(const Model::CreateWaterPrintConfigRequest& request, const CreateWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWaterPrintConfigOutcomeCallable CreateWaterPrintConfigCallable(const Model::CreateWaterPrintConfigRequest& request);

                /**
                 *This API is used to add Anti-DDoS watermark keys.
                 * @param req CreateWaterPrintKeyRequest
                 * @return CreateWaterPrintKeyOutcome
                 */
                CreateWaterPrintKeyOutcome CreateWaterPrintKey(const Model::CreateWaterPrintKeyRequest &request);
                void CreateWaterPrintKeyAsync(const Model::CreateWaterPrintKeyRequest& request, const CreateWaterPrintKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateWaterPrintKeyOutcomeCallable CreateWaterPrintKeyCallable(const Model::CreateWaterPrintKeyRequest& request);

                /**
                 *This API is used to delete a level-defining policy of CC attacks. 
                 * @param req DeleteCCLevelPolicyRequest
                 * @return DeleteCCLevelPolicyOutcome
                 */
                DeleteCCLevelPolicyOutcome DeleteCCLevelPolicy(const Model::DeleteCCLevelPolicyRequest &request);
                void DeleteCCLevelPolicyAsync(const Model::DeleteCCLevelPolicyRequest& request, const DeleteCCLevelPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCCLevelPolicyOutcomeCallable DeleteCCLevelPolicyCallable(const Model::DeleteCCLevelPolicyRequest& request);

                /**
                 *This API is used to delete a CC precise protection policy.
                 * @param req DeleteCCPrecisionPolicyRequest
                 * @return DeleteCCPrecisionPolicyOutcome
                 */
                DeleteCCPrecisionPolicyOutcome DeleteCCPrecisionPolicy(const Model::DeleteCCPrecisionPolicyRequest &request);
                void DeleteCCPrecisionPolicyAsync(const Model::DeleteCCPrecisionPolicyRequest& request, const DeleteCCPrecisionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCCPrecisionPolicyOutcomeCallable DeleteCCPrecisionPolicyCallable(const Model::DeleteCCPrecisionPolicyRequest& request);

                /**
                 *This API is used to delete a CC cleansing threshold policy.
                 * @param req DeleteCCThresholdPolicyRequest
                 * @return DeleteCCThresholdPolicyOutcome
                 */
                DeleteCCThresholdPolicyOutcome DeleteCCThresholdPolicy(const Model::DeleteCCThresholdPolicyRequest &request);
                void DeleteCCThresholdPolicyAsync(const Model::DeleteCCThresholdPolicyRequest& request, const DeleteCCThresholdPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCCThresholdPolicyOutcomeCallable DeleteCCThresholdPolicyCallable(const Model::DeleteCCThresholdPolicyRequest& request);

                /**
                 *This API is used to delete a layer-4 access control list.
                 * @param req DeleteCcBlackWhiteIpListRequest
                 * @return DeleteCcBlackWhiteIpListOutcome
                 */
                DeleteCcBlackWhiteIpListOutcome DeleteCcBlackWhiteIpList(const Model::DeleteCcBlackWhiteIpListRequest &request);
                void DeleteCcBlackWhiteIpListAsync(const Model::DeleteCcBlackWhiteIpListRequest& request, const DeleteCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCcBlackWhiteIpListOutcomeCallable DeleteCcBlackWhiteIpListCallable(const Model::DeleteCcBlackWhiteIpListRequest& request);

                /**
                 *This API is used to delete a regional blocking configuration.
                 * @param req DeleteCcGeoIPBlockConfigRequest
                 * @return DeleteCcGeoIPBlockConfigOutcome
                 */
                DeleteCcGeoIPBlockConfigOutcome DeleteCcGeoIPBlockConfig(const Model::DeleteCcGeoIPBlockConfigRequest &request);
                void DeleteCcGeoIPBlockConfigAsync(const Model::DeleteCcGeoIPBlockConfigRequest& request, const DeleteCcGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCcGeoIPBlockConfigOutcomeCallable DeleteCcGeoIPBlockConfigCallable(const Model::DeleteCcGeoIPBlockConfigRequest& request);

                /**
                 *This API is used to delete Anti-DDoS region blocking configurations.
                 * @param req DeleteDDoSGeoIPBlockConfigRequest
                 * @return DeleteDDoSGeoIPBlockConfigOutcome
                 */
                DeleteDDoSGeoIPBlockConfigOutcome DeleteDDoSGeoIPBlockConfig(const Model::DeleteDDoSGeoIPBlockConfigRequest &request);
                void DeleteDDoSGeoIPBlockConfigAsync(const Model::DeleteDDoSGeoIPBlockConfigRequest& request, const DeleteDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDDoSGeoIPBlockConfigOutcomeCallable DeleteDDoSGeoIPBlockConfigCallable(const Model::DeleteDDoSGeoIPBlockConfigRequest& request);

                /**
                 *This API is used to delete Anti-DDoS access rate limit configurations.
                 * @param req DeleteDDoSSpeedLimitConfigRequest
                 * @return DeleteDDoSSpeedLimitConfigOutcome
                 */
                DeleteDDoSSpeedLimitConfigOutcome DeleteDDoSSpeedLimitConfig(const Model::DeleteDDoSSpeedLimitConfigRequest &request);
                void DeleteDDoSSpeedLimitConfigAsync(const Model::DeleteDDoSSpeedLimitConfigRequest& request, const DeleteDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDDoSSpeedLimitConfigOutcomeCallable DeleteDDoSSpeedLimitConfigCallable(const Model::DeleteDDoSSpeedLimitConfigRequest& request);

                /**
                 *This API is used to delete Anti-DDoS feature filtering rules.
                 * @param req DeletePacketFilterConfigRequest
                 * @return DeletePacketFilterConfigOutcome
                 */
                DeletePacketFilterConfigOutcome DeletePacketFilterConfig(const Model::DeletePacketFilterConfigRequest &request);
                void DeletePacketFilterConfigAsync(const Model::DeletePacketFilterConfigRequest& request, const DeletePacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePacketFilterConfigOutcomeCallable DeletePacketFilterConfigCallable(const Model::DeletePacketFilterConfigRequest& request);

                /**
                 *This API is used to delete Anti-DDoS watermark configurations.
                 * @param req DeleteWaterPrintConfigRequest
                 * @return DeleteWaterPrintConfigOutcome
                 */
                DeleteWaterPrintConfigOutcome DeleteWaterPrintConfig(const Model::DeleteWaterPrintConfigRequest &request);
                void DeleteWaterPrintConfigAsync(const Model::DeleteWaterPrintConfigRequest& request, const DeleteWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWaterPrintConfigOutcomeCallable DeleteWaterPrintConfigCallable(const Model::DeleteWaterPrintConfigRequest& request);

                /**
                 *This API is used to delete Anti-DDoS watermark keys.
                 * @param req DeleteWaterPrintKeyRequest
                 * @return DeleteWaterPrintKeyOutcome
                 */
                DeleteWaterPrintKeyOutcome DeleteWaterPrintKey(const Model::DeleteWaterPrintKeyRequest &request);
                void DeleteWaterPrintKeyAsync(const Model::DeleteWaterPrintKeyRequest& request, const DeleteWaterPrintKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteWaterPrintKeyOutcomeCallable DeleteWaterPrintKeyCallable(const Model::DeleteWaterPrintKeyRequest& request);

                /**
                 *This API is used to querying the status of Anti-DDoS IP.
                 * @param req DescribeBasicDeviceStatusRequest
                 * @return DescribeBasicDeviceStatusOutcome
                 */
                DescribeBasicDeviceStatusOutcome DescribeBasicDeviceStatus(const Model::DescribeBasicDeviceStatusRequest &request);
                void DescribeBasicDeviceStatusAsync(const Model::DescribeBasicDeviceStatusRequest& request, const DescribeBasicDeviceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBasicDeviceStatusOutcomeCallable DescribeBasicDeviceStatusCallable(const Model::DescribeBasicDeviceStatusRequest& request);

                /**
                 *This API is used to obtain Anti-DDoS Pro traffic data.
                 * @param req DescribeBgpBizTrendRequest
                 * @return DescribeBgpBizTrendOutcome
                 */
                DescribeBgpBizTrendOutcome DescribeBgpBizTrend(const Model::DescribeBgpBizTrendRequest &request);
                void DescribeBgpBizTrendAsync(const Model::DescribeBgpBizTrendRequest& request, const DescribeBgpBizTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBgpBizTrendOutcomeCallable DescribeBgpBizTrendCallable(const Model::DescribeBgpBizTrendRequest& request);

                /**
                 *This API is used to get the statistics on the status codes of business traffic.
                 * @param req DescribeBizHttpStatusRequest
                 * @return DescribeBizHttpStatusOutcome
                 */
                DescribeBizHttpStatusOutcome DescribeBizHttpStatus(const Model::DescribeBizHttpStatusRequest &request);
                void DescribeBizHttpStatusAsync(const Model::DescribeBizHttpStatusRequest& request, const DescribeBizHttpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBizHttpStatusOutcomeCallable DescribeBizHttpStatusCallable(const Model::DescribeBizHttpStatusRequest& request);

                /**
                 *This API is used to get the traffic flow data collected in the specified period.
                 * @param req DescribeBizTrendRequest
                 * @return DescribeBizTrendOutcome
                 */
                DescribeBizTrendOutcome DescribeBizTrend(const Model::DescribeBizTrendRequest &request);
                void DescribeBizTrendAsync(const Model::DescribeBizTrendRequest& request, const DescribeBizTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBizTrendOutcomeCallable DescribeBizTrendCallable(const Model::DescribeBizTrendRequest& request);

                /**
                 *Gets the list of CC protection levels
                 * @param req DescribeCCLevelListRequest
                 * @return DescribeCCLevelListOutcome
                 */
                DescribeCCLevelListOutcome DescribeCCLevelList(const Model::DescribeCCLevelListRequest &request);
                void DescribeCCLevelListAsync(const Model::DescribeCCLevelListRequest& request, const DescribeCCLevelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCLevelListOutcomeCallable DescribeCCLevelListCallable(const Model::DescribeCCLevelListRequest& request);

                /**
                 *This API is used the query a level-defining policy of CC attacks
                 * @param req DescribeCCLevelPolicyRequest
                 * @return DescribeCCLevelPolicyOutcome
                 */
                DescribeCCLevelPolicyOutcome DescribeCCLevelPolicy(const Model::DescribeCCLevelPolicyRequest &request);
                void DescribeCCLevelPolicyAsync(const Model::DescribeCCLevelPolicyRequest& request, const DescribeCCLevelPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCLevelPolicyOutcomeCallable DescribeCCLevelPolicyCallable(const Model::DescribeCCLevelPolicyRequest& request);

                /**
                 *This API is used to obtain the list of CC precise protection policies.
                 * @param req DescribeCCPrecisionPlyListRequest
                 * @return DescribeCCPrecisionPlyListOutcome
                 */
                DescribeCCPrecisionPlyListOutcome DescribeCCPrecisionPlyList(const Model::DescribeCCPrecisionPlyListRequest &request);
                void DescribeCCPrecisionPlyListAsync(const Model::DescribeCCPrecisionPlyListRequest& request, const DescribeCCPrecisionPlyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCPrecisionPlyListOutcomeCallable DescribeCCPrecisionPlyListCallable(const Model::DescribeCCPrecisionPlyListRequest& request);

                /**
                 *This API is used to query the list of CC cleansing thresholds.
                 * @param req DescribeCCThresholdListRequest
                 * @return DescribeCCThresholdListOutcome
                 */
                DescribeCCThresholdListOutcome DescribeCCThresholdList(const Model::DescribeCCThresholdListRequest &request);
                void DescribeCCThresholdListAsync(const Model::DescribeCCThresholdListRequest& request, const DescribeCCThresholdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCThresholdListOutcomeCallable DescribeCCThresholdListCallable(const Model::DescribeCCThresholdListRequest& request);

                /**
                 *This API is used to get CC attack data, including total QPS peaks, attack QPS, total number of requests and number of attack requests.
                 * @param req DescribeCCTrendRequest
                 * @return DescribeCCTrendOutcome
                 */
                DescribeCCTrendOutcome DescribeCCTrend(const Model::DescribeCCTrendRequest &request);
                void DescribeCCTrendAsync(const Model::DescribeCCTrendRequest& request, const DescribeCCTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCCTrendOutcomeCallable DescribeCCTrendCallable(const Model::DescribeCCTrendRequest& request);

                /**
                 *This API is used to obtain the layer-4 access control list.
                 * @param req DescribeCcBlackWhiteIpListRequest
                 * @return DescribeCcBlackWhiteIpListOutcome
                 */
                DescribeCcBlackWhiteIpListOutcome DescribeCcBlackWhiteIpList(const Model::DescribeCcBlackWhiteIpListRequest &request);
                void DescribeCcBlackWhiteIpListAsync(const Model::DescribeCcBlackWhiteIpListRequest& request, const DescribeCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcBlackWhiteIpListOutcomeCallable DescribeCcBlackWhiteIpListCallable(const Model::DescribeCcBlackWhiteIpListRequest& request);

                /**
                 *This API is used to obtain a list of regional blocking configurations.
                 * @param req DescribeCcGeoIPBlockConfigListRequest
                 * @return DescribeCcGeoIPBlockConfigListOutcome
                 */
                DescribeCcGeoIPBlockConfigListOutcome DescribeCcGeoIPBlockConfigList(const Model::DescribeCcGeoIPBlockConfigListRequest &request);
                void DescribeCcGeoIPBlockConfigListAsync(const Model::DescribeCcGeoIPBlockConfigListRequest& request, const DescribeCcGeoIPBlockConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcGeoIPBlockConfigListOutcomeCallable DescribeCcGeoIPBlockConfigListCallable(const Model::DescribeCcGeoIPBlockConfigListRequest& request);

                /**
                 *This API is used to get DDoS attack traffic bandwidth and attack packet rate.
                 * @param req DescribeDDoSTrendRequest
                 * @return DescribeDDoSTrendOutcome
                 */
                DescribeDDoSTrendOutcome DescribeDDoSTrend(const Model::DescribeDDoSTrendRequest &request);
                void DescribeDDoSTrendAsync(const Model::DescribeDDoSTrendRequest& request, const DescribeDDoSTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSTrendOutcomeCallable DescribeDDoSTrendCallable(const Model::DescribeDDoSTrendRequest& request);

                /**
                 *This API is used to get the default alarm threshold of an IP.
                 * @param req DescribeDefaultAlarmThresholdRequest
                 * @return DescribeDefaultAlarmThresholdOutcome
                 */
                DescribeDefaultAlarmThresholdOutcome DescribeDefaultAlarmThreshold(const Model::DescribeDefaultAlarmThresholdRequest &request);
                void DescribeDefaultAlarmThresholdAsync(const Model::DescribeDefaultAlarmThresholdRequest& request, const DescribeDefaultAlarmThresholdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultAlarmThresholdOutcomeCallable DescribeDefaultAlarmThresholdCallable(const Model::DescribeDefaultAlarmThresholdRequest& request);

                /**
                 *
                 * @param req DescribeIpBlockListRequest
                 * @return DescribeIpBlockListOutcome
                 */
                DescribeIpBlockListOutcome DescribeIpBlockList(const Model::DescribeIpBlockListRequest &request);
                void DescribeIpBlockListAsync(const Model::DescribeIpBlockListRequest& request, const DescribeIpBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpBlockListOutcomeCallable DescribeIpBlockListCallable(const Model::DescribeIpBlockListRequest& request);

                /**
                 *This API is used to query layer-7 rules matched with certificate IDs.
                 * @param req DescribeL7RulesBySSLCertIdRequest
                 * @return DescribeL7RulesBySSLCertIdOutcome
                 */
                DescribeL7RulesBySSLCertIdOutcome DescribeL7RulesBySSLCertId(const Model::DescribeL7RulesBySSLCertIdRequest &request);
                void DescribeL7RulesBySSLCertIdAsync(const Model::DescribeL7RulesBySSLCertIdRequest& request, const DescribeL7RulesBySSLCertIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL7RulesBySSLCertIdOutcomeCallable DescribeL7RulesBySSLCertIdCallable(const Model::DescribeL7RulesBySSLCertIdRequest& request);

                /**
                 *This API is used to get a list of Anti-DDoS Advanced instances.

                 * @param req DescribeListBGPIPInstancesRequest
                 * @return DescribeListBGPIPInstancesOutcome
                 */
                DescribeListBGPIPInstancesOutcome DescribeListBGPIPInstances(const Model::DescribeListBGPIPInstancesRequest &request);
                void DescribeListBGPIPInstancesAsync(const Model::DescribeListBGPIPInstancesRequest& request, const DescribeListBGPIPInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListBGPIPInstancesOutcomeCallable DescribeListBGPIPInstancesCallable(const Model::DescribeListBGPIPInstancesRequest& request);

                /**
                 *This API is used to get the list of Anti-DDoS Pro instances.
                 * @param req DescribeListBGPInstancesRequest
                 * @return DescribeListBGPInstancesOutcome
                 */
                DescribeListBGPInstancesOutcome DescribeListBGPInstances(const Model::DescribeListBGPInstancesRequest &request);
                void DescribeListBGPInstancesAsync(const Model::DescribeListBGPInstancesRequest& request, const DescribeListBGPInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListBGPInstancesOutcomeCallable DescribeListBGPInstancesCallable(const Model::DescribeListBGPInstancesRequest& request);

                /**
                 *This API is used to get a list of Anti-DDoS IP blocklists/allowlists.
                 * @param req DescribeListBlackWhiteIpListRequest
                 * @return DescribeListBlackWhiteIpListOutcome
                 */
                DescribeListBlackWhiteIpListOutcome DescribeListBlackWhiteIpList(const Model::DescribeListBlackWhiteIpListRequest &request);
                void DescribeListBlackWhiteIpListAsync(const Model::DescribeListBlackWhiteIpListRequest& request, const DescribeListBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListBlackWhiteIpListOutcomeCallable DescribeListBlackWhiteIpListCallable(const Model::DescribeListBlackWhiteIpListRequest& request);

                /**
                 *This API is used to get a list of Anti-DDoS AI protection switches.
                 * @param req DescribeListDDoSAIRequest
                 * @return DescribeListDDoSAIOutcome
                 */
                DescribeListDDoSAIOutcome DescribeListDDoSAI(const Model::DescribeListDDoSAIRequest &request);
                void DescribeListDDoSAIAsync(const Model::DescribeListDDoSAIRequest& request, const DescribeListDDoSAIAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListDDoSAIOutcomeCallable DescribeListDDoSAICallable(const Model::DescribeListDDoSAIRequest& request);

                /**
                 *This API is used to get a list of Anti-DDoS region blocking configurations.
                 * @param req DescribeListDDoSGeoIPBlockConfigRequest
                 * @return DescribeListDDoSGeoIPBlockConfigOutcome
                 */
                DescribeListDDoSGeoIPBlockConfigOutcome DescribeListDDoSGeoIPBlockConfig(const Model::DescribeListDDoSGeoIPBlockConfigRequest &request);
                void DescribeListDDoSGeoIPBlockConfigAsync(const Model::DescribeListDDoSGeoIPBlockConfigRequest& request, const DescribeListDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListDDoSGeoIPBlockConfigOutcomeCallable DescribeListDDoSGeoIPBlockConfigCallable(const Model::DescribeListDDoSGeoIPBlockConfigRequest& request);

                /**
                 *This API is used to get a list of Anti-DDoS access rate limit configurations.
                 * @param req DescribeListDDoSSpeedLimitConfigRequest
                 * @return DescribeListDDoSSpeedLimitConfigOutcome
                 */
                DescribeListDDoSSpeedLimitConfigOutcome DescribeListDDoSSpeedLimitConfig(const Model::DescribeListDDoSSpeedLimitConfigRequest &request);
                void DescribeListDDoSSpeedLimitConfigAsync(const Model::DescribeListDDoSSpeedLimitConfigRequest& request, const DescribeListDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListDDoSSpeedLimitConfigOutcomeCallable DescribeListDDoSSpeedLimitConfigCallable(const Model::DescribeListDDoSSpeedLimitConfigRequest& request);

                /**
                 *This API is used to get a list of IP alarm threshold configurations.
                 * @param req DescribeListIPAlarmConfigRequest
                 * @return DescribeListIPAlarmConfigOutcome
                 */
                DescribeListIPAlarmConfigOutcome DescribeListIPAlarmConfig(const Model::DescribeListIPAlarmConfigRequest &request);
                void DescribeListIPAlarmConfigAsync(const Model::DescribeListIPAlarmConfigRequest& request, const DescribeListIPAlarmConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListIPAlarmConfigOutcomeCallable DescribeListIPAlarmConfigCallable(const Model::DescribeListIPAlarmConfigRequest& request);

                /**
                 *This API is used to get a list of forwarding listeners.
                 * @param req DescribeListListenerRequest
                 * @return DescribeListListenerOutcome
                 */
                DescribeListListenerOutcome DescribeListListener(const Model::DescribeListListenerRequest &request);
                void DescribeListListenerAsync(const Model::DescribeListListenerRequest& request, const DescribeListListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListListenerOutcomeCallable DescribeListListenerCallable(const Model::DescribeListListenerRequest& request);

                /**
                 *This API is used to get a list of Anti-DDoS feature filtering rules.
                 * @param req DescribeListPacketFilterConfigRequest
                 * @return DescribeListPacketFilterConfigOutcome
                 */
                DescribeListPacketFilterConfigOutcome DescribeListPacketFilterConfig(const Model::DescribeListPacketFilterConfigRequest &request);
                void DescribeListPacketFilterConfigAsync(const Model::DescribeListPacketFilterConfigRequest& request, const DescribeListPacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListPacketFilterConfigOutcomeCallable DescribeListPacketFilterConfigCallable(const Model::DescribeListPacketFilterConfigRequest& request);

                /**
                 *This API is used to get a list of Anti-DDoS protocol blocking configurations.
                 * @param req DescribeListProtocolBlockConfigRequest
                 * @return DescribeListProtocolBlockConfigOutcome
                 */
                DescribeListProtocolBlockConfigOutcome DescribeListProtocolBlockConfig(const Model::DescribeListProtocolBlockConfigRequest &request);
                void DescribeListProtocolBlockConfigAsync(const Model::DescribeListProtocolBlockConfigRequest& request, const DescribeListProtocolBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListProtocolBlockConfigOutcomeCallable DescribeListProtocolBlockConfigCallable(const Model::DescribeListProtocolBlockConfigRequest& request);

                /**
                 *This API is used to get a list of intelligent scheduling domain names.
                 * @param req DescribeListSchedulingDomainRequest
                 * @return DescribeListSchedulingDomainOutcome
                 */
                DescribeListSchedulingDomainOutcome DescribeListSchedulingDomain(const Model::DescribeListSchedulingDomainRequest &request);
                void DescribeListSchedulingDomainAsync(const Model::DescribeListSchedulingDomainRequest& request, const DescribeListSchedulingDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListSchedulingDomainOutcomeCallable DescribeListSchedulingDomainCallable(const Model::DescribeListSchedulingDomainRequest& request);

                /**
                 *This API is used to get a list of Anti-DDoS watermark configurations.
                 * @param req DescribeListWaterPrintConfigRequest
                 * @return DescribeListWaterPrintConfigOutcome
                 */
                DescribeListWaterPrintConfigOutcome DescribeListWaterPrintConfig(const Model::DescribeListWaterPrintConfigRequest &request);
                void DescribeListWaterPrintConfigAsync(const Model::DescribeListWaterPrintConfigRequest& request, const DescribeListWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListWaterPrintConfigOutcomeCallable DescribeListWaterPrintConfigCallable(const Model::DescribeListWaterPrintConfigRequest& request);

                /**
                 *This API is used to obtain layer-7 forwarding rules.
                 * @param req DescribeNewL7RulesRequest
                 * @return DescribeNewL7RulesOutcome
                 */
                DescribeNewL7RulesOutcome DescribeNewL7Rules(const Model::DescribeNewL7RulesRequest &request);
                void DescribeNewL7RulesAsync(const Model::DescribeNewL7RulesRequest& request, const DescribeNewL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNewL7RulesOutcomeCallable DescribeNewL7RulesCallable(const Model::DescribeNewL7RulesRequest& request);

                /**
                 *This API is used to getting the exception results of the health check on layer-7 forwarding rules.
                 * @param req DescribeNewL7RulesErrHealthRequest
                 * @return DescribeNewL7RulesErrHealthOutcome
                 */
                DescribeNewL7RulesErrHealthOutcome DescribeNewL7RulesErrHealth(const Model::DescribeNewL7RulesErrHealthRequest &request);
                void DescribeNewL7RulesErrHealthAsync(const Model::DescribeNewL7RulesErrHealthRequest& request, const DescribeNewL7RulesErrHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNewL7RulesErrHealthOutcomeCallable DescribeNewL7RulesErrHealthCallable(const Model::DescribeNewL7RulesErrHealthRequest& request);

                /**
                 *This API is used to obtain the list of DDoS attacks.
                 * @param req DescribeOverviewDDoSEventListRequest
                 * @return DescribeOverviewDDoSEventListOutcome
                 */
                DescribeOverviewDDoSEventListOutcome DescribeOverviewDDoSEventList(const Model::DescribeOverviewDDoSEventListRequest &request);
                void DescribeOverviewDDoSEventListAsync(const Model::DescribeOverviewDDoSEventListRequest& request, const DescribeOverviewDDoSEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewDDoSEventListOutcomeCallable DescribeOverviewDDoSEventListCallable(const Model::DescribeOverviewDDoSEventListRequest& request);

                /**
                 *This API is used to query the information of pending risks at the account level.
                 * @param req DescribePendingRiskInfoRequest
                 * @return DescribePendingRiskInfoOutcome
                 */
                DescribePendingRiskInfoOutcome DescribePendingRiskInfo(const Model::DescribePendingRiskInfoRequest &request);
                void DescribePendingRiskInfoAsync(const Model::DescribePendingRiskInfoRequest& request, const DescribePendingRiskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePendingRiskInfoOutcomeCallable DescribePendingRiskInfoCallable(const Model::DescribePendingRiskInfoRequest& request);

                /**
                 *This API is used to unbind an Anti-DDoS EIP.
                 * @param req DisassociateDDoSEipAddressRequest
                 * @return DisassociateDDoSEipAddressOutcome
                 */
                DisassociateDDoSEipAddressOutcome DisassociateDDoSEipAddress(const Model::DisassociateDDoSEipAddressRequest &request);
                void DisassociateDDoSEipAddressAsync(const Model::DisassociateDDoSEipAddressRequest& request, const DisassociateDDoSEipAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateDDoSEipAddressOutcomeCallable DisassociateDDoSEipAddressCallable(const Model::DisassociateDDoSEipAddressRequest& request);

                /**
                 *This API is used to modify a CC precise protection policy.
                 * @param req ModifyCCPrecisionPolicyRequest
                 * @return ModifyCCPrecisionPolicyOutcome
                 */
                ModifyCCPrecisionPolicyOutcome ModifyCCPrecisionPolicy(const Model::ModifyCCPrecisionPolicyRequest &request);
                void ModifyCCPrecisionPolicyAsync(const Model::ModifyCCPrecisionPolicyRequest& request, const ModifyCCPrecisionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCCPrecisionPolicyOutcomeCallable ModifyCCPrecisionPolicyCallable(const Model::ModifyCCPrecisionPolicyRequest& request);

                /**
                 *This API is used to modify a layer-4 access control list.
                 * @param req ModifyCcBlackWhiteIpListRequest
                 * @return ModifyCcBlackWhiteIpListOutcome
                 */
                ModifyCcBlackWhiteIpListOutcome ModifyCcBlackWhiteIpList(const Model::ModifyCcBlackWhiteIpListRequest &request);
                void ModifyCcBlackWhiteIpListAsync(const Model::ModifyCcBlackWhiteIpListRequest& request, const ModifyCcBlackWhiteIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCcBlackWhiteIpListOutcomeCallable ModifyCcBlackWhiteIpListCallable(const Model::ModifyCcBlackWhiteIpListRequest& request);

                /**
                 *This API is used to modify Anti-DDoS region blocking configurations.
                 * @param req ModifyDDoSGeoIPBlockConfigRequest
                 * @return ModifyDDoSGeoIPBlockConfigOutcome
                 */
                ModifyDDoSGeoIPBlockConfigOutcome ModifyDDoSGeoIPBlockConfig(const Model::ModifyDDoSGeoIPBlockConfigRequest &request);
                void ModifyDDoSGeoIPBlockConfigAsync(const Model::ModifyDDoSGeoIPBlockConfigRequest& request, const ModifyDDoSGeoIPBlockConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSGeoIPBlockConfigOutcomeCallable ModifyDDoSGeoIPBlockConfigCallable(const Model::ModifyDDoSGeoIPBlockConfigRequest& request);

                /**
                 *This API is used to modify Anti-DDoS access rate limit configurations.
                 * @param req ModifyDDoSSpeedLimitConfigRequest
                 * @return ModifyDDoSSpeedLimitConfigOutcome
                 */
                ModifyDDoSSpeedLimitConfigOutcome ModifyDDoSSpeedLimitConfig(const Model::ModifyDDoSSpeedLimitConfigRequest &request);
                void ModifyDDoSSpeedLimitConfigAsync(const Model::ModifyDDoSSpeedLimitConfigRequest& request, const ModifyDDoSSpeedLimitConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDDoSSpeedLimitConfigOutcomeCallable ModifyDDoSSpeedLimitConfigCallable(const Model::ModifyDDoSSpeedLimitConfigRequest& request);

                /**
                 *This API is used to modify intelligent scheduling domain names.
                 * @param req ModifyDomainUsrNameRequest
                 * @return ModifyDomainUsrNameOutcome
                 */
                ModifyDomainUsrNameOutcome ModifyDomainUsrName(const Model::ModifyDomainUsrNameRequest &request);
                void ModifyDomainUsrNameAsync(const Model::ModifyDomainUsrNameRequest& request, const ModifyDomainUsrNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainUsrNameOutcomeCallable ModifyDomainUsrNameCallable(const Model::ModifyDomainUsrNameRequest& request);

                /**
                 *This API is used to modify layer-7 forwarding rules.
                 * @param req ModifyNewDomainRulesRequest
                 * @return ModifyNewDomainRulesOutcome
                 */
                ModifyNewDomainRulesOutcome ModifyNewDomainRules(const Model::ModifyNewDomainRulesRequest &request);
                void ModifyNewDomainRulesAsync(const Model::ModifyNewDomainRulesRequest& request, const ModifyNewDomainRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNewDomainRulesOutcomeCallable ModifyNewDomainRulesCallable(const Model::ModifyNewDomainRulesRequest& request);

                /**
                 *This API is used to modify Anti-DDoS feature filtering rules.
                 * @param req ModifyPacketFilterConfigRequest
                 * @return ModifyPacketFilterConfigOutcome
                 */
                ModifyPacketFilterConfigOutcome ModifyPacketFilterConfig(const Model::ModifyPacketFilterConfigRequest &request);
                void ModifyPacketFilterConfigAsync(const Model::ModifyPacketFilterConfigRequest& request, const ModifyPacketFilterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPacketFilterConfigOutcomeCallable ModifyPacketFilterConfigCallable(const Model::ModifyPacketFilterConfigRequest& request);

                /**
                 *This API is used to enable or disable Anti-DDoS watermark configurations.
                 * @param req SwitchWaterPrintConfigRequest
                 * @return SwitchWaterPrintConfigOutcome
                 */
                SwitchWaterPrintConfigOutcome SwitchWaterPrintConfig(const Model::SwitchWaterPrintConfigRequest &request);
                void SwitchWaterPrintConfigAsync(const Model::SwitchWaterPrintConfigRequest& request, const SwitchWaterPrintConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchWaterPrintConfigOutcomeCallable SwitchWaterPrintConfigCallable(const Model::SwitchWaterPrintConfigRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_ANTIDDOSCLIENT_H_
