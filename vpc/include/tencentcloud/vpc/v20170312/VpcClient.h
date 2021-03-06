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
#include <tencentcloud/vpc/v20170312/model/CheckAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/CheckAssistantCidrResponse.h>
#include <tencentcloud/vpc/v20170312/model/CheckNetDetectStateRequest.h>
#include <tencentcloud/vpc/v20170312/model/CheckNetDetectStateResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewayDestinationIpPortTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNatGatewayDestinationIpPortTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetDetectRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetDetectResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkAclRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateNetworkAclResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/CreateSubnetRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSubnetResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateSubnetsRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateSubnetsResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/CreateVpnGatewayResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewayResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNatGatewayDestinationIpPortTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetDetectRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetDetectResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkAclRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteNetworkAclResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/DeleteSubnetRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteSubnetResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnConnectionRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnConnectionResponse.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/DeleteVpnGatewayResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageQuotaRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageQuotaResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackagesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackagesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnAttachedInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnAttachedInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeCcnsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeClassicLinkInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeClassicLinkInstancesResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewaysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewaysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectStatesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectStatesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeNetDetectsResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/DescribeSubnetsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeSubnetsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTaskResultRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeTaskResultResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcIpv6AddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcIpv6AddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcPrivateIpAddressesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcPrivateIpAddressesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcResourceDashboardRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcResourceDashboardResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpcsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnConnectionsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnConnectionsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewayCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewaysRequest.h>
#include <tencentcloud/vpc/v20170312/model/DescribeVpnGatewaysResponse.h>
#include <tencentcloud/vpc/v20170312/model/DetachCcnInstancesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DetachCcnInstancesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DetachClassicLinkVpcRequest.h>
#include <tencentcloud/vpc/v20170312/model/DetachClassicLinkVpcResponse.h>
#include <tencentcloud/vpc/v20170312/model/DetachNetworkInterfaceRequest.h>
#include <tencentcloud/vpc/v20170312/model/DetachNetworkInterfaceResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisableGatewayFlowMonitorRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisableGatewayFlowMonitorResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNatGatewayAddressRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNatGatewayAddressResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNetworkAclSubnetsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNetworkAclSubnetsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNetworkInterfaceSecurityGroupsRequest.h>
#include <tencentcloud/vpc/v20170312/model/DisassociateNetworkInterfaceSecurityGroupsResponse.h>
#include <tencentcloud/vpc/v20170312/model/DownloadCustomerGatewayConfigurationRequest.h>
#include <tencentcloud/vpc/v20170312/model/DownloadCustomerGatewayConfigurationResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableCcnRoutesResponse.h>
#include <tencentcloud/vpc/v20170312/model/EnableGatewayFlowMonitorRequest.h>
#include <tencentcloud/vpc/v20170312/model/EnableGatewayFlowMonitorResponse.h>
#include <tencentcloud/vpc/v20170312/model/GetCcnRegionBandwidthLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/GetCcnRegionBandwidthLimitsResponse.h>
#include <tencentcloud/vpc/v20170312/model/HaVipAssociateAddressIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/HaVipAssociateAddressIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/HaVipDisassociateAddressIpRequest.h>
#include <tencentcloud/vpc/v20170312/model/HaVipDisassociateAddressIpResponse.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceCreateVpnGatewayRequest.h>
#include <tencentcloud/vpc/v20170312/model/InquiryPriceCreateVpnGatewayResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/ModifyAssistantCidrRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyAssistantCidrResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyBandwidthPackageAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyBandwidthPackageAttributeResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewayAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewayAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewayDestinationIpPortTranslationNatRuleResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetDetectRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetDetectResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclEntriesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyNetworkAclEntriesResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/ModifySubnetAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifySubnetAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpcAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnConnectionAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnConnectionAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayAttributeRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayAttributeResponse.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayCcnRoutesRequest.h>
#include <tencentcloud/vpc/v20170312/model/ModifyVpnGatewayCcnRoutesResponse.h>
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
#include <tencentcloud/vpc/v20170312/model/SetCcnRegionBandwidthLimitsRequest.h>
#include <tencentcloud/vpc/v20170312/model/SetCcnRegionBandwidthLimitsResponse.h>
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

                typedef Outcome<Error, Model::AcceptAttachCcnInstancesResponse> AcceptAttachCcnInstancesOutcome;
                typedef std::future<AcceptAttachCcnInstancesOutcome> AcceptAttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AcceptAttachCcnInstancesRequest&, AcceptAttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AcceptAttachCcnInstancesAsyncHandler;
                typedef Outcome<Error, Model::AddBandwidthPackageResourcesResponse> AddBandwidthPackageResourcesOutcome;
                typedef std::future<AddBandwidthPackageResourcesOutcome> AddBandwidthPackageResourcesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AddBandwidthPackageResourcesRequest&, AddBandwidthPackageResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddBandwidthPackageResourcesAsyncHandler;
                typedef Outcome<Error, Model::AllocateAddressesResponse> AllocateAddressesOutcome;
                typedef std::future<AllocateAddressesOutcome> AllocateAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AllocateAddressesRequest&, AllocateAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AllocateAddressesAsyncHandler;
                typedef Outcome<Error, Model::AssignIpv6AddressesResponse> AssignIpv6AddressesOutcome;
                typedef std::future<AssignIpv6AddressesOutcome> AssignIpv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignIpv6AddressesRequest&, AssignIpv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignIpv6AddressesAsyncHandler;
                typedef Outcome<Error, Model::AssignIpv6CidrBlockResponse> AssignIpv6CidrBlockOutcome;
                typedef std::future<AssignIpv6CidrBlockOutcome> AssignIpv6CidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignIpv6CidrBlockRequest&, AssignIpv6CidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignIpv6CidrBlockAsyncHandler;
                typedef Outcome<Error, Model::AssignIpv6SubnetCidrBlockResponse> AssignIpv6SubnetCidrBlockOutcome;
                typedef std::future<AssignIpv6SubnetCidrBlockOutcome> AssignIpv6SubnetCidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignIpv6SubnetCidrBlockRequest&, AssignIpv6SubnetCidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignIpv6SubnetCidrBlockAsyncHandler;
                typedef Outcome<Error, Model::AssignPrivateIpAddressesResponse> AssignPrivateIpAddressesOutcome;
                typedef std::future<AssignPrivateIpAddressesOutcome> AssignPrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssignPrivateIpAddressesRequest&, AssignPrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssignPrivateIpAddressesAsyncHandler;
                typedef Outcome<Error, Model::AssociateAddressResponse> AssociateAddressOutcome;
                typedef std::future<AssociateAddressOutcome> AssociateAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateAddressRequest&, AssociateAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateAddressAsyncHandler;
                typedef Outcome<Error, Model::AssociateNatGatewayAddressResponse> AssociateNatGatewayAddressOutcome;
                typedef std::future<AssociateNatGatewayAddressOutcome> AssociateNatGatewayAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateNatGatewayAddressRequest&, AssociateNatGatewayAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateNatGatewayAddressAsyncHandler;
                typedef Outcome<Error, Model::AssociateNetworkAclSubnetsResponse> AssociateNetworkAclSubnetsOutcome;
                typedef std::future<AssociateNetworkAclSubnetsOutcome> AssociateNetworkAclSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateNetworkAclSubnetsRequest&, AssociateNetworkAclSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateNetworkAclSubnetsAsyncHandler;
                typedef Outcome<Error, Model::AssociateNetworkInterfaceSecurityGroupsResponse> AssociateNetworkInterfaceSecurityGroupsOutcome;
                typedef std::future<AssociateNetworkInterfaceSecurityGroupsOutcome> AssociateNetworkInterfaceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AssociateNetworkInterfaceSecurityGroupsRequest&, AssociateNetworkInterfaceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AssociateNetworkInterfaceSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::AttachCcnInstancesResponse> AttachCcnInstancesOutcome;
                typedef std::future<AttachCcnInstancesOutcome> AttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AttachCcnInstancesRequest&, AttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachCcnInstancesAsyncHandler;
                typedef Outcome<Error, Model::AttachClassicLinkVpcResponse> AttachClassicLinkVpcOutcome;
                typedef std::future<AttachClassicLinkVpcOutcome> AttachClassicLinkVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AttachClassicLinkVpcRequest&, AttachClassicLinkVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachClassicLinkVpcAsyncHandler;
                typedef Outcome<Error, Model::AttachNetworkInterfaceResponse> AttachNetworkInterfaceOutcome;
                typedef std::future<AttachNetworkInterfaceOutcome> AttachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::AttachNetworkInterfaceRequest&, AttachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::CheckAssistantCidrResponse> CheckAssistantCidrOutcome;
                typedef std::future<CheckAssistantCidrOutcome> CheckAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CheckAssistantCidrRequest&, CheckAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAssistantCidrAsyncHandler;
                typedef Outcome<Error, Model::CheckNetDetectStateResponse> CheckNetDetectStateOutcome;
                typedef std::future<CheckNetDetectStateOutcome> CheckNetDetectStateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CheckNetDetectStateRequest&, CheckNetDetectStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckNetDetectStateAsyncHandler;
                typedef Outcome<Error, Model::CreateAddressTemplateResponse> CreateAddressTemplateOutcome;
                typedef std::future<CreateAddressTemplateOutcome> CreateAddressTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAddressTemplateRequest&, CreateAddressTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAddressTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateAddressTemplateGroupResponse> CreateAddressTemplateGroupOutcome;
                typedef std::future<CreateAddressTemplateGroupOutcome> CreateAddressTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAddressTemplateGroupRequest&, CreateAddressTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAddressTemplateGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateAndAttachNetworkInterfaceResponse> CreateAndAttachNetworkInterfaceOutcome;
                typedef std::future<CreateAndAttachNetworkInterfaceOutcome> CreateAndAttachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAndAttachNetworkInterfaceRequest&, CreateAndAttachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAndAttachNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::CreateAssistantCidrResponse> CreateAssistantCidrOutcome;
                typedef std::future<CreateAssistantCidrOutcome> CreateAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateAssistantCidrRequest&, CreateAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAssistantCidrAsyncHandler;
                typedef Outcome<Error, Model::CreateBandwidthPackageResponse> CreateBandwidthPackageOutcome;
                typedef std::future<CreateBandwidthPackageOutcome> CreateBandwidthPackageOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateBandwidthPackageRequest&, CreateBandwidthPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBandwidthPackageAsyncHandler;
                typedef Outcome<Error, Model::CreateCcnResponse> CreateCcnOutcome;
                typedef std::future<CreateCcnOutcome> CreateCcnOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateCcnRequest&, CreateCcnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCcnAsyncHandler;
                typedef Outcome<Error, Model::CreateCustomerGatewayResponse> CreateCustomerGatewayOutcome;
                typedef std::future<CreateCustomerGatewayOutcome> CreateCustomerGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateCustomerGatewayRequest&, CreateCustomerGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomerGatewayAsyncHandler;
                typedef Outcome<Error, Model::CreateDefaultVpcResponse> CreateDefaultVpcOutcome;
                typedef std::future<CreateDefaultVpcOutcome> CreateDefaultVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDefaultVpcRequest&, CreateDefaultVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDefaultVpcAsyncHandler;
                typedef Outcome<Error, Model::CreateDirectConnectGatewayResponse> CreateDirectConnectGatewayOutcome;
                typedef std::future<CreateDirectConnectGatewayOutcome> CreateDirectConnectGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDirectConnectGatewayRequest&, CreateDirectConnectGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDirectConnectGatewayAsyncHandler;
                typedef Outcome<Error, Model::CreateDirectConnectGatewayCcnRoutesResponse> CreateDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<CreateDirectConnectGatewayCcnRoutesOutcome> CreateDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateDirectConnectGatewayCcnRoutesRequest&, CreateDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::CreateFlowLogResponse> CreateFlowLogOutcome;
                typedef std::future<CreateFlowLogOutcome> CreateFlowLogOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateFlowLogRequest&, CreateFlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowLogAsyncHandler;
                typedef Outcome<Error, Model::CreateHaVipResponse> CreateHaVipOutcome;
                typedef std::future<CreateHaVipOutcome> CreateHaVipOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateHaVipRequest&, CreateHaVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateHaVipAsyncHandler;
                typedef Outcome<Error, Model::CreateNatGatewayResponse> CreateNatGatewayOutcome;
                typedef std::future<CreateNatGatewayOutcome> CreateNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNatGatewayRequest&, CreateNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewayAsyncHandler;
                typedef Outcome<Error, Model::CreateNatGatewayDestinationIpPortTranslationNatRuleResponse> CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome> CreateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNatGatewayDestinationIpPortTranslationNatRuleRequest&, CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Error, Model::CreateNetDetectResponse> CreateNetDetectOutcome;
                typedef std::future<CreateNetDetectOutcome> CreateNetDetectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetDetectRequest&, CreateNetDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetDetectAsyncHandler;
                typedef Outcome<Error, Model::CreateNetworkAclResponse> CreateNetworkAclOutcome;
                typedef std::future<CreateNetworkAclOutcome> CreateNetworkAclOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetworkAclRequest&, CreateNetworkAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkAclAsyncHandler;
                typedef Outcome<Error, Model::CreateNetworkInterfaceResponse> CreateNetworkInterfaceOutcome;
                typedef std::future<CreateNetworkInterfaceOutcome> CreateNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateNetworkInterfaceRequest&, CreateNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::CreateRouteTableResponse> CreateRouteTableOutcome;
                typedef std::future<CreateRouteTableOutcome> CreateRouteTableOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateRouteTableRequest&, CreateRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRouteTableAsyncHandler;
                typedef Outcome<Error, Model::CreateRoutesResponse> CreateRoutesOutcome;
                typedef std::future<CreateRoutesOutcome> CreateRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateRoutesRequest&, CreateRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoutesAsyncHandler;
                typedef Outcome<Error, Model::CreateSecurityGroupResponse> CreateSecurityGroupOutcome;
                typedef std::future<CreateSecurityGroupOutcome> CreateSecurityGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSecurityGroupRequest&, CreateSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateSecurityGroupPoliciesResponse> CreateSecurityGroupPoliciesOutcome;
                typedef std::future<CreateSecurityGroupPoliciesOutcome> CreateSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSecurityGroupPoliciesRequest&, CreateSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Error, Model::CreateSecurityGroupWithPoliciesResponse> CreateSecurityGroupWithPoliciesOutcome;
                typedef std::future<CreateSecurityGroupWithPoliciesOutcome> CreateSecurityGroupWithPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSecurityGroupWithPoliciesRequest&, CreateSecurityGroupWithPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityGroupWithPoliciesAsyncHandler;
                typedef Outcome<Error, Model::CreateServiceTemplateResponse> CreateServiceTemplateOutcome;
                typedef std::future<CreateServiceTemplateOutcome> CreateServiceTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateServiceTemplateRequest&, CreateServiceTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceTemplateAsyncHandler;
                typedef Outcome<Error, Model::CreateServiceTemplateGroupResponse> CreateServiceTemplateGroupOutcome;
                typedef std::future<CreateServiceTemplateGroupOutcome> CreateServiceTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateServiceTemplateGroupRequest&, CreateServiceTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceTemplateGroupAsyncHandler;
                typedef Outcome<Error, Model::CreateSubnetResponse> CreateSubnetOutcome;
                typedef std::future<CreateSubnetOutcome> CreateSubnetOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSubnetRequest&, CreateSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubnetAsyncHandler;
                typedef Outcome<Error, Model::CreateSubnetsResponse> CreateSubnetsOutcome;
                typedef std::future<CreateSubnetsOutcome> CreateSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateSubnetsRequest&, CreateSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSubnetsAsyncHandler;
                typedef Outcome<Error, Model::CreateVpcResponse> CreateVpcOutcome;
                typedef std::future<CreateVpcOutcome> CreateVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpcRequest&, CreateVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpcAsyncHandler;
                typedef Outcome<Error, Model::CreateVpnConnectionResponse> CreateVpnConnectionOutcome;
                typedef std::future<CreateVpnConnectionOutcome> CreateVpnConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpnConnectionRequest&, CreateVpnConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnConnectionAsyncHandler;
                typedef Outcome<Error, Model::CreateVpnGatewayResponse> CreateVpnGatewayOutcome;
                typedef std::future<CreateVpnGatewayOutcome> CreateVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::CreateVpnGatewayRequest&, CreateVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVpnGatewayAsyncHandler;
                typedef Outcome<Error, Model::DeleteAddressTemplateResponse> DeleteAddressTemplateOutcome;
                typedef std::future<DeleteAddressTemplateOutcome> DeleteAddressTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteAddressTemplateRequest&, DeleteAddressTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAddressTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteAddressTemplateGroupResponse> DeleteAddressTemplateGroupOutcome;
                typedef std::future<DeleteAddressTemplateGroupOutcome> DeleteAddressTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteAddressTemplateGroupRequest&, DeleteAddressTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAddressTemplateGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteAssistantCidrResponse> DeleteAssistantCidrOutcome;
                typedef std::future<DeleteAssistantCidrOutcome> DeleteAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteAssistantCidrRequest&, DeleteAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAssistantCidrAsyncHandler;
                typedef Outcome<Error, Model::DeleteBandwidthPackageResponse> DeleteBandwidthPackageOutcome;
                typedef std::future<DeleteBandwidthPackageOutcome> DeleteBandwidthPackageOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteBandwidthPackageRequest&, DeleteBandwidthPackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBandwidthPackageAsyncHandler;
                typedef Outcome<Error, Model::DeleteCcnResponse> DeleteCcnOutcome;
                typedef std::future<DeleteCcnOutcome> DeleteCcnOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteCcnRequest&, DeleteCcnOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCcnAsyncHandler;
                typedef Outcome<Error, Model::DeleteCustomerGatewayResponse> DeleteCustomerGatewayOutcome;
                typedef std::future<DeleteCustomerGatewayOutcome> DeleteCustomerGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteCustomerGatewayRequest&, DeleteCustomerGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomerGatewayAsyncHandler;
                typedef Outcome<Error, Model::DeleteDirectConnectGatewayResponse> DeleteDirectConnectGatewayOutcome;
                typedef std::future<DeleteDirectConnectGatewayOutcome> DeleteDirectConnectGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteDirectConnectGatewayRequest&, DeleteDirectConnectGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDirectConnectGatewayAsyncHandler;
                typedef Outcome<Error, Model::DeleteDirectConnectGatewayCcnRoutesResponse> DeleteDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<DeleteDirectConnectGatewayCcnRoutesOutcome> DeleteDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteDirectConnectGatewayCcnRoutesRequest&, DeleteDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::DeleteFlowLogResponse> DeleteFlowLogOutcome;
                typedef std::future<DeleteFlowLogOutcome> DeleteFlowLogOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteFlowLogRequest&, DeleteFlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowLogAsyncHandler;
                typedef Outcome<Error, Model::DeleteHaVipResponse> DeleteHaVipOutcome;
                typedef std::future<DeleteHaVipOutcome> DeleteHaVipOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteHaVipRequest&, DeleteHaVipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHaVipAsyncHandler;
                typedef Outcome<Error, Model::DeleteNatGatewayResponse> DeleteNatGatewayOutcome;
                typedef std::future<DeleteNatGatewayOutcome> DeleteNatGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNatGatewayRequest&, DeleteNatGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewayAsyncHandler;
                typedef Outcome<Error, Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleResponse> DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome> DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest&, DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteNetDetectResponse> DeleteNetDetectOutcome;
                typedef std::future<DeleteNetDetectOutcome> DeleteNetDetectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetDetectRequest&, DeleteNetDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetDetectAsyncHandler;
                typedef Outcome<Error, Model::DeleteNetworkAclResponse> DeleteNetworkAclOutcome;
                typedef std::future<DeleteNetworkAclOutcome> DeleteNetworkAclOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetworkAclRequest&, DeleteNetworkAclOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkAclAsyncHandler;
                typedef Outcome<Error, Model::DeleteNetworkInterfaceResponse> DeleteNetworkInterfaceOutcome;
                typedef std::future<DeleteNetworkInterfaceOutcome> DeleteNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteNetworkInterfaceRequest&, DeleteNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::DeleteRouteTableResponse> DeleteRouteTableOutcome;
                typedef std::future<DeleteRouteTableOutcome> DeleteRouteTableOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteRouteTableRequest&, DeleteRouteTableOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteTableAsyncHandler;
                typedef Outcome<Error, Model::DeleteRoutesResponse> DeleteRoutesOutcome;
                typedef std::future<DeleteRoutesOutcome> DeleteRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteRoutesRequest&, DeleteRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoutesAsyncHandler;
                typedef Outcome<Error, Model::DeleteSecurityGroupResponse> DeleteSecurityGroupOutcome;
                typedef std::future<DeleteSecurityGroupOutcome> DeleteSecurityGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteSecurityGroupRequest&, DeleteSecurityGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteSecurityGroupPoliciesResponse> DeleteSecurityGroupPoliciesOutcome;
                typedef std::future<DeleteSecurityGroupPoliciesOutcome> DeleteSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteSecurityGroupPoliciesRequest&, DeleteSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Error, Model::DeleteServiceTemplateResponse> DeleteServiceTemplateOutcome;
                typedef std::future<DeleteServiceTemplateOutcome> DeleteServiceTemplateOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteServiceTemplateRequest&, DeleteServiceTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceTemplateAsyncHandler;
                typedef Outcome<Error, Model::DeleteServiceTemplateGroupResponse> DeleteServiceTemplateGroupOutcome;
                typedef std::future<DeleteServiceTemplateGroupOutcome> DeleteServiceTemplateGroupOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteServiceTemplateGroupRequest&, DeleteServiceTemplateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceTemplateGroupAsyncHandler;
                typedef Outcome<Error, Model::DeleteSubnetResponse> DeleteSubnetOutcome;
                typedef std::future<DeleteSubnetOutcome> DeleteSubnetOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteSubnetRequest&, DeleteSubnetOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSubnetAsyncHandler;
                typedef Outcome<Error, Model::DeleteVpcResponse> DeleteVpcOutcome;
                typedef std::future<DeleteVpcOutcome> DeleteVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpcRequest&, DeleteVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpcAsyncHandler;
                typedef Outcome<Error, Model::DeleteVpnConnectionResponse> DeleteVpnConnectionOutcome;
                typedef std::future<DeleteVpnConnectionOutcome> DeleteVpnConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpnConnectionRequest&, DeleteVpnConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnConnectionAsyncHandler;
                typedef Outcome<Error, Model::DeleteVpnGatewayResponse> DeleteVpnGatewayOutcome;
                typedef std::future<DeleteVpnGatewayOutcome> DeleteVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DeleteVpnGatewayRequest&, DeleteVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVpnGatewayAsyncHandler;
                typedef Outcome<Error, Model::DescribeAccountAttributesResponse> DescribeAccountAttributesOutcome;
                typedef std::future<DescribeAccountAttributesOutcome> DescribeAccountAttributesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAccountAttributesRequest&, DescribeAccountAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountAttributesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAddressQuotaResponse> DescribeAddressQuotaOutcome;
                typedef std::future<DescribeAddressQuotaOutcome> DescribeAddressQuotaOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressQuotaRequest&, DescribeAddressQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressQuotaAsyncHandler;
                typedef Outcome<Error, Model::DescribeAddressTemplateGroupsResponse> DescribeAddressTemplateGroupsOutcome;
                typedef std::future<DescribeAddressTemplateGroupsOutcome> DescribeAddressTemplateGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressTemplateGroupsRequest&, DescribeAddressTemplateGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressTemplateGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeAddressTemplatesResponse> DescribeAddressTemplatesOutcome;
                typedef std::future<DescribeAddressTemplatesOutcome> DescribeAddressTemplatesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressTemplatesRequest&, DescribeAddressTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAddressesResponse> DescribeAddressesOutcome;
                typedef std::future<DescribeAddressesOutcome> DescribeAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAddressesRequest&, DescribeAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddressesAsyncHandler;
                typedef Outcome<Error, Model::DescribeAssistantCidrResponse> DescribeAssistantCidrOutcome;
                typedef std::future<DescribeAssistantCidrOutcome> DescribeAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeAssistantCidrRequest&, DescribeAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAssistantCidrAsyncHandler;
                typedef Outcome<Error, Model::DescribeBandwidthPackageQuotaResponse> DescribeBandwidthPackageQuotaOutcome;
                typedef std::future<DescribeBandwidthPackageQuotaOutcome> DescribeBandwidthPackageQuotaOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackageQuotaRequest&, DescribeBandwidthPackageQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackageQuotaAsyncHandler;
                typedef Outcome<Error, Model::DescribeBandwidthPackagesResponse> DescribeBandwidthPackagesOutcome;
                typedef std::future<DescribeBandwidthPackagesOutcome> DescribeBandwidthPackagesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeBandwidthPackagesRequest&, DescribeBandwidthPackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBandwidthPackagesAsyncHandler;
                typedef Outcome<Error, Model::DescribeCcnAttachedInstancesResponse> DescribeCcnAttachedInstancesOutcome;
                typedef std::future<DescribeCcnAttachedInstancesOutcome> DescribeCcnAttachedInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnAttachedInstancesRequest&, DescribeCcnAttachedInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnAttachedInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeCcnRoutesResponse> DescribeCcnRoutesOutcome;
                typedef std::future<DescribeCcnRoutesOutcome> DescribeCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnRoutesRequest&, DescribeCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::DescribeCcnsResponse> DescribeCcnsOutcome;
                typedef std::future<DescribeCcnsOutcome> DescribeCcnsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCcnsRequest&, DescribeCcnsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCcnsAsyncHandler;
                typedef Outcome<Error, Model::DescribeClassicLinkInstancesResponse> DescribeClassicLinkInstancesOutcome;
                typedef std::future<DescribeClassicLinkInstancesOutcome> DescribeClassicLinkInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeClassicLinkInstancesRequest&, DescribeClassicLinkInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClassicLinkInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeCustomerGatewayVendorsResponse> DescribeCustomerGatewayVendorsOutcome;
                typedef std::future<DescribeCustomerGatewayVendorsOutcome> DescribeCustomerGatewayVendorsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCustomerGatewayVendorsRequest&, DescribeCustomerGatewayVendorsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerGatewayVendorsAsyncHandler;
                typedef Outcome<Error, Model::DescribeCustomerGatewaysResponse> DescribeCustomerGatewaysOutcome;
                typedef std::future<DescribeCustomerGatewaysOutcome> DescribeCustomerGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeCustomerGatewaysRequest&, DescribeCustomerGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomerGatewaysAsyncHandler;
                typedef Outcome<Error, Model::DescribeDirectConnectGatewayCcnRoutesResponse> DescribeDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<DescribeDirectConnectGatewayCcnRoutesOutcome> DescribeDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeDirectConnectGatewayCcnRoutesRequest&, DescribeDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::DescribeDirectConnectGatewaysResponse> DescribeDirectConnectGatewaysOutcome;
                typedef std::future<DescribeDirectConnectGatewaysOutcome> DescribeDirectConnectGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeDirectConnectGatewaysRequest&, DescribeDirectConnectGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDirectConnectGatewaysAsyncHandler;
                typedef Outcome<Error, Model::DescribeFlowLogResponse> DescribeFlowLogOutcome;
                typedef std::future<DescribeFlowLogOutcome> DescribeFlowLogOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeFlowLogRequest&, DescribeFlowLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLogAsyncHandler;
                typedef Outcome<Error, Model::DescribeFlowLogsResponse> DescribeFlowLogsOutcome;
                typedef std::future<DescribeFlowLogsOutcome> DescribeFlowLogsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeFlowLogsRequest&, DescribeFlowLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLogsAsyncHandler;
                typedef Outcome<Error, Model::DescribeGatewayFlowMonitorDetailResponse> DescribeGatewayFlowMonitorDetailOutcome;
                typedef std::future<DescribeGatewayFlowMonitorDetailOutcome> DescribeGatewayFlowMonitorDetailOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeGatewayFlowMonitorDetailRequest&, DescribeGatewayFlowMonitorDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayFlowMonitorDetailAsyncHandler;
                typedef Outcome<Error, Model::DescribeGatewayFlowQosResponse> DescribeGatewayFlowQosOutcome;
                typedef std::future<DescribeGatewayFlowQosOutcome> DescribeGatewayFlowQosOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeGatewayFlowQosRequest&, DescribeGatewayFlowQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayFlowQosAsyncHandler;
                typedef Outcome<Error, Model::DescribeHaVipsResponse> DescribeHaVipsOutcome;
                typedef std::future<DescribeHaVipsOutcome> DescribeHaVipsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeHaVipsRequest&, DescribeHaVipsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHaVipsAsyncHandler;
                typedef Outcome<Error, Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesResponse> DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome;
                typedef std::future<DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome> DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest&, DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewayDestinationIpPortTranslationNatRulesAsyncHandler;
                typedef Outcome<Error, Model::DescribeNatGatewaysResponse> DescribeNatGatewaysOutcome;
                typedef std::future<DescribeNatGatewaysOutcome> DescribeNatGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNatGatewaysRequest&, DescribeNatGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNatGatewaysAsyncHandler;
                typedef Outcome<Error, Model::DescribeNetDetectStatesResponse> DescribeNetDetectStatesOutcome;
                typedef std::future<DescribeNetDetectStatesOutcome> DescribeNetDetectStatesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetDetectStatesRequest&, DescribeNetDetectStatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetDetectStatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeNetDetectsResponse> DescribeNetDetectsOutcome;
                typedef std::future<DescribeNetDetectsOutcome> DescribeNetDetectsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetDetectsRequest&, DescribeNetDetectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetDetectsAsyncHandler;
                typedef Outcome<Error, Model::DescribeNetworkAclsResponse> DescribeNetworkAclsOutcome;
                typedef std::future<DescribeNetworkAclsOutcome> DescribeNetworkAclsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkAclsRequest&, DescribeNetworkAclsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkAclsAsyncHandler;
                typedef Outcome<Error, Model::DescribeNetworkInterfaceLimitResponse> DescribeNetworkInterfaceLimitOutcome;
                typedef std::future<DescribeNetworkInterfaceLimitOutcome> DescribeNetworkInterfaceLimitOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkInterfaceLimitRequest&, DescribeNetworkInterfaceLimitOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkInterfaceLimitAsyncHandler;
                typedef Outcome<Error, Model::DescribeNetworkInterfacesResponse> DescribeNetworkInterfacesOutcome;
                typedef std::future<DescribeNetworkInterfacesOutcome> DescribeNetworkInterfacesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeNetworkInterfacesRequest&, DescribeNetworkInterfacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkInterfacesAsyncHandler;
                typedef Outcome<Error, Model::DescribeRouteTablesResponse> DescribeRouteTablesOutcome;
                typedef std::future<DescribeRouteTablesOutcome> DescribeRouteTablesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeRouteTablesRequest&, DescribeRouteTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteTablesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityGroupAssociationStatisticsResponse> DescribeSecurityGroupAssociationStatisticsOutcome;
                typedef std::future<DescribeSecurityGroupAssociationStatisticsOutcome> DescribeSecurityGroupAssociationStatisticsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupAssociationStatisticsRequest&, DescribeSecurityGroupAssociationStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupAssociationStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityGroupPoliciesResponse> DescribeSecurityGroupPoliciesOutcome;
                typedef std::future<DescribeSecurityGroupPoliciesOutcome> DescribeSecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupPoliciesRequest&, DescribeSecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityGroupReferencesResponse> DescribeSecurityGroupReferencesOutcome;
                typedef std::future<DescribeSecurityGroupReferencesOutcome> DescribeSecurityGroupReferencesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupReferencesRequest&, DescribeSecurityGroupReferencesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupReferencesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSecurityGroupsResponse> DescribeSecurityGroupsOutcome;
                typedef std::future<DescribeSecurityGroupsOutcome> DescribeSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSecurityGroupsRequest&, DescribeSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeServiceTemplateGroupsResponse> DescribeServiceTemplateGroupsOutcome;
                typedef std::future<DescribeServiceTemplateGroupsOutcome> DescribeServiceTemplateGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeServiceTemplateGroupsRequest&, DescribeServiceTemplateGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceTemplateGroupsAsyncHandler;
                typedef Outcome<Error, Model::DescribeServiceTemplatesResponse> DescribeServiceTemplatesOutcome;
                typedef std::future<DescribeServiceTemplatesOutcome> DescribeServiceTemplatesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeServiceTemplatesRequest&, DescribeServiceTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceTemplatesAsyncHandler;
                typedef Outcome<Error, Model::DescribeSubnetsResponse> DescribeSubnetsOutcome;
                typedef std::future<DescribeSubnetsOutcome> DescribeSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeSubnetsRequest&, DescribeSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubnetsAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskResultResponse> DescribeTaskResultOutcome;
                typedef std::future<DescribeTaskResultOutcome> DescribeTaskResultOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeTaskResultRequest&, DescribeTaskResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskResultAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcInstancesResponse> DescribeVpcInstancesOutcome;
                typedef std::future<DescribeVpcInstancesOutcome> DescribeVpcInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcInstancesRequest&, DescribeVpcInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcInstancesAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcIpv6AddressesResponse> DescribeVpcIpv6AddressesOutcome;
                typedef std::future<DescribeVpcIpv6AddressesOutcome> DescribeVpcIpv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcIpv6AddressesRequest&, DescribeVpcIpv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcIpv6AddressesAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcPrivateIpAddressesResponse> DescribeVpcPrivateIpAddressesOutcome;
                typedef std::future<DescribeVpcPrivateIpAddressesOutcome> DescribeVpcPrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcPrivateIpAddressesRequest&, DescribeVpcPrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcPrivateIpAddressesAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcResourceDashboardResponse> DescribeVpcResourceDashboardOutcome;
                typedef std::future<DescribeVpcResourceDashboardOutcome> DescribeVpcResourceDashboardOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcResourceDashboardRequest&, DescribeVpcResourceDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcResourceDashboardAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpcsResponse> DescribeVpcsOutcome;
                typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpcsRequest&, DescribeVpcsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcsAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpnConnectionsResponse> DescribeVpnConnectionsOutcome;
                typedef std::future<DescribeVpnConnectionsOutcome> DescribeVpnConnectionsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnConnectionsRequest&, DescribeVpnConnectionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnConnectionsAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpnGatewayCcnRoutesResponse> DescribeVpnGatewayCcnRoutesOutcome;
                typedef std::future<DescribeVpnGatewayCcnRoutesOutcome> DescribeVpnGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewayCcnRoutesRequest&, DescribeVpnGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::DescribeVpnGatewaysResponse> DescribeVpnGatewaysOutcome;
                typedef std::future<DescribeVpnGatewaysOutcome> DescribeVpnGatewaysOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DescribeVpnGatewaysRequest&, DescribeVpnGatewaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpnGatewaysAsyncHandler;
                typedef Outcome<Error, Model::DetachCcnInstancesResponse> DetachCcnInstancesOutcome;
                typedef std::future<DetachCcnInstancesOutcome> DetachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DetachCcnInstancesRequest&, DetachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachCcnInstancesAsyncHandler;
                typedef Outcome<Error, Model::DetachClassicLinkVpcResponse> DetachClassicLinkVpcOutcome;
                typedef std::future<DetachClassicLinkVpcOutcome> DetachClassicLinkVpcOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DetachClassicLinkVpcRequest&, DetachClassicLinkVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachClassicLinkVpcAsyncHandler;
                typedef Outcome<Error, Model::DetachNetworkInterfaceResponse> DetachNetworkInterfaceOutcome;
                typedef std::future<DetachNetworkInterfaceOutcome> DetachNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DetachNetworkInterfaceRequest&, DetachNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::DisableCcnRoutesResponse> DisableCcnRoutesOutcome;
                typedef std::future<DisableCcnRoutesOutcome> DisableCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableCcnRoutesRequest&, DisableCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::DisableGatewayFlowMonitorResponse> DisableGatewayFlowMonitorOutcome;
                typedef std::future<DisableGatewayFlowMonitorOutcome> DisableGatewayFlowMonitorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisableGatewayFlowMonitorRequest&, DisableGatewayFlowMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableGatewayFlowMonitorAsyncHandler;
                typedef Outcome<Error, Model::DisassociateAddressResponse> DisassociateAddressOutcome;
                typedef std::future<DisassociateAddressOutcome> DisassociateAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateAddressRequest&, DisassociateAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateAddressAsyncHandler;
                typedef Outcome<Error, Model::DisassociateNatGatewayAddressResponse> DisassociateNatGatewayAddressOutcome;
                typedef std::future<DisassociateNatGatewayAddressOutcome> DisassociateNatGatewayAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateNatGatewayAddressRequest&, DisassociateNatGatewayAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateNatGatewayAddressAsyncHandler;
                typedef Outcome<Error, Model::DisassociateNetworkAclSubnetsResponse> DisassociateNetworkAclSubnetsOutcome;
                typedef std::future<DisassociateNetworkAclSubnetsOutcome> DisassociateNetworkAclSubnetsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateNetworkAclSubnetsRequest&, DisassociateNetworkAclSubnetsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateNetworkAclSubnetsAsyncHandler;
                typedef Outcome<Error, Model::DisassociateNetworkInterfaceSecurityGroupsResponse> DisassociateNetworkInterfaceSecurityGroupsOutcome;
                typedef std::future<DisassociateNetworkInterfaceSecurityGroupsOutcome> DisassociateNetworkInterfaceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DisassociateNetworkInterfaceSecurityGroupsRequest&, DisassociateNetworkInterfaceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateNetworkInterfaceSecurityGroupsAsyncHandler;
                typedef Outcome<Error, Model::DownloadCustomerGatewayConfigurationResponse> DownloadCustomerGatewayConfigurationOutcome;
                typedef std::future<DownloadCustomerGatewayConfigurationOutcome> DownloadCustomerGatewayConfigurationOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::DownloadCustomerGatewayConfigurationRequest&, DownloadCustomerGatewayConfigurationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadCustomerGatewayConfigurationAsyncHandler;
                typedef Outcome<Error, Model::EnableCcnRoutesResponse> EnableCcnRoutesOutcome;
                typedef std::future<EnableCcnRoutesOutcome> EnableCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableCcnRoutesRequest&, EnableCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::EnableGatewayFlowMonitorResponse> EnableGatewayFlowMonitorOutcome;
                typedef std::future<EnableGatewayFlowMonitorOutcome> EnableGatewayFlowMonitorOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::EnableGatewayFlowMonitorRequest&, EnableGatewayFlowMonitorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableGatewayFlowMonitorAsyncHandler;
                typedef Outcome<Error, Model::GetCcnRegionBandwidthLimitsResponse> GetCcnRegionBandwidthLimitsOutcome;
                typedef std::future<GetCcnRegionBandwidthLimitsOutcome> GetCcnRegionBandwidthLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::GetCcnRegionBandwidthLimitsRequest&, GetCcnRegionBandwidthLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCcnRegionBandwidthLimitsAsyncHandler;
                typedef Outcome<Error, Model::HaVipAssociateAddressIpResponse> HaVipAssociateAddressIpOutcome;
                typedef std::future<HaVipAssociateAddressIpOutcome> HaVipAssociateAddressIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::HaVipAssociateAddressIpRequest&, HaVipAssociateAddressIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HaVipAssociateAddressIpAsyncHandler;
                typedef Outcome<Error, Model::HaVipDisassociateAddressIpResponse> HaVipDisassociateAddressIpOutcome;
                typedef std::future<HaVipDisassociateAddressIpOutcome> HaVipDisassociateAddressIpOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::HaVipDisassociateAddressIpRequest&, HaVipDisassociateAddressIpOutcome, const std::shared_ptr<const AsyncCallerContext>&)> HaVipDisassociateAddressIpAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceCreateVpnGatewayResponse> InquiryPriceCreateVpnGatewayOutcome;
                typedef std::future<InquiryPriceCreateVpnGatewayOutcome> InquiryPriceCreateVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquiryPriceCreateVpnGatewayRequest&, InquiryPriceCreateVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceCreateVpnGatewayAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceRenewVpnGatewayResponse> InquiryPriceRenewVpnGatewayOutcome;
                typedef std::future<InquiryPriceRenewVpnGatewayOutcome> InquiryPriceRenewVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquiryPriceRenewVpnGatewayRequest&, InquiryPriceRenewVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceRenewVpnGatewayAsyncHandler;
                typedef Outcome<Error, Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthResponse> InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome;
                typedef std::future<InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome> InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::InquiryPriceResetVpnGatewayInternetMaxBandwidthRequest&, InquiryPriceResetVpnGatewayInternetMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquiryPriceResetVpnGatewayInternetMaxBandwidthAsyncHandler;
                typedef Outcome<Error, Model::MigrateNetworkInterfaceResponse> MigrateNetworkInterfaceOutcome;
                typedef std::future<MigrateNetworkInterfaceOutcome> MigrateNetworkInterfaceOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::MigrateNetworkInterfaceRequest&, MigrateNetworkInterfaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigrateNetworkInterfaceAsyncHandler;
                typedef Outcome<Error, Model::MigratePrivateIpAddressResponse> MigratePrivateIpAddressOutcome;
                typedef std::future<MigratePrivateIpAddressOutcome> MigratePrivateIpAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::MigratePrivateIpAddressRequest&, MigratePrivateIpAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigratePrivateIpAddressAsyncHandler;
                typedef Outcome<Error, Model::ModifyAddressAttributeResponse> ModifyAddressAttributeOutcome;
                typedef std::future<ModifyAddressAttributeOutcome> ModifyAddressAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressAttributeRequest&, ModifyAddressAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyAddressInternetChargeTypeResponse> ModifyAddressInternetChargeTypeOutcome;
                typedef std::future<ModifyAddressInternetChargeTypeOutcome> ModifyAddressInternetChargeTypeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressInternetChargeTypeRequest&, ModifyAddressInternetChargeTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressInternetChargeTypeAsyncHandler;
                typedef Outcome<Error, Model::ModifyAddressTemplateAttributeResponse> ModifyAddressTemplateAttributeOutcome;
                typedef std::future<ModifyAddressTemplateAttributeOutcome> ModifyAddressTemplateAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressTemplateAttributeRequest&, ModifyAddressTemplateAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressTemplateAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyAddressTemplateGroupAttributeResponse> ModifyAddressTemplateGroupAttributeOutcome;
                typedef std::future<ModifyAddressTemplateGroupAttributeOutcome> ModifyAddressTemplateGroupAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressTemplateGroupAttributeRequest&, ModifyAddressTemplateGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressTemplateGroupAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyAddressesBandwidthResponse> ModifyAddressesBandwidthOutcome;
                typedef std::future<ModifyAddressesBandwidthOutcome> ModifyAddressesBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAddressesBandwidthRequest&, ModifyAddressesBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAddressesBandwidthAsyncHandler;
                typedef Outcome<Error, Model::ModifyAssistantCidrResponse> ModifyAssistantCidrOutcome;
                typedef std::future<ModifyAssistantCidrOutcome> ModifyAssistantCidrOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyAssistantCidrRequest&, ModifyAssistantCidrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAssistantCidrAsyncHandler;
                typedef Outcome<Error, Model::ModifyBandwidthPackageAttributeResponse> ModifyBandwidthPackageAttributeOutcome;
                typedef std::future<ModifyBandwidthPackageAttributeOutcome> ModifyBandwidthPackageAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyBandwidthPackageAttributeRequest&, ModifyBandwidthPackageAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBandwidthPackageAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyCcnAttributeResponse> ModifyCcnAttributeOutcome;
                typedef std::future<ModifyCcnAttributeOutcome> ModifyCcnAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCcnAttributeRequest&, ModifyCcnAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcnAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyCcnRegionBandwidthLimitsTypeResponse> ModifyCcnRegionBandwidthLimitsTypeOutcome;
                typedef std::future<ModifyCcnRegionBandwidthLimitsTypeOutcome> ModifyCcnRegionBandwidthLimitsTypeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCcnRegionBandwidthLimitsTypeRequest&, ModifyCcnRegionBandwidthLimitsTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCcnRegionBandwidthLimitsTypeAsyncHandler;
                typedef Outcome<Error, Model::ModifyCustomerGatewayAttributeResponse> ModifyCustomerGatewayAttributeOutcome;
                typedef std::future<ModifyCustomerGatewayAttributeOutcome> ModifyCustomerGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyCustomerGatewayAttributeRequest&, ModifyCustomerGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomerGatewayAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyDirectConnectGatewayAttributeResponse> ModifyDirectConnectGatewayAttributeOutcome;
                typedef std::future<ModifyDirectConnectGatewayAttributeOutcome> ModifyDirectConnectGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyDirectConnectGatewayAttributeRequest&, ModifyDirectConnectGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDirectConnectGatewayAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyFlowLogAttributeResponse> ModifyFlowLogAttributeOutcome;
                typedef std::future<ModifyFlowLogAttributeOutcome> ModifyFlowLogAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyFlowLogAttributeRequest&, ModifyFlowLogAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowLogAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyGatewayFlowQosResponse> ModifyGatewayFlowQosOutcome;
                typedef std::future<ModifyGatewayFlowQosOutcome> ModifyGatewayFlowQosOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyGatewayFlowQosRequest&, ModifyGatewayFlowQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGatewayFlowQosAsyncHandler;
                typedef Outcome<Error, Model::ModifyHaVipAttributeResponse> ModifyHaVipAttributeOutcome;
                typedef std::future<ModifyHaVipAttributeOutcome> ModifyHaVipAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyHaVipAttributeRequest&, ModifyHaVipAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHaVipAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyIpv6AddressesAttributeResponse> ModifyIpv6AddressesAttributeOutcome;
                typedef std::future<ModifyIpv6AddressesAttributeOutcome> ModifyIpv6AddressesAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyIpv6AddressesAttributeRequest&, ModifyIpv6AddressesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpv6AddressesAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyNatGatewayAttributeResponse> ModifyNatGatewayAttributeOutcome;
                typedef std::future<ModifyNatGatewayAttributeOutcome> ModifyNatGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewayAttributeRequest&, ModifyNatGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewayAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleResponse> ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome;
                typedef std::future<ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome> ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest&, ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler;
                typedef Outcome<Error, Model::ModifyNetDetectResponse> ModifyNetDetectOutcome;
                typedef std::future<ModifyNetDetectOutcome> ModifyNetDetectOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetDetectRequest&, ModifyNetDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetDetectAsyncHandler;
                typedef Outcome<Error, Model::ModifyNetworkAclAttributeResponse> ModifyNetworkAclAttributeOutcome;
                typedef std::future<ModifyNetworkAclAttributeOutcome> ModifyNetworkAclAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkAclAttributeRequest&, ModifyNetworkAclAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkAclAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyNetworkAclEntriesResponse> ModifyNetworkAclEntriesOutcome;
                typedef std::future<ModifyNetworkAclEntriesOutcome> ModifyNetworkAclEntriesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkAclEntriesRequest&, ModifyNetworkAclEntriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkAclEntriesAsyncHandler;
                typedef Outcome<Error, Model::ModifyNetworkInterfaceAttributeResponse> ModifyNetworkInterfaceAttributeOutcome;
                typedef std::future<ModifyNetworkInterfaceAttributeOutcome> ModifyNetworkInterfaceAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyNetworkInterfaceAttributeRequest&, ModifyNetworkInterfaceAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkInterfaceAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyPrivateIpAddressesAttributeResponse> ModifyPrivateIpAddressesAttributeOutcome;
                typedef std::future<ModifyPrivateIpAddressesAttributeOutcome> ModifyPrivateIpAddressesAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyPrivateIpAddressesAttributeRequest&, ModifyPrivateIpAddressesAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivateIpAddressesAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyRouteTableAttributeResponse> ModifyRouteTableAttributeOutcome;
                typedef std::future<ModifyRouteTableAttributeOutcome> ModifyRouteTableAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyRouteTableAttributeRequest&, ModifyRouteTableAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouteTableAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifySecurityGroupAttributeResponse> ModifySecurityGroupAttributeOutcome;
                typedef std::future<ModifySecurityGroupAttributeOutcome> ModifySecurityGroupAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifySecurityGroupAttributeRequest&, ModifySecurityGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifySecurityGroupPoliciesResponse> ModifySecurityGroupPoliciesOutcome;
                typedef std::future<ModifySecurityGroupPoliciesOutcome> ModifySecurityGroupPoliciesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifySecurityGroupPoliciesRequest&, ModifySecurityGroupPoliciesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityGroupPoliciesAsyncHandler;
                typedef Outcome<Error, Model::ModifyServiceTemplateAttributeResponse> ModifyServiceTemplateAttributeOutcome;
                typedef std::future<ModifyServiceTemplateAttributeOutcome> ModifyServiceTemplateAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyServiceTemplateAttributeRequest&, ModifyServiceTemplateAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceTemplateAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyServiceTemplateGroupAttributeResponse> ModifyServiceTemplateGroupAttributeOutcome;
                typedef std::future<ModifyServiceTemplateGroupAttributeOutcome> ModifyServiceTemplateGroupAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyServiceTemplateGroupAttributeRequest&, ModifyServiceTemplateGroupAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceTemplateGroupAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifySubnetAttributeResponse> ModifySubnetAttributeOutcome;
                typedef std::future<ModifySubnetAttributeOutcome> ModifySubnetAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifySubnetAttributeRequest&, ModifySubnetAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubnetAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyVpcAttributeResponse> ModifyVpcAttributeOutcome;
                typedef std::future<ModifyVpcAttributeOutcome> ModifyVpcAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpcAttributeRequest&, ModifyVpcAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyVpnConnectionAttributeResponse> ModifyVpnConnectionAttributeOutcome;
                typedef std::future<ModifyVpnConnectionAttributeOutcome> ModifyVpnConnectionAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnConnectionAttributeRequest&, ModifyVpnConnectionAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnConnectionAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyVpnGatewayAttributeResponse> ModifyVpnGatewayAttributeOutcome;
                typedef std::future<ModifyVpnGatewayAttributeOutcome> ModifyVpnGatewayAttributeOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewayAttributeRequest&, ModifyVpnGatewayAttributeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewayAttributeAsyncHandler;
                typedef Outcome<Error, Model::ModifyVpnGatewayCcnRoutesResponse> ModifyVpnGatewayCcnRoutesOutcome;
                typedef std::future<ModifyVpnGatewayCcnRoutesOutcome> ModifyVpnGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ModifyVpnGatewayCcnRoutesRequest&, ModifyVpnGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpnGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::RejectAttachCcnInstancesResponse> RejectAttachCcnInstancesOutcome;
                typedef std::future<RejectAttachCcnInstancesOutcome> RejectAttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RejectAttachCcnInstancesRequest&, RejectAttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RejectAttachCcnInstancesAsyncHandler;
                typedef Outcome<Error, Model::ReleaseAddressesResponse> ReleaseAddressesOutcome;
                typedef std::future<ReleaseAddressesOutcome> ReleaseAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReleaseAddressesRequest&, ReleaseAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseAddressesAsyncHandler;
                typedef Outcome<Error, Model::RemoveBandwidthPackageResourcesResponse> RemoveBandwidthPackageResourcesOutcome;
                typedef std::future<RemoveBandwidthPackageResourcesOutcome> RemoveBandwidthPackageResourcesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RemoveBandwidthPackageResourcesRequest&, RemoveBandwidthPackageResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveBandwidthPackageResourcesAsyncHandler;
                typedef Outcome<Error, Model::RenewVpnGatewayResponse> RenewVpnGatewayOutcome;
                typedef std::future<RenewVpnGatewayOutcome> RenewVpnGatewayOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::RenewVpnGatewayRequest&, RenewVpnGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewVpnGatewayAsyncHandler;
                typedef Outcome<Error, Model::ReplaceDirectConnectGatewayCcnRoutesResponse> ReplaceDirectConnectGatewayCcnRoutesOutcome;
                typedef std::future<ReplaceDirectConnectGatewayCcnRoutesOutcome> ReplaceDirectConnectGatewayCcnRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceDirectConnectGatewayCcnRoutesRequest&, ReplaceDirectConnectGatewayCcnRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceDirectConnectGatewayCcnRoutesAsyncHandler;
                typedef Outcome<Error, Model::ReplaceRouteTableAssociationResponse> ReplaceRouteTableAssociationOutcome;
                typedef std::future<ReplaceRouteTableAssociationOutcome> ReplaceRouteTableAssociationOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceRouteTableAssociationRequest&, ReplaceRouteTableAssociationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRouteTableAssociationAsyncHandler;
                typedef Outcome<Error, Model::ReplaceRoutesResponse> ReplaceRoutesOutcome;
                typedef std::future<ReplaceRoutesOutcome> ReplaceRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceRoutesRequest&, ReplaceRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceRoutesAsyncHandler;
                typedef Outcome<Error, Model::ReplaceSecurityGroupPolicyResponse> ReplaceSecurityGroupPolicyOutcome;
                typedef std::future<ReplaceSecurityGroupPolicyOutcome> ReplaceSecurityGroupPolicyOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ReplaceSecurityGroupPolicyRequest&, ReplaceSecurityGroupPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceSecurityGroupPolicyAsyncHandler;
                typedef Outcome<Error, Model::ResetAttachCcnInstancesResponse> ResetAttachCcnInstancesOutcome;
                typedef std::future<ResetAttachCcnInstancesOutcome> ResetAttachCcnInstancesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetAttachCcnInstancesRequest&, ResetAttachCcnInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAttachCcnInstancesAsyncHandler;
                typedef Outcome<Error, Model::ResetNatGatewayConnectionResponse> ResetNatGatewayConnectionOutcome;
                typedef std::future<ResetNatGatewayConnectionOutcome> ResetNatGatewayConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetNatGatewayConnectionRequest&, ResetNatGatewayConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetNatGatewayConnectionAsyncHandler;
                typedef Outcome<Error, Model::ResetRoutesResponse> ResetRoutesOutcome;
                typedef std::future<ResetRoutesOutcome> ResetRoutesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetRoutesRequest&, ResetRoutesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetRoutesAsyncHandler;
                typedef Outcome<Error, Model::ResetVpnConnectionResponse> ResetVpnConnectionOutcome;
                typedef std::future<ResetVpnConnectionOutcome> ResetVpnConnectionOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetVpnConnectionRequest&, ResetVpnConnectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetVpnConnectionAsyncHandler;
                typedef Outcome<Error, Model::ResetVpnGatewayInternetMaxBandwidthResponse> ResetVpnGatewayInternetMaxBandwidthOutcome;
                typedef std::future<ResetVpnGatewayInternetMaxBandwidthOutcome> ResetVpnGatewayInternetMaxBandwidthOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::ResetVpnGatewayInternetMaxBandwidthRequest&, ResetVpnGatewayInternetMaxBandwidthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetVpnGatewayInternetMaxBandwidthAsyncHandler;
                typedef Outcome<Error, Model::SetCcnRegionBandwidthLimitsResponse> SetCcnRegionBandwidthLimitsOutcome;
                typedef std::future<SetCcnRegionBandwidthLimitsOutcome> SetCcnRegionBandwidthLimitsOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::SetCcnRegionBandwidthLimitsRequest&, SetCcnRegionBandwidthLimitsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetCcnRegionBandwidthLimitsAsyncHandler;
                typedef Outcome<Error, Model::TransformAddressResponse> TransformAddressOutcome;
                typedef std::future<TransformAddressOutcome> TransformAddressOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::TransformAddressRequest&, TransformAddressOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransformAddressAsyncHandler;
                typedef Outcome<Error, Model::UnassignIpv6AddressesResponse> UnassignIpv6AddressesOutcome;
                typedef std::future<UnassignIpv6AddressesOutcome> UnassignIpv6AddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignIpv6AddressesRequest&, UnassignIpv6AddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignIpv6AddressesAsyncHandler;
                typedef Outcome<Error, Model::UnassignIpv6CidrBlockResponse> UnassignIpv6CidrBlockOutcome;
                typedef std::future<UnassignIpv6CidrBlockOutcome> UnassignIpv6CidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignIpv6CidrBlockRequest&, UnassignIpv6CidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignIpv6CidrBlockAsyncHandler;
                typedef Outcome<Error, Model::UnassignIpv6SubnetCidrBlockResponse> UnassignIpv6SubnetCidrBlockOutcome;
                typedef std::future<UnassignIpv6SubnetCidrBlockOutcome> UnassignIpv6SubnetCidrBlockOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignIpv6SubnetCidrBlockRequest&, UnassignIpv6SubnetCidrBlockOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignIpv6SubnetCidrBlockAsyncHandler;
                typedef Outcome<Error, Model::UnassignPrivateIpAddressesResponse> UnassignPrivateIpAddressesOutcome;
                typedef std::future<UnassignPrivateIpAddressesOutcome> UnassignPrivateIpAddressesOutcomeCallable;
                typedef std::function<void(const VpcClient*, const Model::UnassignPrivateIpAddressesRequest&, UnassignPrivateIpAddressesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnassignPrivateIpAddressesAsyncHandler;



                /**
                 *This API (AcceptAttachCcnInstances) is used to associate instances across accounts. Cloud Connect Network (CCN) owners accept and agree to the operations.
                 * @param req AcceptAttachCcnInstancesRequest
                 * @return AcceptAttachCcnInstancesOutcome
                 */
                AcceptAttachCcnInstancesOutcome AcceptAttachCcnInstances(const Model::AcceptAttachCcnInstancesRequest &request);
                void AcceptAttachCcnInstancesAsync(const Model::AcceptAttachCcnInstancesRequest& request, const AcceptAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AcceptAttachCcnInstancesOutcomeCallable AcceptAttachCcnInstancesCallable(const Model::AcceptAttachCcnInstancesRequest& request);

                /**
                 *This API is used to add resources to a bandwidth package, including [Elastic IP](https://cloud.tencent.com/document/product/213/1941), [Cloud Load Balancer](https://cloud.tencent.com/document/product/214/517), and so on.
                 * @param req AddBandwidthPackageResourcesRequest
                 * @return AddBandwidthPackageResourcesOutcome
                 */
                AddBandwidthPackageResourcesOutcome AddBandwidthPackageResources(const Model::AddBandwidthPackageResourcesRequest &request);
                void AddBandwidthPackageResourcesAsync(const Model::AddBandwidthPackageResourcesRequest& request, const AddBandwidthPackageResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddBandwidthPackageResourcesOutcomeCallable AddBandwidthPackageResourcesCallable(const Model::AddBandwidthPackageResourcesRequest& request);

                /**
                 *This API is used to apply for one or more [Elastic IP Addresses](https://cloud.tencent.com/document/product/213/1941) (EIPs for short).
* An EIP is a static IP address that is dedicated for dynamic cloud computing. You can quickly re-map an EIP to another instance under your account to protect against instance failures.
* Your EIP is associated with your Tencent Cloud account rather than an instance. It remains associated with your Tencent Cloud account until you choose to explicitly release it or your account is in arrears for more than 24 hours.
* The maximum number of EIPs that can be applied for a Tencent Cloud account in each region is restricted. For more information, see [EIP Product Introduction](https://cloud.tencent.com/document/product/213/5733). You can get the quota information through the DescribeAddressQuota API.
                 * @param req AllocateAddressesRequest
                 * @return AllocateAddressesOutcome
                 */
                AllocateAddressesOutcome AllocateAddresses(const Model::AllocateAddressesRequest &request);
                void AllocateAddressesAsync(const Model::AllocateAddressesRequest& request, const AllocateAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AllocateAddressesOutcomeCallable AllocateAddressesCallable(const Model::AllocateAddressesRequest& request);

                /**
                 *This API (AssignIpv6Addresses) is used to apply for an IPv6 address for the ENI.<br />
This API is completed asynchronously. If you need to query the async execution results, use the `RequestId` returned by this API to query the `QueryTask` API.
* An ENI can only be bound with a limited number of IPs. For more information about resource limits, see<a href="/document/product/576/18527">ENI use limits</a>.
* You can specify the `IPv6` address when applying. The address type cannot be the primary `IP`. Currently, `IPv6` can only be supported as the secondary `IP`.
* The address must be unoccupied and is in the subnet to which the ENI belongs.
* When applying for one to multiple secondary `IPv6` addresses on ENI, the API will return the specified number of secondary `IPv6` addresses in the subnet range where the ENI is located.
                 * @param req AssignIpv6AddressesRequest
                 * @return AssignIpv6AddressesOutcome
                 */
                AssignIpv6AddressesOutcome AssignIpv6Addresses(const Model::AssignIpv6AddressesRequest &request);
                void AssignIpv6AddressesAsync(const Model::AssignIpv6AddressesRequest& request, const AssignIpv6AddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignIpv6AddressesOutcomeCallable AssignIpv6AddressesCallable(const Model::AssignIpv6AddressesRequest& request);

                /**
                 *This API is used to assign IPv6 ranges.
* To use this API, you must already have a VPC instance. If you do not have a VPC instance yet, use the <a href="https://cloud.tencent.com/document/api/215/15774" title="CreateVpc" target="_blank">CreateVpc</a> API to create one.
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
                 *This API (AssignPrivateIpAddresses) is used for the ENI to apply for private IPs.
* An ENI can only be bound with a limited number of IP addresses. For more information about resource limits, see <a href="/document/product/576/18527">ENI Use Limits</a>.
* You can specify the private IP you want to apply for. It cannot be the primary IP, which already exists and cannot be modified. The private IP must be in the same subnet as the ENI, and cannot be occupied.
* You can apply for more than one secondary private IP on the ENI. The API will return the specified number of secondary private IPs in the subnet IP range of the ENI.
                 * @param req AssignPrivateIpAddressesRequest
                 * @return AssignPrivateIpAddressesOutcome
                 */
                AssignPrivateIpAddressesOutcome AssignPrivateIpAddresses(const Model::AssignPrivateIpAddressesRequest &request);
                void AssignPrivateIpAddressesAsync(const Model::AssignPrivateIpAddressesRequest& request, const AssignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssignPrivateIpAddressesOutcomeCallable AssignPrivateIpAddressesCallable(const Model::AssignPrivateIpAddressesRequest& request);

                /**
                 *This API (AssociateAddress) is used to bind an [Elastic IP](https://cloud.tencent.com/document/product/213/1941) (EIP for short) to the specified private IP of an instance or ENI.
* Essentially, binding an EIP to an instance (CVM) means binding an EIP to the primary private IP of the primary ENI on an instance.
* When you bind an EIP to the primary private IP of the primary ENI, the previously bound public IP is automatically unbound and released.
* To bind the EIP to the private IP of the specified ENI (not the primary private IP of the primary ENI), you must unbind the EIP before you can bind a new one.
* To bind the EIP to a NAT gateway, use the API [EipBindNatGateway](https://cloud.tencent.com/document/product/215/4093)
* EIP that is in arrears or blocked cannot be bound.
* Only EIP in the UNBIND status can be bound.
                 * @param req AssociateAddressRequest
                 * @return AssociateAddressOutcome
                 */
                AssociateAddressOutcome AssociateAddress(const Model::AssociateAddressRequest &request);
                void AssociateAddressAsync(const Model::AssociateAddressRequest& request, const AssociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AssociateAddressOutcomeCallable AssociateAddressCallable(const Model::AssociateAddressRequest& request);

                /**
                 *This API is used to bind an EIP to NAT Gateway.
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
                 *This API (AttachCcnInstances) is used to load a network instance to a CCN instance. Network instances include VPCs and Direct Connect gateways.<br />
The number of network instances that each CCN can be associated with is limited. For more information, see the product documentation. If you need to associate more instances, please contact online customer service.
                 * @param req AttachCcnInstancesRequest
                 * @return AttachCcnInstancesOutcome
                 */
                AttachCcnInstancesOutcome AttachCcnInstances(const Model::AttachCcnInstancesRequest &request);
                void AttachCcnInstancesAsync(const Model::AttachCcnInstancesRequest& request, const AttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachCcnInstancesOutcomeCallable AttachCcnInstancesCallable(const Model::AttachCcnInstancesRequest& request);

                /**
                 *This API is used to create a Classiclink between a VPC instance and a basic network device.
* The VPC instance and the basic network device must be in the same region.
* For differences between VPC and basic networks, see <a href="https://cloud.tencent.com/document/product/215/30720">VPC and Basic Networks</a>.
                 * @param req AttachClassicLinkVpcRequest
                 * @return AttachClassicLinkVpcOutcome
                 */
                AttachClassicLinkVpcOutcome AttachClassicLinkVpc(const Model::AttachClassicLinkVpcRequest &request);
                void AttachClassicLinkVpcAsync(const Model::AttachClassicLinkVpcRequest& request, const AttachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachClassicLinkVpcOutcomeCallable AttachClassicLinkVpcCallable(const Model::AttachClassicLinkVpcRequest& request);

                /**
                 *This API is used to bind an ENI to a CVM.
* One CVM can be bound to multiple ENIs, but only one primary ENI. For more information on the limits, see <a href="https://cloud.tencent.com/document/product/576/18527">ENI Use Limits</a>.
* An ENI can only be bound to one CVM at a time.
* Only CVMs in the running or shutdown state can be bound to an ENI. For more information on CVM states, see <a href="https://cloud.tencent.com/document/api/213/9452#InstanceStatus">Tencent CVM Information</a>.
* An ENI can only be bound to a CVM in a VPC instance, and the CVM must reside in the same availability zone as the subnet of the ENI.
                 * @param req AttachNetworkInterfaceRequest
                 * @return AttachNetworkInterfaceOutcome
                 */
                AttachNetworkInterfaceOutcome AttachNetworkInterface(const Model::AttachNetworkInterfaceRequest &request);
                void AttachNetworkInterfaceAsync(const Model::AttachNetworkInterfaceRequest& request, const AttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachNetworkInterfaceOutcomeCallable AttachNetworkInterfaceCallable(const Model::AttachNetworkInterfaceRequest& request);

                /**
                 *This API (CheckAssistantCidr) is used to check overlapping of a secondary CIDR block with inventory routing, peering connection (opposite VPC CIDR block), and any other resources. If an overlap is present, the overlapped resources are returned. (To use this API that is in Beta, please submit a ticket.)
* Check whether the secondary CIDR block overlaps with a primary or secondary CIDR block of the current VPC.
* Check whether the secondary CIDR block overlaps with the routing destination of the current VPC.
* Check whether the secondary CIDR block is peer-connected to the current VPC, and whether it overlaps with a main or secondary CIDR block of the opposite VPC.
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
                 *This API (CreateAddressTemplate) is used to create an IP address template.
                 * @param req CreateAddressTemplateRequest
                 * @return CreateAddressTemplateOutcome
                 */
                CreateAddressTemplateOutcome CreateAddressTemplate(const Model::CreateAddressTemplateRequest &request);
                void CreateAddressTemplateAsync(const Model::CreateAddressTemplateRequest& request, const CreateAddressTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAddressTemplateOutcomeCallable CreateAddressTemplateCallable(const Model::CreateAddressTemplateRequest& request);

                /**
                 *This API (CreateAddressTemplateGroup) is used to create an IP address template group.
                 * @param req CreateAddressTemplateGroupRequest
                 * @return CreateAddressTemplateGroupOutcome
                 */
                CreateAddressTemplateGroupOutcome CreateAddressTemplateGroup(const Model::CreateAddressTemplateGroupRequest &request);
                void CreateAddressTemplateGroupAsync(const Model::CreateAddressTemplateGroupRequest& request, const CreateAddressTemplateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAddressTemplateGroupOutcomeCallable CreateAddressTemplateGroupCallable(const Model::CreateAddressTemplateGroupRequest& request);

                /**
                 *This API is used to create an ENI and bind it to a CVM.
* You can specify private IP addresses and a primary IP when creating an ENI. The specified private IP must be idle and in the same subnet as the ENI.
* When creating an ENI, you can specify the number of private IP addresses that you want to apply for. The system will randomly generate private IP addresses.
* An ENI can only be bound to a limited number of IP addresses. For more information about resource limits, see <a href="/document/product/576/18527">ENI Use Limits</a>.
* You can bind an existing security group when creating an ENI.
* You can bind a tag when creating an ENI. The tag list in the response indicates the tags that have been successfully added.
                 * @param req CreateAndAttachNetworkInterfaceRequest
                 * @return CreateAndAttachNetworkInterfaceOutcome
                 */
                CreateAndAttachNetworkInterfaceOutcome CreateAndAttachNetworkInterface(const Model::CreateAndAttachNetworkInterfaceRequest &request);
                void CreateAndAttachNetworkInterfaceAsync(const Model::CreateAndAttachNetworkInterfaceRequest& request, const CreateAndAttachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAndAttachNetworkInterfaceOutcomeCallable CreateAndAttachNetworkInterfaceCallable(const Model::CreateAndAttachNetworkInterfaceRequest& request);

                /**
                 *This API (CreateAssistantCidr) is used to batch create secondary CIDR blocks. (To use this API that is in Beta, please submit a ticket.)
                 * @param req CreateAssistantCidrRequest
                 * @return CreateAssistantCidrOutcome
                 */
                CreateAssistantCidrOutcome CreateAssistantCidr(const Model::CreateAssistantCidrRequest &request);
                void CreateAssistantCidrAsync(const Model::CreateAssistantCidrRequest& request, const CreateAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAssistantCidrOutcomeCallable CreateAssistantCidrCallable(const Model::CreateAssistantCidrRequest& request);

                /**
                 *This API is used to create [device bandwidth packages](https://cloud.tencent.com/document/product/684/15246#.E8.AE.BE.E5.A4.87.E5.B8.A6.E5.AE.BD.E5.8C.85) and [IP bandwidth packages](https://cloud.tencent.com/document/product/684/15246#ip-.E5.B8.A6.E5.AE.BD.E5.8C.85)
                 * @param req CreateBandwidthPackageRequest
                 * @return CreateBandwidthPackageOutcome
                 */
                CreateBandwidthPackageOutcome CreateBandwidthPackage(const Model::CreateBandwidthPackageRequest &request);
                void CreateBandwidthPackageAsync(const Model::CreateBandwidthPackageRequest& request, const CreateBandwidthPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBandwidthPackageOutcomeCallable CreateBandwidthPackageCallable(const Model::CreateBandwidthPackageRequest& request);

                /**
                 *This API is used to create a Cloud Connect Network (CCN).<br />
* You can bind a tag when creating a CCN instance. The tag list in the response indicates the tags that have been successfully added.
Each account can only create a limited number of CCN instances. For more information, see product documentation. To create more instances, contact the online customer service.
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
                 *This API is used to create a default VPC.

The default VPC is suitable for getting started with and launching public instances, and it can be used like any other VPCs. To create a standard VPC, for which you need to specify a VPC name, VPC IP range, subnet IP range, and subnet availability zone, use the regular CreateVpc API.

Under normal circumstances, this API may not create a default VPC. It depends on the network attributes (DescribeAccountAttributes) of your account.
* If both basic network and VPC are supported, the returned VpcId is 0.
* If only VPC is supported, the default VPC information is returned.

You can also use the Force parameter to forcibly return a default VPC.
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
                 *This API (CreateHaVip) is used to create a highly available virtual IP (HAVIP)
                 * @param req CreateHaVipRequest
                 * @return CreateHaVipOutcome
                 */
                CreateHaVipOutcome CreateHaVip(const Model::CreateHaVipRequest &request);
                void CreateHaVipAsync(const Model::CreateHaVipRequest& request, const CreateHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateHaVipOutcomeCallable CreateHaVipCallable(const Model::CreateHaVipRequest& request);

                /**
                 *This API (CreateNatGateway) is used to create a NAT gateway.
                 * @param req CreateNatGatewayRequest
                 * @return CreateNatGatewayOutcome
                 */
                CreateNatGatewayOutcome CreateNatGateway(const Model::CreateNatGatewayRequest &request);
                void CreateNatGatewayAsync(const Model::CreateNatGatewayRequest& request, const CreateNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatGatewayOutcomeCallable CreateNatGatewayCallable(const Model::CreateNatGatewayRequest& request);

                /**
                 *This API (CreateNatGatewayDestinationIpPortTranslationNatRule) is used to create a port forwarding rule for a NAT gateway.
                 * @param req CreateNatGatewayDestinationIpPortTranslationNatRuleRequest
                 * @return CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome
                 */
                CreateNatGatewayDestinationIpPortTranslationNatRuleOutcome CreateNatGatewayDestinationIpPortTranslationNatRule(const Model::CreateNatGatewayDestinationIpPortTranslationNatRuleRequest &request);
                void CreateNatGatewayDestinationIpPortTranslationNatRuleAsync(const Model::CreateNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const CreateNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable CreateNatGatewayDestinationIpPortTranslationNatRuleCallable(const Model::CreateNatGatewayDestinationIpPortTranslationNatRuleRequest& request);

                /**
                 *This API is used to create a network detection instance.
                 * @param req CreateNetDetectRequest
                 * @return CreateNetDetectOutcome
                 */
                CreateNetDetectOutcome CreateNetDetect(const Model::CreateNetDetectRequest &request);
                void CreateNetDetectAsync(const Model::CreateNetDetectRequest& request, const CreateNetDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetDetectOutcomeCallable CreateNetDetectCallable(const Model::CreateNetDetectRequest& request);

                /**
                 *This API is used to create a <a href="https://cloud.tencent.com/document/product/215/20088">network ACL</a>.
* The inbound and outbound rules for a new network ACL are "Deny All" by default. You need to call `ModifyNetworkAclEntries` after creation to set rules for the network ACL as needed.
                 * @param req CreateNetworkAclRequest
                 * @return CreateNetworkAclOutcome
                 */
                CreateNetworkAclOutcome CreateNetworkAcl(const Model::CreateNetworkAclRequest &request);
                void CreateNetworkAclAsync(const Model::CreateNetworkAclRequest& request, const CreateNetworkAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateNetworkAclOutcomeCallable CreateNetworkAclCallable(const Model::CreateNetworkAclRequest& request);

                /**
                 *This API is used to create one or more ENIs.
* You can specify private IP addresses and a primary IP when creating an ENI. The specified private IP must be in the same subnet as the ENI and is not occupied.
* When creating an ENI, you can specify the number of private IP addresses that you want to apply for. The system will randomly generate private IP addresses.
* An ENI can only be bound with a limited number of IP addresses. For more information about resource limits, see <a href="/document/product/576/18527">ENI Use Limits</a>.
* You can bind an existing security group when creating an ENI.
* You can bind a tag when creating an ENI. The tag list in the response indicates the tags that have been successfully added.
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
                 *This API (CreateRoutes) is used to create a routing policy.
* You can create routing policies in batch for a specified route table.
                 * @param req CreateRoutesRequest
                 * @return CreateRoutesOutcome
                 */
                CreateRoutesOutcome CreateRoutes(const Model::CreateRoutesRequest &request);
                void CreateRoutesAsync(const Model::CreateRoutesRequest& request, const CreateRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRoutesOutcomeCallable CreateRoutesCallable(const Model::CreateRoutesRequest& request);

                /**
                 *This API is used to create a security group (SecurityGroup).
* Note the <a href="https://cloud.tencent.com/document/product/213/12453">maximum number of security groups</a> per project in each region under each account.
* Both the inbound and outbound rules for a newly created security group are "Deny All" by default. You need to call CreateSecurityGroupPolicies to set security group rules based on your needs.
* You can bind a tag when creating a security group. The tag list in the response indicates the tags that have been successfully added.
                 * @param req CreateSecurityGroupRequest
                 * @return CreateSecurityGroupOutcome
                 */
                CreateSecurityGroupOutcome CreateSecurityGroup(const Model::CreateSecurityGroupRequest &request);
                void CreateSecurityGroupAsync(const Model::CreateSecurityGroupRequest& request, const CreateSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupOutcomeCallable CreateSecurityGroupCallable(const Model::CreateSecurityGroupRequest& request);

                /**
                 *This API is used to create security group policies (SecurityGroupPolicy).

For parameters of SecurityGroupPolicySet,
<ul>
<li>`Version`: the version number of a security group policy, which automatically increases by one each time you update the security policy, to prevent expiration of the updated routing policies. If it is left empty, any conflicts will be ignored.</li>
<li>When creating the `Egress` and `Ingress` polices,<ul>
<li>`Protocol`: allows TCP, UDP, ICMP, ICMPV6, GRE, or ALL.</li>
<li>`CidrBlock`: a CIDR block in the correct format. In a classic network, if a `CidrBlock` contains private IPs on Tencent Cloud for devices under your account other than CVMs, it does not mean this policy allows you to access these devices. The network isolation policies between tenants take priority over the private network policies in security groups.</li>
<li>`Ipv6CidrBlock`: an IPv6 CIDR block in the correct format. In a classic network, if an `Ipv6CidrBlock` contains private IPv6 addresses on Tencent Cloud for devices under your account other than CVMs, it does not mean this policy allows you to access these devices. The network isolation policies between tenants take priority over the private network policies in security groups.</li>
<li>`SecurityGroupId`: ID of the security group. It can be the ID of security group to be modified, or the ID of other security group in the same project. All private IPs of all CVMs under the security group will be covered. If this field is used, the policy will automatically change according to the CVM associated with the group ID while being used to match network messages. You don't need to change it manually.</li>
<li>`Port`: a single port number such as 80, or a port range in the format of '8000-8010'. You may use this field only if the `Protocol` field takes the value `TCP` or `UDP`. Otherwise `Protocol` and `Port` are mutually exclusive.</li>
<li>`Action`: only allows `ACCEPT` or `DROP`.</li>
<li>`CidrBlock`, `Ipv6CidrBlock`, `SecurityGroupId`, and `AddressTemplate` are mutually exclusive. `Protocol` + `Port` and `ServiceTemplate` are mutually exclusive.</li>
<li>You can only create policies in one direction in each request. To specify the `PolicyIndex` parameter, use the same index number in policies.</li>
</ul></li></ul>
                 * @param req CreateSecurityGroupPoliciesRequest
                 * @return CreateSecurityGroupPoliciesOutcome
                 */
                CreateSecurityGroupPoliciesOutcome CreateSecurityGroupPolicies(const Model::CreateSecurityGroupPoliciesRequest &request);
                void CreateSecurityGroupPoliciesAsync(const Model::CreateSecurityGroupPoliciesRequest& request, const CreateSecurityGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityGroupPoliciesOutcomeCallable CreateSecurityGroupPoliciesCallable(const Model::CreateSecurityGroupPoliciesRequest& request);

                /**
                 *This API (CreateSecurityGroupWithPolicies) is used to create security groups, and add security group policies.
* Note the<a href="https://cloud.tencent.com/document/product/213/12453">maximum number of security groups</a>per project in each region under each account.
* Both the inbound and outbound policies for a newly created security group are Deny All by default. You need to call CreateSecurityGroupPolicies to set security group policies according to your needs.

Description:
* `Version`: Indicates the version number of a security group policy, which will automatically increment by 1 every time you update the security policy, to prevent the expiration of the updated policies. If this field is left empty, any conflicts will be ignored.
* `Protocol`: Values can be TCP, UDP, ICMP, ICMPV6, GRE, or ALL.
* `CidrBlock`:  A CIDR block in the correct format. In a basic network, if a CidrBlock contains private IPs on Tencent Cloud for devices under your account other than CVMs, it does not mean this policy allows you to access these devices. The network isolation policies between tenants take priority over the private network policies in security groups.
* `Ipv6CidrBlock`: An IPv6 CIDR block in the correct format. In a basic network, if an Ipv6CidrBlock contains private IPv6 addresses on Tencent Cloud for devices under your account other than CVMs, it does not mean this policy allows you to access these devices. The network isolation policies between tenants take priority over the private network policies in security groups.
* `SecurityGroupId`: ID of the security group. It can be in the same project as the security group to be modified, including the ID of the security group itself, to represent private IP addresses of all CVMs under the security group. If this field is used, the policy will change without manual modification according to the CVM associated with the policy ID while being used to match network messages.
* `Port`: A single port number, or a port range in the format of '8000-8010'. The Port field is accepted only if the value of the `Protocol` field is `TCP` or `UDP`. Otherwise Protocol and Port are mutually exclusive. 
* `Action`: Values can be `ACCEPT` or `DROP`.
* CidrBlock, Ipv6CidrBlock, SecurityGroupId, and AddressTemplate are exclusive and cannot be entered at the same time. 'Protocol + Port' and ServiceTemplate are mutually exclusive and cannot be entered at the same time.
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
* The subnet mask of the smallest IP address range that can be created is 28 (16 IP addresses), and that of the largest IP address range is 16 (65,536 IP addresses). For more information, see the corresponding documents about VPC IP address ranges.
* The number of VPC instances that can be created in a region is limited. For more information, see <a href="https://intl.cloud.tencent.com/doc/product/215/537" title="VPC Use Limits">VPC Use Limits</a>. To request more resources, contact the online customer service.
* You can bind a tag when creating a VPC instance. The tag list in the response indicates the tags that have been successfully added.
                 * @param req CreateVpcRequest
                 * @return CreateVpcOutcome
                 */
                CreateVpcOutcome CreateVpc(const Model::CreateVpcRequest &request);
                void CreateVpcAsync(const Model::CreateVpcRequest& request, const CreateVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVpcOutcomeCallable CreateVpcCallable(const Model::CreateVpcRequest& request);

                /**
                 *This API (CreateVpnConnection) is used to create VPN tunnel.
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
                 *This API (DeleteAssistantCidr) is used to delete secondary CIDR blocks. (To use this API that is in Beta, please submit a ticket.)
                 * @param req DeleteAssistantCidrRequest
                 * @return DeleteAssistantCidrOutcome
                 */
                DeleteAssistantCidrOutcome DeleteAssistantCidr(const Model::DeleteAssistantCidrRequest &request);
                void DeleteAssistantCidrAsync(const Model::DeleteAssistantCidrRequest& request, const DeleteAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAssistantCidrOutcomeCallable DeleteAssistantCidrCallable(const Model::DeleteAssistantCidrRequest& request);

                /**
                 *This API is used to delete bandwidth packages, including [device bandwidth packages](https://cloud.tencent.com/document/product/684/15246#.E8.AE.BE.E5.A4.87.E5.B8.A6.E5.AE.BD.E5.8C.85) and [IP bandwidth packages](https://cloud.tencent.com/document/product/684/15246#ip-.E5.B8.A6.E5.AE.BD.E5.8C.85).
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
                 *This API (DeleteHaVip) is used to delete Highly Available Virtual IP (HAVIP)<br />
This API is completed asynchronously. If you need to query the async job execution results, please use the `RequestId` returned by this API to query the `QueryTask` API.
                 * @param req DeleteHaVipRequest
                 * @return DeleteHaVipOutcome
                 */
                DeleteHaVipOutcome DeleteHaVip(const Model::DeleteHaVipRequest &request);
                void DeleteHaVipAsync(const Model::DeleteHaVipRequest& request, const DeleteHaVipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteHaVipOutcomeCallable DeleteHaVipCallable(const Model::DeleteHaVipRequest& request);

                /**
                 *This API (DeleteNatGateway) is used to delete a NAT gateway.
After the deletion of a NAT gateway, the system will automatically delete the routing entry that contains the NAT gateway from the route table. It will also unbind the Elastic IP.
                 * @param req DeleteNatGatewayRequest
                 * @return DeleteNatGatewayOutcome
                 */
                DeleteNatGatewayOutcome DeleteNatGateway(const Model::DeleteNatGatewayRequest &request);
                void DeleteNatGatewayAsync(const Model::DeleteNatGatewayRequest& request, const DeleteNatGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNatGatewayOutcomeCallable DeleteNatGatewayCallable(const Model::DeleteNatGatewayRequest& request);

                /**
                 *This API (DeleteNatGatewayDestinationIpPortTranslationNatRule) is used to delete a port forwarding rule for a NAT gateway.
                 * @param req DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest
                 * @return DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome
                 */
                DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcome DeleteNatGatewayDestinationIpPortTranslationNatRule(const Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest &request);
                void DeleteNatGatewayDestinationIpPortTranslationNatRuleAsync(const Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const DeleteNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable DeleteNatGatewayDestinationIpPortTranslationNatRuleCallable(const Model::DeleteNatGatewayDestinationIpPortTranslationNatRuleRequest& request);

                /**
                 *This API (DeleteNetDetect) is used to delete a network detection instance.
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
                 *This API (DeleteNetworkInterface) is used to delete ENIs.
* An ENI that has been bound to a CVM cannot be deleted.
* An ENI can be deleted only after being unbound from the server. After the deletion, all private IP addresses associated with the ENI will be released.
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
                 *This API (DeleteSubnet) is used to delete subnets.
Before deleting a subnet, you need to remove all resources in the subnet, including CVMs, load balancers, cloud data, NoSQL databases, and ENIs.
                 * @param req DeleteSubnetRequest
                 * @return DeleteSubnetOutcome
                 */
                DeleteSubnetOutcome DeleteSubnet(const Model::DeleteSubnetRequest &request);
                void DeleteSubnetAsync(const Model::DeleteSubnetRequest& request, const DeleteSubnetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSubnetOutcomeCallable DeleteSubnetCallable(const Model::DeleteSubnetRequest& request);

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
                 *This API (DeleteVpnConnection) is used to delete VPN tunnels.
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
                 *This API (DescribeAccountAttributes) is used to query your account attributes.
                 * @param req DescribeAccountAttributesRequest
                 * @return DescribeAccountAttributesOutcome
                 */
                DescribeAccountAttributesOutcome DescribeAccountAttributes(const Model::DescribeAccountAttributesRequest &request);
                void DescribeAccountAttributesAsync(const Model::DescribeAccountAttributesRequest& request, const DescribeAccountAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountAttributesOutcomeCallable DescribeAccountAttributesCallable(const Model::DescribeAccountAttributesRequest& request);

                /**
                 *This API (DescribeAddressQuota) is used to query the quota information of your [Elastic IP](https://cloud.tencent.com/document/product/213/1941) (EIP) in the current region. For more information, see [EIP product introduction](https://cloud.tencent.com/document/product/213/5733).
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
                 *This API (DescribeAddresses) is used to query the information of one or multiple [Elastic IPs](https://cloud.tencent.com/document/product/213/1941).
* If the parameter is empty, a number (as specified by the `Limit`, the default value is 20) of EIPs will be returned.
                 * @param req DescribeAddressesRequest
                 * @return DescribeAddressesOutcome
                 */
                DescribeAddressesOutcome DescribeAddresses(const Model::DescribeAddressesRequest &request);
                void DescribeAddressesAsync(const Model::DescribeAddressesRequest& request, const DescribeAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAddressesOutcomeCallable DescribeAddressesCallable(const Model::DescribeAddressesRequest& request);

                /**
                 *This API (DescribeAssistantCidr) is used to query a list of secondary CIDR blocks. (To use this API that is in Beta, please submit a ticket.)
                 * @param req DescribeAssistantCidrRequest
                 * @return DescribeAssistantCidrOutcome
                 */
                DescribeAssistantCidrOutcome DescribeAssistantCidr(const Model::DescribeAssistantCidrRequest &request);
                void DescribeAssistantCidrAsync(const Model::DescribeAssistantCidrRequest& request, const DescribeAssistantCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAssistantCidrOutcomeCallable DescribeAssistantCidrCallable(const Model::DescribeAssistantCidrRequest& request);

                /**
                 *This API is used to query the maximum and used number of bandwidth packages under the account in the current region.
                 * @param req DescribeBandwidthPackageQuotaRequest
                 * @return DescribeBandwidthPackageQuotaOutcome
                 */
                DescribeBandwidthPackageQuotaOutcome DescribeBandwidthPackageQuota(const Model::DescribeBandwidthPackageQuotaRequest &request);
                void DescribeBandwidthPackageQuotaAsync(const Model::DescribeBandwidthPackageQuotaRequest& request, const DescribeBandwidthPackageQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBandwidthPackageQuotaOutcomeCallable DescribeBandwidthPackageQuotaCallable(const Model::DescribeBandwidthPackageQuotaRequest& request);

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
                 *This API (DescribeGatewayFlowMonitorDetail) is used to query the monitoring details of the gateway traffic.
* Only querying of a single gateway instance is supported. That is, only one of the `VpnId`, `DirectConnectGatewayId`, `PeeringConnectionId`, or `NatId` input parameters is supported, and one must be used.
* If the gateway has traffic, but no data is returned when this API is called, please check whether gateway traffic monitoring has been enabled in the corresponding gateway details page in the console.
                 * @param req DescribeGatewayFlowMonitorDetailRequest
                 * @return DescribeGatewayFlowMonitorDetailOutcome
                 */
                DescribeGatewayFlowMonitorDetailOutcome DescribeGatewayFlowMonitorDetail(const Model::DescribeGatewayFlowMonitorDetailRequest &request);
                void DescribeGatewayFlowMonitorDetailAsync(const Model::DescribeGatewayFlowMonitorDetailRequest& request, const DescribeGatewayFlowMonitorDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayFlowMonitorDetailOutcomeCallable DescribeGatewayFlowMonitorDetailCallable(const Model::DescribeGatewayFlowMonitorDetailRequest& request);

                /**
                 *This API (DescribeGatewayFlowQos) is used to query the QoS bandwidth limit of inbound IP flow in a gateway.
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
                 *This API (DescribeNatGatewayDestinationIpPortTranslationNatRules) is used to query the array of objects of the port forwarding rules for a NAT gateway.
                 * @param req DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest
                 * @return DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome
                 */
                DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcome DescribeNatGatewayDestinationIpPortTranslationNatRules(const Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest &request);
                void DescribeNatGatewayDestinationIpPortTranslationNatRulesAsync(const Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest& request, const DescribeNatGatewayDestinationIpPortTranslationNatRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNatGatewayDestinationIpPortTranslationNatRulesOutcomeCallable DescribeNatGatewayDestinationIpPortTranslationNatRulesCallable(const Model::DescribeNatGatewayDestinationIpPortTranslationNatRulesRequest& request);

                /**
                 *This API (DescribeNatGateways) is used to query NAT gateways.
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
                 * This API (DescribeRouteTables) is used to query route tables.
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
                 *This API is used to query the VPC resource information.
                 * @param req DescribeVpcResourceDashboardRequest
                 * @return DescribeVpcResourceDashboardOutcome
                 */
                DescribeVpcResourceDashboardOutcome DescribeVpcResourceDashboard(const Model::DescribeVpcResourceDashboardRequest &request);
                void DescribeVpcResourceDashboardAsync(const Model::DescribeVpcResourceDashboardRequest& request, const DescribeVpcResourceDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcResourceDashboardOutcomeCallable DescribeVpcResourceDashboardCallable(const Model::DescribeVpcResourceDashboardRequest& request);

                /**
                 *This API (DescribeVpcs) is used to query the VPC list.
                 * @param req DescribeVpcsRequest
                 * @return DescribeVpcsOutcome
                 */
                DescribeVpcsOutcome DescribeVpcs(const Model::DescribeVpcsRequest &request);
                void DescribeVpcsAsync(const Model::DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpcsOutcomeCallable DescribeVpcsCallable(const Model::DescribeVpcsRequest& request);

                /**
                 * This API (DescribeVpnConnections) is used to query the VPN tunnel list.
                 * @param req DescribeVpnConnectionsRequest
                 * @return DescribeVpnConnectionsOutcome
                 */
                DescribeVpnConnectionsOutcome DescribeVpnConnections(const Model::DescribeVpnConnectionsRequest &request);
                void DescribeVpnConnectionsAsync(const Model::DescribeVpnConnectionsRequest& request, const DescribeVpnConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnConnectionsOutcomeCallable DescribeVpnConnectionsCallable(const Model::DescribeVpnConnectionsRequest& request);

                /**
                 *This API (DescribeVpnGatewayCcnRoutes) is used to query VPN gateway-based CCN routes.
                 * @param req DescribeVpnGatewayCcnRoutesRequest
                 * @return DescribeVpnGatewayCcnRoutesOutcome
                 */
                DescribeVpnGatewayCcnRoutesOutcome DescribeVpnGatewayCcnRoutes(const Model::DescribeVpnGatewayCcnRoutesRequest &request);
                void DescribeVpnGatewayCcnRoutesAsync(const Model::DescribeVpnGatewayCcnRoutesRequest& request, const DescribeVpnGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVpnGatewayCcnRoutesOutcomeCallable DescribeVpnGatewayCcnRoutesCallable(const Model::DescribeVpnGatewayCcnRoutesRequest& request);

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
                 *This API (DetachClassicLinkVpc) is used to delete a Classiclink.
                 * @param req DetachClassicLinkVpcRequest
                 * @return DetachClassicLinkVpcOutcome
                 */
                DetachClassicLinkVpcOutcome DetachClassicLinkVpc(const Model::DetachClassicLinkVpcRequest &request);
                void DetachClassicLinkVpcAsync(const Model::DetachClassicLinkVpcRequest& request, const DetachClassicLinkVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachClassicLinkVpcOutcomeCallable DetachClassicLinkVpcCallable(const Model::DetachClassicLinkVpcRequest& request);

                /**
                 *This API (DetachNetworkInterface) is used to unbind an ENI from a CVM.
                 * @param req DetachNetworkInterfaceRequest
                 * @return DetachNetworkInterfaceOutcome
                 */
                DetachNetworkInterfaceOutcome DetachNetworkInterface(const Model::DetachNetworkInterfaceRequest &request);
                void DetachNetworkInterfaceAsync(const Model::DetachNetworkInterfaceRequest& request, const DetachNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachNetworkInterfaceOutcomeCallable DetachNetworkInterfaceCallable(const Model::DetachNetworkInterfaceRequest& request);

                /**
                 *This API (DisableCcnRoutes) is used to disable CCN routes that are already enabled.
                 * @param req DisableCcnRoutesRequest
                 * @return DisableCcnRoutesOutcome
                 */
                DisableCcnRoutesOutcome DisableCcnRoutes(const Model::DisableCcnRoutesRequest &request);
                void DisableCcnRoutesAsync(const Model::DisableCcnRoutesRequest& request, const DisableCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableCcnRoutesOutcomeCallable DisableCcnRoutesCallable(const Model::DisableCcnRoutesRequest& request);

                /**
                 *This API (DisableGatewayFlowMonitor) is used to disable gateway flow monitor.
                 * @param req DisableGatewayFlowMonitorRequest
                 * @return DisableGatewayFlowMonitorOutcome
                 */
                DisableGatewayFlowMonitorOutcome DisableGatewayFlowMonitor(const Model::DisableGatewayFlowMonitorRequest &request);
                void DisableGatewayFlowMonitorAsync(const Model::DisableGatewayFlowMonitorRequest& request, const DisableGatewayFlowMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableGatewayFlowMonitorOutcomeCallable DisableGatewayFlowMonitorCallable(const Model::DisableGatewayFlowMonitorRequest& request);

                /**
                 *This API (DisassociateAddress) is used to unbind [Elastic IPs](https://cloud.tencent.com/document/product/213/1941).
* The unbinding of EIPs from CVM instances and ENIs is supported.
* The unbinding of EIPs from NATs is not supported. For information about how to unbind an EIP from a NAT, see [EipUnBindNatGateway](https://cloud.tencent.com/document/product/215/4092).
* You can only unbind EIPs in BIND or BIND_ENI status.
* Blocked EIPs cannot be unbound.
                 * @param req DisassociateAddressRequest
                 * @return DisassociateAddressOutcome
                 */
                DisassociateAddressOutcome DisassociateAddress(const Model::DisassociateAddressRequest &request);
                void DisassociateAddressAsync(const Model::DisassociateAddressRequest& request, const DisassociateAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisassociateAddressOutcomeCallable DisassociateAddressCallable(const Model::DisassociateAddressRequest& request);

                /**
                 *This API (DisassociateNatGatewayAddress) is used to unbind an EIP from a NAT gateway.
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
                 *This API (DownloadCustomerGatewayConfiguration) is used to download a VPN tunnel configuration.
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
                 *This API (EnableGatewayFlowMonitor) is used to enable gateway flow monitor.
                 * @param req EnableGatewayFlowMonitorRequest
                 * @return EnableGatewayFlowMonitorOutcome
                 */
                EnableGatewayFlowMonitorOutcome EnableGatewayFlowMonitor(const Model::EnableGatewayFlowMonitorRequest &request);
                void EnableGatewayFlowMonitorAsync(const Model::EnableGatewayFlowMonitorRequest& request, const EnableGatewayFlowMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableGatewayFlowMonitorOutcomeCallable EnableGatewayFlowMonitorCallable(const Model::EnableGatewayFlowMonitorRequest& request);

                /**
                 *This API is used to query the bandwidth limits of a CCN instance. Monthly-subscribed CCNs only support Inter-region Bandwidth Limits, while the pay-as-you-go CCNs support both the Inter-region Bandwidth Limits and Region Outbound Bandwidth Limits. 
                 * @param req GetCcnRegionBandwidthLimitsRequest
                 * @return GetCcnRegionBandwidthLimitsOutcome
                 */
                GetCcnRegionBandwidthLimitsOutcome GetCcnRegionBandwidthLimits(const Model::GetCcnRegionBandwidthLimitsRequest &request);
                void GetCcnRegionBandwidthLimitsAsync(const Model::GetCcnRegionBandwidthLimitsRequest& request, const GetCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCcnRegionBandwidthLimitsOutcomeCallable GetCcnRegionBandwidthLimitsCallable(const Model::GetCcnRegionBandwidthLimitsRequest& request);

                /**
                 *This API (HaVipAssociateAddressIp) is used to bind an EIP to an HAVIP.<br />
This API is completed asynchronously. If you need to query the async job execution results, please use the `RequestId` returned by this API to query the `QueryTask` API.
                 * @param req HaVipAssociateAddressIpRequest
                 * @return HaVipAssociateAddressIpOutcome
                 */
                HaVipAssociateAddressIpOutcome HaVipAssociateAddressIp(const Model::HaVipAssociateAddressIpRequest &request);
                void HaVipAssociateAddressIpAsync(const Model::HaVipAssociateAddressIpRequest& request, const HaVipAssociateAddressIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HaVipAssociateAddressIpOutcomeCallable HaVipAssociateAddressIpCallable(const Model::HaVipAssociateAddressIpRequest& request);

                /**
                 *This API (HaVipDisassociateAddressIp) is used to unbind an EIP which has been bound to an HAVIP.<br />
This API is completed asynchronously. If you need to query the async job execution results, please use the `RequestId` returned by this API to query the `QueryTask` API.
                 * @param req HaVipDisassociateAddressIpRequest
                 * @return HaVipDisassociateAddressIpOutcome
                 */
                HaVipDisassociateAddressIpOutcome HaVipDisassociateAddressIp(const Model::HaVipDisassociateAddressIpRequest &request);
                void HaVipDisassociateAddressIpAsync(const Model::HaVipDisassociateAddressIpRequest& request, const HaVipDisassociateAddressIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HaVipDisassociateAddressIpOutcomeCallable HaVipDisassociateAddressIpCallable(const Model::HaVipDisassociateAddressIpRequest& request);

                /**
                 *This API (InquiryPriceCreateVpnGateway) is used to query the price for VPN gateway creation.
                 * @param req InquiryPriceCreateVpnGatewayRequest
                 * @return InquiryPriceCreateVpnGatewayOutcome
                 */
                InquiryPriceCreateVpnGatewayOutcome InquiryPriceCreateVpnGateway(const Model::InquiryPriceCreateVpnGatewayRequest &request);
                void InquiryPriceCreateVpnGatewayAsync(const Model::InquiryPriceCreateVpnGatewayRequest& request, const InquiryPriceCreateVpnGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquiryPriceCreateVpnGatewayOutcomeCallable InquiryPriceCreateVpnGatewayCallable(const Model::InquiryPriceCreateVpnGatewayRequest& request);

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
                 *This API (MigrateNetworkInterface) is used to migrate ENIs.
                 * @param req MigrateNetworkInterfaceRequest
                 * @return MigrateNetworkInterfaceOutcome
                 */
                MigrateNetworkInterfaceOutcome MigrateNetworkInterface(const Model::MigrateNetworkInterfaceRequest &request);
                void MigrateNetworkInterfaceAsync(const Model::MigrateNetworkInterfaceRequest& request, const MigrateNetworkInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigrateNetworkInterfaceOutcomeCallable MigrateNetworkInterfaceCallable(const Model::MigrateNetworkInterfaceRequest& request);

                /**
                 * This API (MigratePrivateIpAddress) is used to migrate the private IPs of ENIs.

* This API is used to migrate a private IP from one ENI to another. Primary IPs cannot be migrated.
* The ENIs before and after migration must belong to the same subnet.
                 * @param req MigratePrivateIpAddressRequest
                 * @return MigratePrivateIpAddressOutcome
                 */
                MigratePrivateIpAddressOutcome MigratePrivateIpAddress(const Model::MigratePrivateIpAddressRequest &request);
                void MigratePrivateIpAddressAsync(const Model::MigratePrivateIpAddressRequest& request, const MigratePrivateIpAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigratePrivateIpAddressOutcomeCallable MigratePrivateIpAddressCallable(const Model::MigratePrivateIpAddressRequest& request);

                /**
                 *This API (ModifyAddressAttribute) is used to modify the name of an [Elastic IP](https://cloud.tencent.com/document/product/213/1941).
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
                 *This API (ModifyAddressesBandwidth) is used to adjust [Elastic IP](https://cloud.tencent.com/document/product/213/1941) bandwidth, including the postpaid EIP, prepaid EIP and bandwidth package EIP.
                 * @param req ModifyAddressesBandwidthRequest
                 * @return ModifyAddressesBandwidthOutcome
                 */
                ModifyAddressesBandwidthOutcome ModifyAddressesBandwidth(const Model::ModifyAddressesBandwidthRequest &request);
                void ModifyAddressesBandwidthAsync(const Model::ModifyAddressesBandwidthRequest& request, const ModifyAddressesBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAddressesBandwidthOutcomeCallable ModifyAddressesBandwidthCallable(const Model::ModifyAddressesBandwidthRequest& request);

                /**
                 *This API (ModifyAssistantCidr) is used to batch modify (e.g. add and delete) secondary CIDR blocks. (To use this API that is in Beta, please submit a ticket.)
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
                 *This API (ModifyGatewayFlowQos) is used to adjust the QoS bandwidth limit in a gateway.
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
                 *This API (ModifyNatGatewayAttribute) is used to modify the attributes of a NAT gateway.
                 * @param req ModifyNatGatewayAttributeRequest
                 * @return ModifyNatGatewayAttributeOutcome
                 */
                ModifyNatGatewayAttributeOutcome ModifyNatGatewayAttribute(const Model::ModifyNatGatewayAttributeRequest &request);
                void ModifyNatGatewayAttributeAsync(const Model::ModifyNatGatewayAttributeRequest& request, const ModifyNatGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatGatewayAttributeOutcomeCallable ModifyNatGatewayAttributeCallable(const Model::ModifyNatGatewayAttributeRequest& request);

                /**
                 *This API (ModifyNatGatewayDestinationIpPortTranslationNatRule) is used to modify a port forwarding rule for a NAT gateway.
                 * @param req ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest
                 * @return ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome
                 */
                ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcome ModifyNatGatewayDestinationIpPortTranslationNatRule(const Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest &request);
                void ModifyNatGatewayDestinationIpPortTranslationNatRuleAsync(const Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest& request, const ModifyNatGatewayDestinationIpPortTranslationNatRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNatGatewayDestinationIpPortTranslationNatRuleOutcomeCallable ModifyNatGatewayDestinationIpPortTranslationNatRuleCallable(const Model::ModifyNatGatewayDestinationIpPortTranslationNatRuleRequest& request);

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
                 *This API is used to modify (add or delete) the inbound and outbound rules of a network ACL.
                 * @param req ModifyNetworkAclEntriesRequest
                 * @return ModifyNetworkAclEntriesOutcome
                 */
                ModifyNetworkAclEntriesOutcome ModifyNetworkAclEntries(const Model::ModifyNetworkAclEntriesRequest &request);
                void ModifyNetworkAclEntriesAsync(const Model::ModifyNetworkAclEntriesRequest& request, const ModifyNetworkAclEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyNetworkAclEntriesOutcomeCallable ModifyNetworkAclEntriesCallable(const Model::ModifyNetworkAclEntriesRequest& request);

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
                 *This API is used to reset the egress and ingress policies (SecurityGroupPolicy) of a security group.

<ul>
<li>This API deletes all the existing egress and ingress policies, and then adds Egress and Ingress policies. It does not support custom indexes `PolicyIndex`.</li>
<li>For parameters of SecurityGroupPolicySet,<ul>
	<li>If `SecurityGroupPolicySet.Version` is set to 0, all policies will be cleared, and `Egress` and `Ingress` will be ignored.</li>
	<li>If `SecurityGroupPolicySet.Version` is not set to 0, add `Egress` and `Ingress` policies:<ul>
		<li>`Protocol`: allows TCP, UDP, ICMP, ICMPV6, GRE, or ALL.</li>
		<li>`CidrBlock`: a CIDR block in the correct format. In a classic network, if a `CidrBlock` contains private IPs on Tencent Cloud for devices under your account other than CVMs, it does not mean this policy allows you to access these devices. The network isolation policies between tenants take priority over the private network policies in security groups.</li>
		<li>`Ipv6CidrBlock`: an IPv6 CIDR block in the correct format. In a classic network, if an `Ipv6CidrBlock` contains private IPv6 addresses on Tencent Cloud for devices under your account other than CVMs, it does not mean this policy allows you to access these devices. The network isolation policies between tenants take priority over the private network policies in security groups.</li>
		<li>`SecurityGroupId`: ID of the security group. It can be the ID of security group to be modified, or the ID of other security group in the same project. All private IPs of all CVMs under the security group will be covered. If this field is used, the policy will automatically change according to the CVM associated with the group ID while being used to match network messages. You don't need to change it manually.</li>
		<li>`Port`: a single port number such as 80, or a port range in the format of '8000-8010'. You may use this field only if the `Protocol` field takes the value `TCP` or `UDP`.</li>
		<li>`Action`: only allows ACCEPT or DROP.</li>
		<li>`CidrBlock`, `Ipv6CidrBlock`, `SecurityGroupId`, and `AddressTemplate` are mutually exclusive. `Protocol` + `Port` and `ServiceTemplate` are mutually exclusive.</li>
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
                 *This API (ModifyVpnGatewayCcnRoutes) is used to modify VPN gateway-based CCN routes.
                 * @param req ModifyVpnGatewayCcnRoutesRequest
                 * @return ModifyVpnGatewayCcnRoutesOutcome
                 */
                ModifyVpnGatewayCcnRoutesOutcome ModifyVpnGatewayCcnRoutes(const Model::ModifyVpnGatewayCcnRoutesRequest &request);
                void ModifyVpnGatewayCcnRoutesAsync(const Model::ModifyVpnGatewayCcnRoutesRequest& request, const ModifyVpnGatewayCcnRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVpnGatewayCcnRoutesOutcomeCallable ModifyVpnGatewayCcnRoutesCallable(const Model::ModifyVpnGatewayCcnRoutesRequest& request);

                /**
                 *This API (RejectAttachCcnInstances) is used to reject association operations when instances are associated across accounts for the CCN owner.

                 * @param req RejectAttachCcnInstancesRequest
                 * @return RejectAttachCcnInstancesOutcome
                 */
                RejectAttachCcnInstancesOutcome RejectAttachCcnInstances(const Model::RejectAttachCcnInstancesRequest &request);
                void RejectAttachCcnInstancesAsync(const Model::RejectAttachCcnInstancesRequest& request, const RejectAttachCcnInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RejectAttachCcnInstancesOutcomeCallable RejectAttachCcnInstancesCallable(const Model::RejectAttachCcnInstancesRequest& request);

                /**
                 *This API (ReleaseAddresses) is used to release one or multiple [Elastic IPs](https://cloud.tencent.com/document/product/213/1941).
* This operation is irreversible. Once you release an EIP, the IP address associated with the EIP no longer belongs to you.
* Only EIPs in UNBIND status can be released.
                 * @param req ReleaseAddressesRequest
                 * @return ReleaseAddressesOutcome
                 */
                ReleaseAddressesOutcome ReleaseAddresses(const Model::ReleaseAddressesRequest &request);
                void ReleaseAddressesAsync(const Model::ReleaseAddressesRequest& request, const ReleaseAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseAddressesOutcomeCallable ReleaseAddressesCallable(const Model::ReleaseAddressesRequest& request);

                /**
                 *This API is used to delete a bandwidth package resource, including [Elastic IP](https://cloud.tencent.com/document/product/213/1941), [Cloud Load Balancer](https://cloud.tencent.com/document/product/214/517), and so on.
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
                 *This API (ResetNatGatewayConnection) is used to adjust concurrent connection cap for the NAT gateway.
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
                 *The API (ResetVpnConnection) is used to reset VPN tunnels.
                 * @param req ResetVpnConnectionRequest
                 * @return ResetVpnConnectionOutcome
                 */
                ResetVpnConnectionOutcome ResetVpnConnection(const Model::ResetVpnConnectionRequest &request);
                void ResetVpnConnectionAsync(const Model::ResetVpnConnectionRequest& request, const ResetVpnConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetVpnConnectionOutcomeCallable ResetVpnConnectionCallable(const Model::ResetVpnConnectionRequest& request);

                /**
                 *This API (ResetVpnGatewayInternetMaxBandwidth) is used to adjust the bandwidth cap of VPN gateways. Currently, only configuration upgrade is supported. VPN gateways with monthly subscription must be within the validity period.
                 * @param req ResetVpnGatewayInternetMaxBandwidthRequest
                 * @return ResetVpnGatewayInternetMaxBandwidthOutcome
                 */
                ResetVpnGatewayInternetMaxBandwidthOutcome ResetVpnGatewayInternetMaxBandwidth(const Model::ResetVpnGatewayInternetMaxBandwidthRequest &request);
                void ResetVpnGatewayInternetMaxBandwidthAsync(const Model::ResetVpnGatewayInternetMaxBandwidthRequest& request, const ResetVpnGatewayInternetMaxBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetVpnGatewayInternetMaxBandwidthOutcomeCallable ResetVpnGatewayInternetMaxBandwidthCallable(const Model::ResetVpnGatewayInternetMaxBandwidthRequest& request);

                /**
                 *This API (SetCcnRegionBandwidthLimits) is used to set the outbound bandwidth cap for CCNs in each region. This API can only set the outbound bandwidth cap for regions in the network instances that have already been associated.
                 * @param req SetCcnRegionBandwidthLimitsRequest
                 * @return SetCcnRegionBandwidthLimitsOutcome
                 */
                SetCcnRegionBandwidthLimitsOutcome SetCcnRegionBandwidthLimits(const Model::SetCcnRegionBandwidthLimitsRequest &request);
                void SetCcnRegionBandwidthLimitsAsync(const Model::SetCcnRegionBandwidthLimitsRequest& request, const SetCcnRegionBandwidthLimitsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetCcnRegionBandwidthLimitsOutcomeCallable SetCcnRegionBandwidthLimitsCallable(const Model::SetCcnRegionBandwidthLimitsRequest& request);

                /**
                 *This API (TransformAddress) is used to switch common public IPs into [Elastic IPs](https://cloud.tencent.com/document/product/213/1941).
* The platform limits the number of times that a user can unbind an EIP and reassign public IPs in each region per day. For more information, see [EIP product introduction](/document/product/213/1941)). The preceding quota can be obtained through the [DescribeAddressQuota](https://cloud.tencent.com/document/api/213/1378) API.
                 * @param req TransformAddressRequest
                 * @return TransformAddressOutcome
                 */
                TransformAddressOutcome TransformAddress(const Model::TransformAddressRequest &request);
                void TransformAddressAsync(const Model::TransformAddressRequest& request, const TransformAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransformAddressOutcomeCallable TransformAddressCallable(const Model::TransformAddressRequest& request);

                /**
                 *This API (UnassignIpv6Addresses) is used to release ENI `IPv6` addresses.<br />
This API is completed asynchronously. If you need to query the async execution results, use the `RequestId` returned by this API to query the `QueryTask` API.
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
                 *This API (UnassignPrivateIpAddresses) is used to return the private IPs of ENI.
* To return the secondary private IPs of an ENI, the API will automatically unbind the IPs of an ENI. The primary private IP of the ENI cannot be returned.
                 * @param req UnassignPrivateIpAddressesRequest
                 * @return UnassignPrivateIpAddressesOutcome
                 */
                UnassignPrivateIpAddressesOutcome UnassignPrivateIpAddresses(const Model::UnassignPrivateIpAddressesRequest &request);
                void UnassignPrivateIpAddressesAsync(const Model::UnassignPrivateIpAddressesRequest& request, const UnassignPrivateIpAddressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnassignPrivateIpAddressesOutcomeCallable UnassignPrivateIpAddressesCallable(const Model::UnassignPrivateIpAddressesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_VPCCLIENT_H_
