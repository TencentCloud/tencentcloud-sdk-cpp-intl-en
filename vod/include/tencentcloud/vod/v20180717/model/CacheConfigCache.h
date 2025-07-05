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
                     * 获取Path cache configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
                     * @return Switch Path cache configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Path cache configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
                     * @param _switch Path cache configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
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
                     * 获取Advanced cache expiration configuration. When enabled, the max-age value returned by the origin site will be compared with the cache expiration time set in CacheRules, and the minimum value will be used to cache the node. Values: <li>on: enabled; </li> <li >off: off. </li>
                     * @return CompareMaxAge Advanced cache expiration configuration. When enabled, the max-age value returned by the origin site will be compared with the cache expiration time set in CacheRules, and the minimum value will be used to cache the node. Values: <li>on: enabled; </li> <li >off: off. </li>
                     * 
                     */
                    std::string GetCompareMaxAge() const;

                    /**
                     * 设置Advanced cache expiration configuration. When enabled, the max-age value returned by the origin site will be compared with the cache expiration time set in CacheRules, and the minimum value will be used to cache the node. Values: <li>on: enabled; </li> <li >off: off. </li>
                     * @param _compareMaxAge Advanced cache expiration configuration. When enabled, the max-age value returned by the origin site will be compared with the cache expiration time set in CacheRules, and the minimum value will be used to cache the node. Values: <li>on: enabled; </li> <li >off: off. </li>
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
                     * 获取Force caching, values: <li>on: on; </li> <li>off: off. </li>
                     * @return IgnoreCacheControl Force caching, values: <li>on: on; </li> <li>off: off. </li>
                     * 
                     */
                    std::string GetIgnoreCacheControl() const;

                    /**
                     * 设置Force caching, values: <li>on: on; </li> <li>off: off. </li>
                     * @param _ignoreCacheControl Force caching, values: <li>on: on; </li> <li>off: off. </li>
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
                     * 获取When the origin site returns the Set-Cookie header, whether the node caches the header and body: <li>on: on, does not cache the header and body;</li> <li>off: off, follows user customization Node caching rules. </li>
                     * @return IgnoreSetCookie When the origin site returns the Set-Cookie header, whether the node caches the header and body: <li>on: on, does not cache the header and body;</li> <li>off: off, follows user customization Node caching rules. </li>
                     * 
                     */
                    std::string GetIgnoreSetCookie() const;

                    /**
                     * 设置When the origin site returns the Set-Cookie header, whether the node caches the header and body: <li>on: on, does not cache the header and body;</li> <li>off: off, follows user customization Node caching rules. </li>
                     * @param _ignoreSetCookie When the origin site returns the Set-Cookie header, whether the node caches the header and body: <li>on: on, does not cache the header and body;</li> <li>off: off, follows user customization Node caching rules. </li>
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
                     * Path cache configuration switch, the values u200bu200bare: <li>on: on; </li> <li>off: off. </li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Cache expiration time settings<li>Unit: second. The maximum value is 365 days.</li>
                     */
                    uint64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                    /**
                     * Advanced cache expiration configuration. When enabled, the max-age value returned by the origin site will be compared with the cache expiration time set in CacheRules, and the minimum value will be used to cache the node. Values: <li>on: enabled; </li> <li >off: off. </li>
                     */
                    std::string m_compareMaxAge;
                    bool m_compareMaxAgeHasBeenSet;

                    /**
                     * Force caching, values: <li>on: on; </li> <li>off: off. </li>
                     */
                    std::string m_ignoreCacheControl;
                    bool m_ignoreCacheControlHasBeenSet;

                    /**
                     * When the origin site returns the Set-Cookie header, whether the node caches the header and body: <li>on: on, does not cache the header and body;</li> <li>off: off, follows user customization Node caching rules. </li>
                     */
                    std::string m_ignoreSetCookie;
                    bool m_ignoreSetCookieHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CACHECONFIGCACHE_H_
