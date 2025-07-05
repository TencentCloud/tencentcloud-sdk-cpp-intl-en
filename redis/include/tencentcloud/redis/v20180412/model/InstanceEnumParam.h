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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEENUMPARAM_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEENUMPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Description of the instance parameter in Enum type
                */
                class InstanceEnumParam : public AbstractModel
                {
                public:
                    InstanceEnumParam();
                    ~InstanceEnumParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Parameter type, such as `Enum`.
                     * @return ValueType Parameter type, such as `Enum`.
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置Parameter type, such as `Enum`.
                     * @param _valueType Parameter type, such as `Enum`.
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
                     * 获取Whether to restart the database after modifying the parameters. Valid values: - `true` (required) - `false` (not required)
                     * @return NeedRestart Whether to restart the database after modifying the parameters. Valid values: - `true` (required) - `false` (not required)
                     * 
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置Whether to restart the database after modifying the parameters. Valid values: - `true` (required) - `false` (not required)
                     * @param _needRestart Whether to restart the database after modifying the parameters. Valid values: - `true` (required) - `false` (not required)
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
                     * 获取Default value of the parameter
                     * @return DefaultValue Default value of the parameter
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Default value of the parameter
                     * @param _defaultValue Default value of the parameter
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
                     * 获取Description
                     * @return Tips Description
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置Description
                     * @param _tips Description
                     * 
                     */
                    void SetTips(const std::string& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     * 
                     */
                    bool TipsHasBeenSet() const;

                    /**
                     * 获取Acceptable values for the parameter
                     * @return EnumValue Acceptable values for the parameter
                     * 
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置Acceptable values for the parameter
                     * @param _enumValue Acceptable values for the parameter
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
                     * 获取Parameter modification status. Valid values: - `1` (modifying) - `2` (modified)
                     * @return Status Parameter modification status. Valid values: - `1` (modifying) - `2` (modified)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Parameter modification status. Valid values: - `1` (modifying) - `2` (modified)
                     * @param _status Parameter modification status. Valid values: - `1` (modifying) - `2` (modified)
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Parameter name
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Parameter type, such as `Enum`.
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * Whether to restart the database after modifying the parameters. Valid values: - `true` (required) - `false` (not required)
                     */
                    std::string m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * Default value of the parameter
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Current value
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * Acceptable values for the parameter
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * Parameter modification status. Valid values: - `1` (modifying) - `2` (modified)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEENUMPARAM_H_
