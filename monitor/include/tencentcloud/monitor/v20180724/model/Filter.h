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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_FILTER_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Query filter
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Filter method. Valid values: `=`, `!=`, `in`.
                     * @return Type Filter method. Valid values: `=`, `!=`, `in`.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Filter method. Valid values: `=`, `!=`, `in`.
                     * @param Type Filter method. Valid values: `=`, `!=`, `in`.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Filter dimension name
                     * @return Key Filter dimension name
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Filter dimension name
                     * @param Key Filter dimension name
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Filter value. For the `in` filter method, separate multiple values by comma.
                     * @return Value Filter value. For the `in` filter method, separate multiple values by comma.
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Filter value. For the `in` filter method, separate multiple values by comma.
                     * @param Value Filter value. For the `in` filter method, separate multiple values by comma.
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Filter name
                     * @return Name Filter name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Filter name
                     * @param Name Filter name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Filter value range
                     * @return Values Filter value range
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置Filter value range
                     * @param Values Filter value range
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Filter method. Valid values: `=`, `!=`, `in`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Filter dimension name
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Filter value. For the `in` filter method, separate multiple values by comma.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Filter name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Filter value range
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_FILTER_H_
