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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEINTEGERPARAM_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEINTEGERPARAM_H_

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
                * Description of the instance parameter in Integer type
                */
                class InstanceIntegerParam : public AbstractModel
                {
                public:
                    InstanceIntegerParam();
                    ~InstanceIntegerParam() = default;
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
                     * 获取Parameter type: Integer
                     * @return ValueType Parameter type: Integer
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置Parameter type: Integer
                     * @param _valueType Parameter type: Integer
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
                     * 获取Whether restart is required after a modification is made. Valid values: true, false
                     * @return NeedRestart Whether restart is required after a modification is made. Valid values: true, false
                     * 
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置Whether restart is required after a modification is made. Valid values: true, false
                     * @param _needRestart Whether restart is required after a modification is made. Valid values: true, false
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
                     * 获取Parameter description
                     * @return Tips Parameter description
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置Parameter description
                     * @param _tips Parameter description
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
                     * 获取Minimum value of the parameter
                     * @return Min Minimum value of the parameter
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置Minimum value of the parameter
                     * @param _min Minimum value of the parameter
                     * 
                     */
                    void SetMin(const std::string& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Maximum value of the parameter
                     * @return Max Maximum value of the parameter
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置Maximum value of the parameter
                     * @param _max Maximum value of the parameter
                     * 
                     */
                    void SetMax(const std::string& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取Parameter status. 1: modifying; 2: modified
                     * @return Status Parameter status. 1: modifying; 2: modified
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Parameter status. 1: modifying; 2: modified
                     * @param _status Parameter status. 1: modifying; 2: modified
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Parameter unit.
                     * @return Unit Parameter unit.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Parameter unit.
                     * @param _unit Parameter unit.
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                private:

                    /**
                     * Parameter name
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Parameter type: Integer
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * Whether restart is required after a modification is made. Valid values: true, false
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
                     * Parameter description
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * Minimum value of the parameter
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Maximum value of the parameter
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Parameter status. 1: modifying; 2: modified
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Parameter unit.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEINTEGERPARAM_H_
