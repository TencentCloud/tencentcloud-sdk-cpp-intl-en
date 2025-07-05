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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHE_H_

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
                * Cache time settings
                */
                class Cache : public AbstractModel
                {
                public:
                    Cache();
                    ~Cache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable cache configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return Switch Whether to enable cache configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable cache configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param _switch Whether to enable cache configuration. Values:
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
                     * 获取Cache expiration time setting.
Unit: second. The maximum value is 365 days.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CacheTime Cache expiration time setting.
Unit: second. The maximum value is 365 days.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCacheTime() const;

                    /**
                     * 设置Cache expiration time setting.
Unit: second. The maximum value is 365 days.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cacheTime Cache expiration time setting.
Unit: second. The maximum value is 365 days.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCacheTime(const int64_t& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     * 
                     */
                    bool CacheTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable force cache. Values:
<li>`on`: Enable</li>
<li>`off`: Disable </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IgnoreCacheControl Whether to enable force cache. Values:
<li>`on`: Enable</li>
<li>`off`: Disable </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::string GetIgnoreCacheControl() const;

                    /**
                     * 设置Whether to enable force cache. Values:
<li>`on`: Enable</li>
<li>`off`: Disable </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ignoreCacheControl Whether to enable force cache. Values:
<li>`on`: Enable</li>
<li>`off`: Disable </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetIgnoreCacheControl(const std::string& _ignoreCacheControl);

                    /**
                     * 判断参数 IgnoreCacheControl 是否已赋值
                     * @return IgnoreCacheControl 是否已赋值
                     * @deprecated
                     */
                    bool IgnoreCacheControlHasBeenSet() const;

                private:

                    /**
                     * Whether to enable cache configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Cache expiration time setting.
Unit: second. The maximum value is 365 days.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                    /**
                     * Whether to enable force cache. Values:
<li>`on`: Enable</li>
<li>`off`: Disable </li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ignoreCacheControl;
                    bool m_ignoreCacheControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHE_H_
