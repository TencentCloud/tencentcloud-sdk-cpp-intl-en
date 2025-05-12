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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATECLUSTERRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATECLUSTERRESPONSE_H_

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
                * IsolateCluster response structure.
                */
                class IsolateClusterResponse : public AbstractModel
                {
                public:
                    IsolateClusterResponse();
                    ~IsolateClusterResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task flow ID (returned for pay-as-you-go or serverless resources. if necessary to sync task status, please use the DescribeFlow api).
                     * @return FlowId Task flow ID (returned for pay-as-you-go or serverless resources. if necessary to sync task status, please use the DescribeFlow api).
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
                     * 获取Refund order number (returned for prepaid resources. if necessary, synchronize the order status by using the billing product's DescribeDealsByCond to synchronize the order status).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DealNames Refund order number (returned for prepaid resources. if necessary, synchronize the order status by using the billing product's DescribeDealsByCond to synchronize the order status).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                private:

                    /**
                     * Task flow ID (returned for pay-as-you-go or serverless resources. if necessary to sync task status, please use the DescribeFlow api).
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Refund order number (returned for prepaid resources. if necessary, synchronize the order status by using the billing product's DescribeDealsByCond to synchronize the order status).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATECLUSTERRESPONSE_H_
