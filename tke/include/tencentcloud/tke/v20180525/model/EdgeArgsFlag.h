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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EDGEARGSFLAG_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EDGEARGSFLAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Edge cluster parameters
                */
                class EdgeArgsFlag : public AbstractModel
                {
                public:
                    EdgeArgsFlag();
                    ~EdgeArgsFlag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Name Parameter name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Parameter name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Name Parameter name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Parameter type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Type Parameter type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Parameter type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Type Parameter type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Parameter description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Usage Parameter description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetUsage() const;

                    /**
                     * 设置Parameter description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Usage Parameter description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetUsage(const std::string& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取Default value of the parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Default Default value of the parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置Default value of the parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Default Default value of the parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取Valid value or range. Options: `[]` (it indicates a range, for example, “[1, 5]” indicates the parameter must be equal or larger than 1, and be equal or smaller than 5), and `()` (it indicates a valid value, for example, “('aa', 'bb')” indicates the parameter must be “aa” or “bb”. If it is left empty, the verification can be skipped.)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Constraint Valid value or range. Options: `[]` (it indicates a range, for example, “[1, 5]” indicates the parameter must be equal or larger than 1, and be equal or smaller than 5), and `()` (it indicates a valid value, for example, “('aa', 'bb')” indicates the parameter must be “aa” or “bb”. If it is left empty, the verification can be skipped.)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetConstraint() const;

                    /**
                     * 设置Valid value or range. Options: `[]` (it indicates a range, for example, “[1, 5]” indicates the parameter must be equal or larger than 1, and be equal or smaller than 5), and `()` (it indicates a valid value, for example, “('aa', 'bb')” indicates the parameter must be “aa” or “bb”. If it is left empty, the verification can be skipped.)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Constraint Valid value or range. Options: `[]` (it indicates a range, for example, “[1, 5]” indicates the parameter must be equal or larger than 1, and be equal or smaller than 5), and `()` (it indicates a valid value, for example, “('aa', 'bb')” indicates the parameter must be “aa” or “bb”. If it is left empty, the verification can be skipped.)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetConstraint(const std::string& _constraint);

                    /**
                     * 判断参数 Constraint 是否已赋值
                     * @return Constraint 是否已赋值
                     */
                    bool ConstraintHasBeenSet() const;

                private:

                    /**
                     * Parameter name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Parameter type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Parameter description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * Default value of the parameter
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * Valid value or range. Options: `[]` (it indicates a range, for example, “[1, 5]” indicates the parameter must be equal or larger than 1, and be equal or smaller than 5), and `()` (it indicates a valid value, for example, “('aa', 'bb')” indicates the parameter must be “aa” or “bb”. If it is left empty, the verification can be skipped.)
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_constraint;
                    bool m_constraintHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EDGEARGSFLAG_H_
