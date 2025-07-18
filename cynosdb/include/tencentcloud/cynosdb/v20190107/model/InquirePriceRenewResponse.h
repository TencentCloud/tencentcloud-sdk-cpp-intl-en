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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICERENEWRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICERENEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/TradePrice.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * InquirePriceRenew response structure.
                */
                class InquirePriceRenewResponse : public AbstractModel
                {
                public:
                    InquirePriceRenewResponse();
                    ~InquirePriceRenewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Instance ID list
                     * @return InstanceIds Instance ID list
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Price of instance specification in array
                     * @return Prices Price of instance specification in array
                     * 
                     */
                    std::vector<TradePrice> GetPrices() const;

                    /**
                     * 判断参数 Prices 是否已赋值
                     * @return Prices 是否已赋值
                     * 
                     */
                    bool PricesHasBeenSet() const;

                    /**
                     * 获取Total renewal price of compute node
                     * @return InstanceRealTotalPrice Total renewal price of compute node
                     * 
                     */
                    int64_t GetInstanceRealTotalPrice() const;

                    /**
                     * 判断参数 InstanceRealTotalPrice 是否已赋值
                     * @return InstanceRealTotalPrice 是否已赋值
                     * 
                     */
                    bool InstanceRealTotalPriceHasBeenSet() const;

                    /**
                     * 获取Total renewal price of storage node
                     * @return StorageRealTotalPrice Total renewal price of storage node
                     * 
                     */
                    int64_t GetStorageRealTotalPrice() const;

                    /**
                     * 判断参数 StorageRealTotalPrice 是否已赋值
                     * @return StorageRealTotalPrice 是否已赋值
                     * 
                     */
                    bool StorageRealTotalPriceHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Instance ID list
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Price of instance specification in array
                     */
                    std::vector<TradePrice> m_prices;
                    bool m_pricesHasBeenSet;

                    /**
                     * Total renewal price of compute node
                     */
                    int64_t m_instanceRealTotalPrice;
                    bool m_instanceRealTotalPriceHasBeenSet;

                    /**
                     * Total renewal price of storage node
                     */
                    int64_t m_storageRealTotalPrice;
                    bool m_storageRealTotalPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INQUIREPRICERENEWRESPONSE_H_
