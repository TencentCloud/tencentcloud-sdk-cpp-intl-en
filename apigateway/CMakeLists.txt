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

set(apigateway_public_header
  include/tencentcloud/apigateway/v20180808/ApigatewayClient.h
  )

set(apigateway_public_header_model
  include/tencentcloud/apigateway/v20180808/model/IPStrategyApiStatus.h
  include/tencentcloud/apigateway/v20180808/model/UnBindSubDomainResponse.h
  include/tencentcloud/apigateway/v20180808/model/UpstreamInfo.h
  include/tencentcloud/apigateway/v20180808/model/UpdateApiKeyRequest.h
  include/tencentcloud/apigateway/v20180808/model/Service.h
  include/tencentcloud/apigateway/v20180808/model/DeleteAPIDocRequest.h
  include/tencentcloud/apigateway/v20180808/model/AttachedPluginInfo.h
  include/tencentcloud/apigateway/v20180808/model/ApiUsagePlanSet.h
  include/tencentcloud/apigateway/v20180808/model/DescribeAPIDocDetailRequest.h
  include/tencentcloud/apigateway/v20180808/model/CreateApiResultInfo.h
  include/tencentcloud/apigateway/v20180808/model/ModifyAPIDocResponse.h
  include/tencentcloud/apigateway/v20180808/model/AttachedApiSummary.h
  include/tencentcloud/apigateway/v20180808/model/DescribeUsagePlanRequest.h
  include/tencentcloud/apigateway/v20180808/model/DeleteUsagePlanResponse.h
  include/tencentcloud/apigateway/v20180808/model/ImportOpenApiResponse.h
  include/tencentcloud/apigateway/v20180808/model/DisableApiKeyResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceForApiAppRequest.h
  include/tencentcloud/apigateway/v20180808/model/UnReleaseServiceRequest.h
  include/tencentcloud/apigateway/v20180808/model/DetachPluginRequest.h
  include/tencentcloud/apigateway/v20180808/model/ModifySubDomainRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiAppsStatusRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceUsagePlanRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentListResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiAppBindApisStatusRequest.h
  include/tencentcloud/apigateway/v20180808/model/ModifyApiResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiResultServiceParametersInfo.h
  include/tencentcloud/apigateway/v20180808/model/CreateApiRspSet.h
  include/tencentcloud/apigateway/v20180808/model/ApiInfo.h
  include/tencentcloud/apigateway/v20180808/model/TargetServicesReq.h
  include/tencentcloud/apigateway/v20180808/model/DescribeUsagePlansStatusRequest.h
  include/tencentcloud/apigateway/v20180808/model/TsfLoadBalanceConfResp.h
  include/tencentcloud/apigateway/v20180808/model/CreateIPStrategyRequest.h
  include/tencentcloud/apigateway/v20180808/model/IPStrategy.h
  include/tencentcloud/apigateway/v20180808/model/DescribeUsagePlansStatusResponse.h
  include/tencentcloud/apigateway/v20180808/model/HealthCheckConf.h
  include/tencentcloud/apigateway/v20180808/model/DeleteUpstreamRequest.h
  include/tencentcloud/apigateway/v20180808/model/Plugin.h
  include/tencentcloud/apigateway/v20180808/model/UnbindApiAppResponse.h
  include/tencentcloud/apigateway/v20180808/model/ModifyUpstreamRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiUsagePlanResponse.h
  include/tencentcloud/apigateway/v20180808/model/DeleteIPStrategyRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiAppRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribePluginResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeUpstreamBindApisRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribePluginsByApiResponse.h
  include/tencentcloud/apigateway/v20180808/model/DomainSets.h
  include/tencentcloud/apigateway/v20180808/model/K8sService.h
  include/tencentcloud/apigateway/v20180808/model/DeleteUsagePlanRequest.h
  include/tencentcloud/apigateway/v20180808/model/DeleteServiceRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiEnvironmentStrategyRequest.h
  include/tencentcloud/apigateway/v20180808/model/UpstreamHealthCheckerReqHeaders.h
  include/tencentcloud/apigateway/v20180808/model/ServiceEnvironmentStrategy.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceForApiAppResponse.h
  include/tencentcloud/apigateway/v20180808/model/ServiceConfig.h
  include/tencentcloud/apigateway/v20180808/model/DeleteApiAppResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceResponse.h
  include/tencentcloud/apigateway/v20180808/model/UsagePlanEnvironmentStatus.h
  include/tencentcloud/apigateway/v20180808/model/ModifyIPStrategyResponse.h
  include/tencentcloud/apigateway/v20180808/model/BindSubDomainResponse.h
  include/tencentcloud/apigateway/v20180808/model/BindEnvironmentResponse.h
  include/tencentcloud/apigateway/v20180808/model/Tag.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiBindApiAppsStatusResponse.h
  include/tencentcloud/apigateway/v20180808/model/ConstantParameter.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiForApiAppRequest.h
  include/tencentcloud/apigateway/v20180808/model/APIDocs.h
  include/tencentcloud/apigateway/v20180808/model/LogQuery.h
  include/tencentcloud/apigateway/v20180808/model/ServiceParameter.h
  include/tencentcloud/apigateway/v20180808/model/ModifyServiceResponse.h
  include/tencentcloud/apigateway/v20180808/model/DisableApiKeyRequest.h
  include/tencentcloud/apigateway/v20180808/model/PathMapping.h
  include/tencentcloud/apigateway/v20180808/model/UnBindIPStrategyResponse.h
  include/tencentcloud/apigateway/v20180808/model/ModifyPluginRequest.h
  include/tencentcloud/apigateway/v20180808/model/BindIPStrategyResponse.h
  include/tencentcloud/apigateway/v20180808/model/AvailableApiInfo.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApisStatusRequest.h
  include/tencentcloud/apigateway/v20180808/model/DeleteServiceSubDomainMappingRequest.h
  include/tencentcloud/apigateway/v20180808/model/BindApiAppRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeIPStrategyResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribePluginRequest.h
  include/tencentcloud/apigateway/v20180808/model/AttachedApiInfo.h
  include/tencentcloud/apigateway/v20180808/model/CreateApiResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeIPStrategyApisStatusRequest.h
  include/tencentcloud/apigateway/v20180808/model/UnBindEnvironmentRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeUpstreamInfo.h
  include/tencentcloud/apigateway/v20180808/model/ModifyApiEnvironmentStrategyRequest.h
  include/tencentcloud/apigateway/v20180808/model/ServiceReleaseHistory.h
  include/tencentcloud/apigateway/v20180808/model/DescribeUpstreamBindApisResponse.h
  include/tencentcloud/apigateway/v20180808/model/IPStrategiesStatus.h
  include/tencentcloud/apigateway/v20180808/model/CreateUsagePlanResponse.h
  include/tencentcloud/apigateway/v20180808/model/ReqParameter.h
  include/tencentcloud/apigateway/v20180808/model/DeletePluginRequest.h
  include/tencentcloud/apigateway/v20180808/model/Base64EncodedTriggerRule.h
  include/tencentcloud/apigateway/v20180808/model/RequestConfig.h
  include/tencentcloud/apigateway/v20180808/model/DeleteApiKeyResponse.h
  include/tencentcloud/apigateway/v20180808/model/EnvironmentStrategy.h
  include/tencentcloud/apigateway/v20180808/model/UsagePlan.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceReleaseVersionRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeUsagePlanSecretIdsRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeLogSearchResponse.h
  include/tencentcloud/apigateway/v20180808/model/ModifyAPIDocRequest.h
  include/tencentcloud/apigateway/v20180808/model/UnBindIPStrategyRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeUpstreamsResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribePluginApisRequest.h
  include/tencentcloud/apigateway/v20180808/model/ResponseErrorCodeReq.h
  include/tencentcloud/apigateway/v20180808/model/CreateServiceRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeIPStrategysStatusRequest.h
  include/tencentcloud/apigateway/v20180808/model/DemoteServiceUsagePlanResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribePluginApisResponse.h
  include/tencentcloud/apigateway/v20180808/model/EnableApiKeyResponse.h
  include/tencentcloud/apigateway/v20180808/model/DeleteApiAppRequest.h
  include/tencentcloud/apigateway/v20180808/model/UnReleaseServiceResponse.h
  include/tencentcloud/apigateway/v20180808/model/CreateAPIDocResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceRequest.h
  include/tencentcloud/apigateway/v20180808/model/UsagePlansStatus.h
  include/tencentcloud/apigateway/v20180808/model/CreateUsagePlanRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeUsagePlanSecretIdsResponse.h
  include/tencentcloud/apigateway/v20180808/model/CreatePluginRequest.h
  include/tencentcloud/apigateway/v20180808/model/MicroServiceReq.h
  include/tencentcloud/apigateway/v20180808/model/ModifySubDomainResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeExclusiveInstanceRegionsResponse.h
  include/tencentcloud/apigateway/v20180808/model/BindSecretIdsRequest.h
  include/tencentcloud/apigateway/v20180808/model/UnBindEnvironmentResponse.h
  include/tencentcloud/apigateway/v20180808/model/ModifyUpstreamResultInfo.h
  include/tencentcloud/apigateway/v20180808/model/DeleteApiKeyRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApisStatusResultInfo.h
  include/tencentcloud/apigateway/v20180808/model/DescribeIPStrategyApisStatusResponse.h
  include/tencentcloud/apigateway/v20180808/model/ModifyApiAppResponse.h
  include/tencentcloud/apigateway/v20180808/model/UpdateApiAppKeyRequest.h
  include/tencentcloud/apigateway/v20180808/model/ApigatewayTags.h
  include/tencentcloud/apigateway/v20180808/model/DomainSetList.h
  include/tencentcloud/apigateway/v20180808/model/ServicesStatus.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiKeyResponse.h
  include/tencentcloud/apigateway/v20180808/model/ModifyApiIncrementResponse.h
  include/tencentcloud/apigateway/v20180808/model/ModifyApiRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeAllPluginApisResponse.h
  include/tencentcloud/apigateway/v20180808/model/ModifyUsagePlanRequest.h
  include/tencentcloud/apigateway/v20180808/model/ApiRequestConfig.h
  include/tencentcloud/apigateway/v20180808/model/ModifyServiceRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeAllPluginApisRequest.h
  include/tencentcloud/apigateway/v20180808/model/ApiIdStatus.h
  include/tencentcloud/apigateway/v20180808/model/CreateApiRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentStrategyRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeInstancesNetworkConfigResponse.h
  include/tencentcloud/apigateway/v20180808/model/ReleaseServiceRequest.h
  include/tencentcloud/apigateway/v20180808/model/DeleteServiceResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentReleaseHistoryResponse.h
  include/tencentcloud/apigateway/v20180808/model/Environment.h
  include/tencentcloud/apigateway/v20180808/model/DescribeAPIDocsRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribePluginsByApiRequest.h
  include/tencentcloud/apigateway/v20180808/model/ServiceReleaseHistoryInfo.h
  include/tencentcloud/apigateway/v20180808/model/CreatePluginResponse.h
  include/tencentcloud/apigateway/v20180808/model/UsagePlanBindSecret.h
  include/tencentcloud/apigateway/v20180808/model/K8sLabel.h
  include/tencentcloud/apigateway/v20180808/model/ReleaseServiceResponse.h
  include/tencentcloud/apigateway/v20180808/model/APIDocInfo.h
  include/tencentcloud/apigateway/v20180808/model/CosConfig.h
  include/tencentcloud/apigateway/v20180808/model/ModifyApiIncrementRequest.h
  include/tencentcloud/apigateway/v20180808/model/ServiceUsagePlanSet.h
  include/tencentcloud/apigateway/v20180808/model/CreateUpstreamRequest.h
  include/tencentcloud/apigateway/v20180808/model/ModifyServiceEnvironmentStrategyResponse.h
  include/tencentcloud/apigateway/v20180808/model/UpdateApiKeyResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiBindApiAppsStatusRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApisStatusResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiKeysStatusRequest.h
  include/tencentcloud/apigateway/v20180808/model/DemoteServiceUsagePlanRequest.h
  include/tencentcloud/apigateway/v20180808/model/BindSecretIdsResponse.h
  include/tencentcloud/apigateway/v20180808/model/CreateApiRsp.h
  include/tencentcloud/apigateway/v20180808/model/UsagePlanBindEnvironment.h
  include/tencentcloud/apigateway/v20180808/model/DeleteApiRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeExclusiveInstanceRegionsRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiAppResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceSubDomainMappingsResponse.h
  include/tencentcloud/apigateway/v20180808/model/OauthConfig.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiAppsStatusResponse.h
  include/tencentcloud/apigateway/v20180808/model/ServiceSubDomainMappings.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiKeyRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeAPIDocDetailResponse.h
  include/tencentcloud/apigateway/v20180808/model/Filter.h
  include/tencentcloud/apigateway/v20180808/model/BindApiAppResponse.h
  include/tencentcloud/apigateway/v20180808/model/UsagePlanBindSecretStatus.h
  include/tencentcloud/apigateway/v20180808/model/DeleteServiceSubDomainMappingResponse.h
  include/tencentcloud/apigateway/v20180808/model/CreateApiKeyResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeUpstreamsRequest.h
  include/tencentcloud/apigateway/v20180808/model/UsagePlanEnvironment.h
  include/tencentcloud/apigateway/v20180808/model/ModifyIPStrategyRequest.h
  include/tencentcloud/apigateway/v20180808/model/ModifyPluginResponse.h
  include/tencentcloud/apigateway/v20180808/model/UnBindSecretIdsRequest.h
  include/tencentcloud/apigateway/v20180808/model/ApiEnvironmentStrategy.h
  include/tencentcloud/apigateway/v20180808/model/CreateUpstreamResponse.h
  include/tencentcloud/apigateway/v20180808/model/ResetAPIDocPasswordRequest.h
  include/tencentcloud/apigateway/v20180808/model/ApiUsagePlan.h
  include/tencentcloud/apigateway/v20180808/model/IPStrategyApi.h
  include/tencentcloud/apigateway/v20180808/model/DescribeAPIDocsResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceSubDomainMappingsRequest.h
  include/tencentcloud/apigateway/v20180808/model/DeletePluginResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeUpstreamBindApis.h
  include/tencentcloud/apigateway/v20180808/model/ModifyServiceEnvironmentStrategyRequest.h
  include/tencentcloud/apigateway/v20180808/model/CreateAPIDocRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiAppBindApisStatusResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceSubDomainsRequest.h
  include/tencentcloud/apigateway/v20180808/model/ModifyApiAppRequest.h
  include/tencentcloud/apigateway/v20180808/model/ReleaseService.h
  include/tencentcloud/apigateway/v20180808/model/DescribeUsagePlanEnvironmentsResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceSubDomainsResponse.h
  include/tencentcloud/apigateway/v20180808/model/AttachPluginRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApisStatusResultApiIdStatusSetInfo.h
  include/tencentcloud/apigateway/v20180808/model/ModifyApiEnvironmentStrategyResponse.h
  include/tencentcloud/apigateway/v20180808/model/BindSubDomainRequest.h
  include/tencentcloud/apigateway/v20180808/model/ApiAppInfos.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceReleaseVersionResultVersionListInfo.h
  include/tencentcloud/apigateway/v20180808/model/CreateIPStrategyResponse.h
  include/tencentcloud/apigateway/v20180808/model/DeleteApiResponse.h
  include/tencentcloud/apigateway/v20180808/model/BindIPStrategyRequest.h
  include/tencentcloud/apigateway/v20180808/model/UpdateServiceRequest.h
  include/tencentcloud/apigateway/v20180808/model/BuildAPIDocResponse.h
  include/tencentcloud/apigateway/v20180808/model/ErrorCodes.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentListRequest.h
  include/tencentcloud/apigateway/v20180808/model/ServiceEnvironmentStrategyStatus.h
  include/tencentcloud/apigateway/v20180808/model/MicroService.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiEnvironmentStrategyResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiRequest.h
  include/tencentcloud/apigateway/v20180808/model/ApiAppInfo.h
  include/tencentcloud/apigateway/v20180808/model/DeleteIPStrategyResponse.h
  include/tencentcloud/apigateway/v20180808/model/ApiInfoSummary.h
  include/tencentcloud/apigateway/v20180808/model/ApiKey.h
  include/tencentcloud/apigateway/v20180808/model/BindApiInfo.h
  include/tencentcloud/apigateway/v20180808/model/ApiAppApiInfo.h
  include/tencentcloud/apigateway/v20180808/model/DescribeUsagePlanResponse.h
  include/tencentcloud/apigateway/v20180808/model/ApiEnvironmentStrategyStatus.h
  include/tencentcloud/apigateway/v20180808/model/AttachPluginResponse.h
  include/tencentcloud/apigateway/v20180808/model/BindEnvironmentRequest.h
  include/tencentcloud/apigateway/v20180808/model/ModifyUpstreamResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeIPStrategyRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiForApiAppResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeInstancesNetworkConfigRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeUsagePlanEnvironmentsRequest.h
  include/tencentcloud/apigateway/v20180808/model/ImportOpenApiRequest.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceReleaseVersionResponse.h
  include/tencentcloud/apigateway/v20180808/model/UpstreamNode.h
  include/tencentcloud/apigateway/v20180808/model/ApiAppApiInfos.h
  include/tencentcloud/apigateway/v20180808/model/DeleteUpstreamResponse.h
  include/tencentcloud/apigateway/v20180808/model/UpdateServiceResponse.h
  include/tencentcloud/apigateway/v20180808/model/UsagePlanInfo.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentReleaseHistoryRequest.h
  include/tencentcloud/apigateway/v20180808/model/UnbindApiAppRequest.h
  include/tencentcloud/apigateway/v20180808/model/CreateServiceResponse.h
  include/tencentcloud/apigateway/v20180808/model/DeleteAPIDocResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentStrategyResponse.h
  include/tencentcloud/apigateway/v20180808/model/DesApisStatus.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiKeysStatusResponse.h
  include/tencentcloud/apigateway/v20180808/model/UsagePlanStatusInfo.h
  include/tencentcloud/apigateway/v20180808/model/DescribeLogSearchRequest.h
  include/tencentcloud/apigateway/v20180808/model/BuildAPIDocRequest.h
  include/tencentcloud/apigateway/v20180808/model/DetachPluginResponse.h
  include/tencentcloud/apigateway/v20180808/model/ApiKeysStatus.h
  include/tencentcloud/apigateway/v20180808/model/ModifyUsagePlanResponse.h
  include/tencentcloud/apigateway/v20180808/model/APIDoc.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServiceUsagePlanResponse.h
  include/tencentcloud/apigateway/v20180808/model/CreateApiAppResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeApiUsagePlanRequest.h
  include/tencentcloud/apigateway/v20180808/model/UnBindSubDomainRequest.h
  include/tencentcloud/apigateway/v20180808/model/AttachedPluginSummary.h
  include/tencentcloud/apigateway/v20180808/model/DescribeIPStrategysStatusResponse.h
  include/tencentcloud/apigateway/v20180808/model/UpdateApiAppKeyResponse.h
  include/tencentcloud/apigateway/v20180808/model/UnBindSecretIdsResponse.h
  include/tencentcloud/apigateway/v20180808/model/CreateApiAppRequest.h
  include/tencentcloud/apigateway/v20180808/model/EnableApiKeyRequest.h
  include/tencentcloud/apigateway/v20180808/model/ResetAPIDocPasswordResponse.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServicesStatusRequest.h
  include/tencentcloud/apigateway/v20180808/model/RequestParameter.h
  include/tencentcloud/apigateway/v20180808/model/UpstreamHealthChecker.h
  include/tencentcloud/apigateway/v20180808/model/ServiceEnvironmentSet.h
  include/tencentcloud/apigateway/v20180808/model/ServiceReleaseVersion.h
  include/tencentcloud/apigateway/v20180808/model/DescribeServicesStatusResponse.h
  include/tencentcloud/apigateway/v20180808/model/CreateApiKeyRequest.h
  )

set(apigateway_src
  src/v20180808/ApigatewayClient.cpp
  src/v20180808/model/IPStrategyApiStatus.cpp
  src/v20180808/model/UnBindSubDomainResponse.cpp
  src/v20180808/model/UpstreamInfo.cpp
  src/v20180808/model/UpdateApiKeyRequest.cpp
  src/v20180808/model/Service.cpp
  src/v20180808/model/DeleteAPIDocRequest.cpp
  src/v20180808/model/AttachedPluginInfo.cpp
  src/v20180808/model/ApiUsagePlanSet.cpp
  src/v20180808/model/DescribeAPIDocDetailRequest.cpp
  src/v20180808/model/CreateApiResultInfo.cpp
  src/v20180808/model/ModifyAPIDocResponse.cpp
  src/v20180808/model/AttachedApiSummary.cpp
  src/v20180808/model/DescribeUsagePlanRequest.cpp
  src/v20180808/model/DeleteUsagePlanResponse.cpp
  src/v20180808/model/ImportOpenApiResponse.cpp
  src/v20180808/model/DisableApiKeyResponse.cpp
  src/v20180808/model/DescribeApiResponse.cpp
  src/v20180808/model/DescribeServiceForApiAppRequest.cpp
  src/v20180808/model/UnReleaseServiceRequest.cpp
  src/v20180808/model/DetachPluginRequest.cpp
  src/v20180808/model/ModifySubDomainRequest.cpp
  src/v20180808/model/DescribeApiAppsStatusRequest.cpp
  src/v20180808/model/DescribeServiceUsagePlanRequest.cpp
  src/v20180808/model/DescribeServiceEnvironmentListResponse.cpp
  src/v20180808/model/DescribeApiAppBindApisStatusRequest.cpp
  src/v20180808/model/ModifyApiResponse.cpp
  src/v20180808/model/DescribeApiResultServiceParametersInfo.cpp
  src/v20180808/model/CreateApiRspSet.cpp
  src/v20180808/model/ApiInfo.cpp
  src/v20180808/model/TargetServicesReq.cpp
  src/v20180808/model/DescribeUsagePlansStatusRequest.cpp
  src/v20180808/model/TsfLoadBalanceConfResp.cpp
  src/v20180808/model/CreateIPStrategyRequest.cpp
  src/v20180808/model/IPStrategy.cpp
  src/v20180808/model/DescribeUsagePlansStatusResponse.cpp
  src/v20180808/model/HealthCheckConf.cpp
  src/v20180808/model/DeleteUpstreamRequest.cpp
  src/v20180808/model/Plugin.cpp
  src/v20180808/model/UnbindApiAppResponse.cpp
  src/v20180808/model/ModifyUpstreamRequest.cpp
  src/v20180808/model/DescribeApiUsagePlanResponse.cpp
  src/v20180808/model/DeleteIPStrategyRequest.cpp
  src/v20180808/model/DescribeApiAppRequest.cpp
  src/v20180808/model/DescribePluginResponse.cpp
  src/v20180808/model/DescribeUpstreamBindApisRequest.cpp
  src/v20180808/model/DescribePluginsByApiResponse.cpp
  src/v20180808/model/DomainSets.cpp
  src/v20180808/model/K8sService.cpp
  src/v20180808/model/DeleteUsagePlanRequest.cpp
  src/v20180808/model/DeleteServiceRequest.cpp
  src/v20180808/model/DescribeApiEnvironmentStrategyRequest.cpp
  src/v20180808/model/UpstreamHealthCheckerReqHeaders.cpp
  src/v20180808/model/ServiceEnvironmentStrategy.cpp
  src/v20180808/model/DescribeServiceForApiAppResponse.cpp
  src/v20180808/model/ServiceConfig.cpp
  src/v20180808/model/DeleteApiAppResponse.cpp
  src/v20180808/model/DescribeServiceResponse.cpp
  src/v20180808/model/UsagePlanEnvironmentStatus.cpp
  src/v20180808/model/ModifyIPStrategyResponse.cpp
  src/v20180808/model/BindSubDomainResponse.cpp
  src/v20180808/model/BindEnvironmentResponse.cpp
  src/v20180808/model/Tag.cpp
  src/v20180808/model/DescribeApiBindApiAppsStatusResponse.cpp
  src/v20180808/model/ConstantParameter.cpp
  src/v20180808/model/DescribeApiForApiAppRequest.cpp
  src/v20180808/model/APIDocs.cpp
  src/v20180808/model/LogQuery.cpp
  src/v20180808/model/ServiceParameter.cpp
  src/v20180808/model/ModifyServiceResponse.cpp
  src/v20180808/model/DisableApiKeyRequest.cpp
  src/v20180808/model/PathMapping.cpp
  src/v20180808/model/UnBindIPStrategyResponse.cpp
  src/v20180808/model/ModifyPluginRequest.cpp
  src/v20180808/model/BindIPStrategyResponse.cpp
  src/v20180808/model/AvailableApiInfo.cpp
  src/v20180808/model/DescribeApisStatusRequest.cpp
  src/v20180808/model/DeleteServiceSubDomainMappingRequest.cpp
  src/v20180808/model/BindApiAppRequest.cpp
  src/v20180808/model/DescribeIPStrategyResponse.cpp
  src/v20180808/model/DescribePluginRequest.cpp
  src/v20180808/model/AttachedApiInfo.cpp
  src/v20180808/model/CreateApiResponse.cpp
  src/v20180808/model/DescribeIPStrategyApisStatusRequest.cpp
  src/v20180808/model/UnBindEnvironmentRequest.cpp
  src/v20180808/model/DescribeUpstreamInfo.cpp
  src/v20180808/model/ModifyApiEnvironmentStrategyRequest.cpp
  src/v20180808/model/ServiceReleaseHistory.cpp
  src/v20180808/model/DescribeUpstreamBindApisResponse.cpp
  src/v20180808/model/IPStrategiesStatus.cpp
  src/v20180808/model/CreateUsagePlanResponse.cpp
  src/v20180808/model/ReqParameter.cpp
  src/v20180808/model/DeletePluginRequest.cpp
  src/v20180808/model/Base64EncodedTriggerRule.cpp
  src/v20180808/model/RequestConfig.cpp
  src/v20180808/model/DeleteApiKeyResponse.cpp
  src/v20180808/model/EnvironmentStrategy.cpp
  src/v20180808/model/UsagePlan.cpp
  src/v20180808/model/DescribeServiceReleaseVersionRequest.cpp
  src/v20180808/model/DescribeUsagePlanSecretIdsRequest.cpp
  src/v20180808/model/DescribeLogSearchResponse.cpp
  src/v20180808/model/ModifyAPIDocRequest.cpp
  src/v20180808/model/UnBindIPStrategyRequest.cpp
  src/v20180808/model/DescribeUpstreamsResponse.cpp
  src/v20180808/model/DescribePluginApisRequest.cpp
  src/v20180808/model/ResponseErrorCodeReq.cpp
  src/v20180808/model/CreateServiceRequest.cpp
  src/v20180808/model/DescribeIPStrategysStatusRequest.cpp
  src/v20180808/model/DemoteServiceUsagePlanResponse.cpp
  src/v20180808/model/DescribePluginApisResponse.cpp
  src/v20180808/model/EnableApiKeyResponse.cpp
  src/v20180808/model/DeleteApiAppRequest.cpp
  src/v20180808/model/UnReleaseServiceResponse.cpp
  src/v20180808/model/CreateAPIDocResponse.cpp
  src/v20180808/model/DescribeServiceRequest.cpp
  src/v20180808/model/UsagePlansStatus.cpp
  src/v20180808/model/CreateUsagePlanRequest.cpp
  src/v20180808/model/DescribeUsagePlanSecretIdsResponse.cpp
  src/v20180808/model/CreatePluginRequest.cpp
  src/v20180808/model/MicroServiceReq.cpp
  src/v20180808/model/ModifySubDomainResponse.cpp
  src/v20180808/model/DescribeExclusiveInstanceRegionsResponse.cpp
  src/v20180808/model/BindSecretIdsRequest.cpp
  src/v20180808/model/UnBindEnvironmentResponse.cpp
  src/v20180808/model/ModifyUpstreamResultInfo.cpp
  src/v20180808/model/DeleteApiKeyRequest.cpp
  src/v20180808/model/DescribeApisStatusResultInfo.cpp
  src/v20180808/model/DescribeIPStrategyApisStatusResponse.cpp
  src/v20180808/model/ModifyApiAppResponse.cpp
  src/v20180808/model/UpdateApiAppKeyRequest.cpp
  src/v20180808/model/ApigatewayTags.cpp
  src/v20180808/model/DomainSetList.cpp
  src/v20180808/model/ServicesStatus.cpp
  src/v20180808/model/DescribeApiKeyResponse.cpp
  src/v20180808/model/ModifyApiIncrementResponse.cpp
  src/v20180808/model/ModifyApiRequest.cpp
  src/v20180808/model/DescribeAllPluginApisResponse.cpp
  src/v20180808/model/ModifyUsagePlanRequest.cpp
  src/v20180808/model/ApiRequestConfig.cpp
  src/v20180808/model/ModifyServiceRequest.cpp
  src/v20180808/model/DescribeAllPluginApisRequest.cpp
  src/v20180808/model/ApiIdStatus.cpp
  src/v20180808/model/CreateApiRequest.cpp
  src/v20180808/model/DescribeServiceEnvironmentStrategyRequest.cpp
  src/v20180808/model/DescribeInstancesNetworkConfigResponse.cpp
  src/v20180808/model/ReleaseServiceRequest.cpp
  src/v20180808/model/DeleteServiceResponse.cpp
  src/v20180808/model/DescribeServiceEnvironmentReleaseHistoryResponse.cpp
  src/v20180808/model/Environment.cpp
  src/v20180808/model/DescribeAPIDocsRequest.cpp
  src/v20180808/model/DescribePluginsByApiRequest.cpp
  src/v20180808/model/ServiceReleaseHistoryInfo.cpp
  src/v20180808/model/CreatePluginResponse.cpp
  src/v20180808/model/UsagePlanBindSecret.cpp
  src/v20180808/model/K8sLabel.cpp
  src/v20180808/model/ReleaseServiceResponse.cpp
  src/v20180808/model/APIDocInfo.cpp
  src/v20180808/model/CosConfig.cpp
  src/v20180808/model/ModifyApiIncrementRequest.cpp
  src/v20180808/model/ServiceUsagePlanSet.cpp
  src/v20180808/model/CreateUpstreamRequest.cpp
  src/v20180808/model/ModifyServiceEnvironmentStrategyResponse.cpp
  src/v20180808/model/UpdateApiKeyResponse.cpp
  src/v20180808/model/DescribeApiBindApiAppsStatusRequest.cpp
  src/v20180808/model/DescribeApisStatusResponse.cpp
  src/v20180808/model/DescribeApiKeysStatusRequest.cpp
  src/v20180808/model/DemoteServiceUsagePlanRequest.cpp
  src/v20180808/model/BindSecretIdsResponse.cpp
  src/v20180808/model/CreateApiRsp.cpp
  src/v20180808/model/UsagePlanBindEnvironment.cpp
  src/v20180808/model/DeleteApiRequest.cpp
  src/v20180808/model/DescribeExclusiveInstanceRegionsRequest.cpp
  src/v20180808/model/DescribeApiAppResponse.cpp
  src/v20180808/model/DescribeServiceSubDomainMappingsResponse.cpp
  src/v20180808/model/OauthConfig.cpp
  src/v20180808/model/DescribeApiAppsStatusResponse.cpp
  src/v20180808/model/ServiceSubDomainMappings.cpp
  src/v20180808/model/DescribeApiKeyRequest.cpp
  src/v20180808/model/DescribeAPIDocDetailResponse.cpp
  src/v20180808/model/Filter.cpp
  src/v20180808/model/BindApiAppResponse.cpp
  src/v20180808/model/UsagePlanBindSecretStatus.cpp
  src/v20180808/model/DeleteServiceSubDomainMappingResponse.cpp
  src/v20180808/model/CreateApiKeyResponse.cpp
  src/v20180808/model/DescribeUpstreamsRequest.cpp
  src/v20180808/model/UsagePlanEnvironment.cpp
  src/v20180808/model/ModifyIPStrategyRequest.cpp
  src/v20180808/model/ModifyPluginResponse.cpp
  src/v20180808/model/UnBindSecretIdsRequest.cpp
  src/v20180808/model/ApiEnvironmentStrategy.cpp
  src/v20180808/model/CreateUpstreamResponse.cpp
  src/v20180808/model/ResetAPIDocPasswordRequest.cpp
  src/v20180808/model/ApiUsagePlan.cpp
  src/v20180808/model/IPStrategyApi.cpp
  src/v20180808/model/DescribeAPIDocsResponse.cpp
  src/v20180808/model/DescribeServiceSubDomainMappingsRequest.cpp
  src/v20180808/model/DeletePluginResponse.cpp
  src/v20180808/model/DescribeUpstreamBindApis.cpp
  src/v20180808/model/ModifyServiceEnvironmentStrategyRequest.cpp
  src/v20180808/model/CreateAPIDocRequest.cpp
  src/v20180808/model/DescribeApiAppBindApisStatusResponse.cpp
  src/v20180808/model/DescribeServiceSubDomainsRequest.cpp
  src/v20180808/model/ModifyApiAppRequest.cpp
  src/v20180808/model/ReleaseService.cpp
  src/v20180808/model/DescribeUsagePlanEnvironmentsResponse.cpp
  src/v20180808/model/DescribeServiceSubDomainsResponse.cpp
  src/v20180808/model/AttachPluginRequest.cpp
  src/v20180808/model/DescribeApisStatusResultApiIdStatusSetInfo.cpp
  src/v20180808/model/ModifyApiEnvironmentStrategyResponse.cpp
  src/v20180808/model/BindSubDomainRequest.cpp
  src/v20180808/model/ApiAppInfos.cpp
  src/v20180808/model/DescribeServiceReleaseVersionResultVersionListInfo.cpp
  src/v20180808/model/CreateIPStrategyResponse.cpp
  src/v20180808/model/DeleteApiResponse.cpp
  src/v20180808/model/BindIPStrategyRequest.cpp
  src/v20180808/model/UpdateServiceRequest.cpp
  src/v20180808/model/BuildAPIDocResponse.cpp
  src/v20180808/model/ErrorCodes.cpp
  src/v20180808/model/DescribeServiceEnvironmentListRequest.cpp
  src/v20180808/model/ServiceEnvironmentStrategyStatus.cpp
  src/v20180808/model/MicroService.cpp
  src/v20180808/model/DescribeApiEnvironmentStrategyResponse.cpp
  src/v20180808/model/DescribeApiRequest.cpp
  src/v20180808/model/ApiAppInfo.cpp
  src/v20180808/model/DeleteIPStrategyResponse.cpp
  src/v20180808/model/ApiInfoSummary.cpp
  src/v20180808/model/ApiKey.cpp
  src/v20180808/model/BindApiInfo.cpp
  src/v20180808/model/ApiAppApiInfo.cpp
  src/v20180808/model/DescribeUsagePlanResponse.cpp
  src/v20180808/model/ApiEnvironmentStrategyStatus.cpp
  src/v20180808/model/AttachPluginResponse.cpp
  src/v20180808/model/BindEnvironmentRequest.cpp
  src/v20180808/model/ModifyUpstreamResponse.cpp
  src/v20180808/model/DescribeIPStrategyRequest.cpp
  src/v20180808/model/DescribeApiForApiAppResponse.cpp
  src/v20180808/model/DescribeInstancesNetworkConfigRequest.cpp
  src/v20180808/model/DescribeUsagePlanEnvironmentsRequest.cpp
  src/v20180808/model/ImportOpenApiRequest.cpp
  src/v20180808/model/DescribeServiceReleaseVersionResponse.cpp
  src/v20180808/model/UpstreamNode.cpp
  src/v20180808/model/ApiAppApiInfos.cpp
  src/v20180808/model/DeleteUpstreamResponse.cpp
  src/v20180808/model/UpdateServiceResponse.cpp
  src/v20180808/model/UsagePlanInfo.cpp
  src/v20180808/model/DescribeServiceEnvironmentReleaseHistoryRequest.cpp
  src/v20180808/model/UnbindApiAppRequest.cpp
  src/v20180808/model/CreateServiceResponse.cpp
  src/v20180808/model/DeleteAPIDocResponse.cpp
  src/v20180808/model/DescribeServiceEnvironmentStrategyResponse.cpp
  src/v20180808/model/DesApisStatus.cpp
  src/v20180808/model/DescribeApiKeysStatusResponse.cpp
  src/v20180808/model/UsagePlanStatusInfo.cpp
  src/v20180808/model/DescribeLogSearchRequest.cpp
  src/v20180808/model/BuildAPIDocRequest.cpp
  src/v20180808/model/DetachPluginResponse.cpp
  src/v20180808/model/ApiKeysStatus.cpp
  src/v20180808/model/ModifyUsagePlanResponse.cpp
  src/v20180808/model/APIDoc.cpp
  src/v20180808/model/DescribeServiceUsagePlanResponse.cpp
  src/v20180808/model/CreateApiAppResponse.cpp
  src/v20180808/model/DescribeApiUsagePlanRequest.cpp
  src/v20180808/model/UnBindSubDomainRequest.cpp
  src/v20180808/model/AttachedPluginSummary.cpp
  src/v20180808/model/DescribeIPStrategysStatusResponse.cpp
  src/v20180808/model/UpdateApiAppKeyResponse.cpp
  src/v20180808/model/UnBindSecretIdsResponse.cpp
  src/v20180808/model/CreateApiAppRequest.cpp
  src/v20180808/model/EnableApiKeyRequest.cpp
  src/v20180808/model/ResetAPIDocPasswordResponse.cpp
  src/v20180808/model/DescribeServicesStatusRequest.cpp
  src/v20180808/model/RequestParameter.cpp
  src/v20180808/model/UpstreamHealthChecker.cpp
  src/v20180808/model/ServiceEnvironmentSet.cpp
  src/v20180808/model/ServiceReleaseVersion.cpp
  src/v20180808/model/DescribeServicesStatusResponse.cpp
  src/v20180808/model/CreateApiKeyRequest.cpp
  )

set(apigateway_include
    include/tencentcloud/apigateway
  )

add_library(apigateway ${LIB_TYPE}
  ${apigateway_public_header}
  ${apigateway_public_header_model}
  ${apigateway_src})

set_target_properties(apigateway
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}apigateway
  )

target_include_directories(apigateway
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(apigateway
  core)

#install(FILES ${apigateway_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/apigateway/v20180808)
#install(FILES ${apigateway_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/apigateway/v20180808/model)
install(DIRECTORY ${apigateway_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS apigateway
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
