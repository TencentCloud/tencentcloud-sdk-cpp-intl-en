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
                * Rule engine action. Each feature supports only one of the following three action types. The `RuleAction` array can be of only one of the following types. For all details, see [DescribeRulesSetting](https://intl.cloud.tencent.com/document/product/1552/80618?from_cn_redirect=1).
                */
                class Action : public AbstractModel
                {
                public:
                    Action();
                    ~Action() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Common feature operations. the options for this category include:.
<Li>Access url rewrite (`accessurlredirect`).</li>.
<Li> origin url overriding (upstreamurlredirect);</li>.
<Li> quic;</li>.
<Li> websocket;</li>.
<Li> video dragging (videoseek);</li>.
<Li> token authentication (authentication);</li>.
<Li> custom cachekey (cachekey);</li>.
<Li> node caching ttl (cache);</li>.
<Li> browser cache ttl (maxage);</li>.
<Li> offline caching (offlinecache);</li>.
<Li> smart acceleration (smartrouting);</li>.
<Li> range-based origin pull (rangeoriginpull);</li>.
<Li> http/2 origin pull (upstreamhttp2);</li>.
<Li> host header overriding (hostheader);</li>.
<Li> force https (forceredirect);</li>.
<Li> https origin pull (originpullprotocol);</li>.
<Li>`ResponseSpeedLimit`: single connection download speed limit.</li>.
<Li>`CachePrefresh`: cache prefresh.</li>.
<Li>`Compression`: smart compression.</li>.
<Li>Hsts;</Li>.
<Li>ClientIpHeader;</Li>.
<Li> ssltlssecureconf;</li>.
<Li> ocspstapling;</li>.
<Li> http/2 access (http2);</li>.
<Li> redirection during origin pull (upstreamfollowredirect);</li>.
<Li> modifying origin server (origin);</li>.
<Li> layer 7 origin pull timeout (httpupstreamtimeout).</li>.
<Li> http response (httpresponse).</li>.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @return NormalAction Common feature operations. the options for this category include:.
<Li>Access url rewrite (`accessurlredirect`).</li>.
<Li> origin url overriding (upstreamurlredirect);</li>.
<Li> quic;</li>.
<Li> websocket;</li>.
<Li> video dragging (videoseek);</li>.
<Li> token authentication (authentication);</li>.
<Li> custom cachekey (cachekey);</li>.
<Li> node caching ttl (cache);</li>.
<Li> browser cache ttl (maxage);</li>.
<Li> offline caching (offlinecache);</li>.
<Li> smart acceleration (smartrouting);</li>.
<Li> range-based origin pull (rangeoriginpull);</li>.
<Li> http/2 origin pull (upstreamhttp2);</li>.
<Li> host header overriding (hostheader);</li>.
<Li> force https (forceredirect);</li>.
<Li> https origin pull (originpullprotocol);</li>.
<Li>`ResponseSpeedLimit`: single connection download speed limit.</li>.
<Li>`CachePrefresh`: cache prefresh.</li>.
<Li>`Compression`: smart compression.</li>.
<Li>Hsts;</Li>.
<Li>ClientIpHeader;</Li>.
<Li> ssltlssecureconf;</li>.
<Li> ocspstapling;</li>.
<Li> http/2 access (http2);</li>.
<Li> redirection during origin pull (upstreamfollowredirect);</li>.
<Li> modifying origin server (origin);</li>.
<Li> layer 7 origin pull timeout (httpupstreamtimeout).</li>.
<Li> http response (httpresponse).</li>.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    NormalAction GetNormalAction() const;

                    /**
                     * 设置Common feature operations. the options for this category include:.
<Li>Access url rewrite (`accessurlredirect`).</li>.
<Li> origin url overriding (upstreamurlredirect);</li>.
<Li> quic;</li>.
<Li> websocket;</li>.
<Li> video dragging (videoseek);</li>.
<Li> token authentication (authentication);</li>.
<Li> custom cachekey (cachekey);</li>.
<Li> node caching ttl (cache);</li>.
<Li> browser cache ttl (maxage);</li>.
<Li> offline caching (offlinecache);</li>.
<Li> smart acceleration (smartrouting);</li>.
<Li> range-based origin pull (rangeoriginpull);</li>.
<Li> http/2 origin pull (upstreamhttp2);</li>.
<Li> host header overriding (hostheader);</li>.
<Li> force https (forceredirect);</li>.
<Li> https origin pull (originpullprotocol);</li>.
<Li>`ResponseSpeedLimit`: single connection download speed limit.</li>.
<Li>`CachePrefresh`: cache prefresh.</li>.
<Li>`Compression`: smart compression.</li>.
<Li>Hsts;</Li>.
<Li>ClientIpHeader;</Li>.
<Li> ssltlssecureconf;</li>.
<Li> ocspstapling;</li>.
<Li> http/2 access (http2);</li>.
<Li> redirection during origin pull (upstreamfollowredirect);</li>.
<Li> modifying origin server (origin);</li>.
<Li> layer 7 origin pull timeout (httpupstreamtimeout).</li>.
<Li> http response (httpresponse).</li>.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * @param _normalAction Common feature operations. the options for this category include:.
<Li>Access url rewrite (`accessurlredirect`).</li>.
<Li> origin url overriding (upstreamurlredirect);</li>.
<Li> quic;</li>.
<Li> websocket;</li>.
<Li> video dragging (videoseek);</li>.
<Li> token authentication (authentication);</li>.
<Li> custom cachekey (cachekey);</li>.
<Li> node caching ttl (cache);</li>.
<Li> browser cache ttl (maxage);</li>.
<Li> offline caching (offlinecache);</li>.
<Li> smart acceleration (smartrouting);</li>.
<Li> range-based origin pull (rangeoriginpull);</li>.
<Li> http/2 origin pull (upstreamhttp2);</li>.
<Li> host header overriding (hostheader);</li>.
<Li> force https (forceredirect);</li>.
<Li> https origin pull (originpullprotocol);</li>.
<Li>`ResponseSpeedLimit`: single connection download speed limit.</li>.
<Li>`CachePrefresh`: cache prefresh.</li>.
<Li>`Compression`: smart compression.</li>.
<Li>Hsts;</Li>.
<Li>ClientIpHeader;</Li>.
<Li> ssltlssecureconf;</li>.
<Li> ocspstapling;</li>.
<Li> http/2 access (http2);</li>.
<Li> redirection during origin pull (upstreamfollowredirect);</li>.
<Li> modifying origin server (origin);</li>.
<Li> layer 7 origin pull timeout (httpupstreamtimeout).</li>.
<Li> http response (httpresponse).</li>.
Note: this field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetNormalAction(const NormalAction& _normalAction);

                    /**
                     * 判断参数 NormalAction 是否已赋值
                     * @return NormalAction 是否已赋值
                     * 
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
                     * 
                     */
                    RewriteAction GetRewriteAction() const;

                    /**
                     * 设置Feature operation with a request/response header. Features of this type include:
<li>`RequestHeader`: HTTP request header modification.</li>
<li>`ResponseHeader`: HTTP response header modification.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rewriteAction Feature operation with a request/response header. Features of this type include:
<li>`RequestHeader`: HTTP request header modification.</li>
<li>`ResponseHeader`: HTTP response header modification.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRewriteAction(const RewriteAction& _rewriteAction);

                    /**
                     * 判断参数 RewriteAction 是否已赋值
                     * @return RewriteAction 是否已赋值
                     * 
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
                     * 
                     */
                    CodeAction GetCodeAction() const;

                    /**
                     * 设置Feature operation with a status code. Features of this type include:
<li>`ErrorPage`: Custom error page.</li>
<li>`StatusCodeCache`: Status code cache TTL.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _codeAction Feature operation with a status code. Features of this type include:
<li>`ErrorPage`: Custom error page.</li>
<li>`StatusCodeCache`: Status code cache TTL.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCodeAction(const CodeAction& _codeAction);

                    /**
                     * 判断参数 CodeAction 是否已赋值
                     * @return CodeAction 是否已赋值
                     * 
                     */
                    bool CodeActionHasBeenSet() const;

                private:

                    /**
                     * Common feature operations. the options for this category include:.
<Li>Access url rewrite (`accessurlredirect`).</li>.
<Li> origin url overriding (upstreamurlredirect);</li>.
<Li> quic;</li>.
<Li> websocket;</li>.
<Li> video dragging (videoseek);</li>.
<Li> token authentication (authentication);</li>.
<Li> custom cachekey (cachekey);</li>.
<Li> node caching ttl (cache);</li>.
<Li> browser cache ttl (maxage);</li>.
<Li> offline caching (offlinecache);</li>.
<Li> smart acceleration (smartrouting);</li>.
<Li> range-based origin pull (rangeoriginpull);</li>.
<Li> http/2 origin pull (upstreamhttp2);</li>.
<Li> host header overriding (hostheader);</li>.
<Li> force https (forceredirect);</li>.
<Li> https origin pull (originpullprotocol);</li>.
<Li>`ResponseSpeedLimit`: single connection download speed limit.</li>.
<Li>`CachePrefresh`: cache prefresh.</li>.
<Li>`Compression`: smart compression.</li>.
<Li>Hsts;</Li>.
<Li>ClientIpHeader;</Li>.
<Li> ssltlssecureconf;</li>.
<Li> ocspstapling;</li>.
<Li> http/2 access (http2);</li>.
<Li> redirection during origin pull (upstreamfollowredirect);</li>.
<Li> modifying origin server (origin);</li>.
<Li> layer 7 origin pull timeout (httpupstreamtimeout).</li>.
<Li> http response (httpresponse).</li>.
Note: this field may return null, which indicates a failure to obtain a valid value.
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
