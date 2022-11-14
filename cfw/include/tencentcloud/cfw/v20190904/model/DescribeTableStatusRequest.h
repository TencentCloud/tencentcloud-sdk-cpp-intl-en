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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBETABLESTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBETABLESTATUSREQUEST_H_

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
                * DescribeTableStatus request structure.
                */
                class DescribeTableStatusRequest : public AbstractModel
                {
                public:
                    DescribeTableStatusRequest();
                    ~DescribeTableStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Edge ID between two VPCs, required for VPCs
                     * @return EdgeId Edge ID between two VPCs, required for VPCs
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置Edge ID between two VPCs, required for VPCs
                     * @param EdgeId Edge ID between two VPCs, required for VPCs
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取Status value. 0: the only default value
                     * @return Status Status value. 0: the only default value
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status value. 0: the only default value
                     * @param Status Status value. 0: the only default value
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取NAT region, required for NAT
                     * @return Area NAT region, required for NAT
                     */
                    std::string GetArea() const;

                    /**
                     * 设置NAT region, required for NAT
                     * @param Area NAT region, required for NAT
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

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

                private:

                    /**
                     * Edge ID between two VPCs, required for VPCs
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * Status value. 0: the only default value
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * NAT region, required for NAT
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Direction. 0: outbound; 1: inbound. 0 by default
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBETABLESTATUSREQUEST_H_
