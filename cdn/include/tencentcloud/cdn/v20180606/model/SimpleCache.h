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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SIMPLECACHE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SIMPLECACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/SimpleCacheRule.h>
#include <tencentcloud/cdn/v20180606/model/Revalidate.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Cache configuration basic version
The cache expiration time for all files is 30 days by default.
Static acceleration type domain names .php, .jsp, .asp, and .aspx are not cached by default
Note: this version does not support setting cache expiration rules if the origin server does not return max-age
                */
                class SimpleCache : public AbstractModel
                {
                public:
                    SimpleCache();
                    ~SimpleCache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cache expiration time rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CacheRules Cache expiration time rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<SimpleCacheRule> GetCacheRules() const;

                    /**
                     * 设置Cache expiration time rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CacheRules Cache expiration time rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCacheRules(const std::vector<SimpleCacheRule>& _cacheRules);

                    /**
                     * 判断参数 CacheRules 是否已赋值
                     * @return CacheRules 是否已赋值
                     */
                    bool CacheRulesHasBeenSet() const;

                    /**
                     * 获取Follows origin server Cache-Control: max-age configurations
`on`: Enable
`off`: Disable
If this is enabled, resources that do not match CacheRules rules will be cached by the node according to the max-age value returned by the origin server. Resources that match CacheRules rules will be cached on the node according to the cache expiration time set in CacheRules.
This conflicts with CompareMaxAge. The two cannot be enabled at the same time.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FollowOrigin Follows origin server Cache-Control: max-age configurations
`on`: Enable
`off`: Disable
If this is enabled, resources that do not match CacheRules rules will be cached by the node according to the max-age value returned by the origin server. Resources that match CacheRules rules will be cached on the node according to the cache expiration time set in CacheRules.
This conflicts with CompareMaxAge. The two cannot be enabled at the same time.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetFollowOrigin() const;

                    /**
                     * 设置Follows origin server Cache-Control: max-age configurations
`on`: Enable
`off`: Disable
If this is enabled, resources that do not match CacheRules rules will be cached by the node according to the max-age value returned by the origin server. Resources that match CacheRules rules will be cached on the node according to the cache expiration time set in CacheRules.
This conflicts with CompareMaxAge. The two cannot be enabled at the same time.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param FollowOrigin Follows origin server Cache-Control: max-age configurations
`on`: Enable
`off`: Disable
If this is enabled, resources that do not match CacheRules rules will be cached by the node according to the max-age value returned by the origin server. Resources that match CacheRules rules will be cached on the node according to the cache expiration time set in CacheRules.
This conflicts with CompareMaxAge. The two cannot be enabled at the same time.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetFollowOrigin(const std::string& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     */
                    bool FollowOriginHasBeenSet() const;

                    /**
                     * 获取Forced cache
`on`: Enable
`off`: Disable
This is disabled by default. If enabled, the `no-store` and `no-cache` resources returned from the origin server will be cached according to `CacheRules` rules.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IgnoreCacheControl Forced cache
`on`: Enable
`off`: Disable
This is disabled by default. If enabled, the `no-store` and `no-cache` resources returned from the origin server will be cached according to `CacheRules` rules.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetIgnoreCacheControl() const;

                    /**
                     * 设置Forced cache
`on`: Enable
`off`: Disable
This is disabled by default. If enabled, the `no-store` and `no-cache` resources returned from the origin server will be cached according to `CacheRules` rules.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param IgnoreCacheControl Forced cache
`on`: Enable
`off`: Disable
This is disabled by default. If enabled, the `no-store` and `no-cache` resources returned from the origin server will be cached according to `CacheRules` rules.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetIgnoreCacheControl(const std::string& _ignoreCacheControl);

                    /**
                     * 判断参数 IgnoreCacheControl 是否已赋值
                     * @return IgnoreCacheControl 是否已赋值
                     */
                    bool IgnoreCacheControlHasBeenSet() const;

                    /**
                     * 获取Ignores the Set-Cookie header of the origin server
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return IgnoreSetCookie Ignores the Set-Cookie header of the origin server
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetIgnoreSetCookie() const;

                    /**
                     * 设置Ignores the Set-Cookie header of the origin server
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param IgnoreSetCookie Ignores the Set-Cookie header of the origin server
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetIgnoreSetCookie(const std::string& _ignoreSetCookie);

                    /**
                     * 判断参数 IgnoreSetCookie 是否已赋值
                     * @return IgnoreSetCookie 是否已赋值
                     */
                    bool IgnoreSetCookieHasBeenSet() const;

                    /**
                     * 获取Advanced cache expiration configuration. If this is enabled, the max-age value returned by the origin server will be compared with the cache expiration time set in CacheRules, and the smallest value will be cached on the node.
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CompareMaxAge Advanced cache expiration configuration. If this is enabled, the max-age value returned by the origin server will be compared with the cache expiration time set in CacheRules, and the smallest value will be cached on the node.
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetCompareMaxAge() const;

                    /**
                     * 设置Advanced cache expiration configuration. If this is enabled, the max-age value returned by the origin server will be compared with the cache expiration time set in CacheRules, and the smallest value will be cached on the node.
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param CompareMaxAge Advanced cache expiration configuration. If this is enabled, the max-age value returned by the origin server will be compared with the cache expiration time set in CacheRules, and the smallest value will be cached on the node.
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCompareMaxAge(const std::string& _compareMaxAge);

                    /**
                     * 判断参数 CompareMaxAge 是否已赋值
                     * @return CompareMaxAge 是否已赋值
                     */
                    bool CompareMaxAgeHasBeenSet() const;

                    /**
                     * 获取Always forwards to the origin server for verification
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Revalidate Always forwards to the origin server for verification
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Revalidate GetRevalidate() const;

                    /**
                     * 设置Always forwards to the origin server for verification
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Revalidate Always forwards to the origin server for verification
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetRevalidate(const Revalidate& _revalidate);

                    /**
                     * 判断参数 Revalidate 是否已赋值
                     * @return Revalidate 是否已赋值
                     */
                    bool RevalidateHasBeenSet() const;

                private:

                    /**
                     * Cache expiration time rules
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<SimpleCacheRule> m_cacheRules;
                    bool m_cacheRulesHasBeenSet;

                    /**
                     * Follows origin server Cache-Control: max-age configurations
`on`: Enable
`off`: Disable
If this is enabled, resources that do not match CacheRules rules will be cached by the node according to the max-age value returned by the origin server. Resources that match CacheRules rules will be cached on the node according to the cache expiration time set in CacheRules.
This conflicts with CompareMaxAge. The two cannot be enabled at the same time.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_followOrigin;
                    bool m_followOriginHasBeenSet;

                    /**
                     * Forced cache
`on`: Enable
`off`: Disable
This is disabled by default. If enabled, the `no-store` and `no-cache` resources returned from the origin server will be cached according to `CacheRules` rules.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ignoreCacheControl;
                    bool m_ignoreCacheControlHasBeenSet;

                    /**
                     * Ignores the Set-Cookie header of the origin server
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ignoreSetCookie;
                    bool m_ignoreSetCookieHasBeenSet;

                    /**
                     * Advanced cache expiration configuration. If this is enabled, the max-age value returned by the origin server will be compared with the cache expiration time set in CacheRules, and the smallest value will be cached on the node.
`on`: Enable
`off`: Disable
It is disabled by default.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_compareMaxAge;
                    bool m_compareMaxAgeHasBeenSet;

                    /**
                     * Always forwards to the origin server for verification
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    Revalidate m_revalidate;
                    bool m_revalidateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SIMPLECACHE_H_
