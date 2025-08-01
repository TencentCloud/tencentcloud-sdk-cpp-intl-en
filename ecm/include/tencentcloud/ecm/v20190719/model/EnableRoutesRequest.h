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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ENABLEROUTESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ENABLEROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * EnableRoutes request structure.
                */
                class EnableRoutesRequest : public AbstractModel
                {
                public:
                    EnableRoutesRequest();
                    ~EnableRoutesRequest() = default;
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
                     * 获取Routing policy ID.
                     * @return RouteIds Routing policy ID.
                     * 
                     */
                    std::vector<uint64_t> GetRouteIds() const;

                    /**
                     * 设置Routing policy ID.
                     * @param _routeIds Routing policy ID.
                     * 
                     */
                    void SetRouteIds(const std::vector<uint64_t>& _routeIds);

                    /**
                     * 判断参数 RouteIds 是否已赋值
                     * @return RouteIds 是否已赋值
                     * 
                     */
                    bool RouteIdsHasBeenSet() const;

                private:

                    /**
                     * Unique route table ID.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * Routing policy ID.
                     */
                    std::vector<uint64_t> m_routeIds;
                    bool m_routeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ENABLEROUTESREQUEST_H_
