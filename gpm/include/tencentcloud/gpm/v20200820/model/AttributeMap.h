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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_ATTRIBUTEMAP_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_ATTRIBUTEMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * The map key and map value of the player attribute
                */
                class AttributeMap : public AbstractModel
                {
                public:
                    AttributeMap();
                    ~AttributeMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Map key, supporting [a-zA-Z0-9-\.]*
                     * @return Key Map key, supporting [a-zA-Z0-9-\.]*
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Map key, supporting [a-zA-Z0-9-\.]*
                     * @param _key Map key, supporting [a-zA-Z0-9-\.]*
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
                     * 获取Map value
                     * @return Value Map value
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置Map value
                     * @param _value Map value
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Map key, supporting [a-zA-Z0-9-\.]*
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Map value
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_ATTRIBUTEMAP_H_
