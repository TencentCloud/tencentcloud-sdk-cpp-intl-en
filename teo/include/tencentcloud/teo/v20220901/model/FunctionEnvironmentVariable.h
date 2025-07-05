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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONENVIRONMENTVARIABLE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONENVIRONMENTVARIABLE_H_

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
                * Environment variables of an edge function
                */
                class FunctionEnvironmentVariable : public AbstractModel
                {
                public:
                    FunctionEnvironmentVariable();
                    ~FunctionEnvironmentVariable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Variable name, which should be unique and can only contain uppercase and lowercase letters, digits, and special characters including at signs (@), periods (.), hyphens (-), and underscores (_). Its maximum size is 64 bytes.
                     * @return Key Variable name, which should be unique and can only contain uppercase and lowercase letters, digits, and special characters including at signs (@), periods (.), hyphens (-), and underscores (_). Its maximum size is 64 bytes.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Variable name, which should be unique and can only contain uppercase and lowercase letters, digits, and special characters including at signs (@), periods (.), hyphens (-), and underscores (_). Its maximum size is 64 bytes.
                     * @param _key Variable name, which should be unique and can only contain uppercase and lowercase letters, digits, and special characters including at signs (@), periods (.), hyphens (-), and underscores (_). Its maximum size is 64 bytes.
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
                     * 获取Variable value. Its maximum size is 5000 bytes. The default value is empty.
                     * @return Value Variable value. Its maximum size is 5000 bytes. The default value is empty.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Variable value. Its maximum size is 5000 bytes. The default value is empty.
                     * @param _value Variable value. Its maximum size is 5000 bytes. The default value is empty.
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
                     * 获取Variable type. Valid values:
<li>string: string type;</li>
<li>json: JSON object type.</li>Default value: string.
                     * @return Type Variable type. Valid values:
<li>string: string type;</li>
<li>json: JSON object type.</li>Default value: string.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Variable type. Valid values:
<li>string: string type;</li>
<li>json: JSON object type.</li>Default value: string.
                     * @param _type Variable type. Valid values:
<li>string: string type;</li>
<li>json: JSON object type.</li>Default value: string.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Variable name, which should be unique and can only contain uppercase and lowercase letters, digits, and special characters including at signs (@), periods (.), hyphens (-), and underscores (_). Its maximum size is 64 bytes.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Variable value. Its maximum size is 5000 bytes. The default value is empty.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Variable type. Valid values:
<li>string: string type;</li>
<li>json: JSON object type.</li>Default value: string.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_FUNCTIONENVIRONMENTVARIABLE_H_
