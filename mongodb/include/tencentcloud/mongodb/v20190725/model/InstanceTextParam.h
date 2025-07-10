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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCETEXTPARAM_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCETEXTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Collection of modifiable instance parameters whose values are of the Text type.
                */
                class InstanceTextParam : public AbstractModel
                {
                public:
                    InstanceTextParam();
                    ~InstanceTextParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Current parameter value.
                     * @return CurrentValue Current parameter value.
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置Current parameter value.
                     * @param _currentValue Current parameter value.
                     * 
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     * 
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取Default parameter value.
                     * @return DefaultValue Default parameter value.
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Default parameter value.
                     * @param _defaultValue Default parameter value.
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
                     * 获取Whether a restart is required after the parameter values are modified.
                     * @return NeedRestart Whether a restart is required after the parameter values are modified.
                     * 
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置Whether a restart is required after the parameter values are modified.
                     * @param _needRestart Whether a restart is required after the parameter values are modified.
                     * 
                     */
                    void SetNeedRestart(const std::string& _needRestart);

                    /**
                     * 判断参数 NeedRestart 是否已赋值
                     * @return NeedRestart 是否已赋值
                     * 
                     */
                    bool NeedRestartHasBeenSet() const;

                    /**
                     * 获取Parameter name.
                     * @return ParamName Parameter name.
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name.
                     * @param _paramName Parameter name.
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取Corresponding values of the Text-type parameters.
                     * @return TextValue Corresponding values of the Text-type parameters.
                     * 
                     */
                    std::string GetTextValue() const;

                    /**
                     * 设置Corresponding values of the Text-type parameters.
                     * @param _textValue Corresponding values of the Text-type parameters.
                     * 
                     */
                    void SetTextValue(const std::string& _textValue);

                    /**
                     * 判断参数 TextValue 是否已赋值
                     * @return TextValue 是否已赋值
                     * 
                     */
                    bool TextValueHasBeenSet() const;

                    /**
                     * 获取Parameter description.
                     * @return Tips Parameter description.
                     * 
                     */
                    std::vector<std::string> GetTips() const;

                    /**
                     * 设置Parameter description.
                     * @param _tips Parameter description.
                     * 
                     */
                    void SetTips(const std::vector<std::string>& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     * 
                     */
                    bool TipsHasBeenSet() const;

                    /**
                     * 获取Parameter type description.
                     * @return ValueType Parameter type description.
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置Parameter type description.
                     * @param _valueType Parameter type description.
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
                     * 获取Whether the parameter values are used during running.
 - 1. parameter values used during running.
 - 0: parameter values not used during running.
                     * @return Status Whether the parameter values are used during running.
 - 1. parameter values used during running.
 - 0: parameter values not used during running.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Whether the parameter values are used during running.
 - 1. parameter values used during running.
 - 0: parameter values not used during running.
                     * @param _status Whether the parameter values are used during running.
 - 1. parameter values used during running.
 - 0: parameter values not used during running.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Current parameter value.
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * Default parameter value.
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Whether a restart is required after the parameter values are modified.
                     */
                    std::string m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * Parameter name.
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Corresponding values of the Text-type parameters.
                     */
                    std::string m_textValue;
                    bool m_textValueHasBeenSet;

                    /**
                     * Parameter description.
                     */
                    std::vector<std::string> m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * Parameter type description.
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * Whether the parameter values are used during running.
 - 1. parameter values used during running.
 - 0: parameter values not used during running.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCETEXTPARAM_H_
