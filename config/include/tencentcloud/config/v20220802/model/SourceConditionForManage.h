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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_SOURCECONDITIONFORMANAGE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_SOURCECONDITIONFORMANAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * Managing end rule conditions
                */
                class SourceConditionForManage : public AbstractModel
                {
                public:
                    SourceConditionForManage();
                    ~SourceConditionForManage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Condition is empty, Compliant: COMPLIANT, Non-compliant: NON_COMPLIANT, Not applicable: NOT_APPLICABLE.
Note: This field may return null, indicating that no valid value is found.
                     * @return EmptyAs Condition is empty, Compliant: COMPLIANT, Non-compliant: NON_COMPLIANT, Not applicable: NOT_APPLICABLE.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetEmptyAs() const;

                    /**
                     * 设置Condition is empty, Compliant: COMPLIANT, Non-compliant: NON_COMPLIANT, Not applicable: NOT_APPLICABLE.
Note: This field may return null, indicating that no valid value is found.
                     * @param _emptyAs Condition is empty, Compliant: COMPLIANT, Non-compliant: NON_COMPLIANT, Not applicable: NOT_APPLICABLE.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetEmptyAs(const std::string& _emptyAs);

                    /**
                     * 判断参数 EmptyAs 是否已赋值
                     * @return EmptyAs 是否已赋值
                     * 
                     */
                    bool EmptyAsHasBeenSet() const;

                    /**
                     * 获取Configuration path

Note: This field may return null, indicating that no valid value is found.
                     * @return SelectPath Configuration path

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetSelectPath() const;

                    /**
                     * 设置Configuration path

Note: This field may return null, indicating that no valid value is found.
                     * @param _selectPath Configuration path

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetSelectPath(const std::string& _selectPath);

                    /**
                     * 判断参数 SelectPath 是否已赋值
                     * @return SelectPath 是否已赋值
                     * 
                     */
                    bool SelectPathHasBeenSet() const;

                    /**
                     * 获取Operators
Note: This field may return null, indicating that no valid value is found.
                     * @return Operator Operators
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operators
Note: This field may return null, indicating that no valid value is found.
                     * @param _operator Operators
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Required or not.

Note: This field may return null, indicating that no valid value is found.
                     * @return Required Required or not.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置Required or not.

Note: This field may return null, indicating that no valid value is found.
                     * @param _required Required or not.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取Expected value
Note: This field may return null, indicating that no valid value is found.
                     * @return DesiredValue Expected value
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetDesiredValue() const;

                    /**
                     * 设置Expected value
Note: This field may return null, indicating that no valid value is found.
                     * @param _desiredValue Expected value
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDesiredValue(const std::string& _desiredValue);

                    /**
                     * 判断参数 DesiredValue 是否已赋值
                     * @return DesiredValue 是否已赋值
                     * 
                     */
                    bool DesiredValueHasBeenSet() const;

                private:

                    /**
                     * Condition is empty, Compliant: COMPLIANT, Non-compliant: NON_COMPLIANT, Not applicable: NOT_APPLICABLE.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_emptyAs;
                    bool m_emptyAsHasBeenSet;

                    /**
                     * Configuration path

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_selectPath;
                    bool m_selectPathHasBeenSet;

                    /**
                     * Operators
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Required or not.

Note: This field may return null, indicating that no valid value is found.
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * Expected value
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_desiredValue;
                    bool m_desiredValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_SOURCECONDITIONFORMANAGE_H_
