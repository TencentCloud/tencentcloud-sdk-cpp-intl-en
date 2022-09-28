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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/NormalAction.h>
#include <tencentcloud/teo/v20220901/model/RewriteAction.h>
#include <tencentcloud/teo/v20220901/model/CodeAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Rule engine feature operation. A feature can be of only one of the following three types, so each item in the `RuleAction` array can be of only one of the following types. You can call the [DescribeRulesSetting](https://tcloud4api.woa.com/document/product/1657/79433?!preview&!document=1) API to view more requirements for entering feature items.
                */
                class Action : public AbstractModel
                {
                public:
                    Action();
                    ~Action() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Common feature operation. Features of this type include:
<li>`AccessUrlRedirect`: Access URL rewrite.</li>
<li>`UpstreamUrlRedirect`: Origin-pull URL rewrite.</li>
<li>`QUIC`: QUIC.</li>
<li>`WebSocket`: WebSocket.</li>
<li>`VideoSeek`: Video dragging.</li>
<li>`Authentication`: Token authentication.</li>
<li>`CacheKey`: Custom cache key.</li>
<li>`Cache`: Node cache TTL.</li>
<li>`MaxAge`: Browser cache TTL.</li>
<li>`OfflineCache`: Offline cache.</li>
<li>`SmartRouting`: Smart acceleration.</li>
<li>`RangeOriginPull`: Range GETs.</li>
<li>`UpstreamHttp2`: HTTP/2 forwarding.</li>
<li>`HostHeader`: Host header rewrite.</li>
<li>`ForceRedirect`: Force HTTPS.</li>
<li>`OriginPullProtocol`: Origin-pull HTTPS.</li>
<li>`CachePrefresh`: Cache prefresh.</li>
<li>`Compression`: Smart compression.</li>
<li>`Hsts`.</li>
<li>`ClientIpHeader`.</li>
<li>`TlsVersion`.</li>
<li>`OcspStapling`.</li>
<li>`Http2`: HTTP/2 access.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NormalAction Common feature operation. Features of this type include:
<li>`AccessUrlRedirect`: Access URL rewrite.</li>
<li>`UpstreamUrlRedirect`: Origin-pull URL rewrite.</li>
<li>`QUIC`: QUIC.</li>
<li>`WebSocket`: WebSocket.</li>
<li>`VideoSeek`: Video dragging.</li>
<li>`Authentication`: Token authentication.</li>
<li>`CacheKey`: Custom cache key.</li>
<li>`Cache`: Node cache TTL.</li>
<li>`MaxAge`: Browser cache TTL.</li>
<li>`OfflineCache`: Offline cache.</li>
<li>`SmartRouting`: Smart acceleration.</li>
<li>`RangeOriginPull`: Range GETs.</li>
<li>`UpstreamHttp2`: HTTP/2 forwarding.</li>
<li>`HostHeader`: Host header rewrite.</li>
<li>`ForceRedirect`: Force HTTPS.</li>
<li>`OriginPullProtocol`: Origin-pull HTTPS.</li>
<li>`CachePrefresh`: Cache prefresh.</li>
<li>`Compression`: Smart compression.</li>
<li>`Hsts`.</li>
<li>`ClientIpHeader`.</li>
<li>`TlsVersion`.</li>
<li>`OcspStapling`.</li>
<li>`Http2`: HTTP/2 access.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NormalAction GetNormalAction() const;

                    /**
                     * 设置Common feature operation. Features of this type include:
<li>`AccessUrlRedirect`: Access URL rewrite.</li>
<li>`UpstreamUrlRedirect`: Origin-pull URL rewrite.</li>
<li>`QUIC`: QUIC.</li>
<li>`WebSocket`: WebSocket.</li>
<li>`VideoSeek`: Video dragging.</li>
<li>`Authentication`: Token authentication.</li>
<li>`CacheKey`: Custom cache key.</li>
<li>`Cache`: Node cache TTL.</li>
<li>`MaxAge`: Browser cache TTL.</li>
<li>`OfflineCache`: Offline cache.</li>
<li>`SmartRouting`: Smart acceleration.</li>
<li>`RangeOriginPull`: Range GETs.</li>
<li>`UpstreamHttp2`: HTTP/2 forwarding.</li>
<li>`HostHeader`: Host header rewrite.</li>
<li>`ForceRedirect`: Force HTTPS.</li>
<li>`OriginPullProtocol`: Origin-pull HTTPS.</li>
<li>`CachePrefresh`: Cache prefresh.</li>
<li>`Compression`: Smart compression.</li>
<li>`Hsts`.</li>
<li>`ClientIpHeader`.</li>
<li>`TlsVersion`.</li>
<li>`OcspStapling`.</li>
<li>`Http2`: HTTP/2 access.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param NormalAction Common feature operation. Features of this type include:
<li>`AccessUrlRedirect`: Access URL rewrite.</li>
<li>`UpstreamUrlRedirect`: Origin-pull URL rewrite.</li>
<li>`QUIC`: QUIC.</li>
<li>`WebSocket`: WebSocket.</li>
<li>`VideoSeek`: Video dragging.</li>
<li>`Authentication`: Token authentication.</li>
<li>`CacheKey`: Custom cache key.</li>
<li>`Cache`: Node cache TTL.</li>
<li>`MaxAge`: Browser cache TTL.</li>
<li>`OfflineCache`: Offline cache.</li>
<li>`SmartRouting`: Smart acceleration.</li>
<li>`RangeOriginPull`: Range GETs.</li>
<li>`UpstreamHttp2`: HTTP/2 forwarding.</li>
<li>`HostHeader`: Host header rewrite.</li>
<li>`ForceRedirect`: Force HTTPS.</li>
<li>`OriginPullProtocol`: Origin-pull HTTPS.</li>
<li>`CachePrefresh`: Cache prefresh.</li>
<li>`Compression`: Smart compression.</li>
<li>`Hsts`.</li>
<li>`ClientIpHeader`.</li>
<li>`TlsVersion`.</li>
<li>`OcspStapling`.</li>
<li>`Http2`: HTTP/2 access.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNormalAction(const NormalAction& _normalAction);

                    /**
                     * 判断参数 NormalAction 是否已赋值
                     * @return NormalAction 是否已赋值
                     */
                    bool NormalActionHasBeenSet() const;

                    /**
                     * 获取Feature operation with a request/response header. Features of this type include:
<li>`RequestHeader`: HTTP request header modification.</li>
<li>`ResponseHeader`: HTTP response header modification.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RewriteAction Feature operation with a request/response header. Features of this type include:
<li>`RequestHeader`: HTTP request header modification.</li>
<li>`ResponseHeader`: HTTP response header modification.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RewriteAction GetRewriteAction() const;

                    /**
                     * 设置Feature operation with a request/response header. Features of this type include:
<li>`RequestHeader`: HTTP request header modification.</li>
<li>`ResponseHeader`: HTTP response header modification.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RewriteAction Feature operation with a request/response header. Features of this type include:
<li>`RequestHeader`: HTTP request header modification.</li>
<li>`ResponseHeader`: HTTP response header modification.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRewriteAction(const RewriteAction& _rewriteAction);

                    /**
                     * 判断参数 RewriteAction 是否已赋值
                     * @return RewriteAction 是否已赋值
                     */
                    bool RewriteActionHasBeenSet() const;

                    /**
                     * 获取Feature operation with a status code. Features of this type include:
<li>`ErrorPage`: Custom error page.</li>
<li>`StatusCodeCache`: Status code cache TTL.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CodeAction Feature operation with a status code. Features of this type include:
<li>`ErrorPage`: Custom error page.</li>
<li>`StatusCodeCache`: Status code cache TTL.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CodeAction GetCodeAction() const;

                    /**
                     * 设置Feature operation with a status code. Features of this type include:
<li>`ErrorPage`: Custom error page.</li>
<li>`StatusCodeCache`: Status code cache TTL.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CodeAction Feature operation with a status code. Features of this type include:
<li>`ErrorPage`: Custom error page.</li>
<li>`StatusCodeCache`: Status code cache TTL.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCodeAction(const CodeAction& _codeAction);

                    /**
                     * 判断参数 CodeAction 是否已赋值
                     * @return CodeAction 是否已赋值
                     */
                    bool CodeActionHasBeenSet() const;

                private:

                    /**
                     * Common feature operation. Features of this type include:
<li>`AccessUrlRedirect`: Access URL rewrite.</li>
<li>`UpstreamUrlRedirect`: Origin-pull URL rewrite.</li>
<li>`QUIC`: QUIC.</li>
<li>`WebSocket`: WebSocket.</li>
<li>`VideoSeek`: Video dragging.</li>
<li>`Authentication`: Token authentication.</li>
<li>`CacheKey`: Custom cache key.</li>
<li>`Cache`: Node cache TTL.</li>
<li>`MaxAge`: Browser cache TTL.</li>
<li>`OfflineCache`: Offline cache.</li>
<li>`SmartRouting`: Smart acceleration.</li>
<li>`RangeOriginPull`: Range GETs.</li>
<li>`UpstreamHttp2`: HTTP/2 forwarding.</li>
<li>`HostHeader`: Host header rewrite.</li>
<li>`ForceRedirect`: Force HTTPS.</li>
<li>`OriginPullProtocol`: Origin-pull HTTPS.</li>
<li>`CachePrefresh`: Cache prefresh.</li>
<li>`Compression`: Smart compression.</li>
<li>`Hsts`.</li>
<li>`ClientIpHeader`.</li>
<li>`TlsVersion`.</li>
<li>`OcspStapling`.</li>
<li>`Http2`: HTTP/2 access.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    NormalAction m_normalAction;
                    bool m_normalActionHasBeenSet;

                    /**
                     * Feature operation with a request/response header. Features of this type include:
<li>`RequestHeader`: HTTP request header modification.</li>
<li>`ResponseHeader`: HTTP response header modification.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RewriteAction m_rewriteAction;
                    bool m_rewriteActionHasBeenSet;

                    /**
                     * Feature operation with a status code. Features of this type include:
<li>`ErrorPage`: Custom error page.</li>
<li>`StatusCodeCache`: Status code cache TTL.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    CodeAction m_codeAction;
                    bool m_codeActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACTION_H_
