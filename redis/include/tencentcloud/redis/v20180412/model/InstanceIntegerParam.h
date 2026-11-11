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
                     * 获取<p>Parameter name</p>
                     * @return ParamName <p>Parameter name</p>
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置<p>Parameter name</p>
                     * @param _paramName <p>Parameter name</p>
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
                     * 获取<p>Parameter type: integer</p>
                     * @return ValueType <p>Parameter type: integer</p>
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置<p>Parameter type: integer</p>
                     * @param _valueType <p>Parameter type: integer</p>
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
                     * 获取<p>Whether restart is required after modification: true, false</p>
                     * @return NeedRestart <p>Whether restart is required after modification: true, false</p>
                     * 
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置<p>Whether restart is required after modification: true, false</p>
                     * @param _needRestart <p>Whether restart is required after modification: true, false</p>
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
                     * 获取<p>Default parameter value</p>
                     * @return DefaultValue <p>Default parameter value</p>
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置<p>Default parameter value</p>
                     * @param _defaultValue <p>Default parameter value</p>
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
                     * 获取<p>Current running parameter value</p>
                     * @return CurrentValue <p>Current running parameter value</p>
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置<p>Current running parameter value</p>
                     * @param _currentValue <p>Current running parameter value</p>
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
                     * 获取<p>Parameter description</p>
                     * @return Tips <p>Parameter description</p>
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置<p>Parameter description</p>
                     * @param _tips <p>Parameter description</p>
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
                     * 获取<p>Minimum parameter value</p>
                     * @return Min <p>Minimum parameter value</p>
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置<p>Minimum parameter value</p>
                     * @param _min <p>Minimum parameter value</p>
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
                     * 获取<p>Maximum parameter value</p>
                     * @return Max <p>Maximum parameter value</p>
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置<p>Maximum parameter value</p>
                     * @param _max <p>Maximum parameter value</p>
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
                     * 获取<p>Parameter status. 1: modifying, 2: modified</p>
                     * @return Status <p>Parameter status. 1: modifying, 2: modified</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Parameter status. 1: modifying, 2: modified</p>
                     * @param _status <p>Parameter status. 1: modifying, 2: modified</p>
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
                     * 获取<p>Parameter unit</p>
                     * @return Unit <p>Parameter unit</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置<p>Parameter unit</p>
                     * @param _unit <p>Parameter unit</p>
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取<p>Parameter type</p><p>Enumeration values:</p><ul><li>redis: parameters supported by cache nodes</li><li>redis-interface: parameters supported by proxy</li><li>tendis: parameters supported by tendis</li></ul>
                     * @return ParamType <p>Parameter type</p><p>Enumeration values:</p><ul><li>redis: parameters supported by cache nodes</li><li>redis-interface: parameters supported by proxy</li><li>tendis: parameters supported by tendis</li></ul>
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置<p>Parameter type</p><p>Enumeration values:</p><ul><li>redis: parameters supported by cache nodes</li><li>redis-interface: parameters supported by proxy</li><li>tendis: parameters supported by tendis</li></ul>
                     * @param _paramType <p>Parameter type</p><p>Enumeration values:</p><ul><li>redis: parameters supported by cache nodes</li><li>redis-interface: parameters supported by proxy</li><li>tendis: parameters supported by tendis</li></ul>
                     * 
                     */
                    void SetParamType(const std::string& _paramType);

                    /**
                     * 判断参数 ParamType 是否已赋值
                     * @return ParamType 是否已赋值
                     * 
                     */
                    bool ParamTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether the current instance supports this feature</p>
                     * @return FeatureSupported <p>Whether the current instance supports this feature</p>
                     * 
                     */
                    bool GetFeatureSupported() const;

                    /**
                     * 设置<p>Whether the current instance supports this feature</p>
                     * @param _featureSupported <p>Whether the current instance supports this feature</p>
                     * 
                     */
                    void SetFeatureSupported(const bool& _featureSupported);

                    /**
                     * 判断参数 FeatureSupported 是否已赋值
                     * @return FeatureSupported 是否已赋值
                     * 
                     */
                    bool FeatureSupportedHasBeenSet() const;

                    /**
                     * 获取<p>New feature launch date</p><p>Parameter format: time format YYYY-MM-DD</p>
                     * @return NewFeatureOnlineTime <p>New feature launch date</p><p>Parameter format: time format YYYY-MM-DD</p>
                     * 
                     */
                    std::string GetNewFeatureOnlineTime() const;

                    /**
                     * 设置<p>New feature launch date</p><p>Parameter format: time format YYYY-MM-DD</p>
                     * @param _newFeatureOnlineTime <p>New feature launch date</p><p>Parameter format: time format YYYY-MM-DD</p>
                     * 
                     */
                    void SetNewFeatureOnlineTime(const std::string& _newFeatureOnlineTime);

                    /**
                     * 判断参数 NewFeatureOnlineTime 是否已赋值
                     * @return NewFeatureOnlineTime 是否已赋值
                     * 
                     */
                    bool NewFeatureOnlineTimeHasBeenSet() const;

                    /**
                     * 获取<p>Regular expression validation rule</p>
                     * @return Pattern <p>Regular expression validation rule</p>
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置<p>Regular expression validation rule</p>
                     * @param _pattern <p>Regular expression validation rule</p>
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取<p>Input format description</p>
                     * @return InputDescription <p>Input format description</p>
                     * 
                     */
                    std::string GetInputDescription() const;

                    /**
                     * 设置<p>Input format description</p>
                     * @param _inputDescription <p>Input format description</p>
                     * 
                     */
                    void SetInputDescription(const std::string& _inputDescription);

                    /**
                     * 判断参数 InputDescription 是否已赋值
                     * @return InputDescription 是否已赋值
                     * 
                     */
                    bool InputDescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Parameter name</p>
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * <p>Parameter type: integer</p>
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * <p>Whether restart is required after modification: true, false</p>
                     */
                    std::string m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * <p>Default parameter value</p>
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * <p>Current running parameter value</p>
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * <p>Parameter description</p>
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * <p>Minimum parameter value</p>
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * <p>Maximum parameter value</p>
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * <p>Parameter status. 1: modifying, 2: modified</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Parameter unit</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>Parameter type</p><p>Enumeration values:</p><ul><li>redis: parameters supported by cache nodes</li><li>redis-interface: parameters supported by proxy</li><li>tendis: parameters supported by tendis</li></ul>
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * <p>Whether the current instance supports this feature</p>
                     */
                    bool m_featureSupported;
                    bool m_featureSupportedHasBeenSet;

                    /**
                     * <p>New feature launch date</p><p>Parameter format: time format YYYY-MM-DD</p>
                     */
                    std::string m_newFeatureOnlineTime;
                    bool m_newFeatureOnlineTimeHasBeenSet;

                    /**
                     * <p>Regular expression validation rule</p>
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * <p>Input format description</p>
                     */
                    std::string m_inputDescription;
                    bool m_inputDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEINTEGERPARAM_H_
