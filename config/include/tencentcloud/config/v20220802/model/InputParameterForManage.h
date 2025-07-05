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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_INPUTPARAMETERFORMANAGE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_INPUTPARAMETERFORMANAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * Rule input parameters
                */
                class InputParameterForManage : public AbstractModel
                {
                public:
                    InputParameterForManage();
                    ~InputParameterForManage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Value type. Integer: Integer, String: String.
Note: This field may return null, indicating that no valid value is found.
                     * @return ValueType Value type. Integer: Integer, String: String.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置Value type. Integer: Integer, String: String.
Note: This field may return null, indicating that no valid value is found.
                     * @param _valueType Value type. Integer: Integer, String: String.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetValueType(const std::string& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                    /**
                     * 获取Parameter key
Note: This field may return null, indicating that no valid value is found.
                     * @return ParameterKey Parameter key
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetParameterKey() const;

                    /**
                     * 设置Parameter key
Note: This field may return null, indicating that no valid value is found.
                     * @param _parameterKey Parameter key
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetParameterKey(const std::string& _parameterKey);

                    /**
                     * 判断参数 ParameterKey 是否已赋值
                     * @return ParameterKey 是否已赋值
                     * 
                     */
                    bool ParameterKeyHasBeenSet() const;

                    /**
                     * 获取Parameter type. Required type: Required, Optional type: Optional.
Note: This field may return null, indicating that no valid value is found.
                     * @return Type Parameter type. Required type: Required, Optional type: Optional.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Parameter type. Required type: Required, Optional type: Optional.
Note: This field may return null, indicating that no valid value is found.
                     * @param _type Parameter type. Required type: Required, Optional type: Optional.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Default value

Note: This field may return null, indicating that no valid value is found.
                     * @return DefaultValue Default value

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Default value

Note: This field may return null, indicating that no valid value is found.
                     * @param _defaultValue Default value

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取Description

Note: This field may return null, indicating that no valid value is found.
                     * @return Description Description

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description

Note: This field may return null, indicating that no valid value is found.
                     * @param _description Description

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Value type. Integer: Integer, String: String.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * Parameter key
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_parameterKey;
                    bool m_parameterKeyHasBeenSet;

                    /**
                     * Parameter type. Required type: Required, Optional type: Optional.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Default value

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Description

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_INPUTPARAMETERFORMANAGE_H_
