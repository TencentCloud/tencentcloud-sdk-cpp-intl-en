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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_PARAMDESC_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_PARAMDESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/ParamConstraint.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DB parameter description.
                */
                class ParamDesc : public AbstractModel
                {
                public:
                    ParamDesc();
                    ~ParamDesc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name.
                     * @return Param Parameter name.
                     * 
                     */
                    std::string GetParam() const;

                    /**
                     * 设置Parameter name.
                     * @param _param Parameter name.
                     * 
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                    /**
                     * 获取Current parameter value.
                     * @return Value Current parameter value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Current parameter value.
                     * @param _value Current parameter value.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取The configured value is the same as the value once the parameter takes effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SetValue The configured value is the same as the value once the parameter takes effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSetValue() const;

                    /**
                     * 设置The configured value is the same as the value once the parameter takes effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _setValue The configured value is the same as the value once the parameter takes effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSetValue(const std::string& _setValue);

                    /**
                     * 判断参数 SetValue 是否已赋值
                     * @return SetValue 是否已赋值
                     * 
                     */
                    bool SetValueHasBeenSet() const;

                    /**
                     * 获取System default value.
                     * @return Default System default value.
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置System default value.
                     * @param _default System default value.
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取Parameter limits.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Constraint Parameter limits.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ParamConstraint GetConstraint() const;

                    /**
                     * 设置Parameter limits.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _constraint Parameter limits.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConstraint(const ParamConstraint& _constraint);

                    /**
                     * 判断参数 Constraint 是否已赋值
                     * @return Constraint 是否已赋值
                     * 
                     */
                    bool ConstraintHasBeenSet() const;

                    /**
                     * 获取Whether a value has been set. false: not set. true: has set.
                     * @return HaveSetValue Whether a value has been set. false: not set. true: has set.
                     * 
                     */
                    bool GetHaveSetValue() const;

                    /**
                     * 设置Whether a value has been set. false: not set. true: has set.
                     * @param _haveSetValue Whether a value has been set. false: not set. true: has set.
                     * 
                     */
                    void SetHaveSetValue(const bool& _haveSetValue);

                    /**
                     * 判断参数 HaveSetValue 是否已赋值
                     * @return HaveSetValue 是否已赋值
                     * 
                     */
                    bool HaveSetValueHasBeenSet() const;

                    /**
                     * 获取true: restart required.
                     * @return NeedRestart true: restart required.
                     * 
                     */
                    bool GetNeedRestart() const;

                    /**
                     * 设置true: restart required.
                     * @param _needRestart true: restart required.
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
                     * 获取Parameter description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Parameter description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Parameter description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Parameter description.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Parameter name.
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * Current parameter value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * The configured value is the same as the value once the parameter takes effect.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_setValue;
                    bool m_setValueHasBeenSet;

                    /**
                     * System default value.
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * Parameter limits.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ParamConstraint m_constraint;
                    bool m_constraintHasBeenSet;

                    /**
                     * Whether a value has been set. false: not set. true: has set.
                     */
                    bool m_haveSetValue;
                    bool m_haveSetValueHasBeenSet;

                    /**
                     * true: restart required.
                     */
                    bool m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * Parameter description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_PARAMDESC_H_
