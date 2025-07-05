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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLRULESTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLRULESTATUSREQUEST_H_

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
                * ModifyAllRuleStatus request structure.
                */
                class ModifyAllRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyAllRuleStatusRequest();
                    ~ModifyAllRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Status. 0: all disabled; 1: all enabled
                     * @return Status Status. 0: all disabled; 1: all enabled
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status. 0: all disabled; 1: all enabled
                     * @param _status Status. 0: all disabled; 1: all enabled
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Direction. 0: outbound; 1: inbound
                     * @return Direction Direction. 0: outbound; 1: inbound
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Direction. 0: outbound; 1: inbound
                     * @param _direction Direction. 0: outbound; 1: inbound
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Edge ID value
                     * @return EdgeId Edge ID value
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置Edge ID value
                     * @param _edgeId Edge ID value
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取NAT region
                     * @return Area NAT region
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置NAT region
                     * @param _area NAT region
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Status. 0: all disabled; 1: all enabled
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Direction. 0: outbound; 1: inbound
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Edge ID value
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * NAT region
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLRULESTATUSREQUEST_H_
