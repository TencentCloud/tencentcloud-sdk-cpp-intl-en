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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEENUMPARAM_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEENUMPARAM_H_

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
                * The collection of modifiable enum parameters of an instance.
                */
                class InstanceEnumParam : public AbstractModel
                {
                public:
                    InstanceEnumParam();
                    ~InstanceEnumParam() = default;
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
                     * 获取Enumerated values, which indicate all supported values.
                     * @return EnumValue Enumerated values, which indicate all supported values.
                     * 
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置Enumerated values, which indicate all supported values.
                     * @param _enumValue Enumerated values, which indicate all supported values.
                     * 
                     */
                    void SetEnumValue(const std::vector<std::string>& _enumValue);

                    /**
                     * 判断参数 EnumValue 是否已赋值
                     * @return EnumValue 是否已赋值
                     * 
                     */
                    bool EnumValueHasBeenSet() const;

                    /**
                     * 获取Whether a restart is required for the parameters to take effect after modification.
 - 1: Restart is required for the parameters to take effect.
 - 0: Restart is not required. Once set, the parameters take effect immediately.
                     * @return NeedRestart Whether a restart is required for the parameters to take effect after modification.
 - 1: Restart is required for the parameters to take effect.
 - 0: Restart is not required. Once set, the parameters take effect immediately.
                     * 
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置Whether a restart is required for the parameters to take effect after modification.
 - 1: Restart is required for the parameters to take effect.
 - 0: Restart is not required. Once set, the parameters take effect immediately.
                     * @param _needRestart Whether a restart is required for the parameters to take effect after modification.
 - 1: Restart is required for the parameters to take effect.
 - 0: Restart is not required. Once set, the parameters take effect immediately.
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
                    uint64_t GetStatus() const;

                    /**
                     * 设置Whether the parameter values are used during running.
 - 1. parameter values used during running.
 - 0: parameter values not used during running.
                     * @param _status Whether the parameter values are used during running.
 - 1. parameter values used during running.
 - 0: parameter values not used during running.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

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
                     * Enumerated values, which indicate all supported values.
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * Whether a restart is required for the parameters to take effect after modification.
 - 1: Restart is required for the parameters to take effect.
 - 0: Restart is not required. Once set, the parameters take effect immediately.
                     */
                    std::string m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * Parameter name.
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

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
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEENUMPARAM_H_
