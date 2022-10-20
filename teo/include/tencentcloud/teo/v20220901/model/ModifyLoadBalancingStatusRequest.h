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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYLOADBALANCINGSTATUSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYLOADBALANCINGSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancingStatus request structure.
                */
                class ModifyLoadBalancingStatusRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancingStatusRequest();
                    ~ModifyLoadBalancingStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The site ID.
                     * @return ZoneId The site ID.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The site ID.
                     * @param ZoneId The site ID.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取The load balancer ID.
                     * @return LoadBalancingId The load balancer ID.
                     */
                    std::string GetLoadBalancingId() const;

                    /**
                     * 设置The load balancer ID.
                     * @param LoadBalancingId The load balancer ID.
                     */
                    void SetLoadBalancingId(const std::string& _loadBalancingId);

                    /**
                     * 判断参数 LoadBalancingId 是否已赋值
                     * @return LoadBalancingId 是否已赋值
                     */
                    bool LoadBalancingIdHasBeenSet() const;

                    /**
                     * 获取The load balancer status. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     * @return Status The load balancer status. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The load balancer status. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     * @param Status The load balancer status. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * The site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The load balancer ID.
                     */
                    std::string m_loadBalancingId;
                    bool m_loadBalancingIdHasBeenSet;

                    /**
                     * The load balancer status. Values:
<li>`online`: Enabled</li>
<li>`offline`: Disabled</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYLOADBALANCINGSTATUSREQUEST_H_
