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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTETABLESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTETABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Filter.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取Route table instance ID, such as `rtb-azd4dt1c`.
                     * @return RouteTableIds Route table instance ID, such as `rtb-azd4dt1c`.
                     * 
                     */
                    std::vector<std::string> GetRouteTableIds() const;

                    /**
                     * 设置Route table instance ID, such as `rtb-azd4dt1c`.
                     * @param _routeTableIds Route table instance ID, such as `rtb-azd4dt1c`.
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
                     * 获取Filter. `RouteTableIds` and `Filters` cannot be specified at the same time.
route-table-id - String - (Filter) Route table instance ID.
route-table-name - String - (Filter) Route table name.
vpc-id - String - (Filter) VPC instance ID, such as `vpc-f49l6u0z`.
association.main - String - (Filter) Whether it is the main route table.
                     * @return Filters Filter. `RouteTableIds` and `Filters` cannot be specified at the same time.
route-table-id - String - (Filter) Route table instance ID.
route-table-name - String - (Filter) Route table name.
vpc-id - String - (Filter) VPC instance ID, such as `vpc-f49l6u0z`.
association.main - String - (Filter) Whether it is the main route table.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. `RouteTableIds` and `Filters` cannot be specified at the same time.
route-table-id - String - (Filter) Route table instance ID.
route-table-name - String - (Filter) Route table name.
vpc-id - String - (Filter) VPC instance ID, such as `vpc-f49l6u0z`.
association.main - String - (Filter) Whether it is the main route table.
                     * @param _filters Filter. `RouteTableIds` and `Filters` cannot be specified at the same time.
route-table-id - String - (Filter) Route table instance ID.
route-table-name - String - (Filter) Route table name.
vpc-id - String - (Filter) VPC instance ID, such as `vpc-f49l6u0z`.
association.main - String - (Filter) Whether it is the main route table.
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
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit
                     * @return Limit Limit
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit
                     * @param _limit Limit
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取ECM region. If this parameter is left empty or not specified, it will indicate all regions.
                     * @return EcmRegion ECM region. If this parameter is left empty or not specified, it will indicate all regions.
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM region. If this parameter is left empty or not specified, it will indicate all regions.
                     * @param _ecmRegion ECM region. If this parameter is left empty or not specified, it will indicate all regions.
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                private:

                    /**
                     * Route table instance ID, such as `rtb-azd4dt1c`.
                     */
                    std::vector<std::string> m_routeTableIds;
                    bool m_routeTableIdsHasBeenSet;

                    /**
                     * Filter. `RouteTableIds` and `Filters` cannot be specified at the same time.
route-table-id - String - (Filter) Route table instance ID.
route-table-name - String - (Filter) Route table name.
vpc-id - String - (Filter) VPC instance ID, such as `vpc-f49l6u0z`.
association.main - String - (Filter) Whether it is the main route table.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * ECM region. If this parameter is left empty or not specified, it will indicate all regions.
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTETABLESREQUEST_H_
