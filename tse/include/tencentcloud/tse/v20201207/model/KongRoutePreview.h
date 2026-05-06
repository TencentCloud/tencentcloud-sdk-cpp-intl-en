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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGROUTEPREVIEW_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGROUTEPREVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KVMapping.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Cloud-native gateway routing information
                */
                class KongRoutePreview : public AbstractModel
                {
                public:
                    KongRoutePreview();
                    ~KongRoutePreview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Service ID
                     * @return ID Service ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置Service ID
                     * @param _iD Service ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Service name.
                     * @return Name Service name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Service name.
                     * @param _name Service name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Methods None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _methods None.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Paths None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _paths None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPaths(const std::vector<std::string>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                    /**
                     * 获取None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Hosts None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hosts None.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取None.
                     * @return Protocols None.
                     * 
                     */
                    std::vector<std::string> GetProtocols() const;

                    /**
                     * 设置None.
                     * @param _protocols None.
                     * 
                     */
                    void SetProtocols(const std::vector<std::string>& _protocols);

                    /**
                     * 判断参数 Protocols 是否已赋值
                     * @return Protocols 是否已赋值
                     * 
                     */
                    bool ProtocolsHasBeenSet() const;

                    /**
                     * 获取None.
                     * @return PreserveHost None.
                     * 
                     */
                    bool GetPreserveHost() const;

                    /**
                     * 设置None.
                     * @param _preserveHost None.
                     * 
                     */
                    void SetPreserveHost(const bool& _preserveHost);

                    /**
                     * 判断参数 PreserveHost 是否已赋值
                     * @return PreserveHost 是否已赋值
                     * 
                     */
                    bool PreserveHostHasBeenSet() const;

                    /**
                     * 获取None.
                     * @return HttpsRedirectStatusCode None.
                     * 
                     */
                    int64_t GetHttpsRedirectStatusCode() const;

                    /**
                     * 设置None.
                     * @param _httpsRedirectStatusCode None.
                     * 
                     */
                    void SetHttpsRedirectStatusCode(const int64_t& _httpsRedirectStatusCode);

                    /**
                     * 判断参数 HttpsRedirectStatusCode 是否已赋值
                     * @return HttpsRedirectStatusCode 是否已赋值
                     * 
                     */
                    bool HttpsRedirectStatusCodeHasBeenSet() const;

                    /**
                     * 获取None.
                     * @return StripPath None.
                     * 
                     */
                    bool GetStripPath() const;

                    /**
                     * 设置None.
                     * @param _stripPath None.
                     * 
                     */
                    void SetStripPath(const bool& _stripPath);

                    /**
                     * 判断参数 StripPath 是否已赋值
                     * @return StripPath 是否已赋值
                     * 
                     */
                    bool StripPathHasBeenSet() const;

                    /**
                     * 获取None.
                     * @return CreatedTime None.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置None.
                     * @param _createdTime None.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Is mandatory HTTPS enabled?
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ForceHttps Is mandatory HTTPS enabled?
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    bool GetForceHttps() const;

                    /**
                     * 设置Is mandatory HTTPS enabled?
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _forceHttps Is mandatory HTTPS enabled?
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetForceHttps(const bool& _forceHttps);

                    /**
                     * 判断参数 ForceHttps 是否已赋值
                     * @return ForceHttps 是否已赋值
                     * @deprecated
                     */
                    bool ForceHttpsHasBeenSet() const;

                    /**
                     * 获取Service name
                     * @return ServiceName Service name
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name
                     * @param _serviceName Service name
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Service ID
                     * @return ServiceID Service ID
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置Service ID
                     * @param _serviceID Service ID
                     * 
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     * 
                     */
                    bool ServiceIDHasBeenSet() const;

                    /**
                     * 获取Destination Port
                     * @return DestinationPorts Destination Port
                     * 
                     */
                    std::vector<uint64_t> GetDestinationPorts() const;

                    /**
                     * 设置Destination Port
                     * @param _destinationPorts Destination Port
                     * 
                     */
                    void SetDestinationPorts(const std::vector<uint64_t>& _destinationPorts);

                    /**
                     * 判断参数 DestinationPorts 是否已赋值
                     * @return DestinationPorts 是否已赋值
                     * 
                     */
                    bool DestinationPortsHasBeenSet() const;

                    /**
                     * 获取Headers of the route
                     * @return Headers Headers of the route
                     * 
                     */
                    std::vector<KVMapping> GetHeaders() const;

                    /**
                     * 设置Headers of the route
                     * @param _headers Headers of the route
                     * 
                     */
                    void SetHeaders(const std::vector<KVMapping>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取Whether to cache the request body, default true
                     * @return RequestBuffering Whether to cache the request body, default true
                     * 
                     */
                    bool GetRequestBuffering() const;

                    /**
                     * 设置Whether to cache the request body, default true
                     * @param _requestBuffering Whether to cache the request body, default true
                     * 
                     */
                    void SetRequestBuffering(const bool& _requestBuffering);

                    /**
                     * 判断参数 RequestBuffering 是否已赋值
                     * @return RequestBuffering 是否已赋值
                     * 
                     */
                    bool RequestBufferingHasBeenSet() const;

                    /**
                     * 获取Whether to cache response body, default true
                     * @return ResponseBuffering Whether to cache response body, default true
                     * 
                     */
                    bool GetResponseBuffering() const;

                    /**
                     * 设置Whether to cache response body, default true
                     * @param _responseBuffering Whether to cache response body, default true
                     * 
                     */
                    void SetResponseBuffering(const bool& _responseBuffering);

                    /**
                     * 判断参数 ResponseBuffering 是否已赋值
                     * @return ResponseBuffering 是否已赋值
                     * 
                     */
                    bool ResponseBufferingHasBeenSet() const;

                    /**
                     * 获取Regular Priority
                     * @return RegexPriority Regular Priority
                     * 
                     */
                    int64_t GetRegexPriority() const;

                    /**
                     * 设置Regular Priority
                     * @param _regexPriority Regular Priority
                     * 
                     */
                    void SetRegexPriority(const int64_t& _regexPriority);

                    /**
                     * 判断参数 RegexPriority 是否已赋值
                     * @return RegexPriority 是否已赋值
                     * 
                     */
                    bool RegexPriorityHasBeenSet() const;

                    /**
                     * 获取querystring parameter
                     * @return QueryStringParameters querystring parameter
                     * 
                     */
                    std::vector<KVMapping> GetQueryStringParameters() const;

                    /**
                     * 设置querystring parameter
                     * @param _queryStringParameters querystring parameter
                     * 
                     */
                    void SetQueryStringParameters(const std::vector<KVMapping>& _queryStringParameters);

                    /**
                     * 判断参数 QueryStringParameters 是否已赋值
                     * @return QueryStringParameters 是否已赋值
                     * 
                     */
                    bool QueryStringParametersHasBeenSet() const;

                private:

                    /**
                     * Service ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Service name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * None.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * None.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                    /**
                     * None.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * None.
                     */
                    std::vector<std::string> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * None.
                     */
                    bool m_preserveHost;
                    bool m_preserveHostHasBeenSet;

                    /**
                     * None.
                     */
                    int64_t m_httpsRedirectStatusCode;
                    bool m_httpsRedirectStatusCodeHasBeenSet;

                    /**
                     * None.
                     */
                    bool m_stripPath;
                    bool m_stripPathHasBeenSet;

                    /**
                     * None.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Is mandatory HTTPS enabled?
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_forceHttps;
                    bool m_forceHttpsHasBeenSet;

                    /**
                     * Service name
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Service ID
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * Destination Port
                     */
                    std::vector<uint64_t> m_destinationPorts;
                    bool m_destinationPortsHasBeenSet;

                    /**
                     * Headers of the route
                     */
                    std::vector<KVMapping> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * Whether to cache the request body, default true
                     */
                    bool m_requestBuffering;
                    bool m_requestBufferingHasBeenSet;

                    /**
                     * Whether to cache response body, default true
                     */
                    bool m_responseBuffering;
                    bool m_responseBufferingHasBeenSet;

                    /**
                     * Regular Priority
                     */
                    int64_t m_regexPriority;
                    bool m_regexPriorityHasBeenSet;

                    /**
                     * querystring parameter
                     */
                    std::vector<KVMapping> m_queryStringParameters;
                    bool m_queryStringParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGROUTEPREVIEW_H_
