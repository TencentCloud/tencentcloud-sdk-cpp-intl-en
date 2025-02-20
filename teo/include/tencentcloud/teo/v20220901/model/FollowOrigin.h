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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FOLLOWORIGIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FOLLOWORIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Following origin server configuration for caching.
                */
                class FollowOrigin : public AbstractModel
                {
                public:
                    FollowOrigin();
                    ~FollowOrigin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the configuration of following the origin server. Valid values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return Switch Whether to enable the configuration of following the origin server. Valid values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable the configuration of following the origin server. Valid values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param _switch Whether to enable the configuration of following the origin server. Valid values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
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
                     * 获取Whether to cache when an origin server does not return the cache-control header. this field is required when switch is on; when switch is off, this field is not required and will be ineffective if filled. valid values:.
<Li>On: cache;</li>.
<Li>Off: do not cache.</li>.
                     * @return DefaultCache Whether to cache when an origin server does not return the cache-control header. this field is required when switch is on; when switch is off, this field is not required and will be ineffective if filled. valid values:.
<Li>On: cache;</li>.
<Li>Off: do not cache.</li>.
                     * 
                     */
                    std::string GetDefaultCache() const;

                    /**
                     * 设置Whether to cache when an origin server does not return the cache-control header. this field is required when switch is on; when switch is off, this field is not required and will be ineffective if filled. valid values:.
<Li>On: cache;</li>.
<Li>Off: do not cache.</li>.
                     * @param _defaultCache Whether to cache when an origin server does not return the cache-control header. this field is required when switch is on; when switch is off, this field is not required and will be ineffective if filled. valid values:.
<Li>On: cache;</li>.
<Li>Off: do not cache.</li>.
                     * 
                     */
                    void SetDefaultCache(const std::string& _defaultCache);

                    /**
                     * 判断参数 DefaultCache 是否已赋值
                     * @return DefaultCache 是否已赋值
                     * 
                     */
                    bool DefaultCacheHasBeenSet() const;

                    /**
                     * 获取Whether to use the default caching policy when an origin server does not return the cache-control header. this field is required when defaultcache is set to on; otherwise, it is ineffective. when defaultcachetime is not 0, this field should be off. valid values:.
<Li>On: use the default caching policy.</li>.
<Li>Off: do not use the default caching policy.</li>.
                     * @return DefaultCacheStrategy Whether to use the default caching policy when an origin server does not return the cache-control header. this field is required when defaultcache is set to on; otherwise, it is ineffective. when defaultcachetime is not 0, this field should be off. valid values:.
<Li>On: use the default caching policy.</li>.
<Li>Off: do not use the default caching policy.</li>.
                     * 
                     */
                    std::string GetDefaultCacheStrategy() const;

                    /**
                     * 设置Whether to use the default caching policy when an origin server does not return the cache-control header. this field is required when defaultcache is set to on; otherwise, it is ineffective. when defaultcachetime is not 0, this field should be off. valid values:.
<Li>On: use the default caching policy.</li>.
<Li>Off: do not use the default caching policy.</li>.
                     * @param _defaultCacheStrategy Whether to use the default caching policy when an origin server does not return the cache-control header. this field is required when defaultcache is set to on; otherwise, it is ineffective. when defaultcachetime is not 0, this field should be off. valid values:.
<Li>On: use the default caching policy.</li>.
<Li>Off: do not use the default caching policy.</li>.
                     * 
                     */
                    void SetDefaultCacheStrategy(const std::string& _defaultCacheStrategy);

                    /**
                     * 判断参数 DefaultCacheStrategy 是否已赋值
                     * @return DefaultCacheStrategy 是否已赋值
                     * 
                     */
                    bool DefaultCacheStrategyHasBeenSet() const;

                    /**
                     * 获取The default cache time in seconds when an origin server does not return the cache-control header. the value ranges from 0 to 315360000. this field is required when defaultcache is set to on; otherwise, it is ineffective. when defaultcachestrategy is on, this field should be 0.
                     * @return DefaultCacheTime The default cache time in seconds when an origin server does not return the cache-control header. the value ranges from 0 to 315360000. this field is required when defaultcache is set to on; otherwise, it is ineffective. when defaultcachestrategy is on, this field should be 0.
                     * 
                     */
                    int64_t GetDefaultCacheTime() const;

                    /**
                     * 设置The default cache time in seconds when an origin server does not return the cache-control header. the value ranges from 0 to 315360000. this field is required when defaultcache is set to on; otherwise, it is ineffective. when defaultcachestrategy is on, this field should be 0.
                     * @param _defaultCacheTime The default cache time in seconds when an origin server does not return the cache-control header. the value ranges from 0 to 315360000. this field is required when defaultcache is set to on; otherwise, it is ineffective. when defaultcachestrategy is on, this field should be 0.
                     * 
                     */
                    void SetDefaultCacheTime(const int64_t& _defaultCacheTime);

                    /**
                     * 判断参数 DefaultCacheTime 是否已赋值
                     * @return DefaultCacheTime 是否已赋值
                     * 
                     */
                    bool DefaultCacheTimeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the configuration of following the origin server. Valid values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Whether to cache when an origin server does not return the cache-control header. this field is required when switch is on; when switch is off, this field is not required and will be ineffective if filled. valid values:.
<Li>On: cache;</li>.
<Li>Off: do not cache.</li>.
                     */
                    std::string m_defaultCache;
                    bool m_defaultCacheHasBeenSet;

                    /**
                     * Whether to use the default caching policy when an origin server does not return the cache-control header. this field is required when defaultcache is set to on; otherwise, it is ineffective. when defaultcachetime is not 0, this field should be off. valid values:.
<Li>On: use the default caching policy.</li>.
<Li>Off: do not use the default caching policy.</li>.
                     */
                    std::string m_defaultCacheStrategy;
                    bool m_defaultCacheStrategyHasBeenSet;

                    /**
                     * The default cache time in seconds when an origin server does not return the cache-control header. the value ranges from 0 to 315360000. this field is required when defaultcache is set to on; otherwise, it is ineffective. when defaultcachestrategy is on, this field should be 0.
                     */
                    int64_t m_defaultCacheTime;
                    bool m_defaultCacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FOLLOWORIGIN_H_
