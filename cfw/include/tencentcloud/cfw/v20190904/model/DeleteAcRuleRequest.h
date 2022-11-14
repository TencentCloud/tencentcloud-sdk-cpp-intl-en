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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DELETEACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DELETEACRULEREQUEST_H_

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
                * DeleteAcRule request structure.
                */
                class DeleteAcRuleRequest : public AbstractModel
                {
                public:
                    DeleteAcRuleRequest();
                    ~DeleteAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the rule to delete. It can be queried via the DescribeAcLists API.
                     * @return Id The ID of the rule to delete. It can be queried via the DescribeAcLists API.
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置The ID of the rule to delete. It can be queried via the DescribeAcLists API.
                     * @param Id The ID of the rule to delete. It can be queried via the DescribeAcLists API.
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Direction. 0: outbound; 1: inbound
                     * @return Direction Direction. 0: outbound; 1: inbound
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Direction. 0: outbound; 1: inbound
                     * @param Direction Direction. 0: outbound; 1: inbound
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Edge ID between two VPCs
                     * @return EdgeId Edge ID between two VPCs
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置Edge ID between two VPCs
                     * @param EdgeId Edge ID between two VPCs
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取NAT region, e.g. ap-shanghai/ap-guangzhou/ap-chongqing
                     * @return Area NAT region, e.g. ap-shanghai/ap-guangzhou/ap-chongqing
                     */
                    std::string GetArea() const;

                    /**
                     * 设置NAT region, e.g. ap-shanghai/ap-guangzhou/ap-chongqing
                     * @param Area NAT region, e.g. ap-shanghai/ap-guangzhou/ap-chongqing
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * The ID of the rule to delete. It can be queried via the DescribeAcLists API.
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Direction. 0: outbound; 1: inbound
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Edge ID between two VPCs
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * NAT region, e.g. ap-shanghai/ap-guangzhou/ap-chongqing
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETEACRULEREQUEST_H_
