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

set(dayu_public_header
  include/tencentcloud/dayu/v20180709/DayuClient.h
  )

set(dayu_public_header_model
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSPolicyCaseRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeIpUnBlockListRequest.h
  include/tencentcloud/dayu/v20180709/model/DeleteDDoSPolicyCaseRequest.h
  include/tencentcloud/dayu/v20180709/model/CreateDDoSPolicyResponse.h
  include/tencentcloud/dayu/v20180709/model/DeleteL7RulesRequest.h
  include/tencentcloud/dayu/v20180709/model/CreateBoundIPRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeCCEvListRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeTransmitStatisResponse.h
  include/tencentcloud/dayu/v20180709/model/DDosPolicy.h
  include/tencentcloud/dayu/v20180709/model/ProtocolPort.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSNetTrendRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeUnBlockStatisRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCUrlAllowResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeBasicDeviceThresholdResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeCCAlarmThresholdResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSNetEvListRequest.h
  include/tencentcloud/dayu/v20180709/model/DeleteL4RulesResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyNewDomainRulesRequest.h
  include/tencentcloud/dayu/v20180709/model/DDoSAlarmThreshold.h
  include/tencentcloud/dayu/v20180709/model/DescribePolicyCaseResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeResIpListRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCLevelRequest.h
  include/tencentcloud/dayu/v20180709/model/DeleteCCSelfDefinePolicyRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeCCUrlAllowRequest.h
  include/tencentcloud/dayu/v20180709/model/KeyValue.h
  include/tencentcloud/dayu/v20180709/model/IpBlackWhite.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSAlarmThresholdRequest.h
  include/tencentcloud/dayu/v20180709/model/CreateDDoSPolicyRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCThresholdResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyNetReturnSwitchResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeActionLogRequest.h
  include/tencentcloud/dayu/v20180709/model/CreateL7RuleCertRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeBGPIPL7RuleMaxCntResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribePcapResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribePackIndexResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSAttackSourceRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSCountRequest.h
  include/tencentcloud/dayu/v20180709/model/RegionInstanceCount.h
  include/tencentcloud/dayu/v20180709/model/WaterPrintKey.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSNetIpLogRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyNewL4RuleResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyNewDomainRulesResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSUsedStatisResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeBasicCCThresholdRequest.h
  include/tencentcloud/dayu/v20180709/model/CreateDDoSPolicyCaseResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeIPProductInfoResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSSwitchResponse.h
  include/tencentcloud/dayu/v20180709/model/IpBlockData.h
  include/tencentcloud/dayu/v20180709/model/DescribeCCSelfDefinePolicyRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSDefendStatusRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeRuleSetsResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeBaradDataResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSEvInfoRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSAttackIPRegionMapResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyL4KeepTimeResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyL7RulesResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeL7HealthConfigRequest.h
  include/tencentcloud/dayu/v20180709/model/BoundIpInfo.h
  include/tencentcloud/dayu/v20180709/model/DescribePcapRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSAlarmThresholdResponse.h
  include/tencentcloud/dayu/v20180709/model/KeyValueRecord.h
  include/tencentcloud/dayu/v20180709/model/DescribeBasicDeviceThresholdRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyResBindDDoSPolicyResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSWaterKeyRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCLevelResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeBaradDataRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSDefendStatusResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeCCSelfDefinePolicyResponse.h
  include/tencentcloud/dayu/v20180709/model/CCPolicy.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSAIStatusResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSNetEvInfoRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyResourceRenewFlagRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeCCEvListResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeCCFrequencyRulesRequest.h
  include/tencentcloud/dayu/v20180709/model/CreateL4HealthConfigRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeBGPIPL7RuleMaxCntRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSPolicyNameResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeCCAlarmThresholdRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCUrlAllowRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSAlarmThresholdResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSLevelResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSWaterKeyResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeCCIpAllowDenyResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSIpLogResponse.h
  include/tencentcloud/dayu/v20180709/model/CCRule.h
  include/tencentcloud/dayu/v20180709/model/DescribeResIpListResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCIpAllowDenyRequest.h
  include/tencentcloud/dayu/v20180709/model/CreateInstanceNameResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSDefendStatusRequest.h
  include/tencentcloud/dayu/v20180709/model/HttpStatusMap.h
  include/tencentcloud/dayu/v20180709/model/ModifyL4HealthRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCHostProtectionResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateL4RulesResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeInsurePacksRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSNetCountRequest.h
  include/tencentcloud/dayu/v20180709/model/Paging.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCSelfDefinePolicyRequest.h
  include/tencentcloud/dayu/v20180709/model/L4HealthConfig.h
  include/tencentcloud/dayu/v20180709/model/CreateCCSelfDefinePolicyRequest.h
  include/tencentcloud/dayu/v20180709/model/SuccessCode.h
  include/tencentcloud/dayu/v20180709/model/DescribleL4RulesRequest.h
  include/tencentcloud/dayu/v20180709/model/L4RuleEntry.h
  include/tencentcloud/dayu/v20180709/model/DescribeL4HealthConfigRequest.h
  include/tencentcloud/dayu/v20180709/model/CreateL7CCRuleResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCFrequencyRulesStatusResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyNetReturnSwitchRequest.h
  include/tencentcloud/dayu/v20180709/model/CreateL7CCRuleRequest.h
  include/tencentcloud/dayu/v20180709/model/CreateL7RulesRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeBizHttpStatusResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSNetEvListResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateL4RulesRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyNewL4RuleRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeL4RulesErrHealthRequest.h
  include/tencentcloud/dayu/v20180709/model/L4RuleSource.h
  include/tencentcloud/dayu/v20180709/model/CreateBasicDDoSAlarmThresholdResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateNetReturnResponse.h
  include/tencentcloud/dayu/v20180709/model/DeleteL4RulesRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCAlarmThresholdResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateL7HealthConfigRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeIPProductInfoRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeL4HealthConfigResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateL7RuleCertResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSAttackIPRegionMapRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSPolicyRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeSourceIpSegmentRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeSourceIpSegmentResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyResBindDDoSPolicyRequest.h
  include/tencentcloud/dayu/v20180709/model/L7RuleHealth.h
  include/tencentcloud/dayu/v20180709/model/CreateL7RulesUploadRequest.h
  include/tencentcloud/dayu/v20180709/model/L4RuleHealth.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCFrequencyRulesRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCPolicySwitchResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSThresholdResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateDDoSPolicyCaseRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCIpAllowDenyResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCAlarmThresholdRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeCCFrequencyRulesResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSEvListRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeBasicCCThresholdResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSPolicyNameRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeIpUnBlockListResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCPolicySwitchRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCFrequencyRulesResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyL4KeepTimeRequest.h
  include/tencentcloud/dayu/v20180709/model/SchedulingDomain.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCHostProtectionRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeIpBlockListRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSNetCountResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateL7RulesResponse.h
  include/tencentcloud/dayu/v20180709/model/BaradData.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSSwitchRequest.h
  include/tencentcloud/dayu/v20180709/model/CreateNetReturnRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSAIStatusRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSAttackSourceResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeResourceListResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCThresholdRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSDefendStatusResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateBasicDDoSAlarmThresholdRequest.h
  include/tencentcloud/dayu/v20180709/model/CCRuleConfig.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSEvInfoResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribleRegionCountRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCSelfDefinePolicyResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSIpLogRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSAlarmThresholdRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribePolicyCaseRequest.h
  include/tencentcloud/dayu/v20180709/model/WaterPrintPolicy.h
  include/tencentcloud/dayu/v20180709/model/CreateNewL7RulesUploadRequest.h
  include/tencentcloud/dayu/v20180709/model/DeleteCCSelfDefinePolicyResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSPolicyResponse.h
  include/tencentcloud/dayu/v20180709/model/DeleteCCFrequencyRulesResponse.h
  include/tencentcloud/dayu/v20180709/model/DeleteDDoSPolicyCaseResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateL4HealthConfigResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyL7RulesRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyElasticLimitResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateNewL7RulesUploadResponse.h
  include/tencentcloud/dayu/v20180709/model/DDoSAttackSourceRecord.h
  include/tencentcloud/dayu/v20180709/model/CreateUnblockIpResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribePackIndexRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyL4RulesRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSEvListResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSPolicyRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeL7HealthConfigResponse.h
  include/tencentcloud/dayu/v20180709/model/CCFrequencyRule.h
  include/tencentcloud/dayu/v20180709/model/CreateCCSelfDefinePolicyResponse.h
  include/tencentcloud/dayu/v20180709/model/NewL7RuleEntry.h
  include/tencentcloud/dayu/v20180709/model/DescribeBizHttpStatusRequest.h
  include/tencentcloud/dayu/v20180709/model/CreateBoundIPResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSUsedStatisRequest.h
  include/tencentcloud/dayu/v20180709/model/DDoSPolicyDropOption.h
  include/tencentcloud/dayu/v20180709/model/ModifyElasticLimitRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyL4HealthResponse.h
  include/tencentcloud/dayu/v20180709/model/CCEventRecord.h
  include/tencentcloud/dayu/v20180709/model/DescribeTransmitStatisRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeInsurePacksResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateUnblockIpRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyResourceRenewFlagResponse.h
  include/tencentcloud/dayu/v20180709/model/OrderBy.h
  include/tencentcloud/dayu/v20180709/model/DescribeActionLogResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeCCTrendResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSPolicyCaseResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeCCUrlAllowResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeSecIndexRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyCCFrequencyRulesStatusRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSCountResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeL4RulesErrHealthResponse.h
  include/tencentcloud/dayu/v20180709/model/DeleteDDoSPolicyResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSTrendRequest.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSPolicyResponse.h
  include/tencentcloud/dayu/v20180709/model/ResourceIp.h
  include/tencentcloud/dayu/v20180709/model/CCAlarmThreshold.h
  include/tencentcloud/dayu/v20180709/model/DescribeResourceListRequest.h
  include/tencentcloud/dayu/v20180709/model/L7HealthConfig.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSNetEvInfoResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeRuleSetsRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeSchedulingDomainListRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribleL7RulesResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateCCFrequencyRulesResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeIpBlockListResponse.h
  include/tencentcloud/dayu/v20180709/model/DDoSPolicyPortLimit.h
  include/tencentcloud/dayu/v20180709/model/DescribeSchedulingDomainListResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSNetTrendResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeUnBlockStatisResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribleL7RulesRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeCCIpAllowDenyRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeSecIndexResponse.h
  include/tencentcloud/dayu/v20180709/model/L7RuleEntry.h
  include/tencentcloud/dayu/v20180709/model/IpUnBlockData.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSLevelRequest.h
  include/tencentcloud/dayu/v20180709/model/DDoSPolicyPacketFilter.h
  include/tencentcloud/dayu/v20180709/model/DeleteCCFrequencyRulesRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSNetIpLogResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateCCFrequencyRulesRequest.h
  include/tencentcloud/dayu/v20180709/model/DeleteL7RulesResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateL7HealthConfigResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribeDDoSTrendResponse.h
  include/tencentcloud/dayu/v20180709/model/DescribleRegionCountResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyDDoSThresholdRequest.h
  include/tencentcloud/dayu/v20180709/model/DDoSEventRecord.h
  include/tencentcloud/dayu/v20180709/model/DescribleL4RulesResponse.h
  include/tencentcloud/dayu/v20180709/model/ModifyL4RulesResponse.h
  include/tencentcloud/dayu/v20180709/model/DeleteDDoSPolicyRequest.h
  include/tencentcloud/dayu/v20180709/model/CreateL7RulesUploadResponse.h
  include/tencentcloud/dayu/v20180709/model/CreateInstanceNameRequest.h
  include/tencentcloud/dayu/v20180709/model/DescribeCCTrendRequest.h
  )

set(dayu_src
  src/v20180709/DayuClient.cpp
  src/v20180709/model/ModifyDDoSPolicyCaseRequest.cpp
  src/v20180709/model/DescribeIpUnBlockListRequest.cpp
  src/v20180709/model/DeleteDDoSPolicyCaseRequest.cpp
  src/v20180709/model/CreateDDoSPolicyResponse.cpp
  src/v20180709/model/DeleteL7RulesRequest.cpp
  src/v20180709/model/CreateBoundIPRequest.cpp
  src/v20180709/model/DescribeCCEvListRequest.cpp
  src/v20180709/model/DescribeTransmitStatisResponse.cpp
  src/v20180709/model/DDosPolicy.cpp
  src/v20180709/model/ProtocolPort.cpp
  src/v20180709/model/DescribeDDoSNetTrendRequest.cpp
  src/v20180709/model/DescribeUnBlockStatisRequest.cpp
  src/v20180709/model/ModifyCCUrlAllowResponse.cpp
  src/v20180709/model/DescribeBasicDeviceThresholdResponse.cpp
  src/v20180709/model/DescribeCCAlarmThresholdResponse.cpp
  src/v20180709/model/DescribeDDoSNetEvListRequest.cpp
  src/v20180709/model/DeleteL4RulesResponse.cpp
  src/v20180709/model/ModifyNewDomainRulesRequest.cpp
  src/v20180709/model/DDoSAlarmThreshold.cpp
  src/v20180709/model/DescribePolicyCaseResponse.cpp
  src/v20180709/model/DescribeResIpListRequest.cpp
  src/v20180709/model/ModifyCCLevelRequest.cpp
  src/v20180709/model/DeleteCCSelfDefinePolicyRequest.cpp
  src/v20180709/model/DescribeCCUrlAllowRequest.cpp
  src/v20180709/model/KeyValue.cpp
  src/v20180709/model/IpBlackWhite.cpp
  src/v20180709/model/ModifyDDoSAlarmThresholdRequest.cpp
  src/v20180709/model/CreateDDoSPolicyRequest.cpp
  src/v20180709/model/ModifyCCThresholdResponse.cpp
  src/v20180709/model/ModifyNetReturnSwitchResponse.cpp
  src/v20180709/model/DescribeActionLogRequest.cpp
  src/v20180709/model/CreateL7RuleCertRequest.cpp
  src/v20180709/model/DescribeBGPIPL7RuleMaxCntResponse.cpp
  src/v20180709/model/DescribePcapResponse.cpp
  src/v20180709/model/DescribePackIndexResponse.cpp
  src/v20180709/model/DescribeDDoSAttackSourceRequest.cpp
  src/v20180709/model/DescribeDDoSCountRequest.cpp
  src/v20180709/model/RegionInstanceCount.cpp
  src/v20180709/model/WaterPrintKey.cpp
  src/v20180709/model/DescribeDDoSNetIpLogRequest.cpp
  src/v20180709/model/ModifyNewL4RuleResponse.cpp
  src/v20180709/model/ModifyNewDomainRulesResponse.cpp
  src/v20180709/model/DescribeDDoSUsedStatisResponse.cpp
  src/v20180709/model/DescribeBasicCCThresholdRequest.cpp
  src/v20180709/model/CreateDDoSPolicyCaseResponse.cpp
  src/v20180709/model/DescribeIPProductInfoResponse.cpp
  src/v20180709/model/ModifyDDoSSwitchResponse.cpp
  src/v20180709/model/IpBlockData.cpp
  src/v20180709/model/DescribeCCSelfDefinePolicyRequest.cpp
  src/v20180709/model/ModifyDDoSDefendStatusRequest.cpp
  src/v20180709/model/DescribeRuleSetsResponse.cpp
  src/v20180709/model/DescribeBaradDataResponse.cpp
  src/v20180709/model/DescribeDDoSEvInfoRequest.cpp
  src/v20180709/model/DescribeDDoSAttackIPRegionMapResponse.cpp
  src/v20180709/model/ModifyL4KeepTimeResponse.cpp
  src/v20180709/model/ModifyL7RulesResponse.cpp
  src/v20180709/model/DescribeL7HealthConfigRequest.cpp
  src/v20180709/model/BoundIpInfo.cpp
  src/v20180709/model/DescribePcapRequest.cpp
  src/v20180709/model/DescribeDDoSAlarmThresholdResponse.cpp
  src/v20180709/model/KeyValueRecord.cpp
  src/v20180709/model/DescribeBasicDeviceThresholdRequest.cpp
  src/v20180709/model/ModifyResBindDDoSPolicyResponse.cpp
  src/v20180709/model/ModifyDDoSWaterKeyRequest.cpp
  src/v20180709/model/ModifyCCLevelResponse.cpp
  src/v20180709/model/DescribeBaradDataRequest.cpp
  src/v20180709/model/DescribeDDoSDefendStatusResponse.cpp
  src/v20180709/model/DescribeCCSelfDefinePolicyResponse.cpp
  src/v20180709/model/CCPolicy.cpp
  src/v20180709/model/ModifyDDoSAIStatusResponse.cpp
  src/v20180709/model/DescribeDDoSNetEvInfoRequest.cpp
  src/v20180709/model/ModifyResourceRenewFlagRequest.cpp
  src/v20180709/model/DescribeCCEvListResponse.cpp
  src/v20180709/model/DescribeCCFrequencyRulesRequest.cpp
  src/v20180709/model/CreateL4HealthConfigRequest.cpp
  src/v20180709/model/DescribeBGPIPL7RuleMaxCntRequest.cpp
  src/v20180709/model/ModifyDDoSPolicyNameResponse.cpp
  src/v20180709/model/DescribeCCAlarmThresholdRequest.cpp
  src/v20180709/model/ModifyCCUrlAllowRequest.cpp
  src/v20180709/model/ModifyDDoSAlarmThresholdResponse.cpp
  src/v20180709/model/ModifyDDoSLevelResponse.cpp
  src/v20180709/model/ModifyDDoSWaterKeyResponse.cpp
  src/v20180709/model/DescribeCCIpAllowDenyResponse.cpp
  src/v20180709/model/DescribeDDoSIpLogResponse.cpp
  src/v20180709/model/CCRule.cpp
  src/v20180709/model/DescribeResIpListResponse.cpp
  src/v20180709/model/ModifyCCIpAllowDenyRequest.cpp
  src/v20180709/model/CreateInstanceNameResponse.cpp
  src/v20180709/model/DescribeDDoSDefendStatusRequest.cpp
  src/v20180709/model/HttpStatusMap.cpp
  src/v20180709/model/ModifyL4HealthRequest.cpp
  src/v20180709/model/ModifyCCHostProtectionResponse.cpp
  src/v20180709/model/CreateL4RulesResponse.cpp
  src/v20180709/model/DescribeInsurePacksRequest.cpp
  src/v20180709/model/DescribeDDoSNetCountRequest.cpp
  src/v20180709/model/Paging.cpp
  src/v20180709/model/ModifyCCSelfDefinePolicyRequest.cpp
  src/v20180709/model/L4HealthConfig.cpp
  src/v20180709/model/CreateCCSelfDefinePolicyRequest.cpp
  src/v20180709/model/SuccessCode.cpp
  src/v20180709/model/DescribleL4RulesRequest.cpp
  src/v20180709/model/L4RuleEntry.cpp
  src/v20180709/model/DescribeL4HealthConfigRequest.cpp
  src/v20180709/model/CreateL7CCRuleResponse.cpp
  src/v20180709/model/ModifyCCFrequencyRulesStatusResponse.cpp
  src/v20180709/model/ModifyNetReturnSwitchRequest.cpp
  src/v20180709/model/CreateL7CCRuleRequest.cpp
  src/v20180709/model/CreateL7RulesRequest.cpp
  src/v20180709/model/DescribeBizHttpStatusResponse.cpp
  src/v20180709/model/DescribeDDoSNetEvListResponse.cpp
  src/v20180709/model/CreateL4RulesRequest.cpp
  src/v20180709/model/ModifyNewL4RuleRequest.cpp
  src/v20180709/model/DescribeL4RulesErrHealthRequest.cpp
  src/v20180709/model/L4RuleSource.cpp
  src/v20180709/model/CreateBasicDDoSAlarmThresholdResponse.cpp
  src/v20180709/model/CreateNetReturnResponse.cpp
  src/v20180709/model/DeleteL4RulesRequest.cpp
  src/v20180709/model/ModifyCCAlarmThresholdResponse.cpp
  src/v20180709/model/CreateL7HealthConfigRequest.cpp
  src/v20180709/model/DescribeIPProductInfoRequest.cpp
  src/v20180709/model/DescribeL4HealthConfigResponse.cpp
  src/v20180709/model/CreateL7RuleCertResponse.cpp
  src/v20180709/model/DescribeDDoSAttackIPRegionMapRequest.cpp
  src/v20180709/model/ModifyDDoSPolicyRequest.cpp
  src/v20180709/model/DescribeSourceIpSegmentRequest.cpp
  src/v20180709/model/DescribeSourceIpSegmentResponse.cpp
  src/v20180709/model/ModifyResBindDDoSPolicyRequest.cpp
  src/v20180709/model/L7RuleHealth.cpp
  src/v20180709/model/CreateL7RulesUploadRequest.cpp
  src/v20180709/model/L4RuleHealth.cpp
  src/v20180709/model/ModifyCCFrequencyRulesRequest.cpp
  src/v20180709/model/ModifyCCPolicySwitchResponse.cpp
  src/v20180709/model/ModifyDDoSThresholdResponse.cpp
  src/v20180709/model/CreateDDoSPolicyCaseRequest.cpp
  src/v20180709/model/ModifyCCIpAllowDenyResponse.cpp
  src/v20180709/model/ModifyCCAlarmThresholdRequest.cpp
  src/v20180709/model/DescribeCCFrequencyRulesResponse.cpp
  src/v20180709/model/DescribeDDoSEvListRequest.cpp
  src/v20180709/model/DescribeBasicCCThresholdResponse.cpp
  src/v20180709/model/ModifyDDoSPolicyNameRequest.cpp
  src/v20180709/model/DescribeIpUnBlockListResponse.cpp
  src/v20180709/model/ModifyCCPolicySwitchRequest.cpp
  src/v20180709/model/ModifyCCFrequencyRulesResponse.cpp
  src/v20180709/model/ModifyL4KeepTimeRequest.cpp
  src/v20180709/model/SchedulingDomain.cpp
  src/v20180709/model/ModifyCCHostProtectionRequest.cpp
  src/v20180709/model/DescribeIpBlockListRequest.cpp
  src/v20180709/model/DescribeDDoSNetCountResponse.cpp
  src/v20180709/model/CreateL7RulesResponse.cpp
  src/v20180709/model/BaradData.cpp
  src/v20180709/model/ModifyDDoSSwitchRequest.cpp
  src/v20180709/model/CreateNetReturnRequest.cpp
  src/v20180709/model/ModifyDDoSAIStatusRequest.cpp
  src/v20180709/model/DescribeDDoSAttackSourceResponse.cpp
  src/v20180709/model/DescribeResourceListResponse.cpp
  src/v20180709/model/ModifyCCThresholdRequest.cpp
  src/v20180709/model/ModifyDDoSDefendStatusResponse.cpp
  src/v20180709/model/CreateBasicDDoSAlarmThresholdRequest.cpp
  src/v20180709/model/CCRuleConfig.cpp
  src/v20180709/model/DescribeDDoSEvInfoResponse.cpp
  src/v20180709/model/DescribleRegionCountRequest.cpp
  src/v20180709/model/ModifyCCSelfDefinePolicyResponse.cpp
  src/v20180709/model/DescribeDDoSIpLogRequest.cpp
  src/v20180709/model/DescribeDDoSAlarmThresholdRequest.cpp
  src/v20180709/model/DescribePolicyCaseRequest.cpp
  src/v20180709/model/WaterPrintPolicy.cpp
  src/v20180709/model/CreateNewL7RulesUploadRequest.cpp
  src/v20180709/model/DeleteCCSelfDefinePolicyResponse.cpp
  src/v20180709/model/DescribeDDoSPolicyResponse.cpp
  src/v20180709/model/DeleteCCFrequencyRulesResponse.cpp
  src/v20180709/model/DeleteDDoSPolicyCaseResponse.cpp
  src/v20180709/model/CreateL4HealthConfigResponse.cpp
  src/v20180709/model/ModifyL7RulesRequest.cpp
  src/v20180709/model/ModifyElasticLimitResponse.cpp
  src/v20180709/model/CreateNewL7RulesUploadResponse.cpp
  src/v20180709/model/DDoSAttackSourceRecord.cpp
  src/v20180709/model/CreateUnblockIpResponse.cpp
  src/v20180709/model/DescribePackIndexRequest.cpp
  src/v20180709/model/ModifyL4RulesRequest.cpp
  src/v20180709/model/DescribeDDoSEvListResponse.cpp
  src/v20180709/model/DescribeDDoSPolicyRequest.cpp
  src/v20180709/model/DescribeL7HealthConfigResponse.cpp
  src/v20180709/model/CCFrequencyRule.cpp
  src/v20180709/model/CreateCCSelfDefinePolicyResponse.cpp
  src/v20180709/model/NewL7RuleEntry.cpp
  src/v20180709/model/DescribeBizHttpStatusRequest.cpp
  src/v20180709/model/CreateBoundIPResponse.cpp
  src/v20180709/model/DescribeDDoSUsedStatisRequest.cpp
  src/v20180709/model/DDoSPolicyDropOption.cpp
  src/v20180709/model/ModifyElasticLimitRequest.cpp
  src/v20180709/model/ModifyL4HealthResponse.cpp
  src/v20180709/model/CCEventRecord.cpp
  src/v20180709/model/DescribeTransmitStatisRequest.cpp
  src/v20180709/model/DescribeInsurePacksResponse.cpp
  src/v20180709/model/CreateUnblockIpRequest.cpp
  src/v20180709/model/ModifyResourceRenewFlagResponse.cpp
  src/v20180709/model/OrderBy.cpp
  src/v20180709/model/DescribeActionLogResponse.cpp
  src/v20180709/model/DescribeCCTrendResponse.cpp
  src/v20180709/model/ModifyDDoSPolicyCaseResponse.cpp
  src/v20180709/model/DescribeCCUrlAllowResponse.cpp
  src/v20180709/model/DescribeSecIndexRequest.cpp
  src/v20180709/model/ModifyCCFrequencyRulesStatusRequest.cpp
  src/v20180709/model/DescribeDDoSCountResponse.cpp
  src/v20180709/model/DescribeL4RulesErrHealthResponse.cpp
  src/v20180709/model/DeleteDDoSPolicyResponse.cpp
  src/v20180709/model/DescribeDDoSTrendRequest.cpp
  src/v20180709/model/ModifyDDoSPolicyResponse.cpp
  src/v20180709/model/ResourceIp.cpp
  src/v20180709/model/CCAlarmThreshold.cpp
  src/v20180709/model/DescribeResourceListRequest.cpp
  src/v20180709/model/L7HealthConfig.cpp
  src/v20180709/model/DescribeDDoSNetEvInfoResponse.cpp
  src/v20180709/model/DescribeRuleSetsRequest.cpp
  src/v20180709/model/DescribeSchedulingDomainListRequest.cpp
  src/v20180709/model/DescribleL7RulesResponse.cpp
  src/v20180709/model/CreateCCFrequencyRulesResponse.cpp
  src/v20180709/model/DescribeIpBlockListResponse.cpp
  src/v20180709/model/DDoSPolicyPortLimit.cpp
  src/v20180709/model/DescribeSchedulingDomainListResponse.cpp
  src/v20180709/model/DescribeDDoSNetTrendResponse.cpp
  src/v20180709/model/DescribeUnBlockStatisResponse.cpp
  src/v20180709/model/DescribleL7RulesRequest.cpp
  src/v20180709/model/DescribeCCIpAllowDenyRequest.cpp
  src/v20180709/model/DescribeSecIndexResponse.cpp
  src/v20180709/model/L7RuleEntry.cpp
  src/v20180709/model/IpUnBlockData.cpp
  src/v20180709/model/ModifyDDoSLevelRequest.cpp
  src/v20180709/model/DDoSPolicyPacketFilter.cpp
  src/v20180709/model/DeleteCCFrequencyRulesRequest.cpp
  src/v20180709/model/DescribeDDoSNetIpLogResponse.cpp
  src/v20180709/model/CreateCCFrequencyRulesRequest.cpp
  src/v20180709/model/DeleteL7RulesResponse.cpp
  src/v20180709/model/CreateL7HealthConfigResponse.cpp
  src/v20180709/model/DescribeDDoSTrendResponse.cpp
  src/v20180709/model/DescribleRegionCountResponse.cpp
  src/v20180709/model/ModifyDDoSThresholdRequest.cpp
  src/v20180709/model/DDoSEventRecord.cpp
  src/v20180709/model/DescribleL4RulesResponse.cpp
  src/v20180709/model/ModifyL4RulesResponse.cpp
  src/v20180709/model/DeleteDDoSPolicyRequest.cpp
  src/v20180709/model/CreateL7RulesUploadResponse.cpp
  src/v20180709/model/CreateInstanceNameRequest.cpp
  src/v20180709/model/DescribeCCTrendRequest.cpp
  )

set(dayu_include
    include/tencentcloud/dayu
  )

add_library(dayu ${LIB_TYPE}
  ${dayu_public_header}
  ${dayu_public_header_model}
  ${dayu_src})

set_target_properties(dayu
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dayu
  )

target_include_directories(dayu
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dayu
  core)

#install(FILES ${dayu_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dayu/v20180709)
#install(FILES ${dayu_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dayu/v20180709/model)
install(DIRECTORY ${dayu_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dayu
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
