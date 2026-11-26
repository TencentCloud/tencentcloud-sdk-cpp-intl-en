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
                * Cache time setting
                */
                class Cache : public AbstractModel
                {
                public:
                    Cache();
                    ~Cache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cache configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @return Switch Cache configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Cache configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @param _switch Cache configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
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
                     * 获取Cache expiration time settings.
Unit: seconds. Maximum settable to 365 days.
                     * @return CacheTime Cache expiration time settings.
Unit: seconds. Maximum settable to 365 days.
                     * 
                     */
                    int64_t GetCacheTime() const;

                    /**
                     * 设置Cache expiration time settings.
Unit: seconds. Maximum settable to 365 days.
                     * @param _cacheTime Cache expiration time settings.
Unit: seconds. Maximum settable to 365 days.
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
                     * 获取Whether to enable forced caching. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @return IgnoreCacheControl Whether to enable forced caching. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @deprecated
                     */
                    std::string GetIgnoreCacheControl() const;

                    /**
                     * 设置Whether to enable forced caching. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @param _ignoreCacheControl Whether to enable forced caching. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
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
                     * Cache configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Cache expiration time settings.
Unit: seconds. Maximum settable to 365 days.
                     */
                    int64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                    /**
                     * Whether to enable forced caching. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_ignoreCacheControl;
                    bool m_ignoreCacheControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHE_H_
