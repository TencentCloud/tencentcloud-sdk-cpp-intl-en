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

set(cfw_public_header
  include/tencentcloud/cfw/v20190904/CfwClient.h
  )

set(cfw_public_header_model
  include/tencentcloud/cfw/v20190904/model/DescribeNatFwInstanceRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyNatFwVpcDnsSwitchResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeNatFwInstanceWithRegionRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyNatAcRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeRuleOverviewResponse.h
  include/tencentcloud/cfw/v20190904/model/CfwNatDnatRule.h
  include/tencentcloud/cfw/v20190904/model/FwCidrInfo.h
  include/tencentcloud/cfw/v20190904/model/StaticInfo.h
  include/tencentcloud/cfw/v20190904/model/DescribeNatAcRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyPublicIPSwitchStatusResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyNatAcRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyAcRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyNatSequenceRulesRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeTableStatusResponse.h
  include/tencentcloud/cfw/v20190904/model/AddAcRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/IPDefendStatus.h
  include/tencentcloud/cfw/v20190904/model/BlockIgnoreRule.h
  include/tencentcloud/cfw/v20190904/model/ModifyNatFwVpcDnsSwitchRequest.h
  include/tencentcloud/cfw/v20190904/model/UnHandleEvent.h
  include/tencentcloud/cfw/v20190904/model/DeleteAllAccessControlRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyAllVPCSwitchStatusResponse.h
  include/tencentcloud/cfw/v20190904/model/CreateSecurityGroupRulesResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeNatFwVpcDnsLstRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeTLogInfoResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeUnHandleEventTabListRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeAssociatedInstanceListResponse.h
  include/tencentcloud/cfw/v20190904/model/AssociatedInstanceInfo.h
  include/tencentcloud/cfw/v20190904/model/ModifyStorageSettingResponse.h
  include/tencentcloud/cfw/v20190904/model/RemoveAcRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/NatFwInstance.h
  include/tencentcloud/cfw/v20190904/model/ExpandCfwVerticalRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyAllPublicIPSwitchStatusResponse.h
  include/tencentcloud/cfw/v20190904/model/DeleteVpcInstanceResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyAssetScanRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreListRequest.h
  include/tencentcloud/cfw/v20190904/model/AddEnterpriseSecurityGroupRulesRequest.h
  include/tencentcloud/cfw/v20190904/model/SecurityGroupRule.h
  include/tencentcloud/cfw/v20190904/model/DeleteSecurityGroupRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifySequenceRulesRequest.h
  include/tencentcloud/cfw/v20190904/model/SequenceData.h
  include/tencentcloud/cfw/v20190904/model/CreateNatFwInstanceRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifySecurityGroupItemRuleStatusResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeEnterpriseSecurityGroupRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/VpcDnsInfo.h
  include/tencentcloud/cfw/v20190904/model/IpStatic.h
  include/tencentcloud/cfw/v20190904/model/DescribeEnterpriseSecurityGroupRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/VpcRuleItem.h
  include/tencentcloud/cfw/v20190904/model/ModifyNatFwReSelectResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeVpcAcRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/DeleteSecurityGroupRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/SetNatFwEipRequest.h
  include/tencentcloud/cfw/v20190904/model/SetNatFwEipResponse.h
  include/tencentcloud/cfw/v20190904/model/AcListsData.h
  include/tencentcloud/cfw/v20190904/model/ModifyPublicIPSwitchStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/CreateNatRuleItem.h
  include/tencentcloud/cfw/v20190904/model/ModifySecurityGroupItemRuleStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeSourceAssetRequest.h
  include/tencentcloud/cfw/v20190904/model/SecurityGroupOrderIndexData.h
  include/tencentcloud/cfw/v20190904/model/DescribeSourceAssetResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeTLogInfoRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeSecurityGroupListResponse.h
  include/tencentcloud/cfw/v20190904/model/AssetZone.h
  include/tencentcloud/cfw/v20190904/model/DescribeTLogIpListRequest.h
  include/tencentcloud/cfw/v20190904/model/CommonFilter.h
  include/tencentcloud/cfw/v20190904/model/DescribeNatFwInstancesInfoRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyNatSequenceRulesResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeTableStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeSecurityGroupListRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyResourceGroupRequest.h
  include/tencentcloud/cfw/v20190904/model/CreateNatFwInstanceResponse.h
  include/tencentcloud/cfw/v20190904/model/NewModeItems.h
  include/tencentcloud/cfw/v20190904/model/DescribeNatFwInfoCountResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeDefenseSwitchRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyEnterpriseSecurityDispatchStatusResponse.h
  include/tencentcloud/cfw/v20190904/model/SecurityGroupListData.h
  include/tencentcloud/cfw/v20190904/model/RemoveNatAcRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/CreateNatFwInstanceWithDomainResponse.h
  include/tencentcloud/cfw/v20190904/model/RemoveAcRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/BetaInfoByACL.h
  include/tencentcloud/cfw/v20190904/model/RemoveNatAcRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyAllRuleStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/RuleInfoData.h
  include/tencentcloud/cfw/v20190904/model/DescribeAcListsResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyAllPublicIPSwitchStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeBlockStaticListResponse.h
  include/tencentcloud/cfw/v20190904/model/AddNatAcRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifySecurityGroupSequenceRulesRequest.h
  include/tencentcloud/cfw/v20190904/model/ScanResultInfo.h
  include/tencentcloud/cfw/v20190904/model/ScanInfo.h
  include/tencentcloud/cfw/v20190904/model/DescribeUnHandleEventTabListResponse.h
  include/tencentcloud/cfw/v20190904/model/NatFwFilter.h
  include/tencentcloud/cfw/v20190904/model/ModifyRunSyncAssetResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyEnterpriseSecurityGroupRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifySecurityGroupSequenceRulesResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeResourceGroupNewRequest.h
  include/tencentcloud/cfw/v20190904/model/AddEnterpriseSecurityGroupRulesResponse.h
  include/tencentcloud/cfw/v20190904/model/UnHandleEventDetail.h
  include/tencentcloud/cfw/v20190904/model/RemoveEnterpriseSecurityGroupRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/DeleteResourceGroupRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeBlockByIpTimesListRequest.h
  include/tencentcloud/cfw/v20190904/model/RemoveEnterpriseSecurityGroupRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyEnterpriseSecurityGroupRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifySequenceRulesResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeResourceGroupNewResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeNatFwInstanceWithRegionResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeVpcAcRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyBlockTopRequest.h
  include/tencentcloud/cfw/v20190904/model/DeleteAcRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/IocListData.h
  include/tencentcloud/cfw/v20190904/model/InstanceInfo.h
  include/tencentcloud/cfw/v20190904/model/DescribeIPStatusListRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyNatFwSwitchResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeBlockByIpTimesListResponse.h
  include/tencentcloud/cfw/v20190904/model/SetNatFwDnatRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeRuleOverviewRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeDefenseSwitchResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeAcListsRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeGuideScanInfoRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeAssociatedInstanceListRequest.h
  include/tencentcloud/cfw/v20190904/model/DeleteAcRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/DeleteAllAccessControlRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyNatFwSwitchRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeIPStatusListResponse.h
  include/tencentcloud/cfw/v20190904/model/NatInstanceInfo.h
  include/tencentcloud/cfw/v20190904/model/DescribeTLogIpListResponse.h
  include/tencentcloud/cfw/v20190904/model/StopSecurityGroupRuleDispatchResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeNatFwInfoCountRequest.h
  include/tencentcloud/cfw/v20190904/model/AddAcRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyNatFwReSelectRequest.h
  include/tencentcloud/cfw/v20190904/model/SetNatFwDnatRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyAllVPCSwitchStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/SecurityGroupBothWayInfo.h
  include/tencentcloud/cfw/v20190904/model/ModifyAllRuleStatusResponse.h
  include/tencentcloud/cfw/v20190904/model/StopSecurityGroupRuleDispatchRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeBlockIgnoreListRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyBlockTopResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyStorageSettingRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeNatFwVpcDnsLstResponse.h
  include/tencentcloud/cfw/v20190904/model/DescAcItem.h
  include/tencentcloud/cfw/v20190904/model/RuleChangeItem.h
  include/tencentcloud/cfw/v20190904/model/ExpandCfwVerticalResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeNatAcRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/TLogInfo.h
  include/tencentcloud/cfw/v20190904/model/CreateSecurityGroupRulesRequest.h
  include/tencentcloud/cfw/v20190904/model/DeleteVpcInstanceRequest.h
  include/tencentcloud/cfw/v20190904/model/SwitchListsData.h
  include/tencentcloud/cfw/v20190904/model/CreateNatFwInstanceWithDomainRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeSwitchListsResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyResourceGroupResponse.h
  include/tencentcloud/cfw/v20190904/model/DeleteResourceGroupResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeSwitchListsRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeBlockStaticListRequest.h
  include/tencentcloud/cfw/v20190904/model/FwVpcCidr.h
  include/tencentcloud/cfw/v20190904/model/ModifyRunSyncAssetRequest.h
  include/tencentcloud/cfw/v20190904/model/CreateAcRulesResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyAssetScanResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyAcRuleRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeNatFwInstancesInfoResponse.h
  include/tencentcloud/cfw/v20190904/model/AddNatAcRuleResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyBlockIgnoreListResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeNatFwInstanceResponse.h
  include/tencentcloud/cfw/v20190904/model/DnsVpcSwitch.h
  include/tencentcloud/cfw/v20190904/model/CreateAcRulesRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyEnterpriseSecurityDispatchStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/DescribeBlockIgnoreListResponse.h
  include/tencentcloud/cfw/v20190904/model/ModifyTableStatusRequest.h
  include/tencentcloud/cfw/v20190904/model/ModifyTableStatusResponse.h
  include/tencentcloud/cfw/v20190904/model/DescribeGuideScanInfoResponse.h
  )

set(cfw_src
  src/v20190904/CfwClient.cpp
  src/v20190904/model/DescribeNatFwInstanceRequest.cpp
  src/v20190904/model/ModifyNatFwVpcDnsSwitchResponse.cpp
  src/v20190904/model/DescribeNatFwInstanceWithRegionRequest.cpp
  src/v20190904/model/ModifyNatAcRuleResponse.cpp
  src/v20190904/model/DescribeRuleOverviewResponse.cpp
  src/v20190904/model/CfwNatDnatRule.cpp
  src/v20190904/model/FwCidrInfo.cpp
  src/v20190904/model/StaticInfo.cpp
  src/v20190904/model/DescribeNatAcRuleResponse.cpp
  src/v20190904/model/ModifyPublicIPSwitchStatusResponse.cpp
  src/v20190904/model/ModifyNatAcRuleRequest.cpp
  src/v20190904/model/ModifyAcRuleResponse.cpp
  src/v20190904/model/ModifyNatSequenceRulesRequest.cpp
  src/v20190904/model/DescribeTableStatusResponse.cpp
  src/v20190904/model/AddAcRuleRequest.cpp
  src/v20190904/model/IPDefendStatus.cpp
  src/v20190904/model/BlockIgnoreRule.cpp
  src/v20190904/model/ModifyNatFwVpcDnsSwitchRequest.cpp
  src/v20190904/model/UnHandleEvent.cpp
  src/v20190904/model/DeleteAllAccessControlRuleRequest.cpp
  src/v20190904/model/ModifyAllVPCSwitchStatusResponse.cpp
  src/v20190904/model/CreateSecurityGroupRulesResponse.cpp
  src/v20190904/model/DescribeNatFwVpcDnsLstRequest.cpp
  src/v20190904/model/DescribeTLogInfoResponse.cpp
  src/v20190904/model/DescribeUnHandleEventTabListRequest.cpp
  src/v20190904/model/DescribeAssociatedInstanceListResponse.cpp
  src/v20190904/model/AssociatedInstanceInfo.cpp
  src/v20190904/model/ModifyStorageSettingResponse.cpp
  src/v20190904/model/RemoveAcRuleResponse.cpp
  src/v20190904/model/NatFwInstance.cpp
  src/v20190904/model/ExpandCfwVerticalRequest.cpp
  src/v20190904/model/ModifyAllPublicIPSwitchStatusResponse.cpp
  src/v20190904/model/DeleteVpcInstanceResponse.cpp
  src/v20190904/model/ModifyAssetScanRequest.cpp
  src/v20190904/model/ModifyBlockIgnoreListRequest.cpp
  src/v20190904/model/AddEnterpriseSecurityGroupRulesRequest.cpp
  src/v20190904/model/SecurityGroupRule.cpp
  src/v20190904/model/DeleteSecurityGroupRuleResponse.cpp
  src/v20190904/model/ModifySequenceRulesRequest.cpp
  src/v20190904/model/SequenceData.cpp
  src/v20190904/model/CreateNatFwInstanceRequest.cpp
  src/v20190904/model/ModifySecurityGroupItemRuleStatusResponse.cpp
  src/v20190904/model/DescribeEnterpriseSecurityGroupRuleResponse.cpp
  src/v20190904/model/VpcDnsInfo.cpp
  src/v20190904/model/IpStatic.cpp
  src/v20190904/model/DescribeEnterpriseSecurityGroupRuleRequest.cpp
  src/v20190904/model/VpcRuleItem.cpp
  src/v20190904/model/ModifyNatFwReSelectResponse.cpp
  src/v20190904/model/DescribeVpcAcRuleRequest.cpp
  src/v20190904/model/DeleteSecurityGroupRuleRequest.cpp
  src/v20190904/model/SetNatFwEipRequest.cpp
  src/v20190904/model/SetNatFwEipResponse.cpp
  src/v20190904/model/AcListsData.cpp
  src/v20190904/model/ModifyPublicIPSwitchStatusRequest.cpp
  src/v20190904/model/CreateNatRuleItem.cpp
  src/v20190904/model/ModifySecurityGroupItemRuleStatusRequest.cpp
  src/v20190904/model/DescribeSourceAssetRequest.cpp
  src/v20190904/model/SecurityGroupOrderIndexData.cpp
  src/v20190904/model/DescribeSourceAssetResponse.cpp
  src/v20190904/model/DescribeTLogInfoRequest.cpp
  src/v20190904/model/DescribeSecurityGroupListResponse.cpp
  src/v20190904/model/AssetZone.cpp
  src/v20190904/model/DescribeTLogIpListRequest.cpp
  src/v20190904/model/CommonFilter.cpp
  src/v20190904/model/DescribeNatFwInstancesInfoRequest.cpp
  src/v20190904/model/ModifyNatSequenceRulesResponse.cpp
  src/v20190904/model/DescribeTableStatusRequest.cpp
  src/v20190904/model/DescribeSecurityGroupListRequest.cpp
  src/v20190904/model/ModifyResourceGroupRequest.cpp
  src/v20190904/model/CreateNatFwInstanceResponse.cpp
  src/v20190904/model/NewModeItems.cpp
  src/v20190904/model/DescribeNatFwInfoCountResponse.cpp
  src/v20190904/model/DescribeDefenseSwitchRequest.cpp
  src/v20190904/model/ModifyEnterpriseSecurityDispatchStatusResponse.cpp
  src/v20190904/model/SecurityGroupListData.cpp
  src/v20190904/model/RemoveNatAcRuleResponse.cpp
  src/v20190904/model/CreateNatFwInstanceWithDomainResponse.cpp
  src/v20190904/model/RemoveAcRuleRequest.cpp
  src/v20190904/model/BetaInfoByACL.cpp
  src/v20190904/model/RemoveNatAcRuleRequest.cpp
  src/v20190904/model/ModifyAllRuleStatusRequest.cpp
  src/v20190904/model/RuleInfoData.cpp
  src/v20190904/model/DescribeAcListsResponse.cpp
  src/v20190904/model/ModifyAllPublicIPSwitchStatusRequest.cpp
  src/v20190904/model/DescribeBlockStaticListResponse.cpp
  src/v20190904/model/AddNatAcRuleRequest.cpp
  src/v20190904/model/ModifySecurityGroupSequenceRulesRequest.cpp
  src/v20190904/model/ScanResultInfo.cpp
  src/v20190904/model/ScanInfo.cpp
  src/v20190904/model/DescribeUnHandleEventTabListResponse.cpp
  src/v20190904/model/NatFwFilter.cpp
  src/v20190904/model/ModifyRunSyncAssetResponse.cpp
  src/v20190904/model/ModifyEnterpriseSecurityGroupRuleResponse.cpp
  src/v20190904/model/ModifySecurityGroupSequenceRulesResponse.cpp
  src/v20190904/model/DescribeResourceGroupNewRequest.cpp
  src/v20190904/model/AddEnterpriseSecurityGroupRulesResponse.cpp
  src/v20190904/model/UnHandleEventDetail.cpp
  src/v20190904/model/RemoveEnterpriseSecurityGroupRuleRequest.cpp
  src/v20190904/model/DeleteResourceGroupRequest.cpp
  src/v20190904/model/DescribeBlockByIpTimesListRequest.cpp
  src/v20190904/model/RemoveEnterpriseSecurityGroupRuleResponse.cpp
  src/v20190904/model/ModifyEnterpriseSecurityGroupRuleRequest.cpp
  src/v20190904/model/ModifySequenceRulesResponse.cpp
  src/v20190904/model/DescribeResourceGroupNewResponse.cpp
  src/v20190904/model/DescribeNatFwInstanceWithRegionResponse.cpp
  src/v20190904/model/DescribeVpcAcRuleResponse.cpp
  src/v20190904/model/ModifyBlockTopRequest.cpp
  src/v20190904/model/DeleteAcRuleResponse.cpp
  src/v20190904/model/IocListData.cpp
  src/v20190904/model/InstanceInfo.cpp
  src/v20190904/model/DescribeIPStatusListRequest.cpp
  src/v20190904/model/ModifyNatFwSwitchResponse.cpp
  src/v20190904/model/DescribeBlockByIpTimesListResponse.cpp
  src/v20190904/model/SetNatFwDnatRuleResponse.cpp
  src/v20190904/model/DescribeRuleOverviewRequest.cpp
  src/v20190904/model/DescribeDefenseSwitchResponse.cpp
  src/v20190904/model/DescribeAcListsRequest.cpp
  src/v20190904/model/DescribeGuideScanInfoRequest.cpp
  src/v20190904/model/DescribeAssociatedInstanceListRequest.cpp
  src/v20190904/model/DeleteAcRuleRequest.cpp
  src/v20190904/model/DeleteAllAccessControlRuleResponse.cpp
  src/v20190904/model/ModifyNatFwSwitchRequest.cpp
  src/v20190904/model/DescribeIPStatusListResponse.cpp
  src/v20190904/model/NatInstanceInfo.cpp
  src/v20190904/model/DescribeTLogIpListResponse.cpp
  src/v20190904/model/StopSecurityGroupRuleDispatchResponse.cpp
  src/v20190904/model/DescribeNatFwInfoCountRequest.cpp
  src/v20190904/model/AddAcRuleResponse.cpp
  src/v20190904/model/ModifyNatFwReSelectRequest.cpp
  src/v20190904/model/SetNatFwDnatRuleRequest.cpp
  src/v20190904/model/ModifyAllVPCSwitchStatusRequest.cpp
  src/v20190904/model/SecurityGroupBothWayInfo.cpp
  src/v20190904/model/ModifyAllRuleStatusResponse.cpp
  src/v20190904/model/StopSecurityGroupRuleDispatchRequest.cpp
  src/v20190904/model/DescribeBlockIgnoreListRequest.cpp
  src/v20190904/model/ModifyBlockTopResponse.cpp
  src/v20190904/model/ModifyStorageSettingRequest.cpp
  src/v20190904/model/DescribeNatFwVpcDnsLstResponse.cpp
  src/v20190904/model/DescAcItem.cpp
  src/v20190904/model/RuleChangeItem.cpp
  src/v20190904/model/ExpandCfwVerticalResponse.cpp
  src/v20190904/model/DescribeNatAcRuleRequest.cpp
  src/v20190904/model/TLogInfo.cpp
  src/v20190904/model/CreateSecurityGroupRulesRequest.cpp
  src/v20190904/model/DeleteVpcInstanceRequest.cpp
  src/v20190904/model/SwitchListsData.cpp
  src/v20190904/model/CreateNatFwInstanceWithDomainRequest.cpp
  src/v20190904/model/DescribeSwitchListsResponse.cpp
  src/v20190904/model/ModifyResourceGroupResponse.cpp
  src/v20190904/model/DeleteResourceGroupResponse.cpp
  src/v20190904/model/DescribeSwitchListsRequest.cpp
  src/v20190904/model/DescribeBlockStaticListRequest.cpp
  src/v20190904/model/FwVpcCidr.cpp
  src/v20190904/model/ModifyRunSyncAssetRequest.cpp
  src/v20190904/model/CreateAcRulesResponse.cpp
  src/v20190904/model/ModifyAssetScanResponse.cpp
  src/v20190904/model/ModifyAcRuleRequest.cpp
  src/v20190904/model/DescribeNatFwInstancesInfoResponse.cpp
  src/v20190904/model/AddNatAcRuleResponse.cpp
  src/v20190904/model/ModifyBlockIgnoreListResponse.cpp
  src/v20190904/model/DescribeNatFwInstanceResponse.cpp
  src/v20190904/model/DnsVpcSwitch.cpp
  src/v20190904/model/CreateAcRulesRequest.cpp
  src/v20190904/model/ModifyEnterpriseSecurityDispatchStatusRequest.cpp
  src/v20190904/model/DescribeBlockIgnoreListResponse.cpp
  src/v20190904/model/ModifyTableStatusRequest.cpp
  src/v20190904/model/ModifyTableStatusResponse.cpp
  src/v20190904/model/DescribeGuideScanInfoResponse.cpp
  )

set(cfw_include
    include/tencentcloud/cfw
  )

add_library(cfw ${LIB_TYPE}
  ${cfw_public_header}
  ${cfw_public_header_model}
  ${cfw_src})

set_target_properties(cfw
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cfw
  )

target_include_directories(cfw
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(cfw
  core)

#install(FILES ${cfw_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cfw/v20190904)
#install(FILES ${cfw_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/cfw/v20190904/model)
install(DIRECTORY ${cfw_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS cfw
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
