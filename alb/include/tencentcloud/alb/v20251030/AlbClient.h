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

#ifndef TENCENTCLOUD_ALB_V20251030_ALBCLIENT_H_
#define TENCENTCLOUD_ALB_V20251030_ALBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/alb/v20251030/model/AddTargetsToTargetGroupRequest.h>
#include <tencentcloud/alb/v20251030/model/AddTargetsToTargetGroupResponse.h>
#include <tencentcloud/alb/v20251030/model/AssociateBandwidthPackageWithLoadBalancerRequest.h>
#include <tencentcloud/alb/v20251030/model/AssociateBandwidthPackageWithLoadBalancerResponse.h>
#include <tencentcloud/alb/v20251030/model/AssociateListenerAdditionalCertificatesRequest.h>
#include <tencentcloud/alb/v20251030/model/AssociateListenerAdditionalCertificatesResponse.h>
#include <tencentcloud/alb/v20251030/model/CreateHealthCheckTemplateRequest.h>
#include <tencentcloud/alb/v20251030/model/CreateHealthCheckTemplateResponse.h>
#include <tencentcloud/alb/v20251030/model/CreateListenerRequest.h>
#include <tencentcloud/alb/v20251030/model/CreateListenerResponse.h>
#include <tencentcloud/alb/v20251030/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/alb/v20251030/model/CreateLoadBalancerResponse.h>
#include <tencentcloud/alb/v20251030/model/CreateRulesRequest.h>
#include <tencentcloud/alb/v20251030/model/CreateRulesResponse.h>
#include <tencentcloud/alb/v20251030/model/CreateSecurityPolicyRequest.h>
#include <tencentcloud/alb/v20251030/model/CreateSecurityPolicyResponse.h>
#include <tencentcloud/alb/v20251030/model/CreateTargetGroupRequest.h>
#include <tencentcloud/alb/v20251030/model/CreateTargetGroupResponse.h>
#include <tencentcloud/alb/v20251030/model/DeleteHealthCheckTemplatesRequest.h>
#include <tencentcloud/alb/v20251030/model/DeleteHealthCheckTemplatesResponse.h>
#include <tencentcloud/alb/v20251030/model/DeleteListenerRequest.h>
#include <tencentcloud/alb/v20251030/model/DeleteListenerResponse.h>
#include <tencentcloud/alb/v20251030/model/DeleteLoadBalancersRequest.h>
#include <tencentcloud/alb/v20251030/model/DeleteLoadBalancersResponse.h>
#include <tencentcloud/alb/v20251030/model/DeleteRulesRequest.h>
#include <tencentcloud/alb/v20251030/model/DeleteRulesResponse.h>
#include <tencentcloud/alb/v20251030/model/DeleteSecurityPolicyRequest.h>
#include <tencentcloud/alb/v20251030/model/DeleteSecurityPolicyResponse.h>
#include <tencentcloud/alb/v20251030/model/DeleteTargetGroupsRequest.h>
#include <tencentcloud/alb/v20251030/model/DeleteTargetGroupsResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeAsyncJobsRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeAsyncJobsResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeHealthCheckTemplatesRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeHealthCheckTemplatesResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenerCertificatesRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenerCertificatesResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenerDetailRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenerDetailResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenerHealthStatusRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenerHealthStatusResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenersRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeListenersResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeLoadBalancerDetailRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeLoadBalancerDetailResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeLoadBalancersRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeLoadBalancersResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeQuotaRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeQuotaResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeRulesRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeRulesResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeSecurityPoliciesRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeSecurityPoliciesResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeSecurityPolicyCapabilitiesRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeSecurityPolicyCapabilitiesResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeSecurityPolicyRelationsRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeSecurityPolicyRelationsResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeSystemSecurityPoliciesRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeSystemSecurityPoliciesResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeTargetGroupTargetsRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeTargetGroupTargetsResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeTargetGroupsRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeTargetGroupsResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeTargetGroupsByTargetRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeTargetGroupsByTargetResponse.h>
#include <tencentcloud/alb/v20251030/model/DescribeZonesRequest.h>
#include <tencentcloud/alb/v20251030/model/DescribeZonesResponse.h>
#include <tencentcloud/alb/v20251030/model/DisassociateBandwidthPackageFromLoadBalancerRequest.h>
#include <tencentcloud/alb/v20251030/model/DisassociateBandwidthPackageFromLoadBalancerResponse.h>
#include <tencentcloud/alb/v20251030/model/DisassociateListenerAdditionalCertificatesRequest.h>
#include <tencentcloud/alb/v20251030/model/DisassociateListenerAdditionalCertificatesResponse.h>
#include <tencentcloud/alb/v20251030/model/InquirePriceCreateLoadBalancerRequest.h>
#include <tencentcloud/alb/v20251030/model/InquirePriceCreateLoadBalancerResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyHealthCheckTemplateRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyHealthCheckTemplateResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyListenerAttributesRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyListenerAttributesResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyLoadBalancerAddressTypeRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyLoadBalancerAddressTypeResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyLoadBalancerAttributesRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyLoadBalancerAttributesResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyLoadBalancerModificationProtectionRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyLoadBalancerModificationProtectionResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyRulesAttributesRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyRulesAttributesResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifySecurityPolicyAttributesRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifySecurityPolicyAttributesResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyTargetGroupAttributesRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyTargetGroupAttributesResponse.h>
#include <tencentcloud/alb/v20251030/model/ModifyTargetsInTargetGroupRequest.h>
#include <tencentcloud/alb/v20251030/model/ModifyTargetsInTargetGroupResponse.h>
#include <tencentcloud/alb/v20251030/model/NotifyUnbindTargetRequest.h>
#include <tencentcloud/alb/v20251030/model/NotifyUnbindTargetResponse.h>
#include <tencentcloud/alb/v20251030/model/RemoveTargetsFromTargetGroupRequest.h>
#include <tencentcloud/alb/v20251030/model/RemoveTargetsFromTargetGroupResponse.h>
#include <tencentcloud/alb/v20251030/model/SetLoadBalancerSecurityGroupsRequest.h>
#include <tencentcloud/alb/v20251030/model/SetLoadBalancerSecurityGroupsResponse.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            class AlbClient : public AbstractClient
            {
            public:
                AlbClient(const Credential &credential, const std::string &region);
                AlbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddTargetsToTargetGroupResponse> AddTargetsToTargetGroupOutcome;
                typedef std::future<AddTargetsToTargetGroupOutcome> AddTargetsToTargetGroupOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::AddTargetsToTargetGroupRequest&, AddTargetsToTargetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddTargetsToTargetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateBandwidthPackageWithLoadBalancerResponse> AssociateBandwidthPackageWithLoadBalancerOutcome;
                typedef std::future<AssociateBandwidthPackageWithLoadBalancerOutcome> AssociateBandwidthPackageWithLoadBalancerOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::AssociateBandwidthPackageWithLoadBalancerRequest&, AssociateBandwidthPackageWithLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateBandwidthPackageWithLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateListenerAdditionalCertificatesResponse> AssociateListenerAdditionalCertificatesOutcome;
                typedef std::future<AssociateListenerAdditionalCertificatesOutcome> AssociateListenerAdditionalCertificatesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::AssociateListenerAdditionalCertificatesRequest&, AssociateListenerAdditionalCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateListenerAdditionalCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHealthCheckTemplateResponse> CreateHealthCheckTemplateOutcome;
                typedef std::future<CreateHealthCheckTemplateOutcome> CreateHealthCheckTemplateOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::CreateHealthCheckTemplateRequest&, CreateHealthCheckTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHealthCheckTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateListenerResponse> CreateListenerOutcome;
                typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::CreateListenerRequest&, CreateListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancerResponse> CreateLoadBalancerOutcome;
                typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::CreateLoadBalancerRequest&, CreateLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRulesResponse> CreateRulesOutcome;
                typedef std::future<CreateRulesOutcome> CreateRulesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::CreateRulesRequest&, CreateRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityPolicyResponse> CreateSecurityPolicyOutcome;
                typedef std::future<CreateSecurityPolicyOutcome> CreateSecurityPolicyOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::CreateSecurityPolicyRequest&, CreateSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTargetGroupResponse> CreateTargetGroupOutcome;
                typedef std::future<CreateTargetGroupOutcome> CreateTargetGroupOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::CreateTargetGroupRequest&, CreateTargetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTargetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHealthCheckTemplatesResponse> DeleteHealthCheckTemplatesOutcome;
                typedef std::future<DeleteHealthCheckTemplatesOutcome> DeleteHealthCheckTemplatesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DeleteHealthCheckTemplatesRequest&, DeleteHealthCheckTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHealthCheckTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteListenerResponse> DeleteListenerOutcome;
                typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DeleteListenerRequest&, DeleteListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancersResponse> DeleteLoadBalancersOutcome;
                typedef std::future<DeleteLoadBalancersOutcome> DeleteLoadBalancersOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DeleteLoadBalancersRequest&, DeleteLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRulesResponse> DeleteRulesOutcome;
                typedef std::future<DeleteRulesOutcome> DeleteRulesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DeleteRulesRequest&, DeleteRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityPolicyResponse> DeleteSecurityPolicyOutcome;
                typedef std::future<DeleteSecurityPolicyOutcome> DeleteSecurityPolicyOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DeleteSecurityPolicyRequest&, DeleteSecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTargetGroupsResponse> DeleteTargetGroupsOutcome;
                typedef std::future<DeleteTargetGroupsOutcome> DeleteTargetGroupsOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DeleteTargetGroupsRequest&, DeleteTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAsyncJobsResponse> DescribeAsyncJobsOutcome;
                typedef std::future<DescribeAsyncJobsOutcome> DescribeAsyncJobsOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeAsyncJobsRequest&, DescribeAsyncJobsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsyncJobsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHealthCheckTemplatesResponse> DescribeHealthCheckTemplatesOutcome;
                typedef std::future<DescribeHealthCheckTemplatesOutcome> DescribeHealthCheckTemplatesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeHealthCheckTemplatesRequest&, DescribeHealthCheckTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthCheckTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenerCertificatesResponse> DescribeListenerCertificatesOutcome;
                typedef std::future<DescribeListenerCertificatesOutcome> DescribeListenerCertificatesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeListenerCertificatesRequest&, DescribeListenerCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenerDetailResponse> DescribeListenerDetailOutcome;
                typedef std::future<DescribeListenerDetailOutcome> DescribeListenerDetailOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeListenerDetailRequest&, DescribeListenerDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenerHealthStatusResponse> DescribeListenerHealthStatusOutcome;
                typedef std::future<DescribeListenerHealthStatusOutcome> DescribeListenerHealthStatusOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeListenerHealthStatusRequest&, DescribeListenerHealthStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenerHealthStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenersResponse> DescribeListenersOutcome;
                typedef std::future<DescribeListenersOutcome> DescribeListenersOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeListenersRequest&, DescribeListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancerDetailResponse> DescribeLoadBalancerDetailOutcome;
                typedef std::future<DescribeLoadBalancerDetailOutcome> DescribeLoadBalancerDetailOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeLoadBalancerDetailRequest&, DescribeLoadBalancerDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancerDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancersResponse> DescribeLoadBalancersOutcome;
                typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeLoadBalancersRequest&, DescribeLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQuotaResponse> DescribeQuotaOutcome;
                typedef std::future<DescribeQuotaOutcome> DescribeQuotaOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeQuotaRequest&, DescribeQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesResponse> DescribeRulesOutcome;
                typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeRulesRequest&, DescribeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPoliciesResponse> DescribeSecurityPoliciesOutcome;
                typedef std::future<DescribeSecurityPoliciesOutcome> DescribeSecurityPoliciesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeSecurityPoliciesRequest&, DescribeSecurityPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyCapabilitiesResponse> DescribeSecurityPolicyCapabilitiesOutcome;
                typedef std::future<DescribeSecurityPolicyCapabilitiesOutcome> DescribeSecurityPolicyCapabilitiesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeSecurityPolicyCapabilitiesRequest&, DescribeSecurityPolicyCapabilitiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyCapabilitiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityPolicyRelationsResponse> DescribeSecurityPolicyRelationsOutcome;
                typedef std::future<DescribeSecurityPolicyRelationsOutcome> DescribeSecurityPolicyRelationsOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeSecurityPolicyRelationsRequest&, DescribeSecurityPolicyRelationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityPolicyRelationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSystemSecurityPoliciesResponse> DescribeSystemSecurityPoliciesOutcome;
                typedef std::future<DescribeSystemSecurityPoliciesOutcome> DescribeSystemSecurityPoliciesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeSystemSecurityPoliciesRequest&, DescribeSystemSecurityPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSystemSecurityPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupTargetsResponse> DescribeTargetGroupTargetsOutcome;
                typedef std::future<DescribeTargetGroupTargetsOutcome> DescribeTargetGroupTargetsOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeTargetGroupTargetsRequest&, DescribeTargetGroupTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupsResponse> DescribeTargetGroupsOutcome;
                typedef std::future<DescribeTargetGroupsOutcome> DescribeTargetGroupsOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeTargetGroupsRequest&, DescribeTargetGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetGroupsByTargetResponse> DescribeTargetGroupsByTargetOutcome;
                typedef std::future<DescribeTargetGroupsByTargetOutcome> DescribeTargetGroupsByTargetOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeTargetGroupsByTargetRequest&, DescribeTargetGroupsByTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetGroupsByTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateBandwidthPackageFromLoadBalancerResponse> DisassociateBandwidthPackageFromLoadBalancerOutcome;
                typedef std::future<DisassociateBandwidthPackageFromLoadBalancerOutcome> DisassociateBandwidthPackageFromLoadBalancerOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DisassociateBandwidthPackageFromLoadBalancerRequest&, DisassociateBandwidthPackageFromLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateBandwidthPackageFromLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateListenerAdditionalCertificatesResponse> DisassociateListenerAdditionalCertificatesOutcome;
                typedef std::future<DisassociateListenerAdditionalCertificatesOutcome> DisassociateListenerAdditionalCertificatesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::DisassociateListenerAdditionalCertificatesRequest&, DisassociateListenerAdditionalCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateListenerAdditionalCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateLoadBalancerResponse> InquirePriceCreateLoadBalancerOutcome;
                typedef std::future<InquirePriceCreateLoadBalancerOutcome> InquirePriceCreateLoadBalancerOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::InquirePriceCreateLoadBalancerRequest&, InquirePriceCreateLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHealthCheckTemplateResponse> ModifyHealthCheckTemplateOutcome;
                typedef std::future<ModifyHealthCheckTemplateOutcome> ModifyHealthCheckTemplateOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyHealthCheckTemplateRequest&, ModifyHealthCheckTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHealthCheckTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyListenerAttributesResponse> ModifyListenerAttributesOutcome;
                typedef std::future<ModifyListenerAttributesOutcome> ModifyListenerAttributesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyListenerAttributesRequest&, ModifyListenerAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyListenerAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerAddressTypeResponse> ModifyLoadBalancerAddressTypeOutcome;
                typedef std::future<ModifyLoadBalancerAddressTypeOutcome> ModifyLoadBalancerAddressTypeOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyLoadBalancerAddressTypeRequest&, ModifyLoadBalancerAddressTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerAddressTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerAttributesResponse> ModifyLoadBalancerAttributesOutcome;
                typedef std::future<ModifyLoadBalancerAttributesOutcome> ModifyLoadBalancerAttributesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyLoadBalancerAttributesRequest&, ModifyLoadBalancerAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerModificationProtectionResponse> ModifyLoadBalancerModificationProtectionOutcome;
                typedef std::future<ModifyLoadBalancerModificationProtectionOutcome> ModifyLoadBalancerModificationProtectionOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyLoadBalancerModificationProtectionRequest&, ModifyLoadBalancerModificationProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerModificationProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRulesAttributesResponse> ModifyRulesAttributesOutcome;
                typedef std::future<ModifyRulesAttributesOutcome> ModifyRulesAttributesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyRulesAttributesRequest&, ModifyRulesAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRulesAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityPolicyAttributesResponse> ModifySecurityPolicyAttributesOutcome;
                typedef std::future<ModifySecurityPolicyAttributesOutcome> ModifySecurityPolicyAttributesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifySecurityPolicyAttributesRequest&, ModifySecurityPolicyAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityPolicyAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetGroupAttributesResponse> ModifyTargetGroupAttributesOutcome;
                typedef std::future<ModifyTargetGroupAttributesOutcome> ModifyTargetGroupAttributesOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyTargetGroupAttributesRequest&, ModifyTargetGroupAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetGroupAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetsInTargetGroupResponse> ModifyTargetsInTargetGroupOutcome;
                typedef std::future<ModifyTargetsInTargetGroupOutcome> ModifyTargetsInTargetGroupOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::ModifyTargetsInTargetGroupRequest&, ModifyTargetsInTargetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetsInTargetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::NotifyUnbindTargetResponse> NotifyUnbindTargetOutcome;
                typedef std::future<NotifyUnbindTargetOutcome> NotifyUnbindTargetOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::NotifyUnbindTargetRequest&, NotifyUnbindTargetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> NotifyUnbindTargetAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveTargetsFromTargetGroupResponse> RemoveTargetsFromTargetGroupOutcome;
                typedef std::future<RemoveTargetsFromTargetGroupOutcome> RemoveTargetsFromTargetGroupOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::RemoveTargetsFromTargetGroupRequest&, RemoveTargetsFromTargetGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTargetsFromTargetGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLoadBalancerSecurityGroupsResponse> SetLoadBalancerSecurityGroupsOutcome;
                typedef std::future<SetLoadBalancerSecurityGroupsOutcome> SetLoadBalancerSecurityGroupsOutcomeCallable;
                typedef std::function<void(const AlbClient*, const Model::SetLoadBalancerSecurityGroupsRequest&, SetLoadBalancerSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerSecurityGroupsAsyncHandler;



                /**
                 *Add a backend service in the target group.
                 * @param req AddTargetsToTargetGroupRequest
                 * @return AddTargetsToTargetGroupOutcome
                 */
                AddTargetsToTargetGroupOutcome AddTargetsToTargetGroup(const Model::AddTargetsToTargetGroupRequest &request);
                void AddTargetsToTargetGroupAsync(const Model::AddTargetsToTargetGroupRequest& request, const AddTargetsToTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddTargetsToTargetGroupOutcomeCallable AddTargetsToTargetGroupCallable(const Model::AddTargetsToTargetGroupRequest& request);

                /**
                 *Bind a Bandwidth Package to an application CLB instance.
                 * @param req AssociateBandwidthPackageWithLoadBalancerRequest
                 * @return AssociateBandwidthPackageWithLoadBalancerOutcome
                 */
                AssociateBandwidthPackageWithLoadBalancerOutcome AssociateBandwidthPackageWithLoadBalancer(const Model::AssociateBandwidthPackageWithLoadBalancerRequest &request);
                void AssociateBandwidthPackageWithLoadBalancerAsync(const Model::AssociateBandwidthPackageWithLoadBalancerRequest& request, const AssociateBandwidthPackageWithLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateBandwidthPackageWithLoadBalancerOutcomeCallable AssociateBandwidthPackageWithLoadBalancerCallable(const Model::AssociateBandwidthPackageWithLoadBalancerRequest& request);

                /**
                 *AssociateListenerAdditionalCertificates is an async API. The system returns a request ID, but the additional cert is not yet successfully added. The add task is still in progress in the system backend. You can call the DescribeListenerCertificates API to query the add status of the additional cert.
When HTTPS and QUIC listeners are in Associating status, it means certificate expansion is ongoing.
When HTTPS and QUIC listeners are in the Associated status, the extension cert is successfully added.
                 * @param req AssociateListenerAdditionalCertificatesRequest
                 * @return AssociateListenerAdditionalCertificatesOutcome
                 */
                AssociateListenerAdditionalCertificatesOutcome AssociateListenerAdditionalCertificates(const Model::AssociateListenerAdditionalCertificatesRequest &request);
                void AssociateListenerAdditionalCertificatesAsync(const Model::AssociateListenerAdditionalCertificatesRequest& request, const AssociateListenerAdditionalCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateListenerAdditionalCertificatesOutcomeCallable AssociateListenerAdditionalCertificatesCallable(const Model::AssociateListenerAdditionalCertificatesRequest& request);

                /**
                 *This API is used to create a health check Template.
                 * @param req CreateHealthCheckTemplateRequest
                 * @return CreateHealthCheckTemplateOutcome
                 */
                CreateHealthCheckTemplateOutcome CreateHealthCheckTemplate(const Model::CreateHealthCheckTemplateRequest &request);
                void CreateHealthCheckTemplateAsync(const Model::CreateHealthCheckTemplateRequest& request, const CreateHealthCheckTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHealthCheckTemplateOutcomeCallable CreateHealthCheckTemplateCallable(const Model::CreateHealthCheckTemplateRequest& request);

                /**
                 *This API is used to create a listener.
                 * @param req CreateListenerRequest
                 * @return CreateListenerOutcome
                 */
                CreateListenerOutcome CreateListener(const Model::CreateListenerRequest &request);
                void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request);

                /**
                 ***CreateLoadBalancer** is an async API. The system returns an instance ID, but the application CLB instance is not created successfully yet, and the creation task is still in progress in the system backend. You can call [DescribeLoadBalancerDetail](https://www.tencentcloud.com/document/api/1822/133711) to query the creation status of the application CLB instance.
- When an application CLB instance is in the **Provisioning** status, it means the application CLB instance is being created.
-When an application CLB instance is in the **Active** status, the application CLB instance is successfully created.
                 * @param req CreateLoadBalancerRequest
                 * @return CreateLoadBalancerOutcome
                 */
                CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest &request);
                void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request);

                /**
                 *This API is used to create forwarding rules. It is an async API. After returning successfully, call the DescribeAsyncJobs API with the returned RequestID as an input parameter to check whether this task is successful.
A rule supports up to 10 forward Conditions and 5 forward Actions.
                 * @param req CreateRulesRequest
                 * @return CreateRulesOutcome
                 */
                CreateRulesOutcome CreateRules(const Model::CreateRulesRequest &request);
                void CreateRulesAsync(const Model::CreateRulesRequest& request, const CreateRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRulesOutcomeCallable CreateRulesCallable(const Model::CreateRulesRequest& request);

                /**
                 *Create a custom security policy for configuring the TLS protocol version and encryption suite of an HTTPS listener. With a security policy, you can flexibly control the security level of HTTPS communication between clients and load balancing.
                 * @param req CreateSecurityPolicyRequest
                 * @return CreateSecurityPolicyOutcome
                 */
                CreateSecurityPolicyOutcome CreateSecurityPolicy(const Model::CreateSecurityPolicyRequest &request);
                void CreateSecurityPolicyAsync(const Model::CreateSecurityPolicyRequest& request, const CreateSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityPolicyOutcomeCallable CreateSecurityPolicyCallable(const Model::CreateSecurityPolicyRequest& request);

                /**
                 *Target Group APIs
                 * @param req CreateTargetGroupRequest
                 * @return CreateTargetGroupOutcome
                 */
                CreateTargetGroupOutcome CreateTargetGroup(const Model::CreateTargetGroupRequest &request);
                void CreateTargetGroupAsync(const Model::CreateTargetGroupRequest& request, const CreateTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTargetGroupOutcomeCallable CreateTargetGroupCallable(const Model::CreateTargetGroupRequest& request);

                /**
                 *Deletes a health check Template
                 * @param req DeleteHealthCheckTemplatesRequest
                 * @return DeleteHealthCheckTemplatesOutcome
                 */
                DeleteHealthCheckTemplatesOutcome DeleteHealthCheckTemplates(const Model::DeleteHealthCheckTemplatesRequest &request);
                void DeleteHealthCheckTemplatesAsync(const Model::DeleteHealthCheckTemplatesRequest& request, const DeleteHealthCheckTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHealthCheckTemplatesOutcomeCallable DeleteHealthCheckTemplatesCallable(const Model::DeleteHealthCheckTemplatesRequest& request);

                /**
                 *Delete a listener
                 * @param req DeleteListenerRequest
                 * @return DeleteListenerOutcome
                 */
                DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest &request);
                void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request);

                /**
                 *The **DeleteLoadBalancers** API is an async API. The system returns a request ID, but the application CLB instance is not yet deleted successfully. The deletion task is still in progress in the system backend. You can call [DescribeLoadBalancerDetail](https://www.tencentcloud.com/document/api/1822/133711) to query the deletion status of the application CLB instance.
- When an application CLB instance is in the **Deleting** status, it means the application CLB instance is being deleted.
-If the specified application CLB instance cannot be queried, the application CLB instance has been deleted successfully.
                 * @param req DeleteLoadBalancersRequest
                 * @return DeleteLoadBalancersOutcome
                 */
                DeleteLoadBalancersOutcome DeleteLoadBalancers(const Model::DeleteLoadBalancersRequest &request);
                void DeleteLoadBalancersAsync(const Model::DeleteLoadBalancersRequest& request, const DeleteLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancersOutcomeCallable DeleteLoadBalancersCallable(const Model::DeleteLoadBalancersRequest& request);

                /**
                 *DeleteRules deletes forwarding rules. This is an async API. After returning successfully, call the DescribeAsyncJobs API with the returned RequestID as an input parameter to check whether this task is successful.
                 * @param req DeleteRulesRequest
                 * @return DeleteRulesOutcome
                 */
                DeleteRulesOutcome DeleteRules(const Model::DeleteRulesRequest &request);
                void DeleteRulesAsync(const Model::DeleteRulesRequest& request, const DeleteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRulesOutcomeCallable DeleteRulesCallable(const Model::DeleteRulesRequest& request);

                /**
                 *Delete one or more custom security policies. Before deletion, please ensure the policy hasn't been referenced by any HTTPS listener, otherwise the deletion will fail.
                 * @param req DeleteSecurityPolicyRequest
                 * @return DeleteSecurityPolicyOutcome
                 */
                DeleteSecurityPolicyOutcome DeleteSecurityPolicy(const Model::DeleteSecurityPolicyRequest &request);
                void DeleteSecurityPolicyAsync(const Model::DeleteSecurityPolicyRequest& request, const DeleteSecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityPolicyOutcomeCallable DeleteSecurityPolicyCallable(const Model::DeleteSecurityPolicyRequest& request);

                /**
                 *Delete a target group.
                 * @param req DeleteTargetGroupsRequest
                 * @return DeleteTargetGroupsOutcome
                 */
                DeleteTargetGroupsOutcome DeleteTargetGroups(const Model::DeleteTargetGroupsRequest &request);
                void DeleteTargetGroupsAsync(const Model::DeleteTargetGroupsRequest& request, const DeleteTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTargetGroupsOutcomeCallable DeleteTargetGroupsCallable(const Model::DeleteTargetGroupsRequest& request);

                /**
                 *Query API for async tasks
                 * @param req DescribeAsyncJobsRequest
                 * @return DescribeAsyncJobsOutcome
                 */
                DescribeAsyncJobsOutcome DescribeAsyncJobs(const Model::DescribeAsyncJobsRequest &request);
                void DescribeAsyncJobsAsync(const Model::DescribeAsyncJobsRequest& request, const DescribeAsyncJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsyncJobsOutcomeCallable DescribeAsyncJobsCallable(const Model::DescribeAsyncJobsRequest& request);

                /**
                 *This API is used to query the health check template list.
                 * @param req DescribeHealthCheckTemplatesRequest
                 * @return DescribeHealthCheckTemplatesOutcome
                 */
                DescribeHealthCheckTemplatesOutcome DescribeHealthCheckTemplates(const Model::DescribeHealthCheckTemplatesRequest &request);
                void DescribeHealthCheckTemplatesAsync(const Model::DescribeHealthCheckTemplatesRequest& request, const DescribeHealthCheckTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHealthCheckTemplatesOutcomeCallable DescribeHealthCheckTemplatesCallable(const Model::DescribeHealthCheckTemplatesRequest& request);

                /**
                 *This API is used to query the list of certificates bound to a specified listener by instance id and listener id.
If `CertificateType` is set to `SVR`, the information of the extended server certificate and the default server certificate is returned.
If CertificateType is set to CA, the default CA certificate info is returned.
                 * @param req DescribeListenerCertificatesRequest
                 * @return DescribeListenerCertificatesOutcome
                 */
                DescribeListenerCertificatesOutcome DescribeListenerCertificates(const Model::DescribeListenerCertificatesRequest &request);
                void DescribeListenerCertificatesAsync(const Model::DescribeListenerCertificatesRequest& request, const DescribeListenerCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenerCertificatesOutcomeCallable DescribeListenerCertificatesCallable(const Model::DescribeListenerCertificatesRequest& request);

                /**
                 *Queries details of one listener.
                 * @param req DescribeListenerDetailRequest
                 * @return DescribeListenerDetailOutcome
                 */
                DescribeListenerDetailOutcome DescribeListenerDetail(const Model::DescribeListenerDetailRequest &request);
                void DescribeListenerDetailAsync(const Model::DescribeListenerDetailRequest& request, const DescribeListenerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenerDetailOutcomeCallable DescribeListenerDetailCallable(const Model::DescribeListenerDetailRequest& request);

                /**
                 *Queries the health status of a listener.
                 * @param req DescribeListenerHealthStatusRequest
                 * @return DescribeListenerHealthStatusOutcome
                 */
                DescribeListenerHealthStatusOutcome DescribeListenerHealthStatus(const Model::DescribeListenerHealthStatusRequest &request);
                void DescribeListenerHealthStatusAsync(const Model::DescribeListenerHealthStatusRequest& request, const DescribeListenerHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenerHealthStatusOutcomeCallable DescribeListenerHealthStatusCallable(const Model::DescribeListenerHealthStatusRequest& request);

                /**
                 *Queries the listener list
                 * @param req DescribeListenersRequest
                 * @return DescribeListenersOutcome
                 */
                DescribeListenersOutcome DescribeListeners(const Model::DescribeListenersRequest &request);
                void DescribeListenersAsync(const Model::DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenersOutcomeCallable DescribeListenersCallable(const Model::DescribeListenersRequest& request);

                /**
                 *Queries detailed information of a specified load balancing instance.
                 * @param req DescribeLoadBalancerDetailRequest
                 * @return DescribeLoadBalancerDetailOutcome
                 */
                DescribeLoadBalancerDetailOutcome DescribeLoadBalancerDetail(const Model::DescribeLoadBalancerDetailRequest &request);
                void DescribeLoadBalancerDetailAsync(const Model::DescribeLoadBalancerDetailRequest& request, const DescribeLoadBalancerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancerDetailOutcomeCallable DescribeLoadBalancerDetailCallable(const Model::DescribeLoadBalancerDetailRequest& request);

                /**
                 *Query instance configuration.
                 * @param req DescribeLoadBalancersRequest
                 * @return DescribeLoadBalancersOutcome
                 */
                DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest &request);
                void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request);

                /**
                 *Queries the ALB quota configuration of the current account. It supports querying by quota type and allows you to pass a resource ID to query resource-level quotas. You can use DisplayFields to return the used amount and remaining available quantity as needed.
                 * @param req DescribeQuotaRequest
                 * @return DescribeQuotaOutcome
                 */
                DescribeQuotaOutcome DescribeQuota(const Model::DescribeQuotaRequest &request);
                void DescribeQuotaAsync(const Model::DescribeQuotaRequest& request, const DescribeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQuotaOutcomeCallable DescribeQuotaCallable(const Model::DescribeQuotaRequest& request);

                /**
                 *This API is used to query forwarding rules.
                 * @param req DescribeRulesRequest
                 * @return DescribeRulesOutcome
                 */
                DescribeRulesOutcome DescribeRules(const Model::DescribeRulesRequest &request);
                void DescribeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesOutcomeCallable DescribeRulesCallable(const Model::DescribeRulesRequest& request);

                /**
                 *Queries the custom security policy list, supports filtering by security policy ID, name, or tag, and supports paging query.
                 * @param req DescribeSecurityPoliciesRequest
                 * @return DescribeSecurityPoliciesOutcome
                 */
                DescribeSecurityPoliciesOutcome DescribeSecurityPolicies(const Model::DescribeSecurityPoliciesRequest &request);
                void DescribeSecurityPoliciesAsync(const Model::DescribeSecurityPoliciesRequest& request, const DescribeSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPoliciesOutcomeCallable DescribeSecurityPoliciesCallable(const Model::DescribeSecurityPoliciesRequest& request);

                /**
                 *Query the security policy configuration capacity supported in the current region, including optional TLS protocol versions and the encryption suite list for each version. Before creating or modifying a custom security policy, call this API to get available configuration options.
                 * @param req DescribeSecurityPolicyCapabilitiesRequest
                 * @return DescribeSecurityPolicyCapabilitiesOutcome
                 */
                DescribeSecurityPolicyCapabilitiesOutcome DescribeSecurityPolicyCapabilities(const Model::DescribeSecurityPolicyCapabilitiesRequest &request);
                void DescribeSecurityPolicyCapabilitiesAsync(const Model::DescribeSecurityPolicyCapabilitiesRequest& request, const DescribeSecurityPolicyCapabilitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPolicyCapabilitiesOutcomeCallable DescribeSecurityPolicyCapabilitiesCallable(const Model::DescribeSecurityPolicyCapabilitiesRequest& request);

                /**
                 *Query the relationship between a security policy and the HTTPS listeners that refer to it. Before deleting or modifying a security policy, it is advisable to call this API to confirm the impact.
                 * @param req DescribeSecurityPolicyRelationsRequest
                 * @return DescribeSecurityPolicyRelationsOutcome
                 */
                DescribeSecurityPolicyRelationsOutcome DescribeSecurityPolicyRelations(const Model::DescribeSecurityPolicyRelationsRequest &request);
                void DescribeSecurityPolicyRelationsAsync(const Model::DescribeSecurityPolicyRelationsRequest& request, const DescribeSecurityPolicyRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityPolicyRelationsOutcomeCallable DescribeSecurityPolicyRelationsCallable(const Model::DescribeSecurityPolicyRelationsRequest& request);

                /**
                 *Queries system security policies.
                 * @param req DescribeSystemSecurityPoliciesRequest
                 * @return DescribeSystemSecurityPoliciesOutcome
                 */
                DescribeSystemSecurityPoliciesOutcome DescribeSystemSecurityPolicies(const Model::DescribeSystemSecurityPoliciesRequest &request);
                void DescribeSystemSecurityPoliciesAsync(const Model::DescribeSystemSecurityPoliciesRequest& request, const DescribeSystemSecurityPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSystemSecurityPoliciesOutcomeCallable DescribeSystemSecurityPoliciesCallable(const Model::DescribeSystemSecurityPoliciesRequest& request);

                /**
                 *Queries backend services in the target group.
                 * @param req DescribeTargetGroupTargetsRequest
                 * @return DescribeTargetGroupTargetsOutcome
                 */
                DescribeTargetGroupTargetsOutcome DescribeTargetGroupTargets(const Model::DescribeTargetGroupTargetsRequest &request);
                void DescribeTargetGroupTargetsAsync(const Model::DescribeTargetGroupTargetsRequest& request, const DescribeTargetGroupTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupTargetsOutcomeCallable DescribeTargetGroupTargetsCallable(const Model::DescribeTargetGroupTargetsRequest& request);

                /**
                 *Query the target group list.
                 * @param req DescribeTargetGroupsRequest
                 * @return DescribeTargetGroupsOutcome
                 */
                DescribeTargetGroupsOutcome DescribeTargetGroups(const Model::DescribeTargetGroupsRequest &request);
                void DescribeTargetGroupsAsync(const Model::DescribeTargetGroupsRequest& request, const DescribeTargetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupsOutcomeCallable DescribeTargetGroupsCallable(const Model::DescribeTargetGroupsRequest& request);

                /**
                 *Query bound target groups based on the slave machine.
                 * @param req DescribeTargetGroupsByTargetRequest
                 * @return DescribeTargetGroupsByTargetOutcome
                 */
                DescribeTargetGroupsByTargetOutcome DescribeTargetGroupsByTarget(const Model::DescribeTargetGroupsByTargetRequest &request);
                void DescribeTargetGroupsByTargetAsync(const Model::DescribeTargetGroupsByTargetRequest& request, const DescribeTargetGroupsByTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetGroupsByTargetOutcomeCallable DescribeTargetGroupsByTargetCallable(const Model::DescribeTargetGroupsByTargetRequest& request);

                /**
                 *Querying Availability Zones
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *Unbind a Bandwidth Package from an application CLB instance.
                 * @param req DisassociateBandwidthPackageFromLoadBalancerRequest
                 * @return DisassociateBandwidthPackageFromLoadBalancerOutcome
                 */
                DisassociateBandwidthPackageFromLoadBalancerOutcome DisassociateBandwidthPackageFromLoadBalancer(const Model::DisassociateBandwidthPackageFromLoadBalancerRequest &request);
                void DisassociateBandwidthPackageFromLoadBalancerAsync(const Model::DisassociateBandwidthPackageFromLoadBalancerRequest& request, const DisassociateBandwidthPackageFromLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateBandwidthPackageFromLoadBalancerOutcomeCallable DisassociateBandwidthPackageFromLoadBalancerCallable(const Model::DisassociateBandwidthPackageFromLoadBalancerRequest& request);

                /**
                 *DisassociateListenerAdditionalCertificates is an async API. The system returns a request ID, but the additional cert is not yet unbound. The unbinding task is still in progress in the system backend. You can call the DescribeListenerCertificates API to query the cert unbinding status. If the cert is in Disassociating status, it is being unbound.
                 * @param req DisassociateListenerAdditionalCertificatesRequest
                 * @return DisassociateListenerAdditionalCertificatesOutcome
                 */
                DisassociateListenerAdditionalCertificatesOutcome DisassociateListenerAdditionalCertificates(const Model::DisassociateListenerAdditionalCertificatesRequest &request);
                void DisassociateListenerAdditionalCertificatesAsync(const Model::DisassociateListenerAdditionalCertificatesRequest& request, const DisassociateListenerAdditionalCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateListenerAdditionalCertificatesOutcomeCallable DisassociateListenerAdditionalCertificatesCallable(const Model::DisassociateListenerAdditionalCertificatesRequest& request);

                /**
                 *This API is used to query the price for creating a load balancer.
                 * @param req InquirePriceCreateLoadBalancerRequest
                 * @return InquirePriceCreateLoadBalancerOutcome
                 */
                InquirePriceCreateLoadBalancerOutcome InquirePriceCreateLoadBalancer(const Model::InquirePriceCreateLoadBalancerRequest &request);
                void InquirePriceCreateLoadBalancerAsync(const Model::InquirePriceCreateLoadBalancerRequest& request, const InquirePriceCreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateLoadBalancerOutcomeCallable InquirePriceCreateLoadBalancerCallable(const Model::InquirePriceCreateLoadBalancerRequest& request);

                /**
                 *Modify a health check template
                 * @param req ModifyHealthCheckTemplateRequest
                 * @return ModifyHealthCheckTemplateOutcome
                 */
                ModifyHealthCheckTemplateOutcome ModifyHealthCheckTemplate(const Model::ModifyHealthCheckTemplateRequest &request);
                void ModifyHealthCheckTemplateAsync(const Model::ModifyHealthCheckTemplateRequest& request, const ModifyHealthCheckTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHealthCheckTemplateOutcomeCallable ModifyHealthCheckTemplateCallable(const Model::ModifyHealthCheckTemplateRequest& request);

                /**
                 *Modifies listener properties.
                 * @param req ModifyListenerAttributesRequest
                 * @return ModifyListenerAttributesOutcome
                 */
                ModifyListenerAttributesOutcome ModifyListenerAttributes(const Model::ModifyListenerAttributesRequest &request);
                void ModifyListenerAttributesAsync(const Model::ModifyListenerAttributesRequest& request, const ModifyListenerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyListenerAttributesOutcomeCallable ModifyListenerAttributesCallable(const Model::ModifyListenerAttributesRequest& request);

                /**
                 ***Prerequisite:**
You have created an application CLB instance. For detailed operations, please see CreateLoadBalancer.
When you need to change the network type of an application CLB instance from private network to public network through this API, you need to create an Elastic IP first.
**Instructions:**
The ModifyLoadBalancerAddressType API is an async API. The system returns a request ID, but the network type of the application CLB instance has not been changed yet. The change task is still in progress in the system backend. You can call DescribeLoadBalancerDetail to query the change status of the network type of the application CLB instance.
When an application CLB instance is in the Configuring status, it means the network type of the instance is changing.
When an application CLB instance is in the Active status, the network type change of the instance is successful.
                 * @param req ModifyLoadBalancerAddressTypeRequest
                 * @return ModifyLoadBalancerAddressTypeOutcome
                 */
                ModifyLoadBalancerAddressTypeOutcome ModifyLoadBalancerAddressType(const Model::ModifyLoadBalancerAddressTypeRequest &request);
                void ModifyLoadBalancerAddressTypeAsync(const Model::ModifyLoadBalancerAddressTypeRequest& request, const ModifyLoadBalancerAddressTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerAddressTypeOutcomeCallable ModifyLoadBalancerAddressTypeCallable(const Model::ModifyLoadBalancerAddressTypeRequest& request);

                /**
                 *The **ModifyLoadBalancerAttributes** API is an async API. It returns a request ID, but the application CLB instance attribute has not been modified yet. The modifying task is still in progress in the system backend. You can call [DescribeLoadBalancerDetail](https://www.tencentcloud.com/document/api/1822/133711) to query the modification status of the application CLB instance attribute.
-When the application CLB instance attribute is in the **Configuring** status, it means the application CLB instance attribute is being modified.
- When the application CLB instance attribute is in the **Active** status, it means the application CLB instance attribute was modified successfully.
                 * @param req ModifyLoadBalancerAttributesRequest
                 * @return ModifyLoadBalancerAttributesOutcome
                 */
                ModifyLoadBalancerAttributesOutcome ModifyLoadBalancerAttributes(const Model::ModifyLoadBalancerAttributesRequest &request);
                void ModifyLoadBalancerAttributesAsync(const Model::ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerAttributesOutcomeCallable ModifyLoadBalancerAttributesCallable(const Model::ModifyLoadBalancerAttributesRequest& request);

                /**
                 *Set load balancing instance modification protection.
                 * @param req ModifyLoadBalancerModificationProtectionRequest
                 * @return ModifyLoadBalancerModificationProtectionOutcome
                 */
                ModifyLoadBalancerModificationProtectionOutcome ModifyLoadBalancerModificationProtection(const Model::ModifyLoadBalancerModificationProtectionRequest &request);
                void ModifyLoadBalancerModificationProtectionAsync(const Model::ModifyLoadBalancerModificationProtectionRequest& request, const ModifyLoadBalancerModificationProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerModificationProtectionOutcomeCallable ModifyLoadBalancerModificationProtectionCallable(const Model::ModifyLoadBalancerModificationProtectionRequest& request);

                /**
                 *This API is used to modify forwarding rule attributes. This is an async API. After the API return succeeds, you can call the DescribeAsyncJobs API with the returned RequestID as an input parameter to check whether this task is successful.
A rule supports up to 10 forward Conditions and 5 forward Actions.
                 * @param req ModifyRulesAttributesRequest
                 * @return ModifyRulesAttributesOutcome
                 */
                ModifyRulesAttributesOutcome ModifyRulesAttributes(const Model::ModifyRulesAttributesRequest &request);
                void ModifyRulesAttributesAsync(const Model::ModifyRulesAttributesRequest& request, const ModifyRulesAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRulesAttributesOutcomeCallable ModifyRulesAttributesCallable(const Model::ModifyRulesAttributesRequest& request);

                /**
                 *Modify the properties of a custom security policy, including the policy name, TLS protocol version, and encryption suite. The modified configuration will be applied to all HTTPS listeners associated with this policy immediately.
                 * @param req ModifySecurityPolicyAttributesRequest
                 * @return ModifySecurityPolicyAttributesOutcome
                 */
                ModifySecurityPolicyAttributesOutcome ModifySecurityPolicyAttributes(const Model::ModifySecurityPolicyAttributesRequest &request);
                void ModifySecurityPolicyAttributesAsync(const Model::ModifySecurityPolicyAttributesRequest& request, const ModifySecurityPolicyAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityPolicyAttributesOutcomeCallable ModifySecurityPolicyAttributesCallable(const Model::ModifySecurityPolicyAttributesRequest& request);

                /**
                 *Modify the target group.
                 * @param req ModifyTargetGroupAttributesRequest
                 * @return ModifyTargetGroupAttributesOutcome
                 */
                ModifyTargetGroupAttributesOutcome ModifyTargetGroupAttributes(const Model::ModifyTargetGroupAttributesRequest &request);
                void ModifyTargetGroupAttributesAsync(const Model::ModifyTargetGroupAttributesRequest& request, const ModifyTargetGroupAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetGroupAttributesOutcomeCallable ModifyTargetGroupAttributesCallable(const Model::ModifyTargetGroupAttributesRequest& request);

                /**
                 *Modifies backend service information in the target group.
                 * @param req ModifyTargetsInTargetGroupRequest
                 * @return ModifyTargetsInTargetGroupOutcome
                 */
                ModifyTargetsInTargetGroupOutcome ModifyTargetsInTargetGroup(const Model::ModifyTargetsInTargetGroupRequest &request);
                void ModifyTargetsInTargetGroupAsync(const Model::ModifyTargetsInTargetGroupRequest& request, const ModifyTargetsInTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetsInTargetGroupOutcomeCallable ModifyTargetsInTargetGroupCallable(const Model::ModifyTargetsInTargetGroupRequest& request);

                /**
                 *Notify load balancing to unbind real servers
                 * @param req NotifyUnbindTargetRequest
                 * @return NotifyUnbindTargetOutcome
                 */
                NotifyUnbindTargetOutcome NotifyUnbindTarget(const Model::NotifyUnbindTargetRequest &request);
                void NotifyUnbindTargetAsync(const Model::NotifyUnbindTargetRequest& request, const NotifyUnbindTargetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                NotifyUnbindTargetOutcomeCallable NotifyUnbindTargetCallable(const Model::NotifyUnbindTargetRequest& request);

                /**
                 *Removes a backend service from the target group
                 * @param req RemoveTargetsFromTargetGroupRequest
                 * @return RemoveTargetsFromTargetGroupOutcome
                 */
                RemoveTargetsFromTargetGroupOutcome RemoveTargetsFromTargetGroup(const Model::RemoveTargetsFromTargetGroupRequest &request);
                void RemoveTargetsFromTargetGroupAsync(const Model::RemoveTargetsFromTargetGroupRequest& request, const RemoveTargetsFromTargetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveTargetsFromTargetGroupOutcomeCallable RemoveTargetsFromTargetGroupCallable(const Model::RemoveTargetsFromTargetGroupRequest& request);

                /**
                 *The SetLoadBalancerSecurityGroups API supports setting (binding and unbinding) security groups for a public network load balancing instance. To query the security groups currently bound to a load balancing instance, use the DescribeLoadBalancerDetail API (https://www.tencentcloud.com/document/api/1822/133711?from_cn_redirect=1). This API uses SET semantics.
For the binding operation, input parameters need to be passed in for all security groups that should be bound to the load balancing instance (bound + new binding).
During unbinding, input parameters need to pass in all security groups bound to a CLB instance after unbinding. To unbind all security groups, omit this parameter or specify an empty array.
                 * @param req SetLoadBalancerSecurityGroupsRequest
                 * @return SetLoadBalancerSecurityGroupsOutcome
                 */
                SetLoadBalancerSecurityGroupsOutcome SetLoadBalancerSecurityGroups(const Model::SetLoadBalancerSecurityGroupsRequest &request);
                void SetLoadBalancerSecurityGroupsAsync(const Model::SetLoadBalancerSecurityGroupsRequest& request, const SetLoadBalancerSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLoadBalancerSecurityGroupsOutcomeCallable SetLoadBalancerSecurityGroupsCallable(const Model::SetLoadBalancerSecurityGroupsRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_ALBCLIENT_H_
