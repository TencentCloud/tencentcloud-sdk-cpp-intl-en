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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DetailPrice.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * About Lighthouse Instance price.
                */
                class InstancePrice : public AbstractModel
                {
                public:
                    InstancePrice();
                    ~InstancePrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<P>Unit price of the package.</p><p>unit: usd</p>.
                     * @return OriginalBundlePrice <P>Unit price of the package.</p><p>unit: usd</p>.
                     * 
                     */
                    double GetOriginalBundlePrice() const;

                    /**
                     * 设置<P>Unit price of the package.</p><p>unit: usd</p>.
                     * @param _originalBundlePrice <P>Unit price of the package.</p><p>unit: usd</p>.
                     * 
                     */
                    void SetOriginalBundlePrice(const double& _originalBundlePrice);

                    /**
                     * 判断参数 OriginalBundlePrice 是否已赋值
                     * @return OriginalBundlePrice 是否已赋值
                     * 
                     */
                    bool OriginalBundlePriceHasBeenSet() const;

                    /**
                     * 获取<P>Original price.</p><p>unit: usd</p>.
                     * @return OriginalPrice <P>Original price.</p><p>unit: usd</p>.
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置<P>Original price.</p><p>unit: usd</p>.
                     * @param _originalPrice <P>Original price.</p><p>unit: usd</p>.
                     * 
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                    /**
                     * 获取<p>Discount.</p>.
                     * @return Discount <p>Discount.</p>.
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置<p>Discount.</p>.
                     * @param _discount <p>Discount.</p>.
                     * 
                     */
                    void SetDiscount(const double& _discount);

                    /**
                     * 判断参数 Discount 是否已赋值
                     * @return Discount 是否已赋值
                     * 
                     */
                    bool DiscountHasBeenSet() const;

                    /**
                     * 获取<P>Discounted price.</p><p>unit: usd</p>.
                     * @return DiscountPrice <P>Discounted price.</p><p>unit: usd</p>.
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置<P>Discounted price.</p><p>unit: usd</p>.
                     * @param _discountPrice <P>Discounted price.</p><p>unit: usd</p>.
                     * 
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

                    /**
                     * 获取<p>Price currency unit. valid values: USD.</p>.
                     * @return Currency <p>Price currency unit. valid values: USD.</p>.
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置<p>Price currency unit. valid values: USD.</p>.
                     * @param _currency <p>Price currency unit. valid values: USD.</p>.
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取<P>Billing item detail.</p>.
                     * @return DetailPrices <P>Billing item detail.</p>.
                     * 
                     */
                    std::vector<DetailPrice> GetDetailPrices() const;

                    /**
                     * 设置<P>Billing item detail.</p>.
                     * @param _detailPrices <P>Billing item detail.</p>.
                     * 
                     */
                    void SetDetailPrices(const std::vector<DetailPrice>& _detailPrices);

                    /**
                     * 判断参数 DetailPrices 是否已赋值
                     * @return DetailPrices 是否已赋值
                     * 
                     */
                    bool DetailPricesHasBeenSet() const;

                private:

                    /**
                     * <P>Unit price of the package.</p><p>unit: usd</p>.
                     */
                    double m_originalBundlePrice;
                    bool m_originalBundlePriceHasBeenSet;

                    /**
                     * <P>Original price.</p><p>unit: usd</p>.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * <p>Discount.</p>.
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * <P>Discounted price.</p><p>unit: usd</p>.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * <p>Price currency unit. valid values: USD.</p>.
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * <P>Billing item detail.</p>.
                     */
                    std::vector<DetailPrice> m_detailPrices;
                    bool m_detailPricesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCEPRICE_H_
