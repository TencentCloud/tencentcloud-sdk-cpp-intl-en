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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulOverview.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulOverview response structure.
                */
                class DescribeVulOverviewResponse : public AbstractModel
                {
                public:
                    DescribeVulOverviewResponse();
                    ~DescribeVulOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Statistics on focused vulnerabilities
                     * @return FollowVul Statistics on focused vulnerabilities
                     * 
                     */
                    VulOverview GetFollowVul() const;

                    /**
                     * 判断参数 FollowVul 是否已赋值
                     * @return FollowVul 是否已赋值
                     * 
                     */
                    bool FollowVulHasBeenSet() const;

                    /**
                     * 获取Statistics on all vulnerabilities
                     * @return AllVul Statistics on all vulnerabilities
                     * 
                     */
                    VulOverview GetAllVul() const;

                    /**
                     * 判断参数 AllVul 是否已赋值
                     * @return AllVul 是否已赋值
                     * 
                     */
                    bool AllVulHasBeenSet() const;

                    /**
                     * 获取Statistics on affected hosts
                     * @return EffectHost Statistics on affected hosts
                     * 
                     */
                    VulOverview GetEffectHost() const;

                    /**
                     * 判断参数 EffectHost 是否已赋值
                     * @return EffectHost 是否已赋值
                     * 
                     */
                    bool EffectHostHasBeenSet() const;

                    /**
                     * 获取Statistics on vulnerability attack event (past 1 month)
                     * @return VulAttackEvent Statistics on vulnerability attack event (past 1 month)
                     * 
                     */
                    VulOverview GetVulAttackEvent() const;

                    /**
                     * 判断参数 VulAttackEvent 是否已赋值
                     * @return VulAttackEvent 是否已赋值
                     * 
                     */
                    bool VulAttackEventHasBeenSet() const;

                    /**
                     * 获取Statistics on defended attacks (past 1 month)
                     * @return VulDefenceEvent Statistics on defended attacks (past 1 month)
                     * 
                     */
                    VulOverview GetVulDefenceEvent() const;

                    /**
                     * 判断参数 VulDefenceEvent 是否已赋值
                     * @return VulDefenceEvent 是否已赋值
                     * 
                     */
                    bool VulDefenceEventHasBeenSet() const;

                    /**
                     * 获取Vulnerability database statistics
                     * @return VulStore Vulnerability database statistics
                     * 
                     */
                    VulOverview GetVulStore() const;

                    /**
                     * 判断参数 VulStore 是否已赋值
                     * @return VulStore 是否已赋值
                     * 
                     */
                    bool VulStoreHasBeenSet() const;

                private:

                    /**
                     * Statistics on focused vulnerabilities
                     */
                    VulOverview m_followVul;
                    bool m_followVulHasBeenSet;

                    /**
                     * Statistics on all vulnerabilities
                     */
                    VulOverview m_allVul;
                    bool m_allVulHasBeenSet;

                    /**
                     * Statistics on affected hosts
                     */
                    VulOverview m_effectHost;
                    bool m_effectHostHasBeenSet;

                    /**
                     * Statistics on vulnerability attack event (past 1 month)
                     */
                    VulOverview m_vulAttackEvent;
                    bool m_vulAttackEventHasBeenSet;

                    /**
                     * Statistics on defended attacks (past 1 month)
                     */
                    VulOverview m_vulDefenceEvent;
                    bool m_vulDefenceEventHasBeenSet;

                    /**
                     * Vulnerability database statistics
                     */
                    VulOverview m_vulStore;
                    bool m_vulStoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULOVERVIEWRESPONSE_H_
