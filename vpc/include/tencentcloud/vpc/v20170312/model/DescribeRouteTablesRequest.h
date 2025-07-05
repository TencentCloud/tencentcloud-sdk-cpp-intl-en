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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTETABLESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTETABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeRouteTables request structure.
                */
                class DescribeRouteTablesRequest : public AbstractModel
                {
                public:
                    DescribeRouteTablesRequest();
                    ~DescribeRouteTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter condition. `RouteTableIds` and `Filters` cannot be specified at the same time.
<li>route-table-id - String - (Filter condition) Route table instance ID.</li>
<li>route-table-name - String - (Filter condition) Route table name.</li>
<li>vpc-id - String - (Filter condition) VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>association.main - String - (Filter condition) Whether it is the main route table.</li>
<li>tag-key - String - Required: no - (Filter condition) Filter by tag key.</li>
<li>tag:tag-key - String - Required: no - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`. See Example 2 for the detailed usage.</li>
                     * @return Filters Filter condition. `RouteTableIds` and `Filters` cannot be specified at the same time.
<li>route-table-id - String - (Filter condition) Route table instance ID.</li>
<li>route-table-name - String - (Filter condition) Route table name.</li>
<li>vpc-id - String - (Filter condition) VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>association.main - String - (Filter condition) Whether it is the main route table.</li>
<li>tag-key - String - Required: no - (Filter condition) Filter by tag key.</li>
<li>tag:tag-key - String - Required: no - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`. See Example 2 for the detailed usage.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition. `RouteTableIds` and `Filters` cannot be specified at the same time.
<li>route-table-id - String - (Filter condition) Route table instance ID.</li>
<li>route-table-name - String - (Filter condition) Route table name.</li>
<li>vpc-id - String - (Filter condition) VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>association.main - String - (Filter condition) Whether it is the main route table.</li>
<li>tag-key - String - Required: no - (Filter condition) Filter by tag key.</li>
<li>tag:tag-key - String - Required: no - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`. See Example 2 for the detailed usage.</li>
                     * @param _filters Filter condition. `RouteTableIds` and `Filters` cannot be specified at the same time.
<li>route-table-id - String - (Filter condition) Route table instance ID.</li>
<li>route-table-name - String - (Filter condition) Route table name.</li>
<li>vpc-id - String - (Filter condition) VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>association.main - String - (Filter condition) Whether it is the main route table.</li>
<li>tag-key - String - Required: no - (Filter condition) Filter by tag key.</li>
<li>tag:tag-key - String - Required: no - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`. See Example 2 for the detailed usage.</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The route table instance ID, such as `rtb-azd4dt1c`.
                     * @return RouteTableIds The route table instance ID, such as `rtb-azd4dt1c`.
                     * 
                     */
                    std::vector<std::string> GetRouteTableIds() const;

                    /**
                     * 设置The route table instance ID, such as `rtb-azd4dt1c`.
                     * @param _routeTableIds The route table instance ID, such as `rtb-azd4dt1c`.
                     * 
                     */
                    void SetRouteTableIds(const std::vector<std::string>& _routeTableIds);

                    /**
                     * 判断参数 RouteTableIds 是否已赋值
                     * @return RouteTableIds 是否已赋值
                     * 
                     */
                    bool RouteTableIdsHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The number of request objects.
                     * @return Limit The number of request objects.
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置The number of request objects.
                     * @param _limit The number of request objects.
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取
                     * @return NeedRouterInfo 
                     * 
                     */
                    bool GetNeedRouterInfo() const;

                    /**
                     * 设置
                     * @param _needRouterInfo 
                     * 
                     */
                    void SetNeedRouterInfo(const bool& _needRouterInfo);

                    /**
                     * 判断参数 NeedRouterInfo 是否已赋值
                     * @return NeedRouterInfo 是否已赋值
                     * 
                     */
                    bool NeedRouterInfoHasBeenSet() const;

                private:

                    /**
                     * Filter condition. `RouteTableIds` and `Filters` cannot be specified at the same time.
<li>route-table-id - String - (Filter condition) Route table instance ID.</li>
<li>route-table-name - String - (Filter condition) Route table name.</li>
<li>vpc-id - String - (Filter condition) VPC instance ID, such as `vpc-f49l6u0z`.</li>
<li>association.main - String - (Filter condition) Whether it is the main route table.</li>
<li>tag-key - String - Required: no - (Filter condition) Filter by tag key.</li>
<li>tag:tag-key - String - Required: no - (Filter condition) Filter by tag key-value pair. Use a specific tag key to replace `tag-key`. See Example 2 for the detailed usage.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The route table instance ID, such as `rtb-azd4dt1c`.
                     */
                    std::vector<std::string> m_routeTableIds;
                    bool m_routeTableIdsHasBeenSet;

                    /**
                     * Offset.
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of request objects.
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 
                     */
                    bool m_needRouterInfo;
                    bool m_needRouterInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEROUTETABLESREQUEST_H_
