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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWINSTANCESRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Price.h>
#include <tencentcloud/lighthouse/v20200324/model/DataDiskPrice.h>
#include <tencentcloud/lighthouse/v20200324/model/InstancePriceDetail.h>
#include <tencentcloud/lighthouse/v20200324/model/TotalPrice.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * InquirePriceRenewInstances response structure.
                */
                class InquirePriceRenewInstancesResponse : public AbstractModel
                {
                public:
                    InquirePriceRenewInstancesResponse();
                    ~InquirePriceRenewInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Price information. It defaults to the price information of the first instance in the list.
                     * @return Price Price information. It defaults to the price information of the first instance in the list.
                     * 
                     */
                    Price GetPrice() const;

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取List of data disk price information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataDiskPriceSet List of data disk price information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DataDiskPrice> GetDataDiskPriceSet() const;

                    /**
                     * 判断参数 DataDiskPriceSet 是否已赋值
                     * @return DataDiskPriceSet 是否已赋值
                     * 
                     */
                    bool DataDiskPriceSetHasBeenSet() const;

                    /**
                     * 获取Price list of the instances to be renewed.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return InstancePriceDetailSet Price list of the instances to be renewed.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<InstancePriceDetail> GetInstancePriceDetailSet() const;

                    /**
                     * 判断参数 InstancePriceDetailSet 是否已赋值
                     * @return InstancePriceDetailSet 是否已赋值
                     * 
                     */
                    bool InstancePriceDetailSetHasBeenSet() const;

                    /**
                     * 获取Total price
                     * @return TotalPrice Total price
                     * 
                     */
                    TotalPrice GetTotalPrice() const;

                    /**
                     * 判断参数 TotalPrice 是否已赋值
                     * @return TotalPrice 是否已赋值
                     * 
                     */
                    bool TotalPriceHasBeenSet() const;

                private:

                    /**
                     * Price information. It defaults to the price information of the first instance in the list.
                     */
                    Price m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * List of data disk price information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DataDiskPrice> m_dataDiskPriceSet;
                    bool m_dataDiskPriceSetHasBeenSet;

                    /**
                     * Price list of the instances to be renewed.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<InstancePriceDetail> m_instancePriceDetailSet;
                    bool m_instancePriceDetailSetHasBeenSet;

                    /**
                     * Total price
                     */
                    TotalPrice m_totalPrice;
                    bool m_totalPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICERENEWINSTANCESRESPONSE_H_
