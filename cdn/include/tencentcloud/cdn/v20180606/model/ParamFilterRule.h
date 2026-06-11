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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PARAMFILTERRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PARAMFILTERRULE_H_

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
                * Parameter blocklist rule.
                */
                class ParamFilterRule : public AbstractModel
                {
                public:
                    ParamFilterRule();
                    ~ParamFilterRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Key Parameter name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Parameter name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _key Parameter name.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Numeric array. value range: less than 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Values Numeric array. value range: less than 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Numeric array. value range: less than 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _values Numeric array. value range: less than 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取http status code (only supports 403).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReturnCode http status code (only supports 403).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReturnCode() const;

                    /**
                     * 设置http status code (only supports 403).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _returnCode http status code (only supports 403).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReturnCode(const std::string& _returnCode);

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                private:

                    /**
                     * Parameter name.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Numeric array. value range: less than 10.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * http status code (only supports 403).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_returnCode;
                    bool m_returnCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PARAMFILTERRULE_H_
