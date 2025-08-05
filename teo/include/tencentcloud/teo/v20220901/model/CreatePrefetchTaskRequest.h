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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPREFETCHTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPREFETCHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Header.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreatePrefetchTask request structure.
                */
                class CreatePrefetchTaskRequest : public AbstractModel
                {
                public:
                    CreatePrefetchTaskRequest();
                    ~CreatePrefetchTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.

If you wish to quickly submit Targets urls under different sites, you can fill in * as the value. but the premise is that the account calling this API must have the permission to all site resources under the root account.
                     * @return ZoneId Zone ID.

If you wish to quickly submit Targets urls under different sites, you can fill in * as the value. but the premise is that the account calling this API must have the permission to all site resources under the root account.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.

If you wish to quickly submit Targets urls under different sites, you can fill in * as the value. but the premise is that the account calling this API must have the permission to all site resources under the root account.
                     * @param _zoneId Zone ID.

If you wish to quickly submit Targets urls under different sites, you can fill in * as the value. but the premise is that the account calling this API must have the permission to all site resources under the root account.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取List of resources to be preheated. Each element format is similar to the following:
http://www.example.com/example.txt. The parameter value is currently required.
Note: The number of tasks that can be submitted is limited by the quota of a billing package. For details, see [Billing Overview] (https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).
                     * @return Targets List of resources to be preheated. Each element format is similar to the following:
http://www.example.com/example.txt. The parameter value is currently required.
Note: The number of tasks that can be submitted is limited by the quota of a billing package. For details, see [Billing Overview] (https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).
                     * 
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置List of resources to be preheated. Each element format is similar to the following:
http://www.example.com/example.txt. The parameter value is currently required.
Note: The number of tasks that can be submitted is limited by the quota of a billing package. For details, see [Billing Overview] (https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).
                     * @param _targets List of resources to be preheated. Each element format is similar to the following:
http://www.example.com/example.txt. The parameter value is currently required.
Note: The number of tasks that can be submitted is limited by the quota of a billing package. For details, see [Billing Overview] (https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).
                     * 
                     */
                    void SetTargets(const std::vector<std::string>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取Whether to encode a URL according to RFC3986. Enable this field when the URL contains non-ASCII characters.
                     * @return EncodeUrl Whether to encode a URL according to RFC3986. Enable this field when the URL contains non-ASCII characters.
                     * @deprecated
                     */
                    bool GetEncodeUrl() const;

                    /**
                     * 设置Whether to encode a URL according to RFC3986. Enable this field when the URL contains non-ASCII characters.
                     * @param _encodeUrl Whether to encode a URL according to RFC3986. Enable this field when the URL contains non-ASCII characters.
                     * @deprecated
                     */
                    void SetEncodeUrl(const bool& _encodeUrl);

                    /**
                     * 判断参数 EncodeUrl 是否已赋值
                     * @return EncodeUrl 是否已赋值
                     * @deprecated
                     */
                    bool EncodeUrlHasBeenSet() const;

                    /**
                     * 获取HTTP header information
                     * @return Headers HTTP header information
                     * 
                     */
                    std::vector<Header> GetHeaders() const;

                    /**
                     * 设置HTTP header information
                     * @param _headers HTTP header information
                     * 
                     */
                    void SetHeaders(const std::vector<Header>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取Media fragment preheating control. valid values:.
<Li>On: enables shard preheating, preheats the description file, and performs recursive resolution of the description file shards for preheating.</li>.
<Li>Off: only preheat the submitted description file.</li>default value: off if left empty.

Notes:.
1. the supported description file is M3U8, and the corresponding shard is TS.
Describes the requirement that the description file can process normal requests and specify the sharding path as per industry standards.
Recursive resolution depth is no more than 3.
Parsed shards normally accumulate daily pre-warming amount. when usage exceeds the quota limit, silent processing is triggered and preheating is no longer executed.

This parameter specifies the allowlist feature. if necessary, contact tencent cloud engineers.
                     * @return PrefetchMediaSegments Media fragment preheating control. valid values:.
<Li>On: enables shard preheating, preheats the description file, and performs recursive resolution of the description file shards for preheating.</li>.
<Li>Off: only preheat the submitted description file.</li>default value: off if left empty.

Notes:.
1. the supported description file is M3U8, and the corresponding shard is TS.
Describes the requirement that the description file can process normal requests and specify the sharding path as per industry standards.
Recursive resolution depth is no more than 3.
Parsed shards normally accumulate daily pre-warming amount. when usage exceeds the quota limit, silent processing is triggered and preheating is no longer executed.

This parameter specifies the allowlist feature. if necessary, contact tencent cloud engineers.
                     * 
                     */
                    std::string GetPrefetchMediaSegments() const;

                    /**
                     * 设置Media fragment preheating control. valid values:.
<Li>On: enables shard preheating, preheats the description file, and performs recursive resolution of the description file shards for preheating.</li>.
<Li>Off: only preheat the submitted description file.</li>default value: off if left empty.

Notes:.
1. the supported description file is M3U8, and the corresponding shard is TS.
Describes the requirement that the description file can process normal requests and specify the sharding path as per industry standards.
Recursive resolution depth is no more than 3.
Parsed shards normally accumulate daily pre-warming amount. when usage exceeds the quota limit, silent processing is triggered and preheating is no longer executed.

This parameter specifies the allowlist feature. if necessary, contact tencent cloud engineers.
                     * @param _prefetchMediaSegments Media fragment preheating control. valid values:.
<Li>On: enables shard preheating, preheats the description file, and performs recursive resolution of the description file shards for preheating.</li>.
<Li>Off: only preheat the submitted description file.</li>default value: off if left empty.

Notes:.
1. the supported description file is M3U8, and the corresponding shard is TS.
Describes the requirement that the description file can process normal requests and specify the sharding path as per industry standards.
Recursive resolution depth is no more than 3.
Parsed shards normally accumulate daily pre-warming amount. when usage exceeds the quota limit, silent processing is triggered and preheating is no longer executed.

This parameter specifies the allowlist feature. if necessary, contact tencent cloud engineers.
                     * 
                     */
                    void SetPrefetchMediaSegments(const std::string& _prefetchMediaSegments);

                    /**
                     * 判断参数 PrefetchMediaSegments 是否已赋值
                     * @return PrefetchMediaSegments 是否已赋值
                     * 
                     */
                    bool PrefetchMediaSegmentsHasBeenSet() const;

                private:

                    /**
                     * Zone ID.

If you wish to quickly submit Targets urls under different sites, you can fill in * as the value. but the premise is that the account calling this API must have the permission to all site resources under the root account.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of resources to be preheated. Each element format is similar to the following:
http://www.example.com/example.txt. The parameter value is currently required.
Note: The number of tasks that can be submitted is limited by the quota of a billing package. For details, see [Billing Overview] (https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * Whether to encode a URL according to RFC3986. Enable this field when the URL contains non-ASCII characters.
                     */
                    bool m_encodeUrl;
                    bool m_encodeUrlHasBeenSet;

                    /**
                     * HTTP header information
                     */
                    std::vector<Header> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * Media fragment preheating control. valid values:.
<Li>On: enables shard preheating, preheats the description file, and performs recursive resolution of the description file shards for preheating.</li>.
<Li>Off: only preheat the submitted description file.</li>default value: off if left empty.

Notes:.
1. the supported description file is M3U8, and the corresponding shard is TS.
Describes the requirement that the description file can process normal requests and specify the sharding path as per industry standards.
Recursive resolution depth is no more than 3.
Parsed shards normally accumulate daily pre-warming amount. when usage exceeds the quota limit, silent processing is triggered and preheating is no longer executed.

This parameter specifies the allowlist feature. if necessary, contact tencent cloud engineers.
                     */
                    std::string m_prefetchMediaSegments;
                    bool m_prefetchMediaSegmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEPREFETCHTASKREQUEST_H_
