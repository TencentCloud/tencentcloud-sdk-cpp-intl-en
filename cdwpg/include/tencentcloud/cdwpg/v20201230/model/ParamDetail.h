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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_PARAMDETAIL_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_PARAMDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/ValueRange.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * ParamDetail
                */
                class ParamDetail : public AbstractModel
                {
                public:
                    ParamDetail();
                    ~ParamDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParamName Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _paramName Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Default value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultValue Default value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Default value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultValue Default value.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Indicates whether the restart is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NeedRestart Indicates whether the restart is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetNeedRestart() const;

                    /**
                     * 设置Indicates whether the restart is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _needRestart Indicates whether the restart is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNeedRestart(const bool& _needRestart);

                    /**
                     * 判断参数 NeedRestart 是否已赋值
                     * @return NeedRestart 是否已赋值
                     * 
                     */
                    bool NeedRestartHasBeenSet() const;

                    /**
                     * 获取Current value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RunningValue Current value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRunningValue() const;

                    /**
                     * 设置Current value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _runningValue Current value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRunningValue(const std::string& _runningValue);

                    /**
                     * 判断参数 RunningValue 是否已赋值
                     * @return RunningValue 是否已赋值
                     * 
                     */
                    bool RunningValueHasBeenSet() const;

                    /**
                     * 获取Value range.
                     * @return ValueRange Value range.
                     * 
                     */
                    ValueRange GetValueRange() const;

                    /**
                     * 设置Value range.
                     * @param _valueRange Value range.
                     * 
                     */
                    void SetValueRange(const ValueRange& _valueRange);

                    /**
                     * 判断参数 ValueRange 是否已赋值
                     * @return ValueRange 是否已赋值
                     * 
                     */
                    bool ValueRangeHasBeenSet() const;

                    /**
                     * 获取Unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Unit Unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unit Unit.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Introduction in English.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShortDesc Introduction in English.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetShortDesc() const;

                    /**
                     * 设置Introduction in English.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shortDesc Introduction in English.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetShortDesc(const std::string& _shortDesc);

                    /**
                     * 判断参数 ShortDesc 是否已赋值
                     * @return ShortDesc 是否已赋值
                     * 
                     */
                    bool ShortDescHasBeenSet() const;

                    /**
                     * 获取Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParameterName Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParameterName() const;

                    /**
                     * 设置Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parameterName Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParameterName(const std::string& _parameterName);

                    /**
                     * 判断参数 ParameterName 是否已赋值
                     * @return ParameterName 是否已赋值
                     * 
                     */
                    bool ParameterNameHasBeenSet() const;

                private:

                    /**
                     * Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Default value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Indicates whether the restart is required.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * Current value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_runningValue;
                    bool m_runningValueHasBeenSet;

                    /**
                     * Value range.
                     */
                    ValueRange m_valueRange;
                    bool m_valueRangeHasBeenSet;

                    /**
                     * Unit.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Introduction in English.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_shortDesc;
                    bool m_shortDescHasBeenSet;

                    /**
                     * Parameter name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_parameterName;
                    bool m_parameterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_PARAMDETAIL_H_
