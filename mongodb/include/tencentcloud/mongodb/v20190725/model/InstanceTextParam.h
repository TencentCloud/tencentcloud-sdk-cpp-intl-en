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
                * The collection of modifiable text parameters of an instance.
                */
                class InstanceTextParam : public AbstractModel
                {
                public:
                    InstanceTextParam();
                    ~InstanceTextParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Current value
                     * @return CurrentValue Current value
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置Current value
                     * @param _currentValue Current value
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
                     * 获取Whether to restart the instance for the parameter to take effect
                     * @return NeedRestart Whether to restart the instance for the parameter to take effect
                     * 
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置Whether to restart the instance for the parameter to take effect
                     * @param _needRestart Whether to restart the instance for the parameter to take effect
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
                     * 获取Parameter name
                     * @return ParamName Parameter name
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name
                     * @param _paramName Parameter name
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
                     * 获取Value of a text parameter
                     * @return TextValue Value of a text parameter
                     * 
                     */
                    std::string GetTextValue() const;

                    /**
                     * 设置Value of a text parameter
                     * @param _textValue Value of a text parameter
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
                     * 获取Parameter description
                     * @return Tips Parameter description
                     * 
                     */
                    std::vector<std::string> GetTips() const;

                    /**
                     * 设置Parameter description
                     * @param _tips Parameter description
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
                     * 获取Value type
                     * @return ValueType Value type
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置Value type
                     * @param _valueType Value type
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
                     * 获取Whether `CurrentValue` is the parameter value actually in use. Valid values: `1` (yes), `0` (no)
                     * @return Status Whether `CurrentValue` is the parameter value actually in use. Valid values: `1` (yes), `0` (no)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Whether `CurrentValue` is the parameter value actually in use. Valid values: `1` (yes), `0` (no)
                     * @param _status Whether `CurrentValue` is the parameter value actually in use. Valid values: `1` (yes), `0` (no)
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
                     * Current value
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * Default value
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Whether to restart the instance for the parameter to take effect
                     */
                    std::string m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * Parameter name
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Value of a text parameter
                     */
                    std::string m_textValue;
                    bool m_textValueHasBeenSet;

                    /**
                     * Parameter description
                     */
                    std::vector<std::string> m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * Value type
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * Whether `CurrentValue` is the parameter value actually in use. Valid values: `1` (yes), `0` (no)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCETEXTPARAM_H_
