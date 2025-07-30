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

set(mdp_public_header
  include/tencentcloud/mdp/v20200527/MdpClient.h
  )

set(mdp_public_header_model
  include/tencentcloud/mdp/v20200527/model/DRMInfo.h
  include/tencentcloud/mdp/v20200527/model/SourcePackageConf.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageSSAIChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/AdBreakInfo.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageLinearAssemblyProgramResponse.h
  include/tencentcloud/mdp/v20200527/model/BindNewLVBDomainWithChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyChannelsRequest.h
  include/tencentcloud/mdp/v20200527/model/CdnDomainInfo.h
  include/tencentcloud/mdp/v20200527/model/StartStreamPackageLinearAssemblyChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/LocationAlert.h
  include/tencentcloud/mdp/v20200527/model/Metadata.h
  include/tencentcloud/mdp/v20200527/model/ClipRangeInfo.h
  include/tencentcloud/mdp/v20200527/model/AliasValueConf.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSSAIChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeLinearAssemblyCDNDomainWithChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageSSAIChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelInputAuthInfoRequest.h
  include/tencentcloud/mdp/v20200527/model/ChannelAlertResp.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelsRequest.h
  include/tencentcloud/mdp/v20200527/model/InputInfo.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyProgramsResponse.h
  include/tencentcloud/mdp/v20200527/model/PointInfo.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceAlertsRequest.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageSSAIChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageSourceResponse.h
  include/tencentcloud/mdp/v20200527/model/ProgramAlertInfos.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageSourceRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageHarvestJobsResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceLocationAlertsRequest.h
  include/tencentcloud/mdp/v20200527/model/UnbindCdnDomainWithChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelEndpointRequest.h
  include/tencentcloud/mdp/v20200527/model/SSAIChannelInfo.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageSourceLocationResponse.h
  include/tencentcloud/mdp/v20200527/model/BindLinearAssemblyCDNDomainWithChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyProgramsRequest.h
  include/tencentcloud/mdp/v20200527/model/DomainRecordInfo.h
  include/tencentcloud/mdp/v20200527/model/TimeShiftInfo.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyProgramSchedulesResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageHarvestJobRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyChannelsRequest.h
  include/tencentcloud/mdp/v20200527/model/SourceAlert.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourcesResponse.h
  include/tencentcloud/mdp/v20200527/model/SourceInfo.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceLocationAlertsResponse.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageLinearAssemblyChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/PlaybackInfoReq.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageHarvestJobResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageSSAIChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelEndpointResponse.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageSourceLocationRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageHarvestJobsRequest.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageHarvestJobResponse.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageHarvestJobsRequest.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageChannelEndpointResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeLinearAssemblyCDNDomainWithChannelsRequest.h
  include/tencentcloud/mdp/v20200527/model/PlaybackInfo.h
  include/tencentcloud/mdp/v20200527/model/ChannelInfo.h
  include/tencentcloud/mdp/v20200527/model/CacheInfo.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceLocationRequest.h
  include/tencentcloud/mdp/v20200527/model/UnbindCdnDomainWithChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageLinearAssemblyProgramRequest.h
  include/tencentcloud/mdp/v20200527/model/HarvestJobResp.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceLocationsRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceLocationResponse.h
  include/tencentcloud/mdp/v20200527/model/EndpointInfo.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageSourceResponse.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSSAIUsageResponse.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageLinearAssemblyProgramRequest.h
  include/tencentcloud/mdp/v20200527/model/SegmentDeliverInfo.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageSourceRequest.h
  include/tencentcloud/mdp/v20200527/model/InputAuthInfo.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSSAIChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageHarvestJobsResponse.h
  include/tencentcloud/mdp/v20200527/model/TimeSignalInfo.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageLinearAssemblyChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageSourceLocationResponse.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageSourceRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyProgramRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyChannelAlertsRequest.h
  include/tencentcloud/mdp/v20200527/model/UnbindLinearAssemblyCDNDomainWithChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceLocationsResponse.h
  include/tencentcloud/mdp/v20200527/model/StopStreamPackageLinearAssemblyChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelsRequest.h
  include/tencentcloud/mdp/v20200527/model/SSAIUsageInfo.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelInputAuthInfoResponse.h
  include/tencentcloud/mdp/v20200527/model/SlateInfo.h
  include/tencentcloud/mdp/v20200527/model/UnbindLinearAssemblyCDNDomainWithChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/DashManifestInfo.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyChannelAlertsResponse.h
  include/tencentcloud/mdp/v20200527/model/BindLinearAssemblyCDNDomainWithChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelEndpointsRequest.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageSSAIChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/StartStreamPackageLinearAssemblyChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageLinearAssemblyChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageSourceResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/OutputInfo.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageChannelEndpointRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSSAIChannelsRequest.h
  include/tencentcloud/mdp/v20200527/model/ProgramAlertCounts.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageSourceLocationRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyProgramResponse.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyChannelsResponse.h
  include/tencentcloud/mdp/v20200527/model/BindNewLVBDomainWithChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeLinearAssemblyCDNDomainWithChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageSourceLocationResponse.h
  include/tencentcloud/mdp/v20200527/model/StopStreamPackageLinearAssemblyChannelRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyProgramSchedulesRequest.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyProgramsRequest.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelEndpointsResponse.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageHarvestJobRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSSAIUsageRequest.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceAlertsResponse.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyProgramRequest.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageChannelsResponse.h
  include/tencentcloud/mdp/v20200527/model/ProgramScheduleInfo.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyProgramsResponse.h
  include/tencentcloud/mdp/v20200527/model/SpliceInsertInfo.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageLinearAssemblyProgramResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageChannelsResponse.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourceResponse.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageLinearAssemblyProgramResponse.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageSSAIChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/ModifyStreamPackageSourceLocationRequest.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageHarvestJobResponse.h
  include/tencentcloud/mdp/v20200527/model/EndpointAuthInfo.h
  include/tencentcloud/mdp/v20200527/model/SourceLocationInfo.h
  include/tencentcloud/mdp/v20200527/model/SSAIConf.h
  include/tencentcloud/mdp/v20200527/model/LinearAssemblyProgramInfo.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSourcesRequest.h
  include/tencentcloud/mdp/v20200527/model/CreateStreamPackageLinearAssemblyChannelResponse.h
  include/tencentcloud/mdp/v20200527/model/LinearAssemblyChannelInfo.h
  include/tencentcloud/mdp/v20200527/model/UsageDetail.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageSSAIChannelsResponse.h
  include/tencentcloud/mdp/v20200527/model/OutputReq.h
  include/tencentcloud/mdp/v20200527/model/CacheInfoInfo.h
  include/tencentcloud/mdp/v20200527/model/DescribeStreamPackageLinearAssemblyChannelsResponse.h
  include/tencentcloud/mdp/v20200527/model/DeleteStreamPackageHarvestJobRequest.h
  include/tencentcloud/mdp/v20200527/model/NameServer.h
  include/tencentcloud/mdp/v20200527/model/ConfigAliasesInfo.h
  include/tencentcloud/mdp/v20200527/model/ManifestInfo.h
  include/tencentcloud/mdp/v20200527/model/DescribeLinearAssemblyCDNDomainWithChannelsResponse.h
  )

set(mdp_src
  src/v20200527/MdpClient.cpp
  src/v20200527/model/DRMInfo.cpp
  src/v20200527/model/SourcePackageConf.cpp
  src/v20200527/model/CreateStreamPackageSSAIChannelRequest.cpp
  src/v20200527/model/AdBreakInfo.cpp
  src/v20200527/model/ModifyStreamPackageLinearAssemblyProgramResponse.cpp
  src/v20200527/model/BindNewLVBDomainWithChannelResponse.cpp
  src/v20200527/model/DeleteStreamPackageLinearAssemblyChannelsRequest.cpp
  src/v20200527/model/CdnDomainInfo.cpp
  src/v20200527/model/StartStreamPackageLinearAssemblyChannelRequest.cpp
  src/v20200527/model/LocationAlert.cpp
  src/v20200527/model/Metadata.cpp
  src/v20200527/model/ClipRangeInfo.cpp
  src/v20200527/model/AliasValueConf.cpp
  src/v20200527/model/DescribeStreamPackageSSAIChannelRequest.cpp
  src/v20200527/model/DescribeLinearAssemblyCDNDomainWithChannelResponse.cpp
  src/v20200527/model/ModifyStreamPackageSSAIChannelResponse.cpp
  src/v20200527/model/ModifyStreamPackageChannelInputAuthInfoRequest.cpp
  src/v20200527/model/ChannelAlertResp.cpp
  src/v20200527/model/DeleteStreamPackageChannelsRequest.cpp
  src/v20200527/model/InputInfo.cpp
  src/v20200527/model/DescribeStreamPackageLinearAssemblyProgramsResponse.cpp
  src/v20200527/model/PointInfo.cpp
  src/v20200527/model/DescribeStreamPackageSourceAlertsRequest.cpp
  src/v20200527/model/ModifyStreamPackageSSAIChannelRequest.cpp
  src/v20200527/model/CreateStreamPackageSourceResponse.cpp
  src/v20200527/model/ProgramAlertInfos.cpp
  src/v20200527/model/DeleteStreamPackageSourceRequest.cpp
  src/v20200527/model/DescribeStreamPackageHarvestJobsResponse.cpp
  src/v20200527/model/DescribeStreamPackageSourceLocationAlertsRequest.cpp
  src/v20200527/model/UnbindCdnDomainWithChannelResponse.cpp
  src/v20200527/model/ModifyStreamPackageChannelEndpointRequest.cpp
  src/v20200527/model/SSAIChannelInfo.cpp
  src/v20200527/model/ModifyStreamPackageSourceLocationResponse.cpp
  src/v20200527/model/BindLinearAssemblyCDNDomainWithChannelResponse.cpp
  src/v20200527/model/DescribeStreamPackageChannelResponse.cpp
  src/v20200527/model/DescribeStreamPackageLinearAssemblyProgramsRequest.cpp
  src/v20200527/model/DomainRecordInfo.cpp
  src/v20200527/model/TimeShiftInfo.cpp
  src/v20200527/model/DescribeStreamPackageLinearAssemblyProgramSchedulesResponse.cpp
  src/v20200527/model/DescribeStreamPackageHarvestJobRequest.cpp
  src/v20200527/model/DescribeStreamPackageLinearAssemblyChannelsRequest.cpp
  src/v20200527/model/SourceAlert.cpp
  src/v20200527/model/DescribeStreamPackageSourcesResponse.cpp
  src/v20200527/model/SourceInfo.cpp
  src/v20200527/model/DescribeStreamPackageSourceLocationAlertsResponse.cpp
  src/v20200527/model/CreateStreamPackageLinearAssemblyChannelRequest.cpp
  src/v20200527/model/PlaybackInfoReq.cpp
  src/v20200527/model/DescribeStreamPackageHarvestJobResponse.cpp
  src/v20200527/model/DescribeStreamPackageLinearAssemblyChannelRequest.cpp
  src/v20200527/model/DeleteStreamPackageSSAIChannelRequest.cpp
  src/v20200527/model/ModifyStreamPackageChannelEndpointResponse.cpp
  src/v20200527/model/CreateStreamPackageSourceLocationRequest.cpp
  src/v20200527/model/DescribeStreamPackageHarvestJobsRequest.cpp
  src/v20200527/model/DeleteStreamPackageHarvestJobResponse.cpp
  src/v20200527/model/DeleteStreamPackageHarvestJobsRequest.cpp
  src/v20200527/model/CreateStreamPackageChannelEndpointResponse.cpp
  src/v20200527/model/DescribeLinearAssemblyCDNDomainWithChannelsRequest.cpp
  src/v20200527/model/PlaybackInfo.cpp
  src/v20200527/model/ChannelInfo.cpp
  src/v20200527/model/CacheInfo.cpp
  src/v20200527/model/DescribeStreamPackageSourceLocationRequest.cpp
  src/v20200527/model/UnbindCdnDomainWithChannelRequest.cpp
  src/v20200527/model/ModifyStreamPackageLinearAssemblyProgramRequest.cpp
  src/v20200527/model/HarvestJobResp.cpp
  src/v20200527/model/DescribeStreamPackageSourceLocationsRequest.cpp
  src/v20200527/model/DescribeStreamPackageSourceLocationResponse.cpp
  src/v20200527/model/EndpointInfo.cpp
  src/v20200527/model/ModifyStreamPackageSourceResponse.cpp
  src/v20200527/model/DeleteStreamPackageLinearAssemblyChannelRequest.cpp
  src/v20200527/model/ModifyStreamPackageChannelRequest.cpp
  src/v20200527/model/DescribeStreamPackageSSAIUsageResponse.cpp
  src/v20200527/model/CreateStreamPackageLinearAssemblyProgramRequest.cpp
  src/v20200527/model/SegmentDeliverInfo.cpp
  src/v20200527/model/DeleteStreamPackageLinearAssemblyChannelResponse.cpp
  src/v20200527/model/CreateStreamPackageChannelRequest.cpp
  src/v20200527/model/ModifyStreamPackageSourceRequest.cpp
  src/v20200527/model/InputAuthInfo.cpp
  src/v20200527/model/DescribeStreamPackageSSAIChannelResponse.cpp
  src/v20200527/model/DeleteStreamPackageHarvestJobsResponse.cpp
  src/v20200527/model/TimeSignalInfo.cpp
  src/v20200527/model/ModifyStreamPackageLinearAssemblyChannelRequest.cpp
  src/v20200527/model/DeleteStreamPackageSourceLocationResponse.cpp
  src/v20200527/model/CreateStreamPackageSourceRequest.cpp
  src/v20200527/model/DescribeStreamPackageLinearAssemblyProgramRequest.cpp
  src/v20200527/model/DescribeStreamPackageLinearAssemblyChannelAlertsRequest.cpp
  src/v20200527/model/UnbindLinearAssemblyCDNDomainWithChannelRequest.cpp
  src/v20200527/model/DescribeStreamPackageSourceLocationsResponse.cpp
  src/v20200527/model/StopStreamPackageLinearAssemblyChannelResponse.cpp
  src/v20200527/model/DescribeStreamPackageChannelsRequest.cpp
  src/v20200527/model/SSAIUsageInfo.cpp
  src/v20200527/model/ModifyStreamPackageChannelInputAuthInfoResponse.cpp
  src/v20200527/model/SlateInfo.cpp
  src/v20200527/model/UnbindLinearAssemblyCDNDomainWithChannelResponse.cpp
  src/v20200527/model/DashManifestInfo.cpp
  src/v20200527/model/CreateStreamPackageChannelResponse.cpp
  src/v20200527/model/DescribeStreamPackageLinearAssemblyChannelResponse.cpp
  src/v20200527/model/DescribeStreamPackageLinearAssemblyChannelAlertsResponse.cpp
  src/v20200527/model/BindLinearAssemblyCDNDomainWithChannelRequest.cpp
  src/v20200527/model/DeleteStreamPackageChannelEndpointsRequest.cpp
  src/v20200527/model/DeleteStreamPackageSSAIChannelResponse.cpp
  src/v20200527/model/StartStreamPackageLinearAssemblyChannelResponse.cpp
  src/v20200527/model/ModifyStreamPackageLinearAssemblyChannelResponse.cpp
  src/v20200527/model/DeleteStreamPackageSourceResponse.cpp
  src/v20200527/model/DescribeStreamPackageSourceRequest.cpp
  src/v20200527/model/DescribeStreamPackageChannelRequest.cpp
  src/v20200527/model/OutputInfo.cpp
  src/v20200527/model/CreateStreamPackageChannelEndpointRequest.cpp
  src/v20200527/model/DescribeStreamPackageSSAIChannelsRequest.cpp
  src/v20200527/model/ProgramAlertCounts.cpp
  src/v20200527/model/DeleteStreamPackageSourceLocationRequest.cpp
  src/v20200527/model/DescribeStreamPackageLinearAssemblyProgramResponse.cpp
  src/v20200527/model/DeleteStreamPackageLinearAssemblyChannelsResponse.cpp
  src/v20200527/model/BindNewLVBDomainWithChannelRequest.cpp
  src/v20200527/model/DescribeLinearAssemblyCDNDomainWithChannelRequest.cpp
  src/v20200527/model/ModifyStreamPackageChannelResponse.cpp
  src/v20200527/model/CreateStreamPackageSourceLocationResponse.cpp
  src/v20200527/model/StopStreamPackageLinearAssemblyChannelRequest.cpp
  src/v20200527/model/DescribeStreamPackageLinearAssemblyProgramSchedulesRequest.cpp
  src/v20200527/model/DeleteStreamPackageLinearAssemblyProgramsRequest.cpp
  src/v20200527/model/DeleteStreamPackageChannelEndpointsResponse.cpp
  src/v20200527/model/CreateStreamPackageHarvestJobRequest.cpp
  src/v20200527/model/DescribeStreamPackageSSAIUsageRequest.cpp
  src/v20200527/model/DescribeStreamPackageSourceAlertsResponse.cpp
  src/v20200527/model/DeleteStreamPackageLinearAssemblyProgramRequest.cpp
  src/v20200527/model/DeleteStreamPackageChannelsResponse.cpp
  src/v20200527/model/ProgramScheduleInfo.cpp
  src/v20200527/model/DeleteStreamPackageLinearAssemblyProgramsResponse.cpp
  src/v20200527/model/SpliceInsertInfo.cpp
  src/v20200527/model/CreateStreamPackageLinearAssemblyProgramResponse.cpp
  src/v20200527/model/DescribeStreamPackageChannelsResponse.cpp
  src/v20200527/model/DescribeStreamPackageSourceResponse.cpp
  src/v20200527/model/DeleteStreamPackageLinearAssemblyProgramResponse.cpp
  src/v20200527/model/CreateStreamPackageSSAIChannelResponse.cpp
  src/v20200527/model/ModifyStreamPackageSourceLocationRequest.cpp
  src/v20200527/model/CreateStreamPackageHarvestJobResponse.cpp
  src/v20200527/model/EndpointAuthInfo.cpp
  src/v20200527/model/SourceLocationInfo.cpp
  src/v20200527/model/SSAIConf.cpp
  src/v20200527/model/LinearAssemblyProgramInfo.cpp
  src/v20200527/model/DescribeStreamPackageSourcesRequest.cpp
  src/v20200527/model/CreateStreamPackageLinearAssemblyChannelResponse.cpp
  src/v20200527/model/LinearAssemblyChannelInfo.cpp
  src/v20200527/model/UsageDetail.cpp
  src/v20200527/model/DescribeStreamPackageSSAIChannelsResponse.cpp
  src/v20200527/model/OutputReq.cpp
  src/v20200527/model/CacheInfoInfo.cpp
  src/v20200527/model/DescribeStreamPackageLinearAssemblyChannelsResponse.cpp
  src/v20200527/model/DeleteStreamPackageHarvestJobRequest.cpp
  src/v20200527/model/NameServer.cpp
  src/v20200527/model/ConfigAliasesInfo.cpp
  src/v20200527/model/ManifestInfo.cpp
  src/v20200527/model/DescribeLinearAssemblyCDNDomainWithChannelsResponse.cpp
  )

set(mdp_include
    include/tencentcloud/mdp
  )

add_library(mdp ${LIB_TYPE}
  ${mdp_public_header}
  ${mdp_public_header_model}
  ${mdp_src})

set_target_properties(mdp
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}mdp
  )

target_include_directories(mdp
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(mdp
  core)

#install(FILES ${mdp_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mdp/v20200527)
#install(FILES ${mdp_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/mdp/v20200527/model)
install(DIRECTORY ${mdp_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS mdp
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
