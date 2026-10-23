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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SETPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SETPARAMETERS_H_

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
                * Custom Variable parameter settings.
                */
                class SetParameters : public AbstractModel
                {
                public:
                    SetParameters();
                    ~SetParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Specify the custom variable name. A custom variable must be defined before it can be used in operations.</p>
                     * @return Name <p>Specify the custom variable name. A custom variable must be defined before it can be used in operations.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Specify the custom variable name. A custom variable must be defined before it can be used in operations.</p>
                     * @param _name <p>Specify the custom variable name. A custom variable must be defined before it can be used in operations.</p>
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
                     * 获取<p>Assign value to a Custom Variable. Supports the use of constant strings, variables, and formulas. Chinese characters are not allowed. Length cannot exceed 1000 characters.</p>
                     * @return Value <p>Assign value to a Custom Variable. Supports the use of constant strings, variables, and formulas. Chinese characters are not allowed. Length cannot exceed 1000 characters.</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>Assign value to a Custom Variable. Supports the use of constant strings, variables, and formulas. Chinese characters are not allowed. Length cannot exceed 1000 characters.</p>
                     * @param _value <p>Assign value to a Custom Variable. Supports the use of constant strings, variables, and formulas. Chinese characters are not allowed. Length cannot exceed 1000 characters.</p>
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
                     * <p>Specify the custom variable name. A custom variable must be defined before it can be used in operations.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Assign value to a Custom Variable. Supports the use of constant strings, variables, and formulas. Chinese characters are not allowed. Length cannot exceed 1000 characters.</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SETPARAMETERS_H_
