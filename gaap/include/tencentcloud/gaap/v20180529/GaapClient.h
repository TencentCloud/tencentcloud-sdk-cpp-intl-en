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

#ifndef TENCENTCLOUD_GAAP_V20180529_GAAPCLIENT_H_
#define TENCENTCLOUD_GAAP_V20180529_GAAPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gaap/v20180529/model/AddRealServersRequest.h>
#include <tencentcloud/gaap/v20180529/model/AddRealServersResponse.h>
#include <tencentcloud/gaap/v20180529/model/BindListenerRealServersRequest.h>
#include <tencentcloud/gaap/v20180529/model/BindListenerRealServersResponse.h>
#include <tencentcloud/gaap/v20180529/model/BindRuleRealServersRequest.h>
#include <tencentcloud/gaap/v20180529/model/BindRuleRealServersResponse.h>
#include <tencentcloud/gaap/v20180529/model/CheckProxyCreateRequest.h>
#include <tencentcloud/gaap/v20180529/model/CheckProxyCreateResponse.h>
#include <tencentcloud/gaap/v20180529/model/CloseProxiesRequest.h>
#include <tencentcloud/gaap/v20180529/model/CloseProxiesResponse.h>
#include <tencentcloud/gaap/v20180529/model/CloseProxyGroupRequest.h>
#include <tencentcloud/gaap/v20180529/model/CloseProxyGroupResponse.h>
#include <tencentcloud/gaap/v20180529/model/CloseSecurityPolicyRequest.h>
#include <tencentcloud/gaap/v20180529/model/CloseSecurityPolicyResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateCertificateRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateCertificateResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateCustomHeaderRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateCustomHeaderResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateDomainRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateDomainResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateDomainErrorPageInfoRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateDomainErrorPageInfoResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateHTTPListenerRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateHTTPListenerResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateHTTPSListenerRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateHTTPSListenerResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateProxyRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateProxyResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateProxyGroupRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateProxyGroupResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateProxyGroupDomainRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateProxyGroupDomainResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateRuleRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateRuleResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateSecurityPolicyRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateSecurityPolicyResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateSecurityRulesRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateSecurityRulesResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateTCPListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateTCPListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/CreateUDPListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/CreateUDPListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteCertificateRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteCertificateResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteDomainRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteDomainResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteDomainErrorPageInfoRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteDomainErrorPageInfoResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteProxyGroupRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteProxyGroupResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteRuleRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteRuleResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteSecurityPolicyRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteSecurityPolicyResponse.h>
#include <tencentcloud/gaap/v20180529/model/DeleteSecurityRulesRequest.h>
#include <tencentcloud/gaap/v20180529/model/DeleteSecurityRulesResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeAccessRegionsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeAccessRegionsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeAccessRegionsByDestRegionRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeAccessRegionsByDestRegionResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeBlackHeaderRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeBlackHeaderResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCertificateDetailRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCertificateDetailResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCertificatesRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCertificatesResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCountryAreaMappingRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCountryAreaMappingResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCustomHeaderRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeCustomHeaderResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeDestRegionsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeDestRegionsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeDomainErrorPageInfoRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeDomainErrorPageInfoResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeDomainErrorPageInfoByIdsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeDomainErrorPageInfoByIdsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeGroupAndStatisticsProxyRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeGroupAndStatisticsProxyResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeGroupDomainConfigRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeGroupDomainConfigResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeHTTPListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeHTTPListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeHTTPSListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeHTTPSListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeListenerRealServersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeListenerRealServersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeListenerStatisticsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeListenerStatisticsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxiesRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxiesResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxiesStatusRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxiesStatusResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyAndStatisticsListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyAndStatisticsListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyDetailRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyDetailResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyGroupDetailsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyGroupDetailsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyGroupListRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyGroupListResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyGroupStatisticsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyGroupStatisticsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyStatisticsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeProxyStatisticsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRealServerStatisticsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRealServerStatisticsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRealServersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRealServersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRealServersStatusRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRealServersStatusResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRegionAndPriceRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRegionAndPriceResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeResourcesByTagRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeResourcesByTagResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRuleRealServersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRuleRealServersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRulesRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRulesResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRulesByRuleIdsRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeRulesByRuleIdsResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeSecurityPolicyDetailRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeSecurityPolicyDetailResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeSecurityRulesRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeSecurityRulesResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeTCPListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeTCPListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DescribeUDPListenersRequest.h>
#include <tencentcloud/gaap/v20180529/model/DescribeUDPListenersResponse.h>
#include <tencentcloud/gaap/v20180529/model/DestroyProxiesRequest.h>
#include <tencentcloud/gaap/v20180529/model/DestroyProxiesResponse.h>
#include <tencentcloud/gaap/v20180529/model/InquiryPriceCreateProxyRequest.h>
#include <tencentcloud/gaap/v20180529/model/InquiryPriceCreateProxyResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyCertificateRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyCertificateResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyCertificateAttributesRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyCertificateAttributesResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyDomainRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyDomainResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyGroupDomainConfigRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyGroupDomainConfigResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyHTTPListenerAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyHTTPListenerAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyHTTPSListenerAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyHTTPSListenerAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxiesAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxiesAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxiesProjectRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxiesProjectResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxyConfigurationRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxyConfigurationResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxyGroupAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyProxyGroupAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyRealServerNameRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyRealServerNameResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyRuleAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyRuleAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifySecurityRuleRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifySecurityRuleResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyTCPListenerAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyTCPListenerAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/ModifyUDPListenerAttributeRequest.h>
#include <tencentcloud/gaap/v20180529/model/ModifyUDPListenerAttributeResponse.h>
#include <tencentcloud/gaap/v20180529/model/OpenProxiesRequest.h>
#include <tencentcloud/gaap/v20180529/model/OpenProxiesResponse.h>
#include <tencentcloud/gaap/v20180529/model/OpenProxyGroupRequest.h>
#include <tencentcloud/gaap/v20180529/model/OpenProxyGroupResponse.h>
#include <tencentcloud/gaap/v20180529/model/OpenSecurityPolicyRequest.h>
#include <tencentcloud/gaap/v20180529/model/OpenSecurityPolicyResponse.h>
#include <tencentcloud/gaap/v20180529/model/RemoveRealServersRequest.h>
#include <tencentcloud/gaap/v20180529/model/RemoveRealServersResponse.h>
#include <tencentcloud/gaap/v20180529/model/SetAuthenticationRequest.h>
#include <tencentcloud/gaap/v20180529/model/SetAuthenticationResponse.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            class GaapClient : public AbstractClient
            {
            public:
                GaapClient(const Credential &credential, const std::string &region);
                GaapClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddRealServersResponse> AddRealServersOutcome;
                typedef std::future<AddRealServersOutcome> AddRealServersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::AddRealServersRequest&, AddRealServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddRealServersAsyncHandler;
                typedef Outcome<Core::Error, Model::BindListenerRealServersResponse> BindListenerRealServersOutcome;
                typedef std::future<BindListenerRealServersOutcome> BindListenerRealServersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::BindListenerRealServersRequest&, BindListenerRealServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindListenerRealServersAsyncHandler;
                typedef Outcome<Core::Error, Model::BindRuleRealServersResponse> BindRuleRealServersOutcome;
                typedef std::future<BindRuleRealServersOutcome> BindRuleRealServersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::BindRuleRealServersRequest&, BindRuleRealServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindRuleRealServersAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckProxyCreateResponse> CheckProxyCreateOutcome;
                typedef std::future<CheckProxyCreateOutcome> CheckProxyCreateOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CheckProxyCreateRequest&, CheckProxyCreateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckProxyCreateAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseProxiesResponse> CloseProxiesOutcome;
                typedef std::future<CloseProxiesOutcome> CloseProxiesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CloseProxiesRequest&, CloseProxiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseProxiesAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseProxyGroupResponse> CloseProxyGroupOutcome;
                typedef std::future<CloseProxyGroupOutcome> CloseProxyGroupOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CloseProxyGroupRequest&, CloseProxyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseProxyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseSecurityPolicyResponse> CloseSecurityPolicyOutcome;
                typedef std::future<CloseSecurityPolicyOutcome> CloseSecurityPolicyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CloseSecurityPolicyRequest&, CloseSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCertificateResponse> CreateCertificateOutcome;
                typedef std::future<CreateCertificateOutcome> CreateCertificateOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateCertificateRequest&, CreateCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomHeaderResponse> CreateCustomHeaderOutcome;
                typedef std::future<CreateCustomHeaderOutcome> CreateCustomHeaderOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateCustomHeaderRequest&, CreateCustomHeaderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomHeaderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainResponse> CreateDomainOutcome;
                typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateDomainRequest&, CreateDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDomainErrorPageInfoResponse> CreateDomainErrorPageInfoOutcome;
                typedef std::future<CreateDomainErrorPageInfoOutcome> CreateDomainErrorPageInfoOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateDomainErrorPageInfoRequest&, CreateDomainErrorPageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainErrorPageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHTTPListenerResponse> CreateHTTPListenerOutcome;
                typedef std::future<CreateHTTPListenerOutcome> CreateHTTPListenerOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateHTTPListenerRequest&, CreateHTTPListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHTTPListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHTTPSListenerResponse> CreateHTTPSListenerOutcome;
                typedef std::future<CreateHTTPSListenerOutcome> CreateHTTPSListenerOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateHTTPSListenerRequest&, CreateHTTPSListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHTTPSListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProxyResponse> CreateProxyOutcome;
                typedef std::future<CreateProxyOutcome> CreateProxyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateProxyRequest&, CreateProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProxyGroupResponse> CreateProxyGroupOutcome;
                typedef std::future<CreateProxyGroupOutcome> CreateProxyGroupOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateProxyGroupRequest&, CreateProxyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProxyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProxyGroupDomainResponse> CreateProxyGroupDomainOutcome;
                typedef std::future<CreateProxyGroupDomainOutcome> CreateProxyGroupDomainOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateProxyGroupDomainRequest&, CreateProxyGroupDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProxyGroupDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityPolicyResponse> CreateSecurityPolicyOutcome;
                typedef std::future<CreateSecurityPolicyOutcome> CreateSecurityPolicyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateSecurityPolicyRequest&, CreateSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityRulesResponse> CreateSecurityRulesOutcome;
                typedef std::future<CreateSecurityRulesOutcome> CreateSecurityRulesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateSecurityRulesRequest&, CreateSecurityRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTCPListenersResponse> CreateTCPListenersOutcome;
                typedef std::future<CreateTCPListenersOutcome> CreateTCPListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateTCPListenersRequest&, CreateTCPListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTCPListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateUDPListenersResponse> CreateUDPListenersOutcome;
                typedef std::future<CreateUDPListenersOutcome> CreateUDPListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::CreateUDPListenersRequest&, CreateUDPListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUDPListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCertificateResponse> DeleteCertificateOutcome;
                typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteCertificateRequest&, DeleteCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainResponse> DeleteDomainOutcome;
                typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteDomainRequest&, DeleteDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDomainErrorPageInfoResponse> DeleteDomainErrorPageInfoOutcome;
                typedef std::future<DeleteDomainErrorPageInfoOutcome> DeleteDomainErrorPageInfoOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteDomainErrorPageInfoRequest&, DeleteDomainErrorPageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainErrorPageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteListenersResponse> DeleteListenersOutcome;
                typedef std::future<DeleteListenersOutcome> DeleteListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteListenersRequest&, DeleteListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProxyGroupResponse> DeleteProxyGroupOutcome;
                typedef std::future<DeleteProxyGroupOutcome> DeleteProxyGroupOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteProxyGroupRequest&, DeleteProxyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProxyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRuleResponse> DeleteRuleOutcome;
                typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteRuleRequest&, DeleteRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityPolicyResponse> DeleteSecurityPolicyOutcome;
                typedef std::future<DeleteSecurityPolicyOutcome> DeleteSecurityPolicyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteSecurityPolicyRequest&, DeleteSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityRulesResponse> DeleteSecurityRulesOutcome;
                typedef std::future<DeleteSecurityRulesOutcome> DeleteSecurityRulesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DeleteSecurityRulesRequest&, DeleteSecurityRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessRegionsResponse> DescribeAccessRegionsOutcome;
                typedef std::future<DescribeAccessRegionsOutcome> DescribeAccessRegionsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeAccessRegionsRequest&, DescribeAccessRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccessRegionsByDestRegionResponse> DescribeAccessRegionsByDestRegionOutcome;
                typedef std::future<DescribeAccessRegionsByDestRegionOutcome> DescribeAccessRegionsByDestRegionOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeAccessRegionsByDestRegionRequest&, DescribeAccessRegionsByDestRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessRegionsByDestRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBlackHeaderResponse> DescribeBlackHeaderOutcome;
                typedef std::future<DescribeBlackHeaderOutcome> DescribeBlackHeaderOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeBlackHeaderRequest&, DescribeBlackHeaderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlackHeaderAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificateDetailResponse> DescribeCertificateDetailOutcome;
                typedef std::future<DescribeCertificateDetailOutcome> DescribeCertificateDetailOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeCertificateDetailRequest&, DescribeCertificateDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificateDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertificatesResponse> DescribeCertificatesOutcome;
                typedef std::future<DescribeCertificatesOutcome> DescribeCertificatesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeCertificatesRequest&, DescribeCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCountryAreaMappingResponse> DescribeCountryAreaMappingOutcome;
                typedef std::future<DescribeCountryAreaMappingOutcome> DescribeCountryAreaMappingOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeCountryAreaMappingRequest&, DescribeCountryAreaMappingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCountryAreaMappingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomHeaderResponse> DescribeCustomHeaderOutcome;
                typedef std::future<DescribeCustomHeaderOutcome> DescribeCustomHeaderOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeCustomHeaderRequest&, DescribeCustomHeaderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomHeaderAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDestRegionsResponse> DescribeDestRegionsOutcome;
                typedef std::future<DescribeDestRegionsOutcome> DescribeDestRegionsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeDestRegionsRequest&, DescribeDestRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDestRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainErrorPageInfoResponse> DescribeDomainErrorPageInfoOutcome;
                typedef std::future<DescribeDomainErrorPageInfoOutcome> DescribeDomainErrorPageInfoOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeDomainErrorPageInfoRequest&, DescribeDomainErrorPageInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainErrorPageInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDomainErrorPageInfoByIdsResponse> DescribeDomainErrorPageInfoByIdsOutcome;
                typedef std::future<DescribeDomainErrorPageInfoByIdsOutcome> DescribeDomainErrorPageInfoByIdsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeDomainErrorPageInfoByIdsRequest&, DescribeDomainErrorPageInfoByIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainErrorPageInfoByIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupAndStatisticsProxyResponse> DescribeGroupAndStatisticsProxyOutcome;
                typedef std::future<DescribeGroupAndStatisticsProxyOutcome> DescribeGroupAndStatisticsProxyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeGroupAndStatisticsProxyRequest&, DescribeGroupAndStatisticsProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupAndStatisticsProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGroupDomainConfigResponse> DescribeGroupDomainConfigOutcome;
                typedef std::future<DescribeGroupDomainConfigOutcome> DescribeGroupDomainConfigOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeGroupDomainConfigRequest&, DescribeGroupDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupDomainConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHTTPListenersResponse> DescribeHTTPListenersOutcome;
                typedef std::future<DescribeHTTPListenersOutcome> DescribeHTTPListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeHTTPListenersRequest&, DescribeHTTPListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHTTPListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHTTPSListenersResponse> DescribeHTTPSListenersOutcome;
                typedef std::future<DescribeHTTPSListenersOutcome> DescribeHTTPSListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeHTTPSListenersRequest&, DescribeHTTPSListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHTTPSListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenerRealServersResponse> DescribeListenerRealServersOutcome;
                typedef std::future<DescribeListenerRealServersOutcome> DescribeListenerRealServersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeListenerRealServersRequest&, DescribeListenerRealServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerRealServersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenerStatisticsResponse> DescribeListenerStatisticsOutcome;
                typedef std::future<DescribeListenerStatisticsOutcome> DescribeListenerStatisticsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeListenerStatisticsRequest&, DescribeListenerStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxiesResponse> DescribeProxiesOutcome;
                typedef std::future<DescribeProxiesOutcome> DescribeProxiesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxiesRequest&, DescribeProxiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxiesStatusResponse> DescribeProxiesStatusOutcome;
                typedef std::future<DescribeProxiesStatusOutcome> DescribeProxiesStatusOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxiesStatusRequest&, DescribeProxiesStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxiesStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyAndStatisticsListenersResponse> DescribeProxyAndStatisticsListenersOutcome;
                typedef std::future<DescribeProxyAndStatisticsListenersOutcome> DescribeProxyAndStatisticsListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxyAndStatisticsListenersRequest&, DescribeProxyAndStatisticsListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyAndStatisticsListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyDetailResponse> DescribeProxyDetailOutcome;
                typedef std::future<DescribeProxyDetailOutcome> DescribeProxyDetailOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxyDetailRequest&, DescribeProxyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyGroupDetailsResponse> DescribeProxyGroupDetailsOutcome;
                typedef std::future<DescribeProxyGroupDetailsOutcome> DescribeProxyGroupDetailsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxyGroupDetailsRequest&, DescribeProxyGroupDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyGroupDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyGroupListResponse> DescribeProxyGroupListOutcome;
                typedef std::future<DescribeProxyGroupListOutcome> DescribeProxyGroupListOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxyGroupListRequest&, DescribeProxyGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyGroupStatisticsResponse> DescribeProxyGroupStatisticsOutcome;
                typedef std::future<DescribeProxyGroupStatisticsOutcome> DescribeProxyGroupStatisticsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxyGroupStatisticsRequest&, DescribeProxyGroupStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyGroupStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProxyStatisticsResponse> DescribeProxyStatisticsOutcome;
                typedef std::future<DescribeProxyStatisticsOutcome> DescribeProxyStatisticsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeProxyStatisticsRequest&, DescribeProxyStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProxyStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRealServerStatisticsResponse> DescribeRealServerStatisticsOutcome;
                typedef std::future<DescribeRealServerStatisticsOutcome> DescribeRealServerStatisticsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeRealServerStatisticsRequest&, DescribeRealServerStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealServerStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRealServersResponse> DescribeRealServersOutcome;
                typedef std::future<DescribeRealServersOutcome> DescribeRealServersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeRealServersRequest&, DescribeRealServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealServersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRealServersStatusResponse> DescribeRealServersStatusOutcome;
                typedef std::future<DescribeRealServersStatusOutcome> DescribeRealServersStatusOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeRealServersStatusRequest&, DescribeRealServersStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealServersStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionAndPriceResponse> DescribeRegionAndPriceOutcome;
                typedef std::future<DescribeRegionAndPriceOutcome> DescribeRegionAndPriceOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeRegionAndPriceRequest&, DescribeRegionAndPriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionAndPriceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcesByTagResponse> DescribeResourcesByTagOutcome;
                typedef std::future<DescribeResourcesByTagOutcome> DescribeResourcesByTagOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeResourcesByTagRequest&, DescribeResourcesByTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesByTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRuleRealServersResponse> DescribeRuleRealServersOutcome;
                typedef std::future<DescribeRuleRealServersOutcome> DescribeRuleRealServersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeRuleRealServersRequest&, DescribeRuleRealServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleRealServersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesResponse> DescribeRulesOutcome;
                typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeRulesRequest&, DescribeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesByRuleIdsResponse> DescribeRulesByRuleIdsOutcome;
                typedef std::future<DescribeRulesByRuleIdsOutcome> DescribeRulesByRuleIdsOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeRulesByRuleIdsRequest&, DescribeRulesByRuleIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesByRuleIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyDetailResponse> DescribeSecurityPolicyDetailOutcome;
                typedef std::future<DescribeSecurityPolicyDetailOutcome> DescribeSecurityPolicyDetailOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeSecurityPolicyDetailRequest&, DescribeSecurityPolicyDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityRulesResponse> DescribeSecurityRulesOutcome;
                typedef std::future<DescribeSecurityRulesOutcome> DescribeSecurityRulesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeSecurityRulesRequest&, DescribeSecurityRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTCPListenersResponse> DescribeTCPListenersOutcome;
                typedef std::future<DescribeTCPListenersOutcome> DescribeTCPListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeTCPListenersRequest&, DescribeTCPListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTCPListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUDPListenersResponse> DescribeUDPListenersOutcome;
                typedef std::future<DescribeUDPListenersOutcome> DescribeUDPListenersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DescribeUDPListenersRequest&, DescribeUDPListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUDPListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyProxiesResponse> DestroyProxiesOutcome;
                typedef std::future<DestroyProxiesOutcome> DestroyProxiesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::DestroyProxiesRequest&, DestroyProxiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyProxiesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceCreateProxyResponse> InquiryPriceCreateProxyOutcome;
                typedef std::future<InquiryPriceCreateProxyOutcome> InquiryPriceCreateProxyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::InquiryPriceCreateProxyRequest&, InquiryPriceCreateProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCertificateResponse> ModifyCertificateOutcome;
                typedef std::future<ModifyCertificateOutcome> ModifyCertificateOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyCertificateRequest&, ModifyCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCertificateAttributesResponse> ModifyCertificateAttributesOutcome;
                typedef std::future<ModifyCertificateAttributesOutcome> ModifyCertificateAttributesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyCertificateAttributesRequest&, ModifyCertificateAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCertificateAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDomainResponse> ModifyDomainOutcome;
                typedef std::future<ModifyDomainOutcome> ModifyDomainOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyDomainRequest&, ModifyDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGroupDomainConfigResponse> ModifyGroupDomainConfigOutcome;
                typedef std::future<ModifyGroupDomainConfigOutcome> ModifyGroupDomainConfigOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyGroupDomainConfigRequest&, ModifyGroupDomainConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupDomainConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHTTPListenerAttributeResponse> ModifyHTTPListenerAttributeOutcome;
                typedef std::future<ModifyHTTPListenerAttributeOutcome> ModifyHTTPListenerAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyHTTPListenerAttributeRequest&, ModifyHTTPListenerAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHTTPListenerAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHTTPSListenerAttributeResponse> ModifyHTTPSListenerAttributeOutcome;
                typedef std::future<ModifyHTTPSListenerAttributeOutcome> ModifyHTTPSListenerAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyHTTPSListenerAttributeRequest&, ModifyHTTPSListenerAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHTTPSListenerAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProxiesAttributeResponse> ModifyProxiesAttributeOutcome;
                typedef std::future<ModifyProxiesAttributeOutcome> ModifyProxiesAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyProxiesAttributeRequest&, ModifyProxiesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProxiesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProxiesProjectResponse> ModifyProxiesProjectOutcome;
                typedef std::future<ModifyProxiesProjectOutcome> ModifyProxiesProjectOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyProxiesProjectRequest&, ModifyProxiesProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProxiesProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProxyConfigurationResponse> ModifyProxyConfigurationOutcome;
                typedef std::future<ModifyProxyConfigurationOutcome> ModifyProxyConfigurationOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyProxyConfigurationRequest&, ModifyProxyConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProxyConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProxyGroupAttributeResponse> ModifyProxyGroupAttributeOutcome;
                typedef std::future<ModifyProxyGroupAttributeOutcome> ModifyProxyGroupAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyProxyGroupAttributeRequest&, ModifyProxyGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProxyGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRealServerNameResponse> ModifyRealServerNameOutcome;
                typedef std::future<ModifyRealServerNameOutcome> ModifyRealServerNameOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyRealServerNameRequest&, ModifyRealServerNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRealServerNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleAttributeResponse> ModifyRuleAttributeOutcome;
                typedef std::future<ModifyRuleAttributeOutcome> ModifyRuleAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyRuleAttributeRequest&, ModifyRuleAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityRuleResponse> ModifySecurityRuleOutcome;
                typedef std::future<ModifySecurityRuleOutcome> ModifySecurityRuleOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifySecurityRuleRequest&, ModifySecurityRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTCPListenerAttributeResponse> ModifyTCPListenerAttributeOutcome;
                typedef std::future<ModifyTCPListenerAttributeOutcome> ModifyTCPListenerAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyTCPListenerAttributeRequest&, ModifyTCPListenerAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTCPListenerAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyUDPListenerAttributeResponse> ModifyUDPListenerAttributeOutcome;
                typedef std::future<ModifyUDPListenerAttributeOutcome> ModifyUDPListenerAttributeOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::ModifyUDPListenerAttributeRequest&, ModifyUDPListenerAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUDPListenerAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenProxiesResponse> OpenProxiesOutcome;
                typedef std::future<OpenProxiesOutcome> OpenProxiesOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::OpenProxiesRequest&, OpenProxiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenProxiesAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenProxyGroupResponse> OpenProxyGroupOutcome;
                typedef std::future<OpenProxyGroupOutcome> OpenProxyGroupOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::OpenProxyGroupRequest&, OpenProxyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenProxyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenSecurityPolicyResponse> OpenSecurityPolicyOutcome;
                typedef std::future<OpenSecurityPolicyOutcome> OpenSecurityPolicyOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::OpenSecurityPolicyRequest&, OpenSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveRealServersResponse> RemoveRealServersOutcome;
                typedef std::future<RemoveRealServersOutcome> RemoveRealServersOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::RemoveRealServersRequest&, RemoveRealServersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveRealServersAsyncHandler;
                typedef Outcome<Core::Error, Model::SetAuthenticationResponse> SetAuthenticationOutcome;
                typedef std::future<SetAuthenticationOutcome> SetAuthenticationOutcomeCallable;
                typedef std::function<void(const GaapClient*, const Model::SetAuthenticationRequest&, SetAuthenticationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetAuthenticationAsyncHandler;



                /**
                 *This API is used to add the information of the origin server (server), which supports IP or the domain name.
                 * @param req AddRealServersRequest
                 * @return AddRealServersOutcome
                 */
                AddRealServersOutcome AddRealServers(const Model::AddRealServersRequest &request);
                void AddRealServersAsync(const Model::AddRealServersRequest& request, const AddRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddRealServersOutcomeCallable AddRealServersCallable(const Model::AddRealServersRequest& request);

                /**
                 *This API (BindListenerRealServers) is used for the TCP/UDP listener to bind/unbind the origin server.
Note: This API unbinds the previously bound origin servers, and binds the origin servers selected for this call. For example, the previously bound origin servers are A, B and C, and the origin servers selected for this call are C, D and E, then the origin servers bound after this call will be C, D and E.
                 * @param req BindListenerRealServersRequest
                 * @return BindListenerRealServersOutcome
                 */
                BindListenerRealServersOutcome BindListenerRealServers(const Model::BindListenerRealServersRequest &request);
                void BindListenerRealServersAsync(const Model::BindListenerRealServersRequest& request, const BindListenerRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindListenerRealServersOutcomeCallable BindListenerRealServersCallable(const Model::BindListenerRealServersRequest& request);

                /**
                 *This API is used to bind an origin server to the forwarding rules of layer-7 listeners. Note: This API unbinds all previously bound origin servers before binding those selected.
                 * @param req BindRuleRealServersRequest
                 * @return BindRuleRealServersOutcome
                 */
                BindRuleRealServersOutcome BindRuleRealServers(const Model::BindRuleRealServersRequest &request);
                void BindRuleRealServersAsync(const Model::BindRuleRealServersRequest& request, const BindRuleRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindRuleRealServersOutcomeCallable BindRuleRealServersCallable(const Model::BindRuleRealServersRequest& request);

                /**
                 *This API (CheckProxyCreate) is used to query whether an acceleration connection with the specified configuration can be created.
                 * @param req CheckProxyCreateRequest
                 * @return CheckProxyCreateOutcome
                 */
                CheckProxyCreateOutcome CheckProxyCreate(const Model::CheckProxyCreateRequest &request);
                void CheckProxyCreateAsync(const Model::CheckProxyCreateRequest& request, const CheckProxyCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckProxyCreateOutcomeCallable CheckProxyCreateCallable(const Model::CheckProxyCreateRequest& request);

                /**
                 *This API (CloseProxies) is used to disable connections. If disabled, no traffic will be generated, but the basic configuration fee will still be incurred.
                 * @param req CloseProxiesRequest
                 * @return CloseProxiesOutcome
                 */
                CloseProxiesOutcome CloseProxies(const Model::CloseProxiesRequest &request);
                void CloseProxiesAsync(const Model::CloseProxiesRequest& request, const CloseProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseProxiesOutcomeCallable CloseProxiesCallable(const Model::CloseProxiesRequest& request);

                /**
                 *This API is used to disable a connection group. Once disabled, the connection group will no longer generate traffic, but the basic connection configuration fees will still be incurred every day.
                 * @param req CloseProxyGroupRequest
                 * @return CloseProxyGroupOutcome
                 */
                CloseProxyGroupOutcome CloseProxyGroup(const Model::CloseProxyGroupRequest &request);
                void CloseProxyGroupAsync(const Model::CloseProxyGroupRequest& request, const CloseProxyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseProxyGroupOutcomeCallable CloseProxyGroupCallable(const Model::CloseProxyGroupRequest& request);

                /**
                 *This API is used to disable security policies.
                 * @param req CloseSecurityPolicyRequest
                 * @return CloseSecurityPolicyOutcome
                 */
                CloseSecurityPolicyOutcome CloseSecurityPolicy(const Model::CloseSecurityPolicyRequest &request);
                void CloseSecurityPolicyAsync(const Model::CloseSecurityPolicyRequest& request, const CloseSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseSecurityPolicyOutcomeCallable CloseSecurityPolicyCallable(const Model::CloseSecurityPolicyRequest& request);

                /**
                 *This API (CreateCertificate) is used to create the GAAP certificates and configuration files, including basic authentication configuration files, client CA certificates, server SSL certificates, GAAP SSL certificates, and origin server CA certificates.
                 * @param req CreateCertificateRequest
                 * @return CreateCertificateOutcome
                 */
                CreateCertificateOutcome CreateCertificate(const Model::CreateCertificateRequest &request);
                void CreateCertificateAsync(const Model::CreateCertificateRequest& request, const CreateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCertificateOutcomeCallable CreateCertificateCallable(const Model::CreateCertificateRequest& request);

                /**
                 *This API is used to create a custom header of the HTTP/HTTPS listener. When client requests reach the listener, they will be forwarded to the origin with this custom hearer.
                 * @param req CreateCustomHeaderRequest
                 * @return CreateCustomHeaderOutcome
                 */
                CreateCustomHeaderOutcome CreateCustomHeader(const Model::CreateCustomHeaderRequest &request);
                void CreateCustomHeaderAsync(const Model::CreateCustomHeaderRequest& request, const CreateCustomHeaderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomHeaderOutcomeCallable CreateCustomHeaderCallable(const Model::CreateCustomHeaderRequest& request);

                /**
                 *This API (CreateDomain) is used to create the access domain name for the HTTP/HTTPS listener. Clients request the backend data by accessing this domain.
This API only supports connections of version 3.0.
                 * @param req CreateDomainRequest
                 * @return CreateDomainOutcome
                 */
                CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest &request);
                void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request);

                /**
                 *This API is used to customize the error code of an error response to the specified domain name.
                 * @param req CreateDomainErrorPageInfoRequest
                 * @return CreateDomainErrorPageInfoOutcome
                 */
                CreateDomainErrorPageInfoOutcome CreateDomainErrorPageInfo(const Model::CreateDomainErrorPageInfoRequest &request);
                void CreateDomainErrorPageInfoAsync(const Model::CreateDomainErrorPageInfoRequest& request, const CreateDomainErrorPageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDomainErrorPageInfoOutcomeCallable CreateDomainErrorPageInfoCallable(const Model::CreateDomainErrorPageInfoRequest& request);

                /**
                 *This API (CreateHTTPListener) is used to create an HTTP listener in the connection instance.
                 * @param req CreateHTTPListenerRequest
                 * @return CreateHTTPListenerOutcome
                 */
                CreateHTTPListenerOutcome CreateHTTPListener(const Model::CreateHTTPListenerRequest &request);
                void CreateHTTPListenerAsync(const Model::CreateHTTPListenerRequest& request, const CreateHTTPListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHTTPListenerOutcomeCallable CreateHTTPListenerCallable(const Model::CreateHTTPListenerRequest& request);

                /**
                 *This API (CreateHTTPListener) is used to create an HTTPS listener in the connection instance.
                 * @param req CreateHTTPSListenerRequest
                 * @return CreateHTTPSListenerOutcome
                 */
                CreateHTTPSListenerOutcome CreateHTTPSListener(const Model::CreateHTTPSListenerRequest &request);
                void CreateHTTPSListenerAsync(const Model::CreateHTTPSListenerRequest& request, const CreateHTTPSListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHTTPSListenerOutcomeCallable CreateHTTPSListenerCallable(const Model::CreateHTTPSListenerRequest& request);

                /**
                 *This API (CreateProxy) is used to create an acceleration connection with specified configuration.
                 * @param req CreateProxyRequest
                 * @return CreateProxyOutcome
                 */
                CreateProxyOutcome CreateProxy(const Model::CreateProxyRequest &request);
                void CreateProxyAsync(const Model::CreateProxyRequest& request, const CreateProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProxyOutcomeCallable CreateProxyCallable(const Model::CreateProxyRequest& request);

                /**
                 *This API (CreateProxyGroup) is used to create a connection group.
                 * @param req CreateProxyGroupRequest
                 * @return CreateProxyGroupOutcome
                 */
                CreateProxyGroupOutcome CreateProxyGroup(const Model::CreateProxyGroupRequest &request);
                void CreateProxyGroupAsync(const Model::CreateProxyGroupRequest& request, const CreateProxyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProxyGroupOutcomeCallable CreateProxyGroupCallable(const Model::CreateProxyGroupRequest& request);

                /**
                 *This API (CreateProxyGroupDomain) is used to create the connection group domain name, and enable the domain name resolution.
                 * @param req CreateProxyGroupDomainRequest
                 * @return CreateProxyGroupDomainOutcome
                 */
                CreateProxyGroupDomainOutcome CreateProxyGroupDomain(const Model::CreateProxyGroupDomainRequest &request);
                void CreateProxyGroupDomainAsync(const Model::CreateProxyGroupDomainRequest& request, const CreateProxyGroupDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProxyGroupDomainOutcomeCallable CreateProxyGroupDomainCallable(const Model::CreateProxyGroupDomainRequest& request);

                /**
                 *This API (CreateRule) is used to create the forwarding rules of HTTP/HTTPS listeners.
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *This API is used to create security policies.
                 * @param req CreateSecurityPolicyRequest
                 * @return CreateSecurityPolicyOutcome
                 */
                CreateSecurityPolicyOutcome CreateSecurityPolicy(const Model::CreateSecurityPolicyRequest &request);
                void CreateSecurityPolicyAsync(const Model::CreateSecurityPolicyRequest& request, const CreateSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityPolicyOutcomeCallable CreateSecurityPolicyCallable(const Model::CreateSecurityPolicyRequest& request);

                /**
                 *This API is used to add security policy rules.
                 * @param req CreateSecurityRulesRequest
                 * @return CreateSecurityRulesOutcome
                 */
                CreateSecurityRulesOutcome CreateSecurityRules(const Model::CreateSecurityRulesRequest &request);
                void CreateSecurityRulesAsync(const Model::CreateSecurityRulesRequest& request, const CreateSecurityRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityRulesOutcomeCallable CreateSecurityRulesCallable(const Model::CreateSecurityRulesRequest& request);

                /**
                 *This API (CreateTCPListeners) is used to batch create TCP listeners of single connections or connection groups.
                 * @param req CreateTCPListenersRequest
                 * @return CreateTCPListenersOutcome
                 */
                CreateTCPListenersOutcome CreateTCPListeners(const Model::CreateTCPListenersRequest &request);
                void CreateTCPListenersAsync(const Model::CreateTCPListenersRequest& request, const CreateTCPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTCPListenersOutcomeCallable CreateTCPListenersCallable(const Model::CreateTCPListenersRequest& request);

                /**
                 *This API (CreateTCPListeners) is used to batch create UDP listeners of single connections or connection groups.
                 * @param req CreateUDPListenersRequest
                 * @return CreateUDPListenersOutcome
                 */
                CreateUDPListenersOutcome CreateUDPListeners(const Model::CreateUDPListenersRequest &request);
                void CreateUDPListenersAsync(const Model::CreateUDPListenersRequest& request, const CreateUDPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUDPListenersOutcomeCallable CreateUDPListenersCallable(const Model::CreateUDPListenersRequest& request);

                /**
                 *This API (DeleteCertificate) is used to delete certificates.
                 * @param req DeleteCertificateRequest
                 * @return DeleteCertificateOutcome
                 */
                DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest &request);
                void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request);

                /**
                 *This API (DeleteDomain) is only applicable to layer-7 listeners. It is used to delete the domain names of this listener, and all the rules under the domain name. All rules bound to the origin server are unbound automatically.
                 * @param req DeleteDomainRequest
                 * @return DeleteDomainOutcome
                 */
                DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest &request);
                void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request);

                /**
                 *This API is used to delete a custom error code for a domain name.
                 * @param req DeleteDomainErrorPageInfoRequest
                 * @return DeleteDomainErrorPageInfoOutcome
                 */
                DeleteDomainErrorPageInfoOutcome DeleteDomainErrorPageInfo(const Model::DeleteDomainErrorPageInfoRequest &request);
                void DeleteDomainErrorPageInfoAsync(const Model::DeleteDomainErrorPageInfoRequest& request, const DeleteDomainErrorPageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDomainErrorPageInfoOutcomeCallable DeleteDomainErrorPageInfoCallable(const Model::DeleteDomainErrorPageInfoRequest& request);

                /**
                 *This API (DeleteListeners) is used to batch delete the listeners of a connection or connection group, including layer-4/7 listeners.
                 * @param req DeleteListenersRequest
                 * @return DeleteListenersOutcome
                 */
                DeleteListenersOutcome DeleteListeners(const Model::DeleteListenersRequest &request);
                void DeleteListenersAsync(const Model::DeleteListenersRequest& request, const DeleteListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteListenersOutcomeCallable DeleteListenersCallable(const Model::DeleteListenersRequest& request);

                /**
                 *This API (DeleteProxyGroup) is used to delete a connection group.
                 * @param req DeleteProxyGroupRequest
                 * @return DeleteProxyGroupOutcome
                 */
                DeleteProxyGroupOutcome DeleteProxyGroup(const Model::DeleteProxyGroupRequest &request);
                void DeleteProxyGroupAsync(const Model::DeleteProxyGroupRequest& request, const DeleteProxyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProxyGroupOutcomeCallable DeleteProxyGroupCallable(const Model::DeleteProxyGroupRequest& request);

                /**
                 *This API (DeleteRule) is used to delete the forwarding rules of HTTP/HTTPS listeners.
                 * @param req DeleteRuleRequest
                 * @return DeleteRuleOutcome
                 */
                DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest &request);
                void DeleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRuleOutcomeCallable DeleteRuleCallable(const Model::DeleteRuleRequest& request);

                /**
                 *This API is used to delete security policies.
                 * @param req DeleteSecurityPolicyRequest
                 * @return DeleteSecurityPolicyOutcome
                 */
                DeleteSecurityPolicyOutcome DeleteSecurityPolicy(const Model::DeleteSecurityPolicyRequest &request);
                void DeleteSecurityPolicyAsync(const Model::DeleteSecurityPolicyRequest& request, const DeleteSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityPolicyOutcomeCallable DeleteSecurityPolicyCallable(const Model::DeleteSecurityPolicyRequest& request);

                /**
                 *This API is used to delete security policy rules.
                 * @param req DeleteSecurityRulesRequest
                 * @return DeleteSecurityRulesOutcome
                 */
                DeleteSecurityRulesOutcome DeleteSecurityRules(const Model::DeleteSecurityRulesRequest &request);
                void DeleteSecurityRulesAsync(const Model::DeleteSecurityRulesRequest& request, const DeleteSecurityRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityRulesOutcomeCallable DeleteSecurityRulesCallable(const Model::DeleteSecurityRulesRequest& request);

                /**
                 *This API (DescribeAccessRegions) is used to query acceleration region (client access region).
                 * @param req DescribeAccessRegionsRequest
                 * @return DescribeAccessRegionsOutcome
                 */
                DescribeAccessRegionsOutcome DescribeAccessRegions(const Model::DescribeAccessRegionsRequest &request);
                void DescribeAccessRegionsAsync(const Model::DescribeAccessRegionsRequest& request, const DescribeAccessRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessRegionsOutcomeCallable DescribeAccessRegionsCallable(const Model::DescribeAccessRegionsRequest& request);

                /**
                 *This API is used to query the available accelerator region based on the origin server region.
                 * @param req DescribeAccessRegionsByDestRegionRequest
                 * @return DescribeAccessRegionsByDestRegionOutcome
                 */
                DescribeAccessRegionsByDestRegionOutcome DescribeAccessRegionsByDestRegion(const Model::DescribeAccessRegionsByDestRegionRequest &request);
                void DescribeAccessRegionsByDestRegionAsync(const Model::DescribeAccessRegionsByDestRegionRequest& request, const DescribeAccessRegionsByDestRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccessRegionsByDestRegionOutcomeCallable DescribeAccessRegionsByDestRegionCallable(const Model::DescribeAccessRegionsByDestRegionRequest& request);

                /**
                 *This API is used to query names of blocked custom headers.
                 * @param req DescribeBlackHeaderRequest
                 * @return DescribeBlackHeaderOutcome
                 */
                DescribeBlackHeaderOutcome DescribeBlackHeader(const Model::DescribeBlackHeaderRequest &request);
                void DescribeBlackHeaderAsync(const Model::DescribeBlackHeaderRequest& request, const DescribeBlackHeaderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBlackHeaderOutcomeCallable DescribeBlackHeaderCallable(const Model::DescribeBlackHeaderRequest& request);

                /**
                 *This API (DescribeCertificateDetail) is used to query certificate details, including the certificate ID, name, type, content, key, and other information.
                 * @param req DescribeCertificateDetailRequest
                 * @return DescribeCertificateDetailOutcome
                 */
                DescribeCertificateDetailOutcome DescribeCertificateDetail(const Model::DescribeCertificateDetailRequest &request);
                void DescribeCertificateDetailAsync(const Model::DescribeCertificateDetailRequest& request, const DescribeCertificateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificateDetailOutcomeCallable DescribeCertificateDetailCallable(const Model::DescribeCertificateDetailRequest& request);

                /**
                 *This API (DescribeCertificates) is used to query the list of available certificates.
                 * @param req DescribeCertificatesRequest
                 * @return DescribeCertificatesOutcome
                 */
                DescribeCertificatesOutcome DescribeCertificates(const Model::DescribeCertificatesRequest &request);
                void DescribeCertificatesAsync(const Model::DescribeCertificatesRequest& request, const DescribeCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertificatesOutcomeCallable DescribeCertificatesCallable(const Model::DescribeCertificatesRequest& request);

                /**
                 *This API (DescribeCountryAreaMapping) is used to obtain the country/region code mapping table.
                 * @param req DescribeCountryAreaMappingRequest
                 * @return DescribeCountryAreaMappingOutcome
                 */
                DescribeCountryAreaMappingOutcome DescribeCountryAreaMapping(const Model::DescribeCountryAreaMappingRequest &request);
                void DescribeCountryAreaMappingAsync(const Model::DescribeCountryAreaMappingRequest& request, const DescribeCountryAreaMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCountryAreaMappingOutcomeCallable DescribeCountryAreaMappingCallable(const Model::DescribeCountryAreaMappingRequest& request);

                /**
                 *This API is used to query the list of custom headers.
                 * @param req DescribeCustomHeaderRequest
                 * @return DescribeCustomHeaderOutcome
                 */
                DescribeCustomHeaderOutcome DescribeCustomHeader(const Model::DescribeCustomHeaderRequest &request);
                void DescribeCustomHeaderAsync(const Model::DescribeCustomHeaderRequest& request, const DescribeCustomHeaderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomHeaderOutcomeCallable DescribeCustomHeaderCallable(const Model::DescribeCustomHeaderRequest& request);

                /**
                 *This API (DescribeDestRegions) is used to query an origin server region (i.e., the region in which the origin server locates).
                 * @param req DescribeDestRegionsRequest
                 * @return DescribeDestRegionsOutcome
                 */
                DescribeDestRegionsOutcome DescribeDestRegions(const Model::DescribeDestRegionsRequest &request);
                void DescribeDestRegionsAsync(const Model::DescribeDestRegionsRequest& request, const DescribeDestRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDestRegionsOutcomeCallable DescribeDestRegionsCallable(const Model::DescribeDestRegionsRequest& request);

                /**
                 *This API is used to query the custom error response to a domain name.
                 * @param req DescribeDomainErrorPageInfoRequest
                 * @return DescribeDomainErrorPageInfoOutcome
                 */
                DescribeDomainErrorPageInfoOutcome DescribeDomainErrorPageInfo(const Model::DescribeDomainErrorPageInfoRequest &request);
                void DescribeDomainErrorPageInfoAsync(const Model::DescribeDomainErrorPageInfoRequest& request, const DescribeDomainErrorPageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainErrorPageInfoOutcomeCallable DescribeDomainErrorPageInfoCallable(const Model::DescribeDomainErrorPageInfoRequest& request);

                /**
                 *This API is used to query the corresponding error response by a custom error ID.
                 * @param req DescribeDomainErrorPageInfoByIdsRequest
                 * @return DescribeDomainErrorPageInfoByIdsOutcome
                 */
                DescribeDomainErrorPageInfoByIdsOutcome DescribeDomainErrorPageInfoByIds(const Model::DescribeDomainErrorPageInfoByIdsRequest &request);
                void DescribeDomainErrorPageInfoByIdsAsync(const Model::DescribeDomainErrorPageInfoByIdsRequest& request, const DescribeDomainErrorPageInfoByIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDomainErrorPageInfoByIdsOutcomeCallable DescribeDomainErrorPageInfoByIdsCallable(const Model::DescribeDomainErrorPageInfoByIdsRequest& request);

                /**
                 *This is an internal API. It is used to query the information of connections and connection groups from which the statistics can be derived.
                 * @param req DescribeGroupAndStatisticsProxyRequest
                 * @return DescribeGroupAndStatisticsProxyOutcome
                 */
                DescribeGroupAndStatisticsProxyOutcome DescribeGroupAndStatisticsProxy(const Model::DescribeGroupAndStatisticsProxyRequest &request);
                void DescribeGroupAndStatisticsProxyAsync(const Model::DescribeGroupAndStatisticsProxyRequest& request, const DescribeGroupAndStatisticsProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupAndStatisticsProxyOutcomeCallable DescribeGroupAndStatisticsProxyCallable(const Model::DescribeGroupAndStatisticsProxyRequest& request);

                /**
                 *This API (DescribeGroupDomainConfig) is used to obtain the domain name resolution configuration details of a connection group.
                 * @param req DescribeGroupDomainConfigRequest
                 * @return DescribeGroupDomainConfigOutcome
                 */
                DescribeGroupDomainConfigOutcome DescribeGroupDomainConfig(const Model::DescribeGroupDomainConfigRequest &request);
                void DescribeGroupDomainConfigAsync(const Model::DescribeGroupDomainConfigRequest& request, const DescribeGroupDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGroupDomainConfigOutcomeCallable DescribeGroupDomainConfigCallable(const Model::DescribeGroupDomainConfigRequest& request);

                /**
                 *This API (DescribeHTTPListeners) is used to query HTTP listener information.
                 * @param req DescribeHTTPListenersRequest
                 * @return DescribeHTTPListenersOutcome
                 */
                DescribeHTTPListenersOutcome DescribeHTTPListeners(const Model::DescribeHTTPListenersRequest &request);
                void DescribeHTTPListenersAsync(const Model::DescribeHTTPListenersRequest& request, const DescribeHTTPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHTTPListenersOutcomeCallable DescribeHTTPListenersCallable(const Model::DescribeHTTPListenersRequest& request);

                /**
                 *This API (DescribeHTTPSListeners) is used to query HTTPS listener information.
                 * @param req DescribeHTTPSListenersRequest
                 * @return DescribeHTTPSListenersOutcome
                 */
                DescribeHTTPSListenersOutcome DescribeHTTPSListeners(const Model::DescribeHTTPSListenersRequest &request);
                void DescribeHTTPSListenersAsync(const Model::DescribeHTTPSListenersRequest& request, const DescribeHTTPSListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHTTPSListenersOutcomeCallable DescribeHTTPSListenersCallable(const Model::DescribeHTTPSListenersRequest& request);

                /**
                 *This API (DescribeListenerRealServers) is used to query the origin server list of TCP/UDP listeners, including the list of bound origin servers and origin servers that can be bound.
                 * @param req DescribeListenerRealServersRequest
                 * @return DescribeListenerRealServersOutcome
                 */
                DescribeListenerRealServersOutcome DescribeListenerRealServers(const Model::DescribeListenerRealServersRequest &request);
                void DescribeListenerRealServersAsync(const Model::DescribeListenerRealServersRequest& request, const DescribeListenerRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenerRealServersOutcomeCallable DescribeListenerRealServersCallable(const Model::DescribeListenerRealServersRequest& request);

                /**
                 *This API is used to query listener statistics, including inbound/outbound bandwidth, inbound/outbound packets, and concurrence data. It supports granularities of 300, 3,600, and 86,400. Default value is the highest within the granularity range.
                 * @param req DescribeListenerStatisticsRequest
                 * @return DescribeListenerStatisticsOutcome
                 */
                DescribeListenerStatisticsOutcome DescribeListenerStatistics(const Model::DescribeListenerStatisticsRequest &request);
                void DescribeListenerStatisticsAsync(const Model::DescribeListenerStatisticsRequest& request, const DescribeListenerStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenerStatisticsOutcomeCallable DescribeListenerStatisticsCallable(const Model::DescribeListenerStatisticsRequest& request);

                /**
                 *This API (DescribeProxies) is used to query the connection instance list.
                 * @param req DescribeProxiesRequest
                 * @return DescribeProxiesOutcome
                 */
                DescribeProxiesOutcome DescribeProxies(const Model::DescribeProxiesRequest &request);
                void DescribeProxiesAsync(const Model::DescribeProxiesRequest& request, const DescribeProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxiesOutcomeCallable DescribeProxiesCallable(const Model::DescribeProxiesRequest& request);

                /**
                 *This API (DescribeProxiesStatus) is used to query the connection status list.
                 * @param req DescribeProxiesStatusRequest
                 * @return DescribeProxiesStatusOutcome
                 */
                DescribeProxiesStatusOutcome DescribeProxiesStatus(const Model::DescribeProxiesStatusRequest &request);
                void DescribeProxiesStatusAsync(const Model::DescribeProxiesStatusRequest& request, const DescribeProxiesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxiesStatusOutcomeCallable DescribeProxiesStatusCallable(const Model::DescribeProxiesStatusRequest& request);

                /**
                 *This is an internal API. It is used to query the information of connections and listeners from which the statistics can be derived.
                 * @param req DescribeProxyAndStatisticsListenersRequest
                 * @return DescribeProxyAndStatisticsListenersOutcome
                 */
                DescribeProxyAndStatisticsListenersOutcome DescribeProxyAndStatisticsListeners(const Model::DescribeProxyAndStatisticsListenersRequest &request);
                void DescribeProxyAndStatisticsListenersAsync(const Model::DescribeProxyAndStatisticsListenersRequest& request, const DescribeProxyAndStatisticsListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyAndStatisticsListenersOutcomeCallable DescribeProxyAndStatisticsListenersCallable(const Model::DescribeProxyAndStatisticsListenersRequest& request);

                /**
                 *This API (DescribeProxyDetail) is used to query connection details.
                 * @param req DescribeProxyDetailRequest
                 * @return DescribeProxyDetailOutcome
                 */
                DescribeProxyDetailOutcome DescribeProxyDetail(const Model::DescribeProxyDetailRequest &request);
                void DescribeProxyDetailAsync(const Model::DescribeProxyDetailRequest& request, const DescribeProxyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyDetailOutcomeCallable DescribeProxyDetailCallable(const Model::DescribeProxyDetailRequest& request);

                /**
                 *This API (DescribeProxyGroupDetails) is used to query connection group details.
                 * @param req DescribeProxyGroupDetailsRequest
                 * @return DescribeProxyGroupDetailsOutcome
                 */
                DescribeProxyGroupDetailsOutcome DescribeProxyGroupDetails(const Model::DescribeProxyGroupDetailsRequest &request);
                void DescribeProxyGroupDetailsAsync(const Model::DescribeProxyGroupDetailsRequest& request, const DescribeProxyGroupDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyGroupDetailsOutcomeCallable DescribeProxyGroupDetailsCallable(const Model::DescribeProxyGroupDetailsRequest& request);

                /**
                 *This API (DescribeProxyGroupList) is used to pull the list of connection groups and the basic information of each connection group.
                 * @param req DescribeProxyGroupListRequest
                 * @return DescribeProxyGroupListOutcome
                 */
                DescribeProxyGroupListOutcome DescribeProxyGroupList(const Model::DescribeProxyGroupListRequest &request);
                void DescribeProxyGroupListAsync(const Model::DescribeProxyGroupListRequest& request, const DescribeProxyGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyGroupListOutcomeCallable DescribeProxyGroupListCallable(const Model::DescribeProxyGroupListRequest& request);

                /**
                 *This API is used to query listener statistics, including inbound/outbound bandwidth, inbound/outbound packets, and concurrence data. It supports granularities of 300, 3,600, and 86,400. Default value is the highest within the granularity range.
                 * @param req DescribeProxyGroupStatisticsRequest
                 * @return DescribeProxyGroupStatisticsOutcome
                 */
                DescribeProxyGroupStatisticsOutcome DescribeProxyGroupStatistics(const Model::DescribeProxyGroupStatisticsRequest &request);
                void DescribeProxyGroupStatisticsAsync(const Model::DescribeProxyGroupStatisticsRequest& request, const DescribeProxyGroupStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyGroupStatisticsOutcomeCallable DescribeProxyGroupStatisticsCallable(const Model::DescribeProxyGroupStatisticsRequest& request);

                /**
                 *This API is used to query listener statistics, including inbound/outbound bandwidth, inbound/outbound packets, concurrence, packet loss, and latency data. It supports granularities of 300, 3,600, and 86,400. Default value is the highest within the granularity range.
                 * @param req DescribeProxyStatisticsRequest
                 * @return DescribeProxyStatisticsOutcome
                 */
                DescribeProxyStatisticsOutcome DescribeProxyStatistics(const Model::DescribeProxyStatisticsRequest &request);
                void DescribeProxyStatisticsAsync(const Model::DescribeProxyStatisticsRequest& request, const DescribeProxyStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProxyStatisticsOutcomeCallable DescribeProxyStatisticsCallable(const Model::DescribeProxyStatisticsRequest& request);

                /**
                 *This API is used to query the statistics of an origin server's health check results. Origin server status is displayed as 1 (normal) or 0 (exceptional). The queried origin server must be bound to a listener or rule, and the ID of the bound listener or rule must be specified for the query. This API supports displaying origin server status statistics at a 1-minute granularity.
                 * @param req DescribeRealServerStatisticsRequest
                 * @return DescribeRealServerStatisticsOutcome
                 */
                DescribeRealServerStatisticsOutcome DescribeRealServerStatistics(const Model::DescribeRealServerStatisticsRequest &request);
                void DescribeRealServerStatisticsAsync(const Model::DescribeRealServerStatisticsRequest& request, const DescribeRealServerStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealServerStatisticsOutcomeCallable DescribeRealServerStatisticsCallable(const Model::DescribeRealServerStatisticsRequest& request);

                /**
                 *This API is used to query origin server information. It can query all origin servers under the specified project name, and supports fuzzy query by specified IPs or domain names.
                 * @param req DescribeRealServersRequest
                 * @return DescribeRealServersOutcome
                 */
                DescribeRealServersOutcome DescribeRealServers(const Model::DescribeRealServersRequest &request);
                void DescribeRealServersAsync(const Model::DescribeRealServersRequest& request, const DescribeRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealServersOutcomeCallable DescribeRealServersCallable(const Model::DescribeRealServersRequest& request);

                /**
                 *This API (DescribeRealServersStatus) is used to query whether an origin server has been bound to a rule or listener.
                 * @param req DescribeRealServersStatusRequest
                 * @return DescribeRealServersStatusOutcome
                 */
                DescribeRealServersStatusOutcome DescribeRealServersStatus(const Model::DescribeRealServersStatusRequest &request);
                void DescribeRealServersStatusAsync(const Model::DescribeRealServersStatusRequest& request, const DescribeRealServersStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealServersStatusOutcomeCallable DescribeRealServersStatusCallable(const Model::DescribeRealServersStatusRequest& request);

                /**
                 *This API (DescribeRegionAndPrice) is used to obtain the origin server regions and the bandwidth price gradient.
                 * @param req DescribeRegionAndPriceRequest
                 * @return DescribeRegionAndPriceOutcome
                 */
                DescribeRegionAndPriceOutcome DescribeRegionAndPrice(const Model::DescribeRegionAndPriceRequest &request);
                void DescribeRegionAndPriceAsync(const Model::DescribeRegionAndPriceRequest& request, const DescribeRegionAndPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionAndPriceOutcomeCallable DescribeRegionAndPriceCallable(const Model::DescribeRegionAndPriceRequest& request);

                /**
                 *This API (DescribeResourcesByTag) is used to query corresponding resource information by tags, including connection, connection group, and origin server.
                 * @param req DescribeResourcesByTagRequest
                 * @return DescribeResourcesByTagOutcome
                 */
                DescribeResourcesByTagOutcome DescribeResourcesByTag(const Model::DescribeResourcesByTagRequest &request);
                void DescribeResourcesByTagAsync(const Model::DescribeResourcesByTagRequest& request, const DescribeResourcesByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcesByTagOutcomeCallable DescribeResourcesByTagCallable(const Model::DescribeResourcesByTagRequest& request);

                /**
                 *This API (DescribeRuleRealServers) is used to query forwarding rules-related origin server information, including information of origin servers that can be bound and have been bound.
                 * @param req DescribeRuleRealServersRequest
                 * @return DescribeRuleRealServersOutcome
                 */
                DescribeRuleRealServersOutcome DescribeRuleRealServers(const Model::DescribeRuleRealServersRequest &request);
                void DescribeRuleRealServersAsync(const Model::DescribeRuleRealServersRequest& request, const DescribeRuleRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRuleRealServersOutcomeCallable DescribeRuleRealServersCallable(const Model::DescribeRuleRealServersRequest& request);

                /**
                 *This API (DescribeRules) is used to query all rule information of a listener, including the domain names, paths, and list of bound origin servers. For version 3.0 connections, this API returns the advanced authentication configuration information of the domain name.
                 * @param req DescribeRulesRequest
                 * @return DescribeRulesOutcome
                 */
                DescribeRulesOutcome DescribeRules(const Model::DescribeRulesRequest &request);
                void DescribeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesOutcomeCallable DescribeRulesCallable(const Model::DescribeRulesRequest& request);

                /**
                 *This API is used to pull the list of rules based on rule ID. It supports pulling 1 to 10 rules at a time.
                 * @param req DescribeRulesByRuleIdsRequest
                 * @return DescribeRulesByRuleIdsOutcome
                 */
                DescribeRulesByRuleIdsOutcome DescribeRulesByRuleIds(const Model::DescribeRulesByRuleIdsRequest &request);
                void DescribeRulesByRuleIdsAsync(const Model::DescribeRulesByRuleIdsRequest& request, const DescribeRulesByRuleIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesByRuleIdsOutcomeCallable DescribeRulesByRuleIdsCallable(const Model::DescribeRulesByRuleIdsRequest& request);

                /**
                 *This API is used to obtain security policy details.
                 * @param req DescribeSecurityPolicyDetailRequest
                 * @return DescribeSecurityPolicyDetailOutcome
                 */
                DescribeSecurityPolicyDetailOutcome DescribeSecurityPolicyDetail(const Model::DescribeSecurityPolicyDetailRequest &request);
                void DescribeSecurityPolicyDetailAsync(const Model::DescribeSecurityPolicyDetailRequest& request, const DescribeSecurityPolicyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPolicyDetailOutcomeCallable DescribeSecurityPolicyDetailCallable(const Model::DescribeSecurityPolicyDetailRequest& request);

                /**
                 *This API is used to query the list of security rules based on security rule ID. It supports querying 1 to 20 security rules at a time.
                 * @param req DescribeSecurityRulesRequest
                 * @return DescribeSecurityRulesOutcome
                 */
                DescribeSecurityRulesOutcome DescribeSecurityRules(const Model::DescribeSecurityRulesRequest &request);
                void DescribeSecurityRulesAsync(const Model::DescribeSecurityRulesRequest& request, const DescribeSecurityRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityRulesOutcomeCallable DescribeSecurityRulesCallable(const Model::DescribeSecurityRulesRequest& request);

                /**
                 *This API (DescribeTCPListeners) is used to query the TCP listener information of a single connection or connection group.
                 * @param req DescribeTCPListenersRequest
                 * @return DescribeTCPListenersOutcome
                 */
                DescribeTCPListenersOutcome DescribeTCPListeners(const Model::DescribeTCPListenersRequest &request);
                void DescribeTCPListenersAsync(const Model::DescribeTCPListenersRequest& request, const DescribeTCPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTCPListenersOutcomeCallable DescribeTCPListenersCallable(const Model::DescribeTCPListenersRequest& request);

                /**
                 *This API (DescribeUDPListeners) is used to query the UDP listener information of a single connection or connection group.
                 * @param req DescribeUDPListenersRequest
                 * @return DescribeUDPListenersOutcome
                 */
                DescribeUDPListenersOutcome DescribeUDPListeners(const Model::DescribeUDPListenersRequest &request);
                void DescribeUDPListenersAsync(const Model::DescribeUDPListenersRequest& request, const DescribeUDPListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUDPListenersOutcomeCallable DescribeUDPListenersCallable(const Model::DescribeUDPListenersRequest& request);

                /**
                 *This API (DestroyProxies) is used to terminate a connection. If terminated, no fees will be incurred.
                 * @param req DestroyProxiesRequest
                 * @return DestroyProxiesOutcome
                 */
                DestroyProxiesOutcome DestroyProxies(const Model::DestroyProxiesRequest &request);
                void DestroyProxiesAsync(const Model::DestroyProxiesRequest& request, const DestroyProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyProxiesOutcomeCallable DestroyProxiesCallable(const Model::DestroyProxiesRequest& request);

                /**
                 *This API (InquiryPriceCreateProxy) is used to create the price inquiries of acceleration connections.
                 * @param req InquiryPriceCreateProxyRequest
                 * @return InquiryPriceCreateProxyOutcome
                 */
                InquiryPriceCreateProxyOutcome InquiryPriceCreateProxy(const Model::InquiryPriceCreateProxyRequest &request);
                void InquiryPriceCreateProxyAsync(const Model::InquiryPriceCreateProxyRequest& request, const InquiryPriceCreateProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateProxyOutcomeCallable InquiryPriceCreateProxyCallable(const Model::InquiryPriceCreateProxyRequest& request);

                /**
                 *This API (ModifyCertificate) is used to modify a domain name certificate of a listener. domain name certificate. This API is only applicable to connections of version 3.0.
                 * @param req ModifyCertificateRequest
                 * @return ModifyCertificateOutcome
                 */
                ModifyCertificateOutcome ModifyCertificate(const Model::ModifyCertificateRequest &request);
                void ModifyCertificateAsync(const Model::ModifyCertificateRequest& request, const ModifyCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCertificateOutcomeCallable ModifyCertificateCallable(const Model::ModifyCertificateRequest& request);

                /**
                 *This API is used to modify certificate name and content.
                 * @param req ModifyCertificateAttributesRequest
                 * @return ModifyCertificateAttributesOutcome
                 */
                ModifyCertificateAttributesOutcome ModifyCertificateAttributes(const Model::ModifyCertificateAttributesRequest &request);
                void ModifyCertificateAttributesAsync(const Model::ModifyCertificateAttributesRequest& request, const ModifyCertificateAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCertificateAttributesOutcomeCallable ModifyCertificateAttributesCallable(const Model::ModifyCertificateAttributesRequest& request);

                /**
                 *This API (ModifyDomain) is used to modify domain names of listeners. For connections of version 3.0, it supports modifying certificates of the domain names.
                 * @param req ModifyDomainRequest
                 * @return ModifyDomainOutcome
                 */
                ModifyDomainOutcome ModifyDomain(const Model::ModifyDomainRequest &request);
                void ModifyDomainAsync(const Model::ModifyDomainRequest& request, const ModifyDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDomainOutcomeCallable ModifyDomainCallable(const Model::ModifyDomainRequest& request);

                /**
                 *This API (ModifyGroupDomainConfig) is used to configure the nearest access domain name of a connection group.
                 * @param req ModifyGroupDomainConfigRequest
                 * @return ModifyGroupDomainConfigOutcome
                 */
                ModifyGroupDomainConfigOutcome ModifyGroupDomainConfig(const Model::ModifyGroupDomainConfigRequest &request);
                void ModifyGroupDomainConfigAsync(const Model::ModifyGroupDomainConfigRequest& request, const ModifyGroupDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGroupDomainConfigOutcomeCallable ModifyGroupDomainConfigCallable(const Model::ModifyGroupDomainConfigRequest& request);

                /**
                 *This API (ModifyHTTPListenerAttribute) is used to modify the HTTP listener configuration information of a connection. Currently only supports modifying listener name.
Note: Grouped connections currently do not support HTTP/HTTPS listeners.
                 * @param req ModifyHTTPListenerAttributeRequest
                 * @return ModifyHTTPListenerAttributeOutcome
                 */
                ModifyHTTPListenerAttributeOutcome ModifyHTTPListenerAttribute(const Model::ModifyHTTPListenerAttributeRequest &request);
                void ModifyHTTPListenerAttributeAsync(const Model::ModifyHTTPListenerAttributeRequest& request, const ModifyHTTPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHTTPListenerAttributeOutcomeCallable ModifyHTTPListenerAttributeCallable(const Model::ModifyHTTPListenerAttributeRequest& request);

                /**
                 *This API (ModifyHTTPSListenerAttribute) is used to modify HTTPS listener configurations. It currently do not support connection groups and connections of version 1.0.
                 * @param req ModifyHTTPSListenerAttributeRequest
                 * @return ModifyHTTPSListenerAttributeOutcome
                 */
                ModifyHTTPSListenerAttributeOutcome ModifyHTTPSListenerAttribute(const Model::ModifyHTTPSListenerAttributeRequest &request);
                void ModifyHTTPSListenerAttributeAsync(const Model::ModifyHTTPSListenerAttributeRequest& request, const ModifyHTTPSListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHTTPSListenerAttributeOutcomeCallable ModifyHTTPSListenerAttributeCallable(const Model::ModifyHTTPSListenerAttributeRequest& request);

                /**
                 *This API (ModifyProxiesAttribute) is used to modify instance attributes (currently only supports modifying connection name).
                 * @param req ModifyProxiesAttributeRequest
                 * @return ModifyProxiesAttributeOutcome
                 */
                ModifyProxiesAttributeOutcome ModifyProxiesAttribute(const Model::ModifyProxiesAttributeRequest &request);
                void ModifyProxiesAttributeAsync(const Model::ModifyProxiesAttributeRequest& request, const ModifyProxiesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProxiesAttributeOutcomeCallable ModifyProxiesAttributeCallable(const Model::ModifyProxiesAttributeRequest& request);

                /**
                 *This API (ModifyProxiesProject) is used to modify the project to which a connection belongs.
                 * @param req ModifyProxiesProjectRequest
                 * @return ModifyProxiesProjectOutcome
                 */
                ModifyProxiesProjectOutcome ModifyProxiesProject(const Model::ModifyProxiesProjectRequest &request);
                void ModifyProxiesProjectAsync(const Model::ModifyProxiesProjectRequest& request, const ModifyProxiesProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProxiesProjectOutcomeCallable ModifyProxiesProjectCallable(const Model::ModifyProxiesProjectRequest& request);

                /**
                 *This API (ModifyProxyConfiguration) is used to modify connection configurations. You can expand or reduce the capacity based on current business requirements. It only supports connections with a Scalarable of 1. Scalarable can be obtained via DescribeProxies API.
                 * @param req ModifyProxyConfigurationRequest
                 * @return ModifyProxyConfigurationOutcome
                 */
                ModifyProxyConfigurationOutcome ModifyProxyConfiguration(const Model::ModifyProxyConfigurationRequest &request);
                void ModifyProxyConfigurationAsync(const Model::ModifyProxyConfigurationRequest& request, const ModifyProxyConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProxyConfigurationOutcomeCallable ModifyProxyConfigurationCallable(const Model::ModifyProxyConfigurationRequest& request);

                /**
                 *This API (ModifyProxyGroupAttribute) is used to modify connection group attributes. It currently only supports modifying connection group name.
                 * @param req ModifyProxyGroupAttributeRequest
                 * @return ModifyProxyGroupAttributeOutcome
                 */
                ModifyProxyGroupAttributeOutcome ModifyProxyGroupAttribute(const Model::ModifyProxyGroupAttributeRequest &request);
                void ModifyProxyGroupAttributeAsync(const Model::ModifyProxyGroupAttributeRequest& request, const ModifyProxyGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProxyGroupAttributeOutcomeCallable ModifyProxyGroupAttributeCallable(const Model::ModifyProxyGroupAttributeRequest& request);

                /**
                 *This API (ModifyRealServerName) is used to modify origin server names.
                 * @param req ModifyRealServerNameRequest
                 * @return ModifyRealServerNameOutcome
                 */
                ModifyRealServerNameOutcome ModifyRealServerName(const Model::ModifyRealServerNameRequest &request);
                void ModifyRealServerNameAsync(const Model::ModifyRealServerNameRequest& request, const ModifyRealServerNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRealServerNameOutcomeCallable ModifyRealServerNameCallable(const Model::ModifyRealServerNameRequest& request);

                /**
                 *This API (ModifyRuleAttribute) is used to modify forwarding rule information, including health check configuration and forwarding policies.
                 * @param req ModifyRuleAttributeRequest
                 * @return ModifyRuleAttributeOutcome
                 */
                ModifyRuleAttributeOutcome ModifyRuleAttribute(const Model::ModifyRuleAttributeRequest &request);
                void ModifyRuleAttributeAsync(const Model::ModifyRuleAttributeRequest& request, const ModifyRuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleAttributeOutcomeCallable ModifyRuleAttributeCallable(const Model::ModifyRuleAttributeRequest& request);

                /**
                 *This API is used to modify security policy rule names.
                 * @param req ModifySecurityRuleRequest
                 * @return ModifySecurityRuleOutcome
                 */
                ModifySecurityRuleOutcome ModifySecurityRule(const Model::ModifySecurityRuleRequest &request);
                void ModifySecurityRuleAsync(const Model::ModifySecurityRuleRequest& request, const ModifySecurityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityRuleOutcomeCallable ModifySecurityRuleCallable(const Model::ModifySecurityRuleRequest& request);

                /**
                 *This API (ModifyTCPListenerAttribute) is used to modify the TCP listener configuration of a connection instance, including health check configuration and scheduling policies.
                 * @param req ModifyTCPListenerAttributeRequest
                 * @return ModifyTCPListenerAttributeOutcome
                 */
                ModifyTCPListenerAttributeOutcome ModifyTCPListenerAttribute(const Model::ModifyTCPListenerAttributeRequest &request);
                void ModifyTCPListenerAttributeAsync(const Model::ModifyTCPListenerAttributeRequest& request, const ModifyTCPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTCPListenerAttributeOutcomeCallable ModifyTCPListenerAttributeCallable(const Model::ModifyTCPListenerAttributeRequest& request);

                /**
                 *This API (ModifyUDPListenerAttribute) is used to modify the UDP listener configuration of a connection instance, including modification of listener names and scheduling policies.
                 * @param req ModifyUDPListenerAttributeRequest
                 * @return ModifyUDPListenerAttributeOutcome
                 */
                ModifyUDPListenerAttributeOutcome ModifyUDPListenerAttribute(const Model::ModifyUDPListenerAttributeRequest &request);
                void ModifyUDPListenerAttributeAsync(const Model::ModifyUDPListenerAttributeRequest& request, const ModifyUDPListenerAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUDPListenerAttributeOutcomeCallable ModifyUDPListenerAttributeCallable(const Model::ModifyUDPListenerAttributeRequest& request);

                /**
                 *This API (OpenProxies) is used to enable one or more connections.
                 * @param req OpenProxiesRequest
                 * @return OpenProxiesOutcome
                 */
                OpenProxiesOutcome OpenProxies(const Model::OpenProxiesRequest &request);
                void OpenProxiesAsync(const Model::OpenProxiesRequest& request, const OpenProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenProxiesOutcomeCallable OpenProxiesCallable(const Model::OpenProxiesRequest& request);

                /**
                 *This API is used to enable all connections in a connection group.
                 * @param req OpenProxyGroupRequest
                 * @return OpenProxyGroupOutcome
                 */
                OpenProxyGroupOutcome OpenProxyGroup(const Model::OpenProxyGroupRequest &request);
                void OpenProxyGroupAsync(const Model::OpenProxyGroupRequest& request, const OpenProxyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenProxyGroupOutcomeCallable OpenProxyGroupCallable(const Model::OpenProxyGroupRequest& request);

                /**
                 *This API is used to enable security policies.
                 * @param req OpenSecurityPolicyRequest
                 * @return OpenSecurityPolicyOutcome
                 */
                OpenSecurityPolicyOutcome OpenSecurityPolicy(const Model::OpenSecurityPolicyRequest &request);
                void OpenSecurityPolicyAsync(const Model::OpenSecurityPolicyRequest& request, const OpenSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenSecurityPolicyOutcomeCallable OpenSecurityPolicyCallable(const Model::OpenSecurityPolicyRequest& request);

                /**
                 *This API is used to delete the added origin server (server) IP or domain name.
                 * @param req RemoveRealServersRequest
                 * @return RemoveRealServersOutcome
                 */
                RemoveRealServersOutcome RemoveRealServers(const Model::RemoveRealServersRequest &request);
                void RemoveRealServersAsync(const Model::RemoveRealServersRequest& request, const RemoveRealServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveRealServersOutcomeCallable RemoveRealServersCallable(const Model::RemoveRealServersRequest& request);

                /**
                 *This API (SetAuthentication) is used for the advanced authentication configuration of connections, including authentication methods and their certificates. If only supports connections of version 3.0.
                 * @param req SetAuthenticationRequest
                 * @return SetAuthenticationOutcome
                 */
                SetAuthenticationOutcome SetAuthentication(const Model::SetAuthenticationRequest &request);
                void SetAuthenticationAsync(const Model::SetAuthenticationRequest& request, const SetAuthenticationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetAuthenticationOutcomeCallable SetAuthenticationCallable(const Model::SetAuthenticationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_GAAPCLIENT_H_
