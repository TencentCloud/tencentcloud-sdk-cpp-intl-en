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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PRICETAG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PRICETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Price tag information. A complete price tag includes the billing category and the billing item.
                */
                class PriceTag : public AbstractModel
                {
                public:
                    PriceTag();
                    ~PriceTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pricing name. Enumeration values are as follows:

-tps: TPS base price
-stepTps: TPS step length
                     * @return Name Pricing name. Enumeration values are as follows:

-tps: TPS base price
-stepTps: TPS step length
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Pricing name. Enumeration values are as follows:

-tps: TPS base price
-stepTps: TPS step length
                     * @param _name Pricing name. Enumeration values are as follows:

-tps: TPS base price
-stepTps: TPS step length
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
                     * 获取Billing category
                     * @return Category Billing category
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Billing category
                     * @param _category Billing category
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Tag of the billable item.
                     * @return Code Tag of the billable item.
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Tag of the billable item.
                     * @param _code Tag of the billable item.
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Step size corresponding to the billing item.
                     * @return Step Step size corresponding to the billing item.
                     * 
                     */
                    int64_t GetStep() const;

                    /**
                     * 设置Step size corresponding to the billing item.
                     * @param _step Step size corresponding to the billing item.
                     * 
                     */
                    void SetStep(const int64_t& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                private:

                    /**
                     * Pricing name. Enumeration values are as follows:

-tps: TPS base price
-stepTps: TPS step length
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Billing category
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Tag of the billable item.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Step size corresponding to the billing item.
                     */
                    int64_t m_step;
                    bool m_stepHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PRICETAG_H_
