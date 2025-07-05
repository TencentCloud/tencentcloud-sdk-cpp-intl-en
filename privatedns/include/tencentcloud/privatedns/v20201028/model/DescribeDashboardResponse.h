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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEDASHBOARDRESPONSE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEDASHBOARDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/FlowUsage.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeDashboard response structure.
                */
                class DescribeDashboardResponse : public AbstractModel
                {
                public:
                    DescribeDashboardResponse();
                    ~DescribeDashboardResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of private domain DNS records
                     * @return ZoneTotal Total number of private domain DNS records
                     * 
                     */
                    int64_t GetZoneTotal() const;

                    /**
                     * 判断参数 ZoneTotal 是否已赋值
                     * @return ZoneTotal 是否已赋值
                     * 
                     */
                    bool ZoneTotalHasBeenSet() const;

                    /**
                     * 获取Number of VPCs associated with private domain
                     * @return ZoneVpcCount Number of VPCs associated with private domain
                     * 
                     */
                    int64_t GetZoneVpcCount() const;

                    /**
                     * 判断参数 ZoneVpcCount 是否已赋值
                     * @return ZoneVpcCount 是否已赋值
                     * 
                     */
                    bool ZoneVpcCountHasBeenSet() const;

                    /**
                     * 获取Total number of historical requests
                     * @return RequestTotalCount Total number of historical requests
                     * 
                     */
                    int64_t GetRequestTotalCount() const;

                    /**
                     * 判断参数 RequestTotalCount 是否已赋值
                     * @return RequestTotalCount 是否已赋值
                     * 
                     */
                    bool RequestTotalCountHasBeenSet() const;

                    /**
                     * 获取Traffic package usage
                     * @return FlowUsage Traffic package usage
                     * 
                     */
                    std::vector<FlowUsage> GetFlowUsage() const;

                    /**
                     * 判断参数 FlowUsage 是否已赋值
                     * @return FlowUsage 是否已赋值
                     * 
                     */
                    bool FlowUsageHasBeenSet() const;

                private:

                    /**
                     * Total number of private domain DNS records
                     */
                    int64_t m_zoneTotal;
                    bool m_zoneTotalHasBeenSet;

                    /**
                     * Number of VPCs associated with private domain
                     */
                    int64_t m_zoneVpcCount;
                    bool m_zoneVpcCountHasBeenSet;

                    /**
                     * Total number of historical requests
                     */
                    int64_t m_requestTotalCount;
                    bool m_requestTotalCountHasBeenSet;

                    /**
                     * Traffic package usage
                     */
                    std::vector<FlowUsage> m_flowUsage;
                    bool m_flowUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEDASHBOARDRESPONSE_H_
