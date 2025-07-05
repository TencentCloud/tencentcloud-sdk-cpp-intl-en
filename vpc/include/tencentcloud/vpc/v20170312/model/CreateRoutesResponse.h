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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/RouteTable.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateRoutes response structure.
                */
                class CreateRoutesResponse : public AbstractModel
                {
                public:
                    CreateRoutesResponse();
                    ~CreateRoutesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of newly added instances.
                     * @return TotalCount The number of newly added instances.
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
                     * 获取Route table object.
                     * @return RouteTableSet Route table object.
                     * 
                     */
                    std::vector<RouteTable> GetRouteTableSet() const;

                    /**
                     * 判断参数 RouteTableSet 是否已赋值
                     * @return RouteTableSet 是否已赋值
                     * 
                     */
                    bool RouteTableSetHasBeenSet() const;

                private:

                    /**
                     * The number of newly added instances.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Route table object.
                     */
                    std::vector<RouteTable> m_routeTableSet;
                    bool m_routeTableSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTESRESPONSE_H_
