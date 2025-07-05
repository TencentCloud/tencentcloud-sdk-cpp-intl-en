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

#ifndef TENCENTCLOUD_ECM_V20190719_ECMCLIENT_H_
#define TENCENTCLOUD_ECM_V20190719_ECMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ecm/v20190719/model/AllocateAddressesRequest.h>
#include <tencentcloud/ecm/v20190719/model/AllocateAddressesResponse.h>
#include <tencentcloud/ecm/v20190719/model/AssignIpv6AddressesRequest.h>
#include <tencentcloud/ecm/v20190719/model/AssignIpv6AddressesResponse.h>
#include <tencentcloud/ecm/v20190719/model/AssignPrivateIpAddressesRequest.h>
#include <tencentcloud/ecm/v20190719/model/AssignPrivateIpAddressesResponse.h>
#include <tencentcloud/ecm/v20190719/model/AssociateAddressRequest.h>
#include <tencentcloud/ecm/v20190719/model/AssociateAddressResponse.h>
#include <tencentcloud/ecm/v20190719/model/AssociateSecurityGroupsRequest.h>
#include <tencentcloud/ecm/v20190719/model/AssociateSecurityGroupsResponse.h>
#include <tencentcloud/ecm/v20190719/model/AttachNetworkInterfaceRequest.h>
#include <tencentcloud/ecm/v20190719/model/AttachNetworkInterfaceResponse.h>
#include <tencentcloud/ecm/v20190719/model/BatchDeregisterTargetsRequest.h>
#include <tencentcloud/ecm/v20190719/model/BatchDeregisterTargetsResponse.h>
#include <tencentcloud/ecm/v20190719/model/BatchModifyTargetWeightRequest.h>
#include <tencentcloud/ecm/v20190719/model/BatchModifyTargetWeightResponse.h>
#include <tencentcloud/ecm/v20190719/model/BatchRegisterTargetsRequest.h>
#include <tencentcloud/ecm/v20190719/model/BatchRegisterTargetsResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateHaVipRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateHaVipResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateKeyPairRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateKeyPairResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateListenerRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateListenerResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateLoadBalancerRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateLoadBalancerResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateModuleRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateModuleResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateNetworkInterfaceRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateNetworkInterfaceResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateRouteTableRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateRouteTableResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateRoutesRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateRoutesResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateSecurityGroupRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateSecurityGroupResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateSecurityGroupPoliciesRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateSecurityGroupPoliciesResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateSubnetRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateSubnetResponse.h>
#include <tencentcloud/ecm/v20190719/model/CreateVpcRequest.h>
#include <tencentcloud/ecm/v20190719/model/CreateVpcResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteHaVipRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteHaVipResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteListenerRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteListenerResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteLoadBalancerRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteLoadBalancerResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteLoadBalancerListenersRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteLoadBalancerListenersResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteModuleRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteModuleResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteNetworkInterfaceRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteNetworkInterfaceResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteRouteTableRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteRouteTableResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteRoutesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteRoutesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteSecurityGroupRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteSecurityGroupResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteSecurityGroupPoliciesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteSecurityGroupPoliciesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteSnapshotsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteSnapshotsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteSubnetRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteSubnetResponse.h>
#include <tencentcloud/ecm/v20190719/model/DeleteVpcRequest.h>
#include <tencentcloud/ecm/v20190719/model/DeleteVpcResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeAddressQuotaRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeAddressQuotaResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeAddressesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeAddressesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeBaseOverviewRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeBaseOverviewResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeConfigRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeConfigResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeCustomImageTaskRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeCustomImageTaskResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeDefaultSubnetRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeDefaultSubnetResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeHaVipsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeHaVipsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeImportImageOsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeImportImageOsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstanceTypeConfigRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstanceTypeConfigResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstanceVncUrlRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstanceVncUrlResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesDeniedActionsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeInstancesDeniedActionsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeListenersRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeListenersResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeLoadBalanceTaskStatusRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeLoadBalanceTaskStatusResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeLoadBalancersRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeLoadBalancersResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeModuleRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeModuleResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeModuleDetailRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeModuleDetailResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeMonthPeakNetworkRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeMonthPeakNetworkResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeNetworkInterfacesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeNetworkInterfacesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeNodeRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeNodeResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribePackingQuotaGroupRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribePackingQuotaGroupResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribePeakBaseOverviewRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribePeakBaseOverviewResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribePeakNetworkOverviewRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribePeakNetworkOverviewResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribePriceRunInstanceRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribePriceRunInstanceResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeRouteConflictsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeRouteConflictsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeRouteTablesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeRouteTablesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupAssociationStatisticsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupAssociationStatisticsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupLimitsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupLimitsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupPoliciesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupPoliciesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSecurityGroupsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSnapshotsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSnapshotsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSubnetsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeSubnetsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTargetHealthRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTargetHealthResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTargetsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTargetsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTaskResultRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTaskResultResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/ecm/v20190719/model/DescribeVpcsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DescribeVpcsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DetachNetworkInterfaceRequest.h>
#include <tencentcloud/ecm/v20190719/model/DetachNetworkInterfaceResponse.h>
#include <tencentcloud/ecm/v20190719/model/DisableRoutesRequest.h>
#include <tencentcloud/ecm/v20190719/model/DisableRoutesResponse.h>
#include <tencentcloud/ecm/v20190719/model/DisassociateAddressRequest.h>
#include <tencentcloud/ecm/v20190719/model/DisassociateAddressResponse.h>
#include <tencentcloud/ecm/v20190719/model/DisassociateInstancesKeyPairsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DisassociateInstancesKeyPairsResponse.h>
#include <tencentcloud/ecm/v20190719/model/DisassociateSecurityGroupsRequest.h>
#include <tencentcloud/ecm/v20190719/model/DisassociateSecurityGroupsResponse.h>
#include <tencentcloud/ecm/v20190719/model/EnableRoutesRequest.h>
#include <tencentcloud/ecm/v20190719/model/EnableRoutesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ImportImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/ImportImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/MigrateNetworkInterfaceRequest.h>
#include <tencentcloud/ecm/v20190719/model/MigrateNetworkInterfaceResponse.h>
#include <tencentcloud/ecm/v20190719/model/MigratePrivateIpAddressRequest.h>
#include <tencentcloud/ecm/v20190719/model/MigratePrivateIpAddressResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyAddressAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyAddressAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyAddressesBandwidthRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyAddressesBandwidthResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyDefaultSubnetRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyDefaultSubnetResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyHaVipAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyHaVipAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyImageAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyImageAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyInstancesAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyInstancesAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyIpv6AddressesAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyIpv6AddressesAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyListenerRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyListenerResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyLoadBalancerAttributesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyLoadBalancerAttributesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleConfigRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleConfigResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleDisableWanIpRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleDisableWanIpResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleImageRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleImageResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleIpDirectRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleIpDirectResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNameRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNameResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNetworkRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleNetworkResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleSecurityGroupsRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyModuleSecurityGroupsResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyPrivateIpAddressesAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyPrivateIpAddressesAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyRouteTableAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyRouteTableAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifySecurityGroupAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifySecurityGroupAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifySecurityGroupPoliciesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifySecurityGroupPoliciesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifySubnetAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifySubnetAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyTargetPortRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyTargetPortResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyTargetWeightRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyTargetWeightResponse.h>
#include <tencentcloud/ecm/v20190719/model/ModifyVpcAttributeRequest.h>
#include <tencentcloud/ecm/v20190719/model/ModifyVpcAttributeResponse.h>
#include <tencentcloud/ecm/v20190719/model/RebootInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/RebootInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ReleaseAddressesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ReleaseAddressesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ReleaseIpv6AddressesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ReleaseIpv6AddressesResponse.h>
#include <tencentcloud/ecm/v20190719/model/RemovePrivateIpAddressesRequest.h>
#include <tencentcloud/ecm/v20190719/model/RemovePrivateIpAddressesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ReplaceRouteTableAssociationRequest.h>
#include <tencentcloud/ecm/v20190719/model/ReplaceRouteTableAssociationResponse.h>
#include <tencentcloud/ecm/v20190719/model/ReplaceRoutesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ReplaceRoutesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ReplaceSecurityGroupPolicyRequest.h>
#include <tencentcloud/ecm/v20190719/model/ReplaceSecurityGroupPolicyResponse.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesMaxBandwidthRequest.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesMaxBandwidthResponse.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesPasswordRequest.h>
#include <tencentcloud/ecm/v20190719/model/ResetInstancesPasswordResponse.h>
#include <tencentcloud/ecm/v20190719/model/ResetRoutesRequest.h>
#include <tencentcloud/ecm/v20190719/model/ResetRoutesResponse.h>
#include <tencentcloud/ecm/v20190719/model/RunInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/RunInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/SetLoadBalancerSecurityGroupsRequest.h>
#include <tencentcloud/ecm/v20190719/model/SetLoadBalancerSecurityGroupsResponse.h>
#include <tencentcloud/ecm/v20190719/model/SetSecurityGroupForLoadbalancersRequest.h>
#include <tencentcloud/ecm/v20190719/model/SetSecurityGroupForLoadbalancersResponse.h>
#include <tencentcloud/ecm/v20190719/model/StartInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/StartInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/StopInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/StopInstancesResponse.h>
#include <tencentcloud/ecm/v20190719/model/TerminateInstancesRequest.h>
#include <tencentcloud/ecm/v20190719/model/TerminateInstancesResponse.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            class EcmClient : public AbstractClient
            {
            public:
                EcmClient(const Credential &credential, const std::string &region);
                EcmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AllocateAddressesResponse> AllocateAddressesOutcome;
                typedef std::future<AllocateAddressesOutcome> AllocateAddressesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::AllocateAddressesRequest&, AllocateAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::AssignIpv6AddressesResponse> AssignIpv6AddressesOutcome;
                typedef std::future<AssignIpv6AddressesOutcome> AssignIpv6AddressesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::AssignIpv6AddressesRequest&, AssignIpv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignIpv6AddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::AssignPrivateIpAddressesResponse> AssignPrivateIpAddressesOutcome;
                typedef std::future<AssignPrivateIpAddressesOutcome> AssignPrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::AssignPrivateIpAddressesRequest&, AssignPrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignPrivateIpAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateAddressResponse> AssociateAddressOutcome;
                typedef std::future<AssociateAddressOutcome> AssociateAddressOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::AssociateAddressRequest&, AssociateAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateSecurityGroupsResponse> AssociateSecurityGroupsOutcome;
                typedef std::future<AssociateSecurityGroupsOutcome> AssociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::AssociateSecurityGroupsRequest&, AssociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachNetworkInterfaceResponse> AttachNetworkInterfaceOutcome;
                typedef std::future<AttachNetworkInterfaceOutcome> AttachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::AttachNetworkInterfaceRequest&, AttachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchDeregisterTargetsResponse> BatchDeregisterTargetsOutcome;
                typedef std::future<BatchDeregisterTargetsOutcome> BatchDeregisterTargetsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::BatchDeregisterTargetsRequest&, BatchDeregisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeregisterTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchModifyTargetWeightResponse> BatchModifyTargetWeightOutcome;
                typedef std::future<BatchModifyTargetWeightOutcome> BatchModifyTargetWeightOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::BatchModifyTargetWeightRequest&, BatchModifyTargetWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchModifyTargetWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchRegisterTargetsResponse> BatchRegisterTargetsOutcome;
                typedef std::future<BatchRegisterTargetsOutcome> BatchRegisterTargetsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::BatchRegisterTargetsRequest&, BatchRegisterTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchRegisterTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHaVipResponse> CreateHaVipOutcome;
                typedef std::future<CreateHaVipOutcome> CreateHaVipOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateHaVipRequest&, CreateHaVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHaVipAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateImageResponse> CreateImageOutcome;
                typedef std::future<CreateImageOutcome> CreateImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateImageRequest&, CreateImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateImageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateKeyPairResponse> CreateKeyPairOutcome;
                typedef std::future<CreateKeyPairOutcome> CreateKeyPairOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateKeyPairRequest&, CreateKeyPairOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateKeyPairAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateListenerResponse> CreateListenerOutcome;
                typedef std::future<CreateListenerOutcome> CreateListenerOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateListenerRequest&, CreateListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoadBalancerResponse> CreateLoadBalancerOutcome;
                typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateLoadBalancerRequest&, CreateLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModuleResponse> CreateModuleOutcome;
                typedef std::future<CreateModuleOutcome> CreateModuleOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateModuleRequest&, CreateModuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetworkInterfaceResponse> CreateNetworkInterfaceOutcome;
                typedef std::future<CreateNetworkInterfaceOutcome> CreateNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateNetworkInterfaceRequest&, CreateNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRouteTableResponse> CreateRouteTableOutcome;
                typedef std::future<CreateRouteTableOutcome> CreateRouteTableOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateRouteTableRequest&, CreateRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoutesResponse> CreateRoutesOutcome;
                typedef std::future<CreateRoutesOutcome> CreateRoutesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateRoutesRequest&, CreateRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityGroupResponse> CreateSecurityGroupOutcome;
                typedef std::future<CreateSecurityGroupOutcome> CreateSecurityGroupOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateSecurityGroupRequest&, CreateSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityGroupPoliciesResponse> CreateSecurityGroupPoliciesOutcome;
                typedef std::future<CreateSecurityGroupPoliciesOutcome> CreateSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateSecurityGroupPoliciesRequest&, CreateSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubnetResponse> CreateSubnetOutcome;
                typedef std::future<CreateSubnetOutcome> CreateSubnetOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateSubnetRequest&, CreateSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubnetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcResponse> CreateVpcOutcome;
                typedef std::future<CreateVpcOutcome> CreateVpcOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::CreateVpcRequest&, CreateVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHaVipResponse> DeleteHaVipOutcome;
                typedef std::future<DeleteHaVipOutcome> DeleteHaVipOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteHaVipRequest&, DeleteHaVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHaVipAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteImageResponse> DeleteImageOutcome;
                typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteImageRequest&, DeleteImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteListenerResponse> DeleteListenerOutcome;
                typedef std::future<DeleteListenerOutcome> DeleteListenerOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteListenerRequest&, DeleteListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancerResponse> DeleteLoadBalancerOutcome;
                typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteLoadBalancerRequest&, DeleteLoadBalancerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoadBalancerListenersResponse> DeleteLoadBalancerListenersOutcome;
                typedef std::future<DeleteLoadBalancerListenersOutcome> DeleteLoadBalancerListenersOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteLoadBalancerListenersRequest&, DeleteLoadBalancerListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoadBalancerListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteModuleResponse> DeleteModuleOutcome;
                typedef std::future<DeleteModuleOutcome> DeleteModuleOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteModuleRequest&, DeleteModuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNetworkInterfaceResponse> DeleteNetworkInterfaceOutcome;
                typedef std::future<DeleteNetworkInterfaceOutcome> DeleteNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteNetworkInterfaceRequest&, DeleteNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRouteTableResponse> DeleteRouteTableOutcome;
                typedef std::future<DeleteRouteTableOutcome> DeleteRouteTableOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteRouteTableRequest&, DeleteRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoutesResponse> DeleteRoutesOutcome;
                typedef std::future<DeleteRoutesOutcome> DeleteRoutesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteRoutesRequest&, DeleteRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityGroupResponse> DeleteSecurityGroupOutcome;
                typedef std::future<DeleteSecurityGroupOutcome> DeleteSecurityGroupOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteSecurityGroupRequest&, DeleteSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityGroupPoliciesResponse> DeleteSecurityGroupPoliciesOutcome;
                typedef std::future<DeleteSecurityGroupPoliciesOutcome> DeleteSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteSecurityGroupPoliciesRequest&, DeleteSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotsResponse> DeleteSnapshotsOutcome;
                typedef std::future<DeleteSnapshotsOutcome> DeleteSnapshotsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteSnapshotsRequest&, DeleteSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSubnetResponse> DeleteSubnetOutcome;
                typedef std::future<DeleteSubnetOutcome> DeleteSubnetOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteSubnetRequest&, DeleteSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubnetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcResponse> DeleteVpcOutcome;
                typedef std::future<DeleteVpcOutcome> DeleteVpcOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DeleteVpcRequest&, DeleteVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressQuotaResponse> DescribeAddressQuotaOutcome;
                typedef std::future<DescribeAddressQuotaOutcome> DescribeAddressQuotaOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeAddressQuotaRequest&, DescribeAddressQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressesResponse> DescribeAddressesOutcome;
                typedef std::future<DescribeAddressesOutcome> DescribeAddressesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeAddressesRequest&, DescribeAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBaseOverviewResponse> DescribeBaseOverviewOutcome;
                typedef std::future<DescribeBaseOverviewOutcome> DescribeBaseOverviewOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeBaseOverviewRequest&, DescribeBaseOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBaseOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigResponse> DescribeConfigOutcome;
                typedef std::future<DescribeConfigOutcome> DescribeConfigOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeConfigRequest&, DescribeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomImageTaskResponse> DescribeCustomImageTaskOutcome;
                typedef std::future<DescribeCustomImageTaskOutcome> DescribeCustomImageTaskOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeCustomImageTaskRequest&, DescribeCustomImageTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomImageTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultSubnetResponse> DescribeDefaultSubnetOutcome;
                typedef std::future<DescribeDefaultSubnetOutcome> DescribeDefaultSubnetOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeDefaultSubnetRequest&, DescribeDefaultSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultSubnetAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHaVipsResponse> DescribeHaVipsOutcome;
                typedef std::future<DescribeHaVipsOutcome> DescribeHaVipsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeHaVipsRequest&, DescribeHaVipsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHaVipsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImageResponse> DescribeImageOutcome;
                typedef std::future<DescribeImageOutcome> DescribeImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeImageRequest&, DescribeImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImportImageOsResponse> DescribeImportImageOsOutcome;
                typedef std::future<DescribeImportImageOsOutcome> DescribeImportImageOsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeImportImageOsRequest&, DescribeImportImageOsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImportImageOsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceTypeConfigResponse> DescribeInstanceTypeConfigOutcome;
                typedef std::future<DescribeInstanceTypeConfigOutcome> DescribeInstanceTypeConfigOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeInstanceTypeConfigRequest&, DescribeInstanceTypeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTypeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceVncUrlResponse> DescribeInstanceVncUrlOutcome;
                typedef std::future<DescribeInstanceVncUrlOutcome> DescribeInstanceVncUrlOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeInstanceVncUrlRequest&, DescribeInstanceVncUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceVncUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesDeniedActionsResponse> DescribeInstancesDeniedActionsOutcome;
                typedef std::future<DescribeInstancesDeniedActionsOutcome> DescribeInstancesDeniedActionsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeInstancesDeniedActionsRequest&, DescribeInstancesDeniedActionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesDeniedActionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeListenersResponse> DescribeListenersOutcome;
                typedef std::future<DescribeListenersOutcome> DescribeListenersOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeListenersRequest&, DescribeListenersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeListenersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalanceTaskStatusResponse> DescribeLoadBalanceTaskStatusOutcome;
                typedef std::future<DescribeLoadBalanceTaskStatusOutcome> DescribeLoadBalanceTaskStatusOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeLoadBalanceTaskStatusRequest&, DescribeLoadBalanceTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalanceTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoadBalancersResponse> DescribeLoadBalancersOutcome;
                typedef std::future<DescribeLoadBalancersOutcome> DescribeLoadBalancersOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeLoadBalancersRequest&, DescribeLoadBalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoadBalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModuleResponse> DescribeModuleOutcome;
                typedef std::future<DescribeModuleOutcome> DescribeModuleOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeModuleRequest&, DescribeModuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModuleDetailResponse> DescribeModuleDetailOutcome;
                typedef std::future<DescribeModuleDetailOutcome> DescribeModuleDetailOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeModuleDetailRequest&, DescribeModuleDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModuleDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMonthPeakNetworkResponse> DescribeMonthPeakNetworkOutcome;
                typedef std::future<DescribeMonthPeakNetworkOutcome> DescribeMonthPeakNetworkOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeMonthPeakNetworkRequest&, DescribeMonthPeakNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMonthPeakNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkInterfacesResponse> DescribeNetworkInterfacesOutcome;
                typedef std::future<DescribeNetworkInterfacesOutcome> DescribeNetworkInterfacesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeNetworkInterfacesRequest&, DescribeNetworkInterfacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkInterfacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNodeResponse> DescribeNodeOutcome;
                typedef std::future<DescribeNodeOutcome> DescribeNodeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeNodeRequest&, DescribeNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePackingQuotaGroupResponse> DescribePackingQuotaGroupOutcome;
                typedef std::future<DescribePackingQuotaGroupOutcome> DescribePackingQuotaGroupOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribePackingQuotaGroupRequest&, DescribePackingQuotaGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackingQuotaGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePeakBaseOverviewResponse> DescribePeakBaseOverviewOutcome;
                typedef std::future<DescribePeakBaseOverviewOutcome> DescribePeakBaseOverviewOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribePeakBaseOverviewRequest&, DescribePeakBaseOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePeakBaseOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePeakNetworkOverviewResponse> DescribePeakNetworkOverviewOutcome;
                typedef std::future<DescribePeakNetworkOverviewOutcome> DescribePeakNetworkOverviewOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribePeakNetworkOverviewRequest&, DescribePeakNetworkOverviewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePeakNetworkOverviewAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePriceRunInstanceResponse> DescribePriceRunInstanceOutcome;
                typedef std::future<DescribePriceRunInstanceOutcome> DescribePriceRunInstanceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribePriceRunInstanceRequest&, DescribePriceRunInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceRunInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRouteConflictsResponse> DescribeRouteConflictsOutcome;
                typedef std::future<DescribeRouteConflictsOutcome> DescribeRouteConflictsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeRouteConflictsRequest&, DescribeRouteConflictsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteConflictsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRouteTablesResponse> DescribeRouteTablesOutcome;
                typedef std::future<DescribeRouteTablesOutcome> DescribeRouteTablesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeRouteTablesRequest&, DescribeRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupAssociationStatisticsResponse> DescribeSecurityGroupAssociationStatisticsOutcome;
                typedef std::future<DescribeSecurityGroupAssociationStatisticsOutcome> DescribeSecurityGroupAssociationStatisticsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeSecurityGroupAssociationStatisticsRequest&, DescribeSecurityGroupAssociationStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupAssociationStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupLimitsResponse> DescribeSecurityGroupLimitsOutcome;
                typedef std::future<DescribeSecurityGroupLimitsOutcome> DescribeSecurityGroupLimitsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeSecurityGroupLimitsRequest&, DescribeSecurityGroupLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupPoliciesResponse> DescribeSecurityGroupPoliciesOutcome;
                typedef std::future<DescribeSecurityGroupPoliciesOutcome> DescribeSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeSecurityGroupPoliciesRequest&, DescribeSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupsResponse> DescribeSecurityGroupsOutcome;
                typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeSecurityGroupsRequest&, DescribeSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotsResponse> DescribeSnapshotsOutcome;
                typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeSnapshotsRequest&, DescribeSnapshotsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubnetsResponse> DescribeSubnetsOutcome;
                typedef std::future<DescribeSubnetsOutcome> DescribeSubnetsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeSubnetsRequest&, DescribeSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetHealthResponse> DescribeTargetHealthOutcome;
                typedef std::future<DescribeTargetHealthOutcome> DescribeTargetHealthOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeTargetHealthRequest&, DescribeTargetHealthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetHealthAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTargetsResponse> DescribeTargetsOutcome;
                typedef std::future<DescribeTargetsOutcome> DescribeTargetsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeTargetsRequest&, DescribeTargetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTargetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResultResponse> DescribeTaskResultOutcome;
                typedef std::future<DescribeTaskResultOutcome> DescribeTaskResultOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeTaskResultRequest&, DescribeTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcsResponse> DescribeVpcsOutcome;
                typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DescribeVpcsRequest&, DescribeVpcsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcsAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachNetworkInterfaceResponse> DetachNetworkInterfaceOutcome;
                typedef std::future<DetachNetworkInterfaceOutcome> DetachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DetachNetworkInterfaceRequest&, DetachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableRoutesResponse> DisableRoutesOutcome;
                typedef std::future<DisableRoutesOutcome> DisableRoutesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DisableRoutesRequest&, DisableRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateAddressResponse> DisassociateAddressOutcome;
                typedef std::future<DisassociateAddressOutcome> DisassociateAddressOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DisassociateAddressRequest&, DisassociateAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateInstancesKeyPairsResponse> DisassociateInstancesKeyPairsOutcome;
                typedef std::future<DisassociateInstancesKeyPairsOutcome> DisassociateInstancesKeyPairsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DisassociateInstancesKeyPairsRequest&, DisassociateInstancesKeyPairsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateInstancesKeyPairsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateSecurityGroupsResponse> DisassociateSecurityGroupsOutcome;
                typedef std::future<DisassociateSecurityGroupsOutcome> DisassociateSecurityGroupsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::DisassociateSecurityGroupsRequest&, DisassociateSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableRoutesResponse> EnableRoutesOutcome;
                typedef std::future<EnableRoutesOutcome> EnableRoutesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::EnableRoutesRequest&, EnableRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::ImportImageResponse> ImportImageOutcome;
                typedef std::future<ImportImageOutcome> ImportImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ImportImageRequest&, ImportImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportImageAsyncHandler;
                typedef Outcome<Core::Error, Model::MigrateNetworkInterfaceResponse> MigrateNetworkInterfaceOutcome;
                typedef std::future<MigrateNetworkInterfaceOutcome> MigrateNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::MigrateNetworkInterfaceRequest&, MigrateNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigrateNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::MigratePrivateIpAddressResponse> MigratePrivateIpAddressOutcome;
                typedef std::future<MigratePrivateIpAddressOutcome> MigratePrivateIpAddressOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::MigratePrivateIpAddressRequest&, MigratePrivateIpAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigratePrivateIpAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressAttributeResponse> ModifyAddressAttributeOutcome;
                typedef std::future<ModifyAddressAttributeOutcome> ModifyAddressAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyAddressAttributeRequest&, ModifyAddressAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressesBandwidthResponse> ModifyAddressesBandwidthOutcome;
                typedef std::future<ModifyAddressesBandwidthOutcome> ModifyAddressesBandwidthOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyAddressesBandwidthRequest&, ModifyAddressesBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressesBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDefaultSubnetResponse> ModifyDefaultSubnetOutcome;
                typedef std::future<ModifyDefaultSubnetOutcome> ModifyDefaultSubnetOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyDefaultSubnetRequest&, ModifyDefaultSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDefaultSubnetAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHaVipAttributeResponse> ModifyHaVipAttributeOutcome;
                typedef std::future<ModifyHaVipAttributeOutcome> ModifyHaVipAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyHaVipAttributeRequest&, ModifyHaVipAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHaVipAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyImageAttributeResponse> ModifyImageAttributeOutcome;
                typedef std::future<ModifyImageAttributeOutcome> ModifyImageAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyImageAttributeRequest&, ModifyImageAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstancesAttributeResponse> ModifyInstancesAttributeOutcome;
                typedef std::future<ModifyInstancesAttributeOutcome> ModifyInstancesAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyInstancesAttributeRequest&, ModifyInstancesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstancesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIpv6AddressesAttributeResponse> ModifyIpv6AddressesAttributeOutcome;
                typedef std::future<ModifyIpv6AddressesAttributeOutcome> ModifyIpv6AddressesAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyIpv6AddressesAttributeRequest&, ModifyIpv6AddressesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpv6AddressesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyListenerResponse> ModifyListenerOutcome;
                typedef std::future<ModifyListenerOutcome> ModifyListenerOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyListenerRequest&, ModifyListenerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyListenerAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoadBalancerAttributesResponse> ModifyLoadBalancerAttributesOutcome;
                typedef std::future<ModifyLoadBalancerAttributesOutcome> ModifyLoadBalancerAttributesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyLoadBalancerAttributesRequest&, ModifyLoadBalancerAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoadBalancerAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModuleConfigResponse> ModifyModuleConfigOutcome;
                typedef std::future<ModifyModuleConfigOutcome> ModifyModuleConfigOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleConfigRequest&, ModifyModuleConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModuleDisableWanIpResponse> ModifyModuleDisableWanIpOutcome;
                typedef std::future<ModifyModuleDisableWanIpOutcome> ModifyModuleDisableWanIpOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleDisableWanIpRequest&, ModifyModuleDisableWanIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleDisableWanIpAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModuleImageResponse> ModifyModuleImageOutcome;
                typedef std::future<ModifyModuleImageOutcome> ModifyModuleImageOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleImageRequest&, ModifyModuleImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleImageAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModuleIpDirectResponse> ModifyModuleIpDirectOutcome;
                typedef std::future<ModifyModuleIpDirectOutcome> ModifyModuleIpDirectOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleIpDirectRequest&, ModifyModuleIpDirectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleIpDirectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModuleNameResponse> ModifyModuleNameOutcome;
                typedef std::future<ModifyModuleNameOutcome> ModifyModuleNameOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleNameRequest&, ModifyModuleNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModuleNetworkResponse> ModifyModuleNetworkOutcome;
                typedef std::future<ModifyModuleNetworkOutcome> ModifyModuleNetworkOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleNetworkRequest&, ModifyModuleNetworkOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleNetworkAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModuleSecurityGroupsResponse> ModifyModuleSecurityGroupsOutcome;
                typedef std::future<ModifyModuleSecurityGroupsOutcome> ModifyModuleSecurityGroupsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyModuleSecurityGroupsRequest&, ModifyModuleSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModuleSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrivateIpAddressesAttributeResponse> ModifyPrivateIpAddressesAttributeOutcome;
                typedef std::future<ModifyPrivateIpAddressesAttributeOutcome> ModifyPrivateIpAddressesAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyPrivateIpAddressesAttributeRequest&, ModifyPrivateIpAddressesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivateIpAddressesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRouteTableAttributeResponse> ModifyRouteTableAttributeOutcome;
                typedef std::future<ModifyRouteTableAttributeOutcome> ModifyRouteTableAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyRouteTableAttributeRequest&, ModifyRouteTableAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouteTableAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityGroupAttributeResponse> ModifySecurityGroupAttributeOutcome;
                typedef std::future<ModifySecurityGroupAttributeOutcome> ModifySecurityGroupAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifySecurityGroupAttributeRequest&, ModifySecurityGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityGroupPoliciesResponse> ModifySecurityGroupPoliciesOutcome;
                typedef std::future<ModifySecurityGroupPoliciesOutcome> ModifySecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifySecurityGroupPoliciesRequest&, ModifySecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubnetAttributeResponse> ModifySubnetAttributeOutcome;
                typedef std::future<ModifySubnetAttributeOutcome> ModifySubnetAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifySubnetAttributeRequest&, ModifySubnetAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubnetAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetPortResponse> ModifyTargetPortOutcome;
                typedef std::future<ModifyTargetPortOutcome> ModifyTargetPortOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyTargetPortRequest&, ModifyTargetPortOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetPortAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTargetWeightResponse> ModifyTargetWeightOutcome;
                typedef std::future<ModifyTargetWeightOutcome> ModifyTargetWeightOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyTargetWeightRequest&, ModifyTargetWeightOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTargetWeightAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcAttributeResponse> ModifyVpcAttributeOutcome;
                typedef std::future<ModifyVpcAttributeOutcome> ModifyVpcAttributeOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ModifyVpcAttributeRequest&, ModifyVpcAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::RebootInstancesResponse> RebootInstancesOutcome;
                typedef std::future<RebootInstancesOutcome> RebootInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::RebootInstancesRequest&, RebootInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RebootInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseAddressesResponse> ReleaseAddressesOutcome;
                typedef std::future<ReleaseAddressesOutcome> ReleaseAddressesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ReleaseAddressesRequest&, ReleaseAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseIpv6AddressesResponse> ReleaseIpv6AddressesOutcome;
                typedef std::future<ReleaseIpv6AddressesOutcome> ReleaseIpv6AddressesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ReleaseIpv6AddressesRequest&, ReleaseIpv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseIpv6AddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::RemovePrivateIpAddressesResponse> RemovePrivateIpAddressesOutcome;
                typedef std::future<RemovePrivateIpAddressesOutcome> RemovePrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::RemovePrivateIpAddressesRequest&, RemovePrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemovePrivateIpAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceRouteTableAssociationResponse> ReplaceRouteTableAssociationOutcome;
                typedef std::future<ReplaceRouteTableAssociationOutcome> ReplaceRouteTableAssociationOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ReplaceRouteTableAssociationRequest&, ReplaceRouteTableAssociationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRouteTableAssociationAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceRoutesResponse> ReplaceRoutesOutcome;
                typedef std::future<ReplaceRoutesOutcome> ReplaceRoutesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ReplaceRoutesRequest&, ReplaceRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceSecurityGroupPolicyResponse> ReplaceSecurityGroupPolicyOutcome;
                typedef std::future<ReplaceSecurityGroupPolicyOutcome> ReplaceSecurityGroupPolicyOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ReplaceSecurityGroupPolicyRequest&, ReplaceSecurityGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceSecurityGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstancesResponse> ResetInstancesOutcome;
                typedef std::future<ResetInstancesOutcome> ResetInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ResetInstancesRequest&, ResetInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstancesMaxBandwidthResponse> ResetInstancesMaxBandwidthOutcome;
                typedef std::future<ResetInstancesMaxBandwidthOutcome> ResetInstancesMaxBandwidthOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ResetInstancesMaxBandwidthRequest&, ResetInstancesMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesMaxBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetInstancesPasswordResponse> ResetInstancesPasswordOutcome;
                typedef std::future<ResetInstancesPasswordOutcome> ResetInstancesPasswordOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ResetInstancesPasswordRequest&, ResetInstancesPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetInstancesPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetRoutesResponse> ResetRoutesOutcome;
                typedef std::future<ResetRoutesOutcome> ResetRoutesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::ResetRoutesRequest&, ResetRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::RunInstancesResponse> RunInstancesOutcome;
                typedef std::future<RunInstancesOutcome> RunInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::RunInstancesRequest&, RunInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RunInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::SetLoadBalancerSecurityGroupsResponse> SetLoadBalancerSecurityGroupsOutcome;
                typedef std::future<SetLoadBalancerSecurityGroupsOutcome> SetLoadBalancerSecurityGroupsOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::SetLoadBalancerSecurityGroupsRequest&, SetLoadBalancerSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetLoadBalancerSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetSecurityGroupForLoadbalancersResponse> SetSecurityGroupForLoadbalancersOutcome;
                typedef std::future<SetSecurityGroupForLoadbalancersOutcome> SetSecurityGroupForLoadbalancersOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::SetSecurityGroupForLoadbalancersRequest&, SetSecurityGroupForLoadbalancersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetSecurityGroupForLoadbalancersAsyncHandler;
                typedef Outcome<Core::Error, Model::StartInstancesResponse> StartInstancesOutcome;
                typedef std::future<StartInstancesOutcome> StartInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::StartInstancesRequest&, StartInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::StopInstancesResponse> StopInstancesOutcome;
                typedef std::future<StopInstancesOutcome> StopInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::StopInstancesRequest&, StopInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateInstancesResponse> TerminateInstancesOutcome;
                typedef std::future<TerminateInstancesOutcome> TerminateInstancesOutcomeCallable;
                typedef std::function<void(const EcmClient*, const Model::TerminateInstancesRequest&, TerminateInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateInstancesAsyncHandler;



                /**
                 *This API is used to apply for one or multiple EIPs.
                 * @param req AllocateAddressesRequest
                 * @return AllocateAddressesOutcome
                 */
                AllocateAddressesOutcome AllocateAddresses(const Model::AllocateAddressesRequest &request);
                void AllocateAddressesAsync(const Model::AllocateAddressesRequest& request, const AllocateAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateAddressesOutcomeCallable AllocateAddressesCallable(const Model::AllocateAddressesRequest& request);

                /**
                 *This API is used to apply for an IPv6 address for an ENI.
                 * @param req AssignIpv6AddressesRequest
                 * @return AssignIpv6AddressesOutcome
                 */
                AssignIpv6AddressesOutcome AssignIpv6Addresses(const Model::AssignIpv6AddressesRequest &request);
                void AssignIpv6AddressesAsync(const Model::AssignIpv6AddressesRequest& request, const AssignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignIpv6AddressesOutcomeCallable AssignIpv6AddressesCallable(const Model::AssignIpv6AddressesRequest& request);

                /**
                 *This API is used to apply for a private IP for an ENI.
                 * @param req AssignPrivateIpAddressesRequest
                 * @return AssignPrivateIpAddressesOutcome
                 */
                AssignPrivateIpAddressesOutcome AssignPrivateIpAddresses(const Model::AssignPrivateIpAddressesRequest &request);
                void AssignPrivateIpAddressesAsync(const Model::AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignPrivateIpAddressesOutcomeCallable AssignPrivateIpAddressesCallable(const Model::AssignPrivateIpAddressesRequest& request);

                /**
                 *This API is used to bind an EIP to an instance or the specified private IP of an ENI.
Binding an EIP to an instance (ECM) is essentially to bind it to the primary private IP of the primary ENI of the instance.
When you bind an EIP to the private IP of the specified ENI, if the private IP is already bound to an EIP or public IP, a failure will be reported, and you must unbind it first before you can bind it to a new EIP.
Only EIPs in `UNBIND` status can be bound to a private IP.
                 * @param req AssociateAddressRequest
                 * @return AssociateAddressOutcome
                 */
                AssociateAddressOutcome AssociateAddress(const Model::AssociateAddressRequest &request);
                void AssociateAddressAsync(const Model::AssociateAddressRequest& request, const AssociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateAddressOutcomeCallable AssociateAddressCallable(const Model::AssociateAddressRequest& request);

                /**
                 *This API is used to bind a security group.
                 * @param req AssociateSecurityGroupsRequest
                 * @return AssociateSecurityGroupsOutcome
                 */
                AssociateSecurityGroupsOutcome AssociateSecurityGroups(const Model::AssociateSecurityGroupsRequest &request);
                void AssociateSecurityGroupsAsync(const Model::AssociateSecurityGroupsRequest& request, const AssociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateSecurityGroupsOutcomeCallable AssociateSecurityGroupsCallable(const Model::AssociateSecurityGroupsRequest& request);

                /**
                 *This API is used to bind an ENI to a CVM instance.
                 * @param req AttachNetworkInterfaceRequest
                 * @return AttachNetworkInterfaceOutcome
                 */
                AttachNetworkInterfaceOutcome AttachNetworkInterface(const Model::AttachNetworkInterfaceRequest &request);
                void AttachNetworkInterfaceAsync(const Model::AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachNetworkInterfaceOutcomeCallable AttachNetworkInterfaceCallable(const Model::AttachNetworkInterfaceRequest& request);

                /**
                 *This API is used to batch unbind real servers.
                 * @param req BatchDeregisterTargetsRequest
                 * @return BatchDeregisterTargetsOutcome
                 */
                BatchDeregisterTargetsOutcome BatchDeregisterTargets(const Model::BatchDeregisterTargetsRequest &request);
                void BatchDeregisterTargetsAsync(const Model::BatchDeregisterTargetsRequest& request, const BatchDeregisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchDeregisterTargetsOutcomeCallable BatchDeregisterTargetsCallable(const Model::BatchDeregisterTargetsRequest& request);

                /**
                 *This API is used to batch modify the forwarding weights of the real servers bound to a listener.
                 * @param req BatchModifyTargetWeightRequest
                 * @return BatchModifyTargetWeightOutcome
                 */
                BatchModifyTargetWeightOutcome BatchModifyTargetWeight(const Model::BatchModifyTargetWeightRequest &request);
                void BatchModifyTargetWeightAsync(const Model::BatchModifyTargetWeightRequest& request, const BatchModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchModifyTargetWeightOutcomeCallable BatchModifyTargetWeightCallable(const Model::BatchModifyTargetWeightRequest& request);

                /**
                 *This API is used to batch bind backend targets.
                 * @param req BatchRegisterTargetsRequest
                 * @return BatchRegisterTargetsOutcome
                 */
                BatchRegisterTargetsOutcome BatchRegisterTargets(const Model::BatchRegisterTargetsRequest &request);
                void BatchRegisterTargetsAsync(const Model::BatchRegisterTargetsRequest& request, const BatchRegisterTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchRegisterTargetsOutcomeCallable BatchRegisterTargetsCallable(const Model::BatchRegisterTargetsRequest& request);

                /**
                 *This API is used to create an HAVIP.
                 * @param req CreateHaVipRequest
                 * @return CreateHaVipOutcome
                 */
                CreateHaVipOutcome CreateHaVip(const Model::CreateHaVipRequest &request);
                void CreateHaVipAsync(const Model::CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHaVipOutcomeCallable CreateHaVipCallable(const Model::CreateHaVipRequest& request);

                /**
                 *This API is used to create an image with the system disk of an instance. The image can be used to create instances.
                 * @param req CreateImageRequest
                 * @return CreateImageOutcome
                 */
                CreateImageOutcome CreateImage(const Model::CreateImageRequest &request);
                void CreateImageAsync(const Model::CreateImageRequest& request, const CreateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateImageOutcomeCallable CreateImageCallable(const Model::CreateImageRequest& request);

                /**
                 *This API is used to create an `OpenSSH RSA` key pair, which can be used to log in to a Linux instance.
                 * @param req CreateKeyPairRequest
                 * @return CreateKeyPairOutcome
                 */
                CreateKeyPairOutcome CreateKeyPair(const Model::CreateKeyPairRequest &request);
                void CreateKeyPairAsync(const Model::CreateKeyPairRequest& request, const CreateKeyPairAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateKeyPairOutcomeCallable CreateKeyPairCallable(const Model::CreateKeyPairRequest& request);

                /**
                 *This API is used to create a CLB listener.
                 * @param req CreateListenerRequest
                 * @return CreateListenerOutcome
                 */
                CreateListenerOutcome CreateListener(const Model::CreateListenerRequest &request);
                void CreateListenerAsync(const Model::CreateListenerRequest& request, const CreateListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateListenerOutcomeCallable CreateListenerCallable(const Model::CreateListenerRequest& request);

                /**
                 *This API is used to purchase a CLB instance.
                 * @param req CreateLoadBalancerRequest
                 * @return CreateLoadBalancerOutcome
                 */
                CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest &request);
                void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request);

                /**
                 *This API is used to create a module.
                 * @param req CreateModuleRequest
                 * @return CreateModuleOutcome
                 */
                CreateModuleOutcome CreateModule(const Model::CreateModuleRequest &request);
                void CreateModuleAsync(const Model::CreateModuleRequest& request, const CreateModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModuleOutcomeCallable CreateModuleCallable(const Model::CreateModuleRequest& request);

                /**
                 *This API is used to create an ENI.
                 * @param req CreateNetworkInterfaceRequest
                 * @return CreateNetworkInterfaceOutcome
                 */
                CreateNetworkInterfaceOutcome CreateNetworkInterface(const Model::CreateNetworkInterfaceRequest &request);
                void CreateNetworkInterfaceAsync(const Model::CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkInterfaceOutcomeCallable CreateNetworkInterfaceCallable(const Model::CreateNetworkInterfaceRequest& request);

                /**
                 *After a VPC is created, the system will create a default route table, with which all new subnets will be associated. By default, you can use the default route table to manage your routing policies. If you have multiple routing policies, you can call the API for route table creation to create more route tables to manage your routing policies.
                 * @param req CreateRouteTableRequest
                 * @return CreateRouteTableOutcome
                 */
                CreateRouteTableOutcome CreateRouteTable(const Model::CreateRouteTableRequest &request);
                void CreateRouteTableAsync(const Model::CreateRouteTableRequest& request, const CreateRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRouteTableOutcomeCallable CreateRouteTableCallable(const Model::CreateRouteTableRequest& request);

                /**
                 *This API is used to create a routing policy.
                 * @param req CreateRoutesRequest
                 * @return CreateRoutesOutcome
                 */
                CreateRoutesOutcome CreateRoutes(const Model::CreateRoutesRequest &request);
                void CreateRoutesAsync(const Model::CreateRoutesRequest& request, const CreateRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoutesOutcomeCallable CreateRoutesCallable(const Model::CreateRoutesRequest& request);

                /**
                 *This API is used to create a security group.
                 * @param req CreateSecurityGroupRequest
                 * @return CreateSecurityGroupOutcome
                 */
                CreateSecurityGroupOutcome CreateSecurityGroup(const Model::CreateSecurityGroupRequest &request);
                void CreateSecurityGroupAsync(const Model::CreateSecurityGroupRequest& request, const CreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupOutcomeCallable CreateSecurityGroupCallable(const Model::CreateSecurityGroupRequest& request);

                /**
                 *<p>This API is used to create a security group policy.</p>
<p>In the `SecurityGroupPolicySet` parameter:</p>
<ul>
<li>`Version`: the version number of a security group policy, which automatically increases by one each time you update the security policy, to prevent expiration of the updated routing policies. If it is left empty, any conflicts will be ignored.</li>
<li>When creating the `Egress` and `Ingress` polices,<ul>
<li><code>Protocol</code>: <code>TCP</code>, <code>UDP</code>, <code>ICMP</code>, <code>GRE</code>, or <code>ALL</code>.</li>
<li>`CidrBlock`: a CIDR block in the correct format. In a classic network, if a `CidrBlock` contains private IPs on Tencent Cloud for devices under your account other than CVMs, it does not mean this policy allows you to access these devices. The network isolation policies between tenants take priority over the private network policies in security groups.</li>
<li>`SecurityGroupId`: ID of the security group. It can be the ID of security group to be modified, or the ID of other security group in the same project. All private IPs of all CVMs under the security group will be covered. If this field is used, the policy will automatically change according to the CVM associated with the group ID while being used to match network messages. You don’t need to change it manually.</li>
<li>`Port`: a single port number such as 80, or a port range in the format of “8000-8010”. You may use this field only if the `Protocol` field takes the value `TCP` or `UDP`. Otherwise `Protocol` and `Port` are mutually exclusive.</li>
<li>`Action`: only allows `ACCEPT` or `DROP`.</li>
<li>`CidrBlock`, `SecurityGroupId`, and `AddressTemplate` are mutually exclusive. `Protocol` + `Port` and `ServiceTemplate` are mutually exclusive.</li>
<li>You can only create policies in one direction in each request. To specify the `PolicyIndex` parameter, use the same index number in policies.</li>
</ul></li></ul>
<p>Default API request rate limit: 20 requests/sec.</p>
                 * @param req CreateSecurityGroupPoliciesRequest
                 * @return CreateSecurityGroupPoliciesOutcome
                 */
                CreateSecurityGroupPoliciesOutcome CreateSecurityGroupPolicies(const Model::CreateSecurityGroupPoliciesRequest &request);
                void CreateSecurityGroupPoliciesAsync(const Model::CreateSecurityGroupPoliciesRequest& request, const CreateSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupPoliciesOutcomeCallable CreateSecurityGroupPoliciesCallable(const Model::CreateSecurityGroupPoliciesRequest& request);

                /**
                 *This API is used to create a subnet. After the subnet is created successfully, it will become the default subnet for the AZ.
                 * @param req CreateSubnetRequest
                 * @return CreateSubnetOutcome
                 */
                CreateSubnetOutcome CreateSubnet(const Model::CreateSubnetRequest &request);
                void CreateSubnetAsync(const Model::CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubnetOutcomeCallable CreateSubnetCallable(const Model::CreateSubnetRequest& request);

                /**
                 *This API is used to create a VPC.
                 * @param req CreateVpcRequest
                 * @return CreateVpcOutcome
                 */
                CreateVpcOutcome CreateVpc(const Model::CreateVpcRequest &request);
                void CreateVpcAsync(const Model::CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcOutcomeCallable CreateVpcCallable(const Model::CreateVpcRequest& request);

                /**
                 *This API is used to delete an HAVIP.
                 * @param req DeleteHaVipRequest
                 * @return DeleteHaVipOutcome
                 */
                DeleteHaVipOutcome DeleteHaVip(const Model::DeleteHaVipRequest &request);
                void DeleteHaVipAsync(const Model::DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHaVipOutcomeCallable DeleteHaVipCallable(const Model::DeleteHaVipRequest& request);

                /**
                 *This API is used to delete an image.
                 * @param req DeleteImageRequest
                 * @return DeleteImageOutcome
                 */
                DeleteImageOutcome DeleteImage(const Model::DeleteImageRequest &request);
                void DeleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteImageOutcomeCallable DeleteImageCallable(const Model::DeleteImageRequest& request);

                /**
                 *This API is used to delete a CLB listener.
                 * @param req DeleteListenerRequest
                 * @return DeleteListenerOutcome
                 */
                DeleteListenerOutcome DeleteListener(const Model::DeleteListenerRequest &request);
                void DeleteListenerAsync(const Model::DeleteListenerRequest& request, const DeleteListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteListenerOutcomeCallable DeleteListenerCallable(const Model::DeleteListenerRequest& request);

                /**
                 *This API is used to delete a CLB instance.
                 * @param req DeleteLoadBalancerRequest
                 * @return DeleteLoadBalancerOutcome
                 */
                DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest &request);
                void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request);

                /**
                 *This API is used to delete multiple CLB listeners.
                 * @param req DeleteLoadBalancerListenersRequest
                 * @return DeleteLoadBalancerListenersOutcome
                 */
                DeleteLoadBalancerListenersOutcome DeleteLoadBalancerListeners(const Model::DeleteLoadBalancerListenersRequest &request);
                void DeleteLoadBalancerListenersAsync(const Model::DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoadBalancerListenersOutcomeCallable DeleteLoadBalancerListenersCallable(const Model::DeleteLoadBalancerListenersRequest& request);

                /**
                 *This API is used to delete a business module.
                 * @param req DeleteModuleRequest
                 * @return DeleteModuleOutcome
                 */
                DeleteModuleOutcome DeleteModule(const Model::DeleteModuleRequest &request);
                void DeleteModuleAsync(const Model::DeleteModuleRequest& request, const DeleteModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModuleOutcomeCallable DeleteModuleCallable(const Model::DeleteModuleRequest& request);

                /**
                 *This API is used to delete an ENI.
                 * @param req DeleteNetworkInterfaceRequest
                 * @return DeleteNetworkInterfaceOutcome
                 */
                DeleteNetworkInterfaceOutcome DeleteNetworkInterface(const Model::DeleteNetworkInterfaceRequest &request);
                void DeleteNetworkInterfaceAsync(const Model::DeleteNetworkInterfaceRequest& request, const DeleteNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetworkInterfaceOutcomeCallable DeleteNetworkInterfaceCallable(const Model::DeleteNetworkInterfaceRequest& request);

                /**
                 *This API is used to delete a route table.
                 * @param req DeleteRouteTableRequest
                 * @return DeleteRouteTableOutcome
                 */
                DeleteRouteTableOutcome DeleteRouteTable(const Model::DeleteRouteTableRequest &request);
                void DeleteRouteTableAsync(const Model::DeleteRouteTableRequest& request, const DeleteRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRouteTableOutcomeCallable DeleteRouteTableCallable(const Model::DeleteRouteTableRequest& request);

                /**
                 *This API is used to batch delete routing policies from a route table.
                 * @param req DeleteRoutesRequest
                 * @return DeleteRoutesOutcome
                 */
                DeleteRoutesOutcome DeleteRoutes(const Model::DeleteRoutesRequest &request);
                void DeleteRoutesAsync(const Model::DeleteRoutesRequest& request, const DeleteRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoutesOutcomeCallable DeleteRoutesCallable(const Model::DeleteRoutesRequest& request);

                /**
                 *Only security groups under the current account can be deleted.
A security group cannot be deleted directly if its instance ID is used in the policy of another security group. In this case, you need to modify the policy first before deleting the security group.
Deleted security groups cannot be recovered. Therefore, call this API with caution.
                 * @param req DeleteSecurityGroupRequest
                 * @return DeleteSecurityGroupOutcome
                 */
                DeleteSecurityGroupOutcome DeleteSecurityGroup(const Model::DeleteSecurityGroupRequest &request);
                void DeleteSecurityGroupAsync(const Model::DeleteSecurityGroupRequest& request, const DeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupOutcomeCallable DeleteSecurityGroupCallable(const Model::DeleteSecurityGroupRequest& request);

                /**
                 *`SecurityGroupPolicySet.Version` is used to specify the version of the security group to be manipulated. If the `Version` value passed in differs from the current latest version of the security group, a failure will be returned. If `Version` is not passed in, the policy of the specified `PolicyIndex` will be deleted directly.
                 * @param req DeleteSecurityGroupPoliciesRequest
                 * @return DeleteSecurityGroupPoliciesOutcome
                 */
                DeleteSecurityGroupPoliciesOutcome DeleteSecurityGroupPolicies(const Model::DeleteSecurityGroupPoliciesRequest &request);
                void DeleteSecurityGroupPoliciesAsync(const Model::DeleteSecurityGroupPoliciesRequest& request, const DeleteSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupPoliciesOutcomeCallable DeleteSecurityGroupPoliciesCallable(const Model::DeleteSecurityGroupPoliciesRequest& request);

                /**
                 *This API is used to delete a snapshot.

* Only snapshots in the `NORMAL` state can be deleted. To query the state of a snapshot, you can call the [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1) API and check the `SnapshotState` field in the response.
* Batch operations are supported. If there is any snapshot that cannot be deleted, the operation will not be performed and a specific error code will be returned.
                 * @param req DeleteSnapshotsRequest
                 * @return DeleteSnapshotsOutcome
                 */
                DeleteSnapshotsOutcome DeleteSnapshots(const Model::DeleteSnapshotsRequest &request);
                void DeleteSnapshotsAsync(const Model::DeleteSnapshotsRequest& request, const DeleteSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotsOutcomeCallable DeleteSnapshotsCallable(const Model::DeleteSnapshotsRequest& request);

                /**
                 *This API is used to delete a subnet. If the subnet is the current default subnet in the AZ, after it is deleted, the default subnet automatically created by the system rather than the last subnet created by you will be used as the new default subnet. If the new default subnet does not meet your needs, you can call the API for setting the default subnet to configure it.
                 * @param req DeleteSubnetRequest
                 * @return DeleteSubnetOutcome
                 */
                DeleteSubnetOutcome DeleteSubnet(const Model::DeleteSubnetRequest &request);
                void DeleteSubnetAsync(const Model::DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSubnetOutcomeCallable DeleteSubnetCallable(const Model::DeleteSubnetRequest& request);

                /**
                 *This API is used to delete a VPC.
                 * @param req DeleteVpcRequest
                 * @return DeleteVpcOutcome
                 */
                DeleteVpcOutcome DeleteVpc(const Model::DeleteVpcRequest &request);
                void DeleteVpcAsync(const Model::DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcOutcomeCallable DeleteVpcCallable(const Model::DeleteVpcRequest& request);

                /**
                 *This API is used to query the quota information of the EIP under your account in the current region.
                 * @param req DescribeAddressQuotaRequest
                 * @return DescribeAddressQuotaOutcome
                 */
                DescribeAddressQuotaOutcome DescribeAddressQuota(const Model::DescribeAddressQuotaRequest &request);
                void DescribeAddressQuotaAsync(const Model::DescribeAddressQuotaRequest& request, const DescribeAddressQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressQuotaOutcomeCallable DescribeAddressQuotaCallable(const Model::DescribeAddressQuotaRequest& request);

                /**
                 *This API is used to query the list of EIPs.
                 * @param req DescribeAddressesRequest
                 * @return DescribeAddressesOutcome
                 */
                DescribeAddressesOutcome DescribeAddresses(const Model::DescribeAddressesRequest &request);
                void DescribeAddressesAsync(const Model::DescribeAddressesRequest& request, const DescribeAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressesOutcomeCallable DescribeAddressesCallable(const Model::DescribeAddressesRequest& request);

                /**
                 *This API is used to get the basic data displayed on the overview page.
                 * @param req DescribeBaseOverviewRequest
                 * @return DescribeBaseOverviewOutcome
                 */
                DescribeBaseOverviewOutcome DescribeBaseOverview(const Model::DescribeBaseOverviewRequest &request);
                void DescribeBaseOverviewAsync(const Model::DescribeBaseOverviewRequest& request, const DescribeBaseOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBaseOverviewOutcomeCallable DescribeBaseOverviewCallable(const Model::DescribeBaseOverviewRequest& request);

                /**
                 *This API is used to get the limits of data such as bandwidth and disk.
                 * @param req DescribeConfigRequest
                 * @return DescribeConfigOutcome
                 */
                DescribeConfigOutcome DescribeConfig(const Model::DescribeConfigRequest &request);
                void DescribeConfigAsync(const Model::DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigOutcomeCallable DescribeConfigCallable(const Model::DescribeConfigRequest& request);

                /**
                 *This API is used to query an image import task.
                 * @param req DescribeCustomImageTaskRequest
                 * @return DescribeCustomImageTaskOutcome
                 */
                DescribeCustomImageTaskOutcome DescribeCustomImageTask(const Model::DescribeCustomImageTaskRequest &request);
                void DescribeCustomImageTaskAsync(const Model::DescribeCustomImageTaskRequest& request, const DescribeCustomImageTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomImageTaskOutcomeCallable DescribeCustomImageTaskCallable(const Model::DescribeCustomImageTaskRequest& request);

                /**
                 *This API is used to query the default subnet in an AZ.
                 * @param req DescribeDefaultSubnetRequest
                 * @return DescribeDefaultSubnetOutcome
                 */
                DescribeDefaultSubnetOutcome DescribeDefaultSubnet(const Model::DescribeDefaultSubnetRequest &request);
                void DescribeDefaultSubnetAsync(const Model::DescribeDefaultSubnetRequest& request, const DescribeDefaultSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultSubnetOutcomeCallable DescribeDefaultSubnetCallable(const Model::DescribeDefaultSubnetRequest& request);

                /**
                 *This API is used to query the list of HAVIPs.
                 * @param req DescribeHaVipsRequest
                 * @return DescribeHaVipsOutcome
                 */
                DescribeHaVipsOutcome DescribeHaVips(const Model::DescribeHaVipsRequest &request);
                void DescribeHaVipsAsync(const Model::DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHaVipsOutcomeCallable DescribeHaVipsCallable(const Model::DescribeHaVipsRequest& request);

                /**
                 *This API is used to display the list of images.
                 * @param req DescribeImageRequest
                 * @return DescribeImageOutcome
                 */
                DescribeImageOutcome DescribeImage(const Model::DescribeImageRequest &request);
                void DescribeImageAsync(const Model::DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImageOutcomeCallable DescribeImageCallable(const Model::DescribeImageRequest& request);

                /**
                 *This API is used to query the list of operating systems supported by an image imported from an external resource.
                 * @param req DescribeImportImageOsRequest
                 * @return DescribeImportImageOsOutcome
                 */
                DescribeImportImageOsOutcome DescribeImportImageOs(const Model::DescribeImportImageOsRequest &request);
                void DescribeImportImageOsAsync(const Model::DescribeImportImageOsRequest& request, const DescribeImportImageOsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImportImageOsOutcomeCallable DescribeImportImageOsCallable(const Model::DescribeImportImageOsRequest& request);

                /**
                 *This API is used to get the list of model configurations.
                 * @param req DescribeInstanceTypeConfigRequest
                 * @return DescribeInstanceTypeConfigOutcome
                 */
                DescribeInstanceTypeConfigOutcome DescribeInstanceTypeConfig(const Model::DescribeInstanceTypeConfigRequest &request);
                void DescribeInstanceTypeConfigAsync(const Model::DescribeInstanceTypeConfigRequest& request, const DescribeInstanceTypeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceTypeConfigOutcomeCallable DescribeInstanceTypeConfigCallable(const Model::DescribeInstanceTypeConfigRequest& request);

                /**
                 *This API is used to query the VNC URL of an instance.
                 * @param req DescribeInstanceVncUrlRequest
                 * @return DescribeInstanceVncUrlOutcome
                 */
                DescribeInstanceVncUrlOutcome DescribeInstanceVncUrl(const Model::DescribeInstanceVncUrlRequest &request);
                void DescribeInstanceVncUrlAsync(const Model::DescribeInstanceVncUrlRequest& request, const DescribeInstanceVncUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceVncUrlOutcomeCallable DescribeInstanceVncUrlCallable(const Model::DescribeInstanceVncUrlRequest& request);

                /**
                 *This API is used to get the information of an instance.
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *This API is used to get the information of prohibited operations by instance ID.
                 * @param req DescribeInstancesDeniedActionsRequest
                 * @return DescribeInstancesDeniedActionsOutcome
                 */
                DescribeInstancesDeniedActionsOutcome DescribeInstancesDeniedActions(const Model::DescribeInstancesDeniedActionsRequest &request);
                void DescribeInstancesDeniedActionsAsync(const Model::DescribeInstancesDeniedActionsRequest& request, const DescribeInstancesDeniedActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesDeniedActionsOutcomeCallable DescribeInstancesDeniedActionsCallable(const Model::DescribeInstancesDeniedActionsRequest& request);

                /**
                 *This API is used to query the list of CLB listeners.
                 * @param req DescribeListenersRequest
                 * @return DescribeListenersOutcome
                 */
                DescribeListenersOutcome DescribeListeners(const Model::DescribeListenersRequest &request);
                void DescribeListenersAsync(const Model::DescribeListenersRequest& request, const DescribeListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeListenersOutcomeCallable DescribeListenersCallable(const Model::DescribeListenersRequest& request);

                /**
                 *This API is used to query the task status of a CLB instance.
                 * @param req DescribeLoadBalanceTaskStatusRequest
                 * @return DescribeLoadBalanceTaskStatusOutcome
                 */
                DescribeLoadBalanceTaskStatusOutcome DescribeLoadBalanceTaskStatus(const Model::DescribeLoadBalanceTaskStatusRequest &request);
                void DescribeLoadBalanceTaskStatusAsync(const Model::DescribeLoadBalanceTaskStatusRequest& request, const DescribeLoadBalanceTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalanceTaskStatusOutcomeCallable DescribeLoadBalanceTaskStatusCallable(const Model::DescribeLoadBalanceTaskStatusRequest& request);

                /**
                 *This API is used to query the list of CLB instances.
                 * @param req DescribeLoadBalancersRequest
                 * @return DescribeLoadBalancersOutcome
                 */
                DescribeLoadBalancersOutcome DescribeLoadBalancers(const Model::DescribeLoadBalancersRequest &request);
                void DescribeLoadBalancersAsync(const Model::DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoadBalancersOutcomeCallable DescribeLoadBalancersCallable(const Model::DescribeLoadBalancersRequest& request);

                /**
                 *This API is used to get the list of modules.
                 * @param req DescribeModuleRequest
                 * @return DescribeModuleOutcome
                 */
                DescribeModuleOutcome DescribeModule(const Model::DescribeModuleRequest &request);
                void DescribeModuleAsync(const Model::DescribeModuleRequest& request, const DescribeModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModuleOutcomeCallable DescribeModuleCallable(const Model::DescribeModuleRequest& request);

                /**
                 *This API is used to display the details of a module.
                 * @param req DescribeModuleDetailRequest
                 * @return DescribeModuleDetailOutcome
                 */
                DescribeModuleDetailOutcome DescribeModuleDetail(const Model::DescribeModuleDetailRequest &request);
                void DescribeModuleDetailAsync(const Model::DescribeModuleDetailRequest& request, const DescribeModuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModuleDetailOutcomeCallable DescribeModuleDetailCallable(const Model::DescribeModuleDetailRequest& request);

                /**
                 *This API is used to get the monthly peak and billable inbound/outbound bandwidth values of your node.
                 * @param req DescribeMonthPeakNetworkRequest
                 * @return DescribeMonthPeakNetworkOutcome
                 */
                DescribeMonthPeakNetworkOutcome DescribeMonthPeakNetwork(const Model::DescribeMonthPeakNetworkRequest &request);
                void DescribeMonthPeakNetworkAsync(const Model::DescribeMonthPeakNetworkRequest& request, const DescribeMonthPeakNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMonthPeakNetworkOutcomeCallable DescribeMonthPeakNetworkCallable(const Model::DescribeMonthPeakNetworkRequest& request);

                /**
                 *This API is used to query the list of ENIs.
                 * @param req DescribeNetworkInterfacesRequest
                 * @return DescribeNetworkInterfacesOutcome
                 */
                DescribeNetworkInterfacesOutcome DescribeNetworkInterfaces(const Model::DescribeNetworkInterfacesRequest &request);
                void DescribeNetworkInterfacesAsync(const Model::DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkInterfacesOutcomeCallable DescribeNetworkInterfacesCallable(const Model::DescribeNetworkInterfacesRequest& request);

                /**
                 *This API is used to get the list of nodes.
                 * @param req DescribeNodeRequest
                 * @return DescribeNodeOutcome
                 */
                DescribeNodeOutcome DescribeNode(const Model::DescribeNodeRequest &request);
                void DescribeNodeAsync(const Model::DescribeNodeRequest& request, const DescribeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNodeOutcomeCallable DescribeNodeCallable(const Model::DescribeNodeRequest& request);

                /**
                 *This API is used to get the packing quota of a model in a region (when a virtual model is used, a set of correlated packing quotas will be returned).
                 * @param req DescribePackingQuotaGroupRequest
                 * @return DescribePackingQuotaGroupOutcome
                 */
                DescribePackingQuotaGroupOutcome DescribePackingQuotaGroup(const Model::DescribePackingQuotaGroupRequest &request);
                void DescribePackingQuotaGroupAsync(const Model::DescribePackingQuotaGroupRequest& request, const DescribePackingQuotaGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePackingQuotaGroupOutcomeCallable DescribePackingQuotaGroupCallable(const Model::DescribePackingQuotaGroupRequest& request);

                /**
                 *This API is used to get the peak data of basic information such as CPU, memory, and disk.
                 * @param req DescribePeakBaseOverviewRequest
                 * @return DescribePeakBaseOverviewOutcome
                 */
                DescribePeakBaseOverviewOutcome DescribePeakBaseOverview(const Model::DescribePeakBaseOverviewRequest &request);
                void DescribePeakBaseOverviewAsync(const Model::DescribePeakBaseOverviewRequest& request, const DescribePeakBaseOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePeakBaseOverviewOutcomeCallable DescribePeakBaseOverviewCallable(const Model::DescribePeakBaseOverviewRequest& request);

                /**
                 *This API is used to get the peak network data.
                 * @param req DescribePeakNetworkOverviewRequest
                 * @return DescribePeakNetworkOverviewOutcome
                 */
                DescribePeakNetworkOverviewOutcome DescribePeakNetworkOverview(const Model::DescribePeakNetworkOverviewRequest &request);
                void DescribePeakNetworkOverviewAsync(const Model::DescribePeakNetworkOverviewRequest& request, const DescribePeakNetworkOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePeakNetworkOverviewOutcomeCallable DescribePeakNetworkOverviewCallable(const Model::DescribePeakNetworkOverviewRequest& request);

                /**
                 *This API is used to query the price of an instance.
                 * @param req DescribePriceRunInstanceRequest
                 * @return DescribePriceRunInstanceOutcome
                 */
                DescribePriceRunInstanceOutcome DescribePriceRunInstance(const Model::DescribePriceRunInstanceRequest &request);
                void DescribePriceRunInstanceAsync(const Model::DescribePriceRunInstanceRequest& request, const DescribePriceRunInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePriceRunInstanceOutcomeCallable DescribePriceRunInstanceCallable(const Model::DescribePriceRunInstanceRequest& request);

                /**
                 *This API is used to query the list of conflicts between a custom routing policy and a CCN routing policy.
                 * @param req DescribeRouteConflictsRequest
                 * @return DescribeRouteConflictsOutcome
                 */
                DescribeRouteConflictsOutcome DescribeRouteConflicts(const Model::DescribeRouteConflictsRequest &request);
                void DescribeRouteConflictsAsync(const Model::DescribeRouteConflictsRequest& request, const DescribeRouteConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteConflictsOutcomeCallable DescribeRouteConflictsCallable(const Model::DescribeRouteConflictsRequest& request);

                /**
                 *This API is used to query the list of the objects in a route table.
                 * @param req DescribeRouteTablesRequest
                 * @return DescribeRouteTablesOutcome
                 */
                DescribeRouteTablesOutcome DescribeRouteTables(const Model::DescribeRouteTablesRequest &request);
                void DescribeRouteTablesAsync(const Model::DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteTablesOutcomeCallable DescribeRouteTablesCallable(const Model::DescribeRouteTablesRequest& request);

                /**
                 *This API is used to query statistics on the instances associated with a security group.
                 * @param req DescribeSecurityGroupAssociationStatisticsRequest
                 * @return DescribeSecurityGroupAssociationStatisticsOutcome
                 */
                DescribeSecurityGroupAssociationStatisticsOutcome DescribeSecurityGroupAssociationStatistics(const Model::DescribeSecurityGroupAssociationStatisticsRequest &request);
                void DescribeSecurityGroupAssociationStatisticsAsync(const Model::DescribeSecurityGroupAssociationStatisticsRequest& request, const DescribeSecurityGroupAssociationStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupAssociationStatisticsOutcomeCallable DescribeSecurityGroupAssociationStatisticsCallable(const Model::DescribeSecurityGroupAssociationStatisticsRequest& request);

                /**
                 *This API is used to query the security group quota.
                 * @param req DescribeSecurityGroupLimitsRequest
                 * @return DescribeSecurityGroupLimitsOutcome
                 */
                DescribeSecurityGroupLimitsOutcome DescribeSecurityGroupLimits(const Model::DescribeSecurityGroupLimitsRequest &request);
                void DescribeSecurityGroupLimitsAsync(const Model::DescribeSecurityGroupLimitsRequest& request, const DescribeSecurityGroupLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupLimitsOutcomeCallable DescribeSecurityGroupLimitsCallable(const Model::DescribeSecurityGroupLimitsRequest& request);

                /**
                 *This API is used to query a security group rule.
                 * @param req DescribeSecurityGroupPoliciesRequest
                 * @return DescribeSecurityGroupPoliciesOutcome
                 */
                DescribeSecurityGroupPoliciesOutcome DescribeSecurityGroupPolicies(const Model::DescribeSecurityGroupPoliciesRequest &request);
                void DescribeSecurityGroupPoliciesAsync(const Model::DescribeSecurityGroupPoliciesRequest& request, const DescribeSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupPoliciesOutcomeCallable DescribeSecurityGroupPoliciesCallable(const Model::DescribeSecurityGroupPoliciesRequest& request);

                /**
                 *This API is used to view a security group.
                 * @param req DescribeSecurityGroupsRequest
                 * @return DescribeSecurityGroupsOutcome
                 */
                DescribeSecurityGroupsOutcome DescribeSecurityGroups(const Model::DescribeSecurityGroupsRequest &request);
                void DescribeSecurityGroupsAsync(const Model::DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupsOutcomeCallable DescribeSecurityGroupsCallable(const Model::DescribeSecurityGroupsRequest& request);

                /**
                 *This API is used to query the list of snapshots.

* You can filter results by snapshot ID and the ID and type of the cloud disk for which the snapshot is created. The relationship between different filters is `AND`. For more information on filters, see `Filter`.
* If no parameter is defined, the status of a certain number of snapshots under the current account will be returned. The number is specified by `Limit` and is 20 by default.
                 * @param req DescribeSnapshotsRequest
                 * @return DescribeSnapshotsOutcome
                 */
                DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest &request);
                void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request);

                /**
                 *This API is used to query the list of subnets.
                 * @param req DescribeSubnetsRequest
                 * @return DescribeSubnetsOutcome
                 */
                DescribeSubnetsOutcome DescribeSubnets(const Model::DescribeSubnetsRequest &request);
                void DescribeSubnetsAsync(const Model::DescribeSubnetsRequest& request, const DescribeSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetsOutcomeCallable DescribeSubnetsCallable(const Model::DescribeSubnetsRequest& request);

                /**
                 *This API is used to get the health check status of a CLB real server.
                 * @param req DescribeTargetHealthRequest
                 * @return DescribeTargetHealthOutcome
                 */
                DescribeTargetHealthOutcome DescribeTargetHealth(const Model::DescribeTargetHealthRequest &request);
                void DescribeTargetHealthAsync(const Model::DescribeTargetHealthRequest& request, const DescribeTargetHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetHealthOutcomeCallable DescribeTargetHealthCallable(const Model::DescribeTargetHealthRequest& request);

                /**
                 *This API is used to query the list of the real servers bound to a CLB instance.
                 * @param req DescribeTargetsRequest
                 * @return DescribeTargetsOutcome
                 */
                DescribeTargetsOutcome DescribeTargets(const Model::DescribeTargetsRequest &request);
                void DescribeTargetsAsync(const Model::DescribeTargetsRequest& request, const DescribeTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTargetsOutcomeCallable DescribeTargetsCallable(const Model::DescribeTargetsRequest& request);

                /**
                 *This API is used to query the execution result of an EIP async task.
                 * @param req DescribeTaskResultRequest
                 * @return DescribeTaskResultOutcome
                 */
                DescribeTaskResultOutcome DescribeTaskResult(const Model::DescribeTaskResultRequest &request);
                void DescribeTaskResultAsync(const Model::DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskResultOutcomeCallable DescribeTaskResultCallable(const Model::DescribeTaskResultRequest& request);

                /**
                 *This API is used to get the status of an async task.
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *This API is used to query the list of VPCs.
                 * @param req DescribeVpcsRequest
                 * @return DescribeVpcsOutcome
                 */
                DescribeVpcsOutcome DescribeVpcs(const Model::DescribeVpcsRequest &request);
                void DescribeVpcsAsync(const Model::DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcsOutcomeCallable DescribeVpcsCallable(const Model::DescribeVpcsRequest& request);

                /**
                 *This API is used to unbind an ENI from a CVM instance.
                 * @param req DetachNetworkInterfaceRequest
                 * @return DetachNetworkInterfaceOutcome
                 */
                DetachNetworkInterfaceOutcome DetachNetworkInterface(const Model::DetachNetworkInterfaceRequest &request);
                void DetachNetworkInterfaceAsync(const Model::DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachNetworkInterfaceOutcomeCallable DetachNetworkInterfaceCallable(const Model::DetachNetworkInterfaceRequest& request);

                /**
                 *This API is used to disable a subnet route.
                 * @param req DisableRoutesRequest
                 * @return DisableRoutesOutcome
                 */
                DisableRoutesOutcome DisableRoutes(const Model::DisableRoutesRequest &request);
                void DisableRoutesAsync(const Model::DisableRoutesRequest& request, const DisableRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableRoutesOutcomeCallable DisableRoutesCallable(const Model::DisableRoutesRequest& request);

                /**
                 *This API is used to unbind an EIP.
Only EIPs in `BIND` or `BIND_ENI` status can be unbound.
Blocked EIPs cannot be unbound.
                 * @param req DisassociateAddressRequest
                 * @return DisassociateAddressOutcome
                 */
                DisassociateAddressOutcome DisassociateAddress(const Model::DisassociateAddressRequest &request);
                void DisassociateAddressAsync(const Model::DisassociateAddressRequest& request, const DisassociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateAddressOutcomeCallable DisassociateAddressCallable(const Model::DisassociateAddressRequest& request);

                /**
                 *This API is used to unbind a key pair from an instance.
                 * @param req DisassociateInstancesKeyPairsRequest
                 * @return DisassociateInstancesKeyPairsOutcome
                 */
                DisassociateInstancesKeyPairsOutcome DisassociateInstancesKeyPairs(const Model::DisassociateInstancesKeyPairsRequest &request);
                void DisassociateInstancesKeyPairsAsync(const Model::DisassociateInstancesKeyPairsRequest& request, const DisassociateInstancesKeyPairsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateInstancesKeyPairsOutcomeCallable DisassociateInstancesKeyPairsCallable(const Model::DisassociateInstancesKeyPairsRequest& request);

                /**
                 *This API is used to unbind a security group.
                 * @param req DisassociateSecurityGroupsRequest
                 * @return DisassociateSecurityGroupsOutcome
                 */
                DisassociateSecurityGroupsOutcome DisassociateSecurityGroups(const Model::DisassociateSecurityGroupsRequest &request);
                void DisassociateSecurityGroupsAsync(const Model::DisassociateSecurityGroupsRequest& request, const DisassociateSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateSecurityGroupsOutcomeCallable DisassociateSecurityGroupsCallable(const Model::DisassociateSecurityGroupsRequest& request);

                /**
                 *This API is used to enable a disabled subnet route.
This API verifies whether a CCN route will conflict with an existing route after it is enabled, and if so, you cannot enable it before you disable the conflicting route first.
                 * @param req EnableRoutesRequest
                 * @return EnableRoutesOutcome
                 */
                EnableRoutesOutcome EnableRoutes(const Model::EnableRoutesRequest &request);
                void EnableRoutesAsync(const Model::EnableRoutesRequest& request, const EnableRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableRoutesOutcomeCallable EnableRoutesCallable(const Model::EnableRoutesRequest& request);

                /**
                 *This API is used to import an image from a CVM instance to an ECM instance.
                 * @param req ImportImageRequest
                 * @return ImportImageOutcome
                 */
                ImportImageOutcome ImportImage(const Model::ImportImageRequest &request);
                void ImportImageAsync(const Model::ImportImageRequest& request, const ImportImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportImageOutcomeCallable ImportImageCallable(const Model::ImportImageRequest& request);

                /**
                 *This API is used to migrate an ENI.
                 * @param req MigrateNetworkInterfaceRequest
                 * @return MigrateNetworkInterfaceOutcome
                 */
                MigrateNetworkInterfaceOutcome MigrateNetworkInterface(const Model::MigrateNetworkInterfaceRequest &request);
                void MigrateNetworkInterfaceAsync(const Model::MigrateNetworkInterfaceRequest& request, const MigrateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigrateNetworkInterfaceOutcomeCallable MigrateNetworkInterfaceCallable(const Model::MigrateNetworkInterfaceRequest& request);

                /**
                 *This API is used to migrate a private IP from an ENI.
It migrates a private IP from one ENI to another. Primary IPs cannot be migrated.
The source and destination ENIs must be in the same subnet.
                 * @param req MigratePrivateIpAddressRequest
                 * @return MigratePrivateIpAddressOutcome
                 */
                MigratePrivateIpAddressOutcome MigratePrivateIpAddress(const Model::MigratePrivateIpAddressRequest &request);
                void MigratePrivateIpAddressAsync(const Model::MigratePrivateIpAddressRequest& request, const MigratePrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigratePrivateIpAddressOutcomeCallable MigratePrivateIpAddressCallable(const Model::MigratePrivateIpAddressRequest& request);

                /**
                 *This API is used to modify EIP attributes.
                 * @param req ModifyAddressAttributeRequest
                 * @return ModifyAddressAttributeOutcome
                 */
                ModifyAddressAttributeOutcome ModifyAddressAttribute(const Model::ModifyAddressAttributeRequest &request);
                void ModifyAddressAttributeAsync(const Model::ModifyAddressAttributeRequest& request, const ModifyAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressAttributeOutcomeCallable ModifyAddressAttributeCallable(const Model::ModifyAddressAttributeRequest& request);

                /**
                 *This API is used to modify the EIP bandwidth.

                 * @param req ModifyAddressesBandwidthRequest
                 * @return ModifyAddressesBandwidthOutcome
                 */
                ModifyAddressesBandwidthOutcome ModifyAddressesBandwidth(const Model::ModifyAddressesBandwidthRequest &request);
                void ModifyAddressesBandwidthAsync(const Model::ModifyAddressesBandwidthRequest& request, const ModifyAddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressesBandwidthOutcomeCallable ModifyAddressesBandwidthCallable(const Model::ModifyAddressesBandwidthRequest& request);

                /**
                 *This API is used to modify the default subnet used when you create an instance in an AZ (if you don't specify the VPC parameter when creating the instance, `sunbetId` will be used).
                 * @param req ModifyDefaultSubnetRequest
                 * @return ModifyDefaultSubnetOutcome
                 */
                ModifyDefaultSubnetOutcome ModifyDefaultSubnet(const Model::ModifyDefaultSubnetRequest &request);
                void ModifyDefaultSubnetAsync(const Model::ModifyDefaultSubnetRequest& request, const ModifyDefaultSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDefaultSubnetOutcomeCallable ModifyDefaultSubnetCallable(const Model::ModifyDefaultSubnetRequest& request);

                /**
                 *This API is used to modify the attributes of an HAVIP.
                 * @param req ModifyHaVipAttributeRequest
                 * @return ModifyHaVipAttributeOutcome
                 */
                ModifyHaVipAttributeOutcome ModifyHaVipAttribute(const Model::ModifyHaVipAttributeRequest &request);
                void ModifyHaVipAttributeAsync(const Model::ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHaVipAttributeOutcomeCallable ModifyHaVipAttributeCallable(const Model::ModifyHaVipAttributeRequest& request);

                /**
                 *This API is used to modify the attributes of an image.
                 * @param req ModifyImageAttributeRequest
                 * @return ModifyImageAttributeOutcome
                 */
                ModifyImageAttributeOutcome ModifyImageAttribute(const Model::ModifyImageAttributeRequest &request);
                void ModifyImageAttributeAsync(const Model::ModifyImageAttributeRequest& request, const ModifyImageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyImageAttributeOutcomeCallable ModifyImageAttributeCallable(const Model::ModifyImageAttributeRequest& request);

                /**
                 *This API is used to modify the attributes of an instance.
                 * @param req ModifyInstancesAttributeRequest
                 * @return ModifyInstancesAttributeOutcome
                 */
                ModifyInstancesAttributeOutcome ModifyInstancesAttribute(const Model::ModifyInstancesAttributeRequest &request);
                void ModifyInstancesAttributeAsync(const Model::ModifyInstancesAttributeRequest& request, const ModifyInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstancesAttributeOutcomeCallable ModifyInstancesAttributeCallable(const Model::ModifyInstancesAttributeRequest& request);

                /**
                 *This API is used to modify the IPv6 address attributes of an ENI.
                 * @param req ModifyIpv6AddressesAttributeRequest
                 * @return ModifyIpv6AddressesAttributeOutcome
                 */
                ModifyIpv6AddressesAttributeOutcome ModifyIpv6AddressesAttribute(const Model::ModifyIpv6AddressesAttributeRequest &request);
                void ModifyIpv6AddressesAttributeAsync(const Model::ModifyIpv6AddressesAttributeRequest& request, const ModifyIpv6AddressesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIpv6AddressesAttributeOutcomeCallable ModifyIpv6AddressesAttributeCallable(const Model::ModifyIpv6AddressesAttributeRequest& request);

                /**
                 *This API is used to modify the attributes of a CLB listener.
                 * @param req ModifyListenerRequest
                 * @return ModifyListenerOutcome
                 */
                ModifyListenerOutcome ModifyListener(const Model::ModifyListenerRequest &request);
                void ModifyListenerAsync(const Model::ModifyListenerRequest& request, const ModifyListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyListenerOutcomeCallable ModifyListenerCallable(const Model::ModifyListenerRequest& request);

                /**
                 *This API is used to modify the attributes of a CLB instance.
                 * @param req ModifyLoadBalancerAttributesRequest
                 * @return ModifyLoadBalancerAttributesOutcome
                 */
                ModifyLoadBalancerAttributesOutcome ModifyLoadBalancerAttributes(const Model::ModifyLoadBalancerAttributesRequest &request);
                void ModifyLoadBalancerAttributesAsync(const Model::ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoadBalancerAttributesOutcomeCallable ModifyLoadBalancerAttributesCallable(const Model::ModifyLoadBalancerAttributesRequest& request);

                /**
                 *This API is used to modify the configuration of a module. You cannot modify the configuration of the module if it is associated with an instance.
                 * @param req ModifyModuleConfigRequest
                 * @return ModifyModuleConfigOutcome
                 */
                ModifyModuleConfigOutcome ModifyModuleConfig(const Model::ModifyModuleConfigRequest &request);
                void ModifyModuleConfigAsync(const Model::ModifyModuleConfigRequest& request, const ModifyModuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleConfigOutcomeCallable ModifyModuleConfigCallable(const Model::ModifyModuleConfigRequest& request);

                /**
                 *This API is used to specify whether to prohibit public IP assignment for a module.
                 * @param req ModifyModuleDisableWanIpRequest
                 * @return ModifyModuleDisableWanIpOutcome
                 */
                ModifyModuleDisableWanIpOutcome ModifyModuleDisableWanIp(const Model::ModifyModuleDisableWanIpRequest &request);
                void ModifyModuleDisableWanIpAsync(const Model::ModifyModuleDisableWanIpRequest& request, const ModifyModuleDisableWanIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleDisableWanIpOutcomeCallable ModifyModuleDisableWanIpCallable(const Model::ModifyModuleDisableWanIpRequest& request);

                /**
                 *This API is used to modify the default image of a module.
                 * @param req ModifyModuleImageRequest
                 * @return ModifyModuleImageOutcome
                 */
                ModifyModuleImageOutcome ModifyModuleImage(const Model::ModifyModuleImageRequest &request);
                void ModifyModuleImageAsync(const Model::ModifyModuleImageRequest& request, const ModifyModuleImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleImageOutcomeCallable ModifyModuleImageCallable(const Model::ModifyModuleImageRequest& request);

                /**
                 *This API is used to modify the IP direct access of a module.
                 * @param req ModifyModuleIpDirectRequest
                 * @return ModifyModuleIpDirectOutcome
                 */
                ModifyModuleIpDirectOutcome ModifyModuleIpDirect(const Model::ModifyModuleIpDirectRequest &request);
                void ModifyModuleIpDirectAsync(const Model::ModifyModuleIpDirectRequest& request, const ModifyModuleIpDirectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleIpDirectOutcomeCallable ModifyModuleIpDirectCallable(const Model::ModifyModuleIpDirectRequest& request);

                /**
                 *This API is used to rename a module.
                 * @param req ModifyModuleNameRequest
                 * @return ModifyModuleNameOutcome
                 */
                ModifyModuleNameOutcome ModifyModuleName(const Model::ModifyModuleNameRequest &request);
                void ModifyModuleNameAsync(const Model::ModifyModuleNameRequest& request, const ModifyModuleNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleNameOutcomeCallable ModifyModuleNameCallable(const Model::ModifyModuleNameRequest& request);

                /**
                 *This API is used to modify the default bandwidth cap of a module.
                 * @param req ModifyModuleNetworkRequest
                 * @return ModifyModuleNetworkOutcome
                 */
                ModifyModuleNetworkOutcome ModifyModuleNetwork(const Model::ModifyModuleNetworkRequest &request);
                void ModifyModuleNetworkAsync(const Model::ModifyModuleNetworkRequest& request, const ModifyModuleNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleNetworkOutcomeCallable ModifyModuleNetworkCallable(const Model::ModifyModuleNetworkRequest& request);

                /**
                 *This API is used to modify the default security group of a module.
                 * @param req ModifyModuleSecurityGroupsRequest
                 * @return ModifyModuleSecurityGroupsOutcome
                 */
                ModifyModuleSecurityGroupsOutcome ModifyModuleSecurityGroups(const Model::ModifyModuleSecurityGroupsRequest &request);
                void ModifyModuleSecurityGroupsAsync(const Model::ModifyModuleSecurityGroupsRequest& request, const ModifyModuleSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModuleSecurityGroupsOutcomeCallable ModifyModuleSecurityGroupsCallable(const Model::ModifyModuleSecurityGroupsRequest& request);

                /**
                 *This API is used to modify the private IP attributes of an ENI.
                 * @param req ModifyPrivateIpAddressesAttributeRequest
                 * @return ModifyPrivateIpAddressesAttributeOutcome
                 */
                ModifyPrivateIpAddressesAttributeOutcome ModifyPrivateIpAddressesAttribute(const Model::ModifyPrivateIpAddressesAttributeRequest &request);
                void ModifyPrivateIpAddressesAttributeAsync(const Model::ModifyPrivateIpAddressesAttributeRequest& request, const ModifyPrivateIpAddressesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrivateIpAddressesAttributeOutcomeCallable ModifyPrivateIpAddressesAttributeCallable(const Model::ModifyPrivateIpAddressesAttributeRequest& request);

                /**
                 *This API is used to modify the attributes of a route table.
                 * @param req ModifyRouteTableAttributeRequest
                 * @return ModifyRouteTableAttributeOutcome
                 */
                ModifyRouteTableAttributeOutcome ModifyRouteTableAttribute(const Model::ModifyRouteTableAttributeRequest &request);
                void ModifyRouteTableAttributeAsync(const Model::ModifyRouteTableAttributeRequest& request, const ModifyRouteTableAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRouteTableAttributeOutcomeCallable ModifyRouteTableAttributeCallable(const Model::ModifyRouteTableAttributeRequest& request);

                /**
                 *This API is used to modify the attributes of a security group.
                 * @param req ModifySecurityGroupAttributeRequest
                 * @return ModifySecurityGroupAttributeOutcome
                 */
                ModifySecurityGroupAttributeOutcome ModifySecurityGroupAttribute(const Model::ModifySecurityGroupAttributeRequest &request);
                void ModifySecurityGroupAttributeAsync(const Model::ModifySecurityGroupAttributeRequest& request, const ModifySecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupAttributeOutcomeCallable ModifySecurityGroupAttributeCallable(const Model::ModifySecurityGroupAttributeRequest& request);

                /**
                 *This API is used to modify the outbound and inbound rules of a security group.
                 * @param req ModifySecurityGroupPoliciesRequest
                 * @return ModifySecurityGroupPoliciesOutcome
                 */
                ModifySecurityGroupPoliciesOutcome ModifySecurityGroupPolicies(const Model::ModifySecurityGroupPoliciesRequest &request);
                void ModifySecurityGroupPoliciesAsync(const Model::ModifySecurityGroupPoliciesRequest& request, const ModifySecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupPoliciesOutcomeCallable ModifySecurityGroupPoliciesCallable(const Model::ModifySecurityGroupPoliciesRequest& request);

                /**
                 *This API is used to modify the attributes of a subnet.
                 * @param req ModifySubnetAttributeRequest
                 * @return ModifySubnetAttributeOutcome
                 */
                ModifySubnetAttributeOutcome ModifySubnetAttribute(const Model::ModifySubnetAttributeRequest &request);
                void ModifySubnetAttributeAsync(const Model::ModifySubnetAttributeRequest& request, const ModifySubnetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubnetAttributeOutcomeCallable ModifySubnetAttributeCallable(const Model::ModifySubnetAttributeRequest& request);

                /**
                 *This API is used to modify the port of a real server bound to a listener.
                 * @param req ModifyTargetPortRequest
                 * @return ModifyTargetPortOutcome
                 */
                ModifyTargetPortOutcome ModifyTargetPort(const Model::ModifyTargetPortRequest &request);
                void ModifyTargetPortAsync(const Model::ModifyTargetPortRequest& request, const ModifyTargetPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetPortOutcomeCallable ModifyTargetPortCallable(const Model::ModifyTargetPortRequest& request);

                /**
                 *This API is used to modify the forwarding weight of a real server bound to a listener.
                 * @param req ModifyTargetWeightRequest
                 * @return ModifyTargetWeightOutcome
                 */
                ModifyTargetWeightOutcome ModifyTargetWeight(const Model::ModifyTargetWeightRequest &request);
                void ModifyTargetWeightAsync(const Model::ModifyTargetWeightRequest& request, const ModifyTargetWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTargetWeightOutcomeCallable ModifyTargetWeightCallable(const Model::ModifyTargetWeightRequest& request);

                /**
                 *This API is used to modify the attributes of a VPC.
                 * @param req ModifyVpcAttributeRequest
                 * @return ModifyVpcAttributeOutcome
                 */
                ModifyVpcAttributeOutcome ModifyVpcAttribute(const Model::ModifyVpcAttributeRequest &request);
                void ModifyVpcAttributeAsync(const Model::ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcAttributeOutcomeCallable ModifyVpcAttributeCallable(const Model::ModifyVpcAttributeRequest& request);

                /**
                 *This API is used to restart an instance. Only instances in `RUNNING` status can be restarted. The instance status will become `REBOOTING` when the API is called successfully and will become `RUNNING` when the instance is restarted successfully. Forced restart is supported. Just like powering off a physical PC and restarting it, a forced restart may cause data loss or file system corruption. Make sure that you use this API only when the server cannot be restarted normally.
                 * @param req RebootInstancesRequest
                 * @return RebootInstancesOutcome
                 */
                RebootInstancesOutcome RebootInstances(const Model::RebootInstancesRequest &request);
                void RebootInstancesAsync(const Model::RebootInstancesRequest& request, const RebootInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RebootInstancesOutcomeCallable RebootInstancesCallable(const Model::RebootInstancesRequest& request);

                /**
                 *This API is used to release one or multiple EIPs.
This operation is irreversible. Once you release an EIP, the IP address associated with it will no longer belong to you.
Only EIPs in `UNBIND` status can be released.
                 * @param req ReleaseAddressesRequest
                 * @return ReleaseAddressesOutcome
                 */
                ReleaseAddressesOutcome ReleaseAddresses(const Model::ReleaseAddressesRequest &request);
                void ReleaseAddressesAsync(const Model::ReleaseAddressesRequest& request, const ReleaseAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseAddressesOutcomeCallable ReleaseAddressesCallable(const Model::ReleaseAddressesRequest& request);

                /**
                 *This API is used to release the IPv6 addresses of an ENI.
                 * @param req ReleaseIpv6AddressesRequest
                 * @return ReleaseIpv6AddressesOutcome
                 */
                ReleaseIpv6AddressesOutcome ReleaseIpv6Addresses(const Model::ReleaseIpv6AddressesRequest &request);
                void ReleaseIpv6AddressesAsync(const Model::ReleaseIpv6AddressesRequest& request, const ReleaseIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseIpv6AddressesOutcomeCallable ReleaseIpv6AddressesCallable(const Model::ReleaseIpv6AddressesRequest& request);

                /**
                 *This API is used to return the private IPs of an ENI.
To return the secondary private IPs of an ENI, the API will automatically unbind them from the ENI. The primary private IP of the ENI cannot be returned.
                 * @param req RemovePrivateIpAddressesRequest
                 * @return RemovePrivateIpAddressesOutcome
                 */
                RemovePrivateIpAddressesOutcome RemovePrivateIpAddresses(const Model::RemovePrivateIpAddressesRequest &request);
                void RemovePrivateIpAddressesAsync(const Model::RemovePrivateIpAddressesRequest& request, const RemovePrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemovePrivateIpAddressesOutcomeCallable RemovePrivateIpAddressesCallable(const Model::RemovePrivateIpAddressesRequest& request);

                /**
                 *This API is used to modify the route table associated with a subnet. A subnet can be associated with only one route table.
                 * @param req ReplaceRouteTableAssociationRequest
                 * @return ReplaceRouteTableAssociationOutcome
                 */
                ReplaceRouteTableAssociationOutcome ReplaceRouteTableAssociation(const Model::ReplaceRouteTableAssociationRequest &request);
                void ReplaceRouteTableAssociationAsync(const Model::ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceRouteTableAssociationOutcomeCallable ReplaceRouteTableAssociationCallable(const Model::ReplaceRouteTableAssociationRequest& request);

                /**
                 *This API is used to replace a routing policy.
                 * @param req ReplaceRoutesRequest
                 * @return ReplaceRoutesOutcome
                 */
                ReplaceRoutesOutcome ReplaceRoutes(const Model::ReplaceRoutesRequest &request);
                void ReplaceRoutesAsync(const Model::ReplaceRoutesRequest& request, const ReplaceRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceRoutesOutcomeCallable ReplaceRoutesCallable(const Model::ReplaceRoutesRequest& request);

                /**
                 *This API is used to replace a single routing rule of a security group. You can replace only one rule in a single direction in one request and must specify the index (PolicyIndex).
                 * @param req ReplaceSecurityGroupPolicyRequest
                 * @return ReplaceSecurityGroupPolicyOutcome
                 */
                ReplaceSecurityGroupPolicyOutcome ReplaceSecurityGroupPolicy(const Model::ReplaceSecurityGroupPolicyRequest &request);
                void ReplaceSecurityGroupPolicyAsync(const Model::ReplaceSecurityGroupPolicyRequest& request, const ReplaceSecurityGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceSecurityGroupPolicyOutcomeCallable ReplaceSecurityGroupPolicyCallable(const Model::ReplaceSecurityGroupPolicyRequest& request);

                /**
                 *This API is used to reinstall an instance. If you specify the `ImageId` parameter, the specified image will be used; otherwise, the image used by the current instance will be used. If you don't specify the password, a password will be sent later in Message Center.
                 * @param req ResetInstancesRequest
                 * @return ResetInstancesOutcome
                 */
                ResetInstancesOutcome ResetInstances(const Model::ResetInstancesRequest &request);
                void ResetInstancesAsync(const Model::ResetInstancesRequest& request, const ResetInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesOutcomeCallable ResetInstancesCallable(const Model::ResetInstancesRequest& request);

                /**
                 *This API is used to reset the bandwidth cap of an instance.
                 * @param req ResetInstancesMaxBandwidthRequest
                 * @return ResetInstancesMaxBandwidthOutcome
                 */
                ResetInstancesMaxBandwidthOutcome ResetInstancesMaxBandwidth(const Model::ResetInstancesMaxBandwidthRequest &request);
                void ResetInstancesMaxBandwidthAsync(const Model::ResetInstancesMaxBandwidthRequest& request, const ResetInstancesMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesMaxBandwidthOutcomeCallable ResetInstancesMaxBandwidthCallable(const Model::ResetInstancesMaxBandwidthRequest& request);

                /**
                 *This API is used to reset the password for a running status. You need to explicitly specify the `ForceStop` parameter; otherwise, you can reset the password only for instances that have been shut down.
                 * @param req ResetInstancesPasswordRequest
                 * @return ResetInstancesPasswordOutcome
                 */
                ResetInstancesPasswordOutcome ResetInstancesPassword(const Model::ResetInstancesPasswordRequest &request);
                void ResetInstancesPasswordAsync(const Model::ResetInstancesPasswordRequest& request, const ResetInstancesPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetInstancesPasswordOutcomeCallable ResetInstancesPasswordCallable(const Model::ResetInstancesPasswordRequest& request);

                /**
                 *This API is used to reset a route table name and all routing policies.
                 * @param req ResetRoutesRequest
                 * @return ResetRoutesOutcome
                 */
                ResetRoutesOutcome ResetRoutes(const Model::ResetRoutesRequest &request);
                void ResetRoutesAsync(const Model::ResetRoutesRequest& request, const ResetRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetRoutesOutcomeCallable ResetRoutesCallable(const Model::ResetRoutesRequest& request);

                /**
                 *This API is used to create an ECM instance.
                 * @param req RunInstancesRequest
                 * @return RunInstancesOutcome
                 */
                RunInstancesOutcome RunInstances(const Model::RunInstancesRequest &request);
                void RunInstancesAsync(const Model::RunInstancesRequest& request, const RunInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RunInstancesOutcomeCallable RunInstancesCallable(const Model::RunInstancesRequest& request);

                /**
                 *This API is used to configure security groups for a CLB instance.
                 * @param req SetLoadBalancerSecurityGroupsRequest
                 * @return SetLoadBalancerSecurityGroupsOutcome
                 */
                SetLoadBalancerSecurityGroupsOutcome SetLoadBalancerSecurityGroups(const Model::SetLoadBalancerSecurityGroupsRequest &request);
                void SetLoadBalancerSecurityGroupsAsync(const Model::SetLoadBalancerSecurityGroupsRequest& request, const SetLoadBalancerSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetLoadBalancerSecurityGroupsOutcomeCallable SetLoadBalancerSecurityGroupsCallable(const Model::SetLoadBalancerSecurityGroupsRequest& request);

                /**
                 *This API is used to bind or unbind a security group to or from multiple CLB instances.
                 * @param req SetSecurityGroupForLoadbalancersRequest
                 * @return SetSecurityGroupForLoadbalancersOutcome
                 */
                SetSecurityGroupForLoadbalancersOutcome SetSecurityGroupForLoadbalancers(const Model::SetSecurityGroupForLoadbalancersRequest &request);
                void SetSecurityGroupForLoadbalancersAsync(const Model::SetSecurityGroupForLoadbalancersRequest& request, const SetSecurityGroupForLoadbalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetSecurityGroupForLoadbalancersOutcomeCallable SetSecurityGroupForLoadbalancersCallable(const Model::SetSecurityGroupForLoadbalancersRequest& request);

                /**
                 *This API is used to start an instance. Only instances in `STOPPED` status can be started. The instance status will become `STARTING` when this API is called successfully and will become `RUNNING` when the instance is started successfully.
                 * @param req StartInstancesRequest
                 * @return StartInstancesOutcome
                 */
                StartInstancesOutcome StartInstances(const Model::StartInstancesRequest &request);
                void StartInstancesAsync(const Model::StartInstancesRequest& request, const StartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartInstancesOutcomeCallable StartInstancesCallable(const Model::StartInstancesRequest& request);

                /**
                 *Only instances in `RUNNING` status can be shut down.
The instance status will become `STOPPING` when the API is called successfully and will become `STOPPED` when the instance is shut down successfully.
Forced shutdown is supported. Just like powering off a physical PC, a forced shutdown may cause data loss or file system corruption. Make sure that you use this API only when the server cannot be shut down normally.
                 * @param req StopInstancesRequest
                 * @return StopInstancesOutcome
                 */
                StopInstancesOutcome StopInstances(const Model::StopInstancesRequest &request);
                void StopInstancesAsync(const Model::StopInstancesRequest& request, const StopInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopInstancesOutcomeCallable StopInstancesCallable(const Model::StopInstancesRequest& request);

                /**
                 *This API is used to terminate an instance.
                 * @param req TerminateInstancesRequest
                 * @return TerminateInstancesOutcome
                 */
                TerminateInstancesOutcome TerminateInstances(const Model::TerminateInstancesRequest &request);
                void TerminateInstancesAsync(const Model::TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateInstancesOutcomeCallable TerminateInstancesCallable(const Model::TerminateInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_ECMCLIENT_H_
