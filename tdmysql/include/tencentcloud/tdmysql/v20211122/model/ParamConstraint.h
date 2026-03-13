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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_PARAMCONSTRAINT_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_PARAMCONSTRAINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/ConstraintRange.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Parameter constraints.
                */
                class ParamConstraint : public AbstractModel
                {
                public:
                    ParamConstraint();
                    ~ParamConstraint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Constraint type, for example enumeration, interval.
                     * @return Type Constraint type, for example enumeration, interval.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Constraint type, for example enumeration, interval.
                     * @param _type Constraint type, for example enumeration, interval.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Lists the available options when the constraint type is enum.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enum Lists the available options when the constraint type is enum.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnum() const;

                    /**
                     * 设置Lists the available options when the constraint type is enum.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enum Lists the available options when the constraint type is enum.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnum(const std::string& _enum);

                    /**
                     * 判断参数 Enum 是否已赋值
                     * @return Enum 是否已赋值
                     * 
                     */
                    bool EnumHasBeenSet() const;

                    /**
                     * 获取Value range when the constraint type is section.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Range Value range when the constraint type is section.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ConstraintRange GetRange() const;

                    /**
                     * 设置Value range when the constraint type is section.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _range Value range when the constraint type is section.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRange(const ConstraintRange& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                    /**
                     * 获取Valid values when the constraint type is string.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return String Valid values when the constraint type is string.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetString() const;

                    /**
                     * 设置Valid values when the constraint type is string.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _string Valid values when the constraint type is string.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetString(const std::string& _string);

                    /**
                     * 判断参数 String 是否已赋值
                     * @return String 是否已赋值
                     * 
                     */
                    bool StringHasBeenSet() const;

                private:

                    /**
                     * Constraint type, for example enumeration, interval.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Lists the available options when the constraint type is enum.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_enum;
                    bool m_enumHasBeenSet;

                    /**
                     * Value range when the constraint type is section.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ConstraintRange m_range;
                    bool m_rangeHasBeenSet;

                    /**
                     * Valid values when the constraint type is string.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_string;
                    bool m_stringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_PARAMCONSTRAINT_H_
