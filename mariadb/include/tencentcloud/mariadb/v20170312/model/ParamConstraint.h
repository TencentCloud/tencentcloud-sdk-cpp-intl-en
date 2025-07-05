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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_PARAMCONSTRAINT_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_PARAMCONSTRAINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/ConstraintRange.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Parameter constraint
                */
                class ParamConstraint : public AbstractModel
                {
                public:
                    ParamConstraint();
                    ~ParamConstraint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Constraint type, such as `enum` and `section`.
                     * @return Type Constraint type, such as `enum` and `section`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Constraint type, such as `enum` and `section`.
                     * @param _type Constraint type, such as `enum` and `section`.
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
                     * 获取List of valid values when constraint type is `enum`
                     * @return Enum List of valid values when constraint type is `enum`
                     * 
                     */
                    std::string GetEnum() const;

                    /**
                     * 设置List of valid values when constraint type is `enum`
                     * @param _enum List of valid values when constraint type is `enum`
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
                     * 获取Range when constraint type is `section`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Range Range when constraint type is `section`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ConstraintRange GetRange() const;

                    /**
                     * 设置Range when constraint type is `section`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _range Range when constraint type is `section`
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
                     * 获取List of valid values when constraint type is `string`
                     * @return String List of valid values when constraint type is `string`
                     * 
                     */
                    std::string GetString() const;

                    /**
                     * 设置List of valid values when constraint type is `string`
                     * @param _string List of valid values when constraint type is `string`
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
                     * Constraint type, such as `enum` and `section`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * List of valid values when constraint type is `enum`
                     */
                    std::string m_enum;
                    bool m_enumHasBeenSet;

                    /**
                     * Range when constraint type is `section`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ConstraintRange m_range;
                    bool m_rangeHasBeenSet;

                    /**
                     * List of valid values when constraint type is `string`
                     */
                    std::string m_string;
                    bool m_stringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_PARAMCONSTRAINT_H_
