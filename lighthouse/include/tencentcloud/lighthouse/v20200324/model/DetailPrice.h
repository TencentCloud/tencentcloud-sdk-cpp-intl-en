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
                     * 获取Values: 
<li>"DiskSpace": Cloud disk space</li>
<li>"DiskBackupQuota": Cloud disk backups</li>
                     * @return PriceName Values: 
<li>"DiskSpace": Cloud disk space</li>
<li>"DiskBackupQuota": Cloud disk backups</li>
                     * 
                     */
                    std::string GetPriceName() const;

                    /**
                     * 设置Values: 
<li>"DiskSpace": Cloud disk space</li>
<li>"DiskBackupQuota": Cloud disk backups</li>
                     * @param _priceName Values: 
<li>"DiskSpace": Cloud disk space</li>
<li>"DiskBackupQuota": Cloud disk backups</li>
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
                     * 获取Official unit price of the billable item
                     * @return OriginUnitPrice Official unit price of the billable item
                     * 
                     */
                    double GetOriginUnitPrice() const;

                    /**
                     * 设置Official unit price of the billable item
                     * @param _originUnitPrice Official unit price of the billable item
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
                     * 获取Official total price of the billable item
                     * @return OriginalPrice Official total price of the billable item
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Official total price of the billable item
                     * @param _originalPrice Official total price of the billable item
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
                     * 获取Discount of the billable item
                     * @return Discount Discount of the billable item
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置Discount of the billable item
                     * @param _discount Discount of the billable item
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
                     * 获取Discounted total price of the billable item
                     * @return DiscountPrice Discounted total price of the billable item
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Discounted total price of the billable item
                     * @param _discountPrice Discounted total price of the billable item
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
                     * Values: 
<li>"DiskSpace": Cloud disk space</li>
<li>"DiskBackupQuota": Cloud disk backups</li>
                     */
                    std::string m_priceName;
                    bool m_priceNameHasBeenSet;

                    /**
                     * Official unit price of the billable item
                     */
                    double m_originUnitPrice;
                    bool m_originUnitPriceHasBeenSet;

                    /**
                     * Official total price of the billable item
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Discount of the billable item
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Discounted total price of the billable item
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DETAILPRICE_H_
