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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_PARAMDESC_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_PARAMDESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/ParamConstraint.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DB parameter description
                */
                class ParamDesc : public AbstractModel
                {
                public:
                    ParamDesc();
                    ~ParamDesc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name
                     * @return Param Parameter name
                     */
                    std::string GetParam() const;

                    /**
                     * 设置Parameter name
                     * @param Param Parameter name
                     */
                    void SetParam(const std::string& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     */
                    bool ParamHasBeenSet() const;

                    /**
                     * 获取Current parameter value
                     * @return Value Current parameter value
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Current parameter value
                     * @param Value Current parameter value
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Previously set value, which is the same as `value` after the parameter takes effect. If no value has been set, this field will not be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SetValue Previously set value, which is the same as `value` after the parameter takes effect. If no value has been set, this field will not be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSetValue() const;

                    /**
                     * 设置Previously set value, which is the same as `value` after the parameter takes effect. If no value has been set, this field will not be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SetValue Previously set value, which is the same as `value` after the parameter takes effect. If no value has been set, this field will not be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSetValue(const std::string& _setValue);

                    /**
                     * 判断参数 SetValue 是否已赋值
                     * @return SetValue 是否已赋值
                     */
                    bool SetValueHasBeenSet() const;

                    /**
                     * 获取Default value
                     * @return Default Default value
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置Default value
                     * @param Default Default value
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取Parameter constraint
                     * @return Constraint Parameter constraint
                     */
                    ParamConstraint GetConstraint() const;

                    /**
                     * 设置Parameter constraint
                     * @param Constraint Parameter constraint
                     */
                    void SetConstraint(const ParamConstraint& _constraint);

                    /**
                     * 判断参数 Constraint 是否已赋值
                     * @return Constraint 是否已赋值
                     */
                    bool ConstraintHasBeenSet() const;

                    /**
                     * 获取Whether a value has been set. false: no, true: yes
                     * @return HaveSetValue Whether a value has been set. false: no, true: yes
                     */
                    bool GetHaveSetValue() const;

                    /**
                     * 设置Whether a value has been set. false: no, true: yes
                     * @param HaveSetValue Whether a value has been set. false: no, true: yes
                     */
                    void SetHaveSetValue(const bool& _haveSetValue);

                    /**
                     * 判断参数 HaveSetValue 是否已赋值
                     * @return HaveSetValue 是否已赋值
                     */
                    bool HaveSetValueHasBeenSet() const;

                private:

                    /**
                     * Parameter name
                     */
                    std::string m_param;
                    bool m_paramHasBeenSet;

                    /**
                     * Current parameter value
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Previously set value, which is the same as `value` after the parameter takes effect. If no value has been set, this field will not be returned.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_setValue;
                    bool m_setValueHasBeenSet;

                    /**
                     * Default value
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * Parameter constraint
                     */
                    ParamConstraint m_constraint;
                    bool m_constraintHasBeenSet;

                    /**
                     * Whether a value has been set. false: no, true: yes
                     */
                    bool m_haveSetValue;
                    bool m_haveSetValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_PARAMDESC_H_
