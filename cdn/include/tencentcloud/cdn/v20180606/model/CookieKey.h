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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_COOKIEKEY_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_COOKIEKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * A part of `CacheKey`
                */
                class CookieKey : public AbstractModel
                {
                public:
                    CookieKey();
                    ~CookieKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to include Cookie as part of CacheKey. Values:
`on`: Yes
`off`: No
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Switch Whether to include Cookie as part of CacheKey. Values:
`on`: Yes
`off`: No
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to include Cookie as part of CacheKey. Values:
`on`: Yes
`off`: No
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _switch Whether to include Cookie as part of CacheKey. Values:
`on`: Yes
`off`: No
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Used cookies (separated by ';')
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Value Used cookies (separated by ';')
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Used cookies (separated by ';')
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _value Used cookies (separated by ';')
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Whether to include Cookie as part of CacheKey. Values:
`on`: Yes
`off`: No
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Used cookies (separated by ';')
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_COOKIEKEY_H_
