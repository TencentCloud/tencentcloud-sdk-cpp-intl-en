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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_APIGATEWAYCLIENT_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_APIGATEWAYCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/apigateway/v20180808/model/BindEnvironmentRequest.h>
#include <tencentcloud/apigateway/v20180808/model/BindEnvironmentResponse.h>
#include <tencentcloud/apigateway/v20180808/model/BindIPStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/BindIPStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/BindSecretIdsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/BindSecretIdsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/BindSubDomainRequest.h>
#include <tencentcloud/apigateway/v20180808/model/BindSubDomainResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreateApiRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreateApiResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreateApiKeyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreateApiKeyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreateIPStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreateIPStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreateServiceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreateServiceResponse.h>
#include <tencentcloud/apigateway/v20180808/model/CreateUsagePlanRequest.h>
#include <tencentcloud/apigateway/v20180808/model/CreateUsagePlanResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteApiRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteApiResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteApiKeyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteApiKeyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteIPStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteIPStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteServiceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteServiceResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteServiceSubDomainMappingRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteServiceSubDomainMappingResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteUsagePlanRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DeleteUsagePlanResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DemoteServiceUsagePlanRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DemoteServiceUsagePlanResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiEnvironmentStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiEnvironmentStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiKeyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiKeyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiKeysStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiKeysStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiUsagePlanRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApiUsagePlanResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApisStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeApisStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeIPStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeIPStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeIPStrategyApisStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeIPStrategyApisStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeIPStrategysStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeIPStrategysStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeLogSearchRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeLogSearchResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentListRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentListResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentReleaseHistoryRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentReleaseHistoryResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceEnvironmentStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceReleaseVersionRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceReleaseVersionResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceSubDomainMappingsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceSubDomainMappingsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceSubDomainsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceSubDomainsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceUsagePlanRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServiceUsagePlanResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServicesStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeServicesStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlanRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlanResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlanEnvironmentsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlanEnvironmentsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlanSecretIdsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlanSecretIdsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlansStatusRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DescribeUsagePlansStatusResponse.h>
#include <tencentcloud/apigateway/v20180808/model/DisableApiKeyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/DisableApiKeyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/EnableApiKeyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/EnableApiKeyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/GenerateApiDocumentRequest.h>
#include <tencentcloud/apigateway/v20180808/model/GenerateApiDocumentResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyApiRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyApiResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyApiEnvironmentStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyApiEnvironmentStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyApiIncrementRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyApiIncrementResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyIPStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyIPStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyServiceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyServiceResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyServiceEnvironmentStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyServiceEnvironmentStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifySubDomainRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifySubDomainResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyUsagePlanRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ModifyUsagePlanResponse.h>
#include <tencentcloud/apigateway/v20180808/model/ReleaseServiceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/ReleaseServiceResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindEnvironmentRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindEnvironmentResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindIPStrategyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindIPStrategyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindSecretIdsRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindSecretIdsResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindSubDomainRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UnBindSubDomainResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UnReleaseServiceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UnReleaseServiceResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UpdateApiKeyRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UpdateApiKeyResponse.h>
#include <tencentcloud/apigateway/v20180808/model/UpdateServiceRequest.h>
#include <tencentcloud/apigateway/v20180808/model/UpdateServiceResponse.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            class ApigatewayClient : public AbstractClient
            {
            public:
                ApigatewayClient(const Credential &credential, const std::string &region);
                ApigatewayClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::BindEnvironmentResponse> BindEnvironmentOutcome;
                typedef std::future<BindEnvironmentOutcome> BindEnvironmentOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::BindEnvironmentRequest&, BindEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindEnvironmentAsyncHandler;
                typedef Outcome<Error, Model::BindIPStrategyResponse> BindIPStrategyOutcome;
                typedef std::future<BindIPStrategyOutcome> BindIPStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::BindIPStrategyRequest&, BindIPStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindIPStrategyAsyncHandler;
                typedef Outcome<Error, Model::BindSecretIdsResponse> BindSecretIdsOutcome;
                typedef std::future<BindSecretIdsOutcome> BindSecretIdsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::BindSecretIdsRequest&, BindSecretIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindSecretIdsAsyncHandler;
                typedef Outcome<Error, Model::BindSubDomainResponse> BindSubDomainOutcome;
                typedef std::future<BindSubDomainOutcome> BindSubDomainOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::BindSubDomainRequest&, BindSubDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindSubDomainAsyncHandler;
                typedef Outcome<Error, Model::CreateApiResponse> CreateApiOutcome;
                typedef std::future<CreateApiOutcome> CreateApiOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreateApiRequest&, CreateApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApiAsyncHandler;
                typedef Outcome<Error, Model::CreateApiKeyResponse> CreateApiKeyOutcome;
                typedef std::future<CreateApiKeyOutcome> CreateApiKeyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreateApiKeyRequest&, CreateApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApiKeyAsyncHandler;
                typedef Outcome<Error, Model::CreateIPStrategyResponse> CreateIPStrategyOutcome;
                typedef std::future<CreateIPStrategyOutcome> CreateIPStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreateIPStrategyRequest&, CreateIPStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIPStrategyAsyncHandler;
                typedef Outcome<Error, Model::CreateServiceResponse> CreateServiceOutcome;
                typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreateServiceRequest&, CreateServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceAsyncHandler;
                typedef Outcome<Error, Model::CreateUsagePlanResponse> CreateUsagePlanOutcome;
                typedef std::future<CreateUsagePlanOutcome> CreateUsagePlanOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::CreateUsagePlanRequest&, CreateUsagePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateUsagePlanAsyncHandler;
                typedef Outcome<Error, Model::DeleteApiResponse> DeleteApiOutcome;
                typedef std::future<DeleteApiOutcome> DeleteApiOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteApiRequest&, DeleteApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiAsyncHandler;
                typedef Outcome<Error, Model::DeleteApiKeyResponse> DeleteApiKeyOutcome;
                typedef std::future<DeleteApiKeyOutcome> DeleteApiKeyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteApiKeyRequest&, DeleteApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiKeyAsyncHandler;
                typedef Outcome<Error, Model::DeleteIPStrategyResponse> DeleteIPStrategyOutcome;
                typedef std::future<DeleteIPStrategyOutcome> DeleteIPStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteIPStrategyRequest&, DeleteIPStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIPStrategyAsyncHandler;
                typedef Outcome<Error, Model::DeleteServiceResponse> DeleteServiceOutcome;
                typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteServiceRequest&, DeleteServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceAsyncHandler;
                typedef Outcome<Error, Model::DeleteServiceSubDomainMappingResponse> DeleteServiceSubDomainMappingOutcome;
                typedef std::future<DeleteServiceSubDomainMappingOutcome> DeleteServiceSubDomainMappingOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteServiceSubDomainMappingRequest&, DeleteServiceSubDomainMappingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceSubDomainMappingAsyncHandler;
                typedef Outcome<Error, Model::DeleteUsagePlanResponse> DeleteUsagePlanOutcome;
                typedef std::future<DeleteUsagePlanOutcome> DeleteUsagePlanOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DeleteUsagePlanRequest&, DeleteUsagePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsagePlanAsyncHandler;
                typedef Outcome<Error, Model::DemoteServiceUsagePlanResponse> DemoteServiceUsagePlanOutcome;
                typedef std::future<DemoteServiceUsagePlanOutcome> DemoteServiceUsagePlanOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DemoteServiceUsagePlanRequest&, DemoteServiceUsagePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DemoteServiceUsagePlanAsyncHandler;
                typedef Outcome<Error, Model::DescribeApiResponse> DescribeApiOutcome;
                typedef std::future<DescribeApiOutcome> DescribeApiOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiRequest&, DescribeApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiAsyncHandler;
                typedef Outcome<Error, Model::DescribeApiEnvironmentStrategyResponse> DescribeApiEnvironmentStrategyOutcome;
                typedef std::future<DescribeApiEnvironmentStrategyOutcome> DescribeApiEnvironmentStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiEnvironmentStrategyRequest&, DescribeApiEnvironmentStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiEnvironmentStrategyAsyncHandler;
                typedef Outcome<Error, Model::DescribeApiKeyResponse> DescribeApiKeyOutcome;
                typedef std::future<DescribeApiKeyOutcome> DescribeApiKeyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiKeyRequest&, DescribeApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiKeyAsyncHandler;
                typedef Outcome<Error, Model::DescribeApiKeysStatusResponse> DescribeApiKeysStatusOutcome;
                typedef std::future<DescribeApiKeysStatusOutcome> DescribeApiKeysStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiKeysStatusRequest&, DescribeApiKeysStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiKeysStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeApiUsagePlanResponse> DescribeApiUsagePlanOutcome;
                typedef std::future<DescribeApiUsagePlanOutcome> DescribeApiUsagePlanOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApiUsagePlanRequest&, DescribeApiUsagePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiUsagePlanAsyncHandler;
                typedef Outcome<Error, Model::DescribeApisStatusResponse> DescribeApisStatusOutcome;
                typedef std::future<DescribeApisStatusOutcome> DescribeApisStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeApisStatusRequest&, DescribeApisStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApisStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeIPStrategyResponse> DescribeIPStrategyOutcome;
                typedef std::future<DescribeIPStrategyOutcome> DescribeIPStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeIPStrategyRequest&, DescribeIPStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPStrategyAsyncHandler;
                typedef Outcome<Error, Model::DescribeIPStrategyApisStatusResponse> DescribeIPStrategyApisStatusOutcome;
                typedef std::future<DescribeIPStrategyApisStatusOutcome> DescribeIPStrategyApisStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeIPStrategyApisStatusRequest&, DescribeIPStrategyApisStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPStrategyApisStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeIPStrategysStatusResponse> DescribeIPStrategysStatusOutcome;
                typedef std::future<DescribeIPStrategysStatusOutcome> DescribeIPStrategysStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeIPStrategysStatusRequest&, DescribeIPStrategysStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPStrategysStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeLogSearchResponse> DescribeLogSearchOutcome;
                typedef std::future<DescribeLogSearchOutcome> DescribeLogSearchOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeLogSearchRequest&, DescribeLogSearchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogSearchAsyncHandler;
                typedef Outcome<Error, Model::DescribeServiceResponse> DescribeServiceOutcome;
                typedef std::future<DescribeServiceOutcome> DescribeServiceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceRequest&, DescribeServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceAsyncHandler;
                typedef Outcome<Error, Model::DescribeServiceEnvironmentListResponse> DescribeServiceEnvironmentListOutcome;
                typedef std::future<DescribeServiceEnvironmentListOutcome> DescribeServiceEnvironmentListOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceEnvironmentListRequest&, DescribeServiceEnvironmentListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceEnvironmentListAsyncHandler;
                typedef Outcome<Error, Model::DescribeServiceEnvironmentReleaseHistoryResponse> DescribeServiceEnvironmentReleaseHistoryOutcome;
                typedef std::future<DescribeServiceEnvironmentReleaseHistoryOutcome> DescribeServiceEnvironmentReleaseHistoryOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceEnvironmentReleaseHistoryRequest&, DescribeServiceEnvironmentReleaseHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceEnvironmentReleaseHistoryAsyncHandler;
                typedef Outcome<Error, Model::DescribeServiceEnvironmentStrategyResponse> DescribeServiceEnvironmentStrategyOutcome;
                typedef std::future<DescribeServiceEnvironmentStrategyOutcome> DescribeServiceEnvironmentStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceEnvironmentStrategyRequest&, DescribeServiceEnvironmentStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceEnvironmentStrategyAsyncHandler;
                typedef Outcome<Error, Model::DescribeServiceReleaseVersionResponse> DescribeServiceReleaseVersionOutcome;
                typedef std::future<DescribeServiceReleaseVersionOutcome> DescribeServiceReleaseVersionOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceReleaseVersionRequest&, DescribeServiceReleaseVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceReleaseVersionAsyncHandler;
                typedef Outcome<Error, Model::DescribeServiceSubDomainMappingsResponse> DescribeServiceSubDomainMappingsOutcome;
                typedef std::future<DescribeServiceSubDomainMappingsOutcome> DescribeServiceSubDomainMappingsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceSubDomainMappingsRequest&, DescribeServiceSubDomainMappingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceSubDomainMappingsAsyncHandler;
                typedef Outcome<Error, Model::DescribeServiceSubDomainsResponse> DescribeServiceSubDomainsOutcome;
                typedef std::future<DescribeServiceSubDomainsOutcome> DescribeServiceSubDomainsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceSubDomainsRequest&, DescribeServiceSubDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceSubDomainsAsyncHandler;
                typedef Outcome<Error, Model::DescribeServiceUsagePlanResponse> DescribeServiceUsagePlanOutcome;
                typedef std::future<DescribeServiceUsagePlanOutcome> DescribeServiceUsagePlanOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServiceUsagePlanRequest&, DescribeServiceUsagePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceUsagePlanAsyncHandler;
                typedef Outcome<Error, Model::DescribeServicesStatusResponse> DescribeServicesStatusOutcome;
                typedef std::future<DescribeServicesStatusOutcome> DescribeServicesStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeServicesStatusRequest&, DescribeServicesStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServicesStatusAsyncHandler;
                typedef Outcome<Error, Model::DescribeUsagePlanResponse> DescribeUsagePlanOutcome;
                typedef std::future<DescribeUsagePlanOutcome> DescribeUsagePlanOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeUsagePlanRequest&, DescribeUsagePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsagePlanAsyncHandler;
                typedef Outcome<Error, Model::DescribeUsagePlanEnvironmentsResponse> DescribeUsagePlanEnvironmentsOutcome;
                typedef std::future<DescribeUsagePlanEnvironmentsOutcome> DescribeUsagePlanEnvironmentsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeUsagePlanEnvironmentsRequest&, DescribeUsagePlanEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsagePlanEnvironmentsAsyncHandler;
                typedef Outcome<Error, Model::DescribeUsagePlanSecretIdsResponse> DescribeUsagePlanSecretIdsOutcome;
                typedef std::future<DescribeUsagePlanSecretIdsOutcome> DescribeUsagePlanSecretIdsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeUsagePlanSecretIdsRequest&, DescribeUsagePlanSecretIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsagePlanSecretIdsAsyncHandler;
                typedef Outcome<Error, Model::DescribeUsagePlansStatusResponse> DescribeUsagePlansStatusOutcome;
                typedef std::future<DescribeUsagePlansStatusOutcome> DescribeUsagePlansStatusOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DescribeUsagePlansStatusRequest&, DescribeUsagePlansStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsagePlansStatusAsyncHandler;
                typedef Outcome<Error, Model::DisableApiKeyResponse> DisableApiKeyOutcome;
                typedef std::future<DisableApiKeyOutcome> DisableApiKeyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::DisableApiKeyRequest&, DisableApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableApiKeyAsyncHandler;
                typedef Outcome<Error, Model::EnableApiKeyResponse> EnableApiKeyOutcome;
                typedef std::future<EnableApiKeyOutcome> EnableApiKeyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::EnableApiKeyRequest&, EnableApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableApiKeyAsyncHandler;
                typedef Outcome<Error, Model::GenerateApiDocumentResponse> GenerateApiDocumentOutcome;
                typedef std::future<GenerateApiDocumentOutcome> GenerateApiDocumentOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::GenerateApiDocumentRequest&, GenerateApiDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateApiDocumentAsyncHandler;
                typedef Outcome<Error, Model::ModifyApiResponse> ModifyApiOutcome;
                typedef std::future<ModifyApiOutcome> ModifyApiOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyApiRequest&, ModifyApiOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiAsyncHandler;
                typedef Outcome<Error, Model::ModifyApiEnvironmentStrategyResponse> ModifyApiEnvironmentStrategyOutcome;
                typedef std::future<ModifyApiEnvironmentStrategyOutcome> ModifyApiEnvironmentStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyApiEnvironmentStrategyRequest&, ModifyApiEnvironmentStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiEnvironmentStrategyAsyncHandler;
                typedef Outcome<Error, Model::ModifyApiIncrementResponse> ModifyApiIncrementOutcome;
                typedef std::future<ModifyApiIncrementOutcome> ModifyApiIncrementOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyApiIncrementRequest&, ModifyApiIncrementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiIncrementAsyncHandler;
                typedef Outcome<Error, Model::ModifyIPStrategyResponse> ModifyIPStrategyOutcome;
                typedef std::future<ModifyIPStrategyOutcome> ModifyIPStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyIPStrategyRequest&, ModifyIPStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIPStrategyAsyncHandler;
                typedef Outcome<Error, Model::ModifyServiceResponse> ModifyServiceOutcome;
                typedef std::future<ModifyServiceOutcome> ModifyServiceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyServiceRequest&, ModifyServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceAsyncHandler;
                typedef Outcome<Error, Model::ModifyServiceEnvironmentStrategyResponse> ModifyServiceEnvironmentStrategyOutcome;
                typedef std::future<ModifyServiceEnvironmentStrategyOutcome> ModifyServiceEnvironmentStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyServiceEnvironmentStrategyRequest&, ModifyServiceEnvironmentStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceEnvironmentStrategyAsyncHandler;
                typedef Outcome<Error, Model::ModifySubDomainResponse> ModifySubDomainOutcome;
                typedef std::future<ModifySubDomainOutcome> ModifySubDomainOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifySubDomainRequest&, ModifySubDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySubDomainAsyncHandler;
                typedef Outcome<Error, Model::ModifyUsagePlanResponse> ModifyUsagePlanOutcome;
                typedef std::future<ModifyUsagePlanOutcome> ModifyUsagePlanOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ModifyUsagePlanRequest&, ModifyUsagePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUsagePlanAsyncHandler;
                typedef Outcome<Error, Model::ReleaseServiceResponse> ReleaseServiceOutcome;
                typedef std::future<ReleaseServiceOutcome> ReleaseServiceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::ReleaseServiceRequest&, ReleaseServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseServiceAsyncHandler;
                typedef Outcome<Error, Model::UnBindEnvironmentResponse> UnBindEnvironmentOutcome;
                typedef std::future<UnBindEnvironmentOutcome> UnBindEnvironmentOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UnBindEnvironmentRequest&, UnBindEnvironmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindEnvironmentAsyncHandler;
                typedef Outcome<Error, Model::UnBindIPStrategyResponse> UnBindIPStrategyOutcome;
                typedef std::future<UnBindIPStrategyOutcome> UnBindIPStrategyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UnBindIPStrategyRequest&, UnBindIPStrategyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindIPStrategyAsyncHandler;
                typedef Outcome<Error, Model::UnBindSecretIdsResponse> UnBindSecretIdsOutcome;
                typedef std::future<UnBindSecretIdsOutcome> UnBindSecretIdsOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UnBindSecretIdsRequest&, UnBindSecretIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindSecretIdsAsyncHandler;
                typedef Outcome<Error, Model::UnBindSubDomainResponse> UnBindSubDomainOutcome;
                typedef std::future<UnBindSubDomainOutcome> UnBindSubDomainOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UnBindSubDomainRequest&, UnBindSubDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindSubDomainAsyncHandler;
                typedef Outcome<Error, Model::UnReleaseServiceResponse> UnReleaseServiceOutcome;
                typedef std::future<UnReleaseServiceOutcome> UnReleaseServiceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UnReleaseServiceRequest&, UnReleaseServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnReleaseServiceAsyncHandler;
                typedef Outcome<Error, Model::UpdateApiKeyResponse> UpdateApiKeyOutcome;
                typedef std::future<UpdateApiKeyOutcome> UpdateApiKeyOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UpdateApiKeyRequest&, UpdateApiKeyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApiKeyAsyncHandler;
                typedef Outcome<Error, Model::UpdateServiceResponse> UpdateServiceOutcome;
                typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
                typedef std::function<void(const ApigatewayClient*, const Model::UpdateServiceRequest&, UpdateServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceAsyncHandler;



                /**
                 *This API is used to bind a usage plan to a service or API.
After you publish a service to an environment, if the API requires authentication and can be called only when it is bound to a usage plan, you can use this API to bind a usage plan to the specified environment.
Currently, a usage plan can be bound to an API; however, under the same service, usage plans bound to a service and usage plans bound to an API cannot coexist. Therefore, in an environment to which a service-level usage plan has already been bound, please use the `DemoteServiceUsagePlan` API to degrade it.
                 * @param req BindEnvironmentRequest
                 * @return BindEnvironmentOutcome
                 */
                BindEnvironmentOutcome BindEnvironment(const Model::BindEnvironmentRequest &request);
                void BindEnvironmentAsync(const Model::BindEnvironmentRequest& request, const BindEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindEnvironmentOutcomeCallable BindEnvironmentCallable(const Model::BindEnvironmentRequest& request);

                /**
                 *This API is used to bind an IP policy to an API.
                 * @param req BindIPStrategyRequest
                 * @return BindIPStrategyOutcome
                 */
                BindIPStrategyOutcome BindIPStrategy(const Model::BindIPStrategyRequest &request);
                void BindIPStrategyAsync(const Model::BindIPStrategyRequest& request, const BindIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindIPStrategyOutcomeCallable BindIPStrategyCallable(const Model::BindIPStrategyRequest& request);

                /**
                 *This API is used to bind a key to a usage plan.
You can bind a key to a usage plan and bind the usage plan to an environment where a service is published, so that callers can use the key to call APIs in the service. You can use this API to bind a key to a usage plan.
                 * @param req BindSecretIdsRequest
                 * @return BindSecretIdsOutcome
                 */
                BindSecretIdsOutcome BindSecretIds(const Model::BindSecretIdsRequest &request);
                void BindSecretIdsAsync(const Model::BindSecretIdsRequest& request, const BindSecretIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindSecretIdsOutcomeCallable BindSecretIdsCallable(const Model::BindSecretIdsRequest& request);

                /**
                 *This API is used to bind a custom domain name to a service.
Each service in API Gateway provides a default domain name for users to call. If you want to use your own domain name, you can bind a custom domain name to the target service. After getting the ICP filing and configuring the CNAME record between the custom and default domain names, you can directly call the custom domain name.
                 * @param req BindSubDomainRequest
                 * @return BindSubDomainOutcome
                 */
                BindSubDomainOutcome BindSubDomain(const Model::BindSubDomainRequest &request);
                void BindSubDomainAsync(const Model::BindSubDomainRequest& request, const BindSubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindSubDomainOutcomeCallable BindSubDomainCallable(const Model::BindSubDomainRequest& request);

                /**
                 *This API is used to create an API. Before creating an API, you need to create a service, as each API belongs to a certain service.
                 * @param req CreateApiRequest
                 * @return CreateApiOutcome
                 */
                CreateApiOutcome CreateApi(const Model::CreateApiRequest &request);
                void CreateApiAsync(const Model::CreateApiRequest& request, const CreateApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApiOutcomeCallable CreateApiCallable(const Model::CreateApiRequest& request);

                /**
                 *This API is used to create an API key pair.
                 * @param req CreateApiKeyRequest
                 * @return CreateApiKeyOutcome
                 */
                CreateApiKeyOutcome CreateApiKey(const Model::CreateApiKeyRequest &request);
                void CreateApiKeyAsync(const Model::CreateApiKeyRequest& request, const CreateApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApiKeyOutcomeCallable CreateApiKeyCallable(const Model::CreateApiKeyRequest& request);

                /**
                 *This API is used to create a service IP policy.
                 * @param req CreateIPStrategyRequest
                 * @return CreateIPStrategyOutcome
                 */
                CreateIPStrategyOutcome CreateIPStrategy(const Model::CreateIPStrategyRequest &request);
                void CreateIPStrategyAsync(const Model::CreateIPStrategyRequest& request, const CreateIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIPStrategyOutcomeCallable CreateIPStrategyCallable(const Model::CreateIPStrategyRequest& request);

                /**
                 *This API is used to create a service.
The maximum unit in API Gateway is service. Multiple APIs can be created in one service, and each service has a default domain name for users to call. You can also bind your own custom domain name to a service.
                 * @param req CreateServiceRequest
                 * @return CreateServiceOutcome
                 */
                CreateServiceOutcome CreateService(const Model::CreateServiceRequest &request);
                void CreateServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateServiceOutcomeCallable CreateServiceCallable(const Model::CreateServiceRequest& request);

                /**
                 *This API is used to create a usage plan.
To use API Gateway, you need to create a usage plan and bind it to a service environment.
                 * @param req CreateUsagePlanRequest
                 * @return CreateUsagePlanOutcome
                 */
                CreateUsagePlanOutcome CreateUsagePlan(const Model::CreateUsagePlanRequest &request);
                void CreateUsagePlanAsync(const Model::CreateUsagePlanRequest& request, const CreateUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateUsagePlanOutcomeCallable CreateUsagePlanCallable(const Model::CreateUsagePlanRequest& request);

                /**
                 *This API is used to delete a created API.
                 * @param req DeleteApiRequest
                 * @return DeleteApiOutcome
                 */
                DeleteApiOutcome DeleteApi(const Model::DeleteApiRequest &request);
                void DeleteApiAsync(const Model::DeleteApiRequest& request, const DeleteApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApiOutcomeCallable DeleteApiCallable(const Model::DeleteApiRequest& request);

                /**
                 *This API is used to delete an API key pair.
                 * @param req DeleteApiKeyRequest
                 * @return DeleteApiKeyOutcome
                 */
                DeleteApiKeyOutcome DeleteApiKey(const Model::DeleteApiKeyRequest &request);
                void DeleteApiKeyAsync(const Model::DeleteApiKeyRequest& request, const DeleteApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApiKeyOutcomeCallable DeleteApiKeyCallable(const Model::DeleteApiKeyRequest& request);

                /**
                 *This API is used to delete a service IP policy.
                 * @param req DeleteIPStrategyRequest
                 * @return DeleteIPStrategyOutcome
                 */
                DeleteIPStrategyOutcome DeleteIPStrategy(const Model::DeleteIPStrategyRequest &request);
                void DeleteIPStrategyAsync(const Model::DeleteIPStrategyRequest& request, const DeleteIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteIPStrategyOutcomeCallable DeleteIPStrategyCallable(const Model::DeleteIPStrategyRequest& request);

                /**
                 *This API is used to delete a service in API Gateway.
                 * @param req DeleteServiceRequest
                 * @return DeleteServiceOutcome
                 */
                DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest &request);
                void DeleteServiceAsync(const Model::DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceOutcomeCallable DeleteServiceCallable(const Model::DeleteServiceRequest& request);

                /**
                 *This API is used to delete a custom domain name mapping in a service environment.
You can use this API if you use a custom domain name and custom mapping. Please note that if you delete all mappings in all environments, a failure will be returned when this API is called.
                 * @param req DeleteServiceSubDomainMappingRequest
                 * @return DeleteServiceSubDomainMappingOutcome
                 */
                DeleteServiceSubDomainMappingOutcome DeleteServiceSubDomainMapping(const Model::DeleteServiceSubDomainMappingRequest &request);
                void DeleteServiceSubDomainMappingAsync(const Model::DeleteServiceSubDomainMappingRequest& request, const DeleteServiceSubDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteServiceSubDomainMappingOutcomeCallable DeleteServiceSubDomainMappingCallable(const Model::DeleteServiceSubDomainMappingRequest& request);

                /**
                 *This API is used to delete a usage plan.
                 * @param req DeleteUsagePlanRequest
                 * @return DeleteUsagePlanOutcome
                 */
                DeleteUsagePlanOutcome DeleteUsagePlan(const Model::DeleteUsagePlanRequest &request);
                void DeleteUsagePlanAsync(const Model::DeleteUsagePlanRequest& request, const DeleteUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteUsagePlanOutcomeCallable DeleteUsagePlanCallable(const Model::DeleteUsagePlanRequest& request);

                /**
                 *This API is used to degrade a usage plan of a service in an environment to the API level.
This operation will be denied if there are no APIs under the service.
This operation will also be denied if the current environment has not been published.
                 * @param req DemoteServiceUsagePlanRequest
                 * @return DemoteServiceUsagePlanOutcome
                 */
                DemoteServiceUsagePlanOutcome DemoteServiceUsagePlan(const Model::DemoteServiceUsagePlanRequest &request);
                void DemoteServiceUsagePlanAsync(const Model::DemoteServiceUsagePlanRequest& request, const DemoteServiceUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DemoteServiceUsagePlanOutcomeCallable DemoteServiceUsagePlanCallable(const Model::DemoteServiceUsagePlanRequest& request);

                /**
                 *This API is used to query the details of an API deployed in API Gateway.
                 * @param req DescribeApiRequest
                 * @return DescribeApiOutcome
                 */
                DescribeApiOutcome DescribeApi(const Model::DescribeApiRequest &request);
                void DescribeApiAsync(const Model::DescribeApiRequest& request, const DescribeApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiOutcomeCallable DescribeApiCallable(const Model::DescribeApiRequest& request);

                /**
                 *This API is used to display the throttling policies bound to an API.
                 * @param req DescribeApiEnvironmentStrategyRequest
                 * @return DescribeApiEnvironmentStrategyOutcome
                 */
                DescribeApiEnvironmentStrategyOutcome DescribeApiEnvironmentStrategy(const Model::DescribeApiEnvironmentStrategyRequest &request);
                void DescribeApiEnvironmentStrategyAsync(const Model::DescribeApiEnvironmentStrategyRequest& request, const DescribeApiEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiEnvironmentStrategyOutcomeCallable DescribeApiEnvironmentStrategyCallable(const Model::DescribeApiEnvironmentStrategyRequest& request);

                /**
                 *This API is used to query the details of a key.
After creating an API key, you can query its details by using this API.
                 * @param req DescribeApiKeyRequest
                 * @return DescribeApiKeyOutcome
                 */
                DescribeApiKeyOutcome DescribeApiKey(const Model::DescribeApiKeyRequest &request);
                void DescribeApiKeyAsync(const Model::DescribeApiKeyRequest& request, const DescribeApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiKeyOutcomeCallable DescribeApiKeyCallable(const Model::DescribeApiKeyRequest& request);

                /**
                 *This API is used to query the list of keys.
If you have created multiple API key pairs, you can use this API to query the information of one or more keys. This API does not display the `secretKey`.
                 * @param req DescribeApiKeysStatusRequest
                 * @return DescribeApiKeysStatusOutcome
                 */
                DescribeApiKeysStatusOutcome DescribeApiKeysStatus(const Model::DescribeApiKeysStatusRequest &request);
                void DescribeApiKeysStatusAsync(const Model::DescribeApiKeysStatusRequest& request, const DescribeApiKeysStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiKeysStatusOutcomeCallable DescribeApiKeysStatusCallable(const Model::DescribeApiKeysStatusRequest& request);

                /**
                 *This API is used to query the details of API usage plans in a service.
To make authentication and throttling for a service take effect, you need to bind a usage plan to it. This API is used to query all usage plans bound to a service and APIs under it.
                 * @param req DescribeApiUsagePlanRequest
                 * @return DescribeApiUsagePlanOutcome
                 */
                DescribeApiUsagePlanOutcome DescribeApiUsagePlan(const Model::DescribeApiUsagePlanRequest &request);
                void DescribeApiUsagePlanAsync(const Model::DescribeApiUsagePlanRequest& request, const DescribeApiUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApiUsagePlanOutcomeCallable DescribeApiUsagePlanCallable(const Model::DescribeApiUsagePlanRequest& request);

                /**
                 *This API is used to view a certain API or the list of all APIs under a service and relevant information.
                 * @param req DescribeApisStatusRequest
                 * @return DescribeApisStatusOutcome
                 */
                DescribeApisStatusOutcome DescribeApisStatus(const Model::DescribeApisStatusRequest &request);
                void DescribeApisStatusAsync(const Model::DescribeApisStatusRequest& request, const DescribeApisStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApisStatusOutcomeCallable DescribeApisStatusCallable(const Model::DescribeApisStatusRequest& request);

                /**
                 *This API is used to query IP policy details.
                 * @param req DescribeIPStrategyRequest
                 * @return DescribeIPStrategyOutcome
                 */
                DescribeIPStrategyOutcome DescribeIPStrategy(const Model::DescribeIPStrategyRequest &request);
                void DescribeIPStrategyAsync(const Model::DescribeIPStrategyRequest& request, const DescribeIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPStrategyOutcomeCallable DescribeIPStrategyCallable(const Model::DescribeIPStrategyRequest& request);

                /**
                 *This API is used to query the list of APIs to which an IP policy can be bound, i.e., the difference set between all APIs under the service and the APIs already bound to the policy.
                 * @param req DescribeIPStrategyApisStatusRequest
                 * @return DescribeIPStrategyApisStatusOutcome
                 */
                DescribeIPStrategyApisStatusOutcome DescribeIPStrategyApisStatus(const Model::DescribeIPStrategyApisStatusRequest &request);
                void DescribeIPStrategyApisStatusAsync(const Model::DescribeIPStrategyApisStatusRequest& request, const DescribeIPStrategyApisStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPStrategyApisStatusOutcomeCallable DescribeIPStrategyApisStatusCallable(const Model::DescribeIPStrategyApisStatusRequest& request);

                /**
                 *This API is used to query the list of service IP policies.
                 * @param req DescribeIPStrategysStatusRequest
                 * @return DescribeIPStrategysStatusOutcome
                 */
                DescribeIPStrategysStatusOutcome DescribeIPStrategysStatus(const Model::DescribeIPStrategysStatusRequest &request);
                void DescribeIPStrategysStatusAsync(const Model::DescribeIPStrategysStatusRequest& request, const DescribeIPStrategysStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPStrategysStatusOutcomeCallable DescribeIPStrategysStatusCallable(const Model::DescribeIPStrategysStatusRequest& request);

                /**
                 *This API is used to search for logs.
                 * @param req DescribeLogSearchRequest
                 * @return DescribeLogSearchOutcome
                 */
                DescribeLogSearchOutcome DescribeLogSearch(const Model::DescribeLogSearchRequest &request);
                void DescribeLogSearchAsync(const Model::DescribeLogSearchRequest& request, const DescribeLogSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLogSearchOutcomeCallable DescribeLogSearchCallable(const Model::DescribeLogSearchRequest& request);

                /**
                 *This API is used to query the details of a service, such as its description, domain name, protocol, creation time, and releases.
                 * @param req DescribeServiceRequest
                 * @return DescribeServiceOutcome
                 */
                DescribeServiceOutcome DescribeService(const Model::DescribeServiceRequest &request);
                void DescribeServiceAsync(const Model::DescribeServiceRequest& request, const DescribeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceOutcomeCallable DescribeServiceCallable(const Model::DescribeServiceRequest& request);

                /**
                 *This API is used to query the list of environments under a service. All environments and their statuses under the queried service will be returned.
                 * @param req DescribeServiceEnvironmentListRequest
                 * @return DescribeServiceEnvironmentListOutcome
                 */
                DescribeServiceEnvironmentListOutcome DescribeServiceEnvironmentList(const Model::DescribeServiceEnvironmentListRequest &request);
                void DescribeServiceEnvironmentListAsync(const Model::DescribeServiceEnvironmentListRequest& request, const DescribeServiceEnvironmentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceEnvironmentListOutcomeCallable DescribeServiceEnvironmentListCallable(const Model::DescribeServiceEnvironmentListRequest& request);

                /**
                 *This API is used to query the release history in a service environment.
A service can only be used when it is published to an environment after creation. This API is used to query the release history in an environment under a service.
                 * @param req DescribeServiceEnvironmentReleaseHistoryRequest
                 * @return DescribeServiceEnvironmentReleaseHistoryOutcome
                 */
                DescribeServiceEnvironmentReleaseHistoryOutcome DescribeServiceEnvironmentReleaseHistory(const Model::DescribeServiceEnvironmentReleaseHistoryRequest &request);
                void DescribeServiceEnvironmentReleaseHistoryAsync(const Model::DescribeServiceEnvironmentReleaseHistoryRequest& request, const DescribeServiceEnvironmentReleaseHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceEnvironmentReleaseHistoryOutcomeCallable DescribeServiceEnvironmentReleaseHistoryCallable(const Model::DescribeServiceEnvironmentReleaseHistoryRequest& request);

                /**
                 *This API is used to display a service throttling policy.
                 * @param req DescribeServiceEnvironmentStrategyRequest
                 * @return DescribeServiceEnvironmentStrategyOutcome
                 */
                DescribeServiceEnvironmentStrategyOutcome DescribeServiceEnvironmentStrategy(const Model::DescribeServiceEnvironmentStrategyRequest &request);
                void DescribeServiceEnvironmentStrategyAsync(const Model::DescribeServiceEnvironmentStrategyRequest& request, const DescribeServiceEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceEnvironmentStrategyOutcomeCallable DescribeServiceEnvironmentStrategyCallable(const Model::DescribeServiceEnvironmentStrategyRequest& request);

                /**
                 *This API is used to query the list of all published versions under a service.
A service is generally published on several versions. This API can be used to query the published versions.
                 * @param req DescribeServiceReleaseVersionRequest
                 * @return DescribeServiceReleaseVersionOutcome
                 */
                DescribeServiceReleaseVersionOutcome DescribeServiceReleaseVersion(const Model::DescribeServiceReleaseVersionRequest &request);
                void DescribeServiceReleaseVersionAsync(const Model::DescribeServiceReleaseVersionRequest& request, const DescribeServiceReleaseVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceReleaseVersionOutcomeCallable DescribeServiceReleaseVersionCallable(const Model::DescribeServiceReleaseVersionRequest& request);

                /**
                 *This API is used to query the path mappings of a custom domain name.
In API Gateway, you can bind a custom domain name to a service and map its paths. You can customize different path mappings to up to 3 environments under the service. This API is used to query the list of path mappings of a custom domain name bound to a service.
                 * @param req DescribeServiceSubDomainMappingsRequest
                 * @return DescribeServiceSubDomainMappingsOutcome
                 */
                DescribeServiceSubDomainMappingsOutcome DescribeServiceSubDomainMappings(const Model::DescribeServiceSubDomainMappingsRequest &request);
                void DescribeServiceSubDomainMappingsAsync(const Model::DescribeServiceSubDomainMappingsRequest& request, const DescribeServiceSubDomainMappingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceSubDomainMappingsOutcomeCallable DescribeServiceSubDomainMappingsCallable(const Model::DescribeServiceSubDomainMappingsRequest& request);

                /**
                 *This API is used to query the list of custom domain names.
In API Gateway, you can bind custom domain names to a service for service call. This API is used to query the list of custom domain names bound to a service.
                 * @param req DescribeServiceSubDomainsRequest
                 * @return DescribeServiceSubDomainsOutcome
                 */
                DescribeServiceSubDomainsOutcome DescribeServiceSubDomains(const Model::DescribeServiceSubDomainsRequest &request);
                void DescribeServiceSubDomainsAsync(const Model::DescribeServiceSubDomainsRequest& request, const DescribeServiceSubDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceSubDomainsOutcomeCallable DescribeServiceSubDomainsCallable(const Model::DescribeServiceSubDomainsRequest& request);

                /**
                 *This API is used to query the details of usage plans in a service.
To make authentication and throttling for a service take effect, you need to bind a usage plan to it. This API is used to query all usage plans bound to a service.
                 * @param req DescribeServiceUsagePlanRequest
                 * @return DescribeServiceUsagePlanOutcome
                 */
                DescribeServiceUsagePlanOutcome DescribeServiceUsagePlan(const Model::DescribeServiceUsagePlanRequest &request);
                void DescribeServiceUsagePlanAsync(const Model::DescribeServiceUsagePlanRequest& request, const DescribeServiceUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServiceUsagePlanOutcomeCallable DescribeServiceUsagePlanCallable(const Model::DescribeServiceUsagePlanRequest& request);

                /**
                 *This API is used to query the list of one or more services and return relevant domain name, time, and other information.
                 * @param req DescribeServicesStatusRequest
                 * @return DescribeServicesStatusOutcome
                 */
                DescribeServicesStatusOutcome DescribeServicesStatus(const Model::DescribeServicesStatusRequest &request);
                void DescribeServicesStatusAsync(const Model::DescribeServicesStatusRequest& request, const DescribeServicesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeServicesStatusOutcomeCallable DescribeServicesStatusCallable(const Model::DescribeServicesStatusRequest& request);

                /**
                 *This API is used to query the details of a usage plan, such as its name, QPS, creation time, and bound environment.
                 * @param req DescribeUsagePlanRequest
                 * @return DescribeUsagePlanOutcome
                 */
                DescribeUsagePlanOutcome DescribeUsagePlan(const Model::DescribeUsagePlanRequest &request);
                void DescribeUsagePlanAsync(const Model::DescribeUsagePlanRequest& request, const DescribeUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsagePlanOutcomeCallable DescribeUsagePlanCallable(const Model::DescribeUsagePlanRequest& request);

                /**
                 *This API is used to query the list of environments bound to a usage plan.
After binding a usage plan to environments, you can use this API to query all service environments bound to the usage plan.
                 * @param req DescribeUsagePlanEnvironmentsRequest
                 * @return DescribeUsagePlanEnvironmentsOutcome
                 */
                DescribeUsagePlanEnvironmentsOutcome DescribeUsagePlanEnvironments(const Model::DescribeUsagePlanEnvironmentsRequest &request);
                void DescribeUsagePlanEnvironmentsAsync(const Model::DescribeUsagePlanEnvironmentsRequest& request, const DescribeUsagePlanEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsagePlanEnvironmentsOutcomeCallable DescribeUsagePlanEnvironmentsCallable(const Model::DescribeUsagePlanEnvironmentsRequest& request);

                /**
                 *This API is used to query the list of keys bound to a usage plan.
In API Gateway, a usage plan can be bound to multiple key pairs. You can use this API to query the list of keys bound to it.
                 * @param req DescribeUsagePlanSecretIdsRequest
                 * @return DescribeUsagePlanSecretIdsOutcome
                 */
                DescribeUsagePlanSecretIdsOutcome DescribeUsagePlanSecretIds(const Model::DescribeUsagePlanSecretIdsRequest &request);
                void DescribeUsagePlanSecretIdsAsync(const Model::DescribeUsagePlanSecretIdsRequest& request, const DescribeUsagePlanSecretIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsagePlanSecretIdsOutcomeCallable DescribeUsagePlanSecretIdsCallable(const Model::DescribeUsagePlanSecretIdsRequest& request);

                /**
                 *This API is used to query the list of usage plans.
                 * @param req DescribeUsagePlansStatusRequest
                 * @return DescribeUsagePlansStatusOutcome
                 */
                DescribeUsagePlansStatusOutcome DescribeUsagePlansStatus(const Model::DescribeUsagePlansStatusRequest &request);
                void DescribeUsagePlansStatusAsync(const Model::DescribeUsagePlansStatusRequest& request, const DescribeUsagePlansStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUsagePlansStatusOutcomeCallable DescribeUsagePlansStatusCallable(const Model::DescribeUsagePlansStatusRequest& request);

                /**
                 *This API is used to disable an API key.
                 * @param req DisableApiKeyRequest
                 * @return DisableApiKeyOutcome
                 */
                DisableApiKeyOutcome DisableApiKey(const Model::DisableApiKeyRequest &request);
                void DisableApiKeyAsync(const Model::DisableApiKeyRequest& request, const DisableApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableApiKeyOutcomeCallable DisableApiKeyCallable(const Model::DisableApiKeyRequest& request);

                /**
                 *This API is used to enable a disabled API key.
                 * @param req EnableApiKeyRequest
                 * @return EnableApiKeyOutcome
                 */
                EnableApiKeyOutcome EnableApiKey(const Model::EnableApiKeyRequest &request);
                void EnableApiKeyAsync(const Model::EnableApiKeyRequest& request, const EnableApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableApiKeyOutcomeCallable EnableApiKeyCallable(const Model::EnableApiKeyRequest& request);

                /**
                 *This API is used to automatically generate API documents and SDKs. One document and one SDK will be generated for each environment under each service, respectively.
                 * @param req GenerateApiDocumentRequest
                 * @return GenerateApiDocumentOutcome
                 */
                GenerateApiDocumentOutcome GenerateApiDocument(const Model::GenerateApiDocumentRequest &request);
                void GenerateApiDocumentAsync(const Model::GenerateApiDocumentRequest& request, const GenerateApiDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateApiDocumentOutcomeCallable GenerateApiDocumentCallable(const Model::GenerateApiDocumentRequest& request);

                /**
                 *This API is used to modify an API. You can call this API to edit/modify a configured API. The modified API takes effect only after its service is published to the corresponding environment again.
                 * @param req ModifyApiRequest
                 * @return ModifyApiOutcome
                 */
                ModifyApiOutcome ModifyApi(const Model::ModifyApiRequest &request);
                void ModifyApiAsync(const Model::ModifyApiRequest& request, const ModifyApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApiOutcomeCallable ModifyApiCallable(const Model::ModifyApiRequest& request);

                /**
                 *This API is used to modify an API throttling policy.
                 * @param req ModifyApiEnvironmentStrategyRequest
                 * @return ModifyApiEnvironmentStrategyOutcome
                 */
                ModifyApiEnvironmentStrategyOutcome ModifyApiEnvironmentStrategy(const Model::ModifyApiEnvironmentStrategyRequest &request);
                void ModifyApiEnvironmentStrategyAsync(const Model::ModifyApiEnvironmentStrategyRequest& request, const ModifyApiEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApiEnvironmentStrategyOutcomeCallable ModifyApiEnvironmentStrategyCallable(const Model::ModifyApiEnvironmentStrategyRequest& request);

                /**
                 *This API is used to incrementally update an API and mainly called by programs (different from `ModifyApi`, which requires that full API parameters be passed in and is suitable for use in the console).
                 * @param req ModifyApiIncrementRequest
                 * @return ModifyApiIncrementOutcome
                 */
                ModifyApiIncrementOutcome ModifyApiIncrement(const Model::ModifyApiIncrementRequest &request);
                void ModifyApiIncrementAsync(const Model::ModifyApiIncrementRequest& request, const ModifyApiIncrementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApiIncrementOutcomeCallable ModifyApiIncrementCallable(const Model::ModifyApiIncrementRequest& request);

                /**
                 *This API is used to modify a service IP policy.
                 * @param req ModifyIPStrategyRequest
                 * @return ModifyIPStrategyOutcome
                 */
                ModifyIPStrategyOutcome ModifyIPStrategy(const Model::ModifyIPStrategyRequest &request);
                void ModifyIPStrategyAsync(const Model::ModifyIPStrategyRequest& request, const ModifyIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyIPStrategyOutcomeCallable ModifyIPStrategyCallable(const Model::ModifyIPStrategyRequest& request);

                /**
                 *This API is used to modify the relevant information of a service. After a service is created, its name, description, and service type can be modified.
                 * @param req ModifyServiceRequest
                 * @return ModifyServiceOutcome
                 */
                ModifyServiceOutcome ModifyService(const Model::ModifyServiceRequest &request);
                void ModifyServiceAsync(const Model::ModifyServiceRequest& request, const ModifyServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceOutcomeCallable ModifyServiceCallable(const Model::ModifyServiceRequest& request);

                /**
                 *This API is used to modify a service throttling policy.
                 * @param req ModifyServiceEnvironmentStrategyRequest
                 * @return ModifyServiceEnvironmentStrategyOutcome
                 */
                ModifyServiceEnvironmentStrategyOutcome ModifyServiceEnvironmentStrategy(const Model::ModifyServiceEnvironmentStrategyRequest &request);
                void ModifyServiceEnvironmentStrategyAsync(const Model::ModifyServiceEnvironmentStrategyRequest& request, const ModifyServiceEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyServiceEnvironmentStrategyOutcomeCallable ModifyServiceEnvironmentStrategyCallable(const Model::ModifyServiceEnvironmentStrategyRequest& request);

                /**
                 *This API is used to modify the path mapping in the custom domain name settings of a service. The path mapping rule can be modified before it is bound to the custom domain name.
                 * @param req ModifySubDomainRequest
                 * @return ModifySubDomainOutcome
                 */
                ModifySubDomainOutcome ModifySubDomain(const Model::ModifySubDomainRequest &request);
                void ModifySubDomainAsync(const Model::ModifySubDomainRequest& request, const ModifySubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySubDomainOutcomeCallable ModifySubDomainCallable(const Model::ModifySubDomainRequest& request);

                /**
                 *This API is used to modify the name, description, and QPS of a usage plan.
                 * @param req ModifyUsagePlanRequest
                 * @return ModifyUsagePlanOutcome
                 */
                ModifyUsagePlanOutcome ModifyUsagePlan(const Model::ModifyUsagePlanRequest &request);
                void ModifyUsagePlanAsync(const Model::ModifyUsagePlanRequest& request, const ModifyUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyUsagePlanOutcomeCallable ModifyUsagePlanCallable(const Model::ModifyUsagePlanRequest& request);

                /**
                 *This API is used to publish a service.
An API Gateway service can only be called when it is published to an environment and takes effect after creation. This API is used to publish a service to an environment such as the `release` environment.
                 * @param req ReleaseServiceRequest
                 * @return ReleaseServiceOutcome
                 */
                ReleaseServiceOutcome ReleaseService(const Model::ReleaseServiceRequest &request);
                void ReleaseServiceAsync(const Model::ReleaseServiceRequest& request, const ReleaseServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseServiceOutcomeCallable ReleaseServiceCallable(const Model::ReleaseServiceRequest& request);

                /**
                 *This API is used to unbind a usage plan from a specified environment.
                 * @param req UnBindEnvironmentRequest
                 * @return UnBindEnvironmentOutcome
                 */
                UnBindEnvironmentOutcome UnBindEnvironment(const Model::UnBindEnvironmentRequest &request);
                void UnBindEnvironmentAsync(const Model::UnBindEnvironmentRequest& request, const UnBindEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindEnvironmentOutcomeCallable UnBindEnvironmentCallable(const Model::UnBindEnvironmentRequest& request);

                /**
                 *This API is used to unbind an IP policy from a service.
                 * @param req UnBindIPStrategyRequest
                 * @return UnBindIPStrategyOutcome
                 */
                UnBindIPStrategyOutcome UnBindIPStrategy(const Model::UnBindIPStrategyRequest &request);
                void UnBindIPStrategyAsync(const Model::UnBindIPStrategyRequest& request, const UnBindIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindIPStrategyOutcomeCallable UnBindIPStrategyCallable(const Model::UnBindIPStrategyRequest& request);

                /**
                 *This API is used to unbind a key from a usage plan.
                 * @param req UnBindSecretIdsRequest
                 * @return UnBindSecretIdsOutcome
                 */
                UnBindSecretIdsOutcome UnBindSecretIds(const Model::UnBindSecretIdsRequest &request);
                void UnBindSecretIdsAsync(const Model::UnBindSecretIdsRequest& request, const UnBindSecretIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindSecretIdsOutcomeCallable UnBindSecretIdsCallable(const Model::UnBindSecretIdsRequest& request);

                /**
                 *This API is used to unbind a custom domain name.
After binding a custom domain name to a service by using API Gateway, you can use this API to unbind it.
                 * @param req UnBindSubDomainRequest
                 * @return UnBindSubDomainOutcome
                 */
                UnBindSubDomainOutcome UnBindSubDomain(const Model::UnBindSubDomainRequest &request);
                void UnBindSubDomainAsync(const Model::UnBindSubDomainRequest& request, const UnBindSubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindSubDomainOutcomeCallable UnBindSubDomainCallable(const Model::UnBindSubDomainRequest& request);

                /**
                 *This API is used to deactivate a service.
Only after a service is published to an environment can its APIs be called. You can call this API to deactivate a service in the release environment. Once deactivated, the service cannot be called.
                 * @param req UnReleaseServiceRequest
                 * @return UnReleaseServiceOutcome
                 */
                UnReleaseServiceOutcome UnReleaseService(const Model::UnReleaseServiceRequest &request);
                void UnReleaseServiceAsync(const Model::UnReleaseServiceRequest& request, const UnReleaseServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnReleaseServiceOutcomeCallable UnReleaseServiceCallable(const Model::UnReleaseServiceRequest& request);

                /**
                 *This API is used to update a created API key pair.
                 * @param req UpdateApiKeyRequest
                 * @return UpdateApiKeyOutcome
                 */
                UpdateApiKeyOutcome UpdateApiKey(const Model::UpdateApiKeyRequest &request);
                void UpdateApiKeyAsync(const Model::UpdateApiKeyRequest& request, const UpdateApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateApiKeyOutcomeCallable UpdateApiKeyCallable(const Model::UpdateApiKeyRequest& request);

                /**
                 *This API is used to switch the running version of a service published in an environment to a specified version. After you create a service by using API Gateway and publish it to an environment, multiple versions will be generated during development. In this case, you can call this API to switch versions.
                 * @param req UpdateServiceRequest
                 * @return UpdateServiceOutcome
                 */
                UpdateServiceOutcome UpdateService(const Model::UpdateServiceRequest &request);
                void UpdateServiceAsync(const Model::UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateServiceOutcomeCallable UpdateServiceCallable(const Model::UpdateServiceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_APIGATEWAYCLIENT_H_
