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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTECONFLICTSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTECONFLICTSREQUEST_H_

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
                * DescribeRouteConflicts request structure.
                */
                class DescribeRouteConflictsRequest : public AbstractModel
                {
                public:
                    DescribeRouteConflictsRequest();
                    ~DescribeRouteConflictsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Route table instance ID, such as `rtb-azd4dt1c`.
                     * @return RouteTableId Route table instance ID, such as `rtb-azd4dt1c`.
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置Route table instance ID, such as `rtb-azd4dt1c`.
                     * @param RouteTableId Route table instance ID, such as `rtb-azd4dt1c`.
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取List of conflicting destination ports to be checked.
                     * @return DestinationCidrBlocks List of conflicting destination ports to be checked.
                     */
                    std::vector<std::string> GetDestinationCidrBlocks() const;

                    /**
                     * 设置List of conflicting destination ports to be checked.
                     * @param DestinationCidrBlocks List of conflicting destination ports to be checked.
                     */
                    void SetDestinationCidrBlocks(const std::vector<std::string>& _destinationCidrBlocks);

                    /**
                     * 判断参数 DestinationCidrBlocks 是否已赋值
                     * @return DestinationCidrBlocks 是否已赋值
                     */
                    bool DestinationCidrBlocksHasBeenSet() const;

                private:

                    /**
                     * Route table instance ID, such as `rtb-azd4dt1c`.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * List of conflicting destination ports to be checked.
                     */
                    std::vector<std::string> m_destinationCidrBlocks;
                    bool m_destinationCidrBlocksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEROUTECONFLICTSREQUEST_H_
