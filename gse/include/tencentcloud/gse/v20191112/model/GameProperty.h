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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GAMEPROPERTY_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GAMEPROPERTY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * Game attribute details
                */
                class GameProperty : public AbstractModel
                {
                public:
                    GameProperty();
                    ~GameProperty() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attribute name. Up to 32 ASCII characters are allowed.
                     * @return Key Attribute name. Up to 32 ASCII characters are allowed.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Attribute name. Up to 32 ASCII characters are allowed.
                     * @param _key Attribute name. Up to 32 ASCII characters are allowed.
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
                     * 获取Attribute value. Up to 96 ASCII characters are allowed.
                     * @return Value Attribute value. Up to 96 ASCII characters are allowed.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Attribute value. Up to 96 ASCII characters are allowed.
                     * @param _value Attribute value. Up to 96 ASCII characters are allowed.
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
                     * Attribute name. Up to 32 ASCII characters are allowed.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Attribute value. Up to 96 ASCII characters are allowed.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GAMEPROPERTY_H_
