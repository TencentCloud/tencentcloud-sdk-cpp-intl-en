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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_KEYVALUE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_KEYVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Status of the IP
                */
                class KeyValue : public AbstractModel
                {
                public:
                    KeyValue();
                    ~KeyValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP
                     * @return Key IP
                     */
                    std::string GetKey() const;

                    /**
                     * 设置IP
                     * @param Key IP
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Status of the IP. Values: `1` (blocked); `2` (normal); `3` (being attacked)
                     * @return Value Status of the IP. Values: `1` (blocked); `2` (normal); `3` (being attacked)
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Status of the IP. Values: `1` (blocked); `2` (normal); `3` (being attacked)
                     * @param Value Status of the IP. Values: `1` (blocked); `2` (normal); `3` (being attacked)
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * IP
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Status of the IP. Values: `1` (blocked); `2` (normal); `3` (being attacked)
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_KEYVALUE_H_