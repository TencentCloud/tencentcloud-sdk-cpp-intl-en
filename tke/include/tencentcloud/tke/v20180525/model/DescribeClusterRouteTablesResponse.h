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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERROUTETABLESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERROUTETABLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/RouteTableInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterRouteTables response structure.
                */
                class DescribeClusterRouteTablesResponse : public AbstractModel
                {
                public:
                    DescribeClusterRouteTablesResponse();
                    ~DescribeClusterRouteTablesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of instances that match the filter condition(s).
                     * @return TotalCount Number of instances that match the filter condition(s).
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Object of cluster route table.
                     * @return RouteTableSet Object of cluster route table.
                     * 
                     */
                    std::vector<RouteTableInfo> GetRouteTableSet() const;

                    /**
                     * 判断参数 RouteTableSet 是否已赋值
                     * @return RouteTableSet 是否已赋值
                     * 
                     */
                    bool RouteTableSetHasBeenSet() const;

                private:

                    /**
                     * Number of instances that match the filter condition(s).
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Object of cluster route table.
                     */
                    std::vector<RouteTableInfo> m_routeTableSet;
                    bool m_routeTableSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERROUTETABLESRESPONSE_H_
