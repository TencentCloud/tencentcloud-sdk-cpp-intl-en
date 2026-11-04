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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELPARAMETER_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Model hyperparameter
                */
                class ModelParameter : public AbstractModel
                {
                public:
                    ModelParameter();
                    ~ModelParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Default value.</p>
                     * @return DefaultValue <p>Default value.</p>
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置<p>Default value.</p>
                     * @param _defaultValue <p>Default value.</p>
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
                     * 获取<p>Available Option List</p>
                     * @return EnumValueList <p>Available Option List</p>
                     * 
                     */
                    std::vector<std::string> GetEnumValueList() const;

                    /**
                     * 设置<p>Available Option List</p>
                     * @param _enumValueList <p>Available Option List</p>
                     * 
                     */
                    void SetEnumValueList(const std::vector<std::string>& _enumValueList);

                    /**
                     * 判断参数 EnumValueList 是否已赋值
                     * @return EnumValueList 是否已赋值
                     * 
                     */
                    bool EnumValueListHasBeenSet() const;

                    /**
                     * 获取<p>Maximum value (valid only for numerical type).</p>
                     * @return MaxValue <p>Maximum value (valid only for numerical type).</p>
                     * 
                     */
                    double GetMaxValue() const;

                    /**
                     * 设置<p>Maximum value (valid only for numerical type).</p>
                     * @param _maxValue <p>Maximum value (valid only for numerical type).</p>
                     * 
                     */
                    void SetMaxValue(const double& _maxValue);

                    /**
                     * 判断参数 MaxValue 是否已赋值
                     * @return MaxValue 是否已赋值
                     * 
                     */
                    bool MaxValueHasBeenSet() const;

                    /**
                     * 获取<p>Minimum value (valid only for numerical types).</p>
                     * @return MinValue <p>Minimum value (valid only for numerical types).</p>
                     * 
                     */
                    double GetMinValue() const;

                    /**
                     * 设置<p>Minimum value (valid only for numerical types).</p>
                     * @param _minValue <p>Minimum value (valid only for numerical types).</p>
                     * 
                     */
                    void SetMinValue(const double& _minValue);

                    /**
                     * 判断参数 MinValue 是否已赋值
                     * @return MinValue 是否已赋值
                     * 
                     */
                    bool MinValueHasBeenSet() const;

                    /**
                     * 获取<p>Hyperparameter name</p>
                     * @return Name <p>Hyperparameter name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Hyperparameter name</p>
                     * @param _name <p>Hyperparameter name</p>
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
                     * 获取<p>Hyperparameter type. 1-floating-point number, 2-integer, 3-string</p>
                     * @return Type <p>Hyperparameter type. 1-floating-point number, 2-integer, 3-string</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Hyperparameter type. 1-floating-point number, 2-integer, 3-string</p>
                     * @param _type <p>Hyperparameter type. 1-floating-point number, 2-integer, 3-string</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>Default value.</p>
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * <p>Available Option List</p>
                     */
                    std::vector<std::string> m_enumValueList;
                    bool m_enumValueListHasBeenSet;

                    /**
                     * <p>Maximum value (valid only for numerical type).</p>
                     */
                    double m_maxValue;
                    bool m_maxValueHasBeenSet;

                    /**
                     * <p>Minimum value (valid only for numerical types).</p>
                     */
                    double m_minValue;
                    bool m_minValueHasBeenSet;

                    /**
                     * <p>Hyperparameter name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Hyperparameter type. 1-floating-point number, 2-integer, 3-string</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELPARAMETER_H_
