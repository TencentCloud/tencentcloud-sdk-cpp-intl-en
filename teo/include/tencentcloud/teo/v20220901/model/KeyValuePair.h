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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_KEYVALUEPAIR_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_KEYVALUEPAIR_H_

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
                * KV key-value pair data, including key name, key value, and expiration time info.
                */
                class KeyValuePair : public AbstractModel
                {
                public:
                    KeyValuePair();
                    ~KeyValuePair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key name. Each key name cannot be empty, with a length of 1-512 characters. Valid UTF-8 characters are supported.
                     * @return Key Key name. Each key name cannot be empty, with a length of 1-512 characters. Valid UTF-8 characters are supported.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key name. Each key name cannot be empty, with a length of 1-512 characters. Valid UTF-8 characters are supported.
                     * @param _key Key name. Each key name cannot be empty, with a length of 1-512 characters. Valid UTF-8 characters are supported.
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
                     * 获取Key-value. It cannot be empty as an input parameter and supports up to 1 MB. As an output parameter, if the key does not exist, an empty string is returned.
                     * @return Value Key-value. It cannot be empty as an input parameter and supports up to 1 MB. As an output parameter, if the key does not exist, an empty string is returned.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Key-value. It cannot be empty as an input parameter and supports up to 1 MB. As an output parameter, if the key does not exist, an empty string is returned.
                     * @param _value Key-value. It cannot be empty as an input parameter and supports up to 1 MB. As an output parameter, if the key does not exist, an empty string is returned.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Expiration time, following the ISO 8601 standard, formatted as YYYY-MM-DDThh:mm:ssZ (UTC time). In output, an empty string means the key-value pair never expires.
                     * @return Expiration Expiration time, following the ISO 8601 standard, formatted as YYYY-MM-DDThh:mm:ssZ (UTC time). In output, an empty string means the key-value pair never expires.
                     * 
                     */
                    std::string GetExpiration() const;

                    /**
                     * 设置Expiration time, following the ISO 8601 standard, formatted as YYYY-MM-DDThh:mm:ssZ (UTC time). In output, an empty string means the key-value pair never expires.
                     * @param _expiration Expiration time, following the ISO 8601 standard, formatted as YYYY-MM-DDThh:mm:ssZ (UTC time). In output, an empty string means the key-value pair never expires.
                     * 
                     */
                    void SetExpiration(const std::string& _expiration);

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                private:

                    /**
                     * Key name. Each key name cannot be empty, with a length of 1-512 characters. Valid UTF-8 characters are supported.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Key-value. It cannot be empty as an input parameter and supports up to 1 MB. As an output parameter, if the key does not exist, an empty string is returned.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Expiration time, following the ISO 8601 standard, formatted as YYYY-MM-DDThh:mm:ssZ (UTC time). In output, an empty string means the key-value pair never expires.
                     */
                    std::string m_expiration;
                    bool m_expirationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_KEYVALUEPAIR_H_
