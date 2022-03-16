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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_USAGEDETAILS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_USAGEDETAILS_H_

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
                * The product purchased.
                */
                class UsageDetails : public AbstractModel
                {
                public:
                    UsageDetails();
                    ~UsageDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The name of the product.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ProductName The name of the product.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置The name of the product.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param ProductName The name of the product.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubProductName 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置
                     * @param SubProductName 
                     */
                    void SetSubProductName(const std::string& _subProductName);

                    /**
                     * 判断参数 SubProductName 是否已赋值
                     * @return SubProductName 是否已赋值
                     */
                    bool SubProductNameHasBeenSet() const;

                private:

                    /**
                     * The name of the product.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_USAGEDETAILS_H_
