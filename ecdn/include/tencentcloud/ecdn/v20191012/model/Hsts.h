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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_HSTS_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_HSTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * HSTS configuration.
                */
                class Hsts : public AbstractModel
                {
                public:
                    Hsts();
                    ~Hsts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable. Valid values: on, off.
                     * @return Switch Whether to enable. Valid values: on, off.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable. Valid values: on, off.
                     * @param _switch Whether to enable. Valid values: on, off.
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
                     * 获取`MaxAge` value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxAge `MaxAge` value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxAge() const;

                    /**
                     * 设置`MaxAge` value.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _maxAge `MaxAge` value.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to include subdomain names. Valid values: on, off.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IncludeSubDomains Whether to include subdomain names. Valid values: on, off.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIncludeSubDomains() const;

                    /**
                     * 设置Whether to include subdomain names. Valid values: on, off.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _includeSubDomains Whether to include subdomain names. Valid values: on, off.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIncludeSubDomains(const std::string& _includeSubDomains);

                    /**
                     * 判断参数 IncludeSubDomains 是否已赋值
                     * @return IncludeSubDomains 是否已赋值
                     * 
                     */
                    bool IncludeSubDomainsHasBeenSet() const;

                private:

                    /**
                     * Whether to enable. Valid values: on, off.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * `MaxAge` value.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * Whether to include subdomain names. Valid values: on, off.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_includeSubDomains;
                    bool m_includeSubDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_HSTS_H_
