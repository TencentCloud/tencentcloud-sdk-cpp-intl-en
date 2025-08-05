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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HSTS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HSTS_H_

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
                * HSTS configuration
                */
                class Hsts : public AbstractModel
                {
                public:
                    Hsts();
                    ~Hsts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @return Switch Whether to enable the configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable the configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     * @param _switch Whether to enable the configuration. Values:
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
                     * 获取MaxAge value. expressed in seconds, maximum value is 1 day.
                     * @return MaxAge MaxAge value. expressed in seconds, maximum value is 1 day.
                     * 
                     */
                    int64_t GetMaxAge() const;

                    /**
                     * 设置MaxAge value. expressed in seconds, maximum value is 1 day.
                     * @param _maxAge MaxAge value. expressed in seconds, maximum value is 1 day.
                     * 
                     */
                    void SetMaxAge(const int64_t& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     * 
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取Specifies whether the subdomain is included. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     * @return IncludeSubDomains Specifies whether the subdomain is included. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     * 
                     */
                    std::string GetIncludeSubDomains() const;

                    /**
                     * 设置Specifies whether the subdomain is included. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     * @param _includeSubDomains Specifies whether the subdomain is included. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     * 
                     */
                    void SetIncludeSubDomains(const std::string& _includeSubDomains);

                    /**
                     * 判断参数 IncludeSubDomains 是否已赋值
                     * @return IncludeSubDomains 是否已赋值
                     * 
                     */
                    bool IncludeSubDomainsHasBeenSet() const;

                    /**
                     * 获取Whether to enable preloading. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     * @return Preload Whether to enable preloading. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     * 
                     */
                    std::string GetPreload() const;

                    /**
                     * 设置Whether to enable preloading. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     * @param _preload Whether to enable preloading. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     * 
                     */
                    void SetPreload(const std::string& _preload);

                    /**
                     * 判断参数 Preload 是否已赋值
                     * @return Preload 是否已赋值
                     * 
                     */
                    bool PreloadHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the configuration. Values:
<li>`on`: Enable</li>
<li>`off`: Disable</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * MaxAge value. expressed in seconds, maximum value is 1 day.
                     */
                    int64_t m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Specifies whether the subdomain is included. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     */
                    std::string m_includeSubDomains;
                    bool m_includeSubDomainsHasBeenSet;

                    /**
                     * Whether to enable preloading. valid values:.
<li>`on`: Enable;</li>

<li>off: Disable.</li>
                     */
                    std::string m_preload;
                    bool m_preloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HSTS_H_
