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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGATEWAYFLOWQOSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGATEWAYFLOWQOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/GatewayQos.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeGatewayFlowQos response structure.
                */
                class DescribeGatewayFlowQosResponse : public AbstractModel
                {
                public:
                    DescribeGatewayFlowQosResponse();
                    ~DescribeGatewayFlowQosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of instance details
                     * @return GatewayQosSet List of instance details
                     * 
                     */
                    std::vector<GatewayQos> GetGatewayQosSet() const;

                    /**
                     * 判断参数 GatewayQosSet 是否已赋值
                     * @return GatewayQosSet 是否已赋值
                     * 
                     */
                    bool GatewayQosSetHasBeenSet() const;

                    /**
                     * 获取Number of eligible instances.
                     * @return TotalCount Number of eligible instances.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of instance details
                     */
                    std::vector<GatewayQos> m_gatewayQosSet;
                    bool m_gatewayQosSetHasBeenSet;

                    /**
                     * Number of eligible instances.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEGATEWAYFLOWQOSRESPONSE_H_
