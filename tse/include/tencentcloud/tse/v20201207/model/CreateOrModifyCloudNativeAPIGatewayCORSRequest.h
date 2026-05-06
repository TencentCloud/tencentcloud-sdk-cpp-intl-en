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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORMODIFYCLOUDNATIVEAPIGATEWAYCORSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORMODIFYCLOUDNATIVEAPIGATEWAYCORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CreateOrModifyCloudNativeAPIGatewayCORS request structure.
                */
                class CreateOrModifyCloudNativeAPIGatewayCORSRequest : public AbstractModel
                {
                public:
                    CreateOrModifyCloudNativeAPIGatewayCORSRequest();
                    ~CreateOrModifyCloudNativeAPIGatewayCORSRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway ID
                     * @return GatewayId Gateway ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway ID
                     * @param _gatewayId Gateway ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Resource type bound to the cross-origin plug-in: route|service
                     * @return SourceType Resource type bound to the cross-origin plug-in: route|service
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Resource type bound to the cross-origin plug-in: route|service
                     * @param _sourceType Resource type bound to the cross-origin plug-in: route|service
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取id of the route or service
                     * @return SourceId id of the route or service
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置id of the route or service
                     * @param _sourceId id of the route or service
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable the plug-in
                     * @return Enabled Whether to enable the plug-in
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether to enable the plug-in
                     * @param _enabled Whether to enable the plug-in
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Cross-Origin Access-Control-Allow-Origin
                     * @return Origins Cross-Origin Access-Control-Allow-Origin
                     * 
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置Cross-Origin Access-Control-Allow-Origin
                     * @param _origins Cross-Origin Access-Control-Allow-Origin
                     * 
                     */
                    void SetOrigins(const std::vector<std::string>& _origins);

                    /**
                     * 判断参数 Origins 是否已赋值
                     * @return Origins 是否已赋值
                     * 
                     */
                    bool OriginsHasBeenSet() const;

                    /**
                     * 获取Cross-Origin Access-Control-Allow-Headers header
                     * @return Headers Cross-Origin Access-Control-Allow-Headers header
                     * 
                     */
                    std::vector<std::string> GetHeaders() const;

                    /**
                     * 设置Cross-Origin Access-Control-Allow-Headers header
                     * @param _headers Cross-Origin Access-Control-Allow-Headers header
                     * 
                     */
                    void SetHeaders(const std::vector<std::string>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取Access-Control-Allow-Methods for CORS
                     * @return Methods Access-Control-Allow-Methods for CORS
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置Access-Control-Allow-Methods for CORS
                     * @param _methods Access-Control-Allow-Methods for CORS
                     * 
                     */
                    void SetMethods(const std::vector<std::string>& _methods);

                    /**
                     * 判断参数 Methods 是否已赋值
                     * @return Methods 是否已赋值
                     * 
                     */
                    bool MethodsHasBeenSet() const;

                    /**
                     * 获取Access-Control-Expose-Headers
                     * @return ExposedHeaders Access-Control-Expose-Headers
                     * 
                     */
                    std::vector<std::string> GetExposedHeaders() const;

                    /**
                     * 设置Access-Control-Expose-Headers
                     * @param _exposedHeaders Access-Control-Expose-Headers
                     * 
                     */
                    void SetExposedHeaders(const std::vector<std::string>& _exposedHeaders);

                    /**
                     * 判断参数 ExposedHeaders 是否已赋值
                     * @return ExposedHeaders 是否已赋值
                     * 
                     */
                    bool ExposedHeadersHasBeenSet() const;

                    /**
                     * 获取preflight request cache time
                     * @return MaxAge preflight request cache time
                     * 
                     */
                    int64_t GetMaxAge() const;

                    /**
                     * 设置preflight request cache time
                     * @param _maxAge preflight request cache time
                     * 
                     */
                    void SetMaxAge(const int64_t& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     * 
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取Access-Control-Allow-Credentials for CORS
                     * @return Credentials Access-Control-Allow-Credentials for CORS
                     * 
                     */
                    bool GetCredentials() const;

                    /**
                     * 设置Access-Control-Allow-Credentials for CORS
                     * @param _credentials Access-Control-Allow-Credentials for CORS
                     * 
                     */
                    void SetCredentials(const bool& _credentials);

                    /**
                     * 判断参数 Credentials 是否已赋值
                     * @return Credentials 是否已赋值
                     * 
                     */
                    bool CredentialsHasBeenSet() const;

                    /**
                     * 获取Whether to pass through the OPTIONS request to the backend
                     * @return PreFlightContinue Whether to pass through the OPTIONS request to the backend
                     * 
                     */
                    bool GetPreFlightContinue() const;

                    /**
                     * 设置Whether to pass through the OPTIONS request to the backend
                     * @param _preFlightContinue Whether to pass through the OPTIONS request to the backend
                     * 
                     */
                    void SetPreFlightContinue(const bool& _preFlightContinue);

                    /**
                     * 判断参数 PreFlightContinue 是否已赋值
                     * @return PreFlightContinue 是否已赋值
                     * 
                     */
                    bool PreFlightContinueHasBeenSet() const;

                private:

                    /**
                     * Gateway ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Resource type bound to the cross-origin plug-in: route|service
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * id of the route or service
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * Whether to enable the plug-in
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Cross-Origin Access-Control-Allow-Origin
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * Cross-Origin Access-Control-Allow-Headers header
                     */
                    std::vector<std::string> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * Access-Control-Allow-Methods for CORS
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * Access-Control-Expose-Headers
                     */
                    std::vector<std::string> m_exposedHeaders;
                    bool m_exposedHeadersHasBeenSet;

                    /**
                     * preflight request cache time
                     */
                    int64_t m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Access-Control-Allow-Credentials for CORS
                     */
                    bool m_credentials;
                    bool m_credentialsHasBeenSet;

                    /**
                     * Whether to pass through the OPTIONS request to the backend
                     */
                    bool m_preFlightContinue;
                    bool m_preFlightContinueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CREATEORMODIFYCLOUDNATIVEAPIGATEWAYCORSREQUEST_H_
