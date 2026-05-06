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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYROUTEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyCloudNativeAPIGatewayRoute request structure.
                */
                class ModifyCloudNativeAPIGatewayRouteRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayRouteRequest();
                    ~ModifyCloudNativeAPIGatewayRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取gateway ID
                     * @return GatewayId gateway ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置gateway ID
                     * @param _gatewayId gateway ID
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
                     * 获取ID of the associated service
                     * @return ServiceID ID of the associated service
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置ID of the associated service
                     * @param _serviceID ID of the associated service
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
                     * 获取Route ID, unique at the instance level
                     * @return RouteID Route ID, unique at the instance level
                     * 
                     */
                    std::string GetRouteID() const;

                    /**
                     * 设置Route ID, unique at the instance level
                     * @param _routeID Route ID, unique at the instance level
                     * 
                     */
                    void SetRouteID(const std::string& _routeID);

                    /**
                     * 判断参数 RouteID 是否已赋值
                     * @return RouteID 是否已赋值
                     * 
                     */
                    bool RouteIDHasBeenSet() const;

                    /**
                     * 获取Route name, unique at the instance level, does not provide
                     * @return RouteName Route name, unique at the instance level, does not provide
                     * 
                     */
                    std::string GetRouteName() const;

                    /**
                     * 设置Route name, unique at the instance level, does not provide
                     * @param _routeName Route name, unique at the instance level, does not provide
                     * 
                     */
                    void SetRouteName(const std::string& _routeName);

                    /**
                     * 判断参数 RouteName 是否已赋值
                     * @return RouteName 是否已赋值
                     * 
                     */
                    bool RouteNameHasBeenSet() const;

                    /**
                     * 获取Route method. Available values:
- GET
- POST
- DELETE
- PUT
- OPTIONS
- PATCH
- HEAD
- ANY
- TRACE
- COPY
- MOVE
- PROPFIND
- PROPPATCH
- MKCOL
- LOCK
- UNLOCK
                     * @return Methods Route method. Available values:
- GET
- POST
- DELETE
- PUT
- OPTIONS
- PATCH
- HEAD
- ANY
- TRACE
- COPY
- MOVE
- PROPFIND
- PROPPATCH
- MKCOL
- LOCK
- UNLOCK
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置Route method. Available values:
- GET
- POST
- DELETE
- PUT
- OPTIONS
- PATCH
- HEAD
- ANY
- TRACE
- COPY
- MOVE
- PROPFIND
- PROPPATCH
- MKCOL
- LOCK
- UNLOCK
                     * @param _methods Route method. Available values:
- GET
- POST
- DELETE
- PUT
- OPTIONS
- PATCH
- HEAD
- ANY
- TRACE
- COPY
- MOVE
- PROPFIND
- PROPPATCH
- MKCOL
- LOCK
- UNLOCK
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
                     * 获取Domain name of the route
                     * @return Hosts Domain name of the route
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置Domain name of the route
                     * @param _hosts Domain name of the route
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
                     * 获取Path of the route
                     * @return Paths Path of the route
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置Path of the route
                     * @param _paths Path of the route
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
                     * 获取Route protocol, selectable
- https
- http
                     * @return Protocols Route protocol, selectable
- https
- http
                     * 
                     */
                    std::vector<std::string> GetProtocols() const;

                    /**
                     * 设置Route protocol, selectable
- https
- http
                     * @param _protocols Route protocol, selectable
- https
- http
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
                     * 获取Preserve Host when forwarding to backend
                     * @return PreserveHost Preserve Host when forwarding to backend
                     * 
                     */
                    bool GetPreserveHost() const;

                    /**
                     * 设置Preserve Host when forwarding to backend
                     * @param _preserveHost Preserve Host when forwarding to backend
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
                     * 获取HTTP redirection status code
                     * @return HttpsRedirectStatusCode HTTP redirection status code
                     * 
                     */
                    int64_t GetHttpsRedirectStatusCode() const;

                    /**
                     * 设置HTTP redirection status code
                     * @param _httpsRedirectStatusCode HTTP redirection status code
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
                     * 获取StripPath when forwarding to backend
                     * @return StripPath StripPath when forwarding to backend
                     * 
                     */
                    bool GetStripPath() const;

                    /**
                     * 设置StripPath when forwarding to backend
                     * @param _stripPath StripPath when forwarding to backend
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
                     * 获取Whether to enable mandatory HTTPS
                     * @return ForceHttps Whether to enable mandatory HTTPS
                     * @deprecated
                     */
                    bool GetForceHttps() const;

                    /**
                     * 设置Whether to enable mandatory HTTPS
                     * @param _forceHttps Whether to enable mandatory HTTPS
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
                     * 获取Destination port for Layer 4 match	
                     * @return DestinationPorts Destination port for Layer 4 match	
                     * 
                     */
                    std::vector<uint64_t> GetDestinationPorts() const;

                    /**
                     * 设置Destination port for Layer 4 match	
                     * @param _destinationPorts Destination port for Layer 4 match	
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
                     * 获取Add priority
                     * @return RegexPriority Add priority
                     * 
                     */
                    int64_t GetRegexPriority() const;

                    /**
                     * 设置Add priority
                     * @param _regexPriority Add priority
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
                     * 获取QueryString parameter
                     * @return QueryStringParameters QueryString parameter
                     * 
                     */
                    std::vector<KVMapping> GetQueryStringParameters() const;

                    /**
                     * 设置QueryString parameter
                     * @param _queryStringParameters QueryString parameter
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
                     * gateway ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * ID of the associated service
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * Route ID, unique at the instance level
                     */
                    std::string m_routeID;
                    bool m_routeIDHasBeenSet;

                    /**
                     * Route name, unique at the instance level, does not provide
                     */
                    std::string m_routeName;
                    bool m_routeNameHasBeenSet;

                    /**
                     * Route method. Available values:
- GET
- POST
- DELETE
- PUT
- OPTIONS
- PATCH
- HEAD
- ANY
- TRACE
- COPY
- MOVE
- PROPFIND
- PROPPATCH
- MKCOL
- LOCK
- UNLOCK
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * Domain name of the route
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * Path of the route
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                    /**
                     * Route protocol, selectable
- https
- http
                     */
                    std::vector<std::string> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * Preserve Host when forwarding to backend
                     */
                    bool m_preserveHost;
                    bool m_preserveHostHasBeenSet;

                    /**
                     * HTTP redirection status code
                     */
                    int64_t m_httpsRedirectStatusCode;
                    bool m_httpsRedirectStatusCodeHasBeenSet;

                    /**
                     * StripPath when forwarding to backend
                     */
                    bool m_stripPath;
                    bool m_stripPathHasBeenSet;

                    /**
                     * Whether to enable mandatory HTTPS
                     */
                    bool m_forceHttps;
                    bool m_forceHttpsHasBeenSet;

                    /**
                     * Destination port for Layer 4 match	
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
                     * Add priority
                     */
                    int64_t m_regexPriority;
                    bool m_regexPriorityHasBeenSet;

                    /**
                     * QueryString parameter
                     */
                    std::vector<KVMapping> m_queryStringParameters;
                    bool m_queryStringParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYROUTEREQUEST_H_
