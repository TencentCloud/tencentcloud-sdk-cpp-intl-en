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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/RequestConfig.h>
#include <tencentcloud/apigateway/v20180808/model/ConstantParameter.h>
#include <tencentcloud/apigateway/v20180808/model/ReqParameter.h>
#include <tencentcloud/apigateway/v20180808/model/MicroServiceReq.h>
#include <tencentcloud/apigateway/v20180808/model/TsfLoadBalanceConfResp.h>
#include <tencentcloud/apigateway/v20180808/model/HealthCheckConf.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>
#include <tencentcloud/apigateway/v20180808/model/ServiceConfig.h>
#include <tencentcloud/apigateway/v20180808/model/ServiceParameter.h>
#include <tencentcloud/apigateway/v20180808/model/OauthConfig.h>
#include <tencentcloud/apigateway/v20180808/model/ResponseErrorCodeReq.h>
#include <tencentcloud/apigateway/v20180808/model/Base64EncodedTriggerRule.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ModifyApi request structure.
                */
                class ModifyApiRequest : public AbstractModel
                {
                public:
                    ModifyApiRequest();
                    ~ModifyApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique service ID of API.
                     * @return ServiceId Unique service ID of API.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique service ID of API.
                     * @param _serviceId Unique service ID of API.
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取API backend service type. Valid values: HTTP, MOCK, TSF, CLB, SCF, WEBSOCKET, TARGET (in beta test).
                     * @return ServiceType API backend service type. Valid values: HTTP, MOCK, TSF, CLB, SCF, WEBSOCKET, TARGET (in beta test).
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置API backend service type. Valid values: HTTP, MOCK, TSF, CLB, SCF, WEBSOCKET, TARGET (in beta test).
                     * @param _serviceType API backend service type. Valid values: HTTP, MOCK, TSF, CLB, SCF, WEBSOCKET, TARGET (in beta test).
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取Request frontend configuration.
                     * @return RequestConfig Request frontend configuration.
                     * 
                     */
                    RequestConfig GetRequestConfig() const;

                    /**
                     * 设置Request frontend configuration.
                     * @param _requestConfig Request frontend configuration.
                     * 
                     */
                    void SetRequestConfig(const RequestConfig& _requestConfig);

                    /**
                     * 判断参数 RequestConfig 是否已赋值
                     * @return RequestConfig 是否已赋值
                     * 
                     */
                    bool RequestConfigHasBeenSet() const;

                    /**
                     * 获取Unique API ID.
                     * @return ApiId Unique API ID.
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置Unique API ID.
                     * @param _apiId Unique API ID.
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取Custom API name.
                     * @return ApiName Custom API name.
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置Custom API name.
                     * @param _apiName Custom API name.
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取Custom API description.
                     * @return ApiDesc Custom API description.
                     * 
                     */
                    std::string GetApiDesc() const;

                    /**
                     * 设置Custom API description.
                     * @param _apiDesc Custom API description.
                     * 
                     */
                    void SetApiDesc(const std::string& _apiDesc);

                    /**
                     * 判断参数 ApiDesc 是否已赋值
                     * @return ApiDesc 是否已赋值
                     * 
                     */
                    bool ApiDescHasBeenSet() const;

                    /**
                     * 获取API type. Valid values: NORMAL, TSF. Default value: NORMAL.
                     * @return ApiType API type. Valid values: NORMAL, TSF. Default value: NORMAL.
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置API type. Valid values: NORMAL, TSF. Default value: NORMAL.
                     * @param _apiType API type. Valid values: NORMAL, TSF. Default value: NORMAL.
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取API authentication type. Valid values: SECRET, NONE, OAUTH, APP. Default value: NONE.
                     * @return AuthType API authentication type. Valid values: SECRET, NONE, OAUTH, APP. Default value: NONE.
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置API authentication type. Valid values: SECRET, NONE, OAUTH, APP. Default value: NONE.
                     * @param _authType API authentication type. Valid values: SECRET, NONE, OAUTH, APP. Default value: NONE.
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取Whether signature authentication is required. True: yes; False: no. This parameter is to be disused.
                     * @return AuthRequired Whether signature authentication is required. True: yes; False: no. This parameter is to be disused.
                     * 
                     */
                    bool GetAuthRequired() const;

                    /**
                     * 设置Whether signature authentication is required. True: yes; False: no. This parameter is to be disused.
                     * @param _authRequired Whether signature authentication is required. True: yes; False: no. This parameter is to be disused.
                     * 
                     */
                    void SetAuthRequired(const bool& _authRequired);

                    /**
                     * 判断参数 AuthRequired 是否已赋值
                     * @return AuthRequired 是否已赋值
                     * 
                     */
                    bool AuthRequiredHasBeenSet() const;

                    /**
                     * 获取API backend service timeout period in seconds.
                     * @return ServiceTimeout API backend service timeout period in seconds.
                     * 
                     */
                    int64_t GetServiceTimeout() const;

                    /**
                     * 设置API backend service timeout period in seconds.
                     * @param _serviceTimeout API backend service timeout period in seconds.
                     * 
                     */
                    void SetServiceTimeout(const int64_t& _serviceTimeout);

                    /**
                     * 判断参数 ServiceTimeout 是否已赋值
                     * @return ServiceTimeout 是否已赋值
                     * 
                     */
                    bool ServiceTimeoutHasBeenSet() const;

                    /**
                     * 获取API frontend request type, such as HTTP, HTTPS, or HTTP and HTTPS.
                     * @return Protocol API frontend request type, such as HTTP, HTTPS, or HTTP and HTTPS.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置API frontend request type, such as HTTP, HTTPS, or HTTP and HTTPS.
                     * @param _protocol API frontend request type, such as HTTP, HTTPS, or HTTP and HTTPS.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Whether to enable CORS. True: yes; False: no.
                     * @return EnableCORS Whether to enable CORS. True: yes; False: no.
                     * 
                     */
                    bool GetEnableCORS() const;

                    /**
                     * 设置Whether to enable CORS. True: yes; False: no.
                     * @param _enableCORS Whether to enable CORS. True: yes; False: no.
                     * 
                     */
                    void SetEnableCORS(const bool& _enableCORS);

                    /**
                     * 判断参数 EnableCORS 是否已赋值
                     * @return EnableCORS 是否已赋值
                     * 
                     */
                    bool EnableCORSHasBeenSet() const;

                    /**
                     * 获取Constant parameter.
                     * @return ConstantParameters Constant parameter.
                     * 
                     */
                    std::vector<ConstantParameter> GetConstantParameters() const;

                    /**
                     * 设置Constant parameter.
                     * @param _constantParameters Constant parameter.
                     * 
                     */
                    void SetConstantParameters(const std::vector<ConstantParameter>& _constantParameters);

                    /**
                     * 判断参数 ConstantParameters 是否已赋值
                     * @return ConstantParameters 是否已赋值
                     * 
                     */
                    bool ConstantParametersHasBeenSet() const;

                    /**
                     * 获取Frontend request parameter.
                     * @return RequestParameters Frontend request parameter.
                     * 
                     */
                    std::vector<ReqParameter> GetRequestParameters() const;

                    /**
                     * 设置Frontend request parameter.
                     * @param _requestParameters Frontend request parameter.
                     * 
                     */
                    void SetRequestParameters(const std::vector<ReqParameter>& _requestParameters);

                    /**
                     * 判断参数 RequestParameters 是否已赋值
                     * @return RequestParameters 是否已赋值
                     * 
                     */
                    bool RequestParametersHasBeenSet() const;

                    /**
                     * 获取This field is valid if `AuthType` is `OAUTH`. NORMAL: business API; OAUTH: authorization API.
                     * @return ApiBusinessType This field is valid if `AuthType` is `OAUTH`. NORMAL: business API; OAUTH: authorization API.
                     * 
                     */
                    std::string GetApiBusinessType() const;

                    /**
                     * 设置This field is valid if `AuthType` is `OAUTH`. NORMAL: business API; OAUTH: authorization API.
                     * @param _apiBusinessType This field is valid if `AuthType` is `OAUTH`. NORMAL: business API; OAUTH: authorization API.
                     * 
                     */
                    void SetApiBusinessType(const std::string& _apiBusinessType);

                    /**
                     * 判断参数 ApiBusinessType 是否已赋值
                     * @return ApiBusinessType 是否已赋值
                     * 
                     */
                    bool ApiBusinessTypeHasBeenSet() const;

                    /**
                     * 获取Returned message of API backend Mock, which is required if `ServiceType` is `Mock`.
                     * @return ServiceMockReturnMessage Returned message of API backend Mock, which is required if `ServiceType` is `Mock`.
                     * 
                     */
                    std::string GetServiceMockReturnMessage() const;

                    /**
                     * 设置Returned message of API backend Mock, which is required if `ServiceType` is `Mock`.
                     * @param _serviceMockReturnMessage Returned message of API backend Mock, which is required if `ServiceType` is `Mock`.
                     * 
                     */
                    void SetServiceMockReturnMessage(const std::string& _serviceMockReturnMessage);

                    /**
                     * 判断参数 ServiceMockReturnMessage 是否已赋值
                     * @return ServiceMockReturnMessage 是否已赋值
                     * 
                     */
                    bool ServiceMockReturnMessageHasBeenSet() const;

                    /**
                     * 获取List of microservices bound to API.
                     * @return MicroServices List of microservices bound to API.
                     * 
                     */
                    std::vector<MicroServiceReq> GetMicroServices() const;

                    /**
                     * 设置List of microservices bound to API.
                     * @param _microServices List of microservices bound to API.
                     * 
                     */
                    void SetMicroServices(const std::vector<MicroServiceReq>& _microServices);

                    /**
                     * 判断参数 MicroServices 是否已赋值
                     * @return MicroServices 是否已赋值
                     * 
                     */
                    bool MicroServicesHasBeenSet() const;

                    /**
                     * 获取Load balancing configuration of microservice.
                     * @return ServiceTsfLoadBalanceConf Load balancing configuration of microservice.
                     * 
                     */
                    TsfLoadBalanceConfResp GetServiceTsfLoadBalanceConf() const;

                    /**
                     * 设置Load balancing configuration of microservice.
                     * @param _serviceTsfLoadBalanceConf Load balancing configuration of microservice.
                     * 
                     */
                    void SetServiceTsfLoadBalanceConf(const TsfLoadBalanceConfResp& _serviceTsfLoadBalanceConf);

                    /**
                     * 判断参数 ServiceTsfLoadBalanceConf 是否已赋值
                     * @return ServiceTsfLoadBalanceConf 是否已赋值
                     * 
                     */
                    bool ServiceTsfLoadBalanceConfHasBeenSet() const;

                    /**
                     * 获取Health check configuration of microservice.
                     * @return ServiceTsfHealthCheckConf Health check configuration of microservice.
                     * 
                     */
                    HealthCheckConf GetServiceTsfHealthCheckConf() const;

                    /**
                     * 设置Health check configuration of microservice.
                     * @param _serviceTsfHealthCheckConf Health check configuration of microservice.
                     * 
                     */
                    void SetServiceTsfHealthCheckConf(const HealthCheckConf& _serviceTsfHealthCheckConf);

                    /**
                     * 判断参数 ServiceTsfHealthCheckConf 是否已赋值
                     * @return ServiceTsfHealthCheckConf 是否已赋值
                     * 
                     */
                    bool ServiceTsfHealthCheckConfHasBeenSet() const;

                    /**
                     * 获取`target` type load balancing configuration (in beta test).
                     * @return TargetServicesLoadBalanceConf `target` type load balancing configuration (in beta test).
                     * 
                     */
                    int64_t GetTargetServicesLoadBalanceConf() const;

                    /**
                     * 设置`target` type load balancing configuration (in beta test).
                     * @param _targetServicesLoadBalanceConf `target` type load balancing configuration (in beta test).
                     * 
                     */
                    void SetTargetServicesLoadBalanceConf(const int64_t& _targetServicesLoadBalanceConf);

                    /**
                     * 判断参数 TargetServicesLoadBalanceConf 是否已赋值
                     * @return TargetServicesLoadBalanceConf 是否已赋值
                     * 
                     */
                    bool TargetServicesLoadBalanceConfHasBeenSet() const;

                    /**
                     * 获取`target` health check configuration (in beta test).
                     * @return TargetServicesHealthCheckConf `target` health check configuration (in beta test).
                     * 
                     */
                    HealthCheckConf GetTargetServicesHealthCheckConf() const;

                    /**
                     * 设置`target` health check configuration (in beta test).
                     * @param _targetServicesHealthCheckConf `target` health check configuration (in beta test).
                     * 
                     */
                    void SetTargetServicesHealthCheckConf(const HealthCheckConf& _targetServicesHealthCheckConf);

                    /**
                     * 判断参数 TargetServicesHealthCheckConf 是否已赋值
                     * @return TargetServicesHealthCheckConf 是否已赋值
                     * 
                     */
                    bool TargetServicesHealthCheckConfHasBeenSet() const;

                    /**
                     * 获取SCF function name, which takes effect if the backend type is `SCF`.
                     * @return ServiceScfFunctionName SCF function name, which takes effect if the backend type is `SCF`.
                     * 
                     */
                    std::string GetServiceScfFunctionName() const;

                    /**
                     * 设置SCF function name, which takes effect if the backend type is `SCF`.
                     * @param _serviceScfFunctionName SCF function name, which takes effect if the backend type is `SCF`.
                     * 
                     */
                    void SetServiceScfFunctionName(const std::string& _serviceScfFunctionName);

                    /**
                     * 判断参数 ServiceScfFunctionName 是否已赋值
                     * @return ServiceScfFunctionName 是否已赋值
                     * 
                     */
                    bool ServiceScfFunctionNameHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket registration function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @return ServiceWebsocketRegisterFunctionName SCF WebSocket registration function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    std::string GetServiceWebsocketRegisterFunctionName() const;

                    /**
                     * 设置SCF WebSocket registration function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @param _serviceWebsocketRegisterFunctionName SCF WebSocket registration function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    void SetServiceWebsocketRegisterFunctionName(const std::string& _serviceWebsocketRegisterFunctionName);

                    /**
                     * 判断参数 ServiceWebsocketRegisterFunctionName 是否已赋值
                     * @return ServiceWebsocketRegisterFunctionName 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketRegisterFunctionNameHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket cleanup function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @return ServiceWebsocketCleanupFunctionName SCF WebSocket cleanup function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    std::string GetServiceWebsocketCleanupFunctionName() const;

                    /**
                     * 设置SCF WebSocket cleanup function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @param _serviceWebsocketCleanupFunctionName SCF WebSocket cleanup function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    void SetServiceWebsocketCleanupFunctionName(const std::string& _serviceWebsocketCleanupFunctionName);

                    /**
                     * 判断参数 ServiceWebsocketCleanupFunctionName 是否已赋值
                     * @return ServiceWebsocketCleanupFunctionName 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketCleanupFunctionNameHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket transfer function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @return ServiceWebsocketTransportFunctionName SCF WebSocket transfer function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    std::string GetServiceWebsocketTransportFunctionName() const;

                    /**
                     * 设置SCF WebSocket transfer function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @param _serviceWebsocketTransportFunctionName SCF WebSocket transfer function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    void SetServiceWebsocketTransportFunctionName(const std::string& _serviceWebsocketTransportFunctionName);

                    /**
                     * 判断参数 ServiceWebsocketTransportFunctionName 是否已赋值
                     * @return ServiceWebsocketTransportFunctionName 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketTransportFunctionNameHasBeenSet() const;

                    /**
                     * 获取SCF function namespace, which takes effect if the backend type is `SCF`.
                     * @return ServiceScfFunctionNamespace SCF function namespace, which takes effect if the backend type is `SCF`.
                     * 
                     */
                    std::string GetServiceScfFunctionNamespace() const;

                    /**
                     * 设置SCF function namespace, which takes effect if the backend type is `SCF`.
                     * @param _serviceScfFunctionNamespace SCF function namespace, which takes effect if the backend type is `SCF`.
                     * 
                     */
                    void SetServiceScfFunctionNamespace(const std::string& _serviceScfFunctionNamespace);

                    /**
                     * 判断参数 ServiceScfFunctionNamespace 是否已赋值
                     * @return ServiceScfFunctionNamespace 是否已赋值
                     * 
                     */
                    bool ServiceScfFunctionNamespaceHasBeenSet() const;

                    /**
                     * 获取SCF function version, which takes effect if the backend type is `SCF`.
                     * @return ServiceScfFunctionQualifier SCF function version, which takes effect if the backend type is `SCF`.
                     * 
                     */
                    std::string GetServiceScfFunctionQualifier() const;

                    /**
                     * 设置SCF function version, which takes effect if the backend type is `SCF`.
                     * @param _serviceScfFunctionQualifier SCF function version, which takes effect if the backend type is `SCF`.
                     * 
                     */
                    void SetServiceScfFunctionQualifier(const std::string& _serviceScfFunctionQualifier);

                    /**
                     * 判断参数 ServiceScfFunctionQualifier 是否已赋值
                     * @return ServiceScfFunctionQualifier 是否已赋值
                     * 
                     */
                    bool ServiceScfFunctionQualifierHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @return ServiceWebsocketRegisterFunctionNamespace SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    std::string GetServiceWebsocketRegisterFunctionNamespace() const;

                    /**
                     * 设置SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @param _serviceWebsocketRegisterFunctionNamespace SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    void SetServiceWebsocketRegisterFunctionNamespace(const std::string& _serviceWebsocketRegisterFunctionNamespace);

                    /**
                     * 判断参数 ServiceWebsocketRegisterFunctionNamespace 是否已赋值
                     * @return ServiceWebsocketRegisterFunctionNamespace 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketRegisterFunctionNamespaceHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @return ServiceWebsocketRegisterFunctionQualifier SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    std::string GetServiceWebsocketRegisterFunctionQualifier() const;

                    /**
                     * 设置SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @param _serviceWebsocketRegisterFunctionQualifier SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    void SetServiceWebsocketRegisterFunctionQualifier(const std::string& _serviceWebsocketRegisterFunctionQualifier);

                    /**
                     * 判断参数 ServiceWebsocketRegisterFunctionQualifier 是否已赋值
                     * @return ServiceWebsocketRegisterFunctionQualifier 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketRegisterFunctionQualifierHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket transfer function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @return ServiceWebsocketTransportFunctionNamespace SCF WebSocket transfer function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    std::string GetServiceWebsocketTransportFunctionNamespace() const;

                    /**
                     * 设置SCF WebSocket transfer function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @param _serviceWebsocketTransportFunctionNamespace SCF WebSocket transfer function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    void SetServiceWebsocketTransportFunctionNamespace(const std::string& _serviceWebsocketTransportFunctionNamespace);

                    /**
                     * 判断参数 ServiceWebsocketTransportFunctionNamespace 是否已赋值
                     * @return ServiceWebsocketTransportFunctionNamespace 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketTransportFunctionNamespaceHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @return ServiceWebsocketTransportFunctionQualifier SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    std::string GetServiceWebsocketTransportFunctionQualifier() const;

                    /**
                     * 设置SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @param _serviceWebsocketTransportFunctionQualifier SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    void SetServiceWebsocketTransportFunctionQualifier(const std::string& _serviceWebsocketTransportFunctionQualifier);

                    /**
                     * 判断参数 ServiceWebsocketTransportFunctionQualifier 是否已赋值
                     * @return ServiceWebsocketTransportFunctionQualifier 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketTransportFunctionQualifierHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket cleanup function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @return ServiceWebsocketCleanupFunctionNamespace SCF WebSocket cleanup function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    std::string GetServiceWebsocketCleanupFunctionNamespace() const;

                    /**
                     * 设置SCF WebSocket cleanup function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @param _serviceWebsocketCleanupFunctionNamespace SCF WebSocket cleanup function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    void SetServiceWebsocketCleanupFunctionNamespace(const std::string& _serviceWebsocketCleanupFunctionNamespace);

                    /**
                     * 判断参数 ServiceWebsocketCleanupFunctionNamespace 是否已赋值
                     * @return ServiceWebsocketCleanupFunctionNamespace 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketCleanupFunctionNamespaceHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket cleanup function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @return ServiceWebsocketCleanupFunctionQualifier SCF WebSocket cleanup function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    std::string GetServiceWebsocketCleanupFunctionQualifier() const;

                    /**
                     * 设置SCF WebSocket cleanup function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * @param _serviceWebsocketCleanupFunctionQualifier SCF WebSocket cleanup function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     * 
                     */
                    void SetServiceWebsocketCleanupFunctionQualifier(const std::string& _serviceWebsocketCleanupFunctionQualifier);

                    /**
                     * 判断参数 ServiceWebsocketCleanupFunctionQualifier 是否已赋值
                     * @return ServiceWebsocketCleanupFunctionQualifier 是否已赋值
                     * 
                     */
                    bool ServiceWebsocketCleanupFunctionQualifierHasBeenSet() const;

                    /**
                     * 获取Whether to enable response integration, which takes effect if the backend type is `SCF`.
                     * @return ServiceScfIsIntegratedResponse Whether to enable response integration, which takes effect if the backend type is `SCF`.
                     * 
                     */
                    bool GetServiceScfIsIntegratedResponse() const;

                    /**
                     * 设置Whether to enable response integration, which takes effect if the backend type is `SCF`.
                     * @param _serviceScfIsIntegratedResponse Whether to enable response integration, which takes effect if the backend type is `SCF`.
                     * 
                     */
                    void SetServiceScfIsIntegratedResponse(const bool& _serviceScfIsIntegratedResponse);

                    /**
                     * 判断参数 ServiceScfIsIntegratedResponse 是否已赋值
                     * @return ServiceScfIsIntegratedResponse 是否已赋值
                     * 
                     */
                    bool ServiceScfIsIntegratedResponseHasBeenSet() const;

                    /**
                     * 获取Billing after debugging starts (reserved field for marketplace).
                     * @return IsDebugAfterCharge Billing after debugging starts (reserved field for marketplace).
                     * 
                     */
                    bool GetIsDebugAfterCharge() const;

                    /**
                     * 设置Billing after debugging starts (reserved field for marketplace).
                     * @param _isDebugAfterCharge Billing after debugging starts (reserved field for marketplace).
                     * 
                     */
                    void SetIsDebugAfterCharge(const bool& _isDebugAfterCharge);

                    /**
                     * 判断参数 IsDebugAfterCharge 是否已赋值
                     * @return IsDebugAfterCharge 是否已赋值
                     * 
                     */
                    bool IsDebugAfterChargeHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return TagSpecifications Tag.
                     * 
                     */
                    Tag GetTagSpecifications() const;

                    /**
                     * 设置Tag.
                     * @param _tagSpecifications Tag.
                     * 
                     */
                    void SetTagSpecifications(const Tag& _tagSpecifications);

                    /**
                     * 判断参数 TagSpecifications 是否已赋值
                     * @return TagSpecifications 是否已赋值
                     * 
                     */
                    bool TagSpecificationsHasBeenSet() const;

                    /**
                     * 获取Whether to delete the error codes for custom response configuration. If the value is left empty or `False`, the error codes will not be deleted. If the value is `True`, all custom response configuration error codes of the API will be deleted.
                     * @return IsDeleteResponseErrorCodes Whether to delete the error codes for custom response configuration. If the value is left empty or `False`, the error codes will not be deleted. If the value is `True`, all custom response configuration error codes of the API will be deleted.
                     * 
                     */
                    bool GetIsDeleteResponseErrorCodes() const;

                    /**
                     * 设置Whether to delete the error codes for custom response configuration. If the value is left empty or `False`, the error codes will not be deleted. If the value is `True`, all custom response configuration error codes of the API will be deleted.
                     * @param _isDeleteResponseErrorCodes Whether to delete the error codes for custom response configuration. If the value is left empty or `False`, the error codes will not be deleted. If the value is `True`, all custom response configuration error codes of the API will be deleted.
                     * 
                     */
                    void SetIsDeleteResponseErrorCodes(const bool& _isDeleteResponseErrorCodes);

                    /**
                     * 判断参数 IsDeleteResponseErrorCodes 是否已赋值
                     * @return IsDeleteResponseErrorCodes 是否已赋值
                     * 
                     */
                    bool IsDeleteResponseErrorCodesHasBeenSet() const;

                    /**
                     * 获取Return type.
                     * @return ResponseType Return type.
                     * 
                     */
                    std::string GetResponseType() const;

                    /**
                     * 设置Return type.
                     * @param _responseType Return type.
                     * 
                     */
                    void SetResponseType(const std::string& _responseType);

                    /**
                     * 判断参数 ResponseType 是否已赋值
                     * @return ResponseType 是否已赋值
                     * 
                     */
                    bool ResponseTypeHasBeenSet() const;

                    /**
                     * 获取Sample response for successful custom response configuration.
                     * @return ResponseSuccessExample Sample response for successful custom response configuration.
                     * 
                     */
                    std::string GetResponseSuccessExample() const;

                    /**
                     * 设置Sample response for successful custom response configuration.
                     * @param _responseSuccessExample Sample response for successful custom response configuration.
                     * 
                     */
                    void SetResponseSuccessExample(const std::string& _responseSuccessExample);

                    /**
                     * 判断参数 ResponseSuccessExample 是否已赋值
                     * @return ResponseSuccessExample 是否已赋值
                     * 
                     */
                    bool ResponseSuccessExampleHasBeenSet() const;

                    /**
                     * 获取Sample response for failed custom response configuration.
                     * @return ResponseFailExample Sample response for failed custom response configuration.
                     * 
                     */
                    std::string GetResponseFailExample() const;

                    /**
                     * 设置Sample response for failed custom response configuration.
                     * @param _responseFailExample Sample response for failed custom response configuration.
                     * 
                     */
                    void SetResponseFailExample(const std::string& _responseFailExample);

                    /**
                     * 判断参数 ResponseFailExample 是否已赋值
                     * @return ResponseFailExample 是否已赋值
                     * 
                     */
                    bool ResponseFailExampleHasBeenSet() const;

                    /**
                     * 获取API backend service configuration.
                     * @return ServiceConfig API backend service configuration.
                     * 
                     */
                    ServiceConfig GetServiceConfig() const;

                    /**
                     * 设置API backend service configuration.
                     * @param _serviceConfig API backend service configuration.
                     * 
                     */
                    void SetServiceConfig(const ServiceConfig& _serviceConfig);

                    /**
                     * 判断参数 ServiceConfig 是否已赋值
                     * @return ServiceConfig 是否已赋值
                     * 
                     */
                    bool ServiceConfigHasBeenSet() const;

                    /**
                     * 获取Unique ID of associated authorization API, which takes effect only if `AuthType` is `OAUTH` and `ApiBusinessType` is `NORMAL`. It is the unique ID of the OAuth 2.0 authorization API bound to the business API.
                     * @return AuthRelationApiId Unique ID of associated authorization API, which takes effect only if `AuthType` is `OAUTH` and `ApiBusinessType` is `NORMAL`. It is the unique ID of the OAuth 2.0 authorization API bound to the business API.
                     * 
                     */
                    std::string GetAuthRelationApiId() const;

                    /**
                     * 设置Unique ID of associated authorization API, which takes effect only if `AuthType` is `OAUTH` and `ApiBusinessType` is `NORMAL`. It is the unique ID of the OAuth 2.0 authorization API bound to the business API.
                     * @param _authRelationApiId Unique ID of associated authorization API, which takes effect only if `AuthType` is `OAUTH` and `ApiBusinessType` is `NORMAL`. It is the unique ID of the OAuth 2.0 authorization API bound to the business API.
                     * 
                     */
                    void SetAuthRelationApiId(const std::string& _authRelationApiId);

                    /**
                     * 判断参数 AuthRelationApiId 是否已赋值
                     * @return AuthRelationApiId 是否已赋值
                     * 
                     */
                    bool AuthRelationApiIdHasBeenSet() const;

                    /**
                     * 获取API backend service parameter.
                     * @return ServiceParameters API backend service parameter.
                     * 
                     */
                    std::vector<ServiceParameter> GetServiceParameters() const;

                    /**
                     * 设置API backend service parameter.
                     * @param _serviceParameters API backend service parameter.
                     * 
                     */
                    void SetServiceParameters(const std::vector<ServiceParameter>& _serviceParameters);

                    /**
                     * 判断参数 ServiceParameters 是否已赋值
                     * @return ServiceParameters 是否已赋值
                     * 
                     */
                    bool ServiceParametersHasBeenSet() const;

                    /**
                     * 获取OAuth configuration, which takes effect if `AuthType` is `OAUTH`.
                     * @return OauthConfig OAuth configuration, which takes effect if `AuthType` is `OAUTH`.
                     * 
                     */
                    OauthConfig GetOauthConfig() const;

                    /**
                     * 设置OAuth configuration, which takes effect if `AuthType` is `OAUTH`.
                     * @param _oauthConfig OAuth configuration, which takes effect if `AuthType` is `OAUTH`.
                     * 
                     */
                    void SetOauthConfig(const OauthConfig& _oauthConfig);

                    /**
                     * 判断参数 OauthConfig 是否已赋值
                     * @return OauthConfig 是否已赋值
                     * 
                     */
                    bool OauthConfigHasBeenSet() const;

                    /**
                     * 获取Custom error code configuration.
                     * @return ResponseErrorCodes Custom error code configuration.
                     * 
                     */
                    std::vector<ResponseErrorCodeReq> GetResponseErrorCodes() const;

                    /**
                     * 设置Custom error code configuration.
                     * @param _responseErrorCodes Custom error code configuration.
                     * 
                     */
                    void SetResponseErrorCodes(const std::vector<ResponseErrorCodeReq>& _responseErrorCodes);

                    /**
                     * 判断参数 ResponseErrorCodes 是否已赋值
                     * @return ResponseErrorCodes 是否已赋值
                     * 
                     */
                    bool ResponseErrorCodesHasBeenSet() const;

                    /**
                     * 获取Whether to enable Base64 encoding. This parameter takes effect only when the backend is SCF.
                     * @return IsBase64Encoded Whether to enable Base64 encoding. This parameter takes effect only when the backend is SCF.
                     * 
                     */
                    bool GetIsBase64Encoded() const;

                    /**
                     * 设置Whether to enable Base64 encoding. This parameter takes effect only when the backend is SCF.
                     * @param _isBase64Encoded Whether to enable Base64 encoding. This parameter takes effect only when the backend is SCF.
                     * 
                     */
                    void SetIsBase64Encoded(const bool& _isBase64Encoded);

                    /**
                     * 判断参数 IsBase64Encoded 是否已赋值
                     * @return IsBase64Encoded 是否已赋值
                     * 
                     */
                    bool IsBase64EncodedHasBeenSet() const;

                    /**
                     * 获取Whether to trigger Base64 encoding by header. This parameter takes effect only when the backend is SCF.
                     * @return IsBase64Trigger Whether to trigger Base64 encoding by header. This parameter takes effect only when the backend is SCF.
                     * 
                     */
                    bool GetIsBase64Trigger() const;

                    /**
                     * 设置Whether to trigger Base64 encoding by header. This parameter takes effect only when the backend is SCF.
                     * @param _isBase64Trigger Whether to trigger Base64 encoding by header. This parameter takes effect only when the backend is SCF.
                     * 
                     */
                    void SetIsBase64Trigger(const bool& _isBase64Trigger);

                    /**
                     * 判断参数 IsBase64Trigger 是否已赋值
                     * @return IsBase64Trigger 是否已赋值
                     * 
                     */
                    bool IsBase64TriggerHasBeenSet() const;

                    /**
                     * 获取Header trigger rules. The number of rules cannot exceed 10.
                     * @return Base64EncodedTriggerRules Header trigger rules. The number of rules cannot exceed 10.
                     * 
                     */
                    std::vector<Base64EncodedTriggerRule> GetBase64EncodedTriggerRules() const;

                    /**
                     * 设置Header trigger rules. The number of rules cannot exceed 10.
                     * @param _base64EncodedTriggerRules Header trigger rules. The number of rules cannot exceed 10.
                     * 
                     */
                    void SetBase64EncodedTriggerRules(const std::vector<Base64EncodedTriggerRule>& _base64EncodedTriggerRules);

                    /**
                     * 判断参数 Base64EncodedTriggerRules 是否已赋值
                     * @return Base64EncodedTriggerRules 是否已赋值
                     * 
                     */
                    bool Base64EncodedTriggerRulesHasBeenSet() const;

                    /**
                     * 获取Event bus ID.
                     * @return EventBusId Event bus ID.
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置Event bus ID.
                     * @param _eventBusId Event bus ID.
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取SCF function type, which takes effect when the backend type is `SCF`. Valid values: `EVENT` and `HTTP`.
                     * @return ServiceScfFunctionType SCF function type, which takes effect when the backend type is `SCF`. Valid values: `EVENT` and `HTTP`.
                     * 
                     */
                    std::string GetServiceScfFunctionType() const;

                    /**
                     * 设置SCF function type, which takes effect when the backend type is `SCF`. Valid values: `EVENT` and `HTTP`.
                     * @param _serviceScfFunctionType SCF function type, which takes effect when the backend type is `SCF`. Valid values: `EVENT` and `HTTP`.
                     * 
                     */
                    void SetServiceScfFunctionType(const std::string& _serviceScfFunctionType);

                    /**
                     * 判断参数 ServiceScfFunctionType 是否已赋值
                     * @return ServiceScfFunctionType 是否已赋值
                     * 
                     */
                    bool ServiceScfFunctionTypeHasBeenSet() const;

                    /**
                     * 获取EIAM application type.
                     * @return EIAMAppType EIAM application type.
                     * 
                     */
                    std::string GetEIAMAppType() const;

                    /**
                     * 设置EIAM application type.
                     * @param _eIAMAppType EIAM application type.
                     * 
                     */
                    void SetEIAMAppType(const std::string& _eIAMAppType);

                    /**
                     * 判断参数 EIAMAppType 是否已赋值
                     * @return EIAMAppType 是否已赋值
                     * 
                     */
                    bool EIAMAppTypeHasBeenSet() const;

                    /**
                     * 获取EIAM application authentication type. Valid values: `AuthenticationOnly`, `Authentication`, `Authorization`.
                     * @return EIAMAuthType EIAM application authentication type. Valid values: `AuthenticationOnly`, `Authentication`, `Authorization`.
                     * 
                     */
                    std::string GetEIAMAuthType() const;

                    /**
                     * 设置EIAM application authentication type. Valid values: `AuthenticationOnly`, `Authentication`, `Authorization`.
                     * @param _eIAMAuthType EIAM application authentication type. Valid values: `AuthenticationOnly`, `Authentication`, `Authorization`.
                     * 
                     */
                    void SetEIAMAuthType(const std::string& _eIAMAuthType);

                    /**
                     * 判断参数 EIAMAuthType 是否已赋值
                     * @return EIAMAuthType 是否已赋值
                     * 
                     */
                    bool EIAMAuthTypeHasBeenSet() const;

                    /**
                     * 获取Validity of the EIAM application token. Unit: second. Default value: `7200`.
                     * @return EIAMAppId Validity of the EIAM application token. Unit: second. Default value: `7200`.
                     * 
                     */
                    std::string GetEIAMAppId() const;

                    /**
                     * 设置Validity of the EIAM application token. Unit: second. Default value: `7200`.
                     * @param _eIAMAppId Validity of the EIAM application token. Unit: second. Default value: `7200`.
                     * 
                     */
                    void SetEIAMAppId(const std::string& _eIAMAppId);

                    /**
                     * 判断参数 EIAMAppId 是否已赋值
                     * @return EIAMAppId 是否已赋值
                     * 
                     */
                    bool EIAMAppIdHasBeenSet() const;

                    /**
                     * 获取EIAM application ID.
                     * @return TokenTimeout EIAM application ID.
                     * 
                     */
                    int64_t GetTokenTimeout() const;

                    /**
                     * 设置EIAM application ID.
                     * @param _tokenTimeout EIAM application ID.
                     * 
                     */
                    void SetTokenTimeout(const int64_t& _tokenTimeout);

                    /**
                     * 判断参数 TokenTimeout 是否已赋值
                     * @return TokenTimeout 是否已赋值
                     * 
                     */
                    bool TokenTimeoutHasBeenSet() const;

                private:

                    /**
                     * Unique service ID of API.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API backend service type. Valid values: HTTP, MOCK, TSF, CLB, SCF, WEBSOCKET, TARGET (in beta test).
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Request frontend configuration.
                     */
                    RequestConfig m_requestConfig;
                    bool m_requestConfigHasBeenSet;

                    /**
                     * Unique API ID.
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * Custom API name.
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * Custom API description.
                     */
                    std::string m_apiDesc;
                    bool m_apiDescHasBeenSet;

                    /**
                     * API type. Valid values: NORMAL, TSF. Default value: NORMAL.
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * API authentication type. Valid values: SECRET, NONE, OAUTH, APP. Default value: NONE.
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * Whether signature authentication is required. True: yes; False: no. This parameter is to be disused.
                     */
                    bool m_authRequired;
                    bool m_authRequiredHasBeenSet;

                    /**
                     * API backend service timeout period in seconds.
                     */
                    int64_t m_serviceTimeout;
                    bool m_serviceTimeoutHasBeenSet;

                    /**
                     * API frontend request type, such as HTTP, HTTPS, or HTTP and HTTPS.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Whether to enable CORS. True: yes; False: no.
                     */
                    bool m_enableCORS;
                    bool m_enableCORSHasBeenSet;

                    /**
                     * Constant parameter.
                     */
                    std::vector<ConstantParameter> m_constantParameters;
                    bool m_constantParametersHasBeenSet;

                    /**
                     * Frontend request parameter.
                     */
                    std::vector<ReqParameter> m_requestParameters;
                    bool m_requestParametersHasBeenSet;

                    /**
                     * This field is valid if `AuthType` is `OAUTH`. NORMAL: business API; OAUTH: authorization API.
                     */
                    std::string m_apiBusinessType;
                    bool m_apiBusinessTypeHasBeenSet;

                    /**
                     * Returned message of API backend Mock, which is required if `ServiceType` is `Mock`.
                     */
                    std::string m_serviceMockReturnMessage;
                    bool m_serviceMockReturnMessageHasBeenSet;

                    /**
                     * List of microservices bound to API.
                     */
                    std::vector<MicroServiceReq> m_microServices;
                    bool m_microServicesHasBeenSet;

                    /**
                     * Load balancing configuration of microservice.
                     */
                    TsfLoadBalanceConfResp m_serviceTsfLoadBalanceConf;
                    bool m_serviceTsfLoadBalanceConfHasBeenSet;

                    /**
                     * Health check configuration of microservice.
                     */
                    HealthCheckConf m_serviceTsfHealthCheckConf;
                    bool m_serviceTsfHealthCheckConfHasBeenSet;

                    /**
                     * `target` type load balancing configuration (in beta test).
                     */
                    int64_t m_targetServicesLoadBalanceConf;
                    bool m_targetServicesLoadBalanceConfHasBeenSet;

                    /**
                     * `target` health check configuration (in beta test).
                     */
                    HealthCheckConf m_targetServicesHealthCheckConf;
                    bool m_targetServicesHealthCheckConfHasBeenSet;

                    /**
                     * SCF function name, which takes effect if the backend type is `SCF`.
                     */
                    std::string m_serviceScfFunctionName;
                    bool m_serviceScfFunctionNameHasBeenSet;

                    /**
                     * SCF WebSocket registration function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     */
                    std::string m_serviceWebsocketRegisterFunctionName;
                    bool m_serviceWebsocketRegisterFunctionNameHasBeenSet;

                    /**
                     * SCF WebSocket cleanup function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     */
                    std::string m_serviceWebsocketCleanupFunctionName;
                    bool m_serviceWebsocketCleanupFunctionNameHasBeenSet;

                    /**
                     * SCF WebSocket transfer function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     */
                    std::string m_serviceWebsocketTransportFunctionName;
                    bool m_serviceWebsocketTransportFunctionNameHasBeenSet;

                    /**
                     * SCF function namespace, which takes effect if the backend type is `SCF`.
                     */
                    std::string m_serviceScfFunctionNamespace;
                    bool m_serviceScfFunctionNamespaceHasBeenSet;

                    /**
                     * SCF function version, which takes effect if the backend type is `SCF`.
                     */
                    std::string m_serviceScfFunctionQualifier;
                    bool m_serviceScfFunctionQualifierHasBeenSet;

                    /**
                     * SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     */
                    std::string m_serviceWebsocketRegisterFunctionNamespace;
                    bool m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet;

                    /**
                     * SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     */
                    std::string m_serviceWebsocketRegisterFunctionQualifier;
                    bool m_serviceWebsocketRegisterFunctionQualifierHasBeenSet;

                    /**
                     * SCF WebSocket transfer function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     */
                    std::string m_serviceWebsocketTransportFunctionNamespace;
                    bool m_serviceWebsocketTransportFunctionNamespaceHasBeenSet;

                    /**
                     * SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     */
                    std::string m_serviceWebsocketTransportFunctionQualifier;
                    bool m_serviceWebsocketTransportFunctionQualifierHasBeenSet;

                    /**
                     * SCF WebSocket cleanup function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     */
                    std::string m_serviceWebsocketCleanupFunctionNamespace;
                    bool m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet;

                    /**
                     * SCF WebSocket cleanup function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
                     */
                    std::string m_serviceWebsocketCleanupFunctionQualifier;
                    bool m_serviceWebsocketCleanupFunctionQualifierHasBeenSet;

                    /**
                     * Whether to enable response integration, which takes effect if the backend type is `SCF`.
                     */
                    bool m_serviceScfIsIntegratedResponse;
                    bool m_serviceScfIsIntegratedResponseHasBeenSet;

                    /**
                     * Billing after debugging starts (reserved field for marketplace).
                     */
                    bool m_isDebugAfterCharge;
                    bool m_isDebugAfterChargeHasBeenSet;

                    /**
                     * Tag.
                     */
                    Tag m_tagSpecifications;
                    bool m_tagSpecificationsHasBeenSet;

                    /**
                     * Whether to delete the error codes for custom response configuration. If the value is left empty or `False`, the error codes will not be deleted. If the value is `True`, all custom response configuration error codes of the API will be deleted.
                     */
                    bool m_isDeleteResponseErrorCodes;
                    bool m_isDeleteResponseErrorCodesHasBeenSet;

                    /**
                     * Return type.
                     */
                    std::string m_responseType;
                    bool m_responseTypeHasBeenSet;

                    /**
                     * Sample response for successful custom response configuration.
                     */
                    std::string m_responseSuccessExample;
                    bool m_responseSuccessExampleHasBeenSet;

                    /**
                     * Sample response for failed custom response configuration.
                     */
                    std::string m_responseFailExample;
                    bool m_responseFailExampleHasBeenSet;

                    /**
                     * API backend service configuration.
                     */
                    ServiceConfig m_serviceConfig;
                    bool m_serviceConfigHasBeenSet;

                    /**
                     * Unique ID of associated authorization API, which takes effect only if `AuthType` is `OAUTH` and `ApiBusinessType` is `NORMAL`. It is the unique ID of the OAuth 2.0 authorization API bound to the business API.
                     */
                    std::string m_authRelationApiId;
                    bool m_authRelationApiIdHasBeenSet;

                    /**
                     * API backend service parameter.
                     */
                    std::vector<ServiceParameter> m_serviceParameters;
                    bool m_serviceParametersHasBeenSet;

                    /**
                     * OAuth configuration, which takes effect if `AuthType` is `OAUTH`.
                     */
                    OauthConfig m_oauthConfig;
                    bool m_oauthConfigHasBeenSet;

                    /**
                     * Custom error code configuration.
                     */
                    std::vector<ResponseErrorCodeReq> m_responseErrorCodes;
                    bool m_responseErrorCodesHasBeenSet;

                    /**
                     * Whether to enable Base64 encoding. This parameter takes effect only when the backend is SCF.
                     */
                    bool m_isBase64Encoded;
                    bool m_isBase64EncodedHasBeenSet;

                    /**
                     * Whether to trigger Base64 encoding by header. This parameter takes effect only when the backend is SCF.
                     */
                    bool m_isBase64Trigger;
                    bool m_isBase64TriggerHasBeenSet;

                    /**
                     * Header trigger rules. The number of rules cannot exceed 10.
                     */
                    std::vector<Base64EncodedTriggerRule> m_base64EncodedTriggerRules;
                    bool m_base64EncodedTriggerRulesHasBeenSet;

                    /**
                     * Event bus ID.
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * SCF function type, which takes effect when the backend type is `SCF`. Valid values: `EVENT` and `HTTP`.
                     */
                    std::string m_serviceScfFunctionType;
                    bool m_serviceScfFunctionTypeHasBeenSet;

                    /**
                     * EIAM application type.
                     */
                    std::string m_eIAMAppType;
                    bool m_eIAMAppTypeHasBeenSet;

                    /**
                     * EIAM application authentication type. Valid values: `AuthenticationOnly`, `Authentication`, `Authorization`.
                     */
                    std::string m_eIAMAuthType;
                    bool m_eIAMAuthTypeHasBeenSet;

                    /**
                     * Validity of the EIAM application token. Unit: second. Default value: `7200`.
                     */
                    std::string m_eIAMAppId;
                    bool m_eIAMAppIdHasBeenSet;

                    /**
                     * EIAM application ID.
                     */
                    int64_t m_tokenTimeout;
                    bool m_tokenTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYAPIREQUEST_H_
