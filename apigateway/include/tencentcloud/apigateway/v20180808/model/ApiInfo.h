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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/OauthConfig.h>
#include <tencentcloud/apigateway/v20180808/model/RequestConfig.h>
#include <tencentcloud/apigateway/v20180808/model/ErrorCodes.h>
#include <tencentcloud/apigateway/v20180808/model/ReqParameter.h>
#include <tencentcloud/apigateway/v20180808/model/ServiceConfig.h>
#include <tencentcloud/apigateway/v20180808/model/ServiceParameter.h>
#include <tencentcloud/apigateway/v20180808/model/ConstantParameter.h>
#include <tencentcloud/apigateway/v20180808/model/MicroService.h>
#include <tencentcloud/apigateway/v20180808/model/TsfLoadBalanceConfResp.h>
#include <tencentcloud/apigateway/v20180808/model/HealthCheckConf.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * API information
                */
                class ApiInfo : public AbstractModel
                {
                public:
                    ApiInfo();
                    ~ApiInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique service ID of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceId Unique service ID of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique service ID of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceId Unique service ID of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Service name of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceName Service name of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceName Service name of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Service description of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceDesc Service description of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceDesc() const;

                    /**
                     * 设置Service description of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceDesc Service description of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceDesc(const std::string& _serviceDesc);

                    /**
                     * 判断参数 ServiceDesc 是否已赋值
                     * @return ServiceDesc 是否已赋值
                     */
                    bool ServiceDescHasBeenSet() const;

                    /**
                     * 获取Unique API ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiId Unique API ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置Unique API ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ApiId Unique API ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取API description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiDesc API description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApiDesc() const;

                    /**
                     * 设置API description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ApiDesc API description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApiDesc(const std::string& _apiDesc);

                    /**
                     * 判断参数 ApiDesc 是否已赋值
                     * @return ApiDesc 是否已赋值
                     */
                    bool ApiDescHasBeenSet() const;

                    /**
                     * 获取Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreatedTime Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ModifiedTime Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ModifiedTime Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取API name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiName API name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置API name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ApiName API name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取API type. Valid values: NORMAL (general API), TSF (microservice API).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiType API type. Valid values: NORMAL (general API), TSF (microservice API).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置API type. Valid values: NORMAL (general API), TSF (microservice API).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ApiType API type. Valid values: NORMAL (general API), TSF (microservice API).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取API frontend request type, such as HTTP, HTTPS, or HTTP and HTTPS.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Protocol API frontend request type, such as HTTP, HTTPS, or HTTP and HTTPS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置API frontend request type, such as HTTP, HTTPS, or HTTP and HTTPS.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Protocol API frontend request type, such as HTTP, HTTPS, or HTTP and HTTPS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取API authentication type. Valid values: SECRET (key pair authentication), NONE (no authentication), OAUTH.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AuthType API authentication type. Valid values: SECRET (key pair authentication), NONE (no authentication), OAUTH.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置API authentication type. Valid values: SECRET (key pair authentication), NONE (no authentication), OAUTH.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AuthType API authentication type. Valid values: SECRET (key pair authentication), NONE (no authentication), OAUTH.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取OAuth API type. Valid values: NORMAL (business API), OAUTH (authorization API).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiBusinessType OAuth API type. Valid values: NORMAL (business API), OAUTH (authorization API).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApiBusinessType() const;

                    /**
                     * 设置OAuth API type. Valid values: NORMAL (business API), OAUTH (authorization API).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ApiBusinessType OAuth API type. Valid values: NORMAL (business API), OAUTH (authorization API).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApiBusinessType(const std::string& _apiBusinessType);

                    /**
                     * 判断参数 ApiBusinessType 是否已赋值
                     * @return ApiBusinessType 是否已赋值
                     */
                    bool ApiBusinessTypeHasBeenSet() const;

                    /**
                     * 获取Unique ID of the authorization API associated with OAuth business API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AuthRelationApiId Unique ID of the authorization API associated with OAuth business API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAuthRelationApiId() const;

                    /**
                     * 设置Unique ID of the authorization API associated with OAuth business API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AuthRelationApiId Unique ID of the authorization API associated with OAuth business API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAuthRelationApiId(const std::string& _authRelationApiId);

                    /**
                     * 判断参数 AuthRelationApiId 是否已赋值
                     * @return AuthRelationApiId 是否已赋值
                     */
                    bool AuthRelationApiIdHasBeenSet() const;

                    /**
                     * 获取OAuth configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OauthConfig OAuth configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OauthConfig GetOauthConfig() const;

                    /**
                     * 设置OAuth configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param OauthConfig OAuth configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOauthConfig(const OauthConfig& _oauthConfig);

                    /**
                     * 判断参数 OauthConfig 是否已赋值
                     * @return OauthConfig 是否已赋值
                     */
                    bool OauthConfigHasBeenSet() const;

                    /**
                     * 获取Whether to enable debugging after purchase (reserved field for the marketplace).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsDebugAfterCharge Whether to enable debugging after purchase (reserved field for the marketplace).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetIsDebugAfterCharge() const;

                    /**
                     * 设置Whether to enable debugging after purchase (reserved field for the marketplace).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IsDebugAfterCharge Whether to enable debugging after purchase (reserved field for the marketplace).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsDebugAfterCharge(const bool& _isDebugAfterCharge);

                    /**
                     * 判断参数 IsDebugAfterCharge 是否已赋值
                     * @return IsDebugAfterCharge 是否已赋值
                     */
                    bool IsDebugAfterChargeHasBeenSet() const;

                    /**
                     * 获取Request frontend configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RequestConfig Request frontend configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RequestConfig GetRequestConfig() const;

                    /**
                     * 设置Request frontend configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RequestConfig Request frontend configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRequestConfig(const RequestConfig& _requestConfig);

                    /**
                     * 判断参数 RequestConfig 是否已赋值
                     * @return RequestConfig 是否已赋值
                     */
                    bool RequestConfigHasBeenSet() const;

                    /**
                     * 获取Return type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResponseType Return type.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetResponseType() const;

                    /**
                     * 设置Return type.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ResponseType Return type.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResponseType(const std::string& _responseType);

                    /**
                     * 判断参数 ResponseType 是否已赋值
                     * @return ResponseType 是否已赋值
                     */
                    bool ResponseTypeHasBeenSet() const;

                    /**
                     * 获取Sample response for successful custom response configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResponseSuccessExample Sample response for successful custom response configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetResponseSuccessExample() const;

                    /**
                     * 设置Sample response for successful custom response configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ResponseSuccessExample Sample response for successful custom response configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResponseSuccessExample(const std::string& _responseSuccessExample);

                    /**
                     * 判断参数 ResponseSuccessExample 是否已赋值
                     * @return ResponseSuccessExample 是否已赋值
                     */
                    bool ResponseSuccessExampleHasBeenSet() const;

                    /**
                     * 获取Sample response for failed custom response configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResponseFailExample Sample response for failed custom response configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetResponseFailExample() const;

                    /**
                     * 设置Sample response for failed custom response configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ResponseFailExample Sample response for failed custom response configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResponseFailExample(const std::string& _responseFailExample);

                    /**
                     * 判断参数 ResponseFailExample 是否已赋值
                     * @return ResponseFailExample 是否已赋值
                     */
                    bool ResponseFailExampleHasBeenSet() const;

                    /**
                     * 获取Custom error code configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResponseErrorCodes Custom error code configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ErrorCodes> GetResponseErrorCodes() const;

                    /**
                     * 设置Custom error code configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ResponseErrorCodes Custom error code configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResponseErrorCodes(const std::vector<ErrorCodes>& _responseErrorCodes);

                    /**
                     * 判断参数 ResponseErrorCodes 是否已赋值
                     * @return ResponseErrorCodes 是否已赋值
                     */
                    bool ResponseErrorCodesHasBeenSet() const;

                    /**
                     * 获取Frontend request parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RequestParameters Frontend request parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ReqParameter> GetRequestParameters() const;

                    /**
                     * 设置Frontend request parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RequestParameters Frontend request parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRequestParameters(const std::vector<ReqParameter>& _requestParameters);

                    /**
                     * 判断参数 RequestParameters 是否已赋值
                     * @return RequestParameters 是否已赋值
                     */
                    bool RequestParametersHasBeenSet() const;

                    /**
                     * 获取API backend service timeout period in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceTimeout API backend service timeout period in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetServiceTimeout() const;

                    /**
                     * 设置API backend service timeout period in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceTimeout API backend service timeout period in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceTimeout(const int64_t& _serviceTimeout);

                    /**
                     * 判断参数 ServiceTimeout 是否已赋值
                     * @return ServiceTimeout 是否已赋值
                     */
                    bool ServiceTimeoutHasBeenSet() const;

                    /**
                     * 获取API backend service type. Valid values: HTTP, MOCK, TSF, CLB, SCF, WEBSOCKET, TARGET (in beta test).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceType API backend service type. Valid values: HTTP, MOCK, TSF, CLB, SCF, WEBSOCKET, TARGET (in beta test).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置API backend service type. Valid values: HTTP, MOCK, TSF, CLB, SCF, WEBSOCKET, TARGET (in beta test).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceType API backend service type. Valid values: HTTP, MOCK, TSF, CLB, SCF, WEBSOCKET, TARGET (in beta test).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取API backend service configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceConfig API backend service configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ServiceConfig GetServiceConfig() const;

                    /**
                     * 设置API backend service configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceConfig API backend service configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceConfig(const ServiceConfig& _serviceConfig);

                    /**
                     * 判断参数 ServiceConfig 是否已赋值
                     * @return ServiceConfig 是否已赋值
                     */
                    bool ServiceConfigHasBeenSet() const;

                    /**
                     * 获取API backend service parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceParameters API backend service parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ServiceParameter> GetServiceParameters() const;

                    /**
                     * 设置API backend service parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceParameters API backend service parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceParameters(const std::vector<ServiceParameter>& _serviceParameters);

                    /**
                     * 判断参数 ServiceParameters 是否已赋值
                     * @return ServiceParameters 是否已赋值
                     */
                    bool ServiceParametersHasBeenSet() const;

                    /**
                     * 获取Constant parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ConstantParameters Constant parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ConstantParameter> GetConstantParameters() const;

                    /**
                     * 设置Constant parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ConstantParameters Constant parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConstantParameters(const std::vector<ConstantParameter>& _constantParameters);

                    /**
                     * 判断参数 ConstantParameters 是否已赋值
                     * @return ConstantParameters 是否已赋值
                     */
                    bool ConstantParametersHasBeenSet() const;

                    /**
                     * 获取Returned message of API backend Mock, which is required if `ServiceType` is `Mock`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceMockReturnMessage Returned message of API backend Mock, which is required if `ServiceType` is `Mock`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceMockReturnMessage() const;

                    /**
                     * 设置Returned message of API backend Mock, which is required if `ServiceType` is `Mock`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceMockReturnMessage Returned message of API backend Mock, which is required if `ServiceType` is `Mock`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceMockReturnMessage(const std::string& _serviceMockReturnMessage);

                    /**
                     * 判断参数 ServiceMockReturnMessage 是否已赋值
                     * @return ServiceMockReturnMessage 是否已赋值
                     */
                    bool ServiceMockReturnMessageHasBeenSet() const;

                    /**
                     * 获取SCF function name, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceScfFunctionName SCF function name, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceScfFunctionName() const;

                    /**
                     * 设置SCF function name, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceScfFunctionName SCF function name, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceScfFunctionName(const std::string& _serviceScfFunctionName);

                    /**
                     * 判断参数 ServiceScfFunctionName 是否已赋值
                     * @return ServiceScfFunctionName 是否已赋值
                     */
                    bool ServiceScfFunctionNameHasBeenSet() const;

                    /**
                     * 获取SCF function namespace, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceScfFunctionNamespace SCF function namespace, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceScfFunctionNamespace() const;

                    /**
                     * 设置SCF function namespace, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceScfFunctionNamespace SCF function namespace, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceScfFunctionNamespace(const std::string& _serviceScfFunctionNamespace);

                    /**
                     * 判断参数 ServiceScfFunctionNamespace 是否已赋值
                     * @return ServiceScfFunctionNamespace 是否已赋值
                     */
                    bool ServiceScfFunctionNamespaceHasBeenSet() const;

                    /**
                     * 获取SCF function version, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceScfFunctionQualifier SCF function version, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceScfFunctionQualifier() const;

                    /**
                     * 设置SCF function version, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceScfFunctionQualifier SCF function version, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceScfFunctionQualifier(const std::string& _serviceScfFunctionQualifier);

                    /**
                     * 判断参数 ServiceScfFunctionQualifier 是否已赋值
                     * @return ServiceScfFunctionQualifier 是否已赋值
                     */
                    bool ServiceScfFunctionQualifierHasBeenSet() const;

                    /**
                     * 获取Whether integrated response is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceScfIsIntegratedResponse Whether integrated response is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetServiceScfIsIntegratedResponse() const;

                    /**
                     * 设置Whether integrated response is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceScfIsIntegratedResponse Whether integrated response is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceScfIsIntegratedResponse(const bool& _serviceScfIsIntegratedResponse);

                    /**
                     * 判断参数 ServiceScfIsIntegratedResponse 是否已赋值
                     * @return ServiceScfIsIntegratedResponse 是否已赋值
                     */
                    bool ServiceScfIsIntegratedResponseHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceWebsocketRegisterFunctionName SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceWebsocketRegisterFunctionName() const;

                    /**
                     * 设置SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceWebsocketRegisterFunctionName SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceWebsocketRegisterFunctionName(const std::string& _serviceWebsocketRegisterFunctionName);

                    /**
                     * 判断参数 ServiceWebsocketRegisterFunctionName 是否已赋值
                     * @return ServiceWebsocketRegisterFunctionName 是否已赋值
                     */
                    bool ServiceWebsocketRegisterFunctionNameHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceWebsocketRegisterFunctionNamespace SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceWebsocketRegisterFunctionNamespace() const;

                    /**
                     * 设置SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceWebsocketRegisterFunctionNamespace SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceWebsocketRegisterFunctionNamespace(const std::string& _serviceWebsocketRegisterFunctionNamespace);

                    /**
                     * 判断参数 ServiceWebsocketRegisterFunctionNamespace 是否已赋值
                     * @return ServiceWebsocketRegisterFunctionNamespace 是否已赋值
                     */
                    bool ServiceWebsocketRegisterFunctionNamespaceHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceWebsocketRegisterFunctionQualifier SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceWebsocketRegisterFunctionQualifier() const;

                    /**
                     * 设置SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceWebsocketRegisterFunctionQualifier SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceWebsocketRegisterFunctionQualifier(const std::string& _serviceWebsocketRegisterFunctionQualifier);

                    /**
                     * 判断参数 ServiceWebsocketRegisterFunctionQualifier 是否已赋值
                     * @return ServiceWebsocketRegisterFunctionQualifier 是否已赋值
                     */
                    bool ServiceWebsocketRegisterFunctionQualifierHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket cleanup function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceWebsocketCleanupFunctionName SCF WebSocket cleanup function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceWebsocketCleanupFunctionName() const;

                    /**
                     * 设置SCF WebSocket cleanup function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceWebsocketCleanupFunctionName SCF WebSocket cleanup function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceWebsocketCleanupFunctionName(const std::string& _serviceWebsocketCleanupFunctionName);

                    /**
                     * 判断参数 ServiceWebsocketCleanupFunctionName 是否已赋值
                     * @return ServiceWebsocketCleanupFunctionName 是否已赋值
                     */
                    bool ServiceWebsocketCleanupFunctionNameHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket cleanup function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceWebsocketCleanupFunctionNamespace SCF WebSocket cleanup function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceWebsocketCleanupFunctionNamespace() const;

                    /**
                     * 设置SCF WebSocket cleanup function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceWebsocketCleanupFunctionNamespace SCF WebSocket cleanup function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceWebsocketCleanupFunctionNamespace(const std::string& _serviceWebsocketCleanupFunctionNamespace);

                    /**
                     * 判断参数 ServiceWebsocketCleanupFunctionNamespace 是否已赋值
                     * @return ServiceWebsocketCleanupFunctionNamespace 是否已赋值
                     */
                    bool ServiceWebsocketCleanupFunctionNamespaceHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket cleanup function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceWebsocketCleanupFunctionQualifier SCF WebSocket cleanup function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceWebsocketCleanupFunctionQualifier() const;

                    /**
                     * 设置SCF WebSocket cleanup function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceWebsocketCleanupFunctionQualifier SCF WebSocket cleanup function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceWebsocketCleanupFunctionQualifier(const std::string& _serviceWebsocketCleanupFunctionQualifier);

                    /**
                     * 判断参数 ServiceWebsocketCleanupFunctionQualifier 是否已赋值
                     * @return ServiceWebsocketCleanupFunctionQualifier 是否已赋值
                     */
                    bool ServiceWebsocketCleanupFunctionQualifierHasBeenSet() const;

                    /**
                     * 获取WebSocket callback address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InternalDomain WebSocket callback address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInternalDomain() const;

                    /**
                     * 设置WebSocket callback address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InternalDomain WebSocket callback address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInternalDomain(const std::string& _internalDomain);

                    /**
                     * 判断参数 InternalDomain 是否已赋值
                     * @return InternalDomain 是否已赋值
                     */
                    bool InternalDomainHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket transfer function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceWebsocketTransportFunctionName SCF WebSocket transfer function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceWebsocketTransportFunctionName() const;

                    /**
                     * 设置SCF WebSocket transfer function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceWebsocketTransportFunctionName SCF WebSocket transfer function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceWebsocketTransportFunctionName(const std::string& _serviceWebsocketTransportFunctionName);

                    /**
                     * 判断参数 ServiceWebsocketTransportFunctionName 是否已赋值
                     * @return ServiceWebsocketTransportFunctionName 是否已赋值
                     */
                    bool ServiceWebsocketTransportFunctionNameHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket transfer function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceWebsocketTransportFunctionNamespace SCF WebSocket transfer function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceWebsocketTransportFunctionNamespace() const;

                    /**
                     * 设置SCF WebSocket transfer function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceWebsocketTransportFunctionNamespace SCF WebSocket transfer function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceWebsocketTransportFunctionNamespace(const std::string& _serviceWebsocketTransportFunctionNamespace);

                    /**
                     * 判断参数 ServiceWebsocketTransportFunctionNamespace 是否已赋值
                     * @return ServiceWebsocketTransportFunctionNamespace 是否已赋值
                     */
                    bool ServiceWebsocketTransportFunctionNamespaceHasBeenSet() const;

                    /**
                     * 获取SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceWebsocketTransportFunctionQualifier SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetServiceWebsocketTransportFunctionQualifier() const;

                    /**
                     * 设置SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceWebsocketTransportFunctionQualifier SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceWebsocketTransportFunctionQualifier(const std::string& _serviceWebsocketTransportFunctionQualifier);

                    /**
                     * 判断参数 ServiceWebsocketTransportFunctionQualifier 是否已赋值
                     * @return ServiceWebsocketTransportFunctionQualifier 是否已赋值
                     */
                    bool ServiceWebsocketTransportFunctionQualifierHasBeenSet() const;

                    /**
                     * 获取List of microservices bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MicroServices List of microservices bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MicroService> GetMicroServices() const;

                    /**
                     * 设置List of microservices bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MicroServices List of microservices bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMicroServices(const std::vector<MicroService>& _microServices);

                    /**
                     * 判断参数 MicroServices 是否已赋值
                     * @return MicroServices 是否已赋值
                     */
                    bool MicroServicesHasBeenSet() const;

                    /**
                     * 获取Microservice details.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MicroServicesInfo Microservice details.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> GetMicroServicesInfo() const;

                    /**
                     * 设置Microservice details.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MicroServicesInfo Microservice details.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMicroServicesInfo(const std::vector<int64_t>& _microServicesInfo);

                    /**
                     * 判断参数 MicroServicesInfo 是否已赋值
                     * @return MicroServicesInfo 是否已赋值
                     */
                    bool MicroServicesInfoHasBeenSet() const;

                    /**
                     * 获取Load balancing configuration of microservice.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceTsfLoadBalanceConf Load balancing configuration of microservice.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TsfLoadBalanceConfResp GetServiceTsfLoadBalanceConf() const;

                    /**
                     * 设置Load balancing configuration of microservice.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceTsfLoadBalanceConf Load balancing configuration of microservice.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceTsfLoadBalanceConf(const TsfLoadBalanceConfResp& _serviceTsfLoadBalanceConf);

                    /**
                     * 判断参数 ServiceTsfLoadBalanceConf 是否已赋值
                     * @return ServiceTsfLoadBalanceConf 是否已赋值
                     */
                    bool ServiceTsfLoadBalanceConfHasBeenSet() const;

                    /**
                     * 获取Health check configuration of microservice.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ServiceTsfHealthCheckConf Health check configuration of microservice.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    HealthCheckConf GetServiceTsfHealthCheckConf() const;

                    /**
                     * 设置Health check configuration of microservice.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ServiceTsfHealthCheckConf Health check configuration of microservice.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetServiceTsfHealthCheckConf(const HealthCheckConf& _serviceTsfHealthCheckConf);

                    /**
                     * 判断参数 ServiceTsfHealthCheckConf 是否已赋值
                     * @return ServiceTsfHealthCheckConf 是否已赋值
                     */
                    bool ServiceTsfHealthCheckConfHasBeenSet() const;

                    /**
                     * 获取Whether to enable CORS.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EnableCORS Whether to enable CORS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetEnableCORS() const;

                    /**
                     * 设置Whether to enable CORS.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EnableCORS Whether to enable CORS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnableCORS(const bool& _enableCORS);

                    /**
                     * 判断参数 EnableCORS 是否已赋值
                     * @return EnableCORS 是否已赋值
                     */
                    bool EnableCORSHasBeenSet() const;

                    /**
                     * 获取Information of tags bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Tags Information of tags bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Information of tags bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Tags Information of tags bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Unique service ID of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Service name of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Service description of API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceDesc;
                    bool m_serviceDescHasBeenSet;

                    /**
                     * Unique API ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * API description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiDesc;
                    bool m_apiDescHasBeenSet;

                    /**
                     * Creation time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Last modified time in the format of YYYY-MM-DDThh:mm:ssZ according to ISO 8601 standard. UTC time is used.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * API name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * API type. Valid values: NORMAL (general API), TSF (microservice API).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * API frontend request type, such as HTTP, HTTPS, or HTTP and HTTPS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * API authentication type. Valid values: SECRET (key pair authentication), NONE (no authentication), OAUTH.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * OAuth API type. Valid values: NORMAL (business API), OAUTH (authorization API).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_apiBusinessType;
                    bool m_apiBusinessTypeHasBeenSet;

                    /**
                     * Unique ID of the authorization API associated with OAuth business API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_authRelationApiId;
                    bool m_authRelationApiIdHasBeenSet;

                    /**
                     * OAuth configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    OauthConfig m_oauthConfig;
                    bool m_oauthConfigHasBeenSet;

                    /**
                     * Whether to enable debugging after purchase (reserved field for the marketplace).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isDebugAfterCharge;
                    bool m_isDebugAfterChargeHasBeenSet;

                    /**
                     * Request frontend configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    RequestConfig m_requestConfig;
                    bool m_requestConfigHasBeenSet;

                    /**
                     * Return type.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_responseType;
                    bool m_responseTypeHasBeenSet;

                    /**
                     * Sample response for successful custom response configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_responseSuccessExample;
                    bool m_responseSuccessExampleHasBeenSet;

                    /**
                     * Sample response for failed custom response configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_responseFailExample;
                    bool m_responseFailExampleHasBeenSet;

                    /**
                     * Custom error code configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ErrorCodes> m_responseErrorCodes;
                    bool m_responseErrorCodesHasBeenSet;

                    /**
                     * Frontend request parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ReqParameter> m_requestParameters;
                    bool m_requestParametersHasBeenSet;

                    /**
                     * API backend service timeout period in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_serviceTimeout;
                    bool m_serviceTimeoutHasBeenSet;

                    /**
                     * API backend service type. Valid values: HTTP, MOCK, TSF, CLB, SCF, WEBSOCKET, TARGET (in beta test).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * API backend service configuration.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ServiceConfig m_serviceConfig;
                    bool m_serviceConfigHasBeenSet;

                    /**
                     * API backend service parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ServiceParameter> m_serviceParameters;
                    bool m_serviceParametersHasBeenSet;

                    /**
                     * Constant parameter.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ConstantParameter> m_constantParameters;
                    bool m_constantParametersHasBeenSet;

                    /**
                     * Returned message of API backend Mock, which is required if `ServiceType` is `Mock`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceMockReturnMessage;
                    bool m_serviceMockReturnMessageHasBeenSet;

                    /**
                     * SCF function name, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceScfFunctionName;
                    bool m_serviceScfFunctionNameHasBeenSet;

                    /**
                     * SCF function namespace, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceScfFunctionNamespace;
                    bool m_serviceScfFunctionNamespaceHasBeenSet;

                    /**
                     * SCF function version, which takes effect if the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceScfFunctionQualifier;
                    bool m_serviceScfFunctionQualifierHasBeenSet;

                    /**
                     * Whether integrated response is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_serviceScfIsIntegratedResponse;
                    bool m_serviceScfIsIntegratedResponseHasBeenSet;

                    /**
                     * SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceWebsocketRegisterFunctionName;
                    bool m_serviceWebsocketRegisterFunctionNameHasBeenSet;

                    /**
                     * SCF WebSocket registration function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceWebsocketRegisterFunctionNamespace;
                    bool m_serviceWebsocketRegisterFunctionNamespaceHasBeenSet;

                    /**
                     * SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceWebsocketRegisterFunctionQualifier;
                    bool m_serviceWebsocketRegisterFunctionQualifierHasBeenSet;

                    /**
                     * SCF WebSocket cleanup function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceWebsocketCleanupFunctionName;
                    bool m_serviceWebsocketCleanupFunctionNameHasBeenSet;

                    /**
                     * SCF WebSocket cleanup function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceWebsocketCleanupFunctionNamespace;
                    bool m_serviceWebsocketCleanupFunctionNamespaceHasBeenSet;

                    /**
                     * SCF WebSocket cleanup function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceWebsocketCleanupFunctionQualifier;
                    bool m_serviceWebsocketCleanupFunctionQualifierHasBeenSet;

                    /**
                     * WebSocket callback address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_internalDomain;
                    bool m_internalDomainHasBeenSet;

                    /**
                     * SCF WebSocket transfer function, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceWebsocketTransportFunctionName;
                    bool m_serviceWebsocketTransportFunctionNameHasBeenSet;

                    /**
                     * SCF WebSocket transfer function namespace, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceWebsocketTransportFunctionNamespace;
                    bool m_serviceWebsocketTransportFunctionNamespaceHasBeenSet;

                    /**
                     * SCF WebSocket transfer function version, which takes effect if the frontend type is `WEBSOCKET` and the backend type is `SCF`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_serviceWebsocketTransportFunctionQualifier;
                    bool m_serviceWebsocketTransportFunctionQualifierHasBeenSet;

                    /**
                     * List of microservices bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MicroService> m_microServices;
                    bool m_microServicesHasBeenSet;

                    /**
                     * Microservice details.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_microServicesInfo;
                    bool m_microServicesInfoHasBeenSet;

                    /**
                     * Load balancing configuration of microservice.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    TsfLoadBalanceConfResp m_serviceTsfLoadBalanceConf;
                    bool m_serviceTsfLoadBalanceConfHasBeenSet;

                    /**
                     * Health check configuration of microservice.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    HealthCheckConf m_serviceTsfHealthCheckConf;
                    bool m_serviceTsfHealthCheckConfHasBeenSet;

                    /**
                     * Whether to enable CORS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enableCORS;
                    bool m_enableCORSHasBeenSet;

                    /**
                     * Information of tags bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIINFO_H_
