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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_RULECACHECONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_RULECACHECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/CacheConfigCache.h>
#include <tencentcloud/cdn/v20180606/model/CacheConfigNoCache.h>
#include <tencentcloud/cdn/v20180606/model/CacheConfigFollowOrigin.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Path cache configuration, choose one from the following three cache modes.
                */
                class RuleCacheConfig : public AbstractModel
                {
                public:
                    RuleCacheConfig();
                    ~RuleCacheConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Cache Cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    CacheConfigCache GetCache() const;

                    /**
                     * 设置Cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Cache Cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCache(const CacheConfigCache& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取No cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return NoCache No cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    CacheConfigNoCache GetNoCache() const;

                    /**
                     * 设置No cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param NoCache No cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetNoCache(const CacheConfigNoCache& _noCache);

                    /**
                     * 判断参数 NoCache 是否已赋值
                     * @return NoCache 是否已赋值
                     */
                    bool NoCacheHasBeenSet() const;

                    /**
                     * 获取Follows the origin server configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FollowOrigin Follows the origin server configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    CacheConfigFollowOrigin GetFollowOrigin() const;

                    /**
                     * 设置Follows the origin server configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param FollowOrigin Follows the origin server configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetFollowOrigin(const CacheConfigFollowOrigin& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     */
                    bool FollowOriginHasBeenSet() const;

                private:

                    /**
                     * Cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    CacheConfigCache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * No cache configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    CacheConfigNoCache m_noCache;
                    bool m_noCacheHasBeenSet;

                    /**
                     * Follows the origin server configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    CacheConfigFollowOrigin m_followOrigin;
                    bool m_followOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_RULECACHECONFIG_H_
