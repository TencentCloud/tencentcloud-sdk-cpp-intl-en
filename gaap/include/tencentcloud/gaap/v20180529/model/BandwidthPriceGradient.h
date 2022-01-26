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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_BANDWIDTHPRICEGRADIENT_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_BANDWIDTHPRICEGRADIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Bandwidth price gradient
                */
                class BandwidthPriceGradient : public AbstractModel
                {
                public:
                    BandwidthPriceGradient();
                    ~BandwidthPriceGradient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bandwidth range.
                     * @return BandwidthRange Bandwidth range.
                     */
                    std::vector<int64_t> GetBandwidthRange() const;

                    /**
                     * 设置Bandwidth range.
                     * @param BandwidthRange Bandwidth range.
                     */
                    void SetBandwidthRange(const std::vector<int64_t>& _bandwidthRange);

                    /**
                     * 判断参数 BandwidthRange 是否已赋值
                     * @return BandwidthRange 是否已赋值
                     */
                    bool BandwidthRangeHasBeenSet() const;

                    /**
                     * 获取Bandwidth unit price within the bandwidth range. Unit: CNY/Mbps/day.
                     * @return BandwidthUnitPrice Bandwidth unit price within the bandwidth range. Unit: CNY/Mbps/day.
                     */
                    double GetBandwidthUnitPrice() const;

                    /**
                     * 设置Bandwidth unit price within the bandwidth range. Unit: CNY/Mbps/day.
                     * @param BandwidthUnitPrice Bandwidth unit price within the bandwidth range. Unit: CNY/Mbps/day.
                     */
                    void SetBandwidthUnitPrice(const double& _bandwidthUnitPrice);

                    /**
                     * 判断参数 BandwidthUnitPrice 是否已赋值
                     * @return BandwidthUnitPrice 是否已赋值
                     */
                    bool BandwidthUnitPriceHasBeenSet() const;

                    /**
                     * 获取Discounted bandwidth price in CNY/Mbps/day.
                     * @return DiscountBandwidthUnitPrice Discounted bandwidth price in CNY/Mbps/day.
                     */
                    double GetDiscountBandwidthUnitPrice() const;

                    /**
                     * 设置Discounted bandwidth price in CNY/Mbps/day.
                     * @param DiscountBandwidthUnitPrice Discounted bandwidth price in CNY/Mbps/day.
                     */
                    void SetDiscountBandwidthUnitPrice(const double& _discountBandwidthUnitPrice);

                    /**
                     * 判断参数 DiscountBandwidthUnitPrice 是否已赋值
                     * @return DiscountBandwidthUnitPrice 是否已赋值
                     */
                    bool DiscountBandwidthUnitPriceHasBeenSet() const;

                private:

                    /**
                     * Bandwidth range.
                     */
                    std::vector<int64_t> m_bandwidthRange;
                    bool m_bandwidthRangeHasBeenSet;

                    /**
                     * Bandwidth unit price within the bandwidth range. Unit: CNY/Mbps/day.
                     */
                    double m_bandwidthUnitPrice;
                    bool m_bandwidthUnitPriceHasBeenSet;

                    /**
                     * Discounted bandwidth price in CNY/Mbps/day.
                     */
                    double m_discountBandwidthUnitPrice;
                    bool m_discountBandwidthUnitPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_BANDWIDTHPRICEGRADIENT_H_
