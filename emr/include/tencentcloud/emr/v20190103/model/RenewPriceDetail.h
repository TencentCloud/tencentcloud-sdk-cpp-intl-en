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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_RENEWPRICEDETAIL_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_RENEWPRICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 
                */
                class RenewPriceDetail : public AbstractModel
                {
                public:
                    RenewPriceDetail();
                    ~RenewPriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return BillingName 
                     * 
                     */
                    std::string GetBillingName() const;

                    /**
                     * 设置
                     * @param _billingName 
                     * 
                     */
                    void SetBillingName(const std::string& _billingName);

                    /**
                     * 判断参数 BillingName 是否已赋值
                     * @return BillingName 是否已赋值
                     * 
                     */
                    bool BillingNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return Policy 
                     * 
                     */
                    double GetPolicy() const;

                    /**
                     * 设置
                     * @param _policy 
                     * 
                     */
                    void SetPolicy(const double& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取
                     * @return Quantity 
                     * 
                     */
                    int64_t GetQuantity() const;

                    /**
                     * 设置
                     * @param _quantity 
                     * 
                     */
                    void SetQuantity(const int64_t& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取
                     * @return OriginalCost 
                     * 
                     */
                    double GetOriginalCost() const;

                    /**
                     * 设置
                     * @param _originalCost 
                     * 
                     */
                    void SetOriginalCost(const double& _originalCost);

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     * 
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取
                     * @return DiscountCost 
                     * 
                     */
                    double GetDiscountCost() const;

                    /**
                     * 设置
                     * @param _discountCost 
                     * 
                     */
                    void SetDiscountCost(const double& _discountCost);

                    /**
                     * 判断参数 DiscountCost 是否已赋值
                     * @return DiscountCost 是否已赋值
                     * 
                     */
                    bool DiscountCostHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_billingName;
                    bool m_billingNameHasBeenSet;

                    /**
                     * 
                     */
                    double m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * 
                     */
                    double m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * 
                     */
                    double m_discountCost;
                    bool m_discountCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_RENEWPRICEDETAIL_H_
