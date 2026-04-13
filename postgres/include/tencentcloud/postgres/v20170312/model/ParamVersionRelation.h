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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMVERSIONRELATION_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMVERSIONRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Parameter information for each version
                */
                class ParamVersionRelation : public AbstractModel
                {
                public:
                    ParamVersionRelation();
                    ~ParamVersionRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name.
                     * @return Name Parameter name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Parameter name.
                     * @param _name Parameter name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Parameter information belonging to kernel version.
                     * @return DBKernelVersion Parameter information belonging to kernel version.
                     * 
                     */
                    std::string GetDBKernelVersion() const;

                    /**
                     * 设置Parameter information belonging to kernel version.
                     * @param _dBKernelVersion Parameter information belonging to kernel version.
                     * 
                     */
                    void SetDBKernelVersion(const std::string& _dBKernelVersion);

                    /**
                     * 判断参数 DBKernelVersion 是否已赋值
                     * @return DBKernelVersion 是否已赋值
                     * 
                     */
                    bool DBKernelVersionHasBeenSet() const;

                    /**
                     * 获取Default value of the parameter for this version and specification.
                     * @return Value Default value of the parameter for this version and specification.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Default value of the parameter for this version and specification.
                     * @param _value Default value of the parameter for this version and specification.
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
                     * 获取Parameter value unit. returns null if the parameter has no units.
                     * @return Unit Parameter value unit. returns null if the parameter has no units.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Parameter value unit. returns null if the parameter has no units.
                     * @param _unit Parameter value unit. returns null if the parameter has no units.
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
                     * 获取Numerical type (integer, real) parameter specifies the upper bound.
                     * @return Max Numerical type (integer, real) parameter specifies the upper bound.
                     * 
                     */
                    double GetMax() const;

                    /**
                     * 设置Numerical type (integer, real) parameter specifies the upper bound.
                     * @param _max Numerical type (integer, real) parameter specifies the upper bound.
                     * 
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取Specifies the numerical type (integer, real) parameter and its lower bound.
                     * @return Min Specifies the numerical type (integer, real) parameter and its lower bound.
                     * 
                     */
                    double GetMin() const;

                    /**
                     * 设置Specifies the numerical type (integer, real) parameter and its lower bound.
                     * @param _min Specifies the numerical type (integer, real) parameter and its lower bound.
                     * 
                     */
                    void SetMin(const double& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Value range of the enum parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnumValue Value range of the enum parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置Value range of the enum parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enumValue Value range of the enum parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnumValue(const std::vector<std::string>& _enumValue);

                    /**
                     * 判断参数 EnumValue 是否已赋值
                     * @return EnumValue 是否已赋值
                     * 
                     */
                    bool EnumValueHasBeenSet() const;

                private:

                    /**
                     * Parameter name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Parameter information belonging to kernel version.
                     */
                    std::string m_dBKernelVersion;
                    bool m_dBKernelVersionHasBeenSet;

                    /**
                     * Default value of the parameter for this version and specification.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Parameter value unit. returns null if the parameter has no units.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Numerical type (integer, real) parameter specifies the upper bound.
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Specifies the numerical type (integer, real) parameter and its lower bound.
                     */
                    double m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Value range of the enum parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMVERSIONRELATION_H_
