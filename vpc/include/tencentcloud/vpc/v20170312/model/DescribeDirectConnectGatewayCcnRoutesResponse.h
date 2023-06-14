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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEDIRECTCONNECTGATEWAYCCNROUTESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEDIRECTCONNECTGATEWAYCCNROUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/DirectConnectGatewayCcnRoute.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDirectConnectGatewayCcnRoutes response structure.
                */
                class DescribeDirectConnectGatewayCcnRoutesResponse : public AbstractModel
                {
                public:
                    DescribeDirectConnectGatewayCcnRoutesResponse();
                    ~DescribeDirectConnectGatewayCcnRoutesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of objects meeting the condition.
                     * @return TotalCount The number of objects meeting the condition.
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
                     * 获取The CCN route (IDC IP range) list.
                     * @return RouteSet The CCN route (IDC IP range) list.
                     * 
                     */
                    std::vector<DirectConnectGatewayCcnRoute> GetRouteSet() const;

                    /**
                     * 判断参数 RouteSet 是否已赋值
                     * @return RouteSet 是否已赋值
                     * 
                     */
                    bool RouteSetHasBeenSet() const;

                private:

                    /**
                     * The number of objects meeting the condition.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * The CCN route (IDC IP range) list.
                     */
                    std::vector<DirectConnectGatewayCcnRoute> m_routeSet;
                    bool m_routeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEDIRECTCONNECTGATEWAYCCNROUTESRESPONSE_H_
