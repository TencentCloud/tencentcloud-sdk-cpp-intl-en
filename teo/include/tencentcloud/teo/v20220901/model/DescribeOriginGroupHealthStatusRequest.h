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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPHEALTHSTATUSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPHEALTHSTATUSREQUEST_H_

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
                * DescribeOriginGroupHealthStatus request structure.
                */
                class DescribeOriginGroupHealthStatusRequest : public AbstractModel
                {
                public:
                    DescribeOriginGroupHealthStatusRequest();
                    ~DescribeOriginGroupHealthStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取CLB instance ID.
                     * @return LBInstanceId CLB instance ID.
                     * 
                     */
                    std::string GetLBInstanceId() const;

                    /**
                     * 设置CLB instance ID.
                     * @param _lBInstanceId CLB instance ID.
                     * 
                     */
                    void SetLBInstanceId(const std::string& _lBInstanceId);

                    /**
                     * 判断参数 LBInstanceId 是否已赋值
                     * @return LBInstanceId 是否已赋值
                     * 
                     */
                    bool LBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Origin server group ID. If left empty, the health status of all origin server groups under a LoadBalancer is obtained by default.
                     * @return OriginGroupIds Origin server group ID. If left empty, the health status of all origin server groups under a LoadBalancer is obtained by default.
                     * 
                     */
                    std::vector<std::string> GetOriginGroupIds() const;

                    /**
                     * 设置Origin server group ID. If left empty, the health status of all origin server groups under a LoadBalancer is obtained by default.
                     * @param _originGroupIds Origin server group ID. If left empty, the health status of all origin server groups under a LoadBalancer is obtained by default.
                     * 
                     */
                    void SetOriginGroupIds(const std::vector<std::string>& _originGroupIds);

                    /**
                     * 判断参数 OriginGroupIds 是否已赋值
                     * @return OriginGroupIds 是否已赋值
                     * 
                     */
                    bool OriginGroupIdsHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * CLB instance ID.
                     */
                    std::string m_lBInstanceId;
                    bool m_lBInstanceIdHasBeenSet;

                    /**
                     * Origin server group ID. If left empty, the health status of all origin server groups under a LoadBalancer is obtained by default.
                     */
                    std::vector<std::string> m_originGroupIds;
                    bool m_originGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPHEALTHSTATUSREQUEST_H_
