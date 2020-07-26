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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEDIRECTCONNECTGATEWAYCCNROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEDIRECTCONNECTGATEWAYCCNROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDirectConnectGatewayCcnRoutes request structure.
                */
                class DescribeDirectConnectGatewayCcnRoutesRequest : public AbstractModel
                {
                public:
                    DescribeDirectConnectGatewayCcnRoutesRequest();
                    ~DescribeDirectConnectGatewayCcnRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the Direct Connect gateway, such as `dcg-prpqlmg1`.
                     * @return DirectConnectGatewayId The ID of the Direct Connect gateway, such as `dcg-prpqlmg1`.
                     */
                    std::string GetDirectConnectGatewayId() const;

                    /**
                     * 设置The ID of the Direct Connect gateway, such as `dcg-prpqlmg1`.
                     * @param DirectConnectGatewayId The ID of the Direct Connect gateway, such as `dcg-prpqlmg1`.
                     */
                    void SetDirectConnectGatewayId(const std::string& _directConnectGatewayId);

                    /**
                     * 判断参数 DirectConnectGatewayId 是否已赋值
                     * @return DirectConnectGatewayId 是否已赋值
                     */
                    bool DirectConnectGatewayIdHasBeenSet() const;

                    /**
                     * 获取The route learning type of the CCN. Available values:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static means user-configured. This is the default value.</li>
                     * @return CcnRouteType The route learning type of the CCN. Available values:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static means user-configured. This is the default value.</li>
                     */
                    std::string GetCcnRouteType() const;

                    /**
                     * 设置The route learning type of the CCN. Available values:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static means user-configured. This is the default value.</li>
                     * @param CcnRouteType The route learning type of the CCN. Available values:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static means user-configured. This is the default value.</li>
                     */
                    void SetCcnRouteType(const std::string& _ccnRouteType);

                    /**
                     * 判断参数 CcnRouteType 是否已赋值
                     * @return CcnRouteType 是否已赋值
                     */
                    bool CcnRouteTypeHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param Offset Offset.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The returned quantity.
                     * @return Limit The returned quantity.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The returned quantity.
                     * @param Limit The returned quantity.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The ID of the Direct Connect gateway, such as `dcg-prpqlmg1`.
                     */
                    std::string m_directConnectGatewayId;
                    bool m_directConnectGatewayIdHasBeenSet;

                    /**
                     * The route learning type of the CCN. Available values:
<li>`BGP` - Automatic learning.</li>
<li>`STATIC` - Static means user-configured. This is the default value.</li>
                     */
                    std::string m_ccnRouteType;
                    bool m_ccnRouteTypeHasBeenSet;

                    /**
                     * Offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The returned quantity.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEDIRECTCONNECTGATEWAYCCNROUTESREQUEST_H_
