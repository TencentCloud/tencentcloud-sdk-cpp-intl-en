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
                * Rule input parameters.
                */
                class InputParameterForManage : public AbstractModel
                {
                public:
                    InputParameterForManage();
                    ~InputParameterForManage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Value type. Valid values: Integer and String.
                     * @return ValueType Value type. Valid values: Integer and String.
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置Value type. Valid values: Integer and String.
                     * @param _valueType Value type. Valid values: Integer and String.
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
                     * 获取Parameter key.
                     * @return ParameterKey Parameter key.
                     * 
                     */
                    std::string GetParameterKey() const;

                    /**
                     * 设置Parameter key.
                     * @param _parameterKey Parameter key.
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
                     * 获取Parameter type. Valid values: Require (required) and Optional (optional).
                     * @return Type Parameter type. Valid values: Require (required) and Optional (optional).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Parameter type. Valid values: Require (required) and Optional (optional).
                     * @param _type Parameter type. Valid values: Require (required) and Optional (optional).
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
                     * @return DefaultValue Default value
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Default value
                     * @param _defaultValue Default value
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
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
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
                     * Value type. Valid values: Integer and String.
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * Parameter key.
                     */
                    std::string m_parameterKey;
                    bool m_parameterKeyHasBeenSet;

                    /**
                     * Parameter type. Valid values: Require (required) and Optional (optional).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Default value
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_INPUTPARAMETERFORMANAGE_H_
