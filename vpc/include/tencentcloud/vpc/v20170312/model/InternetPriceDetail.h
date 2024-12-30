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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_INTERNETPRICEDETAIL_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_INTERNETPRICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Public IP Inquiry Output Parameters
                */
                class InternetPriceDetail : public AbstractModel
                {
                public:
                    InternetPriceDetail();
                    ~InternetPriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Postpaid unit price. Unit: USD. Returned only for postpaid price inquiry.
                     * @return UnitPrice Postpaid unit price. Unit: USD. Returned only for postpaid price inquiry.
                     * 
                     */
                    double GetUnitPrice() const;

                    /**
                     * 设置Postpaid unit price. Unit: USD. Returned only for postpaid price inquiry.
                     * @param _unitPrice Postpaid unit price. Unit: USD. Returned only for postpaid price inquiry.
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
                     * 获取Discounted price. Unit: USD
Note: This field may return null, indicating that no valid value was found.
                     * @return DiscountPrice Discounted price. Unit: USD
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    double GetDiscountPrice() const;

                    /**
                     * 设置Discounted price. Unit: USD
Note: This field may return null, indicating that no valid value was found.
                     * @param _discountPrice Discounted price. Unit: USD
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取Billing unit. Valid values: <ul> <li>HOUR: Indicates that the billing unit is calculated hourly. The scenarios currently involving this billing unit include TRAFFIC_POSTPAID_BY_HOUR and BANDWIDTH_POSTPAID_BY_HOUR.</li></ul>
Note: This field may return null, indicating that no valid value was found.
                     * @return ChargeUnit Billing unit. Valid values: <ul> <li>HOUR: Indicates that the billing unit is calculated hourly. The scenarios currently involving this billing unit include TRAFFIC_POSTPAID_BY_HOUR and BANDWIDTH_POSTPAID_BY_HOUR.</li></ul>
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置Billing unit. Valid values: <ul> <li>HOUR: Indicates that the billing unit is calculated hourly. The scenarios currently involving this billing unit include TRAFFIC_POSTPAID_BY_HOUR and BANDWIDTH_POSTPAID_BY_HOUR.</li></ul>
Note: This field may return null, indicating that no valid value was found.
                     * @param _chargeUnit Billing unit. Valid values: <ul> <li>HOUR: Indicates that the billing unit is calculated hourly. The scenarios currently involving this billing unit include TRAFFIC_POSTPAID_BY_HOUR and BANDWIDTH_POSTPAID_BY_HOUR.</li></ul>
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    void SetChargeUnit(const std::string& _chargeUnit);

                    /**
                     * 判断参数 ChargeUnit 是否已赋值
                     * @return ChargeUnit 是否已赋值
                     * 
                     */
                    bool ChargeUnitHasBeenSet() const;

                    /**
                     * 获取Original price. Unit: CNY. Returned only for prepaid price inquiry.
                     * @return OriginalPrice Original price. Unit: CNY. Returned only for prepaid price inquiry.
                     * 
                     */
                    double GetOriginalPrice() const;

                    /**
                     * 设置Original price. Unit: CNY. Returned only for prepaid price inquiry.
                     * @param _originalPrice Original price. Unit: CNY. Returned only for prepaid price inquiry.
                     * 
                     */
                    void SetOriginalPrice(const double& _originalPrice);

                    /**
                     * 判断参数 OriginalPrice 是否已赋值
                     * @return OriginalPrice 是否已赋值
                     * 
                     */
                    bool OriginalPriceHasBeenSet() const;

                private:

                    /**
                     * Postpaid unit price. Unit: USD. Returned only for postpaid price inquiry.
                     */
                    double m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * Discounted price. Unit: USD
Note: This field may return null, indicating that no valid value was found.
                     */
                    double m_discountPrice;
                    bool m_discountPriceHasBeenSet;

                    /**
                     * Billing unit. Valid values: <ul> <li>HOUR: Indicates that the billing unit is calculated hourly. The scenarios currently involving this billing unit include TRAFFIC_POSTPAID_BY_HOUR and BANDWIDTH_POSTPAID_BY_HOUR.</li></ul>
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * Original price. Unit: CNY. Returned only for prepaid price inquiry.
                     */
                    double m_originalPrice;
                    bool m_originalPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_INTERNETPRICEDETAIL_H_
