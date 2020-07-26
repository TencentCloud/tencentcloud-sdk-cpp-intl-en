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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREGIONANDPRICERESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREGIONANDPRICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/RegionDetail.h>
#include <tencentcloud/gaap/v20180529/model/BandwidthPriceGradient.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeRegionAndPrice response structure.
                */
                class DescribeRegionAndPriceResponse : public AbstractModel
                {
                public:
                    DescribeRegionAndPriceResponse();
                    ~DescribeRegionAndPriceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Total number of origin server regions
                     * @return TotalCount Total number of origin server regions
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of origin server region details
                     * @return DestRegionSet List of origin server region details
                     */
                    std::vector<RegionDetail> GetDestRegionSet() const;

                    /**
                     * 判断参数 DestRegionSet 是否已赋值
                     * @return DestRegionSet 是否已赋值
                     */
                    bool DestRegionSetHasBeenSet() const;

                    /**
                     * 获取Connection bandwidth price gradient
                     * @return BandwidthUnitPrice Connection bandwidth price gradient
                     */
                    std::vector<BandwidthPriceGradient> GetBandwidthUnitPrice() const;

                    /**
                     * 判断参数 BandwidthUnitPrice 是否已赋值
                     * @return BandwidthUnitPrice 是否已赋值
                     */
                    bool BandwidthUnitPriceHasBeenSet() const;

                    /**
                     * 获取Currency type of bandwidth price:
CNY (Chinese Yuan)
USD (United States Dollar)
                     * @return Currency Currency type of bandwidth price:
CNY (Chinese Yuan)
USD (United States Dollar)
                     */
                    std::string GetCurrency() const;

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     */
                    bool CurrencyHasBeenSet() const;

                private:

                    /**
                     * Total number of origin server regions
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of origin server region details
                     */
                    std::vector<RegionDetail> m_destRegionSet;
                    bool m_destRegionSetHasBeenSet;

                    /**
                     * Connection bandwidth price gradient
                     */
                    std::vector<BandwidthPriceGradient> m_bandwidthUnitPrice;
                    bool m_bandwidthUnitPriceHasBeenSet;

                    /**
                     * Currency type of bandwidth price:
CNY (Chinese Yuan)
USD (United States Dollar)
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEREGIONANDPRICERESPONSE_H_
