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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCECONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCECONFIG_H_

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
                * Advanced configuration settings
                */
                class AdvanceConfig : public AbstractModel
                {
                public:
                    AdvanceConfig();
                    ~AdvanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Advanced configuration name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Name Advanced configuration name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Advanced configuration name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _name Advanced configuration name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Whether to support advanced configuration
`on`: Supported
`off`: Not supported
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Value Whether to support advanced configuration
`on`: Supported
`off`: Not supported
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Whether to support advanced configuration
`on`: Supported
`off`: Not supported
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _value Whether to support advanced configuration
`on`: Supported
`off`: Not supported
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
                     * Advanced configuration name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether to support advanced configuration
`on`: Supported
`off`: Not supported
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCECONFIG_H_
