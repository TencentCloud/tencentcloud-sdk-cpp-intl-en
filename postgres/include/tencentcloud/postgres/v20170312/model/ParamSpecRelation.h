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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMSPECRELATION_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMSPECRELATION_H_

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
                * Parameter information of each specification
                */
                class ParamSpecRelation : public AbstractModel
                {
                public:
                    ParamSpecRelation();
                    ~ParamSpecRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Parameter name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Parameter name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Name Parameter name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The specification that corresponds to the parameter information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Memory The specification that corresponds to the parameter information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMemory() const;

                    /**
                     * 设置The specification that corresponds to the parameter information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Memory The specification that corresponds to the parameter information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMemory(const std::string& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取The default parameter value under this specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Value The default parameter value under this specification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetValue() const;

                    /**
                     * 设置The default parameter value under this specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Value The default parameter value under this specification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Unit of the parameter value. If the parameter has no unit, this field will return null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Unit Unit of the parameter value. If the parameter has no unit, this field will return null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Unit of the parameter value. If the parameter has no unit, this field will return null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Unit Unit of the parameter value. If the parameter has no unit, this field will return null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取The maximum value of the `integer` or `real` parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Max The maximum value of the `integer` or `real` parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetMax() const;

                    /**
                     * 设置The maximum value of the `integer` or `real` parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Max The maximum value of the `integer` or `real` parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取The minimum value of the `integer` or `real` parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Min The minimum value of the `integer` or `real` parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double GetMin() const;

                    /**
                     * 设置The minimum value of the `integer` or `real` parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Min The minimum value of the `integer` or `real` parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMin(const double& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Value range of the enum parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnumValue Value range of the enum parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置Value range of the enum parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EnumValue Value range of the enum parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnumValue(const std::vector<std::string>& _enumValue);

                    /**
                     * 判断参数 EnumValue 是否已赋值
                     * @return EnumValue 是否已赋值
                     */
                    bool EnumValueHasBeenSet() const;

                private:

                    /**
                     * Parameter name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The specification that corresponds to the parameter information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * The default parameter value under this specification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Unit of the parameter value. If the parameter has no unit, this field will return null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * The maximum value of the `integer` or `real` parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * The minimum value of the `integer` or `real` parameter
Note: This field may return null, indicating that no valid values can be obtained.
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

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMSPECRELATION_H_
