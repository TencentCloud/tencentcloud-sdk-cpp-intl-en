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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CACHECONFIGCACHE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CACHECONFIGCACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Path cache configuration
                */
                class CacheConfigCache : public AbstractModel
                {
                public:
                    CacheConfigCache();
                    ~CacheConfigCache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cache configuration switch: <li>on:enable；</li> <li>off: disable.</li>
                     * @return Switch Cache configuration switch: <li>on:enable；</li> <li>off: disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Cache configuration switch: <li>on:enable；</li> <li>off: disable.</li>
                     * @param _switch Cache configuration switch: <li>on:enable；</li> <li>off: disable.</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Cache expiration time settings<li>Unit: second. The maximum value is 365 days.</li>
                     * @return CacheTime Cache expiration time settings<li>Unit: second. The maximum value is 365 days.</li>
                     * 
                     */
                    uint64_t GetCacheTime() const;

                    /**
                     * 设置Cache expiration time settings<li>Unit: second. The maximum value is 365 days.</li>
                     * @param _cacheTime Cache expiration time settings<li>Unit: second. The maximum value is 365 days.</li>
                     * 
                     */
                    void SetCacheTime(const uint64_t& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     * 
                     */
                    bool CacheTimeHasBeenSet() const;

                    /**
                     * 获取Advanced cache expiration configuration. If this is enabled, the max-age value returned by the origin server will be compared with the cache expiration time set in CacheRules, and the smallest value will be cached on the node: <li>on: Enable;</li> <li>off: Disable.</li>
                     * @return CompareMaxAge Advanced cache expiration configuration. If this is enabled, the max-age value returned by the origin server will be compared with the cache expiration time set in CacheRules, and the smallest value will be cached on the node: <li>on: Enable;</li> <li>off: Disable.</li>
                     * 
                     */
                    std::string GetCompareMaxAge() const;

                    /**
                     * 设置Advanced cache expiration configuration. If this is enabled, the max-age value returned by the origin server will be compared with the cache expiration time set in CacheRules, and the smallest value will be cached on the node: <li>on: Enable;</li> <li>off: Disable.</li>
                     * @param _compareMaxAge Advanced cache expiration configuration. If this is enabled, the max-age value returned by the origin server will be compared with the cache expiration time set in CacheRules, and the smallest value will be cached on the node: <li>on: Enable;</li> <li>off: Disable.</li>
                     * 
                     */
                    void SetCompareMaxAge(const std::string& _compareMaxAge);

                    /**
                     * 判断参数 CompareMaxAge 是否已赋值
                     * @return CompareMaxAge 是否已赋值
                     * 
                     */
                    bool CompareMaxAgeHasBeenSet() const;

                    /**
                     * 获取Force cache: <li>on: Enable;</li> <li>off: Disable.</li>
                     * @return IgnoreCacheControl Force cache: <li>on: Enable;</li> <li>off: Disable.</li>
                     * 
                     */
                    std::string GetIgnoreCacheControl() const;

                    /**
                     * 设置Force cache: <li>on: Enable;</li> <li>off: Disable.</li>
                     * @param _ignoreCacheControl Force cache: <li>on: Enable;</li> <li>off: Disable.</li>
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
                     * 获取Whether to ignore the header and body on cache nodes if the origin server returns the header Set-Cookie. <li>on: Ignore; do not cache the header and body.</li> <li>off: Do not ignore; follow the custom cache rules of cache nodes.</li>
                     * @return IgnoreSetCookie Whether to ignore the header and body on cache nodes if the origin server returns the header Set-Cookie. <li>on: Ignore; do not cache the header and body.</li> <li>off: Do not ignore; follow the custom cache rules of cache nodes.</li>
                     * 
                     */
                    std::string GetIgnoreSetCookie() const;

                    /**
                     * 设置Whether to ignore the header and body on cache nodes if the origin server returns the header Set-Cookie. <li>on: Ignore; do not cache the header and body.</li> <li>off: Do not ignore; follow the custom cache rules of cache nodes.</li>
                     * @param _ignoreSetCookie Whether to ignore the header and body on cache nodes if the origin server returns the header Set-Cookie. <li>on: Ignore; do not cache the header and body.</li> <li>off: Do not ignore; follow the custom cache rules of cache nodes.</li>
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
                     * Cache configuration switch: <li>on:enable；</li> <li>off: disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Cache expiration time settings<li>Unit: second. The maximum value is 365 days.</li>
                     */
                    uint64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                    /**
                     * Advanced cache expiration configuration. If this is enabled, the max-age value returned by the origin server will be compared with the cache expiration time set in CacheRules, and the smallest value will be cached on the node: <li>on: Enable;</li> <li>off: Disable.</li>
                     */
                    std::string m_compareMaxAge;
                    bool m_compareMaxAgeHasBeenSet;

                    /**
                     * Force cache: <li>on: Enable;</li> <li>off: Disable.</li>
                     */
                    std::string m_ignoreCacheControl;
                    bool m_ignoreCacheControlHasBeenSet;

                    /**
                     * Whether to ignore the header and body on cache nodes if the origin server returns the header Set-Cookie. <li>on: Ignore; do not cache the header and body.</li> <li>off: Do not ignore; follow the custom cache rules of cache nodes.</li>
                     */
                    std::string m_ignoreSetCookie;
                    bool m_ignoreSetCookieHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CACHECONFIGCACHE_H_
