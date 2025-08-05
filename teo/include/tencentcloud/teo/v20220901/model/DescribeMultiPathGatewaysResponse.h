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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/MultiPathGateway.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeMultiPathGateways response structure.
                */
                class DescribeMultiPathGatewaysResponse : public AbstractModel
                {
                public:
                    DescribeMultiPathGatewaysResponse();
                    ~DescribeMultiPathGatewaysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway detail.
                     * @return Gateways Gateway detail.
                     * 
                     */
                    std::vector<MultiPathGateway> GetGateways() const;

                    /**
                     * 判断参数 Gateways 是否已赋值
                     * @return Gateways 是否已赋值
                     * 
                     */
                    bool GatewaysHasBeenSet() const;

                    /**
                     * 获取Total number of entries.
                     * @return TotalCount Total number of entries.
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
                     * Gateway detail.
                     */
                    std::vector<MultiPathGateway> m_gateways;
                    bool m_gatewaysHasBeenSet;

                    /**
                     * Total number of entries.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEMULTIPATHGATEWAYSRESPONSE_H_
