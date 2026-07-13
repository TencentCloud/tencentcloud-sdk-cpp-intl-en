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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETINFODIFFENTITY_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETINFODIFFENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * Record change information for budget project related fields
                */
                class BudgetInfoDiffEntity : public AbstractModel
                {
                public:
                    BudgetInfoDiffEntity();
                    ~BudgetInfoDiffEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Modify properties
                     * @return Property Modify properties
                     * 
                     */
                    std::string GetProperty() const;

                    /**
                     * 设置Modify properties
                     * @param _property Modify properties
                     * 
                     */
                    void SetProperty(const std::string& _property);

                    /**
                     * 判断参数 Property 是否已赋值
                     * @return Property 是否已赋值
                     * 
                     */
                    bool PropertyHasBeenSet() const;

                    /**
                     * 获取Content before modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Before Content before modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBefore() const;

                    /**
                     * 设置Content before modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _before Content before modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBefore(const std::string& _before);

                    /**
                     * 判断参数 Before 是否已赋值
                     * @return Before 是否已赋值
                     * 
                     */
                    bool BeforeHasBeenSet() const;

                    /**
                     * 获取Content after modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return After Content after modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAfter() const;

                    /**
                     * 设置Content after modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _after Content after modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAfter(const std::string& _after);

                    /**
                     * 判断参数 After 是否已赋值
                     * @return After 是否已赋值
                     * 
                     */
                    bool AfterHasBeenSet() const;

                private:

                    /**
                     * Modify properties
                     */
                    std::string m_property;
                    bool m_propertyHasBeenSet;

                    /**
                     * Content before modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_before;
                    bool m_beforeHasBeenSet;

                    /**
                     * Content after modification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_after;
                    bool m_afterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETINFODIFFENTITY_H_
