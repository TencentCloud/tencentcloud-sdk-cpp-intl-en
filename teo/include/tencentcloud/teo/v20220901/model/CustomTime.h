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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMTIME_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMTIME_H_

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
                * Node cache TTL custom cache time parameter configuration.
                */
                class CustomTime : public AbstractModel
                {
                public:
                    CustomTime();
                    ~CustomTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom cache time switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @return Switch Custom cache time switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Custom cache time switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @param _switch Custom cache time switch. Valid values:
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
                     * 获取Ignore the origin-pull CacheControl switch. Valid values:
<li>`on`: Enable;</li>
<li>off: disabled.</li>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field, and if specified, it does not take effect.
                     * @return IgnoreCacheControl Ignore the origin-pull CacheControl switch. Valid values:
<li>`on`: Enable;</li>
<li>off: disabled.</li>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field, and if specified, it does not take effect.
                     * 
                     */
                    std::string GetIgnoreCacheControl() const;

                    /**
                     * 设置Ignore the origin-pull CacheControl switch. Valid values:
<li>`on`: Enable;</li>
<li>off: disabled.</li>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field, and if specified, it does not take effect.
                     * @param _ignoreCacheControl Ignore the origin-pull CacheControl switch. Valid values:
<li>`on`: Enable;</li>
<li>off: disabled.</li>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field, and if specified, it does not take effect.
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
                     * 获取Custom cache time value, in seconds. Value range: 0–315360000.<br>Note: This field is required when Switch is on. When Switch is off, this field is not required and does not take effect if specified.
                     * @return CacheTime Custom cache time value, in seconds. Value range: 0–315360000.<br>Note: This field is required when Switch is on. When Switch is off, this field is not required and does not take effect if specified.
                     * 
                     */
                    int64_t GetCacheTime() const;

                    /**
                     * 设置Custom cache time value, in seconds. Value range: 0–315360000.<br>Note: This field is required when Switch is on. When Switch is off, this field is not required and does not take effect if specified.
                     * @param _cacheTime Custom cache time value, in seconds. Value range: 0–315360000.<br>Note: This field is required when Switch is on. When Switch is off, this field is not required and does not take effect if specified.
                     * 
                     */
                    void SetCacheTime(const int64_t& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     * 
                     */
                    bool CacheTimeHasBeenSet() const;

                private:

                    /**
                     * Custom cache time switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Ignore the origin-pull CacheControl switch. Valid values:
<li>`on`: Enable;</li>
<li>off: disabled.</li>Note: When Switch is on, this field is required; when Switch is off, no need to specify this field, and if specified, it does not take effect.
                     */
                    std::string m_ignoreCacheControl;
                    bool m_ignoreCacheControlHasBeenSet;

                    /**
                     * Custom cache time value, in seconds. Value range: 0–315360000.<br>Note: This field is required when Switch is on. When Switch is off, this field is not required and does not take effect if specified.
                     */
                    int64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMTIME_H_
