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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEDIRECTCONNECTTUNNELSRESPONSE_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEDIRECTCONNECTTUNNELSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/DirectConnectTunnel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DescribeDirectConnectTunnels response structure.
                */
                class DescribeDirectConnectTunnelsResponse : public AbstractModel
                {
                public:
                    DescribeDirectConnectTunnelsResponse();
                    ~DescribeDirectConnectTunnelsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of dedicated tunnels.
                     * @return DirectConnectTunnelSet List of dedicated tunnels.
                     * 
                     */
                    std::vector<DirectConnectTunnel> GetDirectConnectTunnelSet() const;

                    /**
                     * 判断参数 DirectConnectTunnelSet 是否已赋值
                     * @return DirectConnectTunnelSet 是否已赋值
                     * 
                     */
                    bool DirectConnectTunnelSetHasBeenSet() const;

                    /**
                     * 获取Number of eligible dedicated tunnels.
                     * @return TotalCount Number of eligible dedicated tunnels.
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
                     * List of dedicated tunnels.
                     */
                    std::vector<DirectConnectTunnel> m_directConnectTunnelSet;
                    bool m_directConnectTunnelSetHasBeenSet;

                    /**
                     * Number of eligible dedicated tunnels.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEDIRECTCONNECTTUNNELSRESPONSE_H_
