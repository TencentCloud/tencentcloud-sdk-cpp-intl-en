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
                     * 获取Original unit price
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnitPrice Original unit price
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置Original unit price
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unitPrice Original unit price
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Discounted unit price
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnitPriceDiscount Discounted unit price
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetUnitPriceDiscount() const;

                    /**
                     * 设置Discounted unit price
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unitPriceDiscount Discounted unit price
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Original price in total
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginalPrice Original price in total
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Original price in total
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _originalPrice Original price in total
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Discounted price in total
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DiscountPrice Discounted price in total
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Discounted price in total
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _discountPrice Discounted price in total
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Discount (%)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Discount Discount (%)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetDiscount() const;

                    /**
                     * 设置Discount (%)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _discount Discount (%)
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Number of purchased items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GoodsNum Number of purchased items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置Number of purchased items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _goodsNum Number of purchased items
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Currency for payment
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Currency Currency for payment
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置Currency for payment
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _currency Currency for payment
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeSpan Validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeSpan Validity period
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Unit of the validity period (`m`: Month; `h`: Hour)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeUnit Unit of the validity period (`m`: Month; `h`: Hour)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Unit of the validity period (`m`: Month; `h`: Hour)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeUnit Unit of the validity period (`m`: Month; `h`: Hour)
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Original unit price
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * Discounted unit price
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_unitPriceDiscount;
                    bool m_unitPriceDiscountHasBeenSet;

                    /**
                     * Original price in total
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                    /**
                     * Discounted price in total
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * Discount (%)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_discount;
                    bool m_discountHasBeenSet;

                    /**
                     * Number of purchased items
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * Currency for payment
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Validity period
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Unit of the validity period (`m`: Month; `h`: Hour)
Note: This field may return null, indicating that no valid values can be obtained.
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
