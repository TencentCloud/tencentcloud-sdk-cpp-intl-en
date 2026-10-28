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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDCLUSTERSLAVEZONERESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDCLUSTERSLAVEZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * AddClusterSlaveZone response structure.
                */
                class AddClusterSlaveZoneResponse : public AbstractModel
                {
                public:
                    AddClusterSlaveZoneResponse();
                    ~AddClusterSlaveZoneResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Async FlowId</p>
                     * @return FlowId <p>Async FlowId</p>
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取<p>Order ID</p>
                     * @return BigDealIds <p>Order ID</p>
                     * 
                     */
                    std::vector<std::string> GetBigDealIds() const;

                    /**
                     * 判断参数 BigDealIds 是否已赋值
                     * @return BigDealIds 是否已赋值
                     * 
                     */
                    bool BigDealIdsHasBeenSet() const;

                    /**
                     * 获取<p>Order name</p>
                     * @return DealNames <p>Order name</p>
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                    /**
                     * 获取<p>Transaction ID</p>
                     * @return TranId <p>Transaction ID</p>
                     * 
                     */
                    std::string GetTranId() const;

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     * 
                     */
                    bool TranIdHasBeenSet() const;

                private:

                    /**
                     * <p>Async FlowId</p>
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * <p>Order ID</p>
                     */
                    std::vector<std::string> m_bigDealIds;
                    bool m_bigDealIdsHasBeenSet;

                    /**
                     * <p>Order name</p>
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * <p>Transaction ID</p>
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDCLUSTERSLAVEZONERESPONSE_H_
