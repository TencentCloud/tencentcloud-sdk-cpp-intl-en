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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDCACHE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDCACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/AdvanceCacheRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * (Disused) Advanced cache validity configuration. You can use `RuleCache` instead.
                */
                class AdvancedCache : public AbstractModel
                {
                public:
                    AdvancedCache();
                    ~AdvancedCache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cache expiration rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CacheRules Cache expiration rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AdvanceCacheRule> GetCacheRules() const;

                    /**
                     * 设置Cache expiration rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _cacheRules Cache expiration rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCacheRules(const std::vector<AdvanceCacheRule>& _cacheRules);

                    /**
                     * 判断参数 CacheRules 是否已赋值
                     * @return CacheRules 是否已赋值
                     * 
                     */
                    bool CacheRulesHasBeenSet() const;

                    /**
                     * 获取Forced cache configuration
on: enabled
off: disabled
When this is enabled, if the origin server returns no-cache, no-store headers, node caching will still be performed according to the cache expiration rules.
This is disabled by default
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IgnoreCacheControl Forced cache configuration
on: enabled
off: disabled
When this is enabled, if the origin server returns no-cache, no-store headers, node caching will still be performed according to the cache expiration rules.
This is disabled by default
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIgnoreCacheControl() const;

                    /**
                     * 设置Forced cache configuration
on: enabled
off: disabled
When this is enabled, if the origin server returns no-cache, no-store headers, node caching will still be performed according to the cache expiration rules.
This is disabled by default
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ignoreCacheControl Forced cache configuration
on: enabled
off: disabled
When this is enabled, if the origin server returns no-cache, no-store headers, node caching will still be performed according to the cache expiration rules.
This is disabled by default
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIgnoreCacheControl(const std::string& _ignoreCacheControl);

                    /**
                     * 判断参数 IgnoreCacheControl 是否已赋值
                     * @return IgnoreCacheControl 是否已赋值
                     * 
                     */
                    bool IgnoreCacheControlHasBeenSet() const;

                    /**
                     * 获取Whether to ignore the header and body on cache nodes if the origin server returns the header `Set-Cookie`.
`on`: Ignore; do not cache the header and body.
`off`: Do not ignore; follow the custom cache rules of cache nodes.
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IgnoreSetCookie Whether to ignore the header and body on cache nodes if the origin server returns the header `Set-Cookie`.
`on`: Ignore; do not cache the header and body.
`off`: Do not ignore; follow the custom cache rules of cache nodes.
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetIgnoreSetCookie() const;

                    /**
                     * 设置Whether to ignore the header and body on cache nodes if the origin server returns the header `Set-Cookie`.
`on`: Ignore; do not cache the header and body.
`off`: Do not ignore; follow the custom cache rules of cache nodes.
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ignoreSetCookie Whether to ignore the header and body on cache nodes if the origin server returns the header `Set-Cookie`.
`on`: Ignore; do not cache the header and body.
`off`: Do not ignore; follow the custom cache rules of cache nodes.
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIgnoreSetCookie(const std::string& _ignoreSetCookie);

                    /**
                     * 判断参数 IgnoreSetCookie 是否已赋值
                     * @return IgnoreSetCookie 是否已赋值
                     * 
                     */
                    bool IgnoreSetCookieHasBeenSet() const;

                private:

                    /**
                     * Cache expiration rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<AdvanceCacheRule> m_cacheRules;
                    bool m_cacheRulesHasBeenSet;

                    /**
                     * Forced cache configuration
on: enabled
off: disabled
When this is enabled, if the origin server returns no-cache, no-store headers, node caching will still be performed according to the cache expiration rules.
This is disabled by default
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ignoreCacheControl;
                    bool m_ignoreCacheControlHasBeenSet;

                    /**
                     * Whether to ignore the header and body on cache nodes if the origin server returns the header `Set-Cookie`.
`on`: Ignore; do not cache the header and body.
`off`: Do not ignore; follow the custom cache rules of cache nodes.
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ignoreSetCookie;
                    bool m_ignoreSetCookieHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDCACHE_H_
