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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SECENTRY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SECENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecEntryValue.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Security data Entry return value
                */
                class SecEntry : public AbstractModel
                {
                public:
                    SecEntry();
                    ~SecEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Query the dimension value.
                     * @return Key Query the dimension value.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Query the dimension value.
                     * @param _key Query the dimension value.
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
                     * 获取Detailed data under the query dimension.
                     * @return Value Detailed data under the query dimension.
                     * 
                     */
                    std::vector<SecEntryValue> GetValue() const;

                    /**
                     * 设置Detailed data under the query dimension.
                     * @param _value Detailed data under the query dimension.
                     * 
                     */
                    void SetValue(const std::vector<SecEntryValue>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Query the dimension value.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Detailed data under the query dimension.
                     */
                    std::vector<SecEntryValue> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SECENTRY_H_
