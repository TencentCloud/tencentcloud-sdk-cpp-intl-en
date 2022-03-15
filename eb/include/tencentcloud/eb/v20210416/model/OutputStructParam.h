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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_OUTPUTSTRUCTPARAM_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_OUTPUTSTRUCTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * `Transform` output parameter
                */
                class OutputStructParam : public AbstractModel
                {
                public:
                    OutputStructParam();
                    ~OutputStructParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key in the corresponding JSON output
                     * @return Key Key in the corresponding JSON output
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key in the corresponding JSON output
                     * @param Key Key in the corresponding JSON output
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取You can enter a JsonPath, constant, or built-in date type
                     * @return Value You can enter a JsonPath, constant, or built-in date type
                     */
                    std::string GetValue() const;

                    /**
                     * 设置You can enter a JsonPath, constant, or built-in date type
                     * @param Value You can enter a JsonPath, constant, or built-in date type
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Data type of `Value`. Valid values: STRING, NUMBER, BOOLEAN, NULL, SYS_VARIABLE, JSONPATH
                     * @return ValueType Data type of `Value`. Valid values: STRING, NUMBER, BOOLEAN, NULL, SYS_VARIABLE, JSONPATH
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置Data type of `Value`. Valid values: STRING, NUMBER, BOOLEAN, NULL, SYS_VARIABLE, JSONPATH
                     * @param ValueType Data type of `Value`. Valid values: STRING, NUMBER, BOOLEAN, NULL, SYS_VARIABLE, JSONPATH
                     */
                    void SetValueType(const std::string& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     */
                    bool ValueTypeHasBeenSet() const;

                private:

                    /**
                     * Key in the corresponding JSON output
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * You can enter a JsonPath, constant, or built-in date type
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Data type of `Value`. Valid values: STRING, NUMBER, BOOLEAN, NULL, SYS_VARIABLE, JSONPATH
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_OUTPUTSTRUCTPARAM_H_
