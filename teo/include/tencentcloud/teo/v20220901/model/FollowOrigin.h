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
                * The origin cache configuration
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
                     * 获取Sets the default cache time when the origin server does not return the Cache-Control header.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DefaultCacheTime Sets the default cache time when the origin server does not return the Cache-Control header.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetDefaultCacheTime() const;

                    /**
                     * 设置Sets the default cache time when the origin server does not return the Cache-Control header.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _defaultCacheTime Sets the default cache time when the origin server does not return the Cache-Control header.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDefaultCacheTime(const int64_t& _defaultCacheTime);

                    /**
                     * 判断参数 DefaultCacheTime 是否已赋值
                     * @return DefaultCacheTime 是否已赋值
                     * 
                     */
                    bool DefaultCacheTimeHasBeenSet() const;

                    /**
                     * 获取Specifies whether to enable cache when the origin server does not return the Cache-Control header.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DefaultCache Specifies whether to enable cache when the origin server does not return the Cache-Control header.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDefaultCache() const;

                    /**
                     * 设置Specifies whether to enable cache when the origin server does not return the Cache-Control header.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _defaultCache Specifies whether to enable cache when the origin server does not return the Cache-Control header.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Specifies whether to use the default caching policy when Cache-Control is not returned from the origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DefaultCacheStrategy Specifies whether to use the default caching policy when Cache-Control is not returned from the origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDefaultCacheStrategy() const;

                    /**
                     * 设置Specifies whether to use the default caching policy when Cache-Control is not returned from the origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _defaultCacheStrategy Specifies whether to use the default caching policy when Cache-Control is not returned from the origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDefaultCacheStrategy(const std::string& _defaultCacheStrategy);

                    /**
                     * 判断参数 DefaultCacheStrategy 是否已赋值
                     * @return DefaultCacheStrategy 是否已赋值
                     * 
                     */
                    bool DefaultCacheStrategyHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the configuration of following the origin server. Valid values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Sets the default cache time when the origin server does not return the Cache-Control header.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_defaultCacheTime;
                    bool m_defaultCacheTimeHasBeenSet;

                    /**
                     * Specifies whether to enable cache when the origin server does not return the Cache-Control header.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_defaultCache;
                    bool m_defaultCacheHasBeenSet;

                    /**
                     * Specifies whether to use the default caching policy when Cache-Control is not returned from the origin
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_defaultCacheStrategy;
                    bool m_defaultCacheStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FOLLOWORIGIN_H_
