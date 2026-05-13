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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_PRICETAG_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_PRICETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * Price tag information
                */
                class PriceTag : public AbstractModel
                {
                public:
                    PriceTag();
                    ~PriceTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Billing name refers to the category of billable items for specifications. The pricing name for specific specifications can be found in the returned results of the DescribeProductSKUList API.
                     * @return Name Billing name refers to the category of billable items for specifications. The pricing name for specific specifications can be found in the returned results of the DescribeProductSKUList API.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Billing name refers to the category of billable items for specifications. The pricing name for specific specifications can be found in the returned results of the DescribeProductSKUList API.
                     * @param _name Billing name refers to the category of billable items for specifications. The pricing name for specific specifications can be found in the returned results of the DescribeProductSKUList API.
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
                     * 获取Billing category, pricing name subclass. For the billing category of specific specifications, see the returned results in DescribeProductSKUList API.
                     * @return Category Billing category, pricing name subclass. For the billing category of specific specifications, see the returned results in DescribeProductSKUList API.
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Billing category, pricing name subclass. For the billing category of specific specifications, see the returned results in DescribeProductSKUList API.
                     * @param _category Billing category, pricing name subclass. For the billing category of specific specifications, see the returned results in DescribeProductSKUList API.
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
                     * 获取Billing item tag is a subproject of the billing Category under the pricing Name (Name), representing a specific charge. For the billing item tag of the specification, see 
DescribeProductSKUList API returned results.
                     * @return Code Billing item tag is a subproject of the billing Category under the pricing Name (Name), representing a specific charge. For the billing item tag of the specification, see 
DescribeProductSKUList API returned results.
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置Billing item tag is a subproject of the billing Category under the pricing Name (Name), representing a specific charge. For the billing item tag of the specification, see 
DescribeProductSKUList API returned results.
                     * @param _code Billing item tag is a subproject of the billing Category under the pricing Name (Name), representing a specific charge. For the billing item tag of the specification, see 
DescribeProductSKUList API returned results.
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
                     * 获取Billing step length indicates the billing quantity of the billing item tag (Code) under the billing category (Category) for the pricing name (Name). For the field value of specific specifications, refer to DescribeProductSKUList API.
                     * @return Step Billing step length indicates the billing quantity of the billing item tag (Code) under the billing category (Category) for the pricing name (Name). For the field value of specific specifications, refer to DescribeProductSKUList API.
                     * 
                     */
                    int64_t GetStep() const;

                    /**
                     * 设置Billing step length indicates the billing quantity of the billing item tag (Code) under the billing category (Category) for the pricing name (Name). For the field value of specific specifications, refer to DescribeProductSKUList API.
                     * @param _step Billing step length indicates the billing quantity of the billing item tag (Code) under the billing category (Category) for the pricing name (Name). For the field value of specific specifications, refer to DescribeProductSKUList API.
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
                     * Billing name refers to the category of billable items for specifications. The pricing name for specific specifications can be found in the returned results of the DescribeProductSKUList API.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Billing category, pricing name subclass. For the billing category of specific specifications, see the returned results in DescribeProductSKUList API.
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Billing item tag is a subproject of the billing Category under the pricing Name (Name), representing a specific charge. For the billing item tag of the specification, see 
DescribeProductSKUList API returned results.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Billing step length indicates the billing quantity of the billing item tag (Code) under the billing category (Category) for the pricing name (Name). For the field value of specific specifications, refer to DescribeProductSKUList API.
                     */
                    int64_t m_step;
                    bool m_stepHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_PRICETAG_H_
