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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CHECKPROXYCREATEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CHECKPROXYCREATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CheckProxyCreate request structure.
                */
                class CheckProxyCreateRequest : public AbstractModel
                {
                public:
                    CheckProxyCreateRequest();
                    ~CheckProxyCreateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Access (acceleration) region of the connection. The value can be obtained via the DescribeAccessRegionsByDestRegion API.
                     * @return AccessRegion Access (acceleration) region of the connection. The value can be obtained via the DescribeAccessRegionsByDestRegion API.
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置Access (acceleration) region of the connection. The value can be obtained via the DescribeAccessRegionsByDestRegion API.
                     * @param AccessRegion Access (acceleration) region of the connection. The value can be obtained via the DescribeAccessRegionsByDestRegion API.
                     */
                    void SetAccessRegion(const std::string& _accessRegion);

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     */
                    bool AccessRegionHasBeenSet() const;

                    /**
                     * 获取Origin server region of the connection. The value can be obtained via the DescribeDestRegions API.
                     * @return RealServerRegion Origin server region of the connection. The value can be obtained via the DescribeDestRegions API.
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置Origin server region of the connection. The value can be obtained via the DescribeDestRegions API.
                     * @param RealServerRegion Origin server region of the connection. The value can be obtained via the DescribeDestRegions API.
                     */
                    void SetRealServerRegion(const std::string& _realServerRegion);

                    /**
                     * 判断参数 RealServerRegion 是否已赋值
                     * @return RealServerRegion 是否已赋值
                     */
                    bool RealServerRegionHasBeenSet() const;

                    /**
                     * 获取Connection bandwidth cap. Unit: Mbps.
                     * @return Bandwidth Connection bandwidth cap. Unit: Mbps.
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置Connection bandwidth cap. Unit: Mbps.
                     * @param Bandwidth Connection bandwidth cap. Unit: Mbps.
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     * @return Concurrent Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     */
                    uint64_t GetConcurrent() const;

                    /**
                     * 设置Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     * @param Concurrent Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     */
                    void SetConcurrent(const uint64_t& _concurrent);

                    /**
                     * 判断参数 Concurrent 是否已赋值
                     * @return Concurrent 是否已赋值
                     */
                    bool ConcurrentHasBeenSet() const;

                    /**
                     * 获取Connection group ID that needs to be entered when a connection is created in a connection group
                     * @return GroupId Connection group ID that needs to be entered when a connection is created in a connection group
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID that needs to be entered when a connection is created in a connection group
                     * @param GroupId Connection group ID that needs to be entered when a connection is created in a connection group
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * Access (acceleration) region of the connection. The value can be obtained via the DescribeAccessRegionsByDestRegion API.
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * Origin server region of the connection. The value can be obtained via the DescribeDestRegions API.
                     */
                    std::string m_realServerRegion;
                    bool m_realServerRegionHasBeenSet;

                    /**
                     * Connection bandwidth cap. Unit: Mbps.
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     */
                    uint64_t m_concurrent;
                    bool m_concurrentHasBeenSet;

                    /**
                     * Connection group ID that needs to be entered when a connection is created in a connection group
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CHECKPROXYCREATEREQUEST_H_
