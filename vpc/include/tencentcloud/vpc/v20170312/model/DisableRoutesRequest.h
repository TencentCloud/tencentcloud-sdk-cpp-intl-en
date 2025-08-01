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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DISABLEROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DISABLEROUTESREQUEST_H_

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
                * DisableRoutes request structure.
                */
                class DisableRoutesRequest : public AbstractModel
                {
                public:
                    DisableRoutesRequest();
                    ~DisableRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique route table ID.
                     * @return RouteTableId Unique route table ID.
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置Unique route table ID.
                     * @param _routeTableId Unique route table ID.
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取Routing policy ID. This parameter cannot be used simultaneously with RouteItemIds, but at least one of them should be entered. The value of this parameter can be obtained by querying the route list ([DescribeRouteTables](https://intl.cloud.tencent.com/document/product/215/15763?from_cn_redirect=1)).
                     * @return RouteIds Routing policy ID. This parameter cannot be used simultaneously with RouteItemIds, but at least one of them should be entered. The value of this parameter can be obtained by querying the route list ([DescribeRouteTables](https://intl.cloud.tencent.com/document/product/215/15763?from_cn_redirect=1)).
                     * 
                     */
                    std::vector<uint64_t> GetRouteIds() const;

                    /**
                     * 设置Routing policy ID. This parameter cannot be used simultaneously with RouteItemIds, but at least one of them should be entered. The value of this parameter can be obtained by querying the route list ([DescribeRouteTables](https://intl.cloud.tencent.com/document/product/215/15763?from_cn_redirect=1)).
                     * @param _routeIds Routing policy ID. This parameter cannot be used simultaneously with RouteItemIds, but at least one of them should be entered. The value of this parameter can be obtained by querying the route list ([DescribeRouteTables](https://intl.cloud.tencent.com/document/product/215/15763?from_cn_redirect=1)).
                     * 
                     */
                    void SetRouteIds(const std::vector<uint64_t>& _routeIds);

                    /**
                     * 判断参数 RouteIds 是否已赋值
                     * @return RouteIds 是否已赋值
                     * 
                     */
                    bool RouteIdsHasBeenSet() const;

                    /**
                     * 获取Unique routing policy ID. This parameter cannot be used simultaneously with RouteIds, but at least one of them should be entered. The value of this parameter can be obtained by querying the route list ([DescribeRouteTables](https://intl.cloud.tencent.com/document/product/215/15763?from_cn_redirect=1)).
                     * @return RouteItemIds Unique routing policy ID. This parameter cannot be used simultaneously with RouteIds, but at least one of them should be entered. The value of this parameter can be obtained by querying the route list ([DescribeRouteTables](https://intl.cloud.tencent.com/document/product/215/15763?from_cn_redirect=1)).
                     * 
                     */
                    std::vector<std::string> GetRouteItemIds() const;

                    /**
                     * 设置Unique routing policy ID. This parameter cannot be used simultaneously with RouteIds, but at least one of them should be entered. The value of this parameter can be obtained by querying the route list ([DescribeRouteTables](https://intl.cloud.tencent.com/document/product/215/15763?from_cn_redirect=1)).
                     * @param _routeItemIds Unique routing policy ID. This parameter cannot be used simultaneously with RouteIds, but at least one of them should be entered. The value of this parameter can be obtained by querying the route list ([DescribeRouteTables](https://intl.cloud.tencent.com/document/product/215/15763?from_cn_redirect=1)).
                     * 
                     */
                    void SetRouteItemIds(const std::vector<std::string>& _routeItemIds);

                    /**
                     * 判断参数 RouteItemIds 是否已赋值
                     * @return RouteItemIds 是否已赋值
                     * 
                     */
                    bool RouteItemIdsHasBeenSet() const;

                private:

                    /**
                     * Unique route table ID.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * Routing policy ID. This parameter cannot be used simultaneously with RouteItemIds, but at least one of them should be entered. The value of this parameter can be obtained by querying the route list ([DescribeRouteTables](https://intl.cloud.tencent.com/document/product/215/15763?from_cn_redirect=1)).
                     */
                    std::vector<uint64_t> m_routeIds;
                    bool m_routeIdsHasBeenSet;

                    /**
                     * Unique routing policy ID. This parameter cannot be used simultaneously with RouteIds, but at least one of them should be entered. The value of this parameter can be obtained by querying the route list ([DescribeRouteTables](https://intl.cloud.tencent.com/document/product/215/15763?from_cn_redirect=1)).
                     */
                    std::vector<std::string> m_routeItemIds;
                    bool m_routeItemIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DISABLEROUTESREQUEST_H_
