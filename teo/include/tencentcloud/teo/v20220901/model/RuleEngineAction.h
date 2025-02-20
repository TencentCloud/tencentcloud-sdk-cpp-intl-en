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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CacheParameters.h>
#include <tencentcloud/teo/v20220901/model/CacheKeyParameters.h>
#include <tencentcloud/teo/v20220901/model/CachePrefreshParameters.h>
#include <tencentcloud/teo/v20220901/model/AccessURLRedirectParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamURLRewriteParameters.h>
#include <tencentcloud/teo/v20220901/model/QUICParameters.h>
#include <tencentcloud/teo/v20220901/model/WebSocketParameters.h>
#include <tencentcloud/teo/v20220901/model/AuthenticationParameters.h>
#include <tencentcloud/teo/v20220901/model/MaxAgeParameters.h>
#include <tencentcloud/teo/v20220901/model/StatusCodeCacheParameters.h>
#include <tencentcloud/teo/v20220901/model/OfflineCacheParameters.h>
#include <tencentcloud/teo/v20220901/model/SmartRoutingParameters.h>
#include <tencentcloud/teo/v20220901/model/RangeOriginPullParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamHTTP2Parameters.h>
#include <tencentcloud/teo/v20220901/model/HostHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/ForceRedirectHTTPSParameters.h>
#include <tencentcloud/teo/v20220901/model/CompressionParameters.h>
#include <tencentcloud/teo/v20220901/model/HSTSParameters.h>
#include <tencentcloud/teo/v20220901/model/ClientIPHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/OCSPStaplingParameters.h>
#include <tencentcloud/teo/v20220901/model/HTTP2Parameters.h>
#include <tencentcloud/teo/v20220901/model/PostMaxSizeParameters.h>
#include <tencentcloud/teo/v20220901/model/ClientIPCountryParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamFollowRedirectParameters.h>
#include <tencentcloud/teo/v20220901/model/UpstreamRequestParameters.h>
#include <tencentcloud/teo/v20220901/model/TLSConfigParameters.h>
#include <tencentcloud/teo/v20220901/model/ModifyOriginParameters.h>
#include <tencentcloud/teo/v20220901/model/HTTPUpstreamTimeoutParameters.h>
#include <tencentcloud/teo/v20220901/model/HTTPResponseParameters.h>
#include <tencentcloud/teo/v20220901/model/ErrorPageParameters.h>
#include <tencentcloud/teo/v20220901/model/ModifyResponseHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/ModifyRequestHeaderParameters.h>
#include <tencentcloud/teo/v20220901/model/ResponseSpeedLimitParameters.h>
#include <tencentcloud/teo/v20220901/model/SetContentIdentifierParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Rule engine operations.
                */
                class RuleEngineAction : public AbstractModel
                {
                public:
                    RuleEngineAction();
                    ~RuleEngineAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
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
                     * 获取Node cache ttl configuration parameter. when name is cache, this parameter is required.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return CacheParameters Node cache ttl configuration parameter. when name is cache, this parameter is required.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    CacheParameters GetCacheParameters() const;

                    /**
                     * 设置Node cache ttl configuration parameter. when name is cache, this parameter is required.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _cacheParameters Node cache ttl configuration parameter. when name is cache, this parameter is required.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetCacheParameters(const CacheParameters& _cacheParameters);

                    /**
                     * 判断参数 CacheParameters 是否已赋值
                     * @return CacheParameters 是否已赋值
                     * 
                     */
                    bool CacheParametersHasBeenSet() const;

                    /**
                     * 获取Custom cache key configuration parameter. when name is cachekey, this parameter is required.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return CacheKeyParameters Custom cache key configuration parameter. when name is cachekey, this parameter is required.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    CacheKeyParameters GetCacheKeyParameters() const;

                    /**
                     * 设置Custom cache key configuration parameter. when name is cachekey, this parameter is required.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _cacheKeyParameters Custom cache key configuration parameter. when name is cachekey, this parameter is required.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetCacheKeyParameters(const CacheKeyParameters& _cacheKeyParameters);

                    /**
                     * 判断参数 CacheKeyParameters 是否已赋值
                     * @return CacheKeyParameters 是否已赋值
                     * 
                     */
                    bool CacheKeyParametersHasBeenSet() const;

                    /**
                     * 获取The cache prefresh configuration parameter. this parameter is required when `name` is `cacheprefresh`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return CachePrefreshParameters The cache prefresh configuration parameter. this parameter is required when `name` is `cacheprefresh`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    CachePrefreshParameters GetCachePrefreshParameters() const;

                    /**
                     * 设置The cache prefresh configuration parameter. this parameter is required when `name` is `cacheprefresh`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _cachePrefreshParameters The cache prefresh configuration parameter. this parameter is required when `name` is `cacheprefresh`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetCachePrefreshParameters(const CachePrefreshParameters& _cachePrefreshParameters);

                    /**
                     * 判断参数 CachePrefreshParameters 是否已赋值
                     * @return CachePrefreshParameters 是否已赋值
                     * 
                     */
                    bool CachePrefreshParametersHasBeenSet() const;

                    /**
                     * 获取The access url redirection configuration parameter. this parameter is required when `name` is `accessurlredirect`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return AccessURLRedirectParameters The access url redirection configuration parameter. this parameter is required when `name` is `accessurlredirect`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    AccessURLRedirectParameters GetAccessURLRedirectParameters() const;

                    /**
                     * 设置The access url redirection configuration parameter. this parameter is required when `name` is `accessurlredirect`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _accessURLRedirectParameters The access url redirection configuration parameter. this parameter is required when `name` is `accessurlredirect`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetAccessURLRedirectParameters(const AccessURLRedirectParameters& _accessURLRedirectParameters);

                    /**
                     * 判断参数 AccessURLRedirectParameters 是否已赋值
                     * @return AccessURLRedirectParameters 是否已赋值
                     * 
                     */
                    bool AccessURLRedirectParametersHasBeenSet() const;

                    /**
                     * 获取The origin-pull url rewrite configuration parameter. this parameter is required when `name` is `upstreamurlrewrite`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return UpstreamURLRewriteParameters The origin-pull url rewrite configuration parameter. this parameter is required when `name` is `upstreamurlrewrite`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    UpstreamURLRewriteParameters GetUpstreamURLRewriteParameters() const;

                    /**
                     * 设置The origin-pull url rewrite configuration parameter. this parameter is required when `name` is `upstreamurlrewrite`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _upstreamURLRewriteParameters The origin-pull url rewrite configuration parameter. this parameter is required when `name` is `upstreamurlrewrite`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetUpstreamURLRewriteParameters(const UpstreamURLRewriteParameters& _upstreamURLRewriteParameters);

                    /**
                     * 判断参数 UpstreamURLRewriteParameters 是否已赋值
                     * @return UpstreamURLRewriteParameters 是否已赋值
                     * 
                     */
                    bool UpstreamURLRewriteParametersHasBeenSet() const;

                    /**
                     * 获取The quic configuration parameter. this parameter is required when `name` is `quic`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return QUICParameters The quic configuration parameter. this parameter is required when `name` is `quic`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    QUICParameters GetQUICParameters() const;

                    /**
                     * 设置The quic configuration parameter. this parameter is required when `name` is `quic`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _qUICParameters The quic configuration parameter. this parameter is required when `name` is `quic`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetQUICParameters(const QUICParameters& _qUICParameters);

                    /**
                     * 判断参数 QUICParameters 是否已赋值
                     * @return QUICParameters 是否已赋值
                     * 
                     */
                    bool QUICParametersHasBeenSet() const;

                    /**
                     * 获取The websocket configuration parameter. this parameter is required when `name` is `websocket`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return WebSocketParameters The websocket configuration parameter. this parameter is required when `name` is `websocket`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    WebSocketParameters GetWebSocketParameters() const;

                    /**
                     * 设置The websocket configuration parameter. this parameter is required when `name` is `websocket`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _webSocketParameters The websocket configuration parameter. this parameter is required when `name` is `websocket`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetWebSocketParameters(const WebSocketParameters& _webSocketParameters);

                    /**
                     * 判断参数 WebSocketParameters 是否已赋值
                     * @return WebSocketParameters 是否已赋值
                     * 
                     */
                    bool WebSocketParametersHasBeenSet() const;

                    /**
                     * 获取Token authentication configuration parameter. this parameter is required when `name` is `authentication`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return AuthenticationParameters Token authentication configuration parameter. this parameter is required when `name` is `authentication`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    AuthenticationParameters GetAuthenticationParameters() const;

                    /**
                     * 设置Token authentication configuration parameter. this parameter is required when `name` is `authentication`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _authenticationParameters Token authentication configuration parameter. this parameter is required when `name` is `authentication`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetAuthenticationParameters(const AuthenticationParameters& _authenticationParameters);

                    /**
                     * 判断参数 AuthenticationParameters 是否已赋值
                     * @return AuthenticationParameters 是否已赋值
                     * 
                     */
                    bool AuthenticationParametersHasBeenSet() const;

                    /**
                     * 获取Browser cache ttl configuration parameter. this parameter is required when `name` is `maxage`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return MaxAgeParameters Browser cache ttl configuration parameter. this parameter is required when `name` is `maxage`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    MaxAgeParameters GetMaxAgeParameters() const;

                    /**
                     * 设置Browser cache ttl configuration parameter. this parameter is required when `name` is `maxage`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _maxAgeParameters Browser cache ttl configuration parameter. this parameter is required when `name` is `maxage`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetMaxAgeParameters(const MaxAgeParameters& _maxAgeParameters);

                    /**
                     * 判断参数 MaxAgeParameters 是否已赋值
                     * @return MaxAgeParameters 是否已赋值
                     * 
                     */
                    bool MaxAgeParametersHasBeenSet() const;

                    /**
                     * 获取Status code cache ttl configuration parameter. this parameter is required when `name` is `statuscodecache`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return StatusCodeCacheParameters Status code cache ttl configuration parameter. this parameter is required when `name` is `statuscodecache`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    StatusCodeCacheParameters GetStatusCodeCacheParameters() const;

                    /**
                     * 设置Status code cache ttl configuration parameter. this parameter is required when `name` is `statuscodecache`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _statusCodeCacheParameters Status code cache ttl configuration parameter. this parameter is required when `name` is `statuscodecache`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetStatusCodeCacheParameters(const StatusCodeCacheParameters& _statusCodeCacheParameters);

                    /**
                     * 判断参数 StatusCodeCacheParameters 是否已赋值
                     * @return StatusCodeCacheParameters 是否已赋值
                     * 
                     */
                    bool StatusCodeCacheParametersHasBeenSet() const;

                    /**
                     * 获取Offline cache configuration parameter. this parameter is required when `name` is `offlinecache`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return OfflineCacheParameters Offline cache configuration parameter. this parameter is required when `name` is `offlinecache`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    OfflineCacheParameters GetOfflineCacheParameters() const;

                    /**
                     * 设置Offline cache configuration parameter. this parameter is required when `name` is `offlinecache`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _offlineCacheParameters Offline cache configuration parameter. this parameter is required when `name` is `offlinecache`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetOfflineCacheParameters(const OfflineCacheParameters& _offlineCacheParameters);

                    /**
                     * 判断参数 OfflineCacheParameters 是否已赋值
                     * @return OfflineCacheParameters 是否已赋值
                     * 
                     */
                    bool OfflineCacheParametersHasBeenSet() const;

                    /**
                     * 获取Smart acceleration configuration parameter. this parameter is required when `name` is `smartrouting`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return SmartRoutingParameters Smart acceleration configuration parameter. this parameter is required when `name` is `smartrouting`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    SmartRoutingParameters GetSmartRoutingParameters() const;

                    /**
                     * 设置Smart acceleration configuration parameter. this parameter is required when `name` is `smartrouting`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _smartRoutingParameters Smart acceleration configuration parameter. this parameter is required when `name` is `smartrouting`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetSmartRoutingParameters(const SmartRoutingParameters& _smartRoutingParameters);

                    /**
                     * 判断参数 SmartRoutingParameters 是否已赋值
                     * @return SmartRoutingParameters 是否已赋值
                     * 
                     */
                    bool SmartRoutingParametersHasBeenSet() const;

                    /**
                     * 获取Shard source retrieval configuration parameter. this parameter is required when name is set to rangeoriginpull.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return RangeOriginPullParameters Shard source retrieval configuration parameter. this parameter is required when name is set to rangeoriginpull.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    RangeOriginPullParameters GetRangeOriginPullParameters() const;

                    /**
                     * 设置Shard source retrieval configuration parameter. this parameter is required when name is set to rangeoriginpull.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _rangeOriginPullParameters Shard source retrieval configuration parameter. this parameter is required when name is set to rangeoriginpull.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetRangeOriginPullParameters(const RangeOriginPullParameters& _rangeOriginPullParameters);

                    /**
                     * 判断参数 RangeOriginPullParameters 是否已赋值
                     * @return RangeOriginPullParameters 是否已赋值
                     * 
                     */
                    bool RangeOriginPullParametersHasBeenSet() const;

                    /**
                     * 获取HTTP2 origin-pull configuration parameter. this parameter is required when name is set to upstreamhttp2.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return UpstreamHTTP2Parameters HTTP2 origin-pull configuration parameter. this parameter is required when name is set to upstreamhttp2.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    UpstreamHTTP2Parameters GetUpstreamHTTP2Parameters() const;

                    /**
                     * 设置HTTP2 origin-pull configuration parameter. this parameter is required when name is set to upstreamhttp2.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _upstreamHTTP2Parameters HTTP2 origin-pull configuration parameter. this parameter is required when name is set to upstreamhttp2.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetUpstreamHTTP2Parameters(const UpstreamHTTP2Parameters& _upstreamHTTP2Parameters);

                    /**
                     * 判断参数 UpstreamHTTP2Parameters 是否已赋值
                     * @return UpstreamHTTP2Parameters 是否已赋值
                     * 
                     */
                    bool UpstreamHTTP2ParametersHasBeenSet() const;

                    /**
                     * 获取Host header rewrite configuration parameter. this parameter is required when name is set to hostheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return HostHeaderParameters Host header rewrite configuration parameter. this parameter is required when name is set to hostheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    HostHeaderParameters GetHostHeaderParameters() const;

                    /**
                     * 设置Host header rewrite configuration parameter. this parameter is required when name is set to hostheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _hostHeaderParameters Host header rewrite configuration parameter. this parameter is required when name is set to hostheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetHostHeaderParameters(const HostHeaderParameters& _hostHeaderParameters);

                    /**
                     * 判断参数 HostHeaderParameters 是否已赋值
                     * @return HostHeaderParameters 是否已赋值
                     * 
                     */
                    bool HostHeaderParametersHasBeenSet() const;

                    /**
                     * 获取Force https redirect configuration parameter. this parameter is required when the name is set to forceredirecthttps.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return ForceRedirectHTTPSParameters Force https redirect configuration parameter. this parameter is required when the name is set to forceredirecthttps.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    ForceRedirectHTTPSParameters GetForceRedirectHTTPSParameters() const;

                    /**
                     * 设置Force https redirect configuration parameter. this parameter is required when the name is set to forceredirecthttps.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _forceRedirectHTTPSParameters Force https redirect configuration parameter. this parameter is required when the name is set to forceredirecthttps.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetForceRedirectHTTPSParameters(const ForceRedirectHTTPSParameters& _forceRedirectHTTPSParameters);

                    /**
                     * 判断参数 ForceRedirectHTTPSParameters 是否已赋值
                     * @return ForceRedirectHTTPSParameters 是否已赋值
                     * 
                     */
                    bool ForceRedirectHTTPSParametersHasBeenSet() const;

                    /**
                     * 获取Intelligent compression configuration. this parameter is required when name is set to compression.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return CompressionParameters Intelligent compression configuration. this parameter is required when name is set to compression.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    CompressionParameters GetCompressionParameters() const;

                    /**
                     * 设置Intelligent compression configuration. this parameter is required when name is set to compression.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _compressionParameters Intelligent compression configuration. this parameter is required when name is set to compression.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetCompressionParameters(const CompressionParameters& _compressionParameters);

                    /**
                     * 判断参数 CompressionParameters 是否已赋值
                     * @return CompressionParameters 是否已赋值
                     * 
                     */
                    bool CompressionParametersHasBeenSet() const;

                    /**
                     * 获取HSTS configuration parameter. this parameter is required when name is hsts.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return HSTSParameters HSTS configuration parameter. this parameter is required when name is hsts.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    HSTSParameters GetHSTSParameters() const;

                    /**
                     * 设置HSTS configuration parameter. this parameter is required when name is hsts.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _hSTSParameters HSTS configuration parameter. this parameter is required when name is hsts.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetHSTSParameters(const HSTSParameters& _hSTSParameters);

                    /**
                     * 判断参数 HSTSParameters 是否已赋值
                     * @return HSTSParameters 是否已赋值
                     * 
                     */
                    bool HSTSParametersHasBeenSet() const;

                    /**
                     * 获取Client ip header configuration for storing client request ip information. this parameter is required when name is clientipheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return ClientIPHeaderParameters Client ip header configuration for storing client request ip information. this parameter is required when name is clientipheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    ClientIPHeaderParameters GetClientIPHeaderParameters() const;

                    /**
                     * 设置Client ip header configuration for storing client request ip information. this parameter is required when name is clientipheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _clientIPHeaderParameters Client ip header configuration for storing client request ip information. this parameter is required when name is clientipheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetClientIPHeaderParameters(const ClientIPHeaderParameters& _clientIPHeaderParameters);

                    /**
                     * 判断参数 ClientIPHeaderParameters 是否已赋值
                     * @return ClientIPHeaderParameters 是否已赋值
                     * 
                     */
                    bool ClientIPHeaderParametersHasBeenSet() const;

                    /**
                     * 获取OCSP stapling configuration parameter. this parameter is required when the name is set to ocspstapling.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return OCSPStaplingParameters OCSP stapling configuration parameter. this parameter is required when the name is set to ocspstapling.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    OCSPStaplingParameters GetOCSPStaplingParameters() const;

                    /**
                     * 设置OCSP stapling configuration parameter. this parameter is required when the name is set to ocspstapling.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _oCSPStaplingParameters OCSP stapling configuration parameter. this parameter is required when the name is set to ocspstapling.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetOCSPStaplingParameters(const OCSPStaplingParameters& _oCSPStaplingParameters);

                    /**
                     * 判断参数 OCSPStaplingParameters 是否已赋值
                     * @return OCSPStaplingParameters 是否已赋值
                     * 
                     */
                    bool OCSPStaplingParametersHasBeenSet() const;

                    /**
                     * 获取HTTP2 access configuration parameter. this parameter is required when name is http2.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return HTTP2Parameters HTTP2 access configuration parameter. this parameter is required when name is http2.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    HTTP2Parameters GetHTTP2Parameters() const;

                    /**
                     * 设置HTTP2 access configuration parameter. this parameter is required when name is http2.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _hTTP2Parameters HTTP2 access configuration parameter. this parameter is required when name is http2.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetHTTP2Parameters(const HTTP2Parameters& _hTTP2Parameters);

                    /**
                     * 判断参数 HTTP2Parameters 是否已赋值
                     * @return HTTP2Parameters 是否已赋值
                     * 
                     */
                    bool HTTP2ParametersHasBeenSet() const;

                    /**
                     * 获取Maximum size configuration for file streaming upload via a post request. this parameter is required when name is postmaxsize.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return PostMaxSizeParameters Maximum size configuration for file streaming upload via a post request. this parameter is required when name is postmaxsize.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    PostMaxSizeParameters GetPostMaxSizeParameters() const;

                    /**
                     * 设置Maximum size configuration for file streaming upload via a post request. this parameter is required when name is postmaxsize.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _postMaxSizeParameters Maximum size configuration for file streaming upload via a post request. this parameter is required when name is postmaxsize.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetPostMaxSizeParameters(const PostMaxSizeParameters& _postMaxSizeParameters);

                    /**
                     * 判断参数 PostMaxSizeParameters 是否已赋值
                     * @return PostMaxSizeParameters 是否已赋值
                     * 
                     */
                    bool PostMaxSizeParametersHasBeenSet() const;

                    /**
                     * 获取Configuration parameter for carrying the region information of the client ip during origin-pull. this parameter is required when the name is set to clientipcountry.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return ClientIPCountryParameters Configuration parameter for carrying the region information of the client ip during origin-pull. this parameter is required when the name is set to clientipcountry.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    ClientIPCountryParameters GetClientIPCountryParameters() const;

                    /**
                     * 设置Configuration parameter for carrying the region information of the client ip during origin-pull. this parameter is required when the name is set to clientipcountry.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _clientIPCountryParameters Configuration parameter for carrying the region information of the client ip during origin-pull. this parameter is required when the name is set to clientipcountry.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetClientIPCountryParameters(const ClientIPCountryParameters& _clientIPCountryParameters);

                    /**
                     * 判断参数 ClientIPCountryParameters 是否已赋值
                     * @return ClientIPCountryParameters 是否已赋值
                     * 
                     */
                    bool ClientIPCountryParametersHasBeenSet() const;

                    /**
                     * 获取Configuration parameter for following redirects during origin-pull. this parameter is required when the name is set to upstreamfollowredirect.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return UpstreamFollowRedirectParameters Configuration parameter for following redirects during origin-pull. this parameter is required when the name is set to upstreamfollowredirect.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    UpstreamFollowRedirectParameters GetUpstreamFollowRedirectParameters() const;

                    /**
                     * 设置Configuration parameter for following redirects during origin-pull. this parameter is required when the name is set to upstreamfollowredirect.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _upstreamFollowRedirectParameters Configuration parameter for following redirects during origin-pull. this parameter is required when the name is set to upstreamfollowredirect.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetUpstreamFollowRedirectParameters(const UpstreamFollowRedirectParameters& _upstreamFollowRedirectParameters);

                    /**
                     * 判断参数 UpstreamFollowRedirectParameters 是否已赋值
                     * @return UpstreamFollowRedirectParameters 是否已赋值
                     * 
                     */
                    bool UpstreamFollowRedirectParametersHasBeenSet() const;

                    /**
                     * 获取Configuration parameter for origin-pull request. this parameter is required when the name is set to upstreamrequest.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return UpstreamRequestParameters Configuration parameter for origin-pull request. this parameter is required when the name is set to upstreamrequest.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    UpstreamRequestParameters GetUpstreamRequestParameters() const;

                    /**
                     * 设置Configuration parameter for origin-pull request. this parameter is required when the name is set to upstreamrequest.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _upstreamRequestParameters Configuration parameter for origin-pull request. this parameter is required when the name is set to upstreamrequest.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetUpstreamRequestParameters(const UpstreamRequestParameters& _upstreamRequestParameters);

                    /**
                     * 判断参数 UpstreamRequestParameters 是否已赋值
                     * @return UpstreamRequestParameters 是否已赋值
                     * 
                     */
                    bool UpstreamRequestParametersHasBeenSet() const;

                    /**
                     * 获取SSL/TLS security configuration parameter. this parameter is required when the name is set to tlsconfig.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return TLSConfigParameters SSL/TLS security configuration parameter. this parameter is required when the name is set to tlsconfig.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    TLSConfigParameters GetTLSConfigParameters() const;

                    /**
                     * 设置SSL/TLS security configuration parameter. this parameter is required when the name is set to tlsconfig.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _tLSConfigParameters SSL/TLS security configuration parameter. this parameter is required when the name is set to tlsconfig.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetTLSConfigParameters(const TLSConfigParameters& _tLSConfigParameters);

                    /**
                     * 判断参数 TLSConfigParameters 是否已赋值
                     * @return TLSConfigParameters 是否已赋值
                     * 
                     */
                    bool TLSConfigParametersHasBeenSet() const;

                    /**
                     * 获取Configuration parameter for modifying the origin server. this parameter is required when the name is set to modifyorigin.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return ModifyOriginParameters Configuration parameter for modifying the origin server. this parameter is required when the name is set to modifyorigin.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    ModifyOriginParameters GetModifyOriginParameters() const;

                    /**
                     * 设置Configuration parameter for modifying the origin server. this parameter is required when the name is set to modifyorigin.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _modifyOriginParameters Configuration parameter for modifying the origin server. this parameter is required when the name is set to modifyorigin.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetModifyOriginParameters(const ModifyOriginParameters& _modifyOriginParameters);

                    /**
                     * 判断参数 ModifyOriginParameters 是否已赋值
                     * @return ModifyOriginParameters 是否已赋值
                     * 
                     */
                    bool ModifyOriginParametersHasBeenSet() const;

                    /**
                     * 获取Configuration of layer 7 origin timeout. this parameter is required when name is httpupstreamtimeout.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return HTTPUpstreamTimeoutParameters Configuration of layer 7 origin timeout. this parameter is required when name is httpupstreamtimeout.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    HTTPUpstreamTimeoutParameters GetHTTPUpstreamTimeoutParameters() const;

                    /**
                     * 设置Configuration of layer 7 origin timeout. this parameter is required when name is httpupstreamtimeout.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _hTTPUpstreamTimeoutParameters Configuration of layer 7 origin timeout. this parameter is required when name is httpupstreamtimeout.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetHTTPUpstreamTimeoutParameters(const HTTPUpstreamTimeoutParameters& _hTTPUpstreamTimeoutParameters);

                    /**
                     * 判断参数 HTTPUpstreamTimeoutParameters 是否已赋值
                     * @return HTTPUpstreamTimeoutParameters 是否已赋值
                     * 
                     */
                    bool HTTPUpstreamTimeoutParametersHasBeenSet() const;

                    /**
                     * 获取HTTP response configuration parameters. this parameter is required when name is httpresponse.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return HttpResponseParameters HTTP response configuration parameters. this parameter is required when name is httpresponse.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    HTTPResponseParameters GetHttpResponseParameters() const;

                    /**
                     * 设置HTTP response configuration parameters. this parameter is required when name is httpresponse.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _httpResponseParameters HTTP response configuration parameters. this parameter is required when name is httpresponse.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetHttpResponseParameters(const HTTPResponseParameters& _httpResponseParameters);

                    /**
                     * 判断参数 HttpResponseParameters 是否已赋值
                     * @return HttpResponseParameters 是否已赋值
                     * 
                     */
                    bool HttpResponseParametersHasBeenSet() const;

                    /**
                     * 获取Custom error page configuration parameters. this parameter is required when name is errorpage.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return ErrorPageParameters Custom error page configuration parameters. this parameter is required when name is errorpage.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    ErrorPageParameters GetErrorPageParameters() const;

                    /**
                     * 设置Custom error page configuration parameters. this parameter is required when name is errorpage.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _errorPageParameters Custom error page configuration parameters. this parameter is required when name is errorpage.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetErrorPageParameters(const ErrorPageParameters& _errorPageParameters);

                    /**
                     * 判断参数 ErrorPageParameters 是否已赋值
                     * @return ErrorPageParameters 是否已赋值
                     * 
                     */
                    bool ErrorPageParametersHasBeenSet() const;

                    /**
                     * 获取Modify http node response header configuration parameters. this parameter is required when name is modifyresponseheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return ModifyResponseHeaderParameters Modify http node response header configuration parameters. this parameter is required when name is modifyresponseheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    ModifyResponseHeaderParameters GetModifyResponseHeaderParameters() const;

                    /**
                     * 设置Modify http node response header configuration parameters. this parameter is required when name is modifyresponseheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _modifyResponseHeaderParameters Modify http node response header configuration parameters. this parameter is required when name is modifyresponseheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetModifyResponseHeaderParameters(const ModifyResponseHeaderParameters& _modifyResponseHeaderParameters);

                    /**
                     * 判断参数 ModifyResponseHeaderParameters 是否已赋值
                     * @return ModifyResponseHeaderParameters 是否已赋值
                     * 
                     */
                    bool ModifyResponseHeaderParametersHasBeenSet() const;

                    /**
                     * 获取Modify http node request header configuration parameters. this parameter is required when name is modifyrequestheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return ModifyRequestHeaderParameters Modify http node request header configuration parameters. this parameter is required when name is modifyrequestheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    ModifyRequestHeaderParameters GetModifyRequestHeaderParameters() const;

                    /**
                     * 设置Modify http node request header configuration parameters. this parameter is required when name is modifyrequestheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _modifyRequestHeaderParameters Modify http node request header configuration parameters. this parameter is required when name is modifyrequestheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetModifyRequestHeaderParameters(const ModifyRequestHeaderParameters& _modifyRequestHeaderParameters);

                    /**
                     * 判断参数 ModifyRequestHeaderParameters 是否已赋值
                     * @return ModifyRequestHeaderParameters 是否已赋值
                     * 
                     */
                    bool ModifyRequestHeaderParametersHasBeenSet() const;

                    /**
                     * 获取Single connection download speed limit configuration parameter. this parameter is required when name is responsespeedlimit.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return ResponseSpeedLimitParameters Single connection download speed limit configuration parameter. this parameter is required when name is responsespeedlimit.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    ResponseSpeedLimitParameters GetResponseSpeedLimitParameters() const;

                    /**
                     * 设置Single connection download speed limit configuration parameter. this parameter is required when name is responsespeedlimit.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _responseSpeedLimitParameters Single connection download speed limit configuration parameter. this parameter is required when name is responsespeedlimit.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetResponseSpeedLimitParameters(const ResponseSpeedLimitParameters& _responseSpeedLimitParameters);

                    /**
                     * 判断参数 ResponseSpeedLimitParameters 是否已赋值
                     * @return ResponseSpeedLimitParameters 是否已赋值
                     * 
                     */
                    bool ResponseSpeedLimitParametersHasBeenSet() const;

                    /**
                     * 获取Content identification configuration parameter. this parameter is required when name is httpresponse.

Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return SetContentIdentifierParameters Content identification configuration parameter. this parameter is required when name is httpresponse.

Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    SetContentIdentifierParameters GetSetContentIdentifierParameters() const;

                    /**
                     * 设置Content identification configuration parameter. this parameter is required when name is httpresponse.

Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _setContentIdentifierParameters Content identification configuration parameter. this parameter is required when name is httpresponse.

Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetSetContentIdentifierParameters(const SetContentIdentifierParameters& _setContentIdentifierParameters);

                    /**
                     * 判断参数 SetContentIdentifierParameters 是否已赋值
                     * @return SetContentIdentifierParameters 是否已赋值
                     * 
                     */
                    bool SetContentIdentifierParametersHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Node cache ttl configuration parameter. when name is cache, this parameter is required.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    CacheParameters m_cacheParameters;
                    bool m_cacheParametersHasBeenSet;

                    /**
                     * Custom cache key configuration parameter. when name is cachekey, this parameter is required.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    CacheKeyParameters m_cacheKeyParameters;
                    bool m_cacheKeyParametersHasBeenSet;

                    /**
                     * The cache prefresh configuration parameter. this parameter is required when `name` is `cacheprefresh`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    CachePrefreshParameters m_cachePrefreshParameters;
                    bool m_cachePrefreshParametersHasBeenSet;

                    /**
                     * The access url redirection configuration parameter. this parameter is required when `name` is `accessurlredirect`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    AccessURLRedirectParameters m_accessURLRedirectParameters;
                    bool m_accessURLRedirectParametersHasBeenSet;

                    /**
                     * The origin-pull url rewrite configuration parameter. this parameter is required when `name` is `upstreamurlrewrite`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    UpstreamURLRewriteParameters m_upstreamURLRewriteParameters;
                    bool m_upstreamURLRewriteParametersHasBeenSet;

                    /**
                     * The quic configuration parameter. this parameter is required when `name` is `quic`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    QUICParameters m_qUICParameters;
                    bool m_qUICParametersHasBeenSet;

                    /**
                     * The websocket configuration parameter. this parameter is required when `name` is `websocket`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    WebSocketParameters m_webSocketParameters;
                    bool m_webSocketParametersHasBeenSet;

                    /**
                     * Token authentication configuration parameter. this parameter is required when `name` is `authentication`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    AuthenticationParameters m_authenticationParameters;
                    bool m_authenticationParametersHasBeenSet;

                    /**
                     * Browser cache ttl configuration parameter. this parameter is required when `name` is `maxage`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    MaxAgeParameters m_maxAgeParameters;
                    bool m_maxAgeParametersHasBeenSet;

                    /**
                     * Status code cache ttl configuration parameter. this parameter is required when `name` is `statuscodecache`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    StatusCodeCacheParameters m_statusCodeCacheParameters;
                    bool m_statusCodeCacheParametersHasBeenSet;

                    /**
                     * Offline cache configuration parameter. this parameter is required when `name` is `offlinecache`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    OfflineCacheParameters m_offlineCacheParameters;
                    bool m_offlineCacheParametersHasBeenSet;

                    /**
                     * Smart acceleration configuration parameter. this parameter is required when `name` is `smartrouting`.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    SmartRoutingParameters m_smartRoutingParameters;
                    bool m_smartRoutingParametersHasBeenSet;

                    /**
                     * Shard source retrieval configuration parameter. this parameter is required when name is set to rangeoriginpull.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    RangeOriginPullParameters m_rangeOriginPullParameters;
                    bool m_rangeOriginPullParametersHasBeenSet;

                    /**
                     * HTTP2 origin-pull configuration parameter. this parameter is required when name is set to upstreamhttp2.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    UpstreamHTTP2Parameters m_upstreamHTTP2Parameters;
                    bool m_upstreamHTTP2ParametersHasBeenSet;

                    /**
                     * Host header rewrite configuration parameter. this parameter is required when name is set to hostheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    HostHeaderParameters m_hostHeaderParameters;
                    bool m_hostHeaderParametersHasBeenSet;

                    /**
                     * Force https redirect configuration parameter. this parameter is required when the name is set to forceredirecthttps.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    ForceRedirectHTTPSParameters m_forceRedirectHTTPSParameters;
                    bool m_forceRedirectHTTPSParametersHasBeenSet;

                    /**
                     * Intelligent compression configuration. this parameter is required when name is set to compression.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    CompressionParameters m_compressionParameters;
                    bool m_compressionParametersHasBeenSet;

                    /**
                     * HSTS configuration parameter. this parameter is required when name is hsts.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    HSTSParameters m_hSTSParameters;
                    bool m_hSTSParametersHasBeenSet;

                    /**
                     * Client ip header configuration for storing client request ip information. this parameter is required when name is clientipheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    ClientIPHeaderParameters m_clientIPHeaderParameters;
                    bool m_clientIPHeaderParametersHasBeenSet;

                    /**
                     * OCSP stapling configuration parameter. this parameter is required when the name is set to ocspstapling.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    OCSPStaplingParameters m_oCSPStaplingParameters;
                    bool m_oCSPStaplingParametersHasBeenSet;

                    /**
                     * HTTP2 access configuration parameter. this parameter is required when name is http2.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    HTTP2Parameters m_hTTP2Parameters;
                    bool m_hTTP2ParametersHasBeenSet;

                    /**
                     * Maximum size configuration for file streaming upload via a post request. this parameter is required when name is postmaxsize.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    PostMaxSizeParameters m_postMaxSizeParameters;
                    bool m_postMaxSizeParametersHasBeenSet;

                    /**
                     * Configuration parameter for carrying the region information of the client ip during origin-pull. this parameter is required when the name is set to clientipcountry.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    ClientIPCountryParameters m_clientIPCountryParameters;
                    bool m_clientIPCountryParametersHasBeenSet;

                    /**
                     * Configuration parameter for following redirects during origin-pull. this parameter is required when the name is set to upstreamfollowredirect.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    UpstreamFollowRedirectParameters m_upstreamFollowRedirectParameters;
                    bool m_upstreamFollowRedirectParametersHasBeenSet;

                    /**
                     * Configuration parameter for origin-pull request. this parameter is required when the name is set to upstreamrequest.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    UpstreamRequestParameters m_upstreamRequestParameters;
                    bool m_upstreamRequestParametersHasBeenSet;

                    /**
                     * SSL/TLS security configuration parameter. this parameter is required when the name is set to tlsconfig.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    TLSConfigParameters m_tLSConfigParameters;
                    bool m_tLSConfigParametersHasBeenSet;

                    /**
                     * Configuration parameter for modifying the origin server. this parameter is required when the name is set to modifyorigin.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    ModifyOriginParameters m_modifyOriginParameters;
                    bool m_modifyOriginParametersHasBeenSet;

                    /**
                     * Configuration of layer 7 origin timeout. this parameter is required when name is httpupstreamtimeout.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    HTTPUpstreamTimeoutParameters m_hTTPUpstreamTimeoutParameters;
                    bool m_hTTPUpstreamTimeoutParametersHasBeenSet;

                    /**
                     * HTTP response configuration parameters. this parameter is required when name is httpresponse.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    HTTPResponseParameters m_httpResponseParameters;
                    bool m_httpResponseParametersHasBeenSet;

                    /**
                     * Custom error page configuration parameters. this parameter is required when name is errorpage.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    ErrorPageParameters m_errorPageParameters;
                    bool m_errorPageParametersHasBeenSet;

                    /**
                     * Modify http node response header configuration parameters. this parameter is required when name is modifyresponseheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    ModifyResponseHeaderParameters m_modifyResponseHeaderParameters;
                    bool m_modifyResponseHeaderParametersHasBeenSet;

                    /**
                     * Modify http node request header configuration parameters. this parameter is required when name is modifyrequestheader.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    ModifyRequestHeaderParameters m_modifyRequestHeaderParameters;
                    bool m_modifyRequestHeaderParametersHasBeenSet;

                    /**
                     * Single connection download speed limit configuration parameter. this parameter is required when name is responsespeedlimit.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    ResponseSpeedLimitParameters m_responseSpeedLimitParameters;
                    bool m_responseSpeedLimitParametersHasBeenSet;

                    /**
                     * Content identification configuration parameter. this parameter is required when name is httpresponse.

Note: this field may return null, which indicates a failure to obtain a valid value.
                     */
                    SetContentIdentifierParameters m_setContentIdentifierParameters;
                    bool m_setContentIdentifierParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINEACTION_H_
