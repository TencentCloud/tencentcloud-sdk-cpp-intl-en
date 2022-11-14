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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DELETEALLACCESSCONTROLRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DELETEALLACCESSCONTROLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DeleteAllAccessControlRule request structure.
                */
                class DeleteAllAccessControlRuleRequest : public AbstractModel
                {
                public:
                    DeleteAllAccessControlRuleRequest();
                    ~DeleteAllAccessControlRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Direction. 0: outbound; 1: inbound. 0 by default
                     * @return Direction Direction. 0: outbound; 1: inbound. 0 by default
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Direction. 0: outbound; 1: inbound. 0 by default
                     * @param Direction Direction. 0: outbound; 1: inbound. 0 by default
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Deletes all the access control rules for inter-VPC firewall toggles associated with the EdgeId. It is empty by default. Enter either EdgeId or Area.
                     * @return EdgeId Deletes all the access control rules for inter-VPC firewall toggles associated with the EdgeId. It is empty by default. Enter either EdgeId or Area.
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置Deletes all the access control rules for inter-VPC firewall toggles associated with the EdgeId. It is empty by default. Enter either EdgeId or Area.
                     * @param EdgeId Deletes all the access control rules for inter-VPC firewall toggles associated with the EdgeId. It is empty by default. Enter either EdgeId or Area.
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取Deletes all the access control rules for NAT firewalls of this region. It is empty by default. Enter either EdgeId or Area.
                     * @return Area Deletes all the access control rules for NAT firewalls of this region. It is empty by default. Enter either EdgeId or Area.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Deletes all the access control rules for NAT firewalls of this region. It is empty by default. Enter either EdgeId or Area.
                     * @param Area Deletes all the access control rules for NAT firewalls of this region. It is empty by default. Enter either EdgeId or Area.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Direction. 0: outbound; 1: inbound. 0 by default
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Deletes all the access control rules for inter-VPC firewall toggles associated with the EdgeId. It is empty by default. Enter either EdgeId or Area.
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * Deletes all the access control rules for NAT firewalls of this region. It is empty by default. Enter either EdgeId or Area.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETEALLACCESSCONTROLRULEREQUEST_H_
