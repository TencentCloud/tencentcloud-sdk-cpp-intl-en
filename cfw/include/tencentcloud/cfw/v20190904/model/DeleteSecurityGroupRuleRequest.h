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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DELETESECURITYGROUPRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DELETESECURITYGROUPRULEREQUEST_H_

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
                * DeleteSecurityGroupRule request structure.
                */
                class DeleteSecurityGroupRuleRequest : public AbstractModel
                {
                public:
                    DeleteSecurityGroupRuleRequest();
                    ~DeleteSecurityGroupRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the rule to delete
                     * @return Id ID of the rule to delete
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置ID of the rule to delete
                     * @param Id ID of the rule to delete
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud region (abbreviation)
                     * @return Area Tencent Cloud region (abbreviation)
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Tencent Cloud region (abbreviation)
                     * @param Area Tencent Cloud region (abbreviation)
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

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
                     * 获取Indicates whether to delete the reverse rule. 0: no; 1: yes
                     * @return IsDelReverse Indicates whether to delete the reverse rule. 0: no; 1: yes
                     */
                    uint64_t GetIsDelReverse() const;

                    /**
                     * 设置Indicates whether to delete the reverse rule. 0: no; 1: yes
                     * @param IsDelReverse Indicates whether to delete the reverse rule. 0: no; 1: yes
                     */
                    void SetIsDelReverse(const uint64_t& _isDelReverse);

                    /**
                     * 判断参数 IsDelReverse 是否已赋值
                     * @return IsDelReverse 是否已赋值
                     */
                    bool IsDelReverseHasBeenSet() const;

                private:

                    /**
                     * ID of the rule to delete
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Tencent Cloud region (abbreviation)
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Direction. 0: outbound; 1: inbound
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Indicates whether to delete the reverse rule. 0: no; 1: yes
                     */
                    uint64_t m_isDelReverse;
                    bool m_isDelReverseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETESECURITYGROUPRULEREQUEST_H_
