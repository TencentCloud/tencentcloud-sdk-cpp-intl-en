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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DETAILPRICE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DETAILPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Billable items
                */
                class DetailPrice : public AbstractModel
                {
                public:
                    DetailPrice();
                    ~DetailPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Name of a billable item, current parameter.</p><li>"DiskSpace" represents the CBS space charge item.</li><li>"DiskBackupQuota" represents the data disk backup point quota charge item.</li><li>"Instance" represents the Instance charge item.</li><li>"SystemDiskBackupQuota" represents the system disk backup point quota charge item.</li>.
                     * @return PriceName <p>Name of a billable item, current parameter.</p><li>"DiskSpace" represents the CBS space charge item.</li><li>"DiskBackupQuota" represents the data disk backup point quota charge item.</li><li>"Instance" represents the Instance charge item.</li><li>"SystemDiskBackupQuota" represents the system disk backup point quota charge item.</li>.
                     * 
                     */
                    std::string GetPriceName() const;

                    /**
                     * 设置<p>Name of a billable item, current parameter.</p><li>"DiskSpace" represents the CBS space charge item.</li><li>"DiskBackupQuota" represents the data disk backup point quota charge item.</li><li>"Instance" represents the Instance charge item.</li><li>"SystemDiskBackupQuota" represents the system disk backup point quota charge item.</li>.
                     * @param _priceName <p>Name of a billable item, current parameter.</p><li>"DiskSpace" represents the CBS space charge item.</li><li>"DiskBackupQuota" represents the data disk backup point quota charge item.</li><li>"Instance" represents the Instance charge item.</li><li>"SystemDiskBackupQuota" represents the system disk backup point quota charge item.</li>.
                     * 
                     */
                    void SetPriceName(const std::string& _priceName);

                    /**
                     * 判断参数 PriceName 是否已赋值
                     * @return PriceName 是否已赋值
                     * 
                     */
                    bool PriceNameHasBeenSet() const;

                    /**
                     * 获取<P>Unit price per billing item dimension.</p><p>unit: usd</p>.
                     * @return OriginUnitPrice <P>Unit price per billing item dimension.</p><p>unit: usd</p>.
                     * 
                     */
                    double GetOriginUnitPrice() const;

                    /**
                     * 设置<P>Unit price per billing item dimension.</p><p>unit: usd</p>.
                     * @param _originUnitPrice <P>Unit price per billing item dimension.</p><p>unit: usd</p>.
                     * 
                     */
                    void SetOriginUnitPrice(const double& _originUnitPrice);

                    /**
                     * 判断参数 OriginUnitPrice 是否已赋值
                     * @return OriginUnitPrice 是否已赋值
                     * 
                     */
                    bool OriginUnitPriceHasBeenSet() const;

                    /**
                     * 获取<P>Total price of billing item dimension.</p><p>unit: usd</p>.
                     * @return OriginalPrice <P>Total price of billing item dimension.</p><p>unit: usd</p>.
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置<P>Total price of billing item dimension.</p><p>unit: usd</p>.
                     * @param _originalPrice <P>Total price of billing item dimension.</p><p>unit: usd</p>.
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
                     * 获取<P>Dimensional discount for billing items.</p>.
                     * @return Discount <P>Dimensional discount for billing items.</p>.
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置<P>Dimensional discount for billing items.</p>.
                     * @param _discount <P>Dimensional discount for billing items.</p>.
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
                     * 获取<P>Discounted total price by billing item dimension.</p><p>unit: usd</p>.
                     * @return DiscountPrice <P>Discounted total price by billing item dimension.</p><p>unit: usd</p>.
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置<P>Discounted total price by billing item dimension.</p><p>unit: usd</p>.
                     * @param _discountPrice <P>Discounted total price by billing item dimension.</p><p>unit: usd</p>.
                     * 
                     */
                    void SetDiscountPrice(const double& _discountPrice);

                    /**
                     * 判断参数 DiscountPrice 是否已赋值
                     * @return DiscountPrice 是否已赋值
                     * 
                     */
                    bool DiscountPriceHasBeenSet() const;

                private:

                    /**
                     * <p>Name of a billable item, current parameter.</p><li>"DiskSpace" represents the CBS space charge item.</li><li>"DiskBackupQuota" represents the data disk backup point quota charge item.</li><li>"Instance" represents the Instance charge item.</li><li>"SystemDiskBackupQuota" represents the system disk backup point quota charge item.</li>.
                     */
                    std::string m_priceName;
                    bool m_priceNameHasBeenSet;

                    /**
                     * <P>Unit price per billing item dimension.</p><p>unit: usd</p>.
                     */
                    double m_originUnitPrice;
                    bool m_originUnitPriceHasBeenSet;

                    /**
                     * <P>Total price of billing item dimension.</p><p>unit: usd</p>.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * <P>Dimensional discount for billing items.</p>.
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * <P>Discounted total price by billing item dimension.</p><p>unit: usd</p>.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DETAILPRICE_H_
