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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYFLOWMONITORDETAILRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYFLOWMONITORDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NatGatewayFlowMonitorDetail.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeNatGatewayFlowMonitorDetail response structure.
                */
                class DescribeNatGatewayFlowMonitorDetailResponse : public AbstractModel
                {
                public:
                    DescribeNatGatewayFlowMonitorDetailResponse();
                    ~DescribeNatGatewayFlowMonitorDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of objects meeting conditions.
                     * @return TotalCount Number of objects meeting conditions.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Gateway traffic monitoring details.
                     * @return NatGatewayFlowMonitorDetailSet Gateway traffic monitoring details.
                     * 
                     */
                    std::vector<NatGatewayFlowMonitorDetail> GetNatGatewayFlowMonitorDetailSet() const;

                    /**
                     * 判断参数 NatGatewayFlowMonitorDetailSet 是否已赋值
                     * @return NatGatewayFlowMonitorDetailSet 是否已赋值
                     * 
                     */
                    bool NatGatewayFlowMonitorDetailSetHasBeenSet() const;

                private:

                    /**
                     * Number of objects meeting conditions.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Gateway traffic monitoring details.
                     */
                    std::vector<NatGatewayFlowMonitorDetail> m_natGatewayFlowMonitorDetailSet;
                    bool m_natGatewayFlowMonitorDetailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYFLOWMONITORDETAILRESPONSE_H_
