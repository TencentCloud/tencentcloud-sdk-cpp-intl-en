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

#ifndef TENCENTCLOUD_TKE_V20180525_TKECLIENT_H_
#define TENCENTCLOUD_TKE_V20180525_TKECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tke/v20180525/model/AcquireClusterAdminRoleRequest.h>
#include <tencentcloud/tke/v20180525/model/AcquireClusterAdminRoleResponse.h>
#include <tencentcloud/tke/v20180525/model/AddExistedInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/AddExistedInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/AddNodeToNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/AddNodeToNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/AddVpcCniSubnetsRequest.h>
#include <tencentcloud/tke/v20180525/model/AddVpcCniSubnetsResponse.h>
#include <tencentcloud/tke/v20180525/model/CheckEdgeClusterCIDRRequest.h>
#include <tencentcloud/tke/v20180525/model/CheckEdgeClusterCIDRResponse.h>
#include <tencentcloud/tke/v20180525/model/CheckInstancesUpgradeAbleRequest.h>
#include <tencentcloud/tke/v20180525/model/CheckInstancesUpgradeAbleResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateBackupStorageLocationRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateBackupStorageLocationResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateCLSLogConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateCLSLogConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterEndpointRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterEndpointResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterEndpointVipRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterEndpointVipResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRouteTableRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterRouteTableResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterVirtualNodeRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterVirtualNodeResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterVirtualNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateClusterVirtualNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateECMInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateECMInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateEdgeCVMInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateEdgeCVMInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateEdgeLogConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateEdgeLogConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateEksLogConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateEksLogConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusAlertRuleRequest.h>
#include <tencentcloud/tke/v20180525/model/CreatePrometheusAlertRuleResponse.h>
#include <tencentcloud/tke/v20180525/model/CreateTKEEdgeClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/CreateTKEEdgeClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteAddonRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteAddonResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteBackupStorageLocationRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteBackupStorageLocationResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterAsGroupsRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterAsGroupsResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterEndpointRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterEndpointResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterEndpointVipRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterEndpointVipResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteTableRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterRouteTableResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterVirtualNodeRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterVirtualNodeResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterVirtualNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteClusterVirtualNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteECMInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteECMInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteEdgeCVMInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteEdgeCVMInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteEdgeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteEdgeClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteLogConfigsRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteLogConfigsResponse.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusAlertRuleRequest.h>
#include <tencentcloud/tke/v20180525/model/DeletePrometheusAlertRuleResponse.h>
#include <tencentcloud/tke/v20180525/model/DeleteTKEEdgeClusterRequest.h>
#include <tencentcloud/tke/v20180525/model/DeleteTKEEdgeClusterResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeAddonRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeAddonResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeAddonValuesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeAddonValuesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeAvailableClusterVersionRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeAvailableClusterVersionResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeAvailableTKEEdgeVersionRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeAvailableTKEEdgeVersionResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeBackupStorageLocationsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeBackupStorageLocationsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeBatchModifyTagsStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeBatchModifyTagsStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAsGroupOptionRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAsGroupOptionResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAsGroupsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAsGroupsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAuthenticationOptionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterAuthenticationOptionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterCommonNamesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterCommonNamesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointVipStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointVipStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterEndpointsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterExtraArgsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterExtraArgsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterKubeconfigRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterKubeconfigResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterLevelAttributeRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterLevelAttributeResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterLevelChangeRecordsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterLevelChangeRecordsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterNodePoolDetailRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterNodePoolDetailResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterNodePoolsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterNodePoolsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRouteTablesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRouteTablesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRoutesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterRoutesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterSecurityRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterSecurityResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterVirtualNodeRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterVirtualNodeResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterVirtualNodePoolsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClusterVirtualNodePoolsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeClustersRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeClustersResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeControlPlaneLogsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeControlPlaneLogsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeECMInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeECMInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeAvailableExtraArgsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeAvailableExtraArgsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeCVMInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeCVMInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeClusterExtraArgsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeClusterExtraArgsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeClusterInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeClusterUpgradeInfoRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeClusterUpgradeInfoResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeLogSwitchesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEdgeLogSwitchesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEnableVpcCniProgressRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEnableVpcCniProgressResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeEncryptionStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeEncryptionStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeExistedInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeExistedInstancesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeExternalNodeSupportConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeExternalNodeSupportConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeIPAMDRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeIPAMDResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeImagesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeImagesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeLogConfigsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeLogConfigsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeLogSwitchesRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeLogSwitchesResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePodChargeInfoRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePodChargeInfoResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusInstanceRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribePrometheusInstanceResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeRegionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeRegionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeReservedInstanceUtilizationRateRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeReservedInstanceUtilizationRateResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeResourceUsageRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeResourceUsageResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeRouteTableConflictsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeRouteTableConflictsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeSupportedRuntimeRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeSupportedRuntimeResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeClusterCredentialRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeClusterCredentialResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeClusterStatusRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeClusterStatusResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeClustersRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeClustersResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeExternalKubeconfigRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeExternalKubeconfigResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeScriptRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeTKEEdgeScriptResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeVersionsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeVersionsResponse.h>
#include <tencentcloud/tke/v20180525/model/DescribeVpcCniPodLimitsRequest.h>
#include <tencentcloud/tke/v20180525/model/DescribeVpcCniPodLimitsResponse.h>
#include <tencentcloud/tke/v20180525/model/DisableClusterDeletionProtectionRequest.h>
#include <tencentcloud/tke/v20180525/model/DisableClusterDeletionProtectionResponse.h>
#include <tencentcloud/tke/v20180525/model/DisableControlPlaneLogsRequest.h>
#include <tencentcloud/tke/v20180525/model/DisableControlPlaneLogsResponse.h>
#include <tencentcloud/tke/v20180525/model/DisableEncryptionProtectionRequest.h>
#include <tencentcloud/tke/v20180525/model/DisableEncryptionProtectionResponse.h>
#include <tencentcloud/tke/v20180525/model/DrainClusterVirtualNodeRequest.h>
#include <tencentcloud/tke/v20180525/model/DrainClusterVirtualNodeResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableClusterDeletionProtectionRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableClusterDeletionProtectionResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableControlPlaneLogsRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableControlPlaneLogsResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableEncryptionProtectionRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableEncryptionProtectionResponse.h>
#include <tencentcloud/tke/v20180525/model/EnableVpcCniNetworkTypeRequest.h>
#include <tencentcloud/tke/v20180525/model/EnableVpcCniNetworkTypeResponse.h>
#include <tencentcloud/tke/v20180525/model/ForwardTKEEdgeApplicationRequestV3Request.h>
#include <tencentcloud/tke/v20180525/model/ForwardTKEEdgeApplicationRequestV3Response.h>
#include <tencentcloud/tke/v20180525/model/GetClusterLevelPriceRequest.h>
#include <tencentcloud/tke/v20180525/model/GetClusterLevelPriceResponse.h>
#include <tencentcloud/tke/v20180525/model/GetTkeAppChartListRequest.h>
#include <tencentcloud/tke/v20180525/model/GetTkeAppChartListResponse.h>
#include <tencentcloud/tke/v20180525/model/GetUpgradeInstanceProgressRequest.h>
#include <tencentcloud/tke/v20180525/model/GetUpgradeInstanceProgressResponse.h>
#include <tencentcloud/tke/v20180525/model/InstallAddonRequest.h>
#include <tencentcloud/tke/v20180525/model/InstallAddonResponse.h>
#include <tencentcloud/tke/v20180525/model/InstallEdgeLogAgentRequest.h>
#include <tencentcloud/tke/v20180525/model/InstallEdgeLogAgentResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAsGroupAttributeRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAsGroupAttributeResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAsGroupOptionAttributeRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAsGroupOptionAttributeResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAttributeRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAttributeResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAuthenticationOptionsRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterAuthenticationOptionsResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterEndpointSPRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterEndpointSPResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterImageRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterImageResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterRuntimeConfigRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterRuntimeConfigResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterTagsRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterTagsResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterVirtualNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyClusterVirtualNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyNodePoolInstanceTypesRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyNodePoolInstanceTypesResponse.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusAlertRuleRequest.h>
#include <tencentcloud/tke/v20180525/model/ModifyPrometheusAlertRuleResponse.h>
#include <tencentcloud/tke/v20180525/model/RemoveNodeFromNodePoolRequest.h>
#include <tencentcloud/tke/v20180525/model/RemoveNodeFromNodePoolResponse.h>
#include <tencentcloud/tke/v20180525/model/SetNodePoolNodeProtectionRequest.h>
#include <tencentcloud/tke/v20180525/model/SetNodePoolNodeProtectionResponse.h>
#include <tencentcloud/tke/v20180525/model/UninstallEdgeLogAgentRequest.h>
#include <tencentcloud/tke/v20180525/model/UninstallEdgeLogAgentResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateAddonRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateAddonResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateClusterKubeconfigRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateClusterKubeconfigResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateClusterVersionRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateClusterVersionResponse.h>
#include <tencentcloud/tke/v20180525/model/UpdateEdgeClusterVersionRequest.h>
#include <tencentcloud/tke/v20180525/model/UpdateEdgeClusterVersionResponse.h>
#include <tencentcloud/tke/v20180525/model/UpgradeClusterInstancesRequest.h>
#include <tencentcloud/tke/v20180525/model/UpgradeClusterInstancesResponse.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            class TkeClient : public AbstractClient
            {
            public:
                TkeClient(const Credential &credential, const std::string &region);
                TkeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AcquireClusterAdminRoleResponse> AcquireClusterAdminRoleOutcome;
                typedef std::future<AcquireClusterAdminRoleOutcome> AcquireClusterAdminRoleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::AcquireClusterAdminRoleRequest&, AcquireClusterAdminRoleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcquireClusterAdminRoleAsyncHandler;
                typedef Outcome<Core::Error, Model::AddExistedInstancesResponse> AddExistedInstancesOutcome;
                typedef std::future<AddExistedInstancesOutcome> AddExistedInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::AddExistedInstancesRequest&, AddExistedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddExistedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddNodeToNodePoolResponse> AddNodeToNodePoolOutcome;
                typedef std::future<AddNodeToNodePoolOutcome> AddNodeToNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::AddNodeToNodePoolRequest&, AddNodeToNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddNodeToNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::AddVpcCniSubnetsResponse> AddVpcCniSubnetsOutcome;
                typedef std::future<AddVpcCniSubnetsOutcome> AddVpcCniSubnetsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::AddVpcCniSubnetsRequest&, AddVpcCniSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddVpcCniSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckEdgeClusterCIDRResponse> CheckEdgeClusterCIDROutcome;
                typedef std::future<CheckEdgeClusterCIDROutcome> CheckEdgeClusterCIDROutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CheckEdgeClusterCIDRRequest&, CheckEdgeClusterCIDROutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckEdgeClusterCIDRAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckInstancesUpgradeAbleResponse> CheckInstancesUpgradeAbleOutcome;
                typedef std::future<CheckInstancesUpgradeAbleOutcome> CheckInstancesUpgradeAbleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CheckInstancesUpgradeAbleRequest&, CheckInstancesUpgradeAbleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckInstancesUpgradeAbleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupStorageLocationResponse> CreateBackupStorageLocationOutcome;
                typedef std::future<CreateBackupStorageLocationOutcome> CreateBackupStorageLocationOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateBackupStorageLocationRequest&, CreateBackupStorageLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupStorageLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCLSLogConfigResponse> CreateCLSLogConfigOutcome;
                typedef std::future<CreateCLSLogConfigOutcome> CreateCLSLogConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateCLSLogConfigRequest&, CreateCLSLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCLSLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterResponse> CreateClusterOutcome;
                typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterRequest&, CreateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterEndpointResponse> CreateClusterEndpointOutcome;
                typedef std::future<CreateClusterEndpointOutcome> CreateClusterEndpointOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterEndpointRequest&, CreateClusterEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterEndpointVipResponse> CreateClusterEndpointVipOutcome;
                typedef std::future<CreateClusterEndpointVipOutcome> CreateClusterEndpointVipOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterEndpointVipRequest&, CreateClusterEndpointVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterEndpointVipAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterInstancesResponse> CreateClusterInstancesOutcome;
                typedef std::future<CreateClusterInstancesOutcome> CreateClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterInstancesRequest&, CreateClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterNodePoolResponse> CreateClusterNodePoolOutcome;
                typedef std::future<CreateClusterNodePoolOutcome> CreateClusterNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterNodePoolRequest&, CreateClusterNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterRouteTableResponse> CreateClusterRouteTableOutcome;
                typedef std::future<CreateClusterRouteTableOutcome> CreateClusterRouteTableOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterRouteTableRequest&, CreateClusterRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterVirtualNodeResponse> CreateClusterVirtualNodeOutcome;
                typedef std::future<CreateClusterVirtualNodeOutcome> CreateClusterVirtualNodeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterVirtualNodeRequest&, CreateClusterVirtualNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterVirtualNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterVirtualNodePoolResponse> CreateClusterVirtualNodePoolOutcome;
                typedef std::future<CreateClusterVirtualNodePoolOutcome> CreateClusterVirtualNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateClusterVirtualNodePoolRequest&, CreateClusterVirtualNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterVirtualNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateECMInstancesResponse> CreateECMInstancesOutcome;
                typedef std::future<CreateECMInstancesOutcome> CreateECMInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateECMInstancesRequest&, CreateECMInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateECMInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdgeCVMInstancesResponse> CreateEdgeCVMInstancesOutcome;
                typedef std::future<CreateEdgeCVMInstancesOutcome> CreateEdgeCVMInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateEdgeCVMInstancesRequest&, CreateEdgeCVMInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeCVMInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEdgeLogConfigResponse> CreateEdgeLogConfigOutcome;
                typedef std::future<CreateEdgeLogConfigOutcome> CreateEdgeLogConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateEdgeLogConfigRequest&, CreateEdgeLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEdgeLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateEksLogConfigResponse> CreateEksLogConfigOutcome;
                typedef std::future<CreateEksLogConfigOutcome> CreateEksLogConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateEksLogConfigRequest&, CreateEksLogConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateEksLogConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrometheusAlertRuleResponse> CreatePrometheusAlertRuleOutcome;
                typedef std::future<CreatePrometheusAlertRuleOutcome> CreatePrometheusAlertRuleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreatePrometheusAlertRuleRequest&, CreatePrometheusAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusAlertRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTKEEdgeClusterResponse> CreateTKEEdgeClusterOutcome;
                typedef std::future<CreateTKEEdgeClusterOutcome> CreateTKEEdgeClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::CreateTKEEdgeClusterRequest&, CreateTKEEdgeClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTKEEdgeClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAddonResponse> DeleteAddonOutcome;
                typedef std::future<DeleteAddonOutcome> DeleteAddonOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteAddonRequest&, DeleteAddonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAddonAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackupStorageLocationResponse> DeleteBackupStorageLocationOutcome;
                typedef std::future<DeleteBackupStorageLocationOutcome> DeleteBackupStorageLocationOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteBackupStorageLocationRequest&, DeleteBackupStorageLocationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupStorageLocationAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterResponse> DeleteClusterOutcome;
                typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterRequest&, DeleteClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterAsGroupsResponse> DeleteClusterAsGroupsOutcome;
                typedef std::future<DeleteClusterAsGroupsOutcome> DeleteClusterAsGroupsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterAsGroupsRequest&, DeleteClusterAsGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterEndpointResponse> DeleteClusterEndpointOutcome;
                typedef std::future<DeleteClusterEndpointOutcome> DeleteClusterEndpointOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterEndpointRequest&, DeleteClusterEndpointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterEndpointAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterEndpointVipResponse> DeleteClusterEndpointVipOutcome;
                typedef std::future<DeleteClusterEndpointVipOutcome> DeleteClusterEndpointVipOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterEndpointVipRequest&, DeleteClusterEndpointVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterEndpointVipAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterInstancesResponse> DeleteClusterInstancesOutcome;
                typedef std::future<DeleteClusterInstancesOutcome> DeleteClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterInstancesRequest&, DeleteClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterNodePoolResponse> DeleteClusterNodePoolOutcome;
                typedef std::future<DeleteClusterNodePoolOutcome> DeleteClusterNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterNodePoolRequest&, DeleteClusterNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterRouteResponse> DeleteClusterRouteOutcome;
                typedef std::future<DeleteClusterRouteOutcome> DeleteClusterRouteOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterRouteRequest&, DeleteClusterRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterRouteTableResponse> DeleteClusterRouteTableOutcome;
                typedef std::future<DeleteClusterRouteTableOutcome> DeleteClusterRouteTableOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterRouteTableRequest&, DeleteClusterRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterVirtualNodeResponse> DeleteClusterVirtualNodeOutcome;
                typedef std::future<DeleteClusterVirtualNodeOutcome> DeleteClusterVirtualNodeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterVirtualNodeRequest&, DeleteClusterVirtualNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterVirtualNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterVirtualNodePoolResponse> DeleteClusterVirtualNodePoolOutcome;
                typedef std::future<DeleteClusterVirtualNodePoolOutcome> DeleteClusterVirtualNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteClusterVirtualNodePoolRequest&, DeleteClusterVirtualNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterVirtualNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteECMInstancesResponse> DeleteECMInstancesOutcome;
                typedef std::future<DeleteECMInstancesOutcome> DeleteECMInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteECMInstancesRequest&, DeleteECMInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteECMInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEdgeCVMInstancesResponse> DeleteEdgeCVMInstancesOutcome;
                typedef std::future<DeleteEdgeCVMInstancesOutcome> DeleteEdgeCVMInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteEdgeCVMInstancesRequest&, DeleteEdgeCVMInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeCVMInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteEdgeClusterInstancesResponse> DeleteEdgeClusterInstancesOutcome;
                typedef std::future<DeleteEdgeClusterInstancesOutcome> DeleteEdgeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteEdgeClusterInstancesRequest&, DeleteEdgeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEdgeClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLogConfigsResponse> DeleteLogConfigsOutcome;
                typedef std::future<DeleteLogConfigsOutcome> DeleteLogConfigsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteLogConfigsRequest&, DeleteLogConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrometheusAlertRuleResponse> DeletePrometheusAlertRuleOutcome;
                typedef std::future<DeletePrometheusAlertRuleOutcome> DeletePrometheusAlertRuleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeletePrometheusAlertRuleRequest&, DeletePrometheusAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusAlertRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTKEEdgeClusterResponse> DeleteTKEEdgeClusterOutcome;
                typedef std::future<DeleteTKEEdgeClusterOutcome> DeleteTKEEdgeClusterOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DeleteTKEEdgeClusterRequest&, DeleteTKEEdgeClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTKEEdgeClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddonResponse> DescribeAddonOutcome;
                typedef std::future<DescribeAddonOutcome> DescribeAddonOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeAddonRequest&, DescribeAddonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddonAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddonValuesResponse> DescribeAddonValuesOutcome;
                typedef std::future<DescribeAddonValuesOutcome> DescribeAddonValuesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeAddonValuesRequest&, DescribeAddonValuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddonValuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableClusterVersionResponse> DescribeAvailableClusterVersionOutcome;
                typedef std::future<DescribeAvailableClusterVersionOutcome> DescribeAvailableClusterVersionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeAvailableClusterVersionRequest&, DescribeAvailableClusterVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableClusterVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableTKEEdgeVersionResponse> DescribeAvailableTKEEdgeVersionOutcome;
                typedef std::future<DescribeAvailableTKEEdgeVersionOutcome> DescribeAvailableTKEEdgeVersionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeAvailableTKEEdgeVersionRequest&, DescribeAvailableTKEEdgeVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableTKEEdgeVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupStorageLocationsResponse> DescribeBackupStorageLocationsOutcome;
                typedef std::future<DescribeBackupStorageLocationsOutcome> DescribeBackupStorageLocationsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeBackupStorageLocationsRequest&, DescribeBackupStorageLocationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupStorageLocationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchModifyTagsStatusResponse> DescribeBatchModifyTagsStatusOutcome;
                typedef std::future<DescribeBatchModifyTagsStatusOutcome> DescribeBatchModifyTagsStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeBatchModifyTagsStatusRequest&, DescribeBatchModifyTagsStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchModifyTagsStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAsGroupOptionResponse> DescribeClusterAsGroupOptionOutcome;
                typedef std::future<DescribeClusterAsGroupOptionOutcome> DescribeClusterAsGroupOptionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterAsGroupOptionRequest&, DescribeClusterAsGroupOptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsGroupOptionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAsGroupsResponse> DescribeClusterAsGroupsOutcome;
                typedef std::future<DescribeClusterAsGroupsOutcome> DescribeClusterAsGroupsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterAsGroupsRequest&, DescribeClusterAsGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterAuthenticationOptionsResponse> DescribeClusterAuthenticationOptionsOutcome;
                typedef std::future<DescribeClusterAuthenticationOptionsOutcome> DescribeClusterAuthenticationOptionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterAuthenticationOptionsRequest&, DescribeClusterAuthenticationOptionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAuthenticationOptionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterCommonNamesResponse> DescribeClusterCommonNamesOutcome;
                typedef std::future<DescribeClusterCommonNamesOutcome> DescribeClusterCommonNamesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterCommonNamesRequest&, DescribeClusterCommonNamesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterCommonNamesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterEndpointStatusResponse> DescribeClusterEndpointStatusOutcome;
                typedef std::future<DescribeClusterEndpointStatusOutcome> DescribeClusterEndpointStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterEndpointStatusRequest&, DescribeClusterEndpointStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterEndpointStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterEndpointVipStatusResponse> DescribeClusterEndpointVipStatusOutcome;
                typedef std::future<DescribeClusterEndpointVipStatusOutcome> DescribeClusterEndpointVipStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterEndpointVipStatusRequest&, DescribeClusterEndpointVipStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterEndpointVipStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterEndpointsResponse> DescribeClusterEndpointsOutcome;
                typedef std::future<DescribeClusterEndpointsOutcome> DescribeClusterEndpointsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterEndpointsRequest&, DescribeClusterEndpointsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterEndpointsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterExtraArgsResponse> DescribeClusterExtraArgsOutcome;
                typedef std::future<DescribeClusterExtraArgsOutcome> DescribeClusterExtraArgsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterExtraArgsRequest&, DescribeClusterExtraArgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterExtraArgsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterInstancesResponse> DescribeClusterInstancesOutcome;
                typedef std::future<DescribeClusterInstancesOutcome> DescribeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterInstancesRequest&, DescribeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterKubeconfigResponse> DescribeClusterKubeconfigOutcome;
                typedef std::future<DescribeClusterKubeconfigOutcome> DescribeClusterKubeconfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterKubeconfigRequest&, DescribeClusterKubeconfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterKubeconfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterLevelAttributeResponse> DescribeClusterLevelAttributeOutcome;
                typedef std::future<DescribeClusterLevelAttributeOutcome> DescribeClusterLevelAttributeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterLevelAttributeRequest&, DescribeClusterLevelAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterLevelAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterLevelChangeRecordsResponse> DescribeClusterLevelChangeRecordsOutcome;
                typedef std::future<DescribeClusterLevelChangeRecordsOutcome> DescribeClusterLevelChangeRecordsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterLevelChangeRecordsRequest&, DescribeClusterLevelChangeRecordsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterLevelChangeRecordsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNodePoolDetailResponse> DescribeClusterNodePoolDetailOutcome;
                typedef std::future<DescribeClusterNodePoolDetailOutcome> DescribeClusterNodePoolDetailOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterNodePoolDetailRequest&, DescribeClusterNodePoolDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodePoolDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterNodePoolsResponse> DescribeClusterNodePoolsOutcome;
                typedef std::future<DescribeClusterNodePoolsOutcome> DescribeClusterNodePoolsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterNodePoolsRequest&, DescribeClusterNodePoolsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterNodePoolsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterRouteTablesResponse> DescribeClusterRouteTablesOutcome;
                typedef std::future<DescribeClusterRouteTablesOutcome> DescribeClusterRouteTablesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterRouteTablesRequest&, DescribeClusterRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterRouteTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterRoutesResponse> DescribeClusterRoutesOutcome;
                typedef std::future<DescribeClusterRoutesOutcome> DescribeClusterRoutesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterRoutesRequest&, DescribeClusterRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterSecurityResponse> DescribeClusterSecurityOutcome;
                typedef std::future<DescribeClusterSecurityOutcome> DescribeClusterSecurityOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterSecurityRequest&, DescribeClusterSecurityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterSecurityAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterStatusResponse> DescribeClusterStatusOutcome;
                typedef std::future<DescribeClusterStatusOutcome> DescribeClusterStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterStatusRequest&, DescribeClusterStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterVirtualNodeResponse> DescribeClusterVirtualNodeOutcome;
                typedef std::future<DescribeClusterVirtualNodeOutcome> DescribeClusterVirtualNodeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterVirtualNodeRequest&, DescribeClusterVirtualNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterVirtualNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterVirtualNodePoolsResponse> DescribeClusterVirtualNodePoolsOutcome;
                typedef std::future<DescribeClusterVirtualNodePoolsOutcome> DescribeClusterVirtualNodePoolsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClusterVirtualNodePoolsRequest&, DescribeClusterVirtualNodePoolsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterVirtualNodePoolsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeControlPlaneLogsResponse> DescribeControlPlaneLogsOutcome;
                typedef std::future<DescribeControlPlaneLogsOutcome> DescribeControlPlaneLogsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeControlPlaneLogsRequest&, DescribeControlPlaneLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeControlPlaneLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeECMInstancesResponse> DescribeECMInstancesOutcome;
                typedef std::future<DescribeECMInstancesOutcome> DescribeECMInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeECMInstancesRequest&, DescribeECMInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeECMInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeAvailableExtraArgsResponse> DescribeEdgeAvailableExtraArgsOutcome;
                typedef std::future<DescribeEdgeAvailableExtraArgsOutcome> DescribeEdgeAvailableExtraArgsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEdgeAvailableExtraArgsRequest&, DescribeEdgeAvailableExtraArgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeAvailableExtraArgsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeCVMInstancesResponse> DescribeEdgeCVMInstancesOutcome;
                typedef std::future<DescribeEdgeCVMInstancesOutcome> DescribeEdgeCVMInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEdgeCVMInstancesRequest&, DescribeEdgeCVMInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeCVMInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeClusterExtraArgsResponse> DescribeEdgeClusterExtraArgsOutcome;
                typedef std::future<DescribeEdgeClusterExtraArgsOutcome> DescribeEdgeClusterExtraArgsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEdgeClusterExtraArgsRequest&, DescribeEdgeClusterExtraArgsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeClusterExtraArgsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeClusterInstancesResponse> DescribeEdgeClusterInstancesOutcome;
                typedef std::future<DescribeEdgeClusterInstancesOutcome> DescribeEdgeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEdgeClusterInstancesRequest&, DescribeEdgeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeClusterInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeClusterUpgradeInfoResponse> DescribeEdgeClusterUpgradeInfoOutcome;
                typedef std::future<DescribeEdgeClusterUpgradeInfoOutcome> DescribeEdgeClusterUpgradeInfoOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEdgeClusterUpgradeInfoRequest&, DescribeEdgeClusterUpgradeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeClusterUpgradeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEdgeLogSwitchesResponse> DescribeEdgeLogSwitchesOutcome;
                typedef std::future<DescribeEdgeLogSwitchesOutcome> DescribeEdgeLogSwitchesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEdgeLogSwitchesRequest&, DescribeEdgeLogSwitchesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdgeLogSwitchesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnableVpcCniProgressResponse> DescribeEnableVpcCniProgressOutcome;
                typedef std::future<DescribeEnableVpcCniProgressOutcome> DescribeEnableVpcCniProgressOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEnableVpcCniProgressRequest&, DescribeEnableVpcCniProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnableVpcCniProgressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEncryptionStatusResponse> DescribeEncryptionStatusOutcome;
                typedef std::future<DescribeEncryptionStatusOutcome> DescribeEncryptionStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeEncryptionStatusRequest&, DescribeEncryptionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEncryptionStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExistedInstancesResponse> DescribeExistedInstancesOutcome;
                typedef std::future<DescribeExistedInstancesOutcome> DescribeExistedInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeExistedInstancesRequest&, DescribeExistedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExistedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeExternalNodeSupportConfigResponse> DescribeExternalNodeSupportConfigOutcome;
                typedef std::future<DescribeExternalNodeSupportConfigOutcome> DescribeExternalNodeSupportConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeExternalNodeSupportConfigRequest&, DescribeExternalNodeSupportConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExternalNodeSupportConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIPAMDResponse> DescribeIPAMDOutcome;
                typedef std::future<DescribeIPAMDOutcome> DescribeIPAMDOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeIPAMDRequest&, DescribeIPAMDOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPAMDAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeImagesResponse> DescribeImagesOutcome;
                typedef std::future<DescribeImagesOutcome> DescribeImagesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeImagesRequest&, DescribeImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogConfigsResponse> DescribeLogConfigsOutcome;
                typedef std::future<DescribeLogConfigsOutcome> DescribeLogConfigsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeLogConfigsRequest&, DescribeLogConfigsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogConfigsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLogSwitchesResponse> DescribeLogSwitchesOutcome;
                typedef std::future<DescribeLogSwitchesOutcome> DescribeLogSwitchesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeLogSwitchesRequest&, DescribeLogSwitchesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogSwitchesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePodChargeInfoResponse> DescribePodChargeInfoOutcome;
                typedef std::future<DescribePodChargeInfoOutcome> DescribePodChargeInfoOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePodChargeInfoRequest&, DescribePodChargeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePodChargeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrometheusInstanceResponse> DescribePrometheusInstanceOutcome;
                typedef std::future<DescribePrometheusInstanceOutcome> DescribePrometheusInstanceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribePrometheusInstanceRequest&, DescribePrometheusInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRegionsResponse> DescribeRegionsOutcome;
                typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeRegionsRequest&, DescribeRegionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeReservedInstanceUtilizationRateResponse> DescribeReservedInstanceUtilizationRateOutcome;
                typedef std::future<DescribeReservedInstanceUtilizationRateOutcome> DescribeReservedInstanceUtilizationRateOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeReservedInstanceUtilizationRateRequest&, DescribeReservedInstanceUtilizationRateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeReservedInstanceUtilizationRateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceUsageResponse> DescribeResourceUsageOutcome;
                typedef std::future<DescribeResourceUsageOutcome> DescribeResourceUsageOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeResourceUsageRequest&, DescribeResourceUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRouteTableConflictsResponse> DescribeRouteTableConflictsOutcome;
                typedef std::future<DescribeRouteTableConflictsOutcome> DescribeRouteTableConflictsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeRouteTableConflictsRequest&, DescribeRouteTableConflictsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTableConflictsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSupportedRuntimeResponse> DescribeSupportedRuntimeOutcome;
                typedef std::future<DescribeSupportedRuntimeOutcome> DescribeSupportedRuntimeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeSupportedRuntimeRequest&, DescribeSupportedRuntimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSupportedRuntimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTKEEdgeClusterCredentialResponse> DescribeTKEEdgeClusterCredentialOutcome;
                typedef std::future<DescribeTKEEdgeClusterCredentialOutcome> DescribeTKEEdgeClusterCredentialOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeTKEEdgeClusterCredentialRequest&, DescribeTKEEdgeClusterCredentialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTKEEdgeClusterCredentialAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTKEEdgeClusterStatusResponse> DescribeTKEEdgeClusterStatusOutcome;
                typedef std::future<DescribeTKEEdgeClusterStatusOutcome> DescribeTKEEdgeClusterStatusOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeTKEEdgeClusterStatusRequest&, DescribeTKEEdgeClusterStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTKEEdgeClusterStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTKEEdgeClustersResponse> DescribeTKEEdgeClustersOutcome;
                typedef std::future<DescribeTKEEdgeClustersOutcome> DescribeTKEEdgeClustersOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeTKEEdgeClustersRequest&, DescribeTKEEdgeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTKEEdgeClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTKEEdgeExternalKubeconfigResponse> DescribeTKEEdgeExternalKubeconfigOutcome;
                typedef std::future<DescribeTKEEdgeExternalKubeconfigOutcome> DescribeTKEEdgeExternalKubeconfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeTKEEdgeExternalKubeconfigRequest&, DescribeTKEEdgeExternalKubeconfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTKEEdgeExternalKubeconfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTKEEdgeScriptResponse> DescribeTKEEdgeScriptOutcome;
                typedef std::future<DescribeTKEEdgeScriptOutcome> DescribeTKEEdgeScriptOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeTKEEdgeScriptRequest&, DescribeTKEEdgeScriptOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTKEEdgeScriptAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVersionsResponse> DescribeVersionsOutcome;
                typedef std::future<DescribeVersionsOutcome> DescribeVersionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeVersionsRequest&, DescribeVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcCniPodLimitsResponse> DescribeVpcCniPodLimitsOutcome;
                typedef std::future<DescribeVpcCniPodLimitsOutcome> DescribeVpcCniPodLimitsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DescribeVpcCniPodLimitsRequest&, DescribeVpcCniPodLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcCniPodLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableClusterDeletionProtectionResponse> DisableClusterDeletionProtectionOutcome;
                typedef std::future<DisableClusterDeletionProtectionOutcome> DisableClusterDeletionProtectionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DisableClusterDeletionProtectionRequest&, DisableClusterDeletionProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableClusterDeletionProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableControlPlaneLogsResponse> DisableControlPlaneLogsOutcome;
                typedef std::future<DisableControlPlaneLogsOutcome> DisableControlPlaneLogsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DisableControlPlaneLogsRequest&, DisableControlPlaneLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableControlPlaneLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableEncryptionProtectionResponse> DisableEncryptionProtectionOutcome;
                typedef std::future<DisableEncryptionProtectionOutcome> DisableEncryptionProtectionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DisableEncryptionProtectionRequest&, DisableEncryptionProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableEncryptionProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DrainClusterVirtualNodeResponse> DrainClusterVirtualNodeOutcome;
                typedef std::future<DrainClusterVirtualNodeOutcome> DrainClusterVirtualNodeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::DrainClusterVirtualNodeRequest&, DrainClusterVirtualNodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DrainClusterVirtualNodeAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableClusterDeletionProtectionResponse> EnableClusterDeletionProtectionOutcome;
                typedef std::future<EnableClusterDeletionProtectionOutcome> EnableClusterDeletionProtectionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableClusterDeletionProtectionRequest&, EnableClusterDeletionProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableClusterDeletionProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableControlPlaneLogsResponse> EnableControlPlaneLogsOutcome;
                typedef std::future<EnableControlPlaneLogsOutcome> EnableControlPlaneLogsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableControlPlaneLogsRequest&, EnableControlPlaneLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableControlPlaneLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableEncryptionProtectionResponse> EnableEncryptionProtectionOutcome;
                typedef std::future<EnableEncryptionProtectionOutcome> EnableEncryptionProtectionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableEncryptionProtectionRequest&, EnableEncryptionProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableEncryptionProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableVpcCniNetworkTypeResponse> EnableVpcCniNetworkTypeOutcome;
                typedef std::future<EnableVpcCniNetworkTypeOutcome> EnableVpcCniNetworkTypeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::EnableVpcCniNetworkTypeRequest&, EnableVpcCniNetworkTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableVpcCniNetworkTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ForwardTKEEdgeApplicationRequestV3Response> ForwardTKEEdgeApplicationRequestV3Outcome;
                typedef std::future<ForwardTKEEdgeApplicationRequestV3Outcome> ForwardTKEEdgeApplicationRequestV3OutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ForwardTKEEdgeApplicationRequestV3Request&, ForwardTKEEdgeApplicationRequestV3Outcome, const std::shared_ptr<const AsyncCallerContext>&)> ForwardTKEEdgeApplicationRequestV3AsyncHandler;
                typedef Outcome<Core::Error, Model::GetClusterLevelPriceResponse> GetClusterLevelPriceOutcome;
                typedef std::future<GetClusterLevelPriceOutcome> GetClusterLevelPriceOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::GetClusterLevelPriceRequest&, GetClusterLevelPriceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterLevelPriceAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTkeAppChartListResponse> GetTkeAppChartListOutcome;
                typedef std::future<GetTkeAppChartListOutcome> GetTkeAppChartListOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::GetTkeAppChartListRequest&, GetTkeAppChartListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTkeAppChartListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUpgradeInstanceProgressResponse> GetUpgradeInstanceProgressOutcome;
                typedef std::future<GetUpgradeInstanceProgressOutcome> GetUpgradeInstanceProgressOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::GetUpgradeInstanceProgressRequest&, GetUpgradeInstanceProgressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUpgradeInstanceProgressAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallAddonResponse> InstallAddonOutcome;
                typedef std::future<InstallAddonOutcome> InstallAddonOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::InstallAddonRequest&, InstallAddonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallAddonAsyncHandler;
                typedef Outcome<Core::Error, Model::InstallEdgeLogAgentResponse> InstallEdgeLogAgentOutcome;
                typedef std::future<InstallEdgeLogAgentOutcome> InstallEdgeLogAgentOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::InstallEdgeLogAgentRequest&, InstallEdgeLogAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InstallEdgeLogAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterAsGroupAttributeResponse> ModifyClusterAsGroupAttributeOutcome;
                typedef std::future<ModifyClusterAsGroupAttributeOutcome> ModifyClusterAsGroupAttributeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterAsGroupAttributeRequest&, ModifyClusterAsGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAsGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterAsGroupOptionAttributeResponse> ModifyClusterAsGroupOptionAttributeOutcome;
                typedef std::future<ModifyClusterAsGroupOptionAttributeOutcome> ModifyClusterAsGroupOptionAttributeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterAsGroupOptionAttributeRequest&, ModifyClusterAsGroupOptionAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAsGroupOptionAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterAttributeResponse> ModifyClusterAttributeOutcome;
                typedef std::future<ModifyClusterAttributeOutcome> ModifyClusterAttributeOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterAttributeRequest&, ModifyClusterAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterAuthenticationOptionsResponse> ModifyClusterAuthenticationOptionsOutcome;
                typedef std::future<ModifyClusterAuthenticationOptionsOutcome> ModifyClusterAuthenticationOptionsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterAuthenticationOptionsRequest&, ModifyClusterAuthenticationOptionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAuthenticationOptionsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterEndpointSPResponse> ModifyClusterEndpointSPOutcome;
                typedef std::future<ModifyClusterEndpointSPOutcome> ModifyClusterEndpointSPOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterEndpointSPRequest&, ModifyClusterEndpointSPOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterEndpointSPAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterImageResponse> ModifyClusterImageOutcome;
                typedef std::future<ModifyClusterImageOutcome> ModifyClusterImageOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterImageRequest&, ModifyClusterImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterImageAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterNodePoolResponse> ModifyClusterNodePoolOutcome;
                typedef std::future<ModifyClusterNodePoolOutcome> ModifyClusterNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterNodePoolRequest&, ModifyClusterNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterRuntimeConfigResponse> ModifyClusterRuntimeConfigOutcome;
                typedef std::future<ModifyClusterRuntimeConfigOutcome> ModifyClusterRuntimeConfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterRuntimeConfigRequest&, ModifyClusterRuntimeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterRuntimeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterTagsResponse> ModifyClusterTagsOutcome;
                typedef std::future<ModifyClusterTagsOutcome> ModifyClusterTagsOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterTagsRequest&, ModifyClusterTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterVirtualNodePoolResponse> ModifyClusterVirtualNodePoolOutcome;
                typedef std::future<ModifyClusterVirtualNodePoolOutcome> ModifyClusterVirtualNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyClusterVirtualNodePoolRequest&, ModifyClusterVirtualNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterVirtualNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNodePoolInstanceTypesResponse> ModifyNodePoolInstanceTypesOutcome;
                typedef std::future<ModifyNodePoolInstanceTypesOutcome> ModifyNodePoolInstanceTypesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyNodePoolInstanceTypesRequest&, ModifyNodePoolInstanceTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodePoolInstanceTypesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrometheusAlertRuleResponse> ModifyPrometheusAlertRuleOutcome;
                typedef std::future<ModifyPrometheusAlertRuleOutcome> ModifyPrometheusAlertRuleOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::ModifyPrometheusAlertRuleRequest&, ModifyPrometheusAlertRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrometheusAlertRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveNodeFromNodePoolResponse> RemoveNodeFromNodePoolOutcome;
                typedef std::future<RemoveNodeFromNodePoolOutcome> RemoveNodeFromNodePoolOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::RemoveNodeFromNodePoolRequest&, RemoveNodeFromNodePoolOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveNodeFromNodePoolAsyncHandler;
                typedef Outcome<Core::Error, Model::SetNodePoolNodeProtectionResponse> SetNodePoolNodeProtectionOutcome;
                typedef std::future<SetNodePoolNodeProtectionOutcome> SetNodePoolNodeProtectionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::SetNodePoolNodeProtectionRequest&, SetNodePoolNodeProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetNodePoolNodeProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::UninstallEdgeLogAgentResponse> UninstallEdgeLogAgentOutcome;
                typedef std::future<UninstallEdgeLogAgentOutcome> UninstallEdgeLogAgentOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UninstallEdgeLogAgentRequest&, UninstallEdgeLogAgentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UninstallEdgeLogAgentAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAddonResponse> UpdateAddonOutcome;
                typedef std::future<UpdateAddonOutcome> UpdateAddonOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateAddonRequest&, UpdateAddonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAddonAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateClusterKubeconfigResponse> UpdateClusterKubeconfigOutcome;
                typedef std::future<UpdateClusterKubeconfigOutcome> UpdateClusterKubeconfigOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateClusterKubeconfigRequest&, UpdateClusterKubeconfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterKubeconfigAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateClusterVersionResponse> UpdateClusterVersionOutcome;
                typedef std::future<UpdateClusterVersionOutcome> UpdateClusterVersionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateClusterVersionRequest&, UpdateClusterVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateEdgeClusterVersionResponse> UpdateEdgeClusterVersionOutcome;
                typedef std::future<UpdateEdgeClusterVersionOutcome> UpdateEdgeClusterVersionOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpdateEdgeClusterVersionRequest&, UpdateEdgeClusterVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEdgeClusterVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeClusterInstancesResponse> UpgradeClusterInstancesOutcome;
                typedef std::future<UpgradeClusterInstancesOutcome> UpgradeClusterInstancesOutcomeCallable;
                typedef std::function<void(const TkeClient*, const Model::UpgradeClusterInstancesRequest&, UpgradeClusterInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeClusterInstancesAsyncHandler;



                /**
                 *This API can be called to acquire the ClusterRole tke:admin. By setting a CAM policy, you can grant permission of this API to a sub-account that has higher permission in CAM. In this way, this sub-account can call this API directly to acquire the admin role of a Kubernetes cluster.
                 * @param req AcquireClusterAdminRoleRequest
                 * @return AcquireClusterAdminRoleOutcome
                 */
                AcquireClusterAdminRoleOutcome AcquireClusterAdminRole(const Model::AcquireClusterAdminRoleRequest &request);
                void AcquireClusterAdminRoleAsync(const Model::AcquireClusterAdminRoleRequest& request, const AcquireClusterAdminRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcquireClusterAdminRoleOutcomeCallable AcquireClusterAdminRoleCallable(const Model::AcquireClusterAdminRoleRequest& request);

                /**
                 *This API is used to add one or more existing instances to a cluster.
                 * @param req AddExistedInstancesRequest
                 * @return AddExistedInstancesOutcome
                 */
                AddExistedInstancesOutcome AddExistedInstances(const Model::AddExistedInstancesRequest &request);
                void AddExistedInstancesAsync(const Model::AddExistedInstancesRequest& request, const AddExistedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddExistedInstancesOutcomeCallable AddExistedInstancesCallable(const Model::AddExistedInstancesRequest& request);

                /**
                 *This API is used to move nodes in a cluster to a node pool.
                 * @param req AddNodeToNodePoolRequest
                 * @return AddNodeToNodePoolOutcome
                 */
                AddNodeToNodePoolOutcome AddNodeToNodePool(const Model::AddNodeToNodePoolRequest &request);
                void AddNodeToNodePoolAsync(const Model::AddNodeToNodePoolRequest& request, const AddNodeToNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddNodeToNodePoolOutcomeCallable AddNodeToNodePoolCallable(const Model::AddNodeToNodePoolRequest& request);

                /**
                 *This API is used to add subnets in the container network for a VPC-CNI cluster.
                 * @param req AddVpcCniSubnetsRequest
                 * @return AddVpcCniSubnetsOutcome
                 */
                AddVpcCniSubnetsOutcome AddVpcCniSubnets(const Model::AddVpcCniSubnetsRequest &request);
                void AddVpcCniSubnetsAsync(const Model::AddVpcCniSubnetsRequest& request, const AddVpcCniSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddVpcCniSubnetsOutcomeCallable AddVpcCniSubnetsCallable(const Model::AddVpcCniSubnetsRequest& request);

                /**
                 *This API is used to check if the CIDR block of a TKE Edge cluster conflicts with other CIDR blocks.
                 * @param req CheckEdgeClusterCIDRRequest
                 * @return CheckEdgeClusterCIDROutcome
                 */
                CheckEdgeClusterCIDROutcome CheckEdgeClusterCIDR(const Model::CheckEdgeClusterCIDRRequest &request);
                void CheckEdgeClusterCIDRAsync(const Model::CheckEdgeClusterCIDRRequest& request, const CheckEdgeClusterCIDRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckEdgeClusterCIDROutcomeCallable CheckEdgeClusterCIDRCallable(const Model::CheckEdgeClusterCIDRRequest& request);

                /**
                 *This API is used to query nodes eligible for an upgrade in the given node list.
                 * @param req CheckInstancesUpgradeAbleRequest
                 * @return CheckInstancesUpgradeAbleOutcome
                 */
                CheckInstancesUpgradeAbleOutcome CheckInstancesUpgradeAble(const Model::CheckInstancesUpgradeAbleRequest &request);
                void CheckInstancesUpgradeAbleAsync(const Model::CheckInstancesUpgradeAbleRequest& request, const CheckInstancesUpgradeAbleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckInstancesUpgradeAbleOutcomeCallable CheckInstancesUpgradeAbleCallable(const Model::CheckInstancesUpgradeAbleRequest& request);

                /**
                 *This API is used to create a backup repository. You can specify the storage type (such as COS), the bucket region and the name. Up to 100 repositories can be created. Note that the settings of this API apply globally. You only need to create one backup repository, and back up TKE clusters in different regions in it.
                 * @param req CreateBackupStorageLocationRequest
                 * @return CreateBackupStorageLocationOutcome
                 */
                CreateBackupStorageLocationOutcome CreateBackupStorageLocation(const Model::CreateBackupStorageLocationRequest &request);
                void CreateBackupStorageLocationAsync(const Model::CreateBackupStorageLocationRequest& request, const CreateBackupStorageLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupStorageLocationOutcomeCallable CreateBackupStorageLocationCallable(const Model::CreateBackupStorageLocationRequest& request);

                /**
                 *This API is used to create log collection configuration.
                 * @param req CreateCLSLogConfigRequest
                 * @return CreateCLSLogConfigOutcome
                 */
                CreateCLSLogConfigOutcome CreateCLSLogConfig(const Model::CreateCLSLogConfigRequest &request);
                void CreateCLSLogConfigAsync(const Model::CreateCLSLogConfigRequest& request, const CreateCLSLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCLSLogConfigOutcomeCallable CreateCLSLogConfigCallable(const Model::CreateCLSLogConfigRequest& request);

                /**
                 *This API is used to create a cluster.
                 * @param req CreateClusterRequest
                 * @return CreateClusterOutcome
                 */
                CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest &request);
                void CreateClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterOutcomeCallable CreateClusterCallable(const Model::CreateClusterRequest& request);

                /**
                 *This API is used to create a cluster access endpoint.
                 * @param req CreateClusterEndpointRequest
                 * @return CreateClusterEndpointOutcome
                 */
                CreateClusterEndpointOutcome CreateClusterEndpoint(const Model::CreateClusterEndpointRequest &request);
                void CreateClusterEndpointAsync(const Model::CreateClusterEndpointRequest& request, const CreateClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterEndpointOutcomeCallable CreateClusterEndpointCallable(const Model::CreateClusterEndpointRequest& request);

                /**
                 *This API is used to create a public network access port for a managed cluster. Note: This API will be disused soon. Please call `CreateClusterEndpoint` instead.
                 * @param req CreateClusterEndpointVipRequest
                 * @return CreateClusterEndpointVipOutcome
                 */
                CreateClusterEndpointVipOutcome CreateClusterEndpointVip(const Model::CreateClusterEndpointVipRequest &request);
                void CreateClusterEndpointVipAsync(const Model::CreateClusterEndpointVipRequest& request, const CreateClusterEndpointVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterEndpointVipOutcomeCallable CreateClusterEndpointVipCallable(const Model::CreateClusterEndpointVipRequest& request);

                /**
                 *This API is used to create one or more nodes in a cluster.
                 * @param req CreateClusterInstancesRequest
                 * @return CreateClusterInstancesOutcome
                 */
                CreateClusterInstancesOutcome CreateClusterInstances(const Model::CreateClusterInstancesRequest &request);
                void CreateClusterInstancesAsync(const Model::CreateClusterInstancesRequest& request, const CreateClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterInstancesOutcomeCallable CreateClusterInstancesCallable(const Model::CreateClusterInstancesRequest& request);

                /**
                 *This API is used to create a node pool.
                 * @param req CreateClusterNodePoolRequest
                 * @return CreateClusterNodePoolOutcome
                 */
                CreateClusterNodePoolOutcome CreateClusterNodePool(const Model::CreateClusterNodePoolRequest &request);
                void CreateClusterNodePoolAsync(const Model::CreateClusterNodePoolRequest& request, const CreateClusterNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterNodePoolOutcomeCallable CreateClusterNodePoolCallable(const Model::CreateClusterNodePoolRequest& request);

                /**
                 *This API is used to create a cluster route table.
                 * @param req CreateClusterRouteTableRequest
                 * @return CreateClusterRouteTableOutcome
                 */
                CreateClusterRouteTableOutcome CreateClusterRouteTable(const Model::CreateClusterRouteTableRequest &request);
                void CreateClusterRouteTableAsync(const Model::CreateClusterRouteTableRequest& request, const CreateClusterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterRouteTableOutcomeCallable CreateClusterRouteTableCallable(const Model::CreateClusterRouteTableRequest& request);

                /**
                 *This API is used to create the Pay-as-you-go Super Node.
                 * @param req CreateClusterVirtualNodeRequest
                 * @return CreateClusterVirtualNodeOutcome
                 */
                CreateClusterVirtualNodeOutcome CreateClusterVirtualNode(const Model::CreateClusterVirtualNodeRequest &request);
                void CreateClusterVirtualNodeAsync(const Model::CreateClusterVirtualNodeRequest& request, const CreateClusterVirtualNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterVirtualNodeOutcomeCallable CreateClusterVirtualNodeCallable(const Model::CreateClusterVirtualNodeRequest& request);

                /**
                 *This API is used to create the Super Node Pool.
                 * @param req CreateClusterVirtualNodePoolRequest
                 * @return CreateClusterVirtualNodePoolOutcome
                 */
                CreateClusterVirtualNodePoolOutcome CreateClusterVirtualNodePool(const Model::CreateClusterVirtualNodePoolRequest &request);
                void CreateClusterVirtualNodePoolAsync(const Model::CreateClusterVirtualNodePoolRequest& request, const CreateClusterVirtualNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterVirtualNodePoolOutcomeCallable CreateClusterVirtualNodePoolCallable(const Model::CreateClusterVirtualNodePoolRequest& request);

                /**
                 *This API is used to create an ECM instance.
                 * @param req CreateECMInstancesRequest
                 * @return CreateECMInstancesOutcome
                 */
                CreateECMInstancesOutcome CreateECMInstances(const Model::CreateECMInstancesRequest &request);
                void CreateECMInstancesAsync(const Model::CreateECMInstancesRequest& request, const CreateECMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateECMInstancesOutcomeCallable CreateECMInstancesCallable(const Model::CreateECMInstancesRequest& request);

                /**
                 *This API is used to create CVM instances in the specified TKE edge cluster.
                 * @param req CreateEdgeCVMInstancesRequest
                 * @return CreateEdgeCVMInstancesOutcome
                 */
                CreateEdgeCVMInstancesOutcome CreateEdgeCVMInstances(const Model::CreateEdgeCVMInstancesRequest &request);
                void CreateEdgeCVMInstancesAsync(const Model::CreateEdgeCVMInstancesRequest& request, const CreateEdgeCVMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdgeCVMInstancesOutcomeCallable CreateEdgeCVMInstancesCallable(const Model::CreateEdgeCVMInstancesRequest& request);

                /**
                 *This API is used to create log collection configuration for a TKE Edge cluster.
                 * @param req CreateEdgeLogConfigRequest
                 * @return CreateEdgeLogConfigOutcome
                 */
                CreateEdgeLogConfigOutcome CreateEdgeLogConfig(const Model::CreateEdgeLogConfigRequest &request);
                void CreateEdgeLogConfigAsync(const Model::CreateEdgeLogConfigRequest& request, const CreateEdgeLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEdgeLogConfigOutcomeCallable CreateEdgeLogConfigCallable(const Model::CreateEdgeLogConfigRequest& request);

                /**
                 *This API is used to create Log Collection Configuration for Elastic Cluster.
                 * @param req CreateEksLogConfigRequest
                 * @return CreateEksLogConfigOutcome
                 */
                CreateEksLogConfigOutcome CreateEksLogConfig(const Model::CreateEksLogConfigRequest &request);
                void CreateEksLogConfigAsync(const Model::CreateEksLogConfigRequest& request, const CreateEksLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateEksLogConfigOutcomeCallable CreateEksLogConfigCallable(const Model::CreateEksLogConfigRequest& request);

                /**
                 *This API is used to create an alarm rule.
                 * @param req CreatePrometheusAlertRuleRequest
                 * @return CreatePrometheusAlertRuleOutcome
                 */
                CreatePrometheusAlertRuleOutcome CreatePrometheusAlertRule(const Model::CreatePrometheusAlertRuleRequest &request);
                void CreatePrometheusAlertRuleAsync(const Model::CreatePrometheusAlertRuleRequest& request, const CreatePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrometheusAlertRuleOutcomeCallable CreatePrometheusAlertRuleCallable(const Model::CreatePrometheusAlertRuleRequest& request);

                /**
                 *This API is used to create a TKE Edge cluster.
                 * @param req CreateTKEEdgeClusterRequest
                 * @return CreateTKEEdgeClusterOutcome
                 */
                CreateTKEEdgeClusterOutcome CreateTKEEdgeCluster(const Model::CreateTKEEdgeClusterRequest &request);
                void CreateTKEEdgeClusterAsync(const Model::CreateTKEEdgeClusterRequest& request, const CreateTKEEdgeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTKEEdgeClusterOutcomeCallable CreateTKEEdgeClusterCallable(const Model::CreateTKEEdgeClusterRequest& request);

                /**
                 *This API is used to delete an add-on.
                 * @param req DeleteAddonRequest
                 * @return DeleteAddonOutcome
                 */
                DeleteAddonOutcome DeleteAddon(const Model::DeleteAddonRequest &request);
                void DeleteAddonAsync(const Model::DeleteAddonRequest& request, const DeleteAddonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAddonOutcomeCallable DeleteAddonCallable(const Model::DeleteAddonRequest& request);

                /**
                 *This API is used to delete a backup repository.
                 * @param req DeleteBackupStorageLocationRequest
                 * @return DeleteBackupStorageLocationOutcome
                 */
                DeleteBackupStorageLocationOutcome DeleteBackupStorageLocation(const Model::DeleteBackupStorageLocationRequest &request);
                void DeleteBackupStorageLocationAsync(const Model::DeleteBackupStorageLocationRequest& request, const DeleteBackupStorageLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackupStorageLocationOutcomeCallable DeleteBackupStorageLocationCallable(const Model::DeleteBackupStorageLocationRequest& request);

                /**
                 *This API is used to delete a cluster. (Cloud API v3).
                 * @param req DeleteClusterRequest
                 * @return DeleteClusterOutcome
                 */
                DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest &request);
                void DeleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterOutcomeCallable DeleteClusterCallable(const Model::DeleteClusterRequest& request);

                /**
                 *Delete a cluster scaling group
                 * @param req DeleteClusterAsGroupsRequest
                 * @return DeleteClusterAsGroupsOutcome
                 */
                DeleteClusterAsGroupsOutcome DeleteClusterAsGroups(const Model::DeleteClusterAsGroupsRequest &request);
                void DeleteClusterAsGroupsAsync(const Model::DeleteClusterAsGroupsRequest& request, const DeleteClusterAsGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterAsGroupsOutcomeCallable DeleteClusterAsGroupsCallable(const Model::DeleteClusterAsGroupsRequest& request);

                /**
                 *This API is used to delete a cluster access endpoint.
                 * @param req DeleteClusterEndpointRequest
                 * @return DeleteClusterEndpointOutcome
                 */
                DeleteClusterEndpointOutcome DeleteClusterEndpoint(const Model::DeleteClusterEndpointRequest &request);
                void DeleteClusterEndpointAsync(const Model::DeleteClusterEndpointRequest& request, const DeleteClusterEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterEndpointOutcomeCallable DeleteClusterEndpointCallable(const Model::DeleteClusterEndpointRequest& request);

                /**
                 *Delete the external network access port of the managed cluster (the old way, only the external network port of the managed cluster is supported)
                 * @param req DeleteClusterEndpointVipRequest
                 * @return DeleteClusterEndpointVipOutcome
                 */
                DeleteClusterEndpointVipOutcome DeleteClusterEndpointVip(const Model::DeleteClusterEndpointVipRequest &request);
                void DeleteClusterEndpointVipAsync(const Model::DeleteClusterEndpointVipRequest& request, const DeleteClusterEndpointVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterEndpointVipOutcomeCallable DeleteClusterEndpointVipCallable(const Model::DeleteClusterEndpointVipRequest& request);

                /**
                 *This API is used to delete one or more nodes from a cluster.
                 * @param req DeleteClusterInstancesRequest
                 * @return DeleteClusterInstancesOutcome
                 */
                DeleteClusterInstancesOutcome DeleteClusterInstances(const Model::DeleteClusterInstancesRequest &request);
                void DeleteClusterInstancesAsync(const Model::DeleteClusterInstancesRequest& request, const DeleteClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterInstancesOutcomeCallable DeleteClusterInstancesCallable(const Model::DeleteClusterInstancesRequest& request);

                /**
                 *This API is used to delete a node pool.
                 * @param req DeleteClusterNodePoolRequest
                 * @return DeleteClusterNodePoolOutcome
                 */
                DeleteClusterNodePoolOutcome DeleteClusterNodePool(const Model::DeleteClusterNodePoolRequest &request);
                void DeleteClusterNodePoolAsync(const Model::DeleteClusterNodePoolRequest& request, const DeleteClusterNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterNodePoolOutcomeCallable DeleteClusterNodePoolCallable(const Model::DeleteClusterNodePoolRequest& request);

                /**
                 *This API is used to delete a cluster route.
                 * @param req DeleteClusterRouteRequest
                 * @return DeleteClusterRouteOutcome
                 */
                DeleteClusterRouteOutcome DeleteClusterRoute(const Model::DeleteClusterRouteRequest &request);
                void DeleteClusterRouteAsync(const Model::DeleteClusterRouteRequest& request, const DeleteClusterRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterRouteOutcomeCallable DeleteClusterRouteCallable(const Model::DeleteClusterRouteRequest& request);

                /**
                 *This API is used to delete cluster a route table.
                 * @param req DeleteClusterRouteTableRequest
                 * @return DeleteClusterRouteTableOutcome
                 */
                DeleteClusterRouteTableOutcome DeleteClusterRouteTable(const Model::DeleteClusterRouteTableRequest &request);
                void DeleteClusterRouteTableAsync(const Model::DeleteClusterRouteTableRequest& request, const DeleteClusterRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterRouteTableOutcomeCallable DeleteClusterRouteTableCallable(const Model::DeleteClusterRouteTableRequest& request);

                /**
                 *This API is used to delete the super node.
                 * @param req DeleteClusterVirtualNodeRequest
                 * @return DeleteClusterVirtualNodeOutcome
                 */
                DeleteClusterVirtualNodeOutcome DeleteClusterVirtualNode(const Model::DeleteClusterVirtualNodeRequest &request);
                void DeleteClusterVirtualNodeAsync(const Model::DeleteClusterVirtualNodeRequest& request, const DeleteClusterVirtualNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterVirtualNodeOutcomeCallable DeleteClusterVirtualNodeCallable(const Model::DeleteClusterVirtualNodeRequest& request);

                /**
                 *This API is used to delete the Super Node Pool.
                 * @param req DeleteClusterVirtualNodePoolRequest
                 * @return DeleteClusterVirtualNodePoolOutcome
                 */
                DeleteClusterVirtualNodePoolOutcome DeleteClusterVirtualNodePool(const Model::DeleteClusterVirtualNodePoolRequest &request);
                void DeleteClusterVirtualNodePoolAsync(const Model::DeleteClusterVirtualNodePoolRequest& request, const DeleteClusterVirtualNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterVirtualNodePoolOutcomeCallable DeleteClusterVirtualNodePoolCallable(const Model::DeleteClusterVirtualNodePoolRequest& request);

                /**
                 *This API is used to delete one or more ECM instances.
                 * @param req DeleteECMInstancesRequest
                 * @return DeleteECMInstancesOutcome
                 */
                DeleteECMInstancesOutcome DeleteECMInstances(const Model::DeleteECMInstancesRequest &request);
                void DeleteECMInstancesAsync(const Model::DeleteECMInstancesRequest& request, const DeleteECMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteECMInstancesOutcomeCallable DeleteECMInstancesCallable(const Model::DeleteECMInstancesRequest& request);

                /**
                 *This API is used to delete one or more edge CVM instances.
                 * @param req DeleteEdgeCVMInstancesRequest
                 * @return DeleteEdgeCVMInstancesOutcome
                 */
                DeleteEdgeCVMInstancesOutcome DeleteEdgeCVMInstances(const Model::DeleteEdgeCVMInstancesRequest &request);
                void DeleteEdgeCVMInstancesAsync(const Model::DeleteEdgeCVMInstancesRequest& request, const DeleteEdgeCVMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEdgeCVMInstancesOutcomeCallable DeleteEdgeCVMInstancesCallable(const Model::DeleteEdgeCVMInstancesRequest& request);

                /**
                 *This API is used to delete one or more edge compute instances.
                 * @param req DeleteEdgeClusterInstancesRequest
                 * @return DeleteEdgeClusterInstancesOutcome
                 */
                DeleteEdgeClusterInstancesOutcome DeleteEdgeClusterInstances(const Model::DeleteEdgeClusterInstancesRequest &request);
                void DeleteEdgeClusterInstancesAsync(const Model::DeleteEdgeClusterInstancesRequest& request, const DeleteEdgeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteEdgeClusterInstancesOutcomeCallable DeleteEdgeClusterInstancesCallable(const Model::DeleteEdgeClusterInstancesRequest& request);

                /**
                 *This API is used to delete collection rules within the cluster.
                 * @param req DeleteLogConfigsRequest
                 * @return DeleteLogConfigsOutcome
                 */
                DeleteLogConfigsOutcome DeleteLogConfigs(const Model::DeleteLogConfigsRequest &request);
                void DeleteLogConfigsAsync(const Model::DeleteLogConfigsRequest& request, const DeleteLogConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLogConfigsOutcomeCallable DeleteLogConfigsCallable(const Model::DeleteLogConfigsRequest& request);

                /**
                 *This API is used to delete an alarm rule.
                 * @param req DeletePrometheusAlertRuleRequest
                 * @return DeletePrometheusAlertRuleOutcome
                 */
                DeletePrometheusAlertRuleOutcome DeletePrometheusAlertRule(const Model::DeletePrometheusAlertRuleRequest &request);
                void DeletePrometheusAlertRuleAsync(const Model::DeletePrometheusAlertRuleRequest& request, const DeletePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrometheusAlertRuleOutcomeCallable DeletePrometheusAlertRuleCallable(const Model::DeletePrometheusAlertRuleRequest& request);

                /**
                 *This API is used to delete a TKE Edge cluster.
                 * @param req DeleteTKEEdgeClusterRequest
                 * @return DeleteTKEEdgeClusterOutcome
                 */
                DeleteTKEEdgeClusterOutcome DeleteTKEEdgeCluster(const Model::DeleteTKEEdgeClusterRequest &request);
                void DeleteTKEEdgeClusterAsync(const Model::DeleteTKEEdgeClusterRequest& request, const DeleteTKEEdgeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTKEEdgeClusterOutcomeCallable DeleteTKEEdgeClusterCallable(const Model::DeleteTKEEdgeClusterRequest& request);

                /**
                 *This API is used to query the list of add-ons.
                 * @param req DescribeAddonRequest
                 * @return DescribeAddonOutcome
                 */
                DescribeAddonOutcome DescribeAddon(const Model::DescribeAddonRequest &request);
                void DescribeAddonAsync(const Model::DescribeAddonRequest& request, const DescribeAddonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddonOutcomeCallable DescribeAddonCallable(const Model::DescribeAddonRequest& request);

                /**
                 *This API is used to query parameters of an add-on.
                 * @param req DescribeAddonValuesRequest
                 * @return DescribeAddonValuesOutcome
                 */
                DescribeAddonValuesOutcome DescribeAddonValues(const Model::DescribeAddonValuesRequest &request);
                void DescribeAddonValuesAsync(const Model::DescribeAddonValuesRequest& request, const DescribeAddonValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddonValuesOutcomeCallable DescribeAddonValuesCallable(const Model::DescribeAddonValuesRequest& request);

                /**
                 *This API is used to obtain all versions that the cluster can upgrade to.
                 * @param req DescribeAvailableClusterVersionRequest
                 * @return DescribeAvailableClusterVersionOutcome
                 */
                DescribeAvailableClusterVersionOutcome DescribeAvailableClusterVersion(const Model::DescribeAvailableClusterVersionRequest &request);
                void DescribeAvailableClusterVersionAsync(const Model::DescribeAvailableClusterVersionRequest& request, const DescribeAvailableClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableClusterVersionOutcomeCallable DescribeAvailableClusterVersionCallable(const Model::DescribeAvailableClusterVersionRequest& request);

                /**
                 *This API is used to check the edge component versions and K8s versions supported by TKE Edge.
                 * @param req DescribeAvailableTKEEdgeVersionRequest
                 * @return DescribeAvailableTKEEdgeVersionOutcome
                 */
                DescribeAvailableTKEEdgeVersionOutcome DescribeAvailableTKEEdgeVersion(const Model::DescribeAvailableTKEEdgeVersionRequest &request);
                void DescribeAvailableTKEEdgeVersionAsync(const Model::DescribeAvailableTKEEdgeVersionRequest& request, const DescribeAvailableTKEEdgeVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableTKEEdgeVersionOutcomeCallable DescribeAvailableTKEEdgeVersionCallable(const Model::DescribeAvailableTKEEdgeVersionRequest& request);

                /**
                 *This API is used to query backup repositories.
                 * @param req DescribeBackupStorageLocationsRequest
                 * @return DescribeBackupStorageLocationsOutcome
                 */
                DescribeBackupStorageLocationsOutcome DescribeBackupStorageLocations(const Model::DescribeBackupStorageLocationsRequest &request);
                void DescribeBackupStorageLocationsAsync(const Model::DescribeBackupStorageLocationsRequest& request, const DescribeBackupStorageLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupStorageLocationsOutcomeCallable DescribeBackupStorageLocationsCallable(const Model::DescribeBackupStorageLocationsRequest& request);

                /**
                 *This API is used to query batch modification Tag status.
                 * @param req DescribeBatchModifyTagsStatusRequest
                 * @return DescribeBatchModifyTagsStatusOutcome
                 */
                DescribeBatchModifyTagsStatusOutcome DescribeBatchModifyTagsStatus(const Model::DescribeBatchModifyTagsStatusRequest &request);
                void DescribeBatchModifyTagsStatusAsync(const Model::DescribeBatchModifyTagsStatusRequest& request, const DescribeBatchModifyTagsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchModifyTagsStatusOutcomeCallable DescribeBatchModifyTagsStatusCallable(const Model::DescribeBatchModifyTagsStatusRequest& request);

                /**
                 *Cluster auto scaling configuration
                 * @param req DescribeClusterAsGroupOptionRequest
                 * @return DescribeClusterAsGroupOptionOutcome
                 */
                DescribeClusterAsGroupOptionOutcome DescribeClusterAsGroupOption(const Model::DescribeClusterAsGroupOptionRequest &request);
                void DescribeClusterAsGroupOptionAsync(const Model::DescribeClusterAsGroupOptionRequest& request, const DescribeClusterAsGroupOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAsGroupOptionOutcomeCallable DescribeClusterAsGroupOptionCallable(const Model::DescribeClusterAsGroupOptionRequest& request);

                /**
                 *Cluster-associated scaling group list
                 * @param req DescribeClusterAsGroupsRequest
                 * @return DescribeClusterAsGroupsOutcome
                 */
                DescribeClusterAsGroupsOutcome DescribeClusterAsGroups(const Model::DescribeClusterAsGroupsRequest &request);
                void DescribeClusterAsGroupsAsync(const Model::DescribeClusterAsGroupsRequest& request, const DescribeClusterAsGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAsGroupsOutcomeCallable DescribeClusterAsGroupsCallable(const Model::DescribeClusterAsGroupsRequest& request);

                /**
                 *This API is used to query cluster authentication configuration.
                 * @param req DescribeClusterAuthenticationOptionsRequest
                 * @return DescribeClusterAuthenticationOptionsOutcome
                 */
                DescribeClusterAuthenticationOptionsOutcome DescribeClusterAuthenticationOptions(const Model::DescribeClusterAuthenticationOptionsRequest &request);
                void DescribeClusterAuthenticationOptionsAsync(const Model::DescribeClusterAuthenticationOptionsRequest& request, const DescribeClusterAuthenticationOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterAuthenticationOptionsOutcomeCallable DescribeClusterAuthenticationOptionsCallable(const Model::DescribeClusterAuthenticationOptionsRequest& request);

                /**
                 *This API is used to obtain the CommonName from the kube-apiserver client certificate that corresponding to the sub-account in RBAC authorization mode. 
                 * @param req DescribeClusterCommonNamesRequest
                 * @return DescribeClusterCommonNamesOutcome
                 */
                DescribeClusterCommonNamesOutcome DescribeClusterCommonNames(const Model::DescribeClusterCommonNamesRequest &request);
                void DescribeClusterCommonNamesAsync(const Model::DescribeClusterCommonNamesRequest& request, const DescribeClusterCommonNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterCommonNamesOutcomeCallable DescribeClusterCommonNamesCallable(const Model::DescribeClusterCommonNamesRequest& request);

                /**
                 *Query cluster access port status (intranet / extranet access is enabled for independent clusters, and intranet access is supported for managed clusters)
                 * @param req DescribeClusterEndpointStatusRequest
                 * @return DescribeClusterEndpointStatusOutcome
                 */
                DescribeClusterEndpointStatusOutcome DescribeClusterEndpointStatus(const Model::DescribeClusterEndpointStatusRequest &request);
                void DescribeClusterEndpointStatusAsync(const Model::DescribeClusterEndpointStatusRequest& request, const DescribeClusterEndpointStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterEndpointStatusOutcomeCallable DescribeClusterEndpointStatusCallable(const Model::DescribeClusterEndpointStatusRequest& request);

                /**
                 *Query cluster open port process status (only supports external ports of the managed cluster)
                 * @param req DescribeClusterEndpointVipStatusRequest
                 * @return DescribeClusterEndpointVipStatusOutcome
                 */
                DescribeClusterEndpointVipStatusOutcome DescribeClusterEndpointVipStatus(const Model::DescribeClusterEndpointVipStatusRequest &request);
                void DescribeClusterEndpointVipStatusAsync(const Model::DescribeClusterEndpointVipStatusRequest& request, const DescribeClusterEndpointVipStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterEndpointVipStatusOutcomeCallable DescribeClusterEndpointVipStatusCallable(const Model::DescribeClusterEndpointVipStatusRequest& request);

                /**
                 *This API is used to query cluster access addresses, including private network address, public network address, public network domain name, and security policy for public network access.
                 * @param req DescribeClusterEndpointsRequest
                 * @return DescribeClusterEndpointsOutcome
                 */
                DescribeClusterEndpointsOutcome DescribeClusterEndpoints(const Model::DescribeClusterEndpointsRequest &request);
                void DescribeClusterEndpointsAsync(const Model::DescribeClusterEndpointsRequest& request, const DescribeClusterEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterEndpointsOutcomeCallable DescribeClusterEndpointsCallable(const Model::DescribeClusterEndpointsRequest& request);

                /**
                 *This API is used to query custom parameters of a cluster.
                 * @param req DescribeClusterExtraArgsRequest
                 * @return DescribeClusterExtraArgsOutcome
                 */
                DescribeClusterExtraArgsOutcome DescribeClusterExtraArgs(const Model::DescribeClusterExtraArgsRequest &request);
                void DescribeClusterExtraArgsAsync(const Model::DescribeClusterExtraArgsRequest& request, const DescribeClusterExtraArgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterExtraArgsOutcomeCallable DescribeClusterExtraArgsCallable(const Model::DescribeClusterExtraArgsRequest& request);

                /**
                 *This API is used to query information of node instances in a cluster.
                 * @param req DescribeClusterInstancesRequest
                 * @return DescribeClusterInstancesOutcome
                 */
                DescribeClusterInstancesOutcome DescribeClusterInstances(const Model::DescribeClusterInstancesRequest &request);
                void DescribeClusterInstancesAsync(const Model::DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInstancesOutcomeCallable DescribeClusterInstancesCallable(const Model::DescribeClusterInstancesRequest& request);

                /**
                 *This API is used to obtain the cluster kubeconfig file. Different sub-accounts have their own kubeconfig files. The kubeconfig file contains the kube-apiserver client certificate of the corresponding sub-account. By default, the client certificate is created when this API is called for the first time, and the certificate is valid for 20 years with no permissions granted. For the cluster owner or primary account, the cluster-admin permission is granted by default.
                 * @param req DescribeClusterKubeconfigRequest
                 * @return DescribeClusterKubeconfigOutcome
                 */
                DescribeClusterKubeconfigOutcome DescribeClusterKubeconfig(const Model::DescribeClusterKubeconfigRequest &request);
                void DescribeClusterKubeconfigAsync(const Model::DescribeClusterKubeconfigRequest& request, const DescribeClusterKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterKubeconfigOutcomeCallable DescribeClusterKubeconfigCallable(const Model::DescribeClusterKubeconfigRequest& request);

                /**
                 *This API is used to obtain the cluster model.
                 * @param req DescribeClusterLevelAttributeRequest
                 * @return DescribeClusterLevelAttributeOutcome
                 */
                DescribeClusterLevelAttributeOutcome DescribeClusterLevelAttribute(const Model::DescribeClusterLevelAttributeRequest &request);
                void DescribeClusterLevelAttributeAsync(const Model::DescribeClusterLevelAttributeRequest& request, const DescribeClusterLevelAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterLevelAttributeOutcomeCallable DescribeClusterLevelAttributeCallable(const Model::DescribeClusterLevelAttributeRequest& request);

                /**
                 *This API is used to query the cluster model adjustment history.
                 * @param req DescribeClusterLevelChangeRecordsRequest
                 * @return DescribeClusterLevelChangeRecordsOutcome
                 */
                DescribeClusterLevelChangeRecordsOutcome DescribeClusterLevelChangeRecords(const Model::DescribeClusterLevelChangeRecordsRequest &request);
                void DescribeClusterLevelChangeRecordsAsync(const Model::DescribeClusterLevelChangeRecordsRequest& request, const DescribeClusterLevelChangeRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterLevelChangeRecordsOutcomeCallable DescribeClusterLevelChangeRecordsCallable(const Model::DescribeClusterLevelChangeRecordsRequest& request);

                /**
                 *This API is used to query detailed information of a node pool.
                 * @param req DescribeClusterNodePoolDetailRequest
                 * @return DescribeClusterNodePoolDetailOutcome
                 */
                DescribeClusterNodePoolDetailOutcome DescribeClusterNodePoolDetail(const Model::DescribeClusterNodePoolDetailRequest &request);
                void DescribeClusterNodePoolDetailAsync(const Model::DescribeClusterNodePoolDetailRequest& request, const DescribeClusterNodePoolDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterNodePoolDetailOutcomeCallable DescribeClusterNodePoolDetailCallable(const Model::DescribeClusterNodePoolDetailRequest& request);

                /**
                 *This API is used to query the node pool list
                 * @param req DescribeClusterNodePoolsRequest
                 * @return DescribeClusterNodePoolsOutcome
                 */
                DescribeClusterNodePoolsOutcome DescribeClusterNodePools(const Model::DescribeClusterNodePoolsRequest &request);
                void DescribeClusterNodePoolsAsync(const Model::DescribeClusterNodePoolsRequest& request, const DescribeClusterNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterNodePoolsOutcomeCallable DescribeClusterNodePoolsCallable(const Model::DescribeClusterNodePoolsRequest& request);

                /**
                 *This API is used to query one or more cluster route tables.
                 * @param req DescribeClusterRouteTablesRequest
                 * @return DescribeClusterRouteTablesOutcome
                 */
                DescribeClusterRouteTablesOutcome DescribeClusterRouteTables(const Model::DescribeClusterRouteTablesRequest &request);
                void DescribeClusterRouteTablesAsync(const Model::DescribeClusterRouteTablesRequest& request, const DescribeClusterRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterRouteTablesOutcomeCallable DescribeClusterRouteTablesCallable(const Model::DescribeClusterRouteTablesRequest& request);

                /**
                 *This API is used to query cluster routes.
                 * @param req DescribeClusterRoutesRequest
                 * @return DescribeClusterRoutesOutcome
                 */
                DescribeClusterRoutesOutcome DescribeClusterRoutes(const Model::DescribeClusterRoutesRequest &request);
                void DescribeClusterRoutesAsync(const Model::DescribeClusterRoutesRequest& request, const DescribeClusterRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterRoutesOutcomeCallable DescribeClusterRoutesCallable(const Model::DescribeClusterRoutesRequest& request);

                /**
                 *This API is used to query the key information of a cluster.
                 * @param req DescribeClusterSecurityRequest
                 * @return DescribeClusterSecurityOutcome
                 */
                DescribeClusterSecurityOutcome DescribeClusterSecurity(const Model::DescribeClusterSecurityRequest &request);
                void DescribeClusterSecurityAsync(const Model::DescribeClusterSecurityRequest& request, const DescribeClusterSecurityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterSecurityOutcomeCallable DescribeClusterSecurityCallable(const Model::DescribeClusterSecurityRequest& request);

                /**
                 *This API is used to query the information of clusters under the current account.
                 * @param req DescribeClusterStatusRequest
                 * @return DescribeClusterStatusOutcome
                 */
                DescribeClusterStatusOutcome DescribeClusterStatus(const Model::DescribeClusterStatusRequest &request);
                void DescribeClusterStatusAsync(const Model::DescribeClusterStatusRequest& request, const DescribeClusterStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterStatusOutcomeCallable DescribeClusterStatusCallable(const Model::DescribeClusterStatusRequest& request);

                /**
                 *This API is used to view the Super Node list.
                 * @param req DescribeClusterVirtualNodeRequest
                 * @return DescribeClusterVirtualNodeOutcome
                 */
                DescribeClusterVirtualNodeOutcome DescribeClusterVirtualNode(const Model::DescribeClusterVirtualNodeRequest &request);
                void DescribeClusterVirtualNodeAsync(const Model::DescribeClusterVirtualNodeRequest& request, const DescribeClusterVirtualNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterVirtualNodeOutcomeCallable DescribeClusterVirtualNodeCallable(const Model::DescribeClusterVirtualNodeRequest& request);

                /**
                 *This API is used to view the Super Node Pool list.
                 * @param req DescribeClusterVirtualNodePoolsRequest
                 * @return DescribeClusterVirtualNodePoolsOutcome
                 */
                DescribeClusterVirtualNodePoolsOutcome DescribeClusterVirtualNodePools(const Model::DescribeClusterVirtualNodePoolsRequest &request);
                void DescribeClusterVirtualNodePoolsAsync(const Model::DescribeClusterVirtualNodePoolsRequest& request, const DescribeClusterVirtualNodePoolsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterVirtualNodePoolsOutcomeCallable DescribeClusterVirtualNodePoolsCallable(const Model::DescribeClusterVirtualNodePoolsRequest& request);

                /**
                 *This API is used to query clusters list.
                 * @param req DescribeClustersRequest
                 * @return DescribeClustersOutcome
                 */
                DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest &request);
                void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request);

                /**
                 *This API is used to query plug-in log collection settings.
                 * @param req DescribeControlPlaneLogsRequest
                 * @return DescribeControlPlaneLogsOutcome
                 */
                DescribeControlPlaneLogsOutcome DescribeControlPlaneLogs(const Model::DescribeControlPlaneLogsRequest &request);
                void DescribeControlPlaneLogsAsync(const Model::DescribeControlPlaneLogsRequest& request, const DescribeControlPlaneLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeControlPlaneLogsOutcomeCallable DescribeControlPlaneLogsCallable(const Model::DescribeControlPlaneLogsRequest& request);

                /**
                 *This API is used to obtain the ECM instance information.
                 * @param req DescribeECMInstancesRequest
                 * @return DescribeECMInstancesOutcome
                 */
                DescribeECMInstancesOutcome DescribeECMInstances(const Model::DescribeECMInstancesRequest &request);
                void DescribeECMInstancesAsync(const Model::DescribeECMInstancesRequest& request, const DescribeECMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeECMInstancesOutcomeCallable DescribeECMInstancesCallable(const Model::DescribeECMInstancesRequest& request);

                /**
                 *This API is used to query the custom parameters available for an edge cluster.
                 * @param req DescribeEdgeAvailableExtraArgsRequest
                 * @return DescribeEdgeAvailableExtraArgsOutcome
                 */
                DescribeEdgeAvailableExtraArgsOutcome DescribeEdgeAvailableExtraArgs(const Model::DescribeEdgeAvailableExtraArgsRequest &request);
                void DescribeEdgeAvailableExtraArgsAsync(const Model::DescribeEdgeAvailableExtraArgsRequest& request, const DescribeEdgeAvailableExtraArgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeAvailableExtraArgsOutcomeCallable DescribeEdgeAvailableExtraArgsCallable(const Model::DescribeEdgeAvailableExtraArgsRequest& request);

                /**
                 *This API is used to obtain the edge CVM instance information.
                 * @param req DescribeEdgeCVMInstancesRequest
                 * @return DescribeEdgeCVMInstancesOutcome
                 */
                DescribeEdgeCVMInstancesOutcome DescribeEdgeCVMInstances(const Model::DescribeEdgeCVMInstancesRequest &request);
                void DescribeEdgeCVMInstancesAsync(const Model::DescribeEdgeCVMInstancesRequest& request, const DescribeEdgeCVMInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeCVMInstancesOutcomeCallable DescribeEdgeCVMInstancesCallable(const Model::DescribeEdgeCVMInstancesRequest& request);

                /**
                 *This API is used to query custom parameters of an edge cluster.
                 * @param req DescribeEdgeClusterExtraArgsRequest
                 * @return DescribeEdgeClusterExtraArgsOutcome
                 */
                DescribeEdgeClusterExtraArgsOutcome DescribeEdgeClusterExtraArgs(const Model::DescribeEdgeClusterExtraArgsRequest &request);
                void DescribeEdgeClusterExtraArgsAsync(const Model::DescribeEdgeClusterExtraArgsRequest& request, const DescribeEdgeClusterExtraArgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeClusterExtraArgsOutcomeCallable DescribeEdgeClusterExtraArgsCallable(const Model::DescribeEdgeClusterExtraArgsRequest& request);

                /**
                 *This API is used to query the TKE Edge cluster node information.
                 * @param req DescribeEdgeClusterInstancesRequest
                 * @return DescribeEdgeClusterInstancesOutcome
                 */
                DescribeEdgeClusterInstancesOutcome DescribeEdgeClusterInstances(const Model::DescribeEdgeClusterInstancesRequest &request);
                void DescribeEdgeClusterInstancesAsync(const Model::DescribeEdgeClusterInstancesRequest& request, const DescribeEdgeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeClusterInstancesOutcomeCallable DescribeEdgeClusterInstancesCallable(const Model::DescribeEdgeClusterInstancesRequest& request);

                /**
                 *This API is used to query the upgrade information of an edge cluster, including the upgradeable components, the current upgrade status, and errors occur during the upgrade.
                 * @param req DescribeEdgeClusterUpgradeInfoRequest
                 * @return DescribeEdgeClusterUpgradeInfoOutcome
                 */
                DescribeEdgeClusterUpgradeInfoOutcome DescribeEdgeClusterUpgradeInfo(const Model::DescribeEdgeClusterUpgradeInfoRequest &request);
                void DescribeEdgeClusterUpgradeInfoAsync(const Model::DescribeEdgeClusterUpgradeInfoRequest& request, const DescribeEdgeClusterUpgradeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeClusterUpgradeInfoOutcomeCallable DescribeEdgeClusterUpgradeInfoCallable(const Model::DescribeEdgeClusterUpgradeInfoRequest& request);

                /**
                 *This API is used to query the status of event storage, cluster auditing and logging.
                 * @param req DescribeEdgeLogSwitchesRequest
                 * @return DescribeEdgeLogSwitchesOutcome
                 */
                DescribeEdgeLogSwitchesOutcome DescribeEdgeLogSwitches(const Model::DescribeEdgeLogSwitchesRequest &request);
                void DescribeEdgeLogSwitchesAsync(const Model::DescribeEdgeLogSwitchesRequest& request, const DescribeEdgeLogSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEdgeLogSwitchesOutcomeCallable DescribeEdgeLogSwitchesCallable(const Model::DescribeEdgeLogSwitchesRequest& request);

                /**
                 *This API is used to query the task progress of enabling VPC-CNI mode.
                 * @param req DescribeEnableVpcCniProgressRequest
                 * @return DescribeEnableVpcCniProgressOutcome
                 */
                DescribeEnableVpcCniProgressOutcome DescribeEnableVpcCniProgress(const Model::DescribeEnableVpcCniProgressRequest &request);
                void DescribeEnableVpcCniProgressAsync(const Model::DescribeEnableVpcCniProgressRequest& request, const DescribeEnableVpcCniProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnableVpcCniProgressOutcomeCallable DescribeEnableVpcCniProgressCallable(const Model::DescribeEnableVpcCniProgressRequest& request);

                /**
                 *This API is used to query the encryption status of etcd data.
                 * @param req DescribeEncryptionStatusRequest
                 * @return DescribeEncryptionStatusOutcome
                 */
                DescribeEncryptionStatusOutcome DescribeEncryptionStatus(const Model::DescribeEncryptionStatusRequest &request);
                void DescribeEncryptionStatusAsync(const Model::DescribeEncryptionStatusRequest& request, const DescribeEncryptionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEncryptionStatusOutcomeCallable DescribeEncryptionStatusCallable(const Model::DescribeEncryptionStatusRequest& request);

                /**
                 *This API is used to query one or more existing node and determine whether they can be added to a cluster.
                 * @param req DescribeExistedInstancesRequest
                 * @return DescribeExistedInstancesOutcome
                 */
                DescribeExistedInstancesOutcome DescribeExistedInstances(const Model::DescribeExistedInstancesRequest &request);
                void DescribeExistedInstancesAsync(const Model::DescribeExistedInstancesRequest& request, const DescribeExistedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExistedInstancesOutcomeCallable DescribeExistedInstancesCallable(const Model::DescribeExistedInstancesRequest& request);

                /**
                 *This API is used to view third-party node pool configuration information.
                 * @param req DescribeExternalNodeSupportConfigRequest
                 * @return DescribeExternalNodeSupportConfigOutcome
                 */
                DescribeExternalNodeSupportConfigOutcome DescribeExternalNodeSupportConfig(const Model::DescribeExternalNodeSupportConfigRequest &request);
                void DescribeExternalNodeSupportConfigAsync(const Model::DescribeExternalNodeSupportConfigRequest& request, const DescribeExternalNodeSupportConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeExternalNodeSupportConfigOutcomeCallable DescribeExternalNodeSupportConfigCallable(const Model::DescribeExternalNodeSupportConfigRequest& request);

                /**
                 *This API is used to obtain eniipamd component information.
                 * @param req DescribeIPAMDRequest
                 * @return DescribeIPAMDOutcome
                 */
                DescribeIPAMDOutcome DescribeIPAMD(const Model::DescribeIPAMDRequest &request);
                void DescribeIPAMDAsync(const Model::DescribeIPAMDRequest& request, const DescribeIPAMDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPAMDOutcomeCallable DescribeIPAMDCallable(const Model::DescribeIPAMDRequest& request);

                /**
                 *This API is used to get image information.
                 * @param req DescribeImagesRequest
                 * @return DescribeImagesOutcome
                 */
                DescribeImagesOutcome DescribeImages(const Model::DescribeImagesRequest &request);
                void DescribeImagesAsync(const Model::DescribeImagesRequest& request, const DescribeImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeImagesOutcomeCallable DescribeImagesCallable(const Model::DescribeImagesRequest& request);

                /**
                 *This API is used to query the log collection rules.
                 * @param req DescribeLogConfigsRequest
                 * @return DescribeLogConfigsOutcome
                 */
                DescribeLogConfigsOutcome DescribeLogConfigs(const Model::DescribeLogConfigsRequest &request);
                void DescribeLogConfigsAsync(const Model::DescribeLogConfigsRequest& request, const DescribeLogConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogConfigsOutcomeCallable DescribeLogConfigsCallable(const Model::DescribeLogConfigsRequest& request);

                /**
                 *This API is used to query Cluster Log (Auditing, Event, Common Log) Switch List.
                 * @param req DescribeLogSwitchesRequest
                 * @return DescribeLogSwitchesOutcome
                 */
                DescribeLogSwitchesOutcome DescribeLogSwitches(const Model::DescribeLogSwitchesRequest &request);
                void DescribeLogSwitchesAsync(const Model::DescribeLogSwitchesRequest& request, const DescribeLogSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogSwitchesOutcomeCallable DescribeLogSwitchesCallable(const Model::DescribeLogSwitchesRequest& request);

                /**
                 *This API is used to query the billing information of running Pods. You can query a specific Pod by Namespace and Name or batch query by Pod Uid.
                 * @param req DescribePodChargeInfoRequest
                 * @return DescribePodChargeInfoOutcome
                 */
                DescribePodChargeInfoOutcome DescribePodChargeInfo(const Model::DescribePodChargeInfoRequest &request);
                void DescribePodChargeInfoAsync(const Model::DescribePodChargeInfoRequest& request, const DescribePodChargeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePodChargeInfoOutcomeCallable DescribePodChargeInfoCallable(const Model::DescribePodChargeInfoRequest& request);

                /**
                 *This API is used to obtain the instance details.
                 * @param req DescribePrometheusInstanceRequest
                 * @return DescribePrometheusInstanceOutcome
                 */
                DescribePrometheusInstanceOutcome DescribePrometheusInstance(const Model::DescribePrometheusInstanceRequest &request);
                void DescribePrometheusInstanceAsync(const Model::DescribePrometheusInstanceRequest& request, const DescribePrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrometheusInstanceOutcomeCallable DescribePrometheusInstanceCallable(const Model::DescribePrometheusInstanceRequest& request);

                /**
                 *This API is used to obtain all regions supported by TKE.
                 * @param req DescribeRegionsRequest
                 * @return DescribeRegionsOutcome
                 */
                DescribeRegionsOutcome DescribeRegions(const Model::DescribeRegionsRequest &request);
                void DescribeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRegionsOutcomeCallable DescribeRegionsCallable(const Model::DescribeRegionsRequest& request);

                /**
                 *This API is used to query the usage rate of various types of Reserved Coupons.
                 * @param req DescribeReservedInstanceUtilizationRateRequest
                 * @return DescribeReservedInstanceUtilizationRateOutcome
                 */
                DescribeReservedInstanceUtilizationRateOutcome DescribeReservedInstanceUtilizationRate(const Model::DescribeReservedInstanceUtilizationRateRequest &request);
                void DescribeReservedInstanceUtilizationRateAsync(const Model::DescribeReservedInstanceUtilizationRateRequest& request, const DescribeReservedInstanceUtilizationRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeReservedInstanceUtilizationRateOutcomeCallable DescribeReservedInstanceUtilizationRateCallable(const Model::DescribeReservedInstanceUtilizationRateRequest& request);

                /**
                 *This API is used to query the cluster resource usage.
                 * @param req DescribeResourceUsageRequest
                 * @return DescribeResourceUsageOutcome
                 */
                DescribeResourceUsageOutcome DescribeResourceUsage(const Model::DescribeResourceUsageRequest &request);
                void DescribeResourceUsageAsync(const Model::DescribeResourceUsageRequest& request, const DescribeResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceUsageOutcomeCallable DescribeResourceUsageCallable(const Model::DescribeResourceUsageRequest& request);

                /**
                 *This API is used to query the list of route table conflicts.
                 * @param req DescribeRouteTableConflictsRequest
                 * @return DescribeRouteTableConflictsOutcome
                 */
                DescribeRouteTableConflictsOutcome DescribeRouteTableConflicts(const Model::DescribeRouteTableConflictsRequest &request);
                void DescribeRouteTableConflictsAsync(const Model::DescribeRouteTableConflictsRequest& request, const DescribeRouteTableConflictsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteTableConflictsOutcomeCallable DescribeRouteTableConflictsCallable(const Model::DescribeRouteTableConflictsRequest& request);

                /**
                 *This API is used to retrieve optional runtime versions based on K8S version.
                 * @param req DescribeSupportedRuntimeRequest
                 * @return DescribeSupportedRuntimeOutcome
                 */
                DescribeSupportedRuntimeOutcome DescribeSupportedRuntime(const Model::DescribeSupportedRuntimeRequest &request);
                void DescribeSupportedRuntimeAsync(const Model::DescribeSupportedRuntimeRequest& request, const DescribeSupportedRuntimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSupportedRuntimeOutcomeCallable DescribeSupportedRuntimeCallable(const Model::DescribeSupportedRuntimeRequest& request);

                /**
                 *This API is used to obtain the authentication information of a TKE Edge cluster.
                 * @param req DescribeTKEEdgeClusterCredentialRequest
                 * @return DescribeTKEEdgeClusterCredentialOutcome
                 */
                DescribeTKEEdgeClusterCredentialOutcome DescribeTKEEdgeClusterCredential(const Model::DescribeTKEEdgeClusterCredentialRequest &request);
                void DescribeTKEEdgeClusterCredentialAsync(const Model::DescribeTKEEdgeClusterCredentialRequest& request, const DescribeTKEEdgeClusterCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTKEEdgeClusterCredentialOutcomeCallable DescribeTKEEdgeClusterCredentialCallable(const Model::DescribeTKEEdgeClusterCredentialRequest& request);

                /**
                 *This API is used to query the current status and process information of a TKE Edge cluster.
                 * @param req DescribeTKEEdgeClusterStatusRequest
                 * @return DescribeTKEEdgeClusterStatusOutcome
                 */
                DescribeTKEEdgeClusterStatusOutcome DescribeTKEEdgeClusterStatus(const Model::DescribeTKEEdgeClusterStatusRequest &request);
                void DescribeTKEEdgeClusterStatusAsync(const Model::DescribeTKEEdgeClusterStatusRequest& request, const DescribeTKEEdgeClusterStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTKEEdgeClusterStatusOutcomeCallable DescribeTKEEdgeClusterStatusCallable(const Model::DescribeTKEEdgeClusterStatusRequest& request);

                /**
                 *This API is used to query the list of TKE Edge clusters.
                 * @param req DescribeTKEEdgeClustersRequest
                 * @return DescribeTKEEdgeClustersOutcome
                 */
                DescribeTKEEdgeClustersOutcome DescribeTKEEdgeClusters(const Model::DescribeTKEEdgeClustersRequest &request);
                void DescribeTKEEdgeClustersAsync(const Model::DescribeTKEEdgeClustersRequest& request, const DescribeTKEEdgeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTKEEdgeClustersOutcomeCallable DescribeTKEEdgeClustersCallable(const Model::DescribeTKEEdgeClustersRequest& request);

                /**
                 *This API is used to obtain the kubeconfig for access to a TKE Edge cluster through the public network.
                 * @param req DescribeTKEEdgeExternalKubeconfigRequest
                 * @return DescribeTKEEdgeExternalKubeconfigOutcome
                 */
                DescribeTKEEdgeExternalKubeconfigOutcome DescribeTKEEdgeExternalKubeconfig(const Model::DescribeTKEEdgeExternalKubeconfigRequest &request);
                void DescribeTKEEdgeExternalKubeconfigAsync(const Model::DescribeTKEEdgeExternalKubeconfigRequest& request, const DescribeTKEEdgeExternalKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTKEEdgeExternalKubeconfigOutcomeCallable DescribeTKEEdgeExternalKubeconfigCallable(const Model::DescribeTKEEdgeExternalKubeconfigRequest& request);

                /**
                 *This API is used to query the URL of TKE edge script. You can add external nodes to a TKE Edge cluster by downloading the URL.
                 * @param req DescribeTKEEdgeScriptRequest
                 * @return DescribeTKEEdgeScriptOutcome
                 */
                DescribeTKEEdgeScriptOutcome DescribeTKEEdgeScript(const Model::DescribeTKEEdgeScriptRequest &request);
                void DescribeTKEEdgeScriptAsync(const Model::DescribeTKEEdgeScriptRequest& request, const DescribeTKEEdgeScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTKEEdgeScriptOutcomeCallable DescribeTKEEdgeScriptCallable(const Model::DescribeTKEEdgeScriptRequest& request);

                /**
                 *This API is used to query cluster version information.
                 * @param req DescribeVersionsRequest
                 * @return DescribeVersionsOutcome
                 */
                DescribeVersionsOutcome DescribeVersions(const Model::DescribeVersionsRequest &request);
                void DescribeVersionsAsync(const Model::DescribeVersionsRequest& request, const DescribeVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVersionsOutcomeCallable DescribeVersionsCallable(const Model::DescribeVersionsRequest& request);

                /**
                 *This API is used to query the maximum number of Pods in the VPC-CNI network mode supported by the models in the specified availability zone of the current user and region.
                 * @param req DescribeVpcCniPodLimitsRequest
                 * @return DescribeVpcCniPodLimitsOutcome
                 */
                DescribeVpcCniPodLimitsOutcome DescribeVpcCniPodLimits(const Model::DescribeVpcCniPodLimitsRequest &request);
                void DescribeVpcCniPodLimitsAsync(const Model::DescribeVpcCniPodLimitsRequest& request, const DescribeVpcCniPodLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcCniPodLimitsOutcomeCallable DescribeVpcCniPodLimitsCallable(const Model::DescribeVpcCniPodLimitsRequest& request);

                /**
                 *This API is used to disable cluster deletion protection.
                 * @param req DisableClusterDeletionProtectionRequest
                 * @return DisableClusterDeletionProtectionOutcome
                 */
                DisableClusterDeletionProtectionOutcome DisableClusterDeletionProtection(const Model::DisableClusterDeletionProtectionRequest &request);
                void DisableClusterDeletionProtectionAsync(const Model::DisableClusterDeletionProtectionRequest& request, const DisableClusterDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableClusterDeletionProtectionOutcomeCallable DisableClusterDeletionProtectionCallable(const Model::DisableClusterDeletionProtectionRequest& request);

                /**
                 *This API is used to delete the log collection configuration of a plugin.
                 * @param req DisableControlPlaneLogsRequest
                 * @return DisableControlPlaneLogsOutcome
                 */
                DisableControlPlaneLogsOutcome DisableControlPlaneLogs(const Model::DisableControlPlaneLogsRequest &request);
                void DisableControlPlaneLogsAsync(const Model::DisableControlPlaneLogsRequest& request, const DisableControlPlaneLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableControlPlaneLogsOutcomeCallable DisableControlPlaneLogsCallable(const Model::DisableControlPlaneLogsRequest& request);

                /**
                 *This API is used to disable encryption protection.
                 * @param req DisableEncryptionProtectionRequest
                 * @return DisableEncryptionProtectionOutcome
                 */
                DisableEncryptionProtectionOutcome DisableEncryptionProtection(const Model::DisableEncryptionProtectionRequest &request);
                void DisableEncryptionProtectionAsync(const Model::DisableEncryptionProtectionRequest& request, const DisableEncryptionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableEncryptionProtectionOutcomeCallable DisableEncryptionProtectionCallable(const Model::DisableEncryptionProtectionRequest& request);

                /**
                 *This API is used to evict the Super Node.
                 * @param req DrainClusterVirtualNodeRequest
                 * @return DrainClusterVirtualNodeOutcome
                 */
                DrainClusterVirtualNodeOutcome DrainClusterVirtualNode(const Model::DrainClusterVirtualNodeRequest &request);
                void DrainClusterVirtualNodeAsync(const Model::DrainClusterVirtualNodeRequest& request, const DrainClusterVirtualNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DrainClusterVirtualNodeOutcomeCallable DrainClusterVirtualNodeCallable(const Model::DrainClusterVirtualNodeRequest& request);

                /**
                 *This API is used to enable cluster deletion protection.
                 * @param req EnableClusterDeletionProtectionRequest
                 * @return EnableClusterDeletionProtectionOutcome
                 */
                EnableClusterDeletionProtectionOutcome EnableClusterDeletionProtection(const Model::EnableClusterDeletionProtectionRequest &request);
                void EnableClusterDeletionProtectionAsync(const Model::EnableClusterDeletionProtectionRequest& request, const EnableClusterDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableClusterDeletionProtectionOutcomeCallable EnableClusterDeletionProtectionCallable(const Model::EnableClusterDeletionProtectionRequest& request);

                /**
                 *This API is used to create log collection settings for plugins.
                 * @param req EnableControlPlaneLogsRequest
                 * @return EnableControlPlaneLogsOutcome
                 */
                EnableControlPlaneLogsOutcome EnableControlPlaneLogs(const Model::EnableControlPlaneLogsRequest &request);
                void EnableControlPlaneLogsAsync(const Model::EnableControlPlaneLogsRequest& request, const EnableControlPlaneLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableControlPlaneLogsOutcomeCallable EnableControlPlaneLogsCallable(const Model::EnableControlPlaneLogsRequest& request);

                /**
                 *This API is used to enable Encrypted Data Protection, which requires enabling KMS capability and completing KMS authorization.
                 * @param req EnableEncryptionProtectionRequest
                 * @return EnableEncryptionProtectionOutcome
                 */
                EnableEncryptionProtectionOutcome EnableEncryptionProtection(const Model::EnableEncryptionProtectionRequest &request);
                void EnableEncryptionProtectionAsync(const Model::EnableEncryptionProtectionRequest& request, const EnableEncryptionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableEncryptionProtectionOutcomeCallable EnableEncryptionProtectionCallable(const Model::EnableEncryptionProtectionRequest& request);

                /**
                 *This API is used to enable the VPC-CNI network mode for GR clusters.
                 * @param req EnableVpcCniNetworkTypeRequest
                 * @return EnableVpcCniNetworkTypeOutcome
                 */
                EnableVpcCniNetworkTypeOutcome EnableVpcCniNetworkType(const Model::EnableVpcCniNetworkTypeRequest &request);
                void EnableVpcCniNetworkTypeAsync(const Model::EnableVpcCniNetworkTypeRequest& request, const EnableVpcCniNetworkTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableVpcCniNetworkTypeOutcomeCallable EnableVpcCniNetworkTypeCallable(const Model::EnableVpcCniNetworkTypeRequest& request);

                /**
                 *This API is used to work with the add-ons of a TKE Edge cluster.
                 * @param req ForwardTKEEdgeApplicationRequestV3Request
                 * @return ForwardTKEEdgeApplicationRequestV3Outcome
                 */
                ForwardTKEEdgeApplicationRequestV3Outcome ForwardTKEEdgeApplicationRequestV3(const Model::ForwardTKEEdgeApplicationRequestV3Request &request);
                void ForwardTKEEdgeApplicationRequestV3Async(const Model::ForwardTKEEdgeApplicationRequestV3Request& request, const ForwardTKEEdgeApplicationRequestV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ForwardTKEEdgeApplicationRequestV3OutcomeCallable ForwardTKEEdgeApplicationRequestV3Callable(const Model::ForwardTKEEdgeApplicationRequestV3Request& request);

                /**
                 *Obtaining the price of specified cluster model
                 * @param req GetClusterLevelPriceRequest
                 * @return GetClusterLevelPriceOutcome
                 */
                GetClusterLevelPriceOutcome GetClusterLevelPrice(const Model::GetClusterLevelPriceRequest &request);
                void GetClusterLevelPriceAsync(const Model::GetClusterLevelPriceRequest& request, const GetClusterLevelPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetClusterLevelPriceOutcomeCallable GetClusterLevelPriceCallable(const Model::GetClusterLevelPriceRequest& request);

                /**
                 *This API is used to retrieve the App List supported by TKE.
                 * @param req GetTkeAppChartListRequest
                 * @return GetTkeAppChartListOutcome
                 */
                GetTkeAppChartListOutcome GetTkeAppChartList(const Model::GetTkeAppChartListRequest &request);
                void GetTkeAppChartListAsync(const Model::GetTkeAppChartListRequest& request, const GetTkeAppChartListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTkeAppChartListOutcomeCallable GetTkeAppChartListCallable(const Model::GetTkeAppChartListRequest& request);

                /**
                 *This API is used to obtain the current progress of node upgrade. If the cluster is not in node upgrade status, the API will report an error: Task not found.
                 * @param req GetUpgradeInstanceProgressRequest
                 * @return GetUpgradeInstanceProgressOutcome
                 */
                GetUpgradeInstanceProgressOutcome GetUpgradeInstanceProgress(const Model::GetUpgradeInstanceProgressRequest &request);
                void GetUpgradeInstanceProgressAsync(const Model::GetUpgradeInstanceProgressRequest& request, const GetUpgradeInstanceProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUpgradeInstanceProgressOutcomeCallable GetUpgradeInstanceProgressCallable(const Model::GetUpgradeInstanceProgressRequest& request);

                /**
                 *This API is used to install an add-on on the target cluster.
                 * @param req InstallAddonRequest
                 * @return InstallAddonOutcome
                 */
                InstallAddonOutcome InstallAddon(const Model::InstallAddonRequest &request);
                void InstallAddonAsync(const Model::InstallAddonRequest& request, const InstallAddonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallAddonOutcomeCallable InstallAddonCallable(const Model::InstallAddonRequest& request);

                /**
                 *This API is used to install the log collection add-on on TKE Edge cluster nodes.
                 * @param req InstallEdgeLogAgentRequest
                 * @return InstallEdgeLogAgentOutcome
                 */
                InstallEdgeLogAgentOutcome InstallEdgeLogAgent(const Model::InstallEdgeLogAgentRequest &request);
                void InstallEdgeLogAgentAsync(const Model::InstallEdgeLogAgentRequest& request, const InstallEdgeLogAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InstallEdgeLogAgentOutcomeCallable InstallEdgeLogAgentCallable(const Model::InstallEdgeLogAgentRequest& request);

                /**
                 *Modify cluster scaling group attributes
                 * @param req ModifyClusterAsGroupAttributeRequest
                 * @return ModifyClusterAsGroupAttributeOutcome
                 */
                ModifyClusterAsGroupAttributeOutcome ModifyClusterAsGroupAttribute(const Model::ModifyClusterAsGroupAttributeRequest &request);
                void ModifyClusterAsGroupAttributeAsync(const Model::ModifyClusterAsGroupAttributeRequest& request, const ModifyClusterAsGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterAsGroupAttributeOutcomeCallable ModifyClusterAsGroupAttributeCallable(const Model::ModifyClusterAsGroupAttributeRequest& request);

                /**
                 *This API is used to modify cluster auto scaling attributes.
                 * @param req ModifyClusterAsGroupOptionAttributeRequest
                 * @return ModifyClusterAsGroupOptionAttributeOutcome
                 */
                ModifyClusterAsGroupOptionAttributeOutcome ModifyClusterAsGroupOptionAttribute(const Model::ModifyClusterAsGroupOptionAttributeRequest &request);
                void ModifyClusterAsGroupOptionAttributeAsync(const Model::ModifyClusterAsGroupOptionAttributeRequest& request, const ModifyClusterAsGroupOptionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterAsGroupOptionAttributeOutcomeCallable ModifyClusterAsGroupOptionAttributeCallable(const Model::ModifyClusterAsGroupOptionAttributeRequest& request);

                /**
                 *This API is used to modify cluster attributes.
                 * @param req ModifyClusterAttributeRequest
                 * @return ModifyClusterAttributeOutcome
                 */
                ModifyClusterAttributeOutcome ModifyClusterAttribute(const Model::ModifyClusterAttributeRequest &request);
                void ModifyClusterAttributeAsync(const Model::ModifyClusterAttributeRequest& request, const ModifyClusterAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterAttributeOutcomeCallable ModifyClusterAttributeCallable(const Model::ModifyClusterAttributeRequest& request);

                /**
                 *This API is used to modify cluster authentication configuration.
                 * @param req ModifyClusterAuthenticationOptionsRequest
                 * @return ModifyClusterAuthenticationOptionsOutcome
                 */
                ModifyClusterAuthenticationOptionsOutcome ModifyClusterAuthenticationOptions(const Model::ModifyClusterAuthenticationOptionsRequest &request);
                void ModifyClusterAuthenticationOptionsAsync(const Model::ModifyClusterAuthenticationOptionsRequest& request, const ModifyClusterAuthenticationOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterAuthenticationOptionsOutcomeCallable ModifyClusterAuthenticationOptionsCallable(const Model::ModifyClusterAuthenticationOptionsRequest& request);

                /**
                 *Modify the security policy of the external port of the managed cluster (the old way, only the external port of the managed cluster is supported)
                 * @param req ModifyClusterEndpointSPRequest
                 * @return ModifyClusterEndpointSPOutcome
                 */
                ModifyClusterEndpointSPOutcome ModifyClusterEndpointSP(const Model::ModifyClusterEndpointSPRequest &request);
                void ModifyClusterEndpointSPAsync(const Model::ModifyClusterEndpointSPRequest& request, const ModifyClusterEndpointSPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterEndpointSPOutcomeCallable ModifyClusterEndpointSPCallable(const Model::ModifyClusterEndpointSPRequest& request);

                /**
                 *This API is used to modify the cluster image.
                 * @param req ModifyClusterImageRequest
                 * @return ModifyClusterImageOutcome
                 */
                ModifyClusterImageOutcome ModifyClusterImage(const Model::ModifyClusterImageRequest &request);
                void ModifyClusterImageAsync(const Model::ModifyClusterImageRequest& request, const ModifyClusterImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterImageOutcomeCallable ModifyClusterImageCallable(const Model::ModifyClusterImageRequest& request);

                /**
                 *This API is used to edit a node pool.
                 * @param req ModifyClusterNodePoolRequest
                 * @return ModifyClusterNodePoolOutcome
                 */
                ModifyClusterNodePoolOutcome ModifyClusterNodePool(const Model::ModifyClusterNodePoolRequest &request);
                void ModifyClusterNodePoolAsync(const Model::ModifyClusterNodePoolRequest& request, const ModifyClusterNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterNodePoolOutcomeCallable ModifyClusterNodePoolCallable(const Model::ModifyClusterNodePoolRequest& request);

                /**
                 *This API is used to modify the latitude runtime configuration of clusters and node pools.
                 * @param req ModifyClusterRuntimeConfigRequest
                 * @return ModifyClusterRuntimeConfigOutcome
                 */
                ModifyClusterRuntimeConfigOutcome ModifyClusterRuntimeConfig(const Model::ModifyClusterRuntimeConfigRequest &request);
                void ModifyClusterRuntimeConfigAsync(const Model::ModifyClusterRuntimeConfigRequest& request, const ModifyClusterRuntimeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterRuntimeConfigOutcomeCallable ModifyClusterRuntimeConfigCallable(const Model::ModifyClusterRuntimeConfigRequest& request);

                /**
                 *This API is used to modify cluster tags.
                 * @param req ModifyClusterTagsRequest
                 * @return ModifyClusterTagsOutcome
                 */
                ModifyClusterTagsOutcome ModifyClusterTags(const Model::ModifyClusterTagsRequest &request);
                void ModifyClusterTagsAsync(const Model::ModifyClusterTagsRequest& request, const ModifyClusterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterTagsOutcomeCallable ModifyClusterTagsCallable(const Model::ModifyClusterTagsRequest& request);

                /**
                 *This API is used to modify the Super Node Pool.
                 * @param req ModifyClusterVirtualNodePoolRequest
                 * @return ModifyClusterVirtualNodePoolOutcome
                 */
                ModifyClusterVirtualNodePoolOutcome ModifyClusterVirtualNodePool(const Model::ModifyClusterVirtualNodePoolRequest &request);
                void ModifyClusterVirtualNodePoolAsync(const Model::ModifyClusterVirtualNodePoolRequest& request, const ModifyClusterVirtualNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterVirtualNodePoolOutcomeCallable ModifyClusterVirtualNodePoolCallable(const Model::ModifyClusterVirtualNodePoolRequest& request);

                /**
                 *This API is used to modify the model of instances in a node pool.
                 * @param req ModifyNodePoolInstanceTypesRequest
                 * @return ModifyNodePoolInstanceTypesOutcome
                 */
                ModifyNodePoolInstanceTypesOutcome ModifyNodePoolInstanceTypes(const Model::ModifyNodePoolInstanceTypesRequest &request);
                void ModifyNodePoolInstanceTypesAsync(const Model::ModifyNodePoolInstanceTypesRequest& request, const ModifyNodePoolInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNodePoolInstanceTypesOutcomeCallable ModifyNodePoolInstanceTypesCallable(const Model::ModifyNodePoolInstanceTypesRequest& request);

                /**
                 *This API is used to modify an alert rule.
                 * @param req ModifyPrometheusAlertRuleRequest
                 * @return ModifyPrometheusAlertRuleOutcome
                 */
                ModifyPrometheusAlertRuleOutcome ModifyPrometheusAlertRule(const Model::ModifyPrometheusAlertRuleRequest &request);
                void ModifyPrometheusAlertRuleAsync(const Model::ModifyPrometheusAlertRuleRequest& request, const ModifyPrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrometheusAlertRuleOutcomeCallable ModifyPrometheusAlertRuleCallable(const Model::ModifyPrometheusAlertRuleRequest& request);

                /**
                 *This API is used to remove a node from a node pool but retain it in the cluster.
                 * @param req RemoveNodeFromNodePoolRequest
                 * @return RemoveNodeFromNodePoolOutcome
                 */
                RemoveNodeFromNodePoolOutcome RemoveNodeFromNodePool(const Model::RemoveNodeFromNodePoolRequest &request);
                void RemoveNodeFromNodePoolAsync(const Model::RemoveNodeFromNodePoolRequest& request, const RemoveNodeFromNodePoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveNodeFromNodePoolOutcomeCallable RemoveNodeFromNodePoolCallable(const Model::RemoveNodeFromNodePoolRequest& request);

                /**
                 *This API is used to enable removal protection for the nodes automatically created by the scaling group in a node pool.
                 * @param req SetNodePoolNodeProtectionRequest
                 * @return SetNodePoolNodeProtectionOutcome
                 */
                SetNodePoolNodeProtectionOutcome SetNodePoolNodeProtection(const Model::SetNodePoolNodeProtectionRequest &request);
                void SetNodePoolNodeProtectionAsync(const Model::SetNodePoolNodeProtectionRequest& request, const SetNodePoolNodeProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetNodePoolNodeProtectionOutcomeCallable SetNodePoolNodeProtectionCallable(const Model::SetNodePoolNodeProtectionRequest& request);

                /**
                 *This API is used to uninstall the log collection add-on from TKE Edge cluster nodes.
                 * @param req UninstallEdgeLogAgentRequest
                 * @return UninstallEdgeLogAgentOutcome
                 */
                UninstallEdgeLogAgentOutcome UninstallEdgeLogAgent(const Model::UninstallEdgeLogAgentRequest &request);
                void UninstallEdgeLogAgentAsync(const Model::UninstallEdgeLogAgentRequest& request, const UninstallEdgeLogAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UninstallEdgeLogAgentOutcomeCallable UninstallEdgeLogAgentCallable(const Model::UninstallEdgeLogAgentRequest& request);

                /**
                 *This API is used to update parameters and version of an add-on.
                 * @param req UpdateAddonRequest
                 * @return UpdateAddonOutcome
                 */
                UpdateAddonOutcome UpdateAddon(const Model::UpdateAddonRequest &request);
                void UpdateAddonAsync(const Model::UpdateAddonRequest& request, const UpdateAddonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAddonOutcomeCallable UpdateAddonCallable(const Model::UpdateAddonRequest& request);

                /**
                 *This API is used to update the Kubeconfig information of a cluster.
                 * @param req UpdateClusterKubeconfigRequest
                 * @return UpdateClusterKubeconfigOutcome
                 */
                UpdateClusterKubeconfigOutcome UpdateClusterKubeconfig(const Model::UpdateClusterKubeconfigRequest &request);
                void UpdateClusterKubeconfigAsync(const Model::UpdateClusterKubeconfigRequest& request, const UpdateClusterKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateClusterKubeconfigOutcomeCallable UpdateClusterKubeconfigCallable(const Model::UpdateClusterKubeconfigRequest& request);

                /**
                 *This API is used to upgrade the master component of the cluster to the specified version.
                 * @param req UpdateClusterVersionRequest
                 * @return UpdateClusterVersionOutcome
                 */
                UpdateClusterVersionOutcome UpdateClusterVersion(const Model::UpdateClusterVersionRequest &request);
                void UpdateClusterVersionAsync(const Model::UpdateClusterVersionRequest& request, const UpdateClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateClusterVersionOutcomeCallable UpdateClusterVersionCallable(const Model::UpdateClusterVersionRequest& request);

                /**
                 *This API is used to upgrade an edge cluster component to a TKE Edge version.
                 * @param req UpdateEdgeClusterVersionRequest
                 * @return UpdateEdgeClusterVersionOutcome
                 */
                UpdateEdgeClusterVersionOutcome UpdateEdgeClusterVersion(const Model::UpdateEdgeClusterVersionRequest &request);
                void UpdateEdgeClusterVersionAsync(const Model::UpdateEdgeClusterVersionRequest& request, const UpdateEdgeClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateEdgeClusterVersionOutcomeCallable UpdateEdgeClusterVersionCallable(const Model::UpdateEdgeClusterVersionRequest& request);

                /**
                 *This API is used to upgrade work nodes in a cluster.
                 * @param req UpgradeClusterInstancesRequest
                 * @return UpgradeClusterInstancesOutcome
                 */
                UpgradeClusterInstancesOutcome UpgradeClusterInstances(const Model::UpgradeClusterInstancesRequest &request);
                void UpgradeClusterInstancesAsync(const Model::UpgradeClusterInstancesRequest& request, const UpgradeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeClusterInstancesOutcomeCallable UpgradeClusterInstancesCallable(const Model::UpgradeClusterInstancesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_TKECLIENT_H_
