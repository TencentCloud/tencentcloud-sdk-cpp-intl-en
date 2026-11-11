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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCETEXTPARAM_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCETEXTPARAM_H_

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
                * Description of instance parameter in Char type
                */
                class InstanceTextParam : public AbstractModel
                {
                public:
                    InstanceTextParam();
                    ~InstanceTextParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Parameter name.</p>
                     * @return ParamName <p>Parameter name.</p>
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置<p>Parameter name.</p>
                     * @param _paramName <p>Parameter name.</p>
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
                     * 获取<p>Parameter type. For example: text.</p>
                     * @return ValueType <p>Parameter type. For example: text.</p>
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置<p>Parameter type. For example: text.</p>
                     * @param _valueType <p>Parameter type. For example: text.</p>
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
                     * 获取<p>Whether restart is required after parameter modification.</p><ul><li>true: required.</li><li>false: not required.</li></ul>
                     * @return NeedRestart <p>Whether restart is required after parameter modification.</p><ul><li>true: required.</li><li>false: not required.</li></ul>
                     * 
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置<p>Whether restart is required after parameter modification.</p><ul><li>true: required.</li><li>false: not required.</li></ul>
                     * @param _needRestart <p>Whether restart is required after parameter modification.</p><ul><li>true: required.</li><li>false: not required.</li></ul>
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
                     * 获取<p>Default parameter value.</p>
                     * @return DefaultValue <p>Default parameter value.</p>
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置<p>Default parameter value.</p>
                     * @param _defaultValue <p>Default parameter value.</p>
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
                     * 获取<p>Current value of the parameter.</p>
                     * @return CurrentValue <p>Current value of the parameter.</p>
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置<p>Current value of the parameter.</p>
                     * @param _currentValue <p>Current value of the parameter.</p>
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
                     * 获取<p>Parameter description.</p>
                     * @return Tips <p>Parameter description.</p>
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置<p>Parameter description.</p>
                     * @param _tips <p>Parameter description.</p>
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
                     * 获取<p>Available values of the parameter.</p>
                     * @return TextValue <p>Available values of the parameter.</p>
                     * 
                     */
                    std::vector<std::string> GetTextValue() const;

                    /**
                     * 设置<p>Available values of the parameter.</p>
                     * @param _textValue <p>Available values of the parameter.</p>
                     * 
                     */
                    void SetTextValue(const std::vector<std::string>& _textValue);

                    /**
                     * 判断参数 TextValue 是否已赋值
                     * @return TextValue 是否已赋值
                     * 
                     */
                    bool TextValueHasBeenSet() const;

                    /**
                     * 获取<p>Parameter modification status.</p><ul><li>1: Modifying.</li><li>2: Modified.</li></ul>
                     * @return Status <p>Parameter modification status.</p><ul><li>1: Modifying.</li><li>2: Modified.</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Parameter modification status.</p><ul><li>1: Modifying.</li><li>2: Modified.</li></ul>
                     * @param _status <p>Parameter modification status.</p><ul><li>1: Modifying.</li><li>2: Modified.</li></ul>
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
                     * <p>Parameter name.</p>
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * <p>Parameter type. For example: text.</p>
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * <p>Whether restart is required after parameter modification.</p><ul><li>true: required.</li><li>false: not required.</li></ul>
                     */
                    std::string m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * <p>Default parameter value.</p>
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * <p>Current value of the parameter.</p>
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * <p>Parameter description.</p>
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * <p>Available values of the parameter.</p>
                     */
                    std::vector<std::string> m_textValue;
                    bool m_textValueHasBeenSet;

                    /**
                     * <p>Parameter modification status.</p><ul><li>1: Modifying.</li><li>2: Modified.</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

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

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCETEXTPARAM_H_
