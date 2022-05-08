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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_PAIR_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_PAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Key value pair
                */
                class Pair : public AbstractModel
                {
                public:
                    Pair();
                    ~Pair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key
                     * @return Key Key
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key
                     * @param Key Key
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Value
                     * @return Value Value
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value
                     * @param Value Value
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取`default``: Custom. `reserved`: System variable. `referenced`: Referenced configuration item.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return Type `default``: Custom. `reserved`: System variable. `referenced`: Referenced configuration item.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetType() const;

                    /**
                     * 设置`default``: Custom. `reserved`: System variable. `referenced`: Referenced configuration item.
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param Type `default``: Custom. `reserved`: System variable. `referenced`: Referenced configuration item.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Configuration name
Note: This field may return `null`, indicating that no valid value can be found.
                     * @return Config Configuration name
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置Configuration name
Note: This field may return `null`, indicating that no valid value can be found.
                     * @param Config Configuration name
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Encrypt configuration name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Secret Encrypt configuration name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetSecret() const;

                    /**
                     * 设置Encrypt configuration name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Secret Encrypt configuration name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetSecret(const std::string& _secret);

                    /**
                     * 判断参数 Secret 是否已赋值
                     * @return Secret 是否已赋值
                     */
                    bool SecretHasBeenSet() const;

                private:

                    /**
                     * Key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Value
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * `default``: Custom. `reserved`: System variable. `referenced`: Referenced configuration item.
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Configuration name
Note: This field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Encrypt configuration name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_secret;
                    bool m_secretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_PAIR_H_
