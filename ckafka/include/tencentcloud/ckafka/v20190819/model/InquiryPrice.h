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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYPRICE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYPRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/InquiryDetailPrice.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Response parameters for instance price query
                */
                class InquiryPrice : public AbstractModel
                {
                public:
                    InquiryPrice();
                    ~InquiryPrice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Original price unit.
                     * @return UnitPrice Original price unit.
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置Original price unit.
                     * @param _unitPrice Original price unit.
                     * 
                     */
                    void SetUnitPrice(const double& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     * 
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取Discount unit price.
                     * @return UnitPriceDiscount Discount unit price.
                     * 
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置Discount unit price.
                     * @param _unitPriceDiscount Discount unit price.
                     * 
                     */
                    void SetUnitPriceDiscount(const double& _unitPriceDiscount);

                    /**
                     * 判断参数 UnitPriceDiscount 是否已赋值
                     * @return UnitPriceDiscount 是否已赋值
                     * 
                     */
                    bool UnitPriceDiscountHasBeenSet() const;

                    /**
                     * 获取Total original price.
                     * @return OriginalPrice Total original price.
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Total original price.
                     * @param _originalPrice Total original price.
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
                     * 获取Total discount price.
                     * @return DiscountPrice Total discount price.
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Total discount price.
                     * @param _discountPrice Total discount price.
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
                     * 获取Discount (unit: %).
                     * @return Discount Discount (unit: %).
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置Discount (unit: %).
                     * @param _discount Discount (unit: %).
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
                     * 获取Number of products
                     * @return GoodsNum Number of products
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of products
                     * @param _goodsNum Number of products
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取Specifies the payment currency.
                     * @return Currency Specifies the payment currency.
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置Specifies the payment currency.
                     * @param _currency Specifies the payment currency.
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
                     * 获取Dedicated disk response parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiskType Dedicated disk response parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置Dedicated disk response parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _diskType Dedicated disk response parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取Purchase duration.
                     * @return TimeSpan Purchase duration.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Purchase duration.
                     * @param _timeSpan Purchase duration.
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Specifies the purchase duration unit ("m" for monthly, "h" for hourly).
                     * @return TimeUnit Specifies the purchase duration unit ("m" for monthly, "h" for hourly).
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Specifies the purchase duration unit ("m" for monthly, "h" for hourly).
                     * @param _timeUnit Specifies the purchase duration unit ("m" for monthly, "h" for hourly).
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Purchase quantity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Value Purchase quantity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置Purchase quantity
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _value Purchase quantity
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Prices of different purchased items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DetailPrices Prices of different purchased items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InquiryDetailPrice GetDetailPrices() const;

                    /**
                     * 设置Prices of different purchased items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _detailPrices Prices of different purchased items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDetailPrices(const InquiryDetailPrice& _detailPrices);

                    /**
                     * 判断参数 DetailPrices 是否已赋值
                     * @return DetailPrices 是否已赋值
                     * 
                     */
                    bool DetailPricesHasBeenSet() const;

                private:

                    /**
                     * Original price unit.
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * Discount unit price.
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * Total original price.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Total discount price.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * Discount (unit: %).
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Number of products
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Specifies the payment currency.
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * Dedicated disk response parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * Purchase duration.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Specifies the purchase duration unit ("m" for monthly, "h" for hourly).
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Purchase quantity
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Prices of different purchased items
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InquiryDetailPrice m_detailPrices;
                    bool m_detailPricesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_INQUIRYPRICE_H_
