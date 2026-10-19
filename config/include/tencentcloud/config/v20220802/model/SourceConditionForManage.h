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
                * Rule conditions on the operation side.
                */
                class SourceConditionForManage : public AbstractModel
                {
                public:
                    SourceConditionForManage();
                    ~SourceConditionForManage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Compliance status when the condition is empty. Valid values: COMPLIANT, NON_COMPLIANT, and NOT_APPLICABLE.
                     * @return EmptyAs Compliance status when the condition is empty. Valid values: COMPLIANT, NON_COMPLIANT, and NOT_APPLICABLE.
                     * 
                     */
                    std::string GetEmptyAs() const;

                    /**
                     * 设置Compliance status when the condition is empty. Valid values: COMPLIANT, NON_COMPLIANT, and NOT_APPLICABLE.
                     * @param _emptyAs Compliance status when the condition is empty. Valid values: COMPLIANT, NON_COMPLIANT, and NOT_APPLICABLE.
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
                     * @return SelectPath Configuration path
                     * 
                     */
                    std::string GetSelectPath() const;

                    /**
                     * 设置Configuration path
                     * @param _selectPath Configuration path
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
                     * 获取Operator.
                     * @return Operator Operator.
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator.
                     * @param _operator Operator.
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
                     * 获取Whether it is mandatory.
                     * @return Required Whether it is mandatory.
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置Whether it is mandatory.
                     * @param _required Whether it is mandatory.
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
                     * @return DesiredValue Expected value
                     * 
                     */
                    std::string GetDesiredValue() const;

                    /**
                     * 设置Expected value
                     * @param _desiredValue Expected value
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
                     * Compliance status when the condition is empty. Valid values: COMPLIANT, NON_COMPLIANT, and NOT_APPLICABLE.
                     */
                    std::string m_emptyAs;
                    bool m_emptyAsHasBeenSet;

                    /**
                     * Configuration path
                     */
                    std::string m_selectPath;
                    bool m_selectPathHasBeenSet;

                    /**
                     * Operator.
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Whether it is mandatory.
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * Expected value
                     */
                    std::string m_desiredValue;
                    bool m_desiredValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_SOURCECONDITIONFORMANAGE_H_
