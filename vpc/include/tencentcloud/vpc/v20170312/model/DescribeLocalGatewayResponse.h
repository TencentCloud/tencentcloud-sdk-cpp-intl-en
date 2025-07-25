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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBELOCALGATEWAYRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBELOCALGATEWAYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/LocalGateway.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeLocalGateway response structure.
                */
                class DescribeLocalGatewayResponse : public AbstractModel
                {
                public:
                    DescribeLocalGatewayResponse();
                    ~DescribeLocalGatewayResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Information set of local gateways
                     * @return LocalGatewaySet Information set of local gateways
                     * 
                     */
                    std::vector<LocalGateway> GetLocalGatewaySet() const;

                    /**
                     * 判断参数 LocalGatewaySet 是否已赋值
                     * @return LocalGatewaySet 是否已赋值
                     * 
                     */
                    bool LocalGatewaySetHasBeenSet() const;

                    /**
                     * 获取Total number of local gateways
                     * @return TotalCount Total number of local gateways
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Information set of local gateways
                     */
                    std::vector<LocalGateway> m_localGatewaySet;
                    bool m_localGatewaySetHasBeenSet;

                    /**
                     * Total number of local gateways
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBELOCALGATEWAYRESPONSE_H_
