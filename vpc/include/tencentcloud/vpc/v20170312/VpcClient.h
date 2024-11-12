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

#ifndef TENCENTCLOUD_VPC_V20170312_VPCCLIENT_H_
#define TENCENTCLOUD_VPC_V20170312_VPCCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vpc/v20170312/model/AcceptAttachCcnInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AcceptAttachCcnInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AddBandwidthPackageResourcesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AddBandwidthPackageResourcesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AdjustPublicAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/AdjustPublicAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/AllocateAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AllocateAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssignIpv6AddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssignIpv6AddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssignIpv6CidrBlockRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssignIpv6CidrBlockResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssignIpv6SubnetCidrBlockRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssignIpv6SubnetCidrBlockResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssignPrivateIpAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssignPrivateIpAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssociateAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssociateAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssociateDirectConnectGatewayNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssociateDirectConnectGatewayNatGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssociateNatGatewayAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssociateNatGatewayAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssociateNetworkAclSubnetsRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssociateNetworkAclSubnetsResponse.h>
#include <tencentcloud/vpc/v20170312/model/AssociateNetworkInterfaceSecurityGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/AssociateNetworkInterfaceSecurityGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/AttachCcnInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AttachCcnInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AttachClassicLinkVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/AttachClassicLinkVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/AttachNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/AttachNetworkInterfaceResponse.h>
#include <tencentcloud/vpc/v20170312/model/AttachSnapshotInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/AttachSnapshotInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/AuditCrossBorderComplianceRequest.h>
#include <tencentcloud/vpc/v20170312/model/AuditCrossBorderComplianceResponse.h>
#include <tencentcloud/vpc/v20170312/model/CheckAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/CheckAssistantCidrResponse.h>
#include <tencentcloud/vpc/v20170312/model/CheckNetDetectStateRequest.h>
#include <tencentcloud/vpc/v20170312/model/CheckNetDetectStateResponse.h>
#include <tencentcloud/vpc/v20170312/model/CloneSecurityGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/CloneSecurityGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateAddressTemplateRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateAddressTemplateResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateAddressTemplateGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateAddressTemplateGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateAndAttachNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateAndAttachNetworkInterfaceResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateAssistantCidrResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateBandwidthPackageRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateBandwidthPackageResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateCcnRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateCcnResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateCustomerGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateCustomerGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateDefaultVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateDefaultVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateDirectConnectGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateDirectConnectGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateDirectConnectGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateDirectConnectGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateFlowLogRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateFlowLogResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateHaVipRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateHaVipResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateLocalGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateLocalGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewayDestinationIpPortTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewayDestinationIpPortTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewaySourceIpTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewaySourceIpTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetDetectRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetDetectResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkAclRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkAclResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkAclQuintupleEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkAclQuintupleEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkInterfaceResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateRouteTableRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateRouteTableResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateSecurityGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSecurityGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateSecurityGroupPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSecurityGroupPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateSecurityGroupWithPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSecurityGroupWithPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateServiceTemplateRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateServiceTemplateResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateServiceTemplateGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateServiceTemplateGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateSnapshotPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSnapshotPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateSubnetRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSubnetResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateSubnetsRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSubnetsResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointServiceRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointServiceResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointServiceWhiteListRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcEndPointServiceWhiteListResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteAddressTemplateRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteAddressTemplateResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteAddressTemplateGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteAddressTemplateGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteAssistantCidrResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteBandwidthPackageRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteBandwidthPackageResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCcnRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCcnResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCustomerGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteCustomerGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteDirectConnectGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteDirectConnectGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteDirectConnectGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteDirectConnectGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteFlowLogRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteFlowLogResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteHaVipRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteHaVipResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteLocalGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteLocalGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewayDestinationIpPortTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewaySourceIpTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewaySourceIpTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetDetectRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetDetectResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkAclRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkAclResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkAclQuintupleEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkAclQuintupleEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkInterfaceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteRouteTableRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteRouteTableResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSecurityGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSecurityGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSecurityGroupPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSecurityGroupPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteServiceTemplateRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteServiceTemplateResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteServiceTemplateGroupRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteServiceTemplateGroupResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSnapshotPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSnapshotPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSubnetRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSubnetResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteTrafficPackagesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteTrafficPackagesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointServiceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointServiceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointServiceWhiteListRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcEndPointServiceWhiteListResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewayRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewayRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAccountAttributesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAccountAttributesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressQuotaRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressQuotaResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplateGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplateGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplatesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressTemplatesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeAssistantCidrResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageBillUsageRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageBillUsageResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageQuotaRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageQuotaResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageResourcesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageResourcesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackagesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackagesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnAttachedInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnAttachedInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRegionBandwidthLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRegionBandwidthLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeClassicLinkInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeClassicLinkInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCrossBorderComplianceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCrossBorderComplianceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCustomerGatewayVendorsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCustomerGatewayVendorsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCustomerGatewaysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCustomerGatewaysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeDirectConnectGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeDirectConnectGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeDirectConnectGatewaysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeDirectConnectGatewaysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeFlowLogRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeFlowLogResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeFlowLogsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeFlowLogsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeGatewayFlowMonitorDetailRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeGatewayFlowMonitorDetailResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeGatewayFlowQosRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeGatewayFlowQosResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeHaVipsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeHaVipsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIpGeolocationDatabaseUrlRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIpGeolocationDatabaseUrlResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIpGeolocationInfosRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeIpGeolocationInfosResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeLocalGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeLocalGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayDirectConnectGatewayRouteRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayDirectConnectGatewayRouteResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewaySourceIpTranslationNatRulesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewaySourceIpTranslationNatRulesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewaysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewaysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectStatesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectStatesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkAclQuintupleEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkAclQuintupleEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkAclsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkAclsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkInterfaceLimitRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkInterfaceLimitResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkInterfacesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetworkInterfacesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteTablesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeRouteTablesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupAssociationStatisticsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupAssociationStatisticsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupReferencesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupReferencesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSecurityGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplateGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplateGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplatesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeServiceTemplatesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSgSnapshotFileContentRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSgSnapshotFileContentResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSnapshotAttachedInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSnapshotAttachedInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSnapshotFilesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSnapshotFilesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSnapshotPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSnapshotPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSubnetResourceDashboardRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSubnetResourceDashboardResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSubnetsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSubnetsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTaskResultRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTaskResultResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTrafficPackagesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTrafficPackagesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeUsedIpAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeUsedIpAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcEndPointRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcEndPointResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcEndPointServiceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcEndPointServiceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcEndPointServiceWhiteListRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcEndPointServiceWhiteListResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcIpv6AddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcIpv6AddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcPrivateIpAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcPrivateIpAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcResourceDashboardRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcResourceDashboardResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcTaskResultRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcTaskResultResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnConnectionsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnConnectionsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewayRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewayRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewaysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewaysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DetachCcnInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DetachCcnInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DetachClassicLinkVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/DetachClassicLinkVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/DetachNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DetachNetworkInterfaceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DetachSnapshotInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DetachSnapshotInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableFlowLogsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableFlowLogsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableGatewayFlowMonitorRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableGatewayFlowMonitorResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableSnapshotPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableSnapshotPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateDirectConnectGatewayNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateDirectConnectGatewayNatGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNatGatewayAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNatGatewayAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNetworkAclSubnetsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNetworkAclSubnetsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNetworkInterfaceSecurityGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNetworkInterfaceSecurityGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateVpcEndPointSecurityGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateVpcEndPointSecurityGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DownloadCustomerGatewayConfigurationRequest.h>
#include <tencentcloud/vpc/v20170312/model/DownloadCustomerGatewayConfigurationResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableFlowLogsRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableFlowLogsResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableGatewayFlowMonitorRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableGatewayFlowMonitorResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableSnapshotPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableSnapshotPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableVpcEndPointConnectRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableVpcEndPointConnectResponse.h>
#include <tencentcloud/vpc/v20170312/model/GenerateVpnConnectionDefaultHealthCheckIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/GenerateVpnConnectionDefaultHealthCheckIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/GetCcnRegionBandwidthLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/GetCcnRegionBandwidthLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/HaVipAssociateAddressIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/HaVipAssociateAddressIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/HaVipDisassociateAddressIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/HaVipDisassociateAddressIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquirePriceCreateDirectConnectGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquirePriceCreateDirectConnectGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceRenewVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceRenewVpnGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceResetVpnGatewayInternetMaxBandwidthResponse.h>
#include <tencentcloud/vpc/v20170312/model/MigrateNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/MigrateNetworkInterfaceResponse.h>
#include <tencentcloud/vpc/v20170312/model/MigratePrivateIpAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/MigratePrivateIpAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressInternetChargeTypeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressInternetChargeTypeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressTemplateAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressTemplateAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressTemplateGroupAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressTemplateGroupAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressesBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressesBandwidthResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressesRenewFlagRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAddressesRenewFlagResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAssistantCidrResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyBandwidthPackageAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyBandwidthPackageAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyBandwidthPackageBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyBandwidthPackageBandwidthResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnAttachedInstancesAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnAttachedInstancesAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnRegionBandwidthLimitsTypeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCcnRegionBandwidthLimitsTypeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCustomerGatewayAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyCustomerGatewayAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyDirectConnectGatewayAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyDirectConnectGatewayAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyFlowLogAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyFlowLogAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyGatewayFlowQosRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyGatewayFlowQosResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyHaVipAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyHaVipAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyIpv6AddressesAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyIpv6AddressesAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyLocalGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyLocalGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewayAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewayAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewayDestinationIpPortTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewaySourceIpTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewaySourceIpTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetDetectRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetDetectResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclQuintupleEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclQuintupleEntriesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkInterfaceAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkInterfaceAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyPrivateIpAddressesAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyPrivateIpAddressesAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyRouteTableAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyRouteTableAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifySecurityGroupAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifySecurityGroupAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifySecurityGroupPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifySecurityGroupPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyServiceTemplateAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyServiceTemplateAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyServiceTemplateGroupAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyServiceTemplateGroupAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifySnapshotPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifySnapshotPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifySubnetAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifySubnetAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointServiceAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointServiceAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointServiceWhiteListRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcEndPointServiceWhiteListResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnConnectionAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnConnectionAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/NotifyRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/NotifyRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/RefreshDirectConnectGatewayRouteToNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/RefreshDirectConnectGatewayRouteToNatGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/RejectAttachCcnInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/RejectAttachCcnInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReleaseAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReleaseAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/RemoveBandwidthPackageResourcesRequest.h>
#include <tencentcloud/vpc/v20170312/model/RemoveBandwidthPackageResourcesResponse.h>
#include <tencentcloud/vpc/v20170312/model/RenewVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/RenewVpnGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceDirectConnectGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceDirectConnectGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRouteTableAssociationRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRouteTableAssociationResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceSecurityGroupPoliciesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceSecurityGroupPoliciesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceSecurityGroupPolicyRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReplaceSecurityGroupPolicyResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetAttachCcnInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetAttachCcnInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetNatGatewayConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetNatGatewayConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetVpnConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetVpnConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResetVpnGatewayInternetMaxBandwidthRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResetVpnGatewayInternetMaxBandwidthResponse.h>
#include <tencentcloud/vpc/v20170312/model/ResumeSnapshotInstanceRequest.h>
#include <tencentcloud/vpc/v20170312/model/ResumeSnapshotInstanceResponse.h>
#include <tencentcloud/vpc/v20170312/model/ReturnNormalAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ReturnNormalAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/SetCcnRegionBandwidthLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/SetCcnRegionBandwidthLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/SetVpnGatewaysRenewFlagRequest.h>
#include <tencentcloud/vpc/v20170312/model/SetVpnGatewaysRenewFlagResponse.h>
#include <tencentcloud/vpc/v20170312/model/TransformAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/TransformAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/UnassignIpv6AddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/UnassignIpv6AddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/UnassignIpv6CidrBlockRequest.h>
#include <tencentcloud/vpc/v20170312/model/UnassignIpv6CidrBlockResponse.h>
#include <tencentcloud/vpc/v20170312/model/UnassignIpv6SubnetCidrBlockRequest.h>
#include <tencentcloud/vpc/v20170312/model/UnassignIpv6SubnetCidrBlockResponse.h>
#include <tencentcloud/vpc/v20170312/model/UnassignPrivateIpAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/UnassignPrivateIpAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/WithdrawNotifyRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/WithdrawNotifyRoutesResponse.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            class VpcClient : public AbstractClient
            {
            public:
                VpcClient(const Credential &credential, const std::string &region);
                VpcClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AcceptAttachCcnInstancesResponse> AcceptAttachCcnInstancesOutcome;
                typedef std::future<AcceptAttachCcnInstancesOutcome> AcceptAttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AcceptAttachCcnInstancesRequest&, AcceptAttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcceptAttachCcnInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::AddBandwidthPackageResourcesResponse> AddBandwidthPackageResourcesOutcome;
                typedef std::future<AddBandwidthPackageResourcesOutcome> AddBandwidthPackageResourcesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AddBandwidthPackageResourcesRequest&, AddBandwidthPackageResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddBandwidthPackageResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::AdjustPublicAddressResponse> AdjustPublicAddressOutcome;
                typedef std::future<AdjustPublicAddressOutcome> AdjustPublicAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AdjustPublicAddressRequest&, AdjustPublicAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AdjustPublicAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::AllocateAddressesResponse> AllocateAddressesOutcome;
                typedef std::future<AllocateAddressesOutcome> AllocateAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AllocateAddressesRequest&, AllocateAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::AssignIpv6AddressesResponse> AssignIpv6AddressesOutcome;
                typedef std::future<AssignIpv6AddressesOutcome> AssignIpv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignIpv6AddressesRequest&, AssignIpv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignIpv6AddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::AssignIpv6CidrBlockResponse> AssignIpv6CidrBlockOutcome;
                typedef std::future<AssignIpv6CidrBlockOutcome> AssignIpv6CidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignIpv6CidrBlockRequest&, AssignIpv6CidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignIpv6CidrBlockAsyncHandler;
                typedef Outcome<Core::Error, Model::AssignIpv6SubnetCidrBlockResponse> AssignIpv6SubnetCidrBlockOutcome;
                typedef std::future<AssignIpv6SubnetCidrBlockOutcome> AssignIpv6SubnetCidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignIpv6SubnetCidrBlockRequest&, AssignIpv6SubnetCidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignIpv6SubnetCidrBlockAsyncHandler;
                typedef Outcome<Core::Error, Model::AssignPrivateIpAddressesResponse> AssignPrivateIpAddressesOutcome;
                typedef std::future<AssignPrivateIpAddressesOutcome> AssignPrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignPrivateIpAddressesRequest&, AssignPrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignPrivateIpAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateAddressResponse> AssociateAddressOutcome;
                typedef std::future<AssociateAddressOutcome> AssociateAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateAddressRequest&, AssociateAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateDirectConnectGatewayNatGatewayResponse> AssociateDirectConnectGatewayNatGatewayOutcome;
                typedef std::future<AssociateDirectConnectGatewayNatGatewayOutcome> AssociateDirectConnectGatewayNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateDirectConnectGatewayNatGatewayRequest&, AssociateDirectConnectGatewayNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateDirectConnectGatewayNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateNatGatewayAddressResponse> AssociateNatGatewayAddressOutcome;
                typedef std::future<AssociateNatGatewayAddressOutcome> AssociateNatGatewayAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateNatGatewayAddressRequest&, AssociateNatGatewayAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateNatGatewayAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateNetworkAclSubnetsResponse> AssociateNetworkAclSubnetsOutcome;
                typedef std::future<AssociateNetworkAclSubnetsOutcome> AssociateNetworkAclSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateNetworkAclSubnetsRequest&, AssociateNetworkAclSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateNetworkAclSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::AssociateNetworkInterfaceSecurityGroupsResponse> AssociateNetworkInterfaceSecurityGroupsOutcome;
                typedef std::future<AssociateNetworkInterfaceSecurityGroupsOutcome> AssociateNetworkInterfaceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateNetworkInterfaceSecurityGroupsRequest&, AssociateNetworkInterfaceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateNetworkInterfaceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachCcnInstancesResponse> AttachCcnInstancesOutcome;
                typedef std::future<AttachCcnInstancesOutcome> AttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AttachCcnInstancesRequest&, AttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachCcnInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachClassicLinkVpcResponse> AttachClassicLinkVpcOutcome;
                typedef std::future<AttachClassicLinkVpcOutcome> AttachClassicLinkVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AttachClassicLinkVpcRequest&, AttachClassicLinkVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachClassicLinkVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachNetworkInterfaceResponse> AttachNetworkInterfaceOutcome;
                typedef std::future<AttachNetworkInterfaceOutcome> AttachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AttachNetworkInterfaceRequest&, AttachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachSnapshotInstancesResponse> AttachSnapshotInstancesOutcome;
                typedef std::future<AttachSnapshotInstancesOutcome> AttachSnapshotInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AttachSnapshotInstancesRequest&, AttachSnapshotInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachSnapshotInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::AuditCrossBorderComplianceResponse> AuditCrossBorderComplianceOutcome;
                typedef std::future<AuditCrossBorderComplianceOutcome> AuditCrossBorderComplianceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AuditCrossBorderComplianceRequest&, AuditCrossBorderComplianceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AuditCrossBorderComplianceAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckAssistantCidrResponse> CheckAssistantCidrOutcome;
                typedef std::future<CheckAssistantCidrOutcome> CheckAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CheckAssistantCidrRequest&, CheckAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAssistantCidrAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckNetDetectStateResponse> CheckNetDetectStateOutcome;
                typedef std::future<CheckNetDetectStateOutcome> CheckNetDetectStateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CheckNetDetectStateRequest&, CheckNetDetectStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckNetDetectStateAsyncHandler;
                typedef Outcome<Core::Error, Model::CloneSecurityGroupResponse> CloneSecurityGroupOutcome;
                typedef std::future<CloneSecurityGroupOutcome> CloneSecurityGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CloneSecurityGroupRequest&, CloneSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloneSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAddressTemplateResponse> CreateAddressTemplateOutcome;
                typedef std::future<CreateAddressTemplateOutcome> CreateAddressTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAddressTemplateRequest&, CreateAddressTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAddressTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAddressTemplateGroupResponse> CreateAddressTemplateGroupOutcome;
                typedef std::future<CreateAddressTemplateGroupOutcome> CreateAddressTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAddressTemplateGroupRequest&, CreateAddressTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAddressTemplateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAndAttachNetworkInterfaceResponse> CreateAndAttachNetworkInterfaceOutcome;
                typedef std::future<CreateAndAttachNetworkInterfaceOutcome> CreateAndAttachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAndAttachNetworkInterfaceRequest&, CreateAndAttachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndAttachNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAssistantCidrResponse> CreateAssistantCidrOutcome;
                typedef std::future<CreateAssistantCidrOutcome> CreateAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAssistantCidrRequest&, CreateAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssistantCidrAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBandwidthPackageResponse> CreateBandwidthPackageOutcome;
                typedef std::future<CreateBandwidthPackageOutcome> CreateBandwidthPackageOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateBandwidthPackageRequest&, CreateBandwidthPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBandwidthPackageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCcnResponse> CreateCcnOutcome;
                typedef std::future<CreateCcnOutcome> CreateCcnOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateCcnRequest&, CreateCcnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCcnAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomerGatewayResponse> CreateCustomerGatewayOutcome;
                typedef std::future<CreateCustomerGatewayOutcome> CreateCustomerGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateCustomerGatewayRequest&, CreateCustomerGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomerGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDefaultVpcResponse> CreateDefaultVpcOutcome;
                typedef std::future<CreateDefaultVpcOutcome> CreateDefaultVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDefaultVpcRequest&, CreateDefaultVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDefaultVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDirectConnectGatewayResponse> CreateDirectConnectGatewayOutcome;
                typedef std::future<CreateDirectConnectGatewayOutcome> CreateDirectConnectGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDirectConnectGatewayRequest&, CreateDirectConnectGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDirectConnectGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDirectConnectGatewayCcnRoutesResponse> CreateDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<CreateDirectConnectGatewayCcnRoutesOutcome> CreateDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDirectConnectGatewayCcnRoutesRequest&, CreateDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFlowLogResponse> CreateFlowLogOutcome;
                typedef std::future<CreateFlowLogOutcome> CreateFlowLogOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateFlowLogRequest&, CreateFlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowLogAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateHaVipResponse> CreateHaVipOutcome;
                typedef std::future<CreateHaVipOutcome> CreateHaVipOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateHaVipRequest&, CreateHaVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHaVipAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLocalGatewayResponse> CreateLocalGatewayOutcome;
                typedef std::future<CreateLocalGatewayOutcome> CreateLocalGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateLocalGatewayRequest&, CreateLocalGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLocalGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNatGatewayResponse> CreateNatGatewayOutcome;
                typedef std::future<CreateNatGatewayOutcome> CreateNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNatGatewayRequest&, CreateNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNatGatewayDestinationIpPortTranslationNatRuleResponse> CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome> CreateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNatGatewayDestinationIpPortTranslationNatRuleRequest&, CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNatGatewaySourceIpTranslationNatRuleResponse> CreateNatGatewaySourceIpTranslationNatRuleOutcome;
                typedef std::future<CreateNatGatewaySourceIpTranslationNatRuleOutcome> CreateNatGatewaySourceIpTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNatGatewaySourceIpTranslationNatRuleRequest&, CreateNatGatewaySourceIpTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewaySourceIpTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetDetectResponse> CreateNetDetectOutcome;
                typedef std::future<CreateNetDetectOutcome> CreateNetDetectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetDetectRequest&, CreateNetDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetworkAclResponse> CreateNetworkAclOutcome;
                typedef std::future<CreateNetworkAclOutcome> CreateNetworkAclOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetworkAclRequest&, CreateNetworkAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkAclAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetworkAclQuintupleEntriesResponse> CreateNetworkAclQuintupleEntriesOutcome;
                typedef std::future<CreateNetworkAclQuintupleEntriesOutcome> CreateNetworkAclQuintupleEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetworkAclQuintupleEntriesRequest&, CreateNetworkAclQuintupleEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkAclQuintupleEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateNetworkInterfaceResponse> CreateNetworkInterfaceOutcome;
                typedef std::future<CreateNetworkInterfaceOutcome> CreateNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetworkInterfaceRequest&, CreateNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRouteTableResponse> CreateRouteTableOutcome;
                typedef std::future<CreateRouteTableOutcome> CreateRouteTableOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateRouteTableRequest&, CreateRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRoutesResponse> CreateRoutesOutcome;
                typedef std::future<CreateRoutesOutcome> CreateRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateRoutesRequest&, CreateRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityGroupResponse> CreateSecurityGroupOutcome;
                typedef std::future<CreateSecurityGroupOutcome> CreateSecurityGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSecurityGroupRequest&, CreateSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityGroupPoliciesResponse> CreateSecurityGroupPoliciesOutcome;
                typedef std::future<CreateSecurityGroupPoliciesOutcome> CreateSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSecurityGroupPoliciesRequest&, CreateSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityGroupWithPoliciesResponse> CreateSecurityGroupWithPoliciesOutcome;
                typedef std::future<CreateSecurityGroupWithPoliciesOutcome> CreateSecurityGroupWithPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSecurityGroupWithPoliciesRequest&, CreateSecurityGroupWithPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupWithPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServiceTemplateResponse> CreateServiceTemplateOutcome;
                typedef std::future<CreateServiceTemplateOutcome> CreateServiceTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateServiceTemplateRequest&, CreateServiceTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateServiceTemplateGroupResponse> CreateServiceTemplateGroupOutcome;
                typedef std::future<CreateServiceTemplateGroupOutcome> CreateServiceTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateServiceTemplateGroupRequest&, CreateServiceTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceTemplateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSnapshotPoliciesResponse> CreateSnapshotPoliciesOutcome;
                typedef std::future<CreateSnapshotPoliciesOutcome> CreateSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSnapshotPoliciesRequest&, CreateSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubnetResponse> CreateSubnetOutcome;
                typedef std::future<CreateSubnetOutcome> CreateSubnetOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSubnetRequest&, CreateSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubnetAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSubnetsResponse> CreateSubnetsOutcome;
                typedef std::future<CreateSubnetsOutcome> CreateSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSubnetsRequest&, CreateSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcResponse> CreateVpcOutcome;
                typedef std::future<CreateVpcOutcome> CreateVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpcRequest&, CreateVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcEndPointResponse> CreateVpcEndPointOutcome;
                typedef std::future<CreateVpcEndPointOutcome> CreateVpcEndPointOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpcEndPointRequest&, CreateVpcEndPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcEndPointAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcEndPointServiceResponse> CreateVpcEndPointServiceOutcome;
                typedef std::future<CreateVpcEndPointServiceOutcome> CreateVpcEndPointServiceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpcEndPointServiceRequest&, CreateVpcEndPointServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcEndPointServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpcEndPointServiceWhiteListResponse> CreateVpcEndPointServiceWhiteListOutcome;
                typedef std::future<CreateVpcEndPointServiceWhiteListOutcome> CreateVpcEndPointServiceWhiteListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpcEndPointServiceWhiteListRequest&, CreateVpcEndPointServiceWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcEndPointServiceWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpnConnectionResponse> CreateVpnConnectionOutcome;
                typedef std::future<CreateVpnConnectionOutcome> CreateVpnConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpnConnectionRequest&, CreateVpnConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpnGatewayResponse> CreateVpnGatewayOutcome;
                typedef std::future<CreateVpnGatewayOutcome> CreateVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpnGatewayRequest&, CreateVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVpnGatewayRoutesResponse> CreateVpnGatewayRoutesOutcome;
                typedef std::future<CreateVpnGatewayRoutesOutcome> CreateVpnGatewayRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpnGatewayRoutesRequest&, CreateVpnGatewayRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnGatewayRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAddressTemplateResponse> DeleteAddressTemplateOutcome;
                typedef std::future<DeleteAddressTemplateOutcome> DeleteAddressTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteAddressTemplateRequest&, DeleteAddressTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAddressTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAddressTemplateGroupResponse> DeleteAddressTemplateGroupOutcome;
                typedef std::future<DeleteAddressTemplateGroupOutcome> DeleteAddressTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteAddressTemplateGroupRequest&, DeleteAddressTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAddressTemplateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAssistantCidrResponse> DeleteAssistantCidrOutcome;
                typedef std::future<DeleteAssistantCidrOutcome> DeleteAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteAssistantCidrRequest&, DeleteAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAssistantCidrAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBandwidthPackageResponse> DeleteBandwidthPackageOutcome;
                typedef std::future<DeleteBandwidthPackageOutcome> DeleteBandwidthPackageOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteBandwidthPackageRequest&, DeleteBandwidthPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBandwidthPackageAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCcnResponse> DeleteCcnOutcome;
                typedef std::future<DeleteCcnOutcome> DeleteCcnOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteCcnRequest&, DeleteCcnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCcnAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomerGatewayResponse> DeleteCustomerGatewayOutcome;
                typedef std::future<DeleteCustomerGatewayOutcome> DeleteCustomerGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteCustomerGatewayRequest&, DeleteCustomerGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomerGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDirectConnectGatewayResponse> DeleteDirectConnectGatewayOutcome;
                typedef std::future<DeleteDirectConnectGatewayOutcome> DeleteDirectConnectGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteDirectConnectGatewayRequest&, DeleteDirectConnectGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDirectConnectGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDirectConnectGatewayCcnRoutesResponse> DeleteDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<DeleteDirectConnectGatewayCcnRoutesOutcome> DeleteDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteDirectConnectGatewayCcnRoutesRequest&, DeleteDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFlowLogResponse> DeleteFlowLogOutcome;
                typedef std::future<DeleteFlowLogOutcome> DeleteFlowLogOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteFlowLogRequest&, DeleteFlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteHaVipResponse> DeleteHaVipOutcome;
                typedef std::future<DeleteHaVipOutcome> DeleteHaVipOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteHaVipRequest&, DeleteHaVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHaVipAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLocalGatewayResponse> DeleteLocalGatewayOutcome;
                typedef std::future<DeleteLocalGatewayOutcome> DeleteLocalGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteLocalGatewayRequest&, DeleteLocalGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLocalGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNatGatewayResponse> DeleteNatGatewayOutcome;
                typedef std::future<DeleteNatGatewayOutcome> DeleteNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNatGatewayRequest&, DeleteNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleResponse> DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome> DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest&, DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNatGatewaySourceIpTranslationNatRuleResponse> DeleteNatGatewaySourceIpTranslationNatRuleOutcome;
                typedef std::future<DeleteNatGatewaySourceIpTranslationNatRuleOutcome> DeleteNatGatewaySourceIpTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNatGatewaySourceIpTranslationNatRuleRequest&, DeleteNatGatewaySourceIpTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewaySourceIpTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNetDetectResponse> DeleteNetDetectOutcome;
                typedef std::future<DeleteNetDetectOutcome> DeleteNetDetectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetDetectRequest&, DeleteNetDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNetworkAclResponse> DeleteNetworkAclOutcome;
                typedef std::future<DeleteNetworkAclOutcome> DeleteNetworkAclOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetworkAclRequest&, DeleteNetworkAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkAclAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNetworkAclQuintupleEntriesResponse> DeleteNetworkAclQuintupleEntriesOutcome;
                typedef std::future<DeleteNetworkAclQuintupleEntriesOutcome> DeleteNetworkAclQuintupleEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetworkAclQuintupleEntriesRequest&, DeleteNetworkAclQuintupleEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkAclQuintupleEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteNetworkInterfaceResponse> DeleteNetworkInterfaceOutcome;
                typedef std::future<DeleteNetworkInterfaceOutcome> DeleteNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetworkInterfaceRequest&, DeleteNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRouteTableResponse> DeleteRouteTableOutcome;
                typedef std::future<DeleteRouteTableOutcome> DeleteRouteTableOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteRouteTableRequest&, DeleteRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteTableAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRoutesResponse> DeleteRoutesOutcome;
                typedef std::future<DeleteRoutesOutcome> DeleteRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteRoutesRequest&, DeleteRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityGroupResponse> DeleteSecurityGroupOutcome;
                typedef std::future<DeleteSecurityGroupOutcome> DeleteSecurityGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteSecurityGroupRequest&, DeleteSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityGroupPoliciesResponse> DeleteSecurityGroupPoliciesOutcome;
                typedef std::future<DeleteSecurityGroupPoliciesOutcome> DeleteSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteSecurityGroupPoliciesRequest&, DeleteSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServiceTemplateResponse> DeleteServiceTemplateOutcome;
                typedef std::future<DeleteServiceTemplateOutcome> DeleteServiceTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteServiceTemplateRequest&, DeleteServiceTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteServiceTemplateGroupResponse> DeleteServiceTemplateGroupOutcome;
                typedef std::future<DeleteServiceTemplateGroupOutcome> DeleteServiceTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteServiceTemplateGroupRequest&, DeleteServiceTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceTemplateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSnapshotPoliciesResponse> DeleteSnapshotPoliciesOutcome;
                typedef std::future<DeleteSnapshotPoliciesOutcome> DeleteSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteSnapshotPoliciesRequest&, DeleteSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSubnetResponse> DeleteSubnetOutcome;
                typedef std::future<DeleteSubnetOutcome> DeleteSubnetOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteSubnetRequest&, DeleteSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubnetAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTrafficPackagesResponse> DeleteTrafficPackagesOutcome;
                typedef std::future<DeleteTrafficPackagesOutcome> DeleteTrafficPackagesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteTrafficPackagesRequest&, DeleteTrafficPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrafficPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcResponse> DeleteVpcOutcome;
                typedef std::future<DeleteVpcOutcome> DeleteVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpcRequest&, DeleteVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcEndPointResponse> DeleteVpcEndPointOutcome;
                typedef std::future<DeleteVpcEndPointOutcome> DeleteVpcEndPointOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpcEndPointRequest&, DeleteVpcEndPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcEndPointAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcEndPointServiceResponse> DeleteVpcEndPointServiceOutcome;
                typedef std::future<DeleteVpcEndPointServiceOutcome> DeleteVpcEndPointServiceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpcEndPointServiceRequest&, DeleteVpcEndPointServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcEndPointServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpcEndPointServiceWhiteListResponse> DeleteVpcEndPointServiceWhiteListOutcome;
                typedef std::future<DeleteVpcEndPointServiceWhiteListOutcome> DeleteVpcEndPointServiceWhiteListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpcEndPointServiceWhiteListRequest&, DeleteVpcEndPointServiceWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcEndPointServiceWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpnConnectionResponse> DeleteVpnConnectionOutcome;
                typedef std::future<DeleteVpnConnectionOutcome> DeleteVpnConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpnConnectionRequest&, DeleteVpnConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpnGatewayResponse> DeleteVpnGatewayOutcome;
                typedef std::future<DeleteVpnGatewayOutcome> DeleteVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpnGatewayRequest&, DeleteVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteVpnGatewayRoutesResponse> DeleteVpnGatewayRoutesOutcome;
                typedef std::future<DeleteVpnGatewayRoutesOutcome> DeleteVpnGatewayRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpnGatewayRoutesRequest&, DeleteVpnGatewayRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnGatewayRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountAttributesResponse> DescribeAccountAttributesOutcome;
                typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAccountAttributesRequest&, DescribeAccountAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressQuotaResponse> DescribeAddressQuotaOutcome;
                typedef std::future<DescribeAddressQuotaOutcome> DescribeAddressQuotaOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressQuotaRequest&, DescribeAddressQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressTemplateGroupsResponse> DescribeAddressTemplateGroupsOutcome;
                typedef std::future<DescribeAddressTemplateGroupsOutcome> DescribeAddressTemplateGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressTemplateGroupsRequest&, DescribeAddressTemplateGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressTemplateGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressTemplatesResponse> DescribeAddressTemplatesOutcome;
                typedef std::future<DescribeAddressTemplatesOutcome> DescribeAddressTemplatesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressTemplatesRequest&, DescribeAddressTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAddressesResponse> DescribeAddressesOutcome;
                typedef std::future<DescribeAddressesOutcome> DescribeAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressesRequest&, DescribeAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAssistantCidrResponse> DescribeAssistantCidrOutcome;
                typedef std::future<DescribeAssistantCidrOutcome> DescribeAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAssistantCidrRequest&, DescribeAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssistantCidrAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBandwidthPackageBillUsageResponse> DescribeBandwidthPackageBillUsageOutcome;
                typedef std::future<DescribeBandwidthPackageBillUsageOutcome> DescribeBandwidthPackageBillUsageOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackageBillUsageRequest&, DescribeBandwidthPackageBillUsageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackageBillUsageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBandwidthPackageQuotaResponse> DescribeBandwidthPackageQuotaOutcome;
                typedef std::future<DescribeBandwidthPackageQuotaOutcome> DescribeBandwidthPackageQuotaOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackageQuotaRequest&, DescribeBandwidthPackageQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackageQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBandwidthPackageResourcesResponse> DescribeBandwidthPackageResourcesOutcome;
                typedef std::future<DescribeBandwidthPackageResourcesOutcome> DescribeBandwidthPackageResourcesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackageResourcesRequest&, DescribeBandwidthPackageResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackageResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBandwidthPackagesResponse> DescribeBandwidthPackagesOutcome;
                typedef std::future<DescribeBandwidthPackagesOutcome> DescribeBandwidthPackagesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackagesRequest&, DescribeBandwidthPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnAttachedInstancesResponse> DescribeCcnAttachedInstancesOutcome;
                typedef std::future<DescribeCcnAttachedInstancesOutcome> DescribeCcnAttachedInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnAttachedInstancesRequest&, DescribeCcnAttachedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnAttachedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnRegionBandwidthLimitsResponse> DescribeCcnRegionBandwidthLimitsOutcome;
                typedef std::future<DescribeCcnRegionBandwidthLimitsOutcome> DescribeCcnRegionBandwidthLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnRegionBandwidthLimitsRequest&, DescribeCcnRegionBandwidthLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnRegionBandwidthLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnRoutesResponse> DescribeCcnRoutesOutcome;
                typedef std::future<DescribeCcnRoutesOutcome> DescribeCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnRoutesRequest&, DescribeCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCcnsResponse> DescribeCcnsOutcome;
                typedef std::future<DescribeCcnsOutcome> DescribeCcnsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnsRequest&, DescribeCcnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClassicLinkInstancesResponse> DescribeClassicLinkInstancesOutcome;
                typedef std::future<DescribeClassicLinkInstancesOutcome> DescribeClassicLinkInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeClassicLinkInstancesRequest&, DescribeClassicLinkInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicLinkInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCrossBorderComplianceResponse> DescribeCrossBorderComplianceOutcome;
                typedef std::future<DescribeCrossBorderComplianceOutcome> DescribeCrossBorderComplianceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCrossBorderComplianceRequest&, DescribeCrossBorderComplianceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCrossBorderComplianceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerGatewayVendorsResponse> DescribeCustomerGatewayVendorsOutcome;
                typedef std::future<DescribeCustomerGatewayVendorsOutcome> DescribeCustomerGatewayVendorsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCustomerGatewayVendorsRequest&, DescribeCustomerGatewayVendorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerGatewayVendorsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomerGatewaysResponse> DescribeCustomerGatewaysOutcome;
                typedef std::future<DescribeCustomerGatewaysOutcome> DescribeCustomerGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCustomerGatewaysRequest&, DescribeCustomerGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDirectConnectGatewayCcnRoutesResponse> DescribeDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<DescribeDirectConnectGatewayCcnRoutesOutcome> DescribeDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeDirectConnectGatewayCcnRoutesRequest&, DescribeDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDirectConnectGatewaysResponse> DescribeDirectConnectGatewaysOutcome;
                typedef std::future<DescribeDirectConnectGatewaysOutcome> DescribeDirectConnectGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeDirectConnectGatewaysRequest&, DescribeDirectConnectGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowLogResponse> DescribeFlowLogOutcome;
                typedef std::future<DescribeFlowLogOutcome> DescribeFlowLogOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeFlowLogRequest&, DescribeFlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowLogsResponse> DescribeFlowLogsOutcome;
                typedef std::future<DescribeFlowLogsOutcome> DescribeFlowLogsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeFlowLogsRequest&, DescribeFlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayFlowMonitorDetailResponse> DescribeGatewayFlowMonitorDetailOutcome;
                typedef std::future<DescribeGatewayFlowMonitorDetailOutcome> DescribeGatewayFlowMonitorDetailOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeGatewayFlowMonitorDetailRequest&, DescribeGatewayFlowMonitorDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayFlowMonitorDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayFlowQosResponse> DescribeGatewayFlowQosOutcome;
                typedef std::future<DescribeGatewayFlowQosOutcome> DescribeGatewayFlowQosOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeGatewayFlowQosRequest&, DescribeGatewayFlowQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayFlowQosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHaVipsResponse> DescribeHaVipsOutcome;
                typedef std::future<DescribeHaVipsOutcome> DescribeHaVipsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeHaVipsRequest&, DescribeHaVipsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHaVipsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpGeolocationDatabaseUrlResponse> DescribeIpGeolocationDatabaseUrlOutcome;
                typedef std::future<DescribeIpGeolocationDatabaseUrlOutcome> DescribeIpGeolocationDatabaseUrlOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeIpGeolocationDatabaseUrlRequest&, DescribeIpGeolocationDatabaseUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpGeolocationDatabaseUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIpGeolocationInfosResponse> DescribeIpGeolocationInfosOutcome;
                typedef std::future<DescribeIpGeolocationInfosOutcome> DescribeIpGeolocationInfosOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeIpGeolocationInfosRequest&, DescribeIpGeolocationInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpGeolocationInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLocalGatewayResponse> DescribeLocalGatewayOutcome;
                typedef std::future<DescribeLocalGatewayOutcome> DescribeLocalGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeLocalGatewayRequest&, DescribeLocalGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLocalGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse> DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome;
                typedef std::future<DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome> DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest&, DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewayDestinationIpPortTranslationNatRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatGatewayDirectConnectGatewayRouteResponse> DescribeNatGatewayDirectConnectGatewayRouteOutcome;
                typedef std::future<DescribeNatGatewayDirectConnectGatewayRouteOutcome> DescribeNatGatewayDirectConnectGatewayRouteOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewayDirectConnectGatewayRouteRequest&, DescribeNatGatewayDirectConnectGatewayRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewayDirectConnectGatewayRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatGatewaySourceIpTranslationNatRulesResponse> DescribeNatGatewaySourceIpTranslationNatRulesOutcome;
                typedef std::future<DescribeNatGatewaySourceIpTranslationNatRulesOutcome> DescribeNatGatewaySourceIpTranslationNatRulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewaySourceIpTranslationNatRulesRequest&, DescribeNatGatewaySourceIpTranslationNatRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewaySourceIpTranslationNatRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNatGatewaysResponse> DescribeNatGatewaysOutcome;
                typedef std::future<DescribeNatGatewaysOutcome> DescribeNatGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewaysRequest&, DescribeNatGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetDetectStatesResponse> DescribeNetDetectStatesOutcome;
                typedef std::future<DescribeNetDetectStatesOutcome> DescribeNetDetectStatesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetDetectStatesRequest&, DescribeNetDetectStatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetDetectStatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetDetectsResponse> DescribeNetDetectsOutcome;
                typedef std::future<DescribeNetDetectsOutcome> DescribeNetDetectsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetDetectsRequest&, DescribeNetDetectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetDetectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkAclQuintupleEntriesResponse> DescribeNetworkAclQuintupleEntriesOutcome;
                typedef std::future<DescribeNetworkAclQuintupleEntriesOutcome> DescribeNetworkAclQuintupleEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkAclQuintupleEntriesRequest&, DescribeNetworkAclQuintupleEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkAclQuintupleEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkAclsResponse> DescribeNetworkAclsOutcome;
                typedef std::future<DescribeNetworkAclsOutcome> DescribeNetworkAclsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkAclsRequest&, DescribeNetworkAclsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkAclsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkInterfaceLimitResponse> DescribeNetworkInterfaceLimitOutcome;
                typedef std::future<DescribeNetworkInterfaceLimitOutcome> DescribeNetworkInterfaceLimitOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkInterfaceLimitRequest&, DescribeNetworkInterfaceLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkInterfaceLimitAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkInterfacesResponse> DescribeNetworkInterfacesOutcome;
                typedef std::future<DescribeNetworkInterfacesOutcome> DescribeNetworkInterfacesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkInterfacesRequest&, DescribeNetworkInterfacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkInterfacesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRouteTablesResponse> DescribeRouteTablesOutcome;
                typedef std::future<DescribeRouteTablesOutcome> DescribeRouteTablesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeRouteTablesRequest&, DescribeRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupAssociationStatisticsResponse> DescribeSecurityGroupAssociationStatisticsOutcome;
                typedef std::future<DescribeSecurityGroupAssociationStatisticsOutcome> DescribeSecurityGroupAssociationStatisticsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupAssociationStatisticsRequest&, DescribeSecurityGroupAssociationStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupAssociationStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupPoliciesResponse> DescribeSecurityGroupPoliciesOutcome;
                typedef std::future<DescribeSecurityGroupPoliciesOutcome> DescribeSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupPoliciesRequest&, DescribeSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupReferencesResponse> DescribeSecurityGroupReferencesOutcome;
                typedef std::future<DescribeSecurityGroupReferencesOutcome> DescribeSecurityGroupReferencesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupReferencesRequest&, DescribeSecurityGroupReferencesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupReferencesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityGroupsResponse> DescribeSecurityGroupsOutcome;
                typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupsRequest&, DescribeSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceTemplateGroupsResponse> DescribeServiceTemplateGroupsOutcome;
                typedef std::future<DescribeServiceTemplateGroupsOutcome> DescribeServiceTemplateGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeServiceTemplateGroupsRequest&, DescribeServiceTemplateGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceTemplateGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeServiceTemplatesResponse> DescribeServiceTemplatesOutcome;
                typedef std::future<DescribeServiceTemplatesOutcome> DescribeServiceTemplatesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeServiceTemplatesRequest&, DescribeServiceTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSgSnapshotFileContentResponse> DescribeSgSnapshotFileContentOutcome;
                typedef std::future<DescribeSgSnapshotFileContentOutcome> DescribeSgSnapshotFileContentOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSgSnapshotFileContentRequest&, DescribeSgSnapshotFileContentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSgSnapshotFileContentAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotAttachedInstancesResponse> DescribeSnapshotAttachedInstancesOutcome;
                typedef std::future<DescribeSnapshotAttachedInstancesOutcome> DescribeSnapshotAttachedInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSnapshotAttachedInstancesRequest&, DescribeSnapshotAttachedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotAttachedInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotFilesResponse> DescribeSnapshotFilesOutcome;
                typedef std::future<DescribeSnapshotFilesOutcome> DescribeSnapshotFilesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSnapshotFilesRequest&, DescribeSnapshotFilesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotFilesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSnapshotPoliciesResponse> DescribeSnapshotPoliciesOutcome;
                typedef std::future<DescribeSnapshotPoliciesOutcome> DescribeSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSnapshotPoliciesRequest&, DescribeSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubnetResourceDashboardResponse> DescribeSubnetResourceDashboardOutcome;
                typedef std::future<DescribeSubnetResourceDashboardOutcome> DescribeSubnetResourceDashboardOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSubnetResourceDashboardRequest&, DescribeSubnetResourceDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetResourceDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubnetsResponse> DescribeSubnetsOutcome;
                typedef std::future<DescribeSubnetsOutcome> DescribeSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSubnetsRequest&, DescribeSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskResultResponse> DescribeTaskResultOutcome;
                typedef std::future<DescribeTaskResultOutcome> DescribeTaskResultOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeTaskResultRequest&, DescribeTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrafficPackagesResponse> DescribeTrafficPackagesOutcome;
                typedef std::future<DescribeTrafficPackagesOutcome> DescribeTrafficPackagesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeTrafficPackagesRequest&, DescribeTrafficPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficPackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUsedIpAddressResponse> DescribeUsedIpAddressOutcome;
                typedef std::future<DescribeUsedIpAddressOutcome> DescribeUsedIpAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeUsedIpAddressRequest&, DescribeUsedIpAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsedIpAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcEndPointResponse> DescribeVpcEndPointOutcome;
                typedef std::future<DescribeVpcEndPointOutcome> DescribeVpcEndPointOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcEndPointRequest&, DescribeVpcEndPointOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcEndPointAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcEndPointServiceResponse> DescribeVpcEndPointServiceOutcome;
                typedef std::future<DescribeVpcEndPointServiceOutcome> DescribeVpcEndPointServiceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcEndPointServiceRequest&, DescribeVpcEndPointServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcEndPointServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcEndPointServiceWhiteListResponse> DescribeVpcEndPointServiceWhiteListOutcome;
                typedef std::future<DescribeVpcEndPointServiceWhiteListOutcome> DescribeVpcEndPointServiceWhiteListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcEndPointServiceWhiteListRequest&, DescribeVpcEndPointServiceWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcEndPointServiceWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcInstancesResponse> DescribeVpcInstancesOutcome;
                typedef std::future<DescribeVpcInstancesOutcome> DescribeVpcInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcInstancesRequest&, DescribeVpcInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcIpv6AddressesResponse> DescribeVpcIpv6AddressesOutcome;
                typedef std::future<DescribeVpcIpv6AddressesOutcome> DescribeVpcIpv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcIpv6AddressesRequest&, DescribeVpcIpv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcIpv6AddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcPrivateIpAddressesResponse> DescribeVpcPrivateIpAddressesOutcome;
                typedef std::future<DescribeVpcPrivateIpAddressesOutcome> DescribeVpcPrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcPrivateIpAddressesRequest&, DescribeVpcPrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcPrivateIpAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcResourceDashboardResponse> DescribeVpcResourceDashboardOutcome;
                typedef std::future<DescribeVpcResourceDashboardOutcome> DescribeVpcResourceDashboardOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcResourceDashboardRequest&, DescribeVpcResourceDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcResourceDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcTaskResultResponse> DescribeVpcTaskResultOutcome;
                typedef std::future<DescribeVpcTaskResultOutcome> DescribeVpcTaskResultOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcTaskResultRequest&, DescribeVpcTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcTaskResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpcsResponse> DescribeVpcsOutcome;
                typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcsRequest&, DescribeVpcsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpnConnectionsResponse> DescribeVpnConnectionsOutcome;
                typedef std::future<DescribeVpnConnectionsOutcome> DescribeVpnConnectionsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnConnectionsRequest&, DescribeVpnConnectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnConnectionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpnGatewayCcnRoutesResponse> DescribeVpnGatewayCcnRoutesOutcome;
                typedef std::future<DescribeVpnGatewayCcnRoutesOutcome> DescribeVpnGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewayCcnRoutesRequest&, DescribeVpnGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpnGatewayRoutesResponse> DescribeVpnGatewayRoutesOutcome;
                typedef std::future<DescribeVpnGatewayRoutesOutcome> DescribeVpnGatewayRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewayRoutesRequest&, DescribeVpnGatewayRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewayRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVpnGatewaysResponse> DescribeVpnGatewaysOutcome;
                typedef std::future<DescribeVpnGatewaysOutcome> DescribeVpnGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewaysRequest&, DescribeVpnGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachCcnInstancesResponse> DetachCcnInstancesOutcome;
                typedef std::future<DetachCcnInstancesOutcome> DetachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DetachCcnInstancesRequest&, DetachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachCcnInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachClassicLinkVpcResponse> DetachClassicLinkVpcOutcome;
                typedef std::future<DetachClassicLinkVpcOutcome> DetachClassicLinkVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DetachClassicLinkVpcRequest&, DetachClassicLinkVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachClassicLinkVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachNetworkInterfaceResponse> DetachNetworkInterfaceOutcome;
                typedef std::future<DetachNetworkInterfaceOutcome> DetachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DetachNetworkInterfaceRequest&, DetachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachSnapshotInstancesResponse> DetachSnapshotInstancesOutcome;
                typedef std::future<DetachSnapshotInstancesOutcome> DetachSnapshotInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DetachSnapshotInstancesRequest&, DetachSnapshotInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachSnapshotInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableCcnRoutesResponse> DisableCcnRoutesOutcome;
                typedef std::future<DisableCcnRoutesOutcome> DisableCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableCcnRoutesRequest&, DisableCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableFlowLogsResponse> DisableFlowLogsOutcome;
                typedef std::future<DisableFlowLogsOutcome> DisableFlowLogsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableFlowLogsRequest&, DisableFlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableFlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableGatewayFlowMonitorResponse> DisableGatewayFlowMonitorOutcome;
                typedef std::future<DisableGatewayFlowMonitorOutcome> DisableGatewayFlowMonitorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableGatewayFlowMonitorRequest&, DisableGatewayFlowMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableGatewayFlowMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableSnapshotPoliciesResponse> DisableSnapshotPoliciesOutcome;
                typedef std::future<DisableSnapshotPoliciesOutcome> DisableSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableSnapshotPoliciesRequest&, DisableSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateAddressResponse> DisassociateAddressOutcome;
                typedef std::future<DisassociateAddressOutcome> DisassociateAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateAddressRequest&, DisassociateAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateDirectConnectGatewayNatGatewayResponse> DisassociateDirectConnectGatewayNatGatewayOutcome;
                typedef std::future<DisassociateDirectConnectGatewayNatGatewayOutcome> DisassociateDirectConnectGatewayNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateDirectConnectGatewayNatGatewayRequest&, DisassociateDirectConnectGatewayNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateDirectConnectGatewayNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateNatGatewayAddressResponse> DisassociateNatGatewayAddressOutcome;
                typedef std::future<DisassociateNatGatewayAddressOutcome> DisassociateNatGatewayAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateNatGatewayAddressRequest&, DisassociateNatGatewayAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateNatGatewayAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateNetworkAclSubnetsResponse> DisassociateNetworkAclSubnetsOutcome;
                typedef std::future<DisassociateNetworkAclSubnetsOutcome> DisassociateNetworkAclSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateNetworkAclSubnetsRequest&, DisassociateNetworkAclSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateNetworkAclSubnetsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateNetworkInterfaceSecurityGroupsResponse> DisassociateNetworkInterfaceSecurityGroupsOutcome;
                typedef std::future<DisassociateNetworkInterfaceSecurityGroupsOutcome> DisassociateNetworkInterfaceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateNetworkInterfaceSecurityGroupsRequest&, DisassociateNetworkInterfaceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateNetworkInterfaceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DisassociateVpcEndPointSecurityGroupsResponse> DisassociateVpcEndPointSecurityGroupsOutcome;
                typedef std::future<DisassociateVpcEndPointSecurityGroupsOutcome> DisassociateVpcEndPointSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateVpcEndPointSecurityGroupsRequest&, DisassociateVpcEndPointSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateVpcEndPointSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadCustomerGatewayConfigurationResponse> DownloadCustomerGatewayConfigurationOutcome;
                typedef std::future<DownloadCustomerGatewayConfigurationOutcome> DownloadCustomerGatewayConfigurationOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DownloadCustomerGatewayConfigurationRequest&, DownloadCustomerGatewayConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadCustomerGatewayConfigurationAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableCcnRoutesResponse> EnableCcnRoutesOutcome;
                typedef std::future<EnableCcnRoutesOutcome> EnableCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableCcnRoutesRequest&, EnableCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableFlowLogsResponse> EnableFlowLogsOutcome;
                typedef std::future<EnableFlowLogsOutcome> EnableFlowLogsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableFlowLogsRequest&, EnableFlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableFlowLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableGatewayFlowMonitorResponse> EnableGatewayFlowMonitorOutcome;
                typedef std::future<EnableGatewayFlowMonitorOutcome> EnableGatewayFlowMonitorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableGatewayFlowMonitorRequest&, EnableGatewayFlowMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableGatewayFlowMonitorAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableSnapshotPoliciesResponse> EnableSnapshotPoliciesOutcome;
                typedef std::future<EnableSnapshotPoliciesOutcome> EnableSnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableSnapshotPoliciesRequest&, EnableSnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableSnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableVpcEndPointConnectResponse> EnableVpcEndPointConnectOutcome;
                typedef std::future<EnableVpcEndPointConnectOutcome> EnableVpcEndPointConnectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableVpcEndPointConnectRequest&, EnableVpcEndPointConnectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableVpcEndPointConnectAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateVpnConnectionDefaultHealthCheckIpResponse> GenerateVpnConnectionDefaultHealthCheckIpOutcome;
                typedef std::future<GenerateVpnConnectionDefaultHealthCheckIpOutcome> GenerateVpnConnectionDefaultHealthCheckIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::GenerateVpnConnectionDefaultHealthCheckIpRequest&, GenerateVpnConnectionDefaultHealthCheckIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateVpnConnectionDefaultHealthCheckIpAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCcnRegionBandwidthLimitsResponse> GetCcnRegionBandwidthLimitsOutcome;
                typedef std::future<GetCcnRegionBandwidthLimitsOutcome> GetCcnRegionBandwidthLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::GetCcnRegionBandwidthLimitsRequest&, GetCcnRegionBandwidthLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCcnRegionBandwidthLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::HaVipAssociateAddressIpResponse> HaVipAssociateAddressIpOutcome;
                typedef std::future<HaVipAssociateAddressIpOutcome> HaVipAssociateAddressIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::HaVipAssociateAddressIpRequest&, HaVipAssociateAddressIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HaVipAssociateAddressIpAsyncHandler;
                typedef Outcome<Core::Error, Model::HaVipDisassociateAddressIpResponse> HaVipDisassociateAddressIpOutcome;
                typedef std::future<HaVipDisassociateAddressIpOutcome> HaVipDisassociateAddressIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::HaVipDisassociateAddressIpRequest&, HaVipDisassociateAddressIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HaVipDisassociateAddressIpAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateDirectConnectGatewayResponse> InquirePriceCreateDirectConnectGatewayOutcome;
                typedef std::future<InquirePriceCreateDirectConnectGatewayOutcome> InquirePriceCreateDirectConnectGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquirePriceCreateDirectConnectGatewayRequest&, InquirePriceCreateDirectConnectGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateDirectConnectGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceRenewVpnGatewayResponse> InquiryPriceRenewVpnGatewayOutcome;
                typedef std::future<InquiryPriceRenewVpnGatewayOutcome> InquiryPriceRenewVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquiryPriceRenewVpnGatewayRequest&, InquiryPriceRenewVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewVpnGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthResponse> InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome;
                typedef std::future<InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome> InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest&, InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResetVpnGatewayInternetMaxBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::MigrateNetworkInterfaceResponse> MigrateNetworkInterfaceOutcome;
                typedef std::future<MigrateNetworkInterfaceOutcome> MigrateNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::MigrateNetworkInterfaceRequest&, MigrateNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigrateNetworkInterfaceAsyncHandler;
                typedef Outcome<Core::Error, Model::MigratePrivateIpAddressResponse> MigratePrivateIpAddressOutcome;
                typedef std::future<MigratePrivateIpAddressOutcome> MigratePrivateIpAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::MigratePrivateIpAddressRequest&, MigratePrivateIpAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigratePrivateIpAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressAttributeResponse> ModifyAddressAttributeOutcome;
                typedef std::future<ModifyAddressAttributeOutcome> ModifyAddressAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressAttributeRequest&, ModifyAddressAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressInternetChargeTypeResponse> ModifyAddressInternetChargeTypeOutcome;
                typedef std::future<ModifyAddressInternetChargeTypeOutcome> ModifyAddressInternetChargeTypeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressInternetChargeTypeRequest&, ModifyAddressInternetChargeTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressInternetChargeTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressTemplateAttributeResponse> ModifyAddressTemplateAttributeOutcome;
                typedef std::future<ModifyAddressTemplateAttributeOutcome> ModifyAddressTemplateAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressTemplateAttributeRequest&, ModifyAddressTemplateAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressTemplateAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressTemplateGroupAttributeResponse> ModifyAddressTemplateGroupAttributeOutcome;
                typedef std::future<ModifyAddressTemplateGroupAttributeOutcome> ModifyAddressTemplateGroupAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressTemplateGroupAttributeRequest&, ModifyAddressTemplateGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressTemplateGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressesBandwidthResponse> ModifyAddressesBandwidthOutcome;
                typedef std::future<ModifyAddressesBandwidthOutcome> ModifyAddressesBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressesBandwidthRequest&, ModifyAddressesBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressesBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAddressesRenewFlagResponse> ModifyAddressesRenewFlagOutcome;
                typedef std::future<ModifyAddressesRenewFlagOutcome> ModifyAddressesRenewFlagOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressesRenewFlagRequest&, ModifyAddressesRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressesRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAssistantCidrResponse> ModifyAssistantCidrOutcome;
                typedef std::future<ModifyAssistantCidrOutcome> ModifyAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAssistantCidrRequest&, ModifyAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssistantCidrAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBandwidthPackageAttributeResponse> ModifyBandwidthPackageAttributeOutcome;
                typedef std::future<ModifyBandwidthPackageAttributeOutcome> ModifyBandwidthPackageAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyBandwidthPackageAttributeRequest&, ModifyBandwidthPackageAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBandwidthPackageAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBandwidthPackageBandwidthResponse> ModifyBandwidthPackageBandwidthOutcome;
                typedef std::future<ModifyBandwidthPackageBandwidthOutcome> ModifyBandwidthPackageBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyBandwidthPackageBandwidthRequest&, ModifyBandwidthPackageBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBandwidthPackageBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCcnAttachedInstancesAttributeResponse> ModifyCcnAttachedInstancesAttributeOutcome;
                typedef std::future<ModifyCcnAttachedInstancesAttributeOutcome> ModifyCcnAttachedInstancesAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCcnAttachedInstancesAttributeRequest&, ModifyCcnAttachedInstancesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcnAttachedInstancesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCcnAttributeResponse> ModifyCcnAttributeOutcome;
                typedef std::future<ModifyCcnAttributeOutcome> ModifyCcnAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCcnAttributeRequest&, ModifyCcnAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcnAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCcnRegionBandwidthLimitsTypeResponse> ModifyCcnRegionBandwidthLimitsTypeOutcome;
                typedef std::future<ModifyCcnRegionBandwidthLimitsTypeOutcome> ModifyCcnRegionBandwidthLimitsTypeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCcnRegionBandwidthLimitsTypeRequest&, ModifyCcnRegionBandwidthLimitsTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcnRegionBandwidthLimitsTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomerGatewayAttributeResponse> ModifyCustomerGatewayAttributeOutcome;
                typedef std::future<ModifyCustomerGatewayAttributeOutcome> ModifyCustomerGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCustomerGatewayAttributeRequest&, ModifyCustomerGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomerGatewayAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDirectConnectGatewayAttributeResponse> ModifyDirectConnectGatewayAttributeOutcome;
                typedef std::future<ModifyDirectConnectGatewayAttributeOutcome> ModifyDirectConnectGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyDirectConnectGatewayAttributeRequest&, ModifyDirectConnectGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDirectConnectGatewayAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFlowLogAttributeResponse> ModifyFlowLogAttributeOutcome;
                typedef std::future<ModifyFlowLogAttributeOutcome> ModifyFlowLogAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyFlowLogAttributeRequest&, ModifyFlowLogAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowLogAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGatewayFlowQosResponse> ModifyGatewayFlowQosOutcome;
                typedef std::future<ModifyGatewayFlowQosOutcome> ModifyGatewayFlowQosOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyGatewayFlowQosRequest&, ModifyGatewayFlowQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGatewayFlowQosAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHaVipAttributeResponse> ModifyHaVipAttributeOutcome;
                typedef std::future<ModifyHaVipAttributeOutcome> ModifyHaVipAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyHaVipAttributeRequest&, ModifyHaVipAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHaVipAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyIpv6AddressesAttributeResponse> ModifyIpv6AddressesAttributeOutcome;
                typedef std::future<ModifyIpv6AddressesAttributeOutcome> ModifyIpv6AddressesAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyIpv6AddressesAttributeRequest&, ModifyIpv6AddressesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpv6AddressesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLocalGatewayResponse> ModifyLocalGatewayOutcome;
                typedef std::future<ModifyLocalGatewayOutcome> ModifyLocalGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyLocalGatewayRequest&, ModifyLocalGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLocalGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatGatewayAttributeResponse> ModifyNatGatewayAttributeOutcome;
                typedef std::future<ModifyNatGatewayAttributeOutcome> ModifyNatGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewayAttributeRequest&, ModifyNatGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewayAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleResponse> ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome> ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest&, ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNatGatewaySourceIpTranslationNatRuleResponse> ModifyNatGatewaySourceIpTranslationNatRuleOutcome;
                typedef std::future<ModifyNatGatewaySourceIpTranslationNatRuleOutcome> ModifyNatGatewaySourceIpTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewaySourceIpTranslationNatRuleRequest&, ModifyNatGatewaySourceIpTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewaySourceIpTranslationNatRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetDetectResponse> ModifyNetDetectOutcome;
                typedef std::future<ModifyNetDetectOutcome> ModifyNetDetectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetDetectRequest&, ModifyNetDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetworkAclAttributeResponse> ModifyNetworkAclAttributeOutcome;
                typedef std::future<ModifyNetworkAclAttributeOutcome> ModifyNetworkAclAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkAclAttributeRequest&, ModifyNetworkAclAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkAclAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetworkAclEntriesResponse> ModifyNetworkAclEntriesOutcome;
                typedef std::future<ModifyNetworkAclEntriesOutcome> ModifyNetworkAclEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkAclEntriesRequest&, ModifyNetworkAclEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkAclEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetworkAclQuintupleEntriesResponse> ModifyNetworkAclQuintupleEntriesOutcome;
                typedef std::future<ModifyNetworkAclQuintupleEntriesOutcome> ModifyNetworkAclQuintupleEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkAclQuintupleEntriesRequest&, ModifyNetworkAclQuintupleEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkAclQuintupleEntriesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyNetworkInterfaceAttributeResponse> ModifyNetworkInterfaceAttributeOutcome;
                typedef std::future<ModifyNetworkInterfaceAttributeOutcome> ModifyNetworkInterfaceAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkInterfaceAttributeRequest&, ModifyNetworkInterfaceAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkInterfaceAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrivateIpAddressesAttributeResponse> ModifyPrivateIpAddressesAttributeOutcome;
                typedef std::future<ModifyPrivateIpAddressesAttributeOutcome> ModifyPrivateIpAddressesAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyPrivateIpAddressesAttributeRequest&, ModifyPrivateIpAddressesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivateIpAddressesAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRouteTableAttributeResponse> ModifyRouteTableAttributeOutcome;
                typedef std::future<ModifyRouteTableAttributeOutcome> ModifyRouteTableAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyRouteTableAttributeRequest&, ModifyRouteTableAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouteTableAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityGroupAttributeResponse> ModifySecurityGroupAttributeOutcome;
                typedef std::future<ModifySecurityGroupAttributeOutcome> ModifySecurityGroupAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifySecurityGroupAttributeRequest&, ModifySecurityGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityGroupPoliciesResponse> ModifySecurityGroupPoliciesOutcome;
                typedef std::future<ModifySecurityGroupPoliciesOutcome> ModifySecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifySecurityGroupPoliciesRequest&, ModifySecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyServiceTemplateAttributeResponse> ModifyServiceTemplateAttributeOutcome;
                typedef std::future<ModifyServiceTemplateAttributeOutcome> ModifyServiceTemplateAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyServiceTemplateAttributeRequest&, ModifyServiceTemplateAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceTemplateAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyServiceTemplateGroupAttributeResponse> ModifyServiceTemplateGroupAttributeOutcome;
                typedef std::future<ModifyServiceTemplateGroupAttributeOutcome> ModifyServiceTemplateGroupAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyServiceTemplateGroupAttributeRequest&, ModifyServiceTemplateGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceTemplateGroupAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySnapshotPoliciesResponse> ModifySnapshotPoliciesOutcome;
                typedef std::future<ModifySnapshotPoliciesOutcome> ModifySnapshotPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifySnapshotPoliciesRequest&, ModifySnapshotPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySnapshotPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySubnetAttributeResponse> ModifySubnetAttributeOutcome;
                typedef std::future<ModifySubnetAttributeOutcome> ModifySubnetAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifySubnetAttributeRequest&, ModifySubnetAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubnetAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcAttributeResponse> ModifyVpcAttributeOutcome;
                typedef std::future<ModifyVpcAttributeOutcome> ModifyVpcAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpcAttributeRequest&, ModifyVpcAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcEndPointAttributeResponse> ModifyVpcEndPointAttributeOutcome;
                typedef std::future<ModifyVpcEndPointAttributeOutcome> ModifyVpcEndPointAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpcEndPointAttributeRequest&, ModifyVpcEndPointAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcEndPointAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcEndPointServiceAttributeResponse> ModifyVpcEndPointServiceAttributeOutcome;
                typedef std::future<ModifyVpcEndPointServiceAttributeOutcome> ModifyVpcEndPointServiceAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpcEndPointServiceAttributeRequest&, ModifyVpcEndPointServiceAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcEndPointServiceAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpcEndPointServiceWhiteListResponse> ModifyVpcEndPointServiceWhiteListOutcome;
                typedef std::future<ModifyVpcEndPointServiceWhiteListOutcome> ModifyVpcEndPointServiceWhiteListOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpcEndPointServiceWhiteListRequest&, ModifyVpcEndPointServiceWhiteListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcEndPointServiceWhiteListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpnConnectionAttributeResponse> ModifyVpnConnectionAttributeOutcome;
                typedef std::future<ModifyVpnConnectionAttributeOutcome> ModifyVpnConnectionAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnConnectionAttributeRequest&, ModifyVpnConnectionAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnConnectionAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpnGatewayAttributeResponse> ModifyVpnGatewayAttributeOutcome;
                typedef std::future<ModifyVpnGatewayAttributeOutcome> ModifyVpnGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewayAttributeRequest&, ModifyVpnGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewayAttributeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpnGatewayCcnRoutesResponse> ModifyVpnGatewayCcnRoutesOutcome;
                typedef std::future<ModifyVpnGatewayCcnRoutesOutcome> ModifyVpnGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewayCcnRoutesRequest&, ModifyVpnGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVpnGatewayRoutesResponse> ModifyVpnGatewayRoutesOutcome;
                typedef std::future<ModifyVpnGatewayRoutesOutcome> ModifyVpnGatewayRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewayRoutesRequest&, ModifyVpnGatewayRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewayRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::NotifyRoutesResponse> NotifyRoutesOutcome;
                typedef std::future<NotifyRoutesOutcome> NotifyRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::NotifyRoutesRequest&, NotifyRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> NotifyRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::RefreshDirectConnectGatewayRouteToNatGatewayResponse> RefreshDirectConnectGatewayRouteToNatGatewayOutcome;
                typedef std::future<RefreshDirectConnectGatewayRouteToNatGatewayOutcome> RefreshDirectConnectGatewayRouteToNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RefreshDirectConnectGatewayRouteToNatGatewayRequest&, RefreshDirectConnectGatewayRouteToNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefreshDirectConnectGatewayRouteToNatGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::RejectAttachCcnInstancesResponse> RejectAttachCcnInstancesOutcome;
                typedef std::future<RejectAttachCcnInstancesOutcome> RejectAttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RejectAttachCcnInstancesRequest&, RejectAttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RejectAttachCcnInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseAddressesResponse> ReleaseAddressesOutcome;
                typedef std::future<ReleaseAddressesOutcome> ReleaseAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReleaseAddressesRequest&, ReleaseAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveBandwidthPackageResourcesResponse> RemoveBandwidthPackageResourcesOutcome;
                typedef std::future<RemoveBandwidthPackageResourcesOutcome> RemoveBandwidthPackageResourcesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RemoveBandwidthPackageResourcesRequest&, RemoveBandwidthPackageResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveBandwidthPackageResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewVpnGatewayResponse> RenewVpnGatewayOutcome;
                typedef std::future<RenewVpnGatewayOutcome> RenewVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RenewVpnGatewayRequest&, RenewVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewVpnGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceDirectConnectGatewayCcnRoutesResponse> ReplaceDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<ReplaceDirectConnectGatewayCcnRoutesOutcome> ReplaceDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceDirectConnectGatewayCcnRoutesRequest&, ReplaceDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceRouteTableAssociationResponse> ReplaceRouteTableAssociationOutcome;
                typedef std::future<ReplaceRouteTableAssociationOutcome> ReplaceRouteTableAssociationOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceRouteTableAssociationRequest&, ReplaceRouteTableAssociationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRouteTableAssociationAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceRoutesResponse> ReplaceRoutesOutcome;
                typedef std::future<ReplaceRoutesOutcome> ReplaceRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceRoutesRequest&, ReplaceRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceSecurityGroupPoliciesResponse> ReplaceSecurityGroupPoliciesOutcome;
                typedef std::future<ReplaceSecurityGroupPoliciesOutcome> ReplaceSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceSecurityGroupPoliciesRequest&, ReplaceSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceSecurityGroupPolicyResponse> ReplaceSecurityGroupPolicyOutcome;
                typedef std::future<ReplaceSecurityGroupPolicyOutcome> ReplaceSecurityGroupPolicyOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceSecurityGroupPolicyRequest&, ReplaceSecurityGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceSecurityGroupPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAttachCcnInstancesResponse> ResetAttachCcnInstancesOutcome;
                typedef std::future<ResetAttachCcnInstancesOutcome> ResetAttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetAttachCcnInstancesRequest&, ResetAttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAttachCcnInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetNatGatewayConnectionResponse> ResetNatGatewayConnectionOutcome;
                typedef std::future<ResetNatGatewayConnectionOutcome> ResetNatGatewayConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetNatGatewayConnectionRequest&, ResetNatGatewayConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetNatGatewayConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetRoutesResponse> ResetRoutesOutcome;
                typedef std::future<ResetRoutesOutcome> ResetRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetRoutesRequest&, ResetRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetRoutesAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetVpnConnectionResponse> ResetVpnConnectionOutcome;
                typedef std::future<ResetVpnConnectionOutcome> ResetVpnConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetVpnConnectionRequest&, ResetVpnConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetVpnConnectionAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetVpnGatewayInternetMaxBandwidthResponse> ResetVpnGatewayInternetMaxBandwidthOutcome;
                typedef std::future<ResetVpnGatewayInternetMaxBandwidthOutcome> ResetVpnGatewayInternetMaxBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetVpnGatewayInternetMaxBandwidthRequest&, ResetVpnGatewayInternetMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetVpnGatewayInternetMaxBandwidthAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeSnapshotInstanceResponse> ResumeSnapshotInstanceOutcome;
                typedef std::future<ResumeSnapshotInstanceOutcome> ResumeSnapshotInstanceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResumeSnapshotInstanceRequest&, ResumeSnapshotInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeSnapshotInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ReturnNormalAddressesResponse> ReturnNormalAddressesOutcome;
                typedef std::future<ReturnNormalAddressesOutcome> ReturnNormalAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReturnNormalAddressesRequest&, ReturnNormalAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReturnNormalAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::SetCcnRegionBandwidthLimitsResponse> SetCcnRegionBandwidthLimitsOutcome;
                typedef std::future<SetCcnRegionBandwidthLimitsOutcome> SetCcnRegionBandwidthLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::SetCcnRegionBandwidthLimitsRequest&, SetCcnRegionBandwidthLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetCcnRegionBandwidthLimitsAsyncHandler;
                typedef Outcome<Core::Error, Model::SetVpnGatewaysRenewFlagResponse> SetVpnGatewaysRenewFlagOutcome;
                typedef std::future<SetVpnGatewaysRenewFlagOutcome> SetVpnGatewaysRenewFlagOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::SetVpnGatewaysRenewFlagRequest&, SetVpnGatewaysRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetVpnGatewaysRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::TransformAddressResponse> TransformAddressOutcome;
                typedef std::future<TransformAddressOutcome> TransformAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::TransformAddressRequest&, TransformAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransformAddressAsyncHandler;
                typedef Outcome<Core::Error, Model::UnassignIpv6AddressesResponse> UnassignIpv6AddressesOutcome;
                typedef std::future<UnassignIpv6AddressesOutcome> UnassignIpv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignIpv6AddressesRequest&, UnassignIpv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignIpv6AddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::UnassignIpv6CidrBlockResponse> UnassignIpv6CidrBlockOutcome;
                typedef std::future<UnassignIpv6CidrBlockOutcome> UnassignIpv6CidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignIpv6CidrBlockRequest&, UnassignIpv6CidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignIpv6CidrBlockAsyncHandler;
                typedef Outcome<Core::Error, Model::UnassignIpv6SubnetCidrBlockResponse> UnassignIpv6SubnetCidrBlockOutcome;
                typedef std::future<UnassignIpv6SubnetCidrBlockOutcome> UnassignIpv6SubnetCidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignIpv6SubnetCidrBlockRequest&, UnassignIpv6SubnetCidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignIpv6SubnetCidrBlockAsyncHandler;
                typedef Outcome<Core::Error, Model::UnassignPrivateIpAddressesResponse> UnassignPrivateIpAddressesOutcome;
                typedef std::future<UnassignPrivateIpAddressesOutcome> UnassignPrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignPrivateIpAddressesRequest&, UnassignPrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignPrivateIpAddressesAsyncHandler;
                typedef Outcome<Core::Error, Model::WithdrawNotifyRoutesResponse> WithdrawNotifyRoutesOutcome;
                typedef std::future<WithdrawNotifyRoutesOutcome> WithdrawNotifyRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::WithdrawNotifyRoutesRequest&, WithdrawNotifyRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> WithdrawNotifyRoutesAsyncHandler;



                /**
                 *This API (AcceptAttachCcnInstances) is used to associate instances across accounts. Cloud Connect Network (CCN) owners accept and agree to the operations.
                 * @param req AcceptAttachCcnInstancesRequest
                 * @return AcceptAttachCcnInstancesOutcome
                 */
                AcceptAttachCcnInstancesOutcome AcceptAttachCcnInstances(const Model::AcceptAttachCcnInstancesRequest &request);
                void AcceptAttachCcnInstancesAsync(const Model::AcceptAttachCcnInstancesRequest& request, const AcceptAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcceptAttachCcnInstancesOutcomeCallable AcceptAttachCcnInstancesCallable(const Model::AcceptAttachCcnInstancesRequest& request);

                /**
                 *This API is used to add resources to a bandwidth package, including [Elastic IP](https://intl.cloud.tencent.com/document/product/213/1941?from_cn_redirect=1), [Cloud Load Balancer](https://intl.cloud.tencent.com/document/product/214/517?from_cn_redirect=1), and so on.
                 * @param req AddBandwidthPackageResourcesRequest
                 * @return AddBandwidthPackageResourcesOutcome
                 */
                AddBandwidthPackageResourcesOutcome AddBandwidthPackageResources(const Model::AddBandwidthPackageResourcesRequest &request);
                void AddBandwidthPackageResourcesAsync(const Model::AddBandwidthPackageResourcesRequest& request, const AddBandwidthPackageResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddBandwidthPackageResourcesOutcomeCallable AddBandwidthPackageResourcesCallable(const Model::AddBandwidthPackageResourcesRequest& request);

                /**
                 *This API is used to change the public IP of a CVM or the EIP of the associated bandwidth package.
                 * @param req AdjustPublicAddressRequest
                 * @return AdjustPublicAddressOutcome
                 */
                AdjustPublicAddressOutcome AdjustPublicAddress(const Model::AdjustPublicAddressRequest &request);
                void AdjustPublicAddressAsync(const Model::AdjustPublicAddressRequest& request, const AdjustPublicAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AdjustPublicAddressOutcomeCallable AdjustPublicAddressCallable(const Model::AdjustPublicAddressRequest& request);

                /**
                 *This API is used to apply for one or more [Elastic IP Addresses](https://intl.cloud.tencent.com/document/product/213/1941?from_cn_redirect=1) (EIPs for short).
* An EIP is a static IP address that is dedicated for dynamic cloud computing. You can quickly re-map an EIP to another instance under your account to protect against instance failures.
* Your EIP is associated with your Tencent Cloud account rather than an instance. It remains associated with your Tencent Cloud account until you choose to explicitly release it or your account is in arrears for more than 24 hours.
* The maximum number of EIPs that can be applied for a Tencent Cloud account in each region is restricted. For more information, see [EIP Product Introduction](https://intl.cloud.tencent.com/document/product/213/5733?from_cn_redirect=1). You can get the quota information through the DescribeAddressQuota API.
                 * @param req AllocateAddressesRequest
                 * @return AllocateAddressesOutcome
                 */
                AllocateAddressesOutcome AllocateAddresses(const Model::AllocateAddressesRequest &request);
                void AllocateAddressesAsync(const Model::AllocateAddressesRequest& request, const AllocateAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateAddressesOutcomeCallable AllocateAddressesCallable(const Model::AllocateAddressesRequest& request);

                /**
                 *This API is used to apply for an IPv6 address for the ENI. <br />
This API is completed asynchronously. If you need to query the execution result of an async task, please use the `RequestId` returned by this API to poll the `DescribeVpcTaskResult` API.
* The number of IPs bound with an ENI is limited. For more information, see <a href="/document/product/576/18527">ENI Use Limits</a>.
* You can apply for a specified IPv6 address. Currently, the IPv6 address can only be used as a secondary IP, instead of the primary IP.
* The address must be an idle IP in the subnet to which the ENI belongs.
* When applying for one or more secondary IPv6 addresses for an ENI, the API will return the specified number of secondary IPv6 addresses in the subnet range where the ENI is located.
                 * @param req AssignIpv6AddressesRequest
                 * @return AssignIpv6AddressesOutcome
                 */
                AssignIpv6AddressesOutcome AssignIpv6Addresses(const Model::AssignIpv6AddressesRequest &request);
                void AssignIpv6AddressesAsync(const Model::AssignIpv6AddressesRequest& request, const AssignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignIpv6AddressesOutcomeCallable AssignIpv6AddressesCallable(const Model::AssignIpv6AddressesRequest& request);

                /**
                 *This API is used to assign IPv6 ranges.
* To use this API, you must already have a VPC instance. If you do not have a VPC instance yet, use the <a href="https://intl.cloud.tencent.com/document/api/215/15774?from_cn_redirect=1" title="CreateVpc" target="_blank">CreateVpc</a> API to create one.
* Each VPC can apply for only one IPv6 range.
                 * @param req AssignIpv6CidrBlockRequest
                 * @return AssignIpv6CidrBlockOutcome
                 */
                AssignIpv6CidrBlockOutcome AssignIpv6CidrBlock(const Model::AssignIpv6CidrBlockRequest &request);
                void AssignIpv6CidrBlockAsync(const Model::AssignIpv6CidrBlockRequest& request, const AssignIpv6CidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignIpv6CidrBlockOutcomeCallable AssignIpv6CidrBlockCallable(const Model::AssignIpv6CidrBlockRequest& request);

                /**
                 *This API (AssignIpv6SubnetCidrBlock) is used to assign IPv6 subnet IP ranges.
* To assign an `IPv6` IP range to a subnet, the `VPC` that the subnet belongs to should have obtained the `IPv6` IP range. If this has not been assigned, use the `AssignIpv6CidrBlock` API to assign an `IPv6` IP range to the `VPC` to which the subnet belongs. Otherwise, the `IPv6` subnet IP range cannot be assigned.
* Each subnet can only be assigned one IPv6 IP range.
                 * @param req AssignIpv6SubnetCidrBlockRequest
                 * @return AssignIpv6SubnetCidrBlockOutcome
                 */
                AssignIpv6SubnetCidrBlockOutcome AssignIpv6SubnetCidrBlock(const Model::AssignIpv6SubnetCidrBlockRequest &request);
                void AssignIpv6SubnetCidrBlockAsync(const Model::AssignIpv6SubnetCidrBlockRequest& request, const AssignIpv6SubnetCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignIpv6SubnetCidrBlockOutcomeCallable AssignIpv6SubnetCidrBlockCallable(const Model::AssignIpv6SubnetCidrBlockRequest& request);

                /**
                 *This API is used to apply for private IPs for an ENI.
* An ENI can only be bound with a limited number of IP addresses. For more information about resource limits, see <a href="/document/product/576/18527">ENI Use Limits</a>.
* You can apply for a specified private IP. It cannot be a primary IP because the primary IP already exists and cannot be modified. The private IP address must be an idle IP in the subnet to which the ENI belongs.
* You can apply for more than one secondary private IP on the ENI. The API will return the specified number of secondary private IPs in the subnet IP range.
>?This API is async. You can call the [`DescribeVpcTaskResult`](https://intl.cloud.tencent.com/document/api/215/59037?from_cn_redirect=1) API to query the task result. When the task is completed, you can continue other tasks.
>
                 * @param req AssignPrivateIpAddressesRequest
                 * @return AssignPrivateIpAddressesOutcome
                 */
                AssignPrivateIpAddressesOutcome AssignPrivateIpAddresses(const Model::AssignPrivateIpAddressesRequest &request);
                void AssignPrivateIpAddressesAsync(const Model::AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignPrivateIpAddressesOutcomeCallable AssignPrivateIpAddressesCallable(const Model::AssignPrivateIpAddressesRequest& request);

                /**
                 *This API is used to bind an [Elastic IP](https://intl.cloud.tencent.com/document/product/213/1941?from_cn_redirect=1) (EIP for short) to the specified private IP of an instance or ENI.
* Binding an EIP to a CVM instance is actually binding the EIP to the primary private IP of the primary ENI on the CVM instance.
* When an EIP is bound, the public IP previously bound to the CVM instance will be unbound and released automatically.
* To bind another EIP to the private IP of the specified ENI, you must first unbind the EIP.
* To bind an EIP to a NAT Gateway, use the API [AssociateNatGatewayAddress](https://intl.cloud.tencent.com/document/product/215/36722?from_cn_redirect=1).
* An EIP cannot be bound if it’s overdue or blocked
* Only EIP in the `UNBIND` status can be bound.
                 * @param req AssociateAddressRequest
                 * @return AssociateAddressOutcome
                 */
                AssociateAddressOutcome AssociateAddress(const Model::AssociateAddressRequest &request);
                void AssociateAddressAsync(const Model::AssociateAddressRequest& request, const AssociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateAddressOutcomeCallable AssociateAddressCallable(const Model::AssociateAddressRequest& request);

                /**
                 *This API is used to bind a direct connect gateway with a NAT gateway,  and direct its default route to the NAT Gateway.
                 * @param req AssociateDirectConnectGatewayNatGatewayRequest
                 * @return AssociateDirectConnectGatewayNatGatewayOutcome
                 */
                AssociateDirectConnectGatewayNatGatewayOutcome AssociateDirectConnectGatewayNatGateway(const Model::AssociateDirectConnectGatewayNatGatewayRequest &request);
                void AssociateDirectConnectGatewayNatGatewayAsync(const Model::AssociateDirectConnectGatewayNatGatewayRequest& request, const AssociateDirectConnectGatewayNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateDirectConnectGatewayNatGatewayOutcomeCallable AssociateDirectConnectGatewayNatGatewayCallable(const Model::AssociateDirectConnectGatewayNatGatewayRequest& request);

                /**
                 *This API is used to bind an EIP to a NAT gateway.
                 * @param req AssociateNatGatewayAddressRequest
                 * @return AssociateNatGatewayAddressOutcome
                 */
                AssociateNatGatewayAddressOutcome AssociateNatGatewayAddress(const Model::AssociateNatGatewayAddressRequest &request);
                void AssociateNatGatewayAddressAsync(const Model::AssociateNatGatewayAddressRequest& request, const AssociateNatGatewayAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateNatGatewayAddressOutcomeCallable AssociateNatGatewayAddressCallable(const Model::AssociateNatGatewayAddressRequest& request);

                /**
                 *This API is used to associate a network ACL with subnets in a VPC instance.
                 * @param req AssociateNetworkAclSubnetsRequest
                 * @return AssociateNetworkAclSubnetsOutcome
                 */
                AssociateNetworkAclSubnetsOutcome AssociateNetworkAclSubnets(const Model::AssociateNetworkAclSubnetsRequest &request);
                void AssociateNetworkAclSubnetsAsync(const Model::AssociateNetworkAclSubnetsRequest& request, const AssociateNetworkAclSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateNetworkAclSubnetsOutcomeCallable AssociateNetworkAclSubnetsCallable(const Model::AssociateNetworkAclSubnetsRequest& request);

                /**
                 *This API (AssociateNetworkInterfaceSecurityGroups) is used to attach a security group to an ENI.
                 * @param req AssociateNetworkInterfaceSecurityGroupsRequest
                 * @return AssociateNetworkInterfaceSecurityGroupsOutcome
                 */
                AssociateNetworkInterfaceSecurityGroupsOutcome AssociateNetworkInterfaceSecurityGroups(const Model::AssociateNetworkInterfaceSecurityGroupsRequest &request);
                void AssociateNetworkInterfaceSecurityGroupsAsync(const Model::AssociateNetworkInterfaceSecurityGroupsRequest& request, const AssociateNetworkInterfaceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateNetworkInterfaceSecurityGroupsOutcomeCallable AssociateNetworkInterfaceSecurityGroupsCallable(const Model::AssociateNetworkInterfaceSecurityGroupsRequest& request);

                /**
                 *This API is used to add a network instance to a CCN instance. Network instances include VPCs and Direct Connect gateways. <br />
The number of network instances that each CCN can be associated with is limited. For more information, see the product documentation. If you need to associate more instances, please submit a ticket.
                 * @param req AttachCcnInstancesRequest
                 * @return AttachCcnInstancesOutcome
                 */
                AttachCcnInstancesOutcome AttachCcnInstances(const Model::AttachCcnInstancesRequest &request);
                void AttachCcnInstancesAsync(const Model::AttachCcnInstancesRequest& request, const AttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachCcnInstancesOutcomeCallable AttachCcnInstancesCallable(const Model::AttachCcnInstancesRequest& request);

                /**
                 *This API is used to create a Classiclink between a VPC instance and a classic network device.
* The VPC instance and the classic network device must be in the same region.
* For differences between VPC and the classic network, see <a href="https://intl.cloud.tencent.com/document/product/215/30720?from_cn_redirect=1">VPC and Classic Network</a>.
>?This API is async. You can call the [`DescribeVpcTaskResult`](https://intl.cloud.tencent.com/document/api/215/59037?from_cn_redirect=1) API to query the task result. When the task is completed, you can continue other tasks.
>
                 * @param req AttachClassicLinkVpcRequest
                 * @return AttachClassicLinkVpcOutcome
                 */
                AttachClassicLinkVpcOutcome AttachClassicLinkVpc(const Model::AttachClassicLinkVpcRequest &request);
                void AttachClassicLinkVpcAsync(const Model::AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachClassicLinkVpcOutcomeCallable AttachClassicLinkVpcCallable(const Model::AttachClassicLinkVpcRequest& request);

                /**
                 *This API is used to bind an ENI to a CVM.
* An ENI must be bound with one security group at least. To bind it, see <a href="https://intl.cloud.tencent.com/document/product/215/43132?from_cn_redirect=1">AssociateNetworkInterfaceSecurityGroups</a>.
* One CVM can be bound with multiple ENIs, but only one can be the primary ENI. For more information about the limits, see <a href="https://intl.cloud.tencent.com/document/product/576/18527?from_cn_redirect=1">ENI Use Limits</a>.
* An ENI can only be bound to one CVM.
* Only the running or shutdown CVMs can be bound with ENIs. For more information about the CVM status, see <a href="https://intl.cloud.tencent.com/document/api/213/9452?from_cn_redirect=1#InstanceStatus">InstanceStatus</a> in the Data Types.
* An ENI can only be bound to a VPC-based CVM under the same availability zone as the ENI subnet.

This API is completed asynchronously. If you need to query the execution result of an async task, please use the `RequestId` returned by this API to poll the `DescribeVpcTaskResult` API.
                 * @param req AttachNetworkInterfaceRequest
                 * @return AttachNetworkInterfaceOutcome
                 */
                AttachNetworkInterfaceOutcome AttachNetworkInterface(const Model::AttachNetworkInterfaceRequest &request);
                void AttachNetworkInterfaceAsync(const Model::AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachNetworkInterfaceOutcomeCallable AttachNetworkInterfaceCallable(const Model::AttachNetworkInterfaceRequest& request);

                /**
                 *This API is used to associate a snapshot policy with specified instances.
                 * @param req AttachSnapshotInstancesRequest
                 * @return AttachSnapshotInstancesOutcome
                 */
                AttachSnapshotInstancesOutcome AttachSnapshotInstances(const Model::AttachSnapshotInstancesRequest &request);
                void AttachSnapshotInstancesAsync(const Model::AttachSnapshotInstancesRequest& request, const AttachSnapshotInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachSnapshotInstancesOutcomeCallable AttachSnapshotInstancesCallable(const Model::AttachSnapshotInstancesRequest& request);

                /**
                 *This API is used by the service provider to perform a compliance audit.
* This API is only provided for service providers to audit compliance review requests received. Tencent Cloud will verify the identity of the service provider by the `APPID`. 
* The status of the review request can be changed between `APPROVED` and `DENY`.
                 * @param req AuditCrossBorderComplianceRequest
                 * @return AuditCrossBorderComplianceOutcome
                 */
                AuditCrossBorderComplianceOutcome AuditCrossBorderCompliance(const Model::AuditCrossBorderComplianceRequest &request);
                void AuditCrossBorderComplianceAsync(const Model::AuditCrossBorderComplianceRequest& request, const AuditCrossBorderComplianceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AuditCrossBorderComplianceOutcomeCallable AuditCrossBorderComplianceCallable(const Model::AuditCrossBorderComplianceRequest& request);

                /**
                 *This API is used to check whether the secondary CIDR block conflicts with existing routes, peering connections (peer VPC CIDR blocks), and other resources. 
* Check whether the secondary CIDR block overlaps with the primary/secondary CIDR block of the current VPC.
* Check whether the secondary CIDR block overlaps with the routing destination of the current VPC.
* If the current VPC is used in a peering connection, check whether the secondary CIDR block overlaps with the primary/secondary CIDR block of the peer VPC.
                 * @param req CheckAssistantCidrRequest
                 * @return CheckAssistantCidrOutcome
                 */
                CheckAssistantCidrOutcome CheckAssistantCidr(const Model::CheckAssistantCidrRequest &request);
                void CheckAssistantCidrAsync(const Model::CheckAssistantCidrRequest& request, const CheckAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAssistantCidrOutcomeCallable CheckAssistantCidrCallable(const Model::CheckAssistantCidrRequest& request);

                /**
                 *This API is used to verify the network detection status.
                 * @param req CheckNetDetectStateRequest
                 * @return CheckNetDetectStateOutcome
                 */
                CheckNetDetectStateOutcome CheckNetDetectState(const Model::CheckNetDetectStateRequest &request);
                void CheckNetDetectStateAsync(const Model::CheckNetDetectStateRequest& request, const CheckNetDetectStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckNetDetectStateOutcomeCallable CheckNetDetectStateCallable(const Model::CheckNetDetectStateRequest& request);

                /**
                 *This API is used to create a security group with the same rule configurations as an existing security group. The cloning only copies the security group and its rules, but not the security group tags.
                 * @param req CloneSecurityGroupRequest
                 * @return CloneSecurityGroupOutcome
                 */
                CloneSecurityGroupOutcome CloneSecurityGroup(const Model::CloneSecurityGroupRequest &request);
                void CloneSecurityGroupAsync(const Model::CloneSecurityGroupRequest& request, const CloneSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloneSecurityGroupOutcomeCallable CloneSecurityGroupCallable(const Model::CloneSecurityGroupRequest& request);

                /**
                 *This API is used to create an IP address template.
                 * @param req CreateAddressTemplateRequest
                 * @return CreateAddressTemplateOutcome
                 */
                CreateAddressTemplateOutcome CreateAddressTemplate(const Model::CreateAddressTemplateRequest &request);
                void CreateAddressTemplateAsync(const Model::CreateAddressTemplateRequest& request, const CreateAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAddressTemplateOutcomeCallable CreateAddressTemplateCallable(const Model::CreateAddressTemplateRequest& request);

                /**
                 *This API is used to create an IP address template group.
                 * @param req CreateAddressTemplateGroupRequest
                 * @return CreateAddressTemplateGroupOutcome
                 */
                CreateAddressTemplateGroupOutcome CreateAddressTemplateGroup(const Model::CreateAddressTemplateGroupRequest &request);
                void CreateAddressTemplateGroupAsync(const Model::CreateAddressTemplateGroupRequest& request, const CreateAddressTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAddressTemplateGroupOutcomeCallable CreateAddressTemplateGroupCallable(const Model::CreateAddressTemplateGroupRequest& request);

                /**
                 *This API is used to create an ENI and bind it to a CVM.
* You can specify private IP addresses and a primary IP when creating an ENI. The specified private IP must be idle and in the same subnet as the ENI.
* When creating an ENI, you can specify the number of private IPs that you want to apply for. The system will randomly generate private IP addresses.
* The number of IPs bound with an ENI is limited. For more information, see <a href="/document/product/576/18527">ENI Use Limits</a>.
* You can bind an existing security group when creating an ENI.
* You can bind a tag when creating an ENI. The tag list in the response indicates the tags that have been successfully added.
>?This API is async. You can call the [`DescribeVpcTaskResult`](https://intl.cloud.tencent.com/document/api/215/59037?from_cn_redirect=1) API to query the task result. When the task is completed, you can continue other tasks.
>
                 * @param req CreateAndAttachNetworkInterfaceRequest
                 * @return CreateAndAttachNetworkInterfaceOutcome
                 */
                CreateAndAttachNetworkInterfaceOutcome CreateAndAttachNetworkInterface(const Model::CreateAndAttachNetworkInterfaceRequest &request);
                void CreateAndAttachNetworkInterfaceAsync(const Model::CreateAndAttachNetworkInterfaceRequest& request, const CreateAndAttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndAttachNetworkInterfaceOutcomeCallable CreateAndAttachNetworkInterfaceCallable(const Model::CreateAndAttachNetworkInterfaceRequest& request);

                /**
                 *This API is used to batch create secondary CIDR blocks.
                 * @param req CreateAssistantCidrRequest
                 * @return CreateAssistantCidrOutcome
                 */
                CreateAssistantCidrOutcome CreateAssistantCidr(const Model::CreateAssistantCidrRequest &request);
                void CreateAssistantCidrAsync(const Model::CreateAssistantCidrRequest& request, const CreateAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssistantCidrOutcomeCallable CreateAssistantCidrCallable(const Model::CreateAssistantCidrRequest& request);

                /**
                 *This API is used to create a [device bandwidth package](https://intl.cloud.tencent.com/document/product/684/15245?from_cn_redirect=1#bwptype) or an [IP bandwidth package](https://intl.cloud.tencent.com/document/product/684/15245?from_cn_redirect=1#bwptype).
                 * @param req CreateBandwidthPackageRequest
                 * @return CreateBandwidthPackageOutcome
                 */
                CreateBandwidthPackageOutcome CreateBandwidthPackage(const Model::CreateBandwidthPackageRequest &request);
                void CreateBandwidthPackageAsync(const Model::CreateBandwidthPackageRequest& request, const CreateBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBandwidthPackageOutcomeCallable CreateBandwidthPackageCallable(const Model::CreateBandwidthPackageRequest& request);

                /**
                 *This API is used to create a CCN instance.
* You can add tags to a CCN instance upon the creation. The tags are added successfully if they are listed in the response.
* There is a quota of CCN instances for each account. For more information, see product documentation. To increase the quota, please submit a ticket.
                 * @param req CreateCcnRequest
                 * @return CreateCcnOutcome
                 */
                CreateCcnOutcome CreateCcn(const Model::CreateCcnRequest &request);
                void CreateCcnAsync(const Model::CreateCcnRequest& request, const CreateCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCcnOutcomeCallable CreateCcnCallable(const Model::CreateCcnRequest& request);

                /**
                 *This API (CreateCustomerGateway) is used to create customer gateways.
                 * @param req CreateCustomerGatewayRequest
                 * @return CreateCustomerGatewayOutcome
                 */
                CreateCustomerGatewayOutcome CreateCustomerGateway(const Model::CreateCustomerGatewayRequest &request);
                void CreateCustomerGatewayAsync(const Model::CreateCustomerGatewayRequest& request, const CreateCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomerGatewayOutcomeCallable CreateCustomerGatewayCallable(const Model::CreateCustomerGatewayRequest& request);

                /**
                 *This API is used to create a VPC with default settings.

To create a VPC with custom settings, such as VPC name, IP range, subnet IP range, and subnet availability zone, use `CreateVpc` instead.

This API may not create a default VPC. It depends on the network attributes (`DescribeAccountAttributes`) of your account.
* If both basic network and VPC are supported, the returned `VpcId` is 0.
* If only VPC is supported, the default VPC information is returned.

You can also use the `Force` parameter to forcibly return a default VPC.
                 * @param req CreateDefaultVpcRequest
                 * @return CreateDefaultVpcOutcome
                 */
                CreateDefaultVpcOutcome CreateDefaultVpc(const Model::CreateDefaultVpcRequest &request);
                void CreateDefaultVpcAsync(const Model::CreateDefaultVpcRequest& request, const CreateDefaultVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDefaultVpcOutcomeCallable CreateDefaultVpcCallable(const Model::CreateDefaultVpcRequest& request);

                /**
                 *This API is used to create a direct connect gateway.
                 * @param req CreateDirectConnectGatewayRequest
                 * @return CreateDirectConnectGatewayOutcome
                 */
                CreateDirectConnectGatewayOutcome CreateDirectConnectGateway(const Model::CreateDirectConnectGatewayRequest &request);
                void CreateDirectConnectGatewayAsync(const Model::CreateDirectConnectGatewayRequest& request, const CreateDirectConnectGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDirectConnectGatewayOutcomeCallable CreateDirectConnectGatewayCallable(const Model::CreateDirectConnectGatewayRequest& request);

                /**
                 *This API (CreateDirectConnectGatewayCcnRoutes) is used to create the CCN route (IDC IP range) of a Direct Connect gateway.
                 * @param req CreateDirectConnectGatewayCcnRoutesRequest
                 * @return CreateDirectConnectGatewayCcnRoutesOutcome
                 */
                CreateDirectConnectGatewayCcnRoutesOutcome CreateDirectConnectGatewayCcnRoutes(const Model::CreateDirectConnectGatewayCcnRoutesRequest &request);
                void CreateDirectConnectGatewayCcnRoutesAsync(const Model::CreateDirectConnectGatewayCcnRoutesRequest& request, const CreateDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDirectConnectGatewayCcnRoutesOutcomeCallable CreateDirectConnectGatewayCcnRoutesCallable(const Model::CreateDirectConnectGatewayCcnRoutesRequest& request);

                /**
                 *This API is used to create a flow log.
                 * @param req CreateFlowLogRequest
                 * @return CreateFlowLogOutcome
                 */
                CreateFlowLogOutcome CreateFlowLog(const Model::CreateFlowLogRequest &request);
                void CreateFlowLogAsync(const Model::CreateFlowLogRequest& request, const CreateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFlowLogOutcomeCallable CreateFlowLogCallable(const Model::CreateFlowLogRequest& request);

                /**
                 *This API is used to create a highly available virtual IP (HAVIP).
                 * @param req CreateHaVipRequest
                 * @return CreateHaVipOutcome
                 */
                CreateHaVipOutcome CreateHaVip(const Model::CreateHaVipRequest &request);
                void CreateHaVipAsync(const Model::CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHaVipOutcomeCallable CreateHaVipCallable(const Model::CreateHaVipRequest& request);

                /**
                 *This API is used to create a local gateway for a CDC instance.
                 * @param req CreateLocalGatewayRequest
                 * @return CreateLocalGatewayOutcome
                 */
                CreateLocalGatewayOutcome CreateLocalGateway(const Model::CreateLocalGatewayRequest &request);
                void CreateLocalGatewayAsync(const Model::CreateLocalGatewayRequest& request, const CreateLocalGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLocalGatewayOutcomeCallable CreateLocalGatewayCallable(const Model::CreateLocalGatewayRequest& request);

                /**
                 *This API is used to create a NAT Gateway.
Before taking actions on a NAT gateway, ensure that it has been successfully created, namely, the `State` field in the response of the `DescribeNatGateway` API is `AVAILABLE`.
                 * @param req CreateNatGatewayRequest
                 * @return CreateNatGatewayOutcome
                 */
                CreateNatGatewayOutcome CreateNatGateway(const Model::CreateNatGatewayRequest &request);
                void CreateNatGatewayAsync(const Model::CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatGatewayOutcomeCallable CreateNatGatewayCallable(const Model::CreateNatGatewayRequest& request);

                /**
                 *This API is used to create the port forwarding rules of a NAT gateway.
                 * @param req CreateNatGatewayDestinationIpPortTranslationNatRuleRequest
                 * @return CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome
                 */
                CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome CreateNatGatewayDestinationIpPortTranslationNatRule(const Model::CreateNatGatewayDestinationIpPortTranslationNatRuleRequest &request);
                void CreateNatGatewayDestinationIpPortTranslationNatRuleAsync(const Model::CreateNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const CreateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable CreateNatGatewayDestinationIpPortTranslationNatRuleCallable(const Model::CreateNatGatewayDestinationIpPortTranslationNatRuleRequest& request);

                /**
                 *This API is used to create SNAT rules for a NAT gateway.
                 * @param req CreateNatGatewaySourceIpTranslationNatRuleRequest
                 * @return CreateNatGatewaySourceIpTranslationNatRuleOutcome
                 */
                CreateNatGatewaySourceIpTranslationNatRuleOutcome CreateNatGatewaySourceIpTranslationNatRule(const Model::CreateNatGatewaySourceIpTranslationNatRuleRequest &request);
                void CreateNatGatewaySourceIpTranslationNatRuleAsync(const Model::CreateNatGatewaySourceIpTranslationNatRuleRequest& request, const CreateNatGatewaySourceIpTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatGatewaySourceIpTranslationNatRuleOutcomeCallable CreateNatGatewaySourceIpTranslationNatRuleCallable(const Model::CreateNatGatewaySourceIpTranslationNatRuleRequest& request);

                /**
                 *This API is used to create a network probe.
                 * @param req CreateNetDetectRequest
                 * @return CreateNetDetectOutcome
                 */
                CreateNetDetectOutcome CreateNetDetect(const Model::CreateNetDetectRequest &request);
                void CreateNetDetectAsync(const Model::CreateNetDetectRequest& request, const CreateNetDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetDetectOutcomeCallable CreateNetDetectCallable(const Model::CreateNetDetectRequest& request);

                /**
                 *This API is used to create a <a href="https://intl.cloud.tencent.com/document/product/215/20088?from_cn_redirect=1">network ACL</a>.
* The inbound and outbound rules for a new network ACL are "Deny All" by default. You need to call `ModifyNetworkAclEntries` to set rules for the new network ACL as needed.
                 * @param req CreateNetworkAclRequest
                 * @return CreateNetworkAclOutcome
                 */
                CreateNetworkAclOutcome CreateNetworkAcl(const Model::CreateNetworkAclRequest &request);
                void CreateNetworkAclAsync(const Model::CreateNetworkAclRequest& request, const CreateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkAclOutcomeCallable CreateNetworkAclCallable(const Model::CreateNetworkAclRequest& request);

                /**
                 *This API is used to add one or more in/outbound rules of the network ACL quintuple.
                 * @param req CreateNetworkAclQuintupleEntriesRequest
                 * @return CreateNetworkAclQuintupleEntriesOutcome
                 */
                CreateNetworkAclQuintupleEntriesOutcome CreateNetworkAclQuintupleEntries(const Model::CreateNetworkAclQuintupleEntriesRequest &request);
                void CreateNetworkAclQuintupleEntriesAsync(const Model::CreateNetworkAclQuintupleEntriesRequest& request, const CreateNetworkAclQuintupleEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkAclQuintupleEntriesOutcomeCallable CreateNetworkAclQuintupleEntriesCallable(const Model::CreateNetworkAclQuintupleEntriesRequest& request);

                /**
                 *This API is used to create an ENI.
* You can specify private IP addresses and a primary IP when creating an ENI. The specified private IP must be in the same subnet as the ENI and is not occupied.
* When creating an ENI, you can specify the number of private IP addresses that you want to apply for. The system will randomly generate private IP addresses.
* An ENI can only be bound with a limited number of IP addresses. For more information about resource limits, see <a href="/document/product/576/18527">ENI Use Limits</a>.
* You can bind an existing security group when creating an ENI.
* You can bind a tag when creating an ENI. The tag list in the response indicates the tags that have been successfully added.
>?This API is async. You can call the [`DescribeVpcTaskResult`](https://intl.cloud.tencent.com/document/api/215/59037?from_cn_redirect=1) API to query the task result. When the task is completed, you can continue other tasks.
>
                 * @param req CreateNetworkInterfaceRequest
                 * @return CreateNetworkInterfaceOutcome
                 */
                CreateNetworkInterfaceOutcome CreateNetworkInterface(const Model::CreateNetworkInterfaceRequest &request);
                void CreateNetworkInterfaceAsync(const Model::CreateNetworkInterfaceRequest& request, const CreateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkInterfaceOutcomeCallable CreateNetworkInterfaceCallable(const Model::CreateNetworkInterfaceRequest& request);

                /**
                 *This API is used to create a route table.
* After the VPC instance has been created, the system creates a default route table with which all newly created subnets will be associated. By default, you can use this route table to manage your routing policies. If you have multiple routing policies, you can call the API for creating route tables to create more route tables to manage these routing policies.
* You can bind a tag when creating a route table. The tag list in the response indicates the tags that have been successfully added.
                 * @param req CreateRouteTableRequest
                 * @return CreateRouteTableOutcome
                 */
                CreateRouteTableOutcome CreateRouteTable(const Model::CreateRouteTableRequest &request);
                void CreateRouteTableAsync(const Model::CreateRouteTableRequest& request, const CreateRouteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRouteTableOutcomeCallable CreateRouteTableCallable(const Model::CreateRouteTableRequest& request);

                /**
                 *This API is used to create routes. 
* You can batch add routes to a specified route table.
                 * @param req CreateRoutesRequest
                 * @return CreateRoutesOutcome
                 */
                CreateRoutesOutcome CreateRoutes(const Model::CreateRoutesRequest &request);
                void CreateRoutesAsync(const Model::CreateRoutesRequest& request, const CreateRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoutesOutcomeCallable CreateRoutesCallable(const Model::CreateRoutesRequest& request);

                /**
                 *This API is used to create a security group (SecurityGroup).
* Note the <a href="https://intl.cloud.tencent.com/document/product/213/12453?from_cn_redirect=1">maximum number of security groups</a> per project in each region under each account.
* Both the inbound and outbound rules for a newly created security group are "Deny All" by default. You need to call CreateSecurityGroupPolicies to set security group rules based on your needs.
* You can bind a tag when creating a security group. The tag list in the response indicates the tags that have been successfully added.
                 * @param req CreateSecurityGroupRequest
                 * @return CreateSecurityGroupOutcome
                 */
                CreateSecurityGroupOutcome CreateSecurityGroup(const Model::CreateSecurityGroupRequest &request);
                void CreateSecurityGroupAsync(const Model::CreateSecurityGroupRequest& request, const CreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupOutcomeCallable CreateSecurityGroupCallable(const Model::CreateSecurityGroupRequest& request);

                /**
                 *This API is used to create security group policies (`SecurityGroupPolicy`).

For parameters of `SecurityGroupPolicySet`,
<ul>
<li>`Version`: The version number of a security group policy, which automatically increases by one each time you update the security policy, to prevent expiration of the updated routing policies. If it is left empty, any conflicts will be ignored.</li>
<li>When creating the `Egress` and `Ingress` polices,<ul>
<li>`Protocol`: Allows `TCP`, `UDP`, `ICMP`, `ICMPV6`, `GRE` and `ALL`.</li>
<li>`CidrBlock`: For the classic network, the `CidrBlock` can contain private IPs of Tencent Cloud resources that are not under your account. It does not mean that you can access these devices. The network isolation policies between tenants take priority over the private network policies in security groups.</li>
<li>`Ipv6CidrBlock`: For the classic network, `Ipv6CidrBlock` can contain private IPv6 addresses of Tencent Cloud resources that are not under your account. It does not mean that you can access these devices. The network isolation policies between tenants take priority over the private network policies in security groups.</li>
<li>`SecurityGroupId`: ID of the security group to create policies. </li>
<li>`Port`: A single port (“80”) or a port range ("8000-8010"). This parameter is only available when `Protocol` is `TCP` or `UDP`.</li>
<li>`Action`: `ACCEPT` or `DROP`.</li>
<li><code>CidrBlock</code>, <code>Ipv6CidrBlock</code>, <code>SecurityGroupId</code>, and <code>AddressTemplate</code> are mutually exclusive. <code>Protocol</code> + <code>Port</code> and <code>ServiceTemplate</code> are mutually exclusive. <code>IPv6CidrBlock</code> and <code>ICMP</code> are mutually exclusive; to use them, enter <code>ICMPV6</code>.</li>
<li>You can only create policies in one direction in each request. To specify the `PolicyIndex` parameter, use the same index number in policies. If you want to insert a rule before the first rule, enter 0; if you want to add a rule after the last rule, leave it empty.</li>
</ul></li></ul>
                 * @param req CreateSecurityGroupPoliciesRequest
                 * @return CreateSecurityGroupPoliciesOutcome
                 */
                CreateSecurityGroupPoliciesOutcome CreateSecurityGroupPolicies(const Model::CreateSecurityGroupPoliciesRequest &request);
                void CreateSecurityGroupPoliciesAsync(const Model::CreateSecurityGroupPoliciesRequest& request, const CreateSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupPoliciesOutcomeCallable CreateSecurityGroupPoliciesCallable(const Model::CreateSecurityGroupPoliciesRequest& request);

                /**
                 *This API is used to create u200da security group, and add security group policies.
* For the the upper limit of security groups per project in each region under each account, <a href="https://intl.cloud.tencent.com/document/product/213/12453?from_cn_redirect=1">see here</a>
* u200dFor u200dnewly u200dcreated security groups, u200dthe inbound and outbound policies are set to `Deny All` by default. You need to call <a href="https://intl.cloud.tencent.com/document/product/215/15807?from_cn_redirect=1">CreateSecurityGroupPolicies</a>
to change it.

Description:
* `Version`: The version number of a security group policy. It automatically increments by 1 every time you update the security policy, so to prevent the expiration of the updated policies. If this field is left empty, any conflicts will be ignored.
* `Protocol`: Values can be `TCP`, `UDP`, `ICMP`, `ICMPV6`, `GRE`, and `ALL`.
* `CidrBlock`: Enter a CIDR block in the correct format. In the classic network, even if the CIDR block specified in u200d`CidrBlock` contains the Tencent Cloud private IPs not used for CVMs under your Tencent Cloud account, it does not mean this policy allows you to access those resources. The network isolation policies between tenants take priority over the private network policies in security groups.
* `Ipv6CidrBlock`: Enter an IPv6 CIDR block in the correct format. In the classic network, even if the CIDR block specified in `Ipv6CidrBlock` contains the Tencent Cloud private IPv6 addresses not used for CVMs under your Tencent Cloud account, it does not mean this policy allows you to access those resources. The network isolation policies between tenants take priority over the private network policies in security groups.
* `SecurityGroupId`: ID of the security group. It can be the ID of a security group to be modified, or the ID of another security group in the same project. All private IPs of all CVMs under the security group will be covered. If this field is used, the policy will automatically change according to the CVM associated with the group ID while being used to match network messages. You don't need to change it manually.
* `Port`: Enter a single port number (such as `80`), or a port range (such as `8000-8010`). `Port` is only applicable when `Protocol` is `TCP` or `UDP`. If `Protocol` is not `TCP` or `UDP`, `Protocol` and `Port` cannot be both specified. 
* `Action`: Values can be `ACCEPT` or `DROP`.
* `CidrBlock`, `Ipv6CidrBlock`, `SecurityGroupId`, and `AddressTemplate` are exclusive u200dto one another. “Protocol + Port” and `ServiceTemplate` are mutually exclusive.
* Only policies in one direction can be created in each request. If you need to specify the `PolicyIndex` parameter, the indexes of policies must be consistent.
                 * @param req CreateSecurityGroupWithPoliciesRequest
                 * @return CreateSecurityGroupWithPoliciesOutcome
                 */
                CreateSecurityGroupWithPoliciesOutcome CreateSecurityGroupWithPolicies(const Model::CreateSecurityGroupWithPoliciesRequest &request);
                void CreateSecurityGroupWithPoliciesAsync(const Model::CreateSecurityGroupWithPoliciesRequest& request, const CreateSecurityGroupWithPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupWithPoliciesOutcomeCallable CreateSecurityGroupWithPoliciesCallable(const Model::CreateSecurityGroupWithPoliciesRequest& request);

                /**
                 *This API (CreateServiceTemplate) is used to create a protocol port template.
                 * @param req CreateServiceTemplateRequest
                 * @return CreateServiceTemplateOutcome
                 */
                CreateServiceTemplateOutcome CreateServiceTemplate(const Model::CreateServiceTemplateRequest &request);
                void CreateServiceTemplateAsync(const Model::CreateServiceTemplateRequest& request, const CreateServiceTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceTemplateOutcomeCallable CreateServiceTemplateCallable(const Model::CreateServiceTemplateRequest& request);

                /**
                 *This API (CreateServiceTemplateGroup) is used to create a protocol port template group.
                 * @param req CreateServiceTemplateGroupRequest
                 * @return CreateServiceTemplateGroupOutcome
                 */
                CreateServiceTemplateGroupOutcome CreateServiceTemplateGroup(const Model::CreateServiceTemplateGroupRequest &request);
                void CreateServiceTemplateGroupAsync(const Model::CreateServiceTemplateGroupRequest& request, const CreateServiceTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceTemplateGroupOutcomeCallable CreateServiceTemplateGroupCallable(const Model::CreateServiceTemplateGroupRequest& request);

                /**
                 *This API is used to create snapshot policies.
                 * @param req CreateSnapshotPoliciesRequest
                 * @return CreateSnapshotPoliciesOutcome
                 */
                CreateSnapshotPoliciesOutcome CreateSnapshotPolicies(const Model::CreateSnapshotPoliciesRequest &request);
                void CreateSnapshotPoliciesAsync(const Model::CreateSnapshotPoliciesRequest& request, const CreateSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSnapshotPoliciesOutcomeCallable CreateSnapshotPoliciesCallable(const Model::CreateSnapshotPoliciesRequest& request);

                /**
                 *This API is used to create a subnet.
* You must create a VPC instance before creating a subnet.
* After the subnet is successfully created, its IP address range cannot be modified. The subnet IP address range must fall within the VPC IP address range. They can be the same if the VPC instance has only one subnet. We recommend that you keep the subnet IP address range within the VPC IP address range to reserve IP address ranges for other subnets.
* The subnet mask of the smallest IP address range that can be created is 28 (16 IP addresses), and that of the largest IP address range is 16 (65,536 IP addresses).
* IP address ranges of different subnets cannot overlap with each other within the same VPC instance.
* A subnet is automatically associated with the default route table once created.
* You can bind a tag when creating a subnet. The tag list in the response indicates the tags that have been successfully added.
                 * @param req CreateSubnetRequest
                 * @return CreateSubnetOutcome
                 */
                CreateSubnetOutcome CreateSubnet(const Model::CreateSubnetRequest &request);
                void CreateSubnetAsync(const Model::CreateSubnetRequest& request, const CreateSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubnetOutcomeCallable CreateSubnetCallable(const Model::CreateSubnetRequest& request);

                /**
                 *This API is used to create subnets in batches.
* You must create a VPC instance before creating a subnet.
* After the subnet is successfully created, its IP address range cannot be modified. The subnet IP address range must fall within the VPC IP address range. They can be the same if the VPC has only one subnet. We recommend that you keep the subnet IP address range within the VPC IP address range to reserve IP address ranges for other subnets.
* The subnet mask of the smallest IP address range that can be created is 28 (16 IP addresses), and that of the largest IP address range is 16 (65,536 IP addresses).
* IP address ranges of different subnets cannot overlap with each other within the same VPC instance.
* A subnet is automatically associated with the default route table once created.
* You can bind a tag when creating a subnet. The tag list in the response indicates the tags that have been successfully added.
                 * @param req CreateSubnetsRequest
                 * @return CreateSubnetsOutcome
                 */
                CreateSubnetsOutcome CreateSubnets(const Model::CreateSubnetsRequest &request);
                void CreateSubnetsAsync(const Model::CreateSubnetsRequest& request, const CreateSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSubnetsOutcomeCallable CreateSubnetsCallable(const Model::CreateSubnetsRequest& request);

                /**
                 *This API is used to create a VPC instance.
* The subnet mask of the smallest IP address range that can be created is 28 (16 IP addresses), that of the largest IP address ranges 10.0.0.0/12 and 172.16.0.0/12 is 12 (1,048,576 IP addresses), and that of the largest IP address range 192.168.0.0/16 is 16 (65,536 IP addresses). For more information on how to plan VPC IP ranges, see [Network Planning](https://intl.cloud.tencent.com/document/product/215/30313?from_cn_redirect=1).
* The number of VPC instances that can be created in a region is limited. For more information, see <a href="https://intl.cloud.tencent.com/doc/product/215/537?from_cn_redirect=1" title="VPC Use Limits">VPC Use Limits</a>. To request more resources, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
* You can bind tags when creating a VPC instance. The tag list in the response indicates the tags that have been successfully added.
                 * @param req CreateVpcRequest
                 * @return CreateVpcOutcome
                 */
                CreateVpcOutcome CreateVpc(const Model::CreateVpcRequest &request);
                void CreateVpcAsync(const Model::CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcOutcomeCallable CreateVpcCallable(const Model::CreateVpcRequest& request);

                /**
                 *This API is used to create an endpoint.
                 * @param req CreateVpcEndPointRequest
                 * @return CreateVpcEndPointOutcome
                 */
                CreateVpcEndPointOutcome CreateVpcEndPoint(const Model::CreateVpcEndPointRequest &request);
                void CreateVpcEndPointAsync(const Model::CreateVpcEndPointRequest& request, const CreateVpcEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcEndPointOutcomeCallable CreateVpcEndPointCallable(const Model::CreateVpcEndPointRequest& request);

                /**
                 *This API is used to create an endpoint service.
                 * @param req CreateVpcEndPointServiceRequest
                 * @return CreateVpcEndPointServiceOutcome
                 */
                CreateVpcEndPointServiceOutcome CreateVpcEndPointService(const Model::CreateVpcEndPointServiceRequest &request);
                void CreateVpcEndPointServiceAsync(const Model::CreateVpcEndPointServiceRequest& request, const CreateVpcEndPointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcEndPointServiceOutcomeCallable CreateVpcEndPointServiceCallable(const Model::CreateVpcEndPointServiceRequest& request);

                /**
                 *This API is used to create the endpoint service allowlist.
                 * @param req CreateVpcEndPointServiceWhiteListRequest
                 * @return CreateVpcEndPointServiceWhiteListOutcome
                 */
                CreateVpcEndPointServiceWhiteListOutcome CreateVpcEndPointServiceWhiteList(const Model::CreateVpcEndPointServiceWhiteListRequest &request);
                void CreateVpcEndPointServiceWhiteListAsync(const Model::CreateVpcEndPointServiceWhiteListRequest& request, const CreateVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcEndPointServiceWhiteListOutcomeCallable CreateVpcEndPointServiceWhiteListCallable(const Model::CreateVpcEndPointServiceWhiteListRequest& request);

                /**
                 *This API is used to create a VPN tunnel.
>?This API is async. You can call the [`DescribeVpcTaskResult`](https://intl.cloud.tencent.com/document/api/215/59037?from_cn_redirect=1) API to query the task result. When the task is completed, you can continue other tasks.
>
                 * @param req CreateVpnConnectionRequest
                 * @return CreateVpnConnectionOutcome
                 */
                CreateVpnConnectionOutcome CreateVpnConnection(const Model::CreateVpnConnectionRequest &request);
                void CreateVpnConnectionAsync(const Model::CreateVpnConnectionRequest& request, const CreateVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpnConnectionOutcomeCallable CreateVpnConnectionCallable(const Model::CreateVpnConnectionRequest& request);

                /**
                 *This API (CreateVpnGateway) is used to create a VPN gateway.
                 * @param req CreateVpnGatewayRequest
                 * @return CreateVpnGatewayOutcome
                 */
                CreateVpnGatewayOutcome CreateVpnGateway(const Model::CreateVpnGatewayRequest &request);
                void CreateVpnGatewayAsync(const Model::CreateVpnGatewayRequest& request, const CreateVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpnGatewayOutcomeCallable CreateVpnGatewayCallable(const Model::CreateVpnGatewayRequest& request);

                /**
                 *This API is used to create destination routes of a route-based VPN gateway.
                 * @param req CreateVpnGatewayRoutesRequest
                 * @return CreateVpnGatewayRoutesOutcome
                 */
                CreateVpnGatewayRoutesOutcome CreateVpnGatewayRoutes(const Model::CreateVpnGatewayRoutesRequest &request);
                void CreateVpnGatewayRoutesAsync(const Model::CreateVpnGatewayRoutesRequest& request, const CreateVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpnGatewayRoutesOutcomeCallable CreateVpnGatewayRoutesCallable(const Model::CreateVpnGatewayRoutesRequest& request);

                /**
                 *This API (DeleteAddressTemplate) is used to delete an IP address template.
                 * @param req DeleteAddressTemplateRequest
                 * @return DeleteAddressTemplateOutcome
                 */
                DeleteAddressTemplateOutcome DeleteAddressTemplate(const Model::DeleteAddressTemplateRequest &request);
                void DeleteAddressTemplateAsync(const Model::DeleteAddressTemplateRequest& request, const DeleteAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAddressTemplateOutcomeCallable DeleteAddressTemplateCallable(const Model::DeleteAddressTemplateRequest& request);

                /**
                 *This API (DeleteAddressTemplateGroup) is used to delete an IP address template group.
                 * @param req DeleteAddressTemplateGroupRequest
                 * @return DeleteAddressTemplateGroupOutcome
                 */
                DeleteAddressTemplateGroupOutcome DeleteAddressTemplateGroup(const Model::DeleteAddressTemplateGroupRequest &request);
                void DeleteAddressTemplateGroupAsync(const Model::DeleteAddressTemplateGroupRequest& request, const DeleteAddressTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAddressTemplateGroupOutcomeCallable DeleteAddressTemplateGroupCallable(const Model::DeleteAddressTemplateGroupRequest& request);

                /**
                 *This API is used to delete a secondary CIDR block.
                 * @param req DeleteAssistantCidrRequest
                 * @return DeleteAssistantCidrOutcome
                 */
                DeleteAssistantCidrOutcome DeleteAssistantCidr(const Model::DeleteAssistantCidrRequest &request);
                void DeleteAssistantCidrAsync(const Model::DeleteAssistantCidrRequest& request, const DeleteAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAssistantCidrOutcomeCallable DeleteAssistantCidrCallable(const Model::DeleteAssistantCidrRequest& request);

                /**
                 *This API is used to delete bandwidth packages, including [device bandwidth packages](https://intl.cloud.tencent.com/document/product/684/15246?from_cn_redirect=1#.E8.AE.BE.E5.A4.87.E5.B8.A6.E5.AE.BD.E5.8C.85) and [IP bandwidth packages](https://intl.cloud.tencent.com/document/product/684/15246?from_cn_redirect=1#ip-.E5.B8.A6.E5.AE.BD.E5.8C.85).
                 * @param req DeleteBandwidthPackageRequest
                 * @return DeleteBandwidthPackageOutcome
                 */
                DeleteBandwidthPackageOutcome DeleteBandwidthPackage(const Model::DeleteBandwidthPackageRequest &request);
                void DeleteBandwidthPackageAsync(const Model::DeleteBandwidthPackageRequest& request, const DeleteBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBandwidthPackageOutcomeCallable DeleteBandwidthPackageCallable(const Model::DeleteBandwidthPackageRequest& request);

                /**
                 *This API (DeleteCcn) is used to delete CCNs.
* After deletion, the routes between all instances associated with the CCN will be deleted, and the network will be interrupted. Please confirm this operation in advance.
* CCN deletion is an irreversible operation. Please proceed with caution.

                 * @param req DeleteCcnRequest
                 * @return DeleteCcnOutcome
                 */
                DeleteCcnOutcome DeleteCcn(const Model::DeleteCcnRequest &request);
                void DeleteCcnAsync(const Model::DeleteCcnRequest& request, const DeleteCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCcnOutcomeCallable DeleteCcnCallable(const Model::DeleteCcnRequest& request);

                /**
                 *This API (DeleteCustomerGateway) is used to delete customer gateways.
                 * @param req DeleteCustomerGatewayRequest
                 * @return DeleteCustomerGatewayOutcome
                 */
                DeleteCustomerGatewayOutcome DeleteCustomerGateway(const Model::DeleteCustomerGatewayRequest &request);
                void DeleteCustomerGatewayAsync(const Model::DeleteCustomerGatewayRequest& request, const DeleteCustomerGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomerGatewayOutcomeCallable DeleteCustomerGatewayCallable(const Model::DeleteCustomerGatewayRequest& request);

                /**
                 *This API is used to delete a direct connect gateway.
<li>For a NAT gateway, NAT and ACL rules will be cleared upon the deletion of a direct connect gateway.
<li>After the deletion of a direct connect gateway, the routing policy associated with the gateway in the route table will also be deleted.
This API is completed asynchronously. If you need to query the async job execution results, please use the `RequestId` returned by this API to poll the `QueryTask` API.
                 * @param req DeleteDirectConnectGatewayRequest
                 * @return DeleteDirectConnectGatewayOutcome
                 */
                DeleteDirectConnectGatewayOutcome DeleteDirectConnectGateway(const Model::DeleteDirectConnectGatewayRequest &request);
                void DeleteDirectConnectGatewayAsync(const Model::DeleteDirectConnectGatewayRequest& request, const DeleteDirectConnectGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDirectConnectGatewayOutcomeCallable DeleteDirectConnectGatewayCallable(const Model::DeleteDirectConnectGatewayRequest& request);

                /**
                 *This API (DeleteDirectConnectGatewayCcnRoutes) is used to delete the CCN routes (IDC IP range) of a Direct Connect gateway.
                 * @param req DeleteDirectConnectGatewayCcnRoutesRequest
                 * @return DeleteDirectConnectGatewayCcnRoutesOutcome
                 */
                DeleteDirectConnectGatewayCcnRoutesOutcome DeleteDirectConnectGatewayCcnRoutes(const Model::DeleteDirectConnectGatewayCcnRoutesRequest &request);
                void DeleteDirectConnectGatewayCcnRoutesAsync(const Model::DeleteDirectConnectGatewayCcnRoutesRequest& request, const DeleteDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDirectConnectGatewayCcnRoutesOutcomeCallable DeleteDirectConnectGatewayCcnRoutesCallable(const Model::DeleteDirectConnectGatewayCcnRoutesRequest& request);

                /**
                 *This API is used to delete a flow log.
                 * @param req DeleteFlowLogRequest
                 * @return DeleteFlowLogOutcome
                 */
                DeleteFlowLogOutcome DeleteFlowLog(const Model::DeleteFlowLogRequest &request);
                void DeleteFlowLogAsync(const Model::DeleteFlowLogRequest& request, const DeleteFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFlowLogOutcomeCallable DeleteFlowLogCallable(const Model::DeleteFlowLogRequest& request);

                /**
                 *This API is used to delete an HAVIP. <br />
This API is completed asynchronously. If you need to query the execution result of an async task, please use the `RequestId` returned by this API to poll the `DescribeVpcTaskResult` API.
                 * @param req DeleteHaVipRequest
                 * @return DeleteHaVipOutcome
                 */
                DeleteHaVipOutcome DeleteHaVip(const Model::DeleteHaVipRequest &request);
                void DeleteHaVipAsync(const Model::DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHaVipOutcomeCallable DeleteHaVipCallable(const Model::DeleteHaVipRequest& request);

                /**
                 *This API is used to delete the local gateway of a CDC instance.
                 * @param req DeleteLocalGatewayRequest
                 * @return DeleteLocalGatewayOutcome
                 */
                DeleteLocalGatewayOutcome DeleteLocalGateway(const Model::DeleteLocalGatewayRequest &request);
                void DeleteLocalGatewayAsync(const Model::DeleteLocalGatewayRequest& request, const DeleteLocalGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLocalGatewayOutcomeCallable DeleteLocalGatewayCallable(const Model::DeleteLocalGatewayRequest& request);

                /**
                 *This API is used to delete a NAT gateway.
When a NAT gateway is deleted, all routes containing this gateway are deleted automatically, and the elastic IP is unbound.
                 * @param req DeleteNatGatewayRequest
                 * @return DeleteNatGatewayOutcome
                 */
                DeleteNatGatewayOutcome DeleteNatGateway(const Model::DeleteNatGatewayRequest &request);
                void DeleteNatGatewayAsync(const Model::DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNatGatewayOutcomeCallable DeleteNatGatewayCallable(const Model::DeleteNatGatewayRequest& request);

                /**
                 *This API is used to delete the port forwarding rule of a NAT gateway.
                 * @param req DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest
                 * @return DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome
                 */
                DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome DeleteNatGatewayDestinationIpPortTranslationNatRule(const Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest &request);
                void DeleteNatGatewayDestinationIpPortTranslationNatRuleAsync(const Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const DeleteNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable DeleteNatGatewayDestinationIpPortTranslationNatRuleCallable(const Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest& request);

                /**
                 *This API is used to delete a SNAT forwarding rule of a NAT gateway.
                 * @param req DeleteNatGatewaySourceIpTranslationNatRuleRequest
                 * @return DeleteNatGatewaySourceIpTranslationNatRuleOutcome
                 */
                DeleteNatGatewaySourceIpTranslationNatRuleOutcome DeleteNatGatewaySourceIpTranslationNatRule(const Model::DeleteNatGatewaySourceIpTranslationNatRuleRequest &request);
                void DeleteNatGatewaySourceIpTranslationNatRuleAsync(const Model::DeleteNatGatewaySourceIpTranslationNatRuleRequest& request, const DeleteNatGatewaySourceIpTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNatGatewaySourceIpTranslationNatRuleOutcomeCallable DeleteNatGatewaySourceIpTranslationNatRuleCallable(const Model::DeleteNatGatewaySourceIpTranslationNatRuleRequest& request);

                /**
                 *This API is used to delete a network probe.
                 * @param req DeleteNetDetectRequest
                 * @return DeleteNetDetectOutcome
                 */
                DeleteNetDetectOutcome DeleteNetDetect(const Model::DeleteNetDetectRequest &request);
                void DeleteNetDetectAsync(const Model::DeleteNetDetectRequest& request, const DeleteNetDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetDetectOutcomeCallable DeleteNetDetectCallable(const Model::DeleteNetDetectRequest& request);

                /**
                 *This API is used to delete a network ACL.
                 * @param req DeleteNetworkAclRequest
                 * @return DeleteNetworkAclOutcome
                 */
                DeleteNetworkAclOutcome DeleteNetworkAcl(const Model::DeleteNetworkAclRequest &request);
                void DeleteNetworkAclAsync(const Model::DeleteNetworkAclRequest& request, const DeleteNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetworkAclOutcomeCallable DeleteNetworkAclCallable(const Model::DeleteNetworkAclRequest& request);

                /**
                 *This API is used to delete specified in/outbound rules of the network ACL quintuple. In the `NetworkAclQuintupleEntrySet` parameters, `NetworkAclQuintupleEntryId` is required for `NetworkAclQuintupleEntry`.
                 * @param req DeleteNetworkAclQuintupleEntriesRequest
                 * @return DeleteNetworkAclQuintupleEntriesOutcome
                 */
                DeleteNetworkAclQuintupleEntriesOutcome DeleteNetworkAclQuintupleEntries(const Model::DeleteNetworkAclQuintupleEntriesRequest &request);
                void DeleteNetworkAclQuintupleEntriesAsync(const Model::DeleteNetworkAclQuintupleEntriesRequest& request, const DeleteNetworkAclQuintupleEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNetworkAclQuintupleEntriesOutcomeCallable DeleteNetworkAclQuintupleEntriesCallable(const Model::DeleteNetworkAclQuintupleEntriesRequest& request);

                /**
                 *This API is used to delete an ENI.
* An ENI cannot be deleted when it’s bound to a CVM.
 * After the deletion, all of its private IP addresses will be released.

This API is completed asynchronously. If you need to query the execution result of an async task, please use the `RequestId` returned by this API to poll the `DescribeVpcTaskResult` API.
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
                 *This API (DeleteRoutes) is used to delete routing policies in batches from a route table.
                 * @param req DeleteRoutesRequest
                 * @return DeleteRoutesOutcome
                 */
                DeleteRoutesOutcome DeleteRoutes(const Model::DeleteRoutesRequest &request);
                void DeleteRoutesAsync(const Model::DeleteRoutesRequest& request, const DeleteRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRoutesOutcomeCallable DeleteRoutesCallable(const Model::DeleteRoutesRequest& request);

                /**
                 *This API (DeleteSecurityGroup) is used to delete security groups (SecurityGroup).
* Only security groups under the current account can be deleted.
* A security group cannot be deleted directly if its instance ID is used in the policy of another security group. You need to modify the policy first and then delete the security group.
* A security group cannot be recovered after deletion, please proceed with caution.
                 * @param req DeleteSecurityGroupRequest
                 * @return DeleteSecurityGroupOutcome
                 */
                DeleteSecurityGroupOutcome DeleteSecurityGroup(const Model::DeleteSecurityGroupRequest &request);
                void DeleteSecurityGroupAsync(const Model::DeleteSecurityGroupRequest& request, const DeleteSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupOutcomeCallable DeleteSecurityGroupCallable(const Model::DeleteSecurityGroupRequest& request);

                /**
                 *This API (DeleteSecurityGroupPolicies) is used to delete security group policies (SecurityGroupPolicy).
* SecurityGroupPolicySet.Version is used to specify the version of the security group you are operating. If the specified Version number differs from the latest version of the current security group, a failure will be returned. If Version is not specified, the policy of the specified PolicyIndex will be deleted directly.
                 * @param req DeleteSecurityGroupPoliciesRequest
                 * @return DeleteSecurityGroupPoliciesOutcome
                 */
                DeleteSecurityGroupPoliciesOutcome DeleteSecurityGroupPolicies(const Model::DeleteSecurityGroupPoliciesRequest &request);
                void DeleteSecurityGroupPoliciesAsync(const Model::DeleteSecurityGroupPoliciesRequest& request, const DeleteSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityGroupPoliciesOutcomeCallable DeleteSecurityGroupPoliciesCallable(const Model::DeleteSecurityGroupPoliciesRequest& request);

                /**
                 *This API (DeleteServiceTemplate) is used to delete a protocol port template.
                 * @param req DeleteServiceTemplateRequest
                 * @return DeleteServiceTemplateOutcome
                 */
                DeleteServiceTemplateOutcome DeleteServiceTemplate(const Model::DeleteServiceTemplateRequest &request);
                void DeleteServiceTemplateAsync(const Model::DeleteServiceTemplateRequest& request, const DeleteServiceTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceTemplateOutcomeCallable DeleteServiceTemplateCallable(const Model::DeleteServiceTemplateRequest& request);

                /**
                 *This API (DeleteServiceTemplateGroup) is used to delete a protocol port template group.
                 * @param req DeleteServiceTemplateGroupRequest
                 * @return DeleteServiceTemplateGroupOutcome
                 */
                DeleteServiceTemplateGroupOutcome DeleteServiceTemplateGroup(const Model::DeleteServiceTemplateGroupRequest &request);
                void DeleteServiceTemplateGroupAsync(const Model::DeleteServiceTemplateGroupRequest& request, const DeleteServiceTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceTemplateGroupOutcomeCallable DeleteServiceTemplateGroupCallable(const Model::DeleteServiceTemplateGroupRequest& request);

                /**
                 *This API is used to delete snapshot policies.
                 * @param req DeleteSnapshotPoliciesRequest
                 * @return DeleteSnapshotPoliciesOutcome
                 */
                DeleteSnapshotPoliciesOutcome DeleteSnapshotPolicies(const Model::DeleteSnapshotPoliciesRequest &request);
                void DeleteSnapshotPoliciesAsync(const Model::DeleteSnapshotPoliciesRequest& request, const DeleteSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSnapshotPoliciesOutcomeCallable DeleteSnapshotPoliciesCallable(const Model::DeleteSnapshotPoliciesRequest& request);

                /**
                 *This API is used to delete a subnet.
* Remove all resources in the subnet before deleting it
                 * @param req DeleteSubnetRequest
                 * @return DeleteSubnetOutcome
                 */
                DeleteSubnetOutcome DeleteSubnet(const Model::DeleteSubnetRequest &request);
                void DeleteSubnetAsync(const Model::DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSubnetOutcomeCallable DeleteSubnetCallable(const Model::DeleteSubnetRequest& request);

                /**
                 *This API is used to delete traffic packages. Note that only non-valid traffic packages can be deleted. 
                 * @param req DeleteTrafficPackagesRequest
                 * @return DeleteTrafficPackagesOutcome
                 */
                DeleteTrafficPackagesOutcome DeleteTrafficPackages(const Model::DeleteTrafficPackagesRequest &request);
                void DeleteTrafficPackagesAsync(const Model::DeleteTrafficPackagesRequest& request, const DeleteTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTrafficPackagesOutcomeCallable DeleteTrafficPackagesCallable(const Model::DeleteTrafficPackagesRequest& request);

                /**
                 *This API (DeleteVpc) is used to delete VPCs.
* Before deleting a VPC, ensure that the VPC contains no resources, including CVMs, cloud databases, NoSQL databases, VPN gateways, direct connect gateways, load balancers, peering connections, and basic network devices that are linked to the VPC.
* The deletion of VPCs is irreversible. Proceed with caution.
                 * @param req DeleteVpcRequest
                 * @return DeleteVpcOutcome
                 */
                DeleteVpcOutcome DeleteVpc(const Model::DeleteVpcRequest &request);
                void DeleteVpcAsync(const Model::DeleteVpcRequest& request, const DeleteVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcOutcomeCallable DeleteVpcCallable(const Model::DeleteVpcRequest& request);

                /**
                 *This API is used to delete an endpoint.
                 * @param req DeleteVpcEndPointRequest
                 * @return DeleteVpcEndPointOutcome
                 */
                DeleteVpcEndPointOutcome DeleteVpcEndPoint(const Model::DeleteVpcEndPointRequest &request);
                void DeleteVpcEndPointAsync(const Model::DeleteVpcEndPointRequest& request, const DeleteVpcEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcEndPointOutcomeCallable DeleteVpcEndPointCallable(const Model::DeleteVpcEndPointRequest& request);

                /**
                 *This API is used to delete an endpoint service.


                 * @param req DeleteVpcEndPointServiceRequest
                 * @return DeleteVpcEndPointServiceOutcome
                 */
                DeleteVpcEndPointServiceOutcome DeleteVpcEndPointService(const Model::DeleteVpcEndPointServiceRequest &request);
                void DeleteVpcEndPointServiceAsync(const Model::DeleteVpcEndPointServiceRequest& request, const DeleteVpcEndPointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcEndPointServiceOutcomeCallable DeleteVpcEndPointServiceCallable(const Model::DeleteVpcEndPointServiceRequest& request);

                /**
                 *This API is used to delete the endpoint service allowlist.
                 * @param req DeleteVpcEndPointServiceWhiteListRequest
                 * @return DeleteVpcEndPointServiceWhiteListOutcome
                 */
                DeleteVpcEndPointServiceWhiteListOutcome DeleteVpcEndPointServiceWhiteList(const Model::DeleteVpcEndPointServiceWhiteListRequest &request);
                void DeleteVpcEndPointServiceWhiteListAsync(const Model::DeleteVpcEndPointServiceWhiteListRequest& request, const DeleteVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpcEndPointServiceWhiteListOutcomeCallable DeleteVpcEndPointServiceWhiteListCallable(const Model::DeleteVpcEndPointServiceWhiteListRequest& request);

                /**
                 *This API is used to delete a VPN tunnel.
                 * @param req DeleteVpnConnectionRequest
                 * @return DeleteVpnConnectionOutcome
                 */
                DeleteVpnConnectionOutcome DeleteVpnConnection(const Model::DeleteVpnConnectionRequest &request);
                void DeleteVpnConnectionAsync(const Model::DeleteVpnConnectionRequest& request, const DeleteVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpnConnectionOutcomeCallable DeleteVpnConnectionCallable(const Model::DeleteVpnConnectionRequest& request);

                /**
                 *This API (DeleteVpnGateway) is used to delete a VPN gateway. Currently, only deletion of pay-as-you-go IPSEC gateway instances in running status is supported.
                 * @param req DeleteVpnGatewayRequest
                 * @return DeleteVpnGatewayOutcome
                 */
                DeleteVpnGatewayOutcome DeleteVpnGateway(const Model::DeleteVpnGatewayRequest &request);
                void DeleteVpnGatewayAsync(const Model::DeleteVpnGatewayRequest& request, const DeleteVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpnGatewayOutcomeCallable DeleteVpnGatewayCallable(const Model::DeleteVpnGatewayRequest& request);

                /**
                 *This API is used to delete routes of a VPN gateway. 
                 * @param req DeleteVpnGatewayRoutesRequest
                 * @return DeleteVpnGatewayRoutesOutcome
                 */
                DeleteVpnGatewayRoutesOutcome DeleteVpnGatewayRoutes(const Model::DeleteVpnGatewayRoutesRequest &request);
                void DeleteVpnGatewayRoutesAsync(const Model::DeleteVpnGatewayRoutesRequest& request, const DeleteVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteVpnGatewayRoutesOutcomeCallable DeleteVpnGatewayRoutesCallable(const Model::DeleteVpnGatewayRoutesRequest& request);

                /**
                 *This API (DescribeAccountAttributes) is used to query your account attributes.
                 * @param req DescribeAccountAttributesRequest
                 * @return DescribeAccountAttributesOutcome
                 */
                DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest &request);
                void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request);

                /**
                 *This API (DescribeAddressQuota) is used to query the quota information of your [Elastic IP](https://intl.cloud.tencent.com/document/product/213/1941?from_cn_redirect=1) (EIP) in the current region. For more information, see [EIP product introduction](https://intl.cloud.tencent.com/document/product/213/5733?from_cn_redirect=1).
                 * @param req DescribeAddressQuotaRequest
                 * @return DescribeAddressQuotaOutcome
                 */
                DescribeAddressQuotaOutcome DescribeAddressQuota(const Model::DescribeAddressQuotaRequest &request);
                void DescribeAddressQuotaAsync(const Model::DescribeAddressQuotaRequest& request, const DescribeAddressQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressQuotaOutcomeCallable DescribeAddressQuotaCallable(const Model::DescribeAddressQuotaRequest& request);

                /**
                 *This API (DescribeAddressTemplateGroups) is used to query an IP address template group.
                 * @param req DescribeAddressTemplateGroupsRequest
                 * @return DescribeAddressTemplateGroupsOutcome
                 */
                DescribeAddressTemplateGroupsOutcome DescribeAddressTemplateGroups(const Model::DescribeAddressTemplateGroupsRequest &request);
                void DescribeAddressTemplateGroupsAsync(const Model::DescribeAddressTemplateGroupsRequest& request, const DescribeAddressTemplateGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressTemplateGroupsOutcomeCallable DescribeAddressTemplateGroupsCallable(const Model::DescribeAddressTemplateGroupsRequest& request);

                /**
                 *This API (DescribeAddressTemplates) is used to query an IP address template.
                 * @param req DescribeAddressTemplatesRequest
                 * @return DescribeAddressTemplatesOutcome
                 */
                DescribeAddressTemplatesOutcome DescribeAddressTemplates(const Model::DescribeAddressTemplatesRequest &request);
                void DescribeAddressTemplatesAsync(const Model::DescribeAddressTemplatesRequest& request, const DescribeAddressTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressTemplatesOutcomeCallable DescribeAddressTemplatesCallable(const Model::DescribeAddressTemplatesRequest& request);

                /**
                 *This API (DescribeAddresses) is used to query the information of one or multiple [Elastic IPs](https://intl.cloud.tencent.com/document/product/213/1941?from_cn_redirect=1).
* If the parameter is empty, a number (as specified by the `Limit`, the default value is 20) of EIPs will be returned.
                 * @param req DescribeAddressesRequest
                 * @return DescribeAddressesOutcome
                 */
                DescribeAddressesOutcome DescribeAddresses(const Model::DescribeAddressesRequest &request);
                void DescribeAddressesAsync(const Model::DescribeAddressesRequest& request, const DescribeAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressesOutcomeCallable DescribeAddressesCallable(const Model::DescribeAddressesRequest& request);

                /**
                 *This API is used to query the list of secondary CIDR blocks.
                 * @param req DescribeAssistantCidrRequest
                 * @return DescribeAssistantCidrOutcome
                 */
                DescribeAssistantCidrOutcome DescribeAssistantCidr(const Model::DescribeAssistantCidrRequest &request);
                void DescribeAssistantCidrAsync(const Model::DescribeAssistantCidrRequest& request, const DescribeAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssistantCidrOutcomeCallable DescribeAssistantCidrCallable(const Model::DescribeAssistantCidrRequest& request);

                /**
                 *This API is used to query the current billable usage of a pay-as-you-go bandwidth package.
                 * @param req DescribeBandwidthPackageBillUsageRequest
                 * @return DescribeBandwidthPackageBillUsageOutcome
                 */
                DescribeBandwidthPackageBillUsageOutcome DescribeBandwidthPackageBillUsage(const Model::DescribeBandwidthPackageBillUsageRequest &request);
                void DescribeBandwidthPackageBillUsageAsync(const Model::DescribeBandwidthPackageBillUsageRequest& request, const DescribeBandwidthPackageBillUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBandwidthPackageBillUsageOutcomeCallable DescribeBandwidthPackageBillUsageCallable(const Model::DescribeBandwidthPackageBillUsageRequest& request);

                /**
                 *This API is used to query the maximum and used number of bandwidth packages under the account in the current region.
                 * @param req DescribeBandwidthPackageQuotaRequest
                 * @return DescribeBandwidthPackageQuotaOutcome
                 */
                DescribeBandwidthPackageQuotaOutcome DescribeBandwidthPackageQuota(const Model::DescribeBandwidthPackageQuotaRequest &request);
                void DescribeBandwidthPackageQuotaAsync(const Model::DescribeBandwidthPackageQuotaRequest& request, const DescribeBandwidthPackageQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBandwidthPackageQuotaOutcomeCallable DescribeBandwidthPackageQuotaCallable(const Model::DescribeBandwidthPackageQuotaRequest& request);

                /**
                 *This API is used to query resources in a bandwidth package based on the unique package ID. You can filter the result by specifying conditions and paginate the query results.

                 * @param req DescribeBandwidthPackageResourcesRequest
                 * @return DescribeBandwidthPackageResourcesOutcome
                 */
                DescribeBandwidthPackageResourcesOutcome DescribeBandwidthPackageResources(const Model::DescribeBandwidthPackageResourcesRequest &request);
                void DescribeBandwidthPackageResourcesAsync(const Model::DescribeBandwidthPackageResourcesRequest& request, const DescribeBandwidthPackageResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBandwidthPackageResourcesOutcomeCallable DescribeBandwidthPackageResourcesCallable(const Model::DescribeBandwidthPackageResourcesRequest& request);

                /**
                 *This API is used to query bandwidth package information, including the unique ID of the bandwidth package, the type, the billing mode, the name, and the resource information.
                 * @param req DescribeBandwidthPackagesRequest
                 * @return DescribeBandwidthPackagesOutcome
                 */
                DescribeBandwidthPackagesOutcome DescribeBandwidthPackages(const Model::DescribeBandwidthPackagesRequest &request);
                void DescribeBandwidthPackagesAsync(const Model::DescribeBandwidthPackagesRequest& request, const DescribeBandwidthPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBandwidthPackagesOutcomeCallable DescribeBandwidthPackagesCallable(const Model::DescribeBandwidthPackagesRequest& request);

                /**
                 *This API (DescribeCcnAttachedInstances) is used to query the network instances associated with the CCN instance.
                 * @param req DescribeCcnAttachedInstancesRequest
                 * @return DescribeCcnAttachedInstancesOutcome
                 */
                DescribeCcnAttachedInstancesOutcome DescribeCcnAttachedInstances(const Model::DescribeCcnAttachedInstancesRequest &request);
                void DescribeCcnAttachedInstancesAsync(const Model::DescribeCcnAttachedInstancesRequest& request, const DescribeCcnAttachedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnAttachedInstancesOutcomeCallable DescribeCcnAttachedInstancesCallable(const Model::DescribeCcnAttachedInstancesRequest& request);

                /**
                 *This API is used to query the outbound bandwidth caps of all regions connected with a CCN instance. The API only returns regions included in the associated network instances.
                 * @param req DescribeCcnRegionBandwidthLimitsRequest
                 * @return DescribeCcnRegionBandwidthLimitsOutcome
                 */
                DescribeCcnRegionBandwidthLimitsOutcome DescribeCcnRegionBandwidthLimits(const Model::DescribeCcnRegionBandwidthLimitsRequest &request);
                void DescribeCcnRegionBandwidthLimitsAsync(const Model::DescribeCcnRegionBandwidthLimitsRequest& request, const DescribeCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnRegionBandwidthLimitsOutcomeCallable DescribeCcnRegionBandwidthLimitsCallable(const Model::DescribeCcnRegionBandwidthLimitsRequest& request);

                /**
                 *This API (DescribeCcnRoutes) is used to query routes that have been added to a CCN.
                 * @param req DescribeCcnRoutesRequest
                 * @return DescribeCcnRoutesOutcome
                 */
                DescribeCcnRoutesOutcome DescribeCcnRoutes(const Model::DescribeCcnRoutesRequest &request);
                void DescribeCcnRoutesAsync(const Model::DescribeCcnRoutesRequest& request, const DescribeCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnRoutesOutcomeCallable DescribeCcnRoutesCallable(const Model::DescribeCcnRoutesRequest& request);

                /**
                 *This API (DescribeCcns) is used to query the CCN list.
                 * @param req DescribeCcnsRequest
                 * @return DescribeCcnsOutcome
                 */
                DescribeCcnsOutcome DescribeCcns(const Model::DescribeCcnsRequest &request);
                void DescribeCcnsAsync(const Model::DescribeCcnsRequest& request, const DescribeCcnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCcnsOutcomeCallable DescribeCcnsCallable(const Model::DescribeCcnsRequest& request);

                /**
                 *This API (DescribeClassicLinkInstances) is used to query the Classiclink instances list.
                 * @param req DescribeClassicLinkInstancesRequest
                 * @return DescribeClassicLinkInstancesOutcome
                 */
                DescribeClassicLinkInstancesOutcome DescribeClassicLinkInstances(const Model::DescribeClassicLinkInstancesRequest &request);
                void DescribeClassicLinkInstancesAsync(const Model::DescribeClassicLinkInstancesRequest& request, const DescribeClassicLinkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClassicLinkInstancesOutcomeCallable DescribeClassicLinkInstancesCallable(const Model::DescribeClassicLinkInstancesRequest& request);

                /**
                 *This API is used to query the compliance review requests created by the user. 
A service provider can query all review requests created by any `APPID` under its account. Other users can only query their own review requests.
                 * @param req DescribeCrossBorderComplianceRequest
                 * @return DescribeCrossBorderComplianceOutcome
                 */
                DescribeCrossBorderComplianceOutcome DescribeCrossBorderCompliance(const Model::DescribeCrossBorderComplianceRequest &request);
                void DescribeCrossBorderComplianceAsync(const Model::DescribeCrossBorderComplianceRequest& request, const DescribeCrossBorderComplianceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCrossBorderComplianceOutcomeCallable DescribeCrossBorderComplianceCallable(const Model::DescribeCrossBorderComplianceRequest& request);

                /**
                 *This API (DescribeCustomerGatewayVendors) is used to query the information of supported customer gateway vendors.
                 * @param req DescribeCustomerGatewayVendorsRequest
                 * @return DescribeCustomerGatewayVendorsOutcome
                 */
                DescribeCustomerGatewayVendorsOutcome DescribeCustomerGatewayVendors(const Model::DescribeCustomerGatewayVendorsRequest &request);
                void DescribeCustomerGatewayVendorsAsync(const Model::DescribeCustomerGatewayVendorsRequest& request, const DescribeCustomerGatewayVendorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerGatewayVendorsOutcomeCallable DescribeCustomerGatewayVendorsCallable(const Model::DescribeCustomerGatewayVendorsRequest& request);

                /**
                 *This API (DescribeCustomerGateways) is used to query the customer gateway list.
                 * @param req DescribeCustomerGatewaysRequest
                 * @return DescribeCustomerGatewaysOutcome
                 */
                DescribeCustomerGatewaysOutcome DescribeCustomerGateways(const Model::DescribeCustomerGatewaysRequest &request);
                void DescribeCustomerGatewaysAsync(const Model::DescribeCustomerGatewaysRequest& request, const DescribeCustomerGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomerGatewaysOutcomeCallable DescribeCustomerGatewaysCallable(const Model::DescribeCustomerGatewaysRequest& request);

                /**
                 *This API (DescribeDirectConnectGatewayCcnRoutes) is used to query the CCN routes (IDC IP range) of the Direct Connect gateway.
                 * @param req DescribeDirectConnectGatewayCcnRoutesRequest
                 * @return DescribeDirectConnectGatewayCcnRoutesOutcome
                 */
                DescribeDirectConnectGatewayCcnRoutesOutcome DescribeDirectConnectGatewayCcnRoutes(const Model::DescribeDirectConnectGatewayCcnRoutesRequest &request);
                void DescribeDirectConnectGatewayCcnRoutesAsync(const Model::DescribeDirectConnectGatewayCcnRoutesRequest& request, const DescribeDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDirectConnectGatewayCcnRoutesOutcomeCallable DescribeDirectConnectGatewayCcnRoutesCallable(const Model::DescribeDirectConnectGatewayCcnRoutesRequest& request);

                /**
                 *This API is used to query direct connect gateways.
                 * @param req DescribeDirectConnectGatewaysRequest
                 * @return DescribeDirectConnectGatewaysOutcome
                 */
                DescribeDirectConnectGatewaysOutcome DescribeDirectConnectGateways(const Model::DescribeDirectConnectGatewaysRequest &request);
                void DescribeDirectConnectGatewaysAsync(const Model::DescribeDirectConnectGatewaysRequest& request, const DescribeDirectConnectGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDirectConnectGatewaysOutcomeCallable DescribeDirectConnectGatewaysCallable(const Model::DescribeDirectConnectGatewaysRequest& request);

                /**
                 *This API is used to query the information of a flow log.
                 * @param req DescribeFlowLogRequest
                 * @return DescribeFlowLogOutcome
                 */
                DescribeFlowLogOutcome DescribeFlowLog(const Model::DescribeFlowLogRequest &request);
                void DescribeFlowLogAsync(const Model::DescribeFlowLogRequest& request, const DescribeFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowLogOutcomeCallable DescribeFlowLogCallable(const Model::DescribeFlowLogRequest& request);

                /**
                 *This API is used to query all the flow logs of the current account.
                 * @param req DescribeFlowLogsRequest
                 * @return DescribeFlowLogsOutcome
                 */
                DescribeFlowLogsOutcome DescribeFlowLogs(const Model::DescribeFlowLogsRequest &request);
                void DescribeFlowLogsAsync(const Model::DescribeFlowLogsRequest& request, const DescribeFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowLogsOutcomeCallable DescribeFlowLogsCallable(const Model::DescribeFlowLogsRequest& request);

                /**
                 *This API is used to query the traffic monitoring details of the gateway.
* You can only use this API to query a single gateway instance, which means you must pass in only one of `VpnId`, `DirectConnectGatewayId`, `PeeringConnectionId`, or `NatId`.
* If the gateway has traffic, but no data is returned when this API is called, please check whether gateway traffic monitoring has been enabled in the corresponding gateway details page in the console.
                 * @param req DescribeGatewayFlowMonitorDetailRequest
                 * @return DescribeGatewayFlowMonitorDetailOutcome
                 */
                DescribeGatewayFlowMonitorDetailOutcome DescribeGatewayFlowMonitorDetail(const Model::DescribeGatewayFlowMonitorDetailRequest &request);
                void DescribeGatewayFlowMonitorDetailAsync(const Model::DescribeGatewayFlowMonitorDetailRequest& request, const DescribeGatewayFlowMonitorDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayFlowMonitorDetailOutcomeCallable DescribeGatewayFlowMonitorDetailCallable(const Model::DescribeGatewayFlowMonitorDetailRequest& request);

                /**
                 *This API is used to query the inbound IP bandwidth limit of a gateway.
                 * @param req DescribeGatewayFlowQosRequest
                 * @return DescribeGatewayFlowQosOutcome
                 */
                DescribeGatewayFlowQosOutcome DescribeGatewayFlowQos(const Model::DescribeGatewayFlowQosRequest &request);
                void DescribeGatewayFlowQosAsync(const Model::DescribeGatewayFlowQosRequest& request, const DescribeGatewayFlowQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayFlowQosOutcomeCallable DescribeGatewayFlowQosCallable(const Model::DescribeGatewayFlowQosRequest& request);

                /**
                 *This API (DescribeHaVips) is used to query the list of highly available virtual IPs (HAVIP).
                 * @param req DescribeHaVipsRequest
                 * @return DescribeHaVipsOutcome
                 */
                DescribeHaVipsOutcome DescribeHaVips(const Model::DescribeHaVipsRequest &request);
                void DescribeHaVipsAsync(const Model::DescribeHaVipsRequest& request, const DescribeHaVipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHaVipsOutcomeCallable DescribeHaVipsCallable(const Model::DescribeHaVipsRequest& request);

                /**
                 *This API is used to obtain the download link of an IP location database.
<font color="#FF0000">This API will be discontinued soon and is only available for existing users.</font>
                 * @param req DescribeIpGeolocationDatabaseUrlRequest
                 * @return DescribeIpGeolocationDatabaseUrlOutcome
                 */
                DescribeIpGeolocationDatabaseUrlOutcome DescribeIpGeolocationDatabaseUrl(const Model::DescribeIpGeolocationDatabaseUrlRequest &request);
                void DescribeIpGeolocationDatabaseUrlAsync(const Model::DescribeIpGeolocationDatabaseUrlRequest& request, const DescribeIpGeolocationDatabaseUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpGeolocationDatabaseUrlOutcomeCallable DescribeIpGeolocationDatabaseUrlCallable(const Model::DescribeIpGeolocationDatabaseUrlRequest& request);

                /**
                 *This API is used to query the location and network information of one or more IP addresses.
<font color="#FF0000">This API will be discontinued soon and is only available for existing users.</font>
                 * @param req DescribeIpGeolocationInfosRequest
                 * @return DescribeIpGeolocationInfosOutcome
                 */
                DescribeIpGeolocationInfosOutcome DescribeIpGeolocationInfos(const Model::DescribeIpGeolocationInfosRequest &request);
                void DescribeIpGeolocationInfosAsync(const Model::DescribeIpGeolocationInfosRequest& request, const DescribeIpGeolocationInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIpGeolocationInfosOutcomeCallable DescribeIpGeolocationInfosCallable(const Model::DescribeIpGeolocationInfosRequest& request);

                /**
                 *This API is used to query local gateways of a CDC instance.
                 * @param req DescribeLocalGatewayRequest
                 * @return DescribeLocalGatewayOutcome
                 */
                DescribeLocalGatewayOutcome DescribeLocalGateway(const Model::DescribeLocalGatewayRequest &request);
                void DescribeLocalGatewayAsync(const Model::DescribeLocalGatewayRequest& request, const DescribeLocalGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLocalGatewayOutcomeCallable DescribeLocalGatewayCallable(const Model::DescribeLocalGatewayRequest& request);

                /**
                 *This API is used to query the array of objects of a NAT gateway's port forwarding rules.
                 * @param req DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest
                 * @return DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome
                 */
                DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome DescribeNatGatewayDestinationIpPortTranslationNatRules(const Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest &request);
                void DescribeNatGatewayDestinationIpPortTranslationNatRulesAsync(const Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest& request, const DescribeNatGatewayDestinationIpPortTranslationNatRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcomeCallable DescribeNatGatewayDestinationIpPortTranslationNatRulesCallable(const Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest& request);

                /**
                 *This API is used to query the routes between a NAT gateway and Direct Connect.
                 * @param req DescribeNatGatewayDirectConnectGatewayRouteRequest
                 * @return DescribeNatGatewayDirectConnectGatewayRouteOutcome
                 */
                DescribeNatGatewayDirectConnectGatewayRouteOutcome DescribeNatGatewayDirectConnectGatewayRoute(const Model::DescribeNatGatewayDirectConnectGatewayRouteRequest &request);
                void DescribeNatGatewayDirectConnectGatewayRouteAsync(const Model::DescribeNatGatewayDirectConnectGatewayRouteRequest& request, const DescribeNatGatewayDirectConnectGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatGatewayDirectConnectGatewayRouteOutcomeCallable DescribeNatGatewayDirectConnectGatewayRouteCallable(const Model::DescribeNatGatewayDirectConnectGatewayRouteRequest& request);

                /**
                 *This API is used to query the NAT gateway's SNAT forwarding rules.
                 * @param req DescribeNatGatewaySourceIpTranslationNatRulesRequest
                 * @return DescribeNatGatewaySourceIpTranslationNatRulesOutcome
                 */
                DescribeNatGatewaySourceIpTranslationNatRulesOutcome DescribeNatGatewaySourceIpTranslationNatRules(const Model::DescribeNatGatewaySourceIpTranslationNatRulesRequest &request);
                void DescribeNatGatewaySourceIpTranslationNatRulesAsync(const Model::DescribeNatGatewaySourceIpTranslationNatRulesRequest& request, const DescribeNatGatewaySourceIpTranslationNatRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatGatewaySourceIpTranslationNatRulesOutcomeCallable DescribeNatGatewaySourceIpTranslationNatRulesCallable(const Model::DescribeNatGatewaySourceIpTranslationNatRulesRequest& request);

                /**
                 *This API is used to query NAT gateways.
                 * @param req DescribeNatGatewaysRequest
                 * @return DescribeNatGatewaysOutcome
                 */
                DescribeNatGatewaysOutcome DescribeNatGateways(const Model::DescribeNatGatewaysRequest &request);
                void DescribeNatGatewaysAsync(const Model::DescribeNatGatewaysRequest& request, const DescribeNatGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatGatewaysOutcomeCallable DescribeNatGatewaysCallable(const Model::DescribeNatGatewaysRequest& request);

                /**
                 *This API (DescribeNetDetectStates) is used to query the list of network detection verification results.
                 * @param req DescribeNetDetectStatesRequest
                 * @return DescribeNetDetectStatesOutcome
                 */
                DescribeNetDetectStatesOutcome DescribeNetDetectStates(const Model::DescribeNetDetectStatesRequest &request);
                void DescribeNetDetectStatesAsync(const Model::DescribeNetDetectStatesRequest& request, const DescribeNetDetectStatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetDetectStatesOutcomeCallable DescribeNetDetectStatesCallable(const Model::DescribeNetDetectStatesRequest& request);

                /**
                 *This API (DescribeNetDetects) is used to query the list of network detection instances.
                 * @param req DescribeNetDetectsRequest
                 * @return DescribeNetDetectsOutcome
                 */
                DescribeNetDetectsOutcome DescribeNetDetects(const Model::DescribeNetDetectsRequest &request);
                void DescribeNetDetectsAsync(const Model::DescribeNetDetectsRequest& request, const DescribeNetDetectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetDetectsOutcomeCallable DescribeNetDetectsCallable(const Model::DescribeNetDetectsRequest& request);

                /**
                 *This API is used to query the list of in/outbound network ACL quintuple entries.
                 * @param req DescribeNetworkAclQuintupleEntriesRequest
                 * @return DescribeNetworkAclQuintupleEntriesOutcome
                 */
                DescribeNetworkAclQuintupleEntriesOutcome DescribeNetworkAclQuintupleEntries(const Model::DescribeNetworkAclQuintupleEntriesRequest &request);
                void DescribeNetworkAclQuintupleEntriesAsync(const Model::DescribeNetworkAclQuintupleEntriesRequest& request, const DescribeNetworkAclQuintupleEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkAclQuintupleEntriesOutcomeCallable DescribeNetworkAclQuintupleEntriesCallable(const Model::DescribeNetworkAclQuintupleEntriesRequest& request);

                /**
                 *This API is used to query a list of network ACLs.
                 * @param req DescribeNetworkAclsRequest
                 * @return DescribeNetworkAclsOutcome
                 */
                DescribeNetworkAclsOutcome DescribeNetworkAcls(const Model::DescribeNetworkAclsRequest &request);
                void DescribeNetworkAclsAsync(const Model::DescribeNetworkAclsRequest& request, const DescribeNetworkAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkAclsOutcomeCallable DescribeNetworkAclsCallable(const Model::DescribeNetworkAclsRequest& request);

                /**
                 *This API (DescribeNetworkInterfaceLimit) is used to query the ENI quota based on the ID of CVM instance or ENI. It returns the ENI quota to which the CVM instance can be bound and the IP address quota that can be allocated to the ENI.
                 * @param req DescribeNetworkInterfaceLimitRequest
                 * @return DescribeNetworkInterfaceLimitOutcome
                 */
                DescribeNetworkInterfaceLimitOutcome DescribeNetworkInterfaceLimit(const Model::DescribeNetworkInterfaceLimitRequest &request);
                void DescribeNetworkInterfaceLimitAsync(const Model::DescribeNetworkInterfaceLimitRequest& request, const DescribeNetworkInterfaceLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkInterfaceLimitOutcomeCallable DescribeNetworkInterfaceLimitCallable(const Model::DescribeNetworkInterfaceLimitRequest& request);

                /**
                 *This API (DescribeNetworkInterfaces) is used to query the ENI list.
                 * @param req DescribeNetworkInterfacesRequest
                 * @return DescribeNetworkInterfacesOutcome
                 */
                DescribeNetworkInterfacesOutcome DescribeNetworkInterfaces(const Model::DescribeNetworkInterfacesRequest &request);
                void DescribeNetworkInterfacesAsync(const Model::DescribeNetworkInterfacesRequest& request, const DescribeNetworkInterfacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkInterfacesOutcomeCallable DescribeNetworkInterfacesCallable(const Model::DescribeNetworkInterfacesRequest& request);

                /**
                 *This API is used to query route tables.
                 * @param req DescribeRouteTablesRequest
                 * @return DescribeRouteTablesOutcome
                 */
                DescribeRouteTablesOutcome DescribeRouteTables(const Model::DescribeRouteTablesRequest &request);
                void DescribeRouteTablesAsync(const Model::DescribeRouteTablesRequest& request, const DescribeRouteTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRouteTablesOutcomeCallable DescribeRouteTablesCallable(const Model::DescribeRouteTablesRequest& request);

                /**
                 *This API (DescribeSecurityGroupAssociationStatistics) is used to query statistics on the instances associated with a security group.
                 * @param req DescribeSecurityGroupAssociationStatisticsRequest
                 * @return DescribeSecurityGroupAssociationStatisticsOutcome
                 */
                DescribeSecurityGroupAssociationStatisticsOutcome DescribeSecurityGroupAssociationStatistics(const Model::DescribeSecurityGroupAssociationStatisticsRequest &request);
                void DescribeSecurityGroupAssociationStatisticsAsync(const Model::DescribeSecurityGroupAssociationStatisticsRequest& request, const DescribeSecurityGroupAssociationStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupAssociationStatisticsOutcomeCallable DescribeSecurityGroupAssociationStatisticsCallable(const Model::DescribeSecurityGroupAssociationStatisticsRequest& request);

                /**
                 *This API (DescribeSecurityGroupPolicies) is used to query security group policies.
                 * @param req DescribeSecurityGroupPoliciesRequest
                 * @return DescribeSecurityGroupPoliciesOutcome
                 */
                DescribeSecurityGroupPoliciesOutcome DescribeSecurityGroupPolicies(const Model::DescribeSecurityGroupPoliciesRequest &request);
                void DescribeSecurityGroupPoliciesAsync(const Model::DescribeSecurityGroupPoliciesRequest& request, const DescribeSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupPoliciesOutcomeCallable DescribeSecurityGroupPoliciesCallable(const Model::DescribeSecurityGroupPoliciesRequest& request);

                /**
                 *This API (DescribeSecurityGroupReferences) is used to query referred security groups.
                 * @param req DescribeSecurityGroupReferencesRequest
                 * @return DescribeSecurityGroupReferencesOutcome
                 */
                DescribeSecurityGroupReferencesOutcome DescribeSecurityGroupReferences(const Model::DescribeSecurityGroupReferencesRequest &request);
                void DescribeSecurityGroupReferencesAsync(const Model::DescribeSecurityGroupReferencesRequest& request, const DescribeSecurityGroupReferencesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupReferencesOutcomeCallable DescribeSecurityGroupReferencesCallable(const Model::DescribeSecurityGroupReferencesRequest& request);

                /**
                 *This API (DescribeSecurityGroups) is used to query security groups.
                 * @param req DescribeSecurityGroupsRequest
                 * @return DescribeSecurityGroupsOutcome
                 */
                DescribeSecurityGroupsOutcome DescribeSecurityGroups(const Model::DescribeSecurityGroupsRequest &request);
                void DescribeSecurityGroupsAsync(const Model::DescribeSecurityGroupsRequest& request, const DescribeSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityGroupsOutcomeCallable DescribeSecurityGroupsCallable(const Model::DescribeSecurityGroupsRequest& request);

                /**
                 *This API (DescribeServiceTemplateGroups) is used to query a protocol port template group.
                 * @param req DescribeServiceTemplateGroupsRequest
                 * @return DescribeServiceTemplateGroupsOutcome
                 */
                DescribeServiceTemplateGroupsOutcome DescribeServiceTemplateGroups(const Model::DescribeServiceTemplateGroupsRequest &request);
                void DescribeServiceTemplateGroupsAsync(const Model::DescribeServiceTemplateGroupsRequest& request, const DescribeServiceTemplateGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceTemplateGroupsOutcomeCallable DescribeServiceTemplateGroupsCallable(const Model::DescribeServiceTemplateGroupsRequest& request);

                /**
                 *This API (DescribeServiceTemplates) is used to query protocol port templates.
                 * @param req DescribeServiceTemplatesRequest
                 * @return DescribeServiceTemplatesOutcome
                 */
                DescribeServiceTemplatesOutcome DescribeServiceTemplates(const Model::DescribeServiceTemplatesRequest &request);
                void DescribeServiceTemplatesAsync(const Model::DescribeServiceTemplatesRequest& request, const DescribeServiceTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceTemplatesOutcomeCallable DescribeServiceTemplatesCallable(const Model::DescribeServiceTemplatesRequest& request);

                /**
                 *This API is used to query the snapshot file contents.
                 * @param req DescribeSgSnapshotFileContentRequest
                 * @return DescribeSgSnapshotFileContentOutcome
                 */
                DescribeSgSnapshotFileContentOutcome DescribeSgSnapshotFileContent(const Model::DescribeSgSnapshotFileContentRequest &request);
                void DescribeSgSnapshotFileContentAsync(const Model::DescribeSgSnapshotFileContentRequest& request, const DescribeSgSnapshotFileContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSgSnapshotFileContentOutcomeCallable DescribeSgSnapshotFileContentCallable(const Model::DescribeSgSnapshotFileContentRequest& request);

                /**
                 *This API is used to query instances associated with a snapshot policy.
                 * @param req DescribeSnapshotAttachedInstancesRequest
                 * @return DescribeSnapshotAttachedInstancesOutcome
                 */
                DescribeSnapshotAttachedInstancesOutcome DescribeSnapshotAttachedInstances(const Model::DescribeSnapshotAttachedInstancesRequest &request);
                void DescribeSnapshotAttachedInstancesAsync(const Model::DescribeSnapshotAttachedInstancesRequest& request, const DescribeSnapshotAttachedInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotAttachedInstancesOutcomeCallable DescribeSnapshotAttachedInstancesCallable(const Model::DescribeSnapshotAttachedInstancesRequest& request);

                /**
                 *This API is used to query snapshot files.
                 * @param req DescribeSnapshotFilesRequest
                 * @return DescribeSnapshotFilesOutcome
                 */
                DescribeSnapshotFilesOutcome DescribeSnapshotFiles(const Model::DescribeSnapshotFilesRequest &request);
                void DescribeSnapshotFilesAsync(const Model::DescribeSnapshotFilesRequest& request, const DescribeSnapshotFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotFilesOutcomeCallable DescribeSnapshotFilesCallable(const Model::DescribeSnapshotFilesRequest& request);

                /**
                 *This API is used to query snapshot policies.
                 * @param req DescribeSnapshotPoliciesRequest
                 * @return DescribeSnapshotPoliciesOutcome
                 */
                DescribeSnapshotPoliciesOutcome DescribeSnapshotPolicies(const Model::DescribeSnapshotPoliciesRequest &request);
                void DescribeSnapshotPoliciesAsync(const Model::DescribeSnapshotPoliciesRequest& request, const DescribeSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSnapshotPoliciesOutcomeCallable DescribeSnapshotPoliciesCallable(const Model::DescribeSnapshotPoliciesRequest& request);

                /**
                 *This API is used to query the subnet resource.
                 * @param req DescribeSubnetResourceDashboardRequest
                 * @return DescribeSubnetResourceDashboardOutcome
                 */
                DescribeSubnetResourceDashboardOutcome DescribeSubnetResourceDashboard(const Model::DescribeSubnetResourceDashboardRequest &request);
                void DescribeSubnetResourceDashboardAsync(const Model::DescribeSubnetResourceDashboardRequest& request, const DescribeSubnetResourceDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetResourceDashboardOutcomeCallable DescribeSubnetResourceDashboardCallable(const Model::DescribeSubnetResourceDashboardRequest& request);

                /**
                 *This API (DescribeSubnets) is used to query the list of subnets.
                 * @param req DescribeSubnetsRequest
                 * @return DescribeSubnetsOutcome
                 */
                DescribeSubnetsOutcome DescribeSubnets(const Model::DescribeSubnetsRequest &request);
                void DescribeSubnetsAsync(const Model::DescribeSubnetsRequest& request, const DescribeSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubnetsOutcomeCallable DescribeSubnetsCallable(const Model::DescribeSubnetsRequest& request);

                /**
                 *This API is used to query the EIP async job execution results.
                 * @param req DescribeTaskResultRequest
                 * @return DescribeTaskResultOutcome
                 */
                DescribeTaskResultOutcome DescribeTaskResult(const Model::DescribeTaskResultRequest &request);
                void DescribeTaskResultAsync(const Model::DescribeTaskResultRequest& request, const DescribeTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskResultOutcomeCallable DescribeTaskResultCallable(const Model::DescribeTaskResultRequest& request);

                /**
                 *This API is used to query the details of shared traffic packages.
                 * @param req DescribeTrafficPackagesRequest
                 * @return DescribeTrafficPackagesOutcome
                 */
                DescribeTrafficPackagesOutcome DescribeTrafficPackages(const Model::DescribeTrafficPackagesRequest &request);
                void DescribeTrafficPackagesAsync(const Model::DescribeTrafficPackagesRequest& request, const DescribeTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrafficPackagesOutcomeCallable DescribeTrafficPackagesCallable(const Model::DescribeTrafficPackagesRequest& request);

                /**
                 *This API is used to query the IP usage of a subnet or VPC.
If the IP is occupied, the resource type and ID associated with the are is returned. If the IP is not used, it returns null.
                 * @param req DescribeUsedIpAddressRequest
                 * @return DescribeUsedIpAddressOutcome
                 */
                DescribeUsedIpAddressOutcome DescribeUsedIpAddress(const Model::DescribeUsedIpAddressRequest &request);
                void DescribeUsedIpAddressAsync(const Model::DescribeUsedIpAddressRequest& request, const DescribeUsedIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsedIpAddressOutcomeCallable DescribeUsedIpAddressCallable(const Model::DescribeUsedIpAddressRequest& request);

                /**
                 *This API is used to query the endpoint list.
                 * @param req DescribeVpcEndPointRequest
                 * @return DescribeVpcEndPointOutcome
                 */
                DescribeVpcEndPointOutcome DescribeVpcEndPoint(const Model::DescribeVpcEndPointRequest &request);
                void DescribeVpcEndPointAsync(const Model::DescribeVpcEndPointRequest& request, const DescribeVpcEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcEndPointOutcomeCallable DescribeVpcEndPointCallable(const Model::DescribeVpcEndPointRequest& request);

                /**
                 *This API is used to query the endpoint service list.
                 * @param req DescribeVpcEndPointServiceRequest
                 * @return DescribeVpcEndPointServiceOutcome
                 */
                DescribeVpcEndPointServiceOutcome DescribeVpcEndPointService(const Model::DescribeVpcEndPointServiceRequest &request);
                void DescribeVpcEndPointServiceAsync(const Model::DescribeVpcEndPointServiceRequest& request, const DescribeVpcEndPointServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcEndPointServiceOutcomeCallable DescribeVpcEndPointServiceCallable(const Model::DescribeVpcEndPointServiceRequest& request);

                /**
                 *This API is used to query the endpoint service allowlist.
                 * @param req DescribeVpcEndPointServiceWhiteListRequest
                 * @return DescribeVpcEndPointServiceWhiteListOutcome
                 */
                DescribeVpcEndPointServiceWhiteListOutcome DescribeVpcEndPointServiceWhiteList(const Model::DescribeVpcEndPointServiceWhiteListRequest &request);
                void DescribeVpcEndPointServiceWhiteListAsync(const Model::DescribeVpcEndPointServiceWhiteListRequest& request, const DescribeVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcEndPointServiceWhiteListOutcomeCallable DescribeVpcEndPointServiceWhiteListCallable(const Model::DescribeVpcEndPointServiceWhiteListRequest& request);

                /**
                 * This API (DescribeVpcInstances) is used to query a list of VCM instances on VPC.
                 * @param req DescribeVpcInstancesRequest
                 * @return DescribeVpcInstancesOutcome
                 */
                DescribeVpcInstancesOutcome DescribeVpcInstances(const Model::DescribeVpcInstancesRequest &request);
                void DescribeVpcInstancesAsync(const Model::DescribeVpcInstancesRequest& request, const DescribeVpcInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcInstancesOutcomeCallable DescribeVpcInstancesCallable(const Model::DescribeVpcInstancesRequest& request);

                /**
                 *This API (DescribeVpcIpv6Addresses) is used to query `VPC` `IPv6` information.
This API is used to query only the information of `IPv6` addresses that are already in use. When querying IPs that have not yet been used, this API will not report an error, but the IPs will not appear in the returned results.
                 * @param req DescribeVpcIpv6AddressesRequest
                 * @return DescribeVpcIpv6AddressesOutcome
                 */
                DescribeVpcIpv6AddressesOutcome DescribeVpcIpv6Addresses(const Model::DescribeVpcIpv6AddressesRequest &request);
                void DescribeVpcIpv6AddressesAsync(const Model::DescribeVpcIpv6AddressesRequest& request, const DescribeVpcIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcIpv6AddressesOutcomeCallable DescribeVpcIpv6AddressesCallable(const Model::DescribeVpcIpv6AddressesRequest& request);

                /**
                 *This API (DescribeVpcPrivateIpAddresses) is used to query the private IP information of a VPC.<br />
This API is used to query only the information of IP addresses that are already in use. When querying IPs that have not yet been used, this API will not report an error, but the IPs will not appear in the returned results.
                 * @param req DescribeVpcPrivateIpAddressesRequest
                 * @return DescribeVpcPrivateIpAddressesOutcome
                 */
                DescribeVpcPrivateIpAddressesOutcome DescribeVpcPrivateIpAddresses(const Model::DescribeVpcPrivateIpAddressesRequest &request);
                void DescribeVpcPrivateIpAddressesAsync(const Model::DescribeVpcPrivateIpAddressesRequest& request, const DescribeVpcPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcPrivateIpAddressesOutcomeCallable DescribeVpcPrivateIpAddressesCallable(const Model::DescribeVpcPrivateIpAddressesRequest& request);

                /**
                 *View VPC resources.
                 * @param req DescribeVpcResourceDashboardRequest
                 * @return DescribeVpcResourceDashboardOutcome
                 */
                DescribeVpcResourceDashboardOutcome DescribeVpcResourceDashboard(const Model::DescribeVpcResourceDashboardRequest &request);
                void DescribeVpcResourceDashboardAsync(const Model::DescribeVpcResourceDashboardRequest& request, const DescribeVpcResourceDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcResourceDashboardOutcomeCallable DescribeVpcResourceDashboardCallable(const Model::DescribeVpcResourceDashboardRequest& request);

                /**
                 *This API is used to query the execution result of a VPC task.
                 * @param req DescribeVpcTaskResultRequest
                 * @return DescribeVpcTaskResultOutcome
                 */
                DescribeVpcTaskResultOutcome DescribeVpcTaskResult(const Model::DescribeVpcTaskResultRequest &request);
                void DescribeVpcTaskResultAsync(const Model::DescribeVpcTaskResultRequest& request, const DescribeVpcTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcTaskResultOutcomeCallable DescribeVpcTaskResultCallable(const Model::DescribeVpcTaskResultRequest& request);

                /**
                 *This API (DescribeVpcs) is used to query the VPC list.
                 * @param req DescribeVpcsRequest
                 * @return DescribeVpcsOutcome
                 */
                DescribeVpcsOutcome DescribeVpcs(const Model::DescribeVpcsRequest &request);
                void DescribeVpcsAsync(const Model::DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcsOutcomeCallable DescribeVpcsCallable(const Model::DescribeVpcsRequest& request);

                /**
                 *This API is used to used to query the list of VPN tunnels.
                 * @param req DescribeVpnConnectionsRequest
                 * @return DescribeVpnConnectionsOutcome
                 */
                DescribeVpnConnectionsOutcome DescribeVpnConnections(const Model::DescribeVpnConnectionsRequest &request);
                void DescribeVpnConnectionsAsync(const Model::DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnConnectionsOutcomeCallable DescribeVpnConnectionsCallable(const Model::DescribeVpnConnectionsRequest& request);

                /**
                 *This API is used to query VPN gateway-based CCN routes.
                 * @param req DescribeVpnGatewayCcnRoutesRequest
                 * @return DescribeVpnGatewayCcnRoutesOutcome
                 */
                DescribeVpnGatewayCcnRoutesOutcome DescribeVpnGatewayCcnRoutes(const Model::DescribeVpnGatewayCcnRoutesRequest &request);
                void DescribeVpnGatewayCcnRoutesAsync(const Model::DescribeVpnGatewayCcnRoutesRequest& request, const DescribeVpnGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnGatewayCcnRoutesOutcomeCallable DescribeVpnGatewayCcnRoutesCallable(const Model::DescribeVpnGatewayCcnRoutesRequest& request);

                /**
                 *This API is used to query VPN gateway routes.
                 * @param req DescribeVpnGatewayRoutesRequest
                 * @return DescribeVpnGatewayRoutesOutcome
                 */
                DescribeVpnGatewayRoutesOutcome DescribeVpnGatewayRoutes(const Model::DescribeVpnGatewayRoutesRequest &request);
                void DescribeVpnGatewayRoutesAsync(const Model::DescribeVpnGatewayRoutesRequest& request, const DescribeVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnGatewayRoutesOutcomeCallable DescribeVpnGatewayRoutesCallable(const Model::DescribeVpnGatewayRoutesRequest& request);

                /**
                 *This API (DescribeVpnGateways) is used to query the VPN gateway list.
                 * @param req DescribeVpnGatewaysRequest
                 * @return DescribeVpnGatewaysOutcome
                 */
                DescribeVpnGatewaysOutcome DescribeVpnGateways(const Model::DescribeVpnGatewaysRequest &request);
                void DescribeVpnGatewaysAsync(const Model::DescribeVpnGatewaysRequest& request, const DescribeVpnGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnGatewaysOutcomeCallable DescribeVpnGatewaysCallable(const Model::DescribeVpnGatewaysRequest& request);

                /**
                 *This API (DetachCcnInstances) is used to unbind a specified network instance from a CCN instance.<br />
After unbinding the network instance, the corresponding routing policy will also be deleted.
                 * @param req DetachCcnInstancesRequest
                 * @return DetachCcnInstancesOutcome
                 */
                DetachCcnInstancesOutcome DetachCcnInstances(const Model::DetachCcnInstancesRequest &request);
                void DetachCcnInstancesAsync(const Model::DetachCcnInstancesRequest& request, const DetachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachCcnInstancesOutcomeCallable DetachCcnInstancesCallable(const Model::DetachCcnInstancesRequest& request);

                /**
                 *This API is used to delete a Classiclink.
>?This API is async. You can call the [`DescribeVpcTaskResult`](https://intl.cloud.tencent.com/document/api/215/59037?from_cn_redirect=1) API to query the task result. When the task is completed, you can continue other tasks.
>
                 * @param req DetachClassicLinkVpcRequest
                 * @return DetachClassicLinkVpcOutcome
                 */
                DetachClassicLinkVpcOutcome DetachClassicLinkVpc(const Model::DetachClassicLinkVpcRequest &request);
                void DetachClassicLinkVpcAsync(const Model::DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachClassicLinkVpcOutcomeCallable DetachClassicLinkVpcCallable(const Model::DetachClassicLinkVpcRequest& request);

                /**
                 *This API is used to unbind an ENI from a CVM.
This API is completed asynchronously. If you need to query the execution result of an async task, please use the `RequestId` returned by this API to poll the `DescribeVpcTaskResult` API.
                 * @param req DetachNetworkInterfaceRequest
                 * @return DetachNetworkInterfaceOutcome
                 */
                DetachNetworkInterfaceOutcome DetachNetworkInterface(const Model::DetachNetworkInterfaceRequest &request);
                void DetachNetworkInterfaceAsync(const Model::DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachNetworkInterfaceOutcomeCallable DetachNetworkInterfaceCallable(const Model::DetachNetworkInterfaceRequest& request);

                /**
                 *This API is used to disassociate a snapshot policy with instances.
                 * @param req DetachSnapshotInstancesRequest
                 * @return DetachSnapshotInstancesOutcome
                 */
                DetachSnapshotInstancesOutcome DetachSnapshotInstances(const Model::DetachSnapshotInstancesRequest &request);
                void DetachSnapshotInstancesAsync(const Model::DetachSnapshotInstancesRequest& request, const DetachSnapshotInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachSnapshotInstancesOutcomeCallable DetachSnapshotInstancesCallable(const Model::DetachSnapshotInstancesRequest& request);

                /**
                 *This API (DisableCcnRoutes) is used to disable CCN routes that are already enabled.
                 * @param req DisableCcnRoutesRequest
                 * @return DisableCcnRoutesOutcome
                 */
                DisableCcnRoutesOutcome DisableCcnRoutes(const Model::DisableCcnRoutesRequest &request);
                void DisableCcnRoutesAsync(const Model::DisableCcnRoutesRequest& request, const DisableCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableCcnRoutesOutcomeCallable DisableCcnRoutesCallable(const Model::DisableCcnRoutesRequest& request);

                /**
                 *This API is used to disable flow log.
                 * @param req DisableFlowLogsRequest
                 * @return DisableFlowLogsOutcome
                 */
                DisableFlowLogsOutcome DisableFlowLogs(const Model::DisableFlowLogsRequest &request);
                void DisableFlowLogsAsync(const Model::DisableFlowLogsRequest& request, const DisableFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableFlowLogsOutcomeCallable DisableFlowLogsCallable(const Model::DisableFlowLogsRequest& request);

                /**
                 *This API is used to disable gateway traffic monitor.
                 * @param req DisableGatewayFlowMonitorRequest
                 * @return DisableGatewayFlowMonitorOutcome
                 */
                DisableGatewayFlowMonitorOutcome DisableGatewayFlowMonitor(const Model::DisableGatewayFlowMonitorRequest &request);
                void DisableGatewayFlowMonitorAsync(const Model::DisableGatewayFlowMonitorRequest& request, const DisableGatewayFlowMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableGatewayFlowMonitorOutcomeCallable DisableGatewayFlowMonitorCallable(const Model::DisableGatewayFlowMonitorRequest& request);

                /**
                 *This API is used to disable specified snapshot policies.
                 * @param req DisableSnapshotPoliciesRequest
                 * @return DisableSnapshotPoliciesOutcome
                 */
                DisableSnapshotPoliciesOutcome DisableSnapshotPolicies(const Model::DisableSnapshotPoliciesRequest &request);
                void DisableSnapshotPoliciesAsync(const Model::DisableSnapshotPoliciesRequest& request, const DisableSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableSnapshotPoliciesOutcomeCallable DisableSnapshotPoliciesCallable(const Model::DisableSnapshotPoliciesRequest& request);

                /**
                 *This API is used to unbind an [Elastic IP](https://intl.cloud.tencent.com/document/product/213/1941?from_cn_redirect=1) (EIP for short).
* This API supports unbinding an EIP from CVM instances and ENIs.
* This API does not support unbinding an EIP from a NAT Gateway. To unbind an EIP from a NAT Gateway, use the [`DisassociateNatGatewayAddress`](https://intl.cloud.tencent.com/document/api/215/36716?from_cn_redirect=1) API.
* Only EIPs in BIND or BIND_ENI status can be unbound.
* Blocked EIPs cannot be unbound.
                 * @param req DisassociateAddressRequest
                 * @return DisassociateAddressOutcome
                 */
                DisassociateAddressOutcome DisassociateAddress(const Model::DisassociateAddressRequest &request);
                void DisassociateAddressAsync(const Model::DisassociateAddressRequest& request, const DisassociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateAddressOutcomeCallable DisassociateAddressCallable(const Model::DisassociateAddressRequest& request);

                /**
                 *This API is used to unbind a direct connect gateway from a NAT Gateway. After unbinding, the direct connect gateway cannot access internet through the NAT Gateway.
                 * @param req DisassociateDirectConnectGatewayNatGatewayRequest
                 * @return DisassociateDirectConnectGatewayNatGatewayOutcome
                 */
                DisassociateDirectConnectGatewayNatGatewayOutcome DisassociateDirectConnectGatewayNatGateway(const Model::DisassociateDirectConnectGatewayNatGatewayRequest &request);
                void DisassociateDirectConnectGatewayNatGatewayAsync(const Model::DisassociateDirectConnectGatewayNatGatewayRequest& request, const DisassociateDirectConnectGatewayNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateDirectConnectGatewayNatGatewayOutcomeCallable DisassociateDirectConnectGatewayNatGatewayCallable(const Model::DisassociateDirectConnectGatewayNatGatewayRequest& request);

                /**
                 *This API is used to unbind an EIP from a NAT gateway.
                 * @param req DisassociateNatGatewayAddressRequest
                 * @return DisassociateNatGatewayAddressOutcome
                 */
                DisassociateNatGatewayAddressOutcome DisassociateNatGatewayAddress(const Model::DisassociateNatGatewayAddressRequest &request);
                void DisassociateNatGatewayAddressAsync(const Model::DisassociateNatGatewayAddressRequest& request, const DisassociateNatGatewayAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateNatGatewayAddressOutcomeCallable DisassociateNatGatewayAddressCallable(const Model::DisassociateNatGatewayAddressRequest& request);

                /**
                 *This API is used to disassociate a network ACL from subnets in a VPC instance.
                 * @param req DisassociateNetworkAclSubnetsRequest
                 * @return DisassociateNetworkAclSubnetsOutcome
                 */
                DisassociateNetworkAclSubnetsOutcome DisassociateNetworkAclSubnets(const Model::DisassociateNetworkAclSubnetsRequest &request);
                void DisassociateNetworkAclSubnetsAsync(const Model::DisassociateNetworkAclSubnetsRequest& request, const DisassociateNetworkAclSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateNetworkAclSubnetsOutcomeCallable DisassociateNetworkAclSubnetsCallable(const Model::DisassociateNetworkAclSubnetsRequest& request);

                /**
                 *This API (DisassociateNetworkInterfaceSecurityGroups) is used to detach (or fully detach if possible) a security group from an ENI.
                 * @param req DisassociateNetworkInterfaceSecurityGroupsRequest
                 * @return DisassociateNetworkInterfaceSecurityGroupsOutcome
                 */
                DisassociateNetworkInterfaceSecurityGroupsOutcome DisassociateNetworkInterfaceSecurityGroups(const Model::DisassociateNetworkInterfaceSecurityGroupsRequest &request);
                void DisassociateNetworkInterfaceSecurityGroupsAsync(const Model::DisassociateNetworkInterfaceSecurityGroupsRequest& request, const DisassociateNetworkInterfaceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateNetworkInterfaceSecurityGroupsOutcomeCallable DisassociateNetworkInterfaceSecurityGroupsCallable(const Model::DisassociateNetworkInterfaceSecurityGroupsRequest& request);

                /**
                 *This API is used to unbind an endpoint from a security group.
                 * @param req DisassociateVpcEndPointSecurityGroupsRequest
                 * @return DisassociateVpcEndPointSecurityGroupsOutcome
                 */
                DisassociateVpcEndPointSecurityGroupsOutcome DisassociateVpcEndPointSecurityGroups(const Model::DisassociateVpcEndPointSecurityGroupsRequest &request);
                void DisassociateVpcEndPointSecurityGroupsAsync(const Model::DisassociateVpcEndPointSecurityGroupsRequest& request, const DisassociateVpcEndPointSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateVpcEndPointSecurityGroupsOutcomeCallable DisassociateVpcEndPointSecurityGroupsCallable(const Model::DisassociateVpcEndPointSecurityGroupsRequest& request);

                /**
                 *This API is used to download VPN tunnel configurations.
                 * @param req DownloadCustomerGatewayConfigurationRequest
                 * @return DownloadCustomerGatewayConfigurationOutcome
                 */
                DownloadCustomerGatewayConfigurationOutcome DownloadCustomerGatewayConfiguration(const Model::DownloadCustomerGatewayConfigurationRequest &request);
                void DownloadCustomerGatewayConfigurationAsync(const Model::DownloadCustomerGatewayConfigurationRequest& request, const DownloadCustomerGatewayConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadCustomerGatewayConfigurationOutcomeCallable DownloadCustomerGatewayConfigurationCallable(const Model::DownloadCustomerGatewayConfigurationRequest& request);

                /**
                 *This API (EnableCcnRoutes) is used to enable CCN routes that are already added.<br />
This API is used to verify whether there will be conflict with an existing route after a CCN route is enabled. If there is a conflict, the route will not be enabled, and the process will fail. When a conflict occurs, you must disable the conflicting route before you can enable the desired route.
                 * @param req EnableCcnRoutesRequest
                 * @return EnableCcnRoutesOutcome
                 */
                EnableCcnRoutesOutcome EnableCcnRoutes(const Model::EnableCcnRoutesRequest &request);
                void EnableCcnRoutesAsync(const Model::EnableCcnRoutesRequest& request, const EnableCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableCcnRoutesOutcomeCallable EnableCcnRoutesCallable(const Model::EnableCcnRoutesRequest& request);

                /**
                 *This API is used to enable flow log.
                 * @param req EnableFlowLogsRequest
                 * @return EnableFlowLogsOutcome
                 */
                EnableFlowLogsOutcome EnableFlowLogs(const Model::EnableFlowLogsRequest &request);
                void EnableFlowLogsAsync(const Model::EnableFlowLogsRequest& request, const EnableFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableFlowLogsOutcomeCallable EnableFlowLogsCallable(const Model::EnableFlowLogsRequest& request);

                /**
                 *This API is used to enable gateway traffic monitor.
                 * @param req EnableGatewayFlowMonitorRequest
                 * @return EnableGatewayFlowMonitorOutcome
                 */
                EnableGatewayFlowMonitorOutcome EnableGatewayFlowMonitor(const Model::EnableGatewayFlowMonitorRequest &request);
                void EnableGatewayFlowMonitorAsync(const Model::EnableGatewayFlowMonitorRequest& request, const EnableGatewayFlowMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableGatewayFlowMonitorOutcomeCallable EnableGatewayFlowMonitorCallable(const Model::EnableGatewayFlowMonitorRequest& request);

                /**
                 *This API is used to enable specified snapshot policies. 
                 * @param req EnableSnapshotPoliciesRequest
                 * @return EnableSnapshotPoliciesOutcome
                 */
                EnableSnapshotPoliciesOutcome EnableSnapshotPolicies(const Model::EnableSnapshotPoliciesRequest &request);
                void EnableSnapshotPoliciesAsync(const Model::EnableSnapshotPoliciesRequest& request, const EnableSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableSnapshotPoliciesOutcomeCallable EnableSnapshotPoliciesCallable(const Model::EnableSnapshotPoliciesRequest& request);

                /**
                 *This API is used to determine whether to accept the request of connecting with an endpoint.
                 * @param req EnableVpcEndPointConnectRequest
                 * @return EnableVpcEndPointConnectOutcome
                 */
                EnableVpcEndPointConnectOutcome EnableVpcEndPointConnect(const Model::EnableVpcEndPointConnectRequest &request);
                void EnableVpcEndPointConnectAsync(const Model::EnableVpcEndPointConnectRequest& request, const EnableVpcEndPointConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableVpcEndPointConnectOutcomeCallable EnableVpcEndPointConnectCallable(const Model::EnableVpcEndPointConnectRequest& request);

                /**
                 *This API is used to get a pair of VPN tunnel health check addresses. 
                 * @param req GenerateVpnConnectionDefaultHealthCheckIpRequest
                 * @return GenerateVpnConnectionDefaultHealthCheckIpOutcome
                 */
                GenerateVpnConnectionDefaultHealthCheckIpOutcome GenerateVpnConnectionDefaultHealthCheckIp(const Model::GenerateVpnConnectionDefaultHealthCheckIpRequest &request);
                void GenerateVpnConnectionDefaultHealthCheckIpAsync(const Model::GenerateVpnConnectionDefaultHealthCheckIpRequest& request, const GenerateVpnConnectionDefaultHealthCheckIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateVpnConnectionDefaultHealthCheckIpOutcomeCallable GenerateVpnConnectionDefaultHealthCheckIpCallable(const Model::GenerateVpnConnectionDefaultHealthCheckIpRequest& request);

                /**
                 *This API is used to query the bandwidth limits of a CCN instance. Monthly-subscribed CCNs only support Inter-region Bandwidth Limits, while the pay-as-you-go CCNs support both the Inter-region Bandwidth Limits and Region Outbound Bandwidth Limits. 
                 * @param req GetCcnRegionBandwidthLimitsRequest
                 * @return GetCcnRegionBandwidthLimitsOutcome
                 */
                GetCcnRegionBandwidthLimitsOutcome GetCcnRegionBandwidthLimits(const Model::GetCcnRegionBandwidthLimitsRequest &request);
                void GetCcnRegionBandwidthLimitsAsync(const Model::GetCcnRegionBandwidthLimitsRequest& request, const GetCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCcnRegionBandwidthLimitsOutcomeCallable GetCcnRegionBandwidthLimitsCallable(const Model::GetCcnRegionBandwidthLimitsRequest& request);

                /**
                 *This API is used to bind an EIP to an HAVIP. <br />
This API is completed asynchronously. If you need to query the execution result of an async task, please use the `RequestId` returned by this API to poll the `DescribeVpcTaskResult` API.
                 * @param req HaVipAssociateAddressIpRequest
                 * @return HaVipAssociateAddressIpOutcome
                 */
                HaVipAssociateAddressIpOutcome HaVipAssociateAddressIp(const Model::HaVipAssociateAddressIpRequest &request);
                void HaVipAssociateAddressIpAsync(const Model::HaVipAssociateAddressIpRequest& request, const HaVipAssociateAddressIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HaVipAssociateAddressIpOutcomeCallable HaVipAssociateAddressIpCallable(const Model::HaVipAssociateAddressIpRequest& request);

                /**
                 *This API is used to unbind an EIP from an HAVIP. <br />
This API is completed asynchronously. If you need to query the execution result of an async task, please use the `RequestId` returned by this API to poll the `DescribeVpcTaskResult` API.
                 * @param req HaVipDisassociateAddressIpRequest
                 * @return HaVipDisassociateAddressIpOutcome
                 */
                HaVipDisassociateAddressIpOutcome HaVipDisassociateAddressIp(const Model::HaVipDisassociateAddressIpRequest &request);
                void HaVipDisassociateAddressIpAsync(const Model::HaVipDisassociateAddressIpRequest& request, const HaVipDisassociateAddressIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HaVipDisassociateAddressIpOutcomeCallable HaVipDisassociateAddressIpCallable(const Model::HaVipDisassociateAddressIpRequest& request);

                /**
                 *This API is used to query the price of creating a direct connect gateway.
                 * @param req InquirePriceCreateDirectConnectGatewayRequest
                 * @return InquirePriceCreateDirectConnectGatewayOutcome
                 */
                InquirePriceCreateDirectConnectGatewayOutcome InquirePriceCreateDirectConnectGateway(const Model::InquirePriceCreateDirectConnectGatewayRequest &request);
                void InquirePriceCreateDirectConnectGatewayAsync(const Model::InquirePriceCreateDirectConnectGatewayRequest& request, const InquirePriceCreateDirectConnectGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateDirectConnectGatewayOutcomeCallable InquirePriceCreateDirectConnectGatewayCallable(const Model::InquirePriceCreateDirectConnectGatewayRequest& request);

                /**
                 *This API (InquiryPriceRenewVpnGateway) is used to query the price for VPN gateway renewal. Currently, only querying prices for IPSEC-type gateways is supported.
                 * @param req InquiryPriceRenewVpnGatewayRequest
                 * @return InquiryPriceRenewVpnGatewayOutcome
                 */
                InquiryPriceRenewVpnGatewayOutcome InquiryPriceRenewVpnGateway(const Model::InquiryPriceRenewVpnGatewayRequest &request);
                void InquiryPriceRenewVpnGatewayAsync(const Model::InquiryPriceRenewVpnGatewayRequest& request, const InquiryPriceRenewVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceRenewVpnGatewayOutcomeCallable InquiryPriceRenewVpnGatewayCallable(const Model::InquiryPriceRenewVpnGatewayRequest& request);

                /**
                 *This API (InquiryPriceResetVpnGatewayInternetMaxBandwidth) is used to query the price for adjusting the bandwidth cap of a VPN gateway.
                 * @param req InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest
                 * @return InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome
                 */
                InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome InquiryPriceResetVpnGatewayInternetMaxBandwidth(const Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest &request);
                void InquiryPriceResetVpnGatewayInternetMaxBandwidthAsync(const Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest& request, const InquiryPriceResetVpnGatewayInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcomeCallable InquiryPriceResetVpnGatewayInternetMaxBandwidthCallable(const Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest& request);

                /**
                 *This API is used to migrate ENIs.
This API is completed asynchronously. If you need to query the execution result of an async task, please use the `RequestId` returned by this API to poll the `DescribeVpcTaskResult` API.
                 * @param req MigrateNetworkInterfaceRequest
                 * @return MigrateNetworkInterfaceOutcome
                 */
                MigrateNetworkInterfaceOutcome MigrateNetworkInterface(const Model::MigrateNetworkInterfaceRequest &request);
                void MigrateNetworkInterfaceAsync(const Model::MigrateNetworkInterfaceRequest& request, const MigrateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigrateNetworkInterfaceOutcomeCallable MigrateNetworkInterfaceCallable(const Model::MigrateNetworkInterfaceRequest& request);

                /**
                 *This API is used to migrate the private IPs between ENIs. 
* Note that primary IPs cannot be migrated. 
* The source and destination ENI must be within the same subnet.  

This API is completed asynchronously. If you need to query the execution result of an async task, please use the `RequestId` returned by this API to poll the `DescribeVpcTaskResult` API.
                 * @param req MigratePrivateIpAddressRequest
                 * @return MigratePrivateIpAddressOutcome
                 */
                MigratePrivateIpAddressOutcome MigratePrivateIpAddress(const Model::MigratePrivateIpAddressRequest &request);
                void MigratePrivateIpAddressAsync(const Model::MigratePrivateIpAddressRequest& request, const MigratePrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigratePrivateIpAddressOutcomeCallable MigratePrivateIpAddressCallable(const Model::MigratePrivateIpAddressRequest& request);

                /**
                 *This API (ModifyAddressAttribute) is used to modify the name of an [Elastic IP](https://intl.cloud.tencent.com/document/product/213/1941?from_cn_redirect=1).
                 * @param req ModifyAddressAttributeRequest
                 * @return ModifyAddressAttributeOutcome
                 */
                ModifyAddressAttributeOutcome ModifyAddressAttribute(const Model::ModifyAddressAttributeRequest &request);
                void ModifyAddressAttributeAsync(const Model::ModifyAddressAttributeRequest& request, const ModifyAddressAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressAttributeOutcomeCallable ModifyAddressAttributeCallable(const Model::ModifyAddressAttributeRequest& request);

                /**
                 *This API is used to adjust the network billing mode of an EIP. Please note that it's available to users whose network fees are billed on IPs but not CVMs.
* The network billing mode can be switched between `BANDWIDTH_PREPAID_BY_MONTH` and `TRAFFIC_POSTPAID_BY_HOUR`.
* The network billing mode for each EIP be changed for up to twice.
                 * @param req ModifyAddressInternetChargeTypeRequest
                 * @return ModifyAddressInternetChargeTypeOutcome
                 */
                ModifyAddressInternetChargeTypeOutcome ModifyAddressInternetChargeType(const Model::ModifyAddressInternetChargeTypeRequest &request);
                void ModifyAddressInternetChargeTypeAsync(const Model::ModifyAddressInternetChargeTypeRequest& request, const ModifyAddressInternetChargeTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressInternetChargeTypeOutcomeCallable ModifyAddressInternetChargeTypeCallable(const Model::ModifyAddressInternetChargeTypeRequest& request);

                /**
                 *This API (ModifyAddressTemplateAttribute) is used to modify an IP address template.
                 * @param req ModifyAddressTemplateAttributeRequest
                 * @return ModifyAddressTemplateAttributeOutcome
                 */
                ModifyAddressTemplateAttributeOutcome ModifyAddressTemplateAttribute(const Model::ModifyAddressTemplateAttributeRequest &request);
                void ModifyAddressTemplateAttributeAsync(const Model::ModifyAddressTemplateAttributeRequest& request, const ModifyAddressTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressTemplateAttributeOutcomeCallable ModifyAddressTemplateAttributeCallable(const Model::ModifyAddressTemplateAttributeRequest& request);

                /**
                 *This API (ModifyAddressTemplateGroupAttribute) is used to modify an IP address template group.
                 * @param req ModifyAddressTemplateGroupAttributeRequest
                 * @return ModifyAddressTemplateGroupAttributeOutcome
                 */
                ModifyAddressTemplateGroupAttributeOutcome ModifyAddressTemplateGroupAttribute(const Model::ModifyAddressTemplateGroupAttributeRequest &request);
                void ModifyAddressTemplateGroupAttributeAsync(const Model::ModifyAddressTemplateGroupAttributeRequest& request, const ModifyAddressTemplateGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressTemplateGroupAttributeOutcomeCallable ModifyAddressTemplateGroupAttributeCallable(const Model::ModifyAddressTemplateGroupAttributeRequest& request);

                /**
                 *This API is used to adjust the bandwidth of [Elastic IP](https://intl.cloud.tencent.com/document/product/213/1941?from_cn_redirect=1), including EIP billed on a pay-as-you-go, monthly subscription, and bandwidth package basis.
                 * @param req ModifyAddressesBandwidthRequest
                 * @return ModifyAddressesBandwidthOutcome
                 */
                ModifyAddressesBandwidthOutcome ModifyAddressesBandwidth(const Model::ModifyAddressesBandwidthRequest &request);
                void ModifyAddressesBandwidthAsync(const Model::ModifyAddressesBandwidthRequest& request, const ModifyAddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressesBandwidthOutcomeCallable ModifyAddressesBandwidthCallable(const Model::ModifyAddressesBandwidthRequest& request);

                /**
                 *This API is used to adjust the renewal flag for the monthly subscription EIP.
                 * @param req ModifyAddressesRenewFlagRequest
                 * @return ModifyAddressesRenewFlagOutcome
                 */
                ModifyAddressesRenewFlagOutcome ModifyAddressesRenewFlag(const Model::ModifyAddressesRenewFlagRequest &request);
                void ModifyAddressesRenewFlagAsync(const Model::ModifyAddressesRenewFlagRequest& request, const ModifyAddressesRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressesRenewFlagOutcomeCallable ModifyAddressesRenewFlagCallable(const Model::ModifyAddressesRenewFlagRequest& request);

                /**
                 *This API is used to batch modify (add or delete) secondary CIDR blocks.
                 * @param req ModifyAssistantCidrRequest
                 * @return ModifyAssistantCidrOutcome
                 */
                ModifyAssistantCidrOutcome ModifyAssistantCidr(const Model::ModifyAssistantCidrRequest &request);
                void ModifyAssistantCidrAsync(const Model::ModifyAssistantCidrRequest& request, const ModifyAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAssistantCidrOutcomeCallable ModifyAssistantCidrCallable(const Model::ModifyAssistantCidrRequest& request);

                /**
                 *This API is used to modify the attributes of a bandwidth package, including the bandwidth package name, and so on.
                 * @param req ModifyBandwidthPackageAttributeRequest
                 * @return ModifyBandwidthPackageAttributeOutcome
                 */
                ModifyBandwidthPackageAttributeOutcome ModifyBandwidthPackageAttribute(const Model::ModifyBandwidthPackageAttributeRequest &request);
                void ModifyBandwidthPackageAttributeAsync(const Model::ModifyBandwidthPackageAttributeRequest& request, const ModifyBandwidthPackageAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBandwidthPackageAttributeOutcomeCallable ModifyBandwidthPackageAttributeCallable(const Model::ModifyBandwidthPackageAttributeRequest& request);

                /**
                 *This API is used to adjust the bandwidth of a [bandwidth package](https://www.tencentcloud.com/document/product/684/15245).
                 * @param req ModifyBandwidthPackageBandwidthRequest
                 * @return ModifyBandwidthPackageBandwidthOutcome
                 */
                ModifyBandwidthPackageBandwidthOutcome ModifyBandwidthPackageBandwidth(const Model::ModifyBandwidthPackageBandwidthRequest &request);
                void ModifyBandwidthPackageBandwidthAsync(const Model::ModifyBandwidthPackageBandwidthRequest& request, const ModifyBandwidthPackageBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBandwidthPackageBandwidthOutcomeCallable ModifyBandwidthPackageBandwidthCallable(const Model::ModifyBandwidthPackageBandwidthRequest& request);

                /**
                 *This API is used to modify CCN-associated instance attributes. Currently, only the `description` can be modified.
                 * @param req ModifyCcnAttachedInstancesAttributeRequest
                 * @return ModifyCcnAttachedInstancesAttributeOutcome
                 */
                ModifyCcnAttachedInstancesAttributeOutcome ModifyCcnAttachedInstancesAttribute(const Model::ModifyCcnAttachedInstancesAttributeRequest &request);
                void ModifyCcnAttachedInstancesAttributeAsync(const Model::ModifyCcnAttachedInstancesAttributeRequest& request, const ModifyCcnAttachedInstancesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCcnAttachedInstancesAttributeOutcomeCallable ModifyCcnAttachedInstancesAttributeCallable(const Model::ModifyCcnAttachedInstancesAttributeRequest& request);

                /**
                 *This API (ModifyCcnAttribute) is used to modify CCN attributes.
                 * @param req ModifyCcnAttributeRequest
                 * @return ModifyCcnAttributeOutcome
                 */
                ModifyCcnAttributeOutcome ModifyCcnAttribute(const Model::ModifyCcnAttributeRequest &request);
                void ModifyCcnAttributeAsync(const Model::ModifyCcnAttributeRequest& request, const ModifyCcnAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCcnAttributeOutcomeCallable ModifyCcnAttributeCallable(const Model::ModifyCcnAttributeRequest& request);

                /**
                 *This API is used to modify the bandwidth limit policy of a postpaid CCN instance.
                 * @param req ModifyCcnRegionBandwidthLimitsTypeRequest
                 * @return ModifyCcnRegionBandwidthLimitsTypeOutcome
                 */
                ModifyCcnRegionBandwidthLimitsTypeOutcome ModifyCcnRegionBandwidthLimitsType(const Model::ModifyCcnRegionBandwidthLimitsTypeRequest &request);
                void ModifyCcnRegionBandwidthLimitsTypeAsync(const Model::ModifyCcnRegionBandwidthLimitsTypeRequest& request, const ModifyCcnRegionBandwidthLimitsTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCcnRegionBandwidthLimitsTypeOutcomeCallable ModifyCcnRegionBandwidthLimitsTypeCallable(const Model::ModifyCcnRegionBandwidthLimitsTypeRequest& request);

                /**
                 *This API (ModifyCustomerGatewayAttribute) is used to modify the customer gateway information.
                 * @param req ModifyCustomerGatewayAttributeRequest
                 * @return ModifyCustomerGatewayAttributeOutcome
                 */
                ModifyCustomerGatewayAttributeOutcome ModifyCustomerGatewayAttribute(const Model::ModifyCustomerGatewayAttributeRequest &request);
                void ModifyCustomerGatewayAttributeAsync(const Model::ModifyCustomerGatewayAttributeRequest& request, const ModifyCustomerGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomerGatewayAttributeOutcomeCallable ModifyCustomerGatewayAttributeCallable(const Model::ModifyCustomerGatewayAttributeRequest& request);

                /**
                 *This API is used to modify the attributes of a direct connect gateway.

                 * @param req ModifyDirectConnectGatewayAttributeRequest
                 * @return ModifyDirectConnectGatewayAttributeOutcome
                 */
                ModifyDirectConnectGatewayAttributeOutcome ModifyDirectConnectGatewayAttribute(const Model::ModifyDirectConnectGatewayAttributeRequest &request);
                void ModifyDirectConnectGatewayAttributeAsync(const Model::ModifyDirectConnectGatewayAttributeRequest& request, const ModifyDirectConnectGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDirectConnectGatewayAttributeOutcomeCallable ModifyDirectConnectGatewayAttributeCallable(const Model::ModifyDirectConnectGatewayAttributeRequest& request);

                /**
                 *This API is used to modify the attributes of a flow log.
                 * @param req ModifyFlowLogAttributeRequest
                 * @return ModifyFlowLogAttributeOutcome
                 */
                ModifyFlowLogAttributeOutcome ModifyFlowLogAttribute(const Model::ModifyFlowLogAttributeRequest &request);
                void ModifyFlowLogAttributeAsync(const Model::ModifyFlowLogAttributeRequest& request, const ModifyFlowLogAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFlowLogAttributeOutcomeCallable ModifyFlowLogAttributeCallable(const Model::ModifyFlowLogAttributeRequest& request);

                /**
                 *This API is used to adjust the bandwidth limit of a gateway.
                 * @param req ModifyGatewayFlowQosRequest
                 * @return ModifyGatewayFlowQosOutcome
                 */
                ModifyGatewayFlowQosOutcome ModifyGatewayFlowQos(const Model::ModifyGatewayFlowQosRequest &request);
                void ModifyGatewayFlowQosAsync(const Model::ModifyGatewayFlowQosRequest& request, const ModifyGatewayFlowQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGatewayFlowQosOutcomeCallable ModifyGatewayFlowQosCallable(const Model::ModifyGatewayFlowQosRequest& request);

                /**
                 *This API (ModifyHaVipAttribute) is used to modify HAVIP attributes.
                 * @param req ModifyHaVipAttributeRequest
                 * @return ModifyHaVipAttributeOutcome
                 */
                ModifyHaVipAttributeOutcome ModifyHaVipAttribute(const Model::ModifyHaVipAttributeRequest &request);
                void ModifyHaVipAttributeAsync(const Model::ModifyHaVipAttributeRequest& request, const ModifyHaVipAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHaVipAttributeOutcomeCallable ModifyHaVipAttributeCallable(const Model::ModifyHaVipAttributeRequest& request);

                /**
                 *This API (ModifyIpv6AddressesAttribute) is used to modify the private IPv6 address attributes of an ENI.
                 * @param req ModifyIpv6AddressesAttributeRequest
                 * @return ModifyIpv6AddressesAttributeOutcome
                 */
                ModifyIpv6AddressesAttributeOutcome ModifyIpv6AddressesAttribute(const Model::ModifyIpv6AddressesAttributeRequest &request);
                void ModifyIpv6AddressesAttributeAsync(const Model::ModifyIpv6AddressesAttributeRequest& request, const ModifyIpv6AddressesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIpv6AddressesAttributeOutcomeCallable ModifyIpv6AddressesAttributeCallable(const Model::ModifyIpv6AddressesAttributeRequest& request);

                /**
                 *This API is used to modify the local gateway of a CDC instance.
                 * @param req ModifyLocalGatewayRequest
                 * @return ModifyLocalGatewayOutcome
                 */
                ModifyLocalGatewayOutcome ModifyLocalGateway(const Model::ModifyLocalGatewayRequest &request);
                void ModifyLocalGatewayAsync(const Model::ModifyLocalGatewayRequest& request, const ModifyLocalGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLocalGatewayOutcomeCallable ModifyLocalGatewayCallable(const Model::ModifyLocalGatewayRequest& request);

                /**
                 *This API is used to modify the attributes of a NAT gateway.
                 * @param req ModifyNatGatewayAttributeRequest
                 * @return ModifyNatGatewayAttributeOutcome
                 */
                ModifyNatGatewayAttributeOutcome ModifyNatGatewayAttribute(const Model::ModifyNatGatewayAttributeRequest &request);
                void ModifyNatGatewayAttributeAsync(const Model::ModifyNatGatewayAttributeRequest& request, const ModifyNatGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatGatewayAttributeOutcomeCallable ModifyNatGatewayAttributeCallable(const Model::ModifyNatGatewayAttributeRequest& request);

                /**
                 *This API is used to modify the port forwarding rule of a NAT gateway.
                 * @param req ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest
                 * @return ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome
                 */
                ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome ModifyNatGatewayDestinationIpPortTranslationNatRule(const Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest &request);
                void ModifyNatGatewayDestinationIpPortTranslationNatRuleAsync(const Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const ModifyNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable ModifyNatGatewayDestinationIpPortTranslationNatRuleCallable(const Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest& request);

                /**
                 *This API is used to modify a NAT gateway's SNAT forwarding rules.
                 * @param req ModifyNatGatewaySourceIpTranslationNatRuleRequest
                 * @return ModifyNatGatewaySourceIpTranslationNatRuleOutcome
                 */
                ModifyNatGatewaySourceIpTranslationNatRuleOutcome ModifyNatGatewaySourceIpTranslationNatRule(const Model::ModifyNatGatewaySourceIpTranslationNatRuleRequest &request);
                void ModifyNatGatewaySourceIpTranslationNatRuleAsync(const Model::ModifyNatGatewaySourceIpTranslationNatRuleRequest& request, const ModifyNatGatewaySourceIpTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatGatewaySourceIpTranslationNatRuleOutcomeCallable ModifyNatGatewaySourceIpTranslationNatRuleCallable(const Model::ModifyNatGatewaySourceIpTranslationNatRuleRequest& request);

                /**
                 *This API (ModifyNetDetect) is used to modify network detection parameters.
                 * @param req ModifyNetDetectRequest
                 * @return ModifyNetDetectOutcome
                 */
                ModifyNetDetectOutcome ModifyNetDetect(const Model::ModifyNetDetectRequest &request);
                void ModifyNetDetectAsync(const Model::ModifyNetDetectRequest& request, const ModifyNetDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetDetectOutcomeCallable ModifyNetDetectCallable(const Model::ModifyNetDetectRequest& request);

                /**
                 *This API is used to modify the attributes of a network ACL.
                 * @param req ModifyNetworkAclAttributeRequest
                 * @return ModifyNetworkAclAttributeOutcome
                 */
                ModifyNetworkAclAttributeOutcome ModifyNetworkAclAttribute(const Model::ModifyNetworkAclAttributeRequest &request);
                void ModifyNetworkAclAttributeAsync(const Model::ModifyNetworkAclAttributeRequest& request, const ModifyNetworkAclAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkAclAttributeOutcomeCallable ModifyNetworkAclAttributeCallable(const Model::ModifyNetworkAclAttributeRequest& request);

                /**
                 *This API is used to modify (add or delete) the inbound and outbound rules of a network ACL. In `NetworkAclEntrySet` parameters,
* Passing in the new inbound/outbound rules will reset the original rules.
* Passing in the inbound rules will only reset the original inbound rules and not affect the original outbound rules, and vice versa.
                 * @param req ModifyNetworkAclEntriesRequest
                 * @return ModifyNetworkAclEntriesOutcome
                 */
                ModifyNetworkAclEntriesOutcome ModifyNetworkAclEntries(const Model::ModifyNetworkAclEntriesRequest &request);
                void ModifyNetworkAclEntriesAsync(const Model::ModifyNetworkAclEntriesRequest& request, const ModifyNetworkAclEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkAclEntriesOutcomeCallable ModifyNetworkAclEntriesCallable(const Model::ModifyNetworkAclEntriesRequest& request);

                /**
                 *This API is used to modify the in/outbound rules of the network ACL quintuple. In the `NetworkAclQuintupleEntrySet` parameters, `NetworkAclQuintupleEntryId` is required for `NetworkAclQuintupleEntry`.
                 * @param req ModifyNetworkAclQuintupleEntriesRequest
                 * @return ModifyNetworkAclQuintupleEntriesOutcome
                 */
                ModifyNetworkAclQuintupleEntriesOutcome ModifyNetworkAclQuintupleEntries(const Model::ModifyNetworkAclQuintupleEntriesRequest &request);
                void ModifyNetworkAclQuintupleEntriesAsync(const Model::ModifyNetworkAclQuintupleEntriesRequest& request, const ModifyNetworkAclQuintupleEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkAclQuintupleEntriesOutcomeCallable ModifyNetworkAclQuintupleEntriesCallable(const Model::ModifyNetworkAclQuintupleEntriesRequest& request);

                /**
                 *This API (ModifyNetworkInterfaceAttribute) is used to modify ENI attributes.
                 * @param req ModifyNetworkInterfaceAttributeRequest
                 * @return ModifyNetworkInterfaceAttributeOutcome
                 */
                ModifyNetworkInterfaceAttributeOutcome ModifyNetworkInterfaceAttribute(const Model::ModifyNetworkInterfaceAttributeRequest &request);
                void ModifyNetworkInterfaceAttributeAsync(const Model::ModifyNetworkInterfaceAttributeRequest& request, const ModifyNetworkInterfaceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkInterfaceAttributeOutcomeCallable ModifyNetworkInterfaceAttributeCallable(const Model::ModifyNetworkInterfaceAttributeRequest& request);

                /**
                 *This API (ModifyPrivateIpAddressesAttribute) is used to modify the private IP attributes of an ENI.
                 * @param req ModifyPrivateIpAddressesAttributeRequest
                 * @return ModifyPrivateIpAddressesAttributeOutcome
                 */
                ModifyPrivateIpAddressesAttributeOutcome ModifyPrivateIpAddressesAttribute(const Model::ModifyPrivateIpAddressesAttributeRequest &request);
                void ModifyPrivateIpAddressesAttributeAsync(const Model::ModifyPrivateIpAddressesAttributeRequest& request, const ModifyPrivateIpAddressesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrivateIpAddressesAttributeOutcomeCallable ModifyPrivateIpAddressesAttributeCallable(const Model::ModifyPrivateIpAddressesAttributeRequest& request);

                /**
                 *This API (ModifyRouteTableAttribute) is used to modify the attributes of a route table.
                 * @param req ModifyRouteTableAttributeRequest
                 * @return ModifyRouteTableAttributeOutcome
                 */
                ModifyRouteTableAttributeOutcome ModifyRouteTableAttribute(const Model::ModifyRouteTableAttributeRequest &request);
                void ModifyRouteTableAttributeAsync(const Model::ModifyRouteTableAttributeRequest& request, const ModifyRouteTableAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRouteTableAttributeOutcomeCallable ModifyRouteTableAttributeCallable(const Model::ModifyRouteTableAttributeRequest& request);

                /**
                 *This API (ModifySecurityGroupAttribute) is used to modify the attributes of a security group (SecurityGroupPolicy).
                 * @param req ModifySecurityGroupAttributeRequest
                 * @return ModifySecurityGroupAttributeOutcome
                 */
                ModifySecurityGroupAttributeOutcome ModifySecurityGroupAttribute(const Model::ModifySecurityGroupAttributeRequest &request);
                void ModifySecurityGroupAttributeAsync(const Model::ModifySecurityGroupAttributeRequest& request, const ModifySecurityGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupAttributeOutcomeCallable ModifySecurityGroupAttributeCallable(const Model::ModifySecurityGroupAttributeRequest& request);

                /**
                 *This API is used to reset the `Egress` and `Ingress` rules (SecurityGroupPolicy) of a security group.

<ul>
<li>This API does not support custom indexes <code>PolicyIndex</code>. </li>
<li>For <code>SecurityGroupPolicySet</code> parameter,<ul> <ul>
	<li>If <code>SecurityGroupPolicySet.Version</code> is set to `0`, all policies will be cleared, and <code>Egress</code> and <code>Ingress</code> will be ignored. </li>
	<li>If <code>SecurityGroupPolicySet.Version</code> is not set to `0`, add <code>Egress</code> and <code>Ingress</code> policies: <ul>
		<li><code>Protocol</code>: <code>TCP</code>, <code>UDP</code>, <code>ICMP</code>, <code>ICMPV6</code>, <code>GRE</code>, or <code>ALL</code>. </li>
		<li><code>CidrBlock</code>: a CIDR block in the correct format. In the classic network, even if the CIDR block specified in <code>CidrBlock</code> contains the Tencent Cloud private IPs that are not using for CVMs under your Tencent Cloud account, it does not mean this policy allows you to access those resources. The network isolation policies between tenants take priority over the private network policies in security groups. </li>
		<li><code>Ipv6CidrBlock</code>: an IPv6 CIDR block in the correct format. In the classic network, even if the CIDR block specified in <code>Ipv6CidrBlock</code> contains the Tencent Cloud private IPv6 addresses that are not using for CVMs under your Tencent Cloud account, it does not mean this policy allows you to access those resources. The network isolation policies between tenants take priority over the private network policies in security groups. </li>
		<li><code>SecurityGroupId</code>: ID of the security group. It can be the ID of a security group to be modified, or the ID of another security group in the same project. All private IPs of all CVMs under the security group will be covered. If this field is used, the policy will automatically change according to the CVM associated with the group ID while being used to match network messages. You don't need to change it manually. </li>
		<li><code>Port</code>: a single port number such as 80, or a port range in the format of '8000-8010'.  You may use this field only if the <code>Protocol</code> field takes the value <code>TCP</code> or <code>UDP</code>. </li>
		<li><code>Action</code>: only allows <code>ACCEPT</code> or <code>DROP</code>. </li>
		<li><code>CidrBlock</code>, <code>Ipv6CidrBlock</code>, <code>SecurityGroupId</code>, and <code>AddressTemplate</code> are mutually exclusive. <code>Protocol</code> + <code>Port</code> and <code>ServiceTemplate</code> are mutually exclusive.</li> </li>
</ul></li></ul></li>
</ul>
                 * @param req ModifySecurityGroupPoliciesRequest
                 * @return ModifySecurityGroupPoliciesOutcome
                 */
                ModifySecurityGroupPoliciesOutcome ModifySecurityGroupPolicies(const Model::ModifySecurityGroupPoliciesRequest &request);
                void ModifySecurityGroupPoliciesAsync(const Model::ModifySecurityGroupPoliciesRequest& request, const ModifySecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityGroupPoliciesOutcomeCallable ModifySecurityGroupPoliciesCallable(const Model::ModifySecurityGroupPoliciesRequest& request);

                /**
                 *This API (ModifyServiceTemplateAttribute) is used to modify a protocol port template.
                 * @param req ModifyServiceTemplateAttributeRequest
                 * @return ModifyServiceTemplateAttributeOutcome
                 */
                ModifyServiceTemplateAttributeOutcome ModifyServiceTemplateAttribute(const Model::ModifyServiceTemplateAttributeRequest &request);
                void ModifyServiceTemplateAttributeAsync(const Model::ModifyServiceTemplateAttributeRequest& request, const ModifyServiceTemplateAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceTemplateAttributeOutcomeCallable ModifyServiceTemplateAttributeCallable(const Model::ModifyServiceTemplateAttributeRequest& request);

                /**
                 *This API (ModifyServiceTemplateGroupAttribute) is used to modify a protocol port template group.
                 * @param req ModifyServiceTemplateGroupAttributeRequest
                 * @return ModifyServiceTemplateGroupAttributeOutcome
                 */
                ModifyServiceTemplateGroupAttributeOutcome ModifyServiceTemplateGroupAttribute(const Model::ModifyServiceTemplateGroupAttributeRequest &request);
                void ModifyServiceTemplateGroupAttributeAsync(const Model::ModifyServiceTemplateGroupAttributeRequest& request, const ModifyServiceTemplateGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceTemplateGroupAttributeOutcomeCallable ModifyServiceTemplateGroupAttributeCallable(const Model::ModifyServiceTemplateGroupAttributeRequest& request);

                /**
                 *This API is used to modify specified snapshot policies.
                 * @param req ModifySnapshotPoliciesRequest
                 * @return ModifySnapshotPoliciesOutcome
                 */
                ModifySnapshotPoliciesOutcome ModifySnapshotPolicies(const Model::ModifySnapshotPoliciesRequest &request);
                void ModifySnapshotPoliciesAsync(const Model::ModifySnapshotPoliciesRequest& request, const ModifySnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySnapshotPoliciesOutcomeCallable ModifySnapshotPoliciesCallable(const Model::ModifySnapshotPoliciesRequest& request);

                /**
                 *This API (ModifySubnetAttribute) is used to modify subnet attributes.
                 * @param req ModifySubnetAttributeRequest
                 * @return ModifySubnetAttributeOutcome
                 */
                ModifySubnetAttributeOutcome ModifySubnetAttribute(const Model::ModifySubnetAttributeRequest &request);
                void ModifySubnetAttributeAsync(const Model::ModifySubnetAttributeRequest& request, const ModifySubnetAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubnetAttributeOutcomeCallable ModifySubnetAttributeCallable(const Model::ModifySubnetAttributeRequest& request);

                /**
                 *This API (ModifyVpcAttribute) is used to modify VPC attributes.
                 * @param req ModifyVpcAttributeRequest
                 * @return ModifyVpcAttributeOutcome
                 */
                ModifyVpcAttributeOutcome ModifyVpcAttribute(const Model::ModifyVpcAttributeRequest &request);
                void ModifyVpcAttributeAsync(const Model::ModifyVpcAttributeRequest& request, const ModifyVpcAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcAttributeOutcomeCallable ModifyVpcAttributeCallable(const Model::ModifyVpcAttributeRequest& request);

                /**
                 *This API is used to modify endpoint attributes.
                 * @param req ModifyVpcEndPointAttributeRequest
                 * @return ModifyVpcEndPointAttributeOutcome
                 */
                ModifyVpcEndPointAttributeOutcome ModifyVpcEndPointAttribute(const Model::ModifyVpcEndPointAttributeRequest &request);
                void ModifyVpcEndPointAttributeAsync(const Model::ModifyVpcEndPointAttributeRequest& request, const ModifyVpcEndPointAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcEndPointAttributeOutcomeCallable ModifyVpcEndPointAttributeCallable(const Model::ModifyVpcEndPointAttributeRequest& request);

                /**
                 *This API is used to modify the VPC endpoint service attributes.


                 * @param req ModifyVpcEndPointServiceAttributeRequest
                 * @return ModifyVpcEndPointServiceAttributeOutcome
                 */
                ModifyVpcEndPointServiceAttributeOutcome ModifyVpcEndPointServiceAttribute(const Model::ModifyVpcEndPointServiceAttributeRequest &request);
                void ModifyVpcEndPointServiceAttributeAsync(const Model::ModifyVpcEndPointServiceAttributeRequest& request, const ModifyVpcEndPointServiceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcEndPointServiceAttributeOutcomeCallable ModifyVpcEndPointServiceAttributeCallable(const Model::ModifyVpcEndPointServiceAttributeRequest& request);

                /**
                 *This API is used to modify the attributes of the endpoint service allowlist.
                 * @param req ModifyVpcEndPointServiceWhiteListRequest
                 * @return ModifyVpcEndPointServiceWhiteListOutcome
                 */
                ModifyVpcEndPointServiceWhiteListOutcome ModifyVpcEndPointServiceWhiteList(const Model::ModifyVpcEndPointServiceWhiteListRequest &request);
                void ModifyVpcEndPointServiceWhiteListAsync(const Model::ModifyVpcEndPointServiceWhiteListRequest& request, const ModifyVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpcEndPointServiceWhiteListOutcomeCallable ModifyVpcEndPointServiceWhiteListCallable(const Model::ModifyVpcEndPointServiceWhiteListRequest& request);

                /**
                 *This API (ModifyVpnConnectionAttribute) is used to modify VPN tunnels.
                 * @param req ModifyVpnConnectionAttributeRequest
                 * @return ModifyVpnConnectionAttributeOutcome
                 */
                ModifyVpnConnectionAttributeOutcome ModifyVpnConnectionAttribute(const Model::ModifyVpnConnectionAttributeRequest &request);
                void ModifyVpnConnectionAttributeAsync(const Model::ModifyVpnConnectionAttributeRequest& request, const ModifyVpnConnectionAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpnConnectionAttributeOutcomeCallable ModifyVpnConnectionAttributeCallable(const Model::ModifyVpnConnectionAttributeRequest& request);

                /**
                 *This API (ModifyVpnGatewayAttribute) is used to modify the attributes of VPN gateways.
                 * @param req ModifyVpnGatewayAttributeRequest
                 * @return ModifyVpnGatewayAttributeOutcome
                 */
                ModifyVpnGatewayAttributeOutcome ModifyVpnGatewayAttribute(const Model::ModifyVpnGatewayAttributeRequest &request);
                void ModifyVpnGatewayAttributeAsync(const Model::ModifyVpnGatewayAttributeRequest& request, const ModifyVpnGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpnGatewayAttributeOutcomeCallable ModifyVpnGatewayAttributeCallable(const Model::ModifyVpnGatewayAttributeRequest& request);

                /**
                 *This API is used to modify VPN gateway-based CCN routes.
                 * @param req ModifyVpnGatewayCcnRoutesRequest
                 * @return ModifyVpnGatewayCcnRoutesOutcome
                 */
                ModifyVpnGatewayCcnRoutesOutcome ModifyVpnGatewayCcnRoutes(const Model::ModifyVpnGatewayCcnRoutesRequest &request);
                void ModifyVpnGatewayCcnRoutesAsync(const Model::ModifyVpnGatewayCcnRoutesRequest& request, const ModifyVpnGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpnGatewayCcnRoutesOutcomeCallable ModifyVpnGatewayCcnRoutesCallable(const Model::ModifyVpnGatewayCcnRoutesRequest& request);

                /**
                 *This API is used to modify VPN gateway routes.
                 * @param req ModifyVpnGatewayRoutesRequest
                 * @return ModifyVpnGatewayRoutesOutcome
                 */
                ModifyVpnGatewayRoutesOutcome ModifyVpnGatewayRoutes(const Model::ModifyVpnGatewayRoutesRequest &request);
                void ModifyVpnGatewayRoutesAsync(const Model::ModifyVpnGatewayRoutesRequest& request, const ModifyVpnGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpnGatewayRoutesOutcomeCallable ModifyVpnGatewayRoutesCallable(const Model::ModifyVpnGatewayRoutesRequest& request);

                /**
                 *This API is used to publish a route to CCN. This can also be done by clicking "Publish to CCN" in the operation column on the page of route table list.
                 * @param req NotifyRoutesRequest
                 * @return NotifyRoutesOutcome
                 */
                NotifyRoutesOutcome NotifyRoutes(const Model::NotifyRoutesRequest &request);
                void NotifyRoutesAsync(const Model::NotifyRoutesRequest& request, const NotifyRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                NotifyRoutesOutcomeCallable NotifyRoutesCallable(const Model::NotifyRoutesRequest& request);

                /**
                 *This API is used to refresh the route between a NAT gateway and  Direct Connect and update the associated route table.
                 * @param req RefreshDirectConnectGatewayRouteToNatGatewayRequest
                 * @return RefreshDirectConnectGatewayRouteToNatGatewayOutcome
                 */
                RefreshDirectConnectGatewayRouteToNatGatewayOutcome RefreshDirectConnectGatewayRouteToNatGateway(const Model::RefreshDirectConnectGatewayRouteToNatGatewayRequest &request);
                void RefreshDirectConnectGatewayRouteToNatGatewayAsync(const Model::RefreshDirectConnectGatewayRouteToNatGatewayRequest& request, const RefreshDirectConnectGatewayRouteToNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefreshDirectConnectGatewayRouteToNatGatewayOutcomeCallable RefreshDirectConnectGatewayRouteToNatGatewayCallable(const Model::RefreshDirectConnectGatewayRouteToNatGatewayRequest& request);

                /**
                 *This API (RejectAttachCcnInstances) is used to reject association operations when instances are associated across accounts for the CCN owner.

                 * @param req RejectAttachCcnInstancesRequest
                 * @return RejectAttachCcnInstancesOutcome
                 */
                RejectAttachCcnInstancesOutcome RejectAttachCcnInstances(const Model::RejectAttachCcnInstancesRequest &request);
                void RejectAttachCcnInstancesAsync(const Model::RejectAttachCcnInstancesRequest& request, const RejectAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RejectAttachCcnInstancesOutcomeCallable RejectAttachCcnInstancesCallable(const Model::RejectAttachCcnInstancesRequest& request);

                /**
                 *This API (ReleaseAddresses) is used to release one or multiple [Elastic IPs](https://intl.cloud.tencent.com/document/product/213/1941?from_cn_redirect=1).
* This operation is irreversible. Once you release an EIP, the IP address associated with the EIP no longer belongs to you.
* Only EIPs in UNBIND status can be released.
                 * @param req ReleaseAddressesRequest
                 * @return ReleaseAddressesOutcome
                 */
                ReleaseAddressesOutcome ReleaseAddresses(const Model::ReleaseAddressesRequest &request);
                void ReleaseAddressesAsync(const Model::ReleaseAddressesRequest& request, const ReleaseAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseAddressesOutcomeCallable ReleaseAddressesCallable(const Model::ReleaseAddressesRequest& request);

                /**
                 *This API is used to delete a bandwidth package resource, including [Elastic IP](https://intl.cloud.tencent.com/document/product/213/1941?from_cn_redirect=1), [Cloud Load Balancer](https://intl.cloud.tencent.com/document/product/214/517?from_cn_redirect=1), and so on.
                 * @param req RemoveBandwidthPackageResourcesRequest
                 * @return RemoveBandwidthPackageResourcesOutcome
                 */
                RemoveBandwidthPackageResourcesOutcome RemoveBandwidthPackageResources(const Model::RemoveBandwidthPackageResourcesRequest &request);
                void RemoveBandwidthPackageResourcesAsync(const Model::RemoveBandwidthPackageResourcesRequest& request, const RemoveBandwidthPackageResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveBandwidthPackageResourcesOutcomeCallable RemoveBandwidthPackageResourcesCallable(const Model::RemoveBandwidthPackageResourcesRequest& request);

                /**
                 *This API (RenewVpnGateway) is used to renew prepaid (monthly subscription) VPN gateways. Currently, only IPSEC gateways are supported.
                 * @param req RenewVpnGatewayRequest
                 * @return RenewVpnGatewayOutcome
                 */
                RenewVpnGatewayOutcome RenewVpnGateway(const Model::RenewVpnGatewayRequest &request);
                void RenewVpnGatewayAsync(const Model::RenewVpnGatewayRequest& request, const RenewVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewVpnGatewayOutcomeCallable RenewVpnGatewayCallable(const Model::RenewVpnGatewayRequest& request);

                /**
                 *This API (ReplaceDirectConnectGatewayCcnRoutes) is used to modify the specified route according to the route ID. Batch modification is supported.
                 * @param req ReplaceDirectConnectGatewayCcnRoutesRequest
                 * @return ReplaceDirectConnectGatewayCcnRoutesOutcome
                 */
                ReplaceDirectConnectGatewayCcnRoutesOutcome ReplaceDirectConnectGatewayCcnRoutes(const Model::ReplaceDirectConnectGatewayCcnRoutesRequest &request);
                void ReplaceDirectConnectGatewayCcnRoutesAsync(const Model::ReplaceDirectConnectGatewayCcnRoutesRequest& request, const ReplaceDirectConnectGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceDirectConnectGatewayCcnRoutesOutcomeCallable ReplaceDirectConnectGatewayCcnRoutesCallable(const Model::ReplaceDirectConnectGatewayCcnRoutesRequest& request);

                /**
                 *This API (ReplaceRouteTableAssociation) is used to modify the route table associated with a subnet.
* A subnet can only be associated with one route table.
                 * @param req ReplaceRouteTableAssociationRequest
                 * @return ReplaceRouteTableAssociationOutcome
                 */
                ReplaceRouteTableAssociationOutcome ReplaceRouteTableAssociation(const Model::ReplaceRouteTableAssociationRequest &request);
                void ReplaceRouteTableAssociationAsync(const Model::ReplaceRouteTableAssociationRequest& request, const ReplaceRouteTableAssociationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceRouteTableAssociationOutcomeCallable ReplaceRouteTableAssociationCallable(const Model::ReplaceRouteTableAssociationRequest& request);

                /**
                 *This API (ReplaceRoutes) is used to modify a specified routing policy by its ID (RouteId). Batch modification is supported.
                 * @param req ReplaceRoutesRequest
                 * @return ReplaceRoutesOutcome
                 */
                ReplaceRoutesOutcome ReplaceRoutes(const Model::ReplaceRoutesRequest &request);
                void ReplaceRoutesAsync(const Model::ReplaceRoutesRequest& request, const ReplaceRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceRoutesOutcomeCallable ReplaceRoutesCallable(const Model::ReplaceRoutesRequest& request);

                /**
                 *This API is used to batch modify security group policies.
Policies to modify must be in the same direction. `PolicyIndex` must be specified.
                 * @param req ReplaceSecurityGroupPoliciesRequest
                 * @return ReplaceSecurityGroupPoliciesOutcome
                 */
                ReplaceSecurityGroupPoliciesOutcome ReplaceSecurityGroupPolicies(const Model::ReplaceSecurityGroupPoliciesRequest &request);
                void ReplaceSecurityGroupPoliciesAsync(const Model::ReplaceSecurityGroupPoliciesRequest& request, const ReplaceSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceSecurityGroupPoliciesOutcomeCallable ReplaceSecurityGroupPoliciesCallable(const Model::ReplaceSecurityGroupPoliciesRequest& request);

                /**
                 *This API (ReplaceSecurityGroupPolicy) is used to replace a single security group policy (SecurityGroupPolicy).
Only one policy in a single direction can be replaced in each request, and the PolicyIndex parameter must be specified.
                 * @param req ReplaceSecurityGroupPolicyRequest
                 * @return ReplaceSecurityGroupPolicyOutcome
                 */
                ReplaceSecurityGroupPolicyOutcome ReplaceSecurityGroupPolicy(const Model::ReplaceSecurityGroupPolicyRequest &request);
                void ReplaceSecurityGroupPolicyAsync(const Model::ReplaceSecurityGroupPolicyRequest& request, const ReplaceSecurityGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceSecurityGroupPolicyOutcomeCallable ReplaceSecurityGroupPolicyCallable(const Model::ReplaceSecurityGroupPolicyRequest& request);

                /**
                 *This API (ResetAttachCcnInstances) is used to re-apply for the association operation when the application for cross-account instance association expires.
                 * @param req ResetAttachCcnInstancesRequest
                 * @return ResetAttachCcnInstancesOutcome
                 */
                ResetAttachCcnInstancesOutcome ResetAttachCcnInstances(const Model::ResetAttachCcnInstancesRequest &request);
                void ResetAttachCcnInstancesAsync(const Model::ResetAttachCcnInstancesRequest& request, const ResetAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAttachCcnInstancesOutcomeCallable ResetAttachCcnInstancesCallable(const Model::ResetAttachCcnInstancesRequest& request);

                /**
                 *This API is used to adjust concurrent connection cap for the NAT gateway.
                 * @param req ResetNatGatewayConnectionRequest
                 * @return ResetNatGatewayConnectionOutcome
                 */
                ResetNatGatewayConnectionOutcome ResetNatGatewayConnection(const Model::ResetNatGatewayConnectionRequest &request);
                void ResetNatGatewayConnectionAsync(const Model::ResetNatGatewayConnectionRequest& request, const ResetNatGatewayConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetNatGatewayConnectionOutcomeCallable ResetNatGatewayConnectionCallable(const Model::ResetNatGatewayConnectionRequest& request);

                /**
                 *This API (ResetRoutes) is used to reset the name of a route table and all its routing policies.<br />
Note: When this API is called, all routing policies in the current route table are deleted before new routing policies are saved, which may incur network interruption.
                 * @param req ResetRoutesRequest
                 * @return ResetRoutesOutcome
                 */
                ResetRoutesOutcome ResetRoutes(const Model::ResetRoutesRequest &request);
                void ResetRoutesAsync(const Model::ResetRoutesRequest& request, const ResetRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetRoutesOutcomeCallable ResetRoutesCallable(const Model::ResetRoutesRequest& request);

                /**
                 *The API is used to reset a VPN tunnel.
                 * @param req ResetVpnConnectionRequest
                 * @return ResetVpnConnectionOutcome
                 */
                ResetVpnConnectionOutcome ResetVpnConnection(const Model::ResetVpnConnectionRequest &request);
                void ResetVpnConnectionAsync(const Model::ResetVpnConnectionRequest& request, const ResetVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetVpnConnectionOutcomeCallable ResetVpnConnectionCallable(const Model::ResetVpnConnectionRequest& request);

                /**
                 *This API is used to adjust the bandwidth cap of a VPN gateway. The adjustment of the VPN gateway bandwidth is limited to [5,100] Mbps and [200,1000] Mbps. 
                 * @param req ResetVpnGatewayInternetMaxBandwidthRequest
                 * @return ResetVpnGatewayInternetMaxBandwidthOutcome
                 */
                ResetVpnGatewayInternetMaxBandwidthOutcome ResetVpnGatewayInternetMaxBandwidth(const Model::ResetVpnGatewayInternetMaxBandwidthRequest &request);
                void ResetVpnGatewayInternetMaxBandwidthAsync(const Model::ResetVpnGatewayInternetMaxBandwidthRequest& request, const ResetVpnGatewayInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetVpnGatewayInternetMaxBandwidthOutcomeCallable ResetVpnGatewayInternetMaxBandwidthCallable(const Model::ResetVpnGatewayInternetMaxBandwidthRequest& request);

                /**
                 *This API is used to restore security group policies with a backup.
                 * @param req ResumeSnapshotInstanceRequest
                 * @return ResumeSnapshotInstanceOutcome
                 */
                ResumeSnapshotInstanceOutcome ResumeSnapshotInstance(const Model::ResumeSnapshotInstanceRequest &request);
                void ResumeSnapshotInstanceAsync(const Model::ResumeSnapshotInstanceRequest& request, const ResumeSnapshotInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeSnapshotInstanceOutcomeCallable ResumeSnapshotInstanceCallable(const Model::ResumeSnapshotInstanceRequest& request);

                /**
                 *This API is used to unbind and release public IPs. 
Note: Starting from Dec 15, 2022, CAM authorization is required for a sub-account to call this API. For more details, see [Authorization Guide](https://intl.cloud.tencent.com/document/product/598/34545?from_cn_redirect=1).
                 * @param req ReturnNormalAddressesRequest
                 * @return ReturnNormalAddressesOutcome
                 */
                ReturnNormalAddressesOutcome ReturnNormalAddresses(const Model::ReturnNormalAddressesRequest &request);
                void ReturnNormalAddressesAsync(const Model::ReturnNormalAddressesRequest& request, const ReturnNormalAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReturnNormalAddressesOutcomeCallable ReturnNormalAddressesCallable(const Model::ReturnNormalAddressesRequest& request);

                /**
                 *This API (SetCcnRegionBandwidthLimits) is used to set the outbound bandwidth cap for CCNs in each region. This API can only set the outbound bandwidth cap for regions in the network instances that have already been associated.
                 * @param req SetCcnRegionBandwidthLimitsRequest
                 * @return SetCcnRegionBandwidthLimitsOutcome
                 */
                SetCcnRegionBandwidthLimitsOutcome SetCcnRegionBandwidthLimits(const Model::SetCcnRegionBandwidthLimitsRequest &request);
                void SetCcnRegionBandwidthLimitsAsync(const Model::SetCcnRegionBandwidthLimitsRequest& request, const SetCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetCcnRegionBandwidthLimitsOutcomeCallable SetCcnRegionBandwidthLimitsCallable(const Model::SetCcnRegionBandwidthLimitsRequest& request);

                /**
                 *This API is used set the auto-renewal configuration of a VPN gateway.
                 * @param req SetVpnGatewaysRenewFlagRequest
                 * @return SetVpnGatewaysRenewFlagOutcome
                 */
                SetVpnGatewaysRenewFlagOutcome SetVpnGatewaysRenewFlag(const Model::SetVpnGatewaysRenewFlagRequest &request);
                void SetVpnGatewaysRenewFlagAsync(const Model::SetVpnGatewaysRenewFlagRequest& request, const SetVpnGatewaysRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetVpnGatewaysRenewFlagOutcomeCallable SetVpnGatewaysRenewFlagCallable(const Model::SetVpnGatewaysRenewFlagRequest& request);

                /**
                 *This API is used to convert a common public IP into an [Elastic IP](https://intl.cloud.tencent.com/document/product/213/1941?from_cn_redirect=1) (EIP for short).
* Tencent Cloud limits the number of times that a user can unbind EIPs and reassign public IPs in each region per day. For more information, see product introduction of [Elastic IP](https://intl.cloud.tencent.com/document/product/213/5733?from_cn_redirect=1). The preceding quota can be obtained through the API [DescribeAddressQuota](https://intl.cloud.tencent.com/document/product/215/16701).
                 * @param req TransformAddressRequest
                 * @return TransformAddressOutcome
                 */
                TransformAddressOutcome TransformAddress(const Model::TransformAddressRequest &request);
                void TransformAddressAsync(const Model::TransformAddressRequest& request, const TransformAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransformAddressOutcomeCallable TransformAddressCallable(const Model::TransformAddressRequest& request);

                /**
                 *This API is used to release the IPv6 addresses of an ENI. <br />
This API is completed asynchronously. If you need to query the execution result of an async task, please use the `RequestId` returned by this API to poll the `DescribeVpcTaskResult` API.
                 * @param req UnassignIpv6AddressesRequest
                 * @return UnassignIpv6AddressesOutcome
                 */
                UnassignIpv6AddressesOutcome UnassignIpv6Addresses(const Model::UnassignIpv6AddressesRequest &request);
                void UnassignIpv6AddressesAsync(const Model::UnassignIpv6AddressesRequest& request, const UnassignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnassignIpv6AddressesOutcomeCallable UnassignIpv6AddressesCallable(const Model::UnassignIpv6AddressesRequest& request);

                /**
                 *This API (UnassignIpv6CidrBlock) is used to release IPv6 IP ranges.
If the IP range still has occupied IPs that are not yet repossessed, the IP range cannot be released.
                 * @param req UnassignIpv6CidrBlockRequest
                 * @return UnassignIpv6CidrBlockOutcome
                 */
                UnassignIpv6CidrBlockOutcome UnassignIpv6CidrBlock(const Model::UnassignIpv6CidrBlockRequest &request);
                void UnassignIpv6CidrBlockAsync(const Model::UnassignIpv6CidrBlockRequest& request, const UnassignIpv6CidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnassignIpv6CidrBlockOutcomeCallable UnassignIpv6CidrBlockCallable(const Model::UnassignIpv6CidrBlockRequest& request);

                /**
                 *This API (UnassignIpv6SubnetCidrBlock) is used to release IPv6 subnet IP ranges.
If the subnet IP range still has occupied IPs that are not yet repossessed, the subnet IP range cannot be released.
                 * @param req UnassignIpv6SubnetCidrBlockRequest
                 * @return UnassignIpv6SubnetCidrBlockOutcome
                 */
                UnassignIpv6SubnetCidrBlockOutcome UnassignIpv6SubnetCidrBlock(const Model::UnassignIpv6SubnetCidrBlockRequest &request);
                void UnassignIpv6SubnetCidrBlockAsync(const Model::UnassignIpv6SubnetCidrBlockRequest& request, const UnassignIpv6SubnetCidrBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnassignIpv6SubnetCidrBlockOutcomeCallable UnassignIpv6SubnetCidrBlockCallable(const Model::UnassignIpv6SubnetCidrBlockRequest& request);

                /**
                 *This API is used to return the private IP addresses of an ENI.
* If a secondary private IP of an ENI is returned, the EIP will be automatically unassociated as well. The primary private IP of the ENI cannot be returned.

This API is completed asynchronously. If you need to query the execution result of an async task, please use the `RequestId` returned by this API to poll the `DescribeVpcTaskResult` API.
                 * @param req UnassignPrivateIpAddressesRequest
                 * @return UnassignPrivateIpAddressesOutcome
                 */
                UnassignPrivateIpAddressesOutcome UnassignPrivateIpAddresses(const Model::UnassignPrivateIpAddressesRequest &request);
                void UnassignPrivateIpAddressesAsync(const Model::UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnassignPrivateIpAddressesOutcomeCallable UnassignPrivateIpAddressesCallable(const Model::UnassignPrivateIpAddressesRequest& request);

                /**
                 *This API is used to withdraw a route from CCN. 
                 * @param req WithdrawNotifyRoutesRequest
                 * @return WithdrawNotifyRoutesOutcome
                 */
                WithdrawNotifyRoutesOutcome WithdrawNotifyRoutes(const Model::WithdrawNotifyRoutesRequest &request);
                void WithdrawNotifyRoutesAsync(const Model::WithdrawNotifyRoutesRequest& request, const WithdrawNotifyRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                WithdrawNotifyRoutesOutcomeCallable WithdrawNotifyRoutesCallable(const Model::WithdrawNotifyRoutesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_VPCCLIENT_H_
