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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_BINDREALSERVER_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_BINDREALSERVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Bound origin server information
                */
                class BindRealServer : public AbstractModel
                {
                public:
                    BindRealServer();
                    ~BindRealServer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin server ID
                     * @return RealServerId Origin server ID
                     * 
                     */
                    std::string GetRealServerId() const;

                    /**
                     * 设置Origin server ID
                     * @param _realServerId Origin server ID
                     * 
                     */
                    void SetRealServerId(const std::string& _realServerId);

                    /**
                     * 判断参数 RealServerId 是否已赋值
                     * @return RealServerId 是否已赋值
                     * 
                     */
                    bool RealServerIdHasBeenSet() const;

                    /**
                     * 获取Origin server IP or domain name
                     * @return RealServerIP Origin server IP or domain name
                     * 
                     */
                    std::string GetRealServerIP() const;

                    /**
                     * 设置Origin server IP or domain name
                     * @param _realServerIP Origin server IP or domain name
                     * 
                     */
                    void SetRealServerIP(const std::string& _realServerIP);

                    /**
                     * 判断参数 RealServerIP 是否已赋值
                     * @return RealServerIP 是否已赋值
                     * 
                     */
                    bool RealServerIPHasBeenSet() const;

                    /**
                     * 获取Origin server weight
                     * @return RealServerWeight Origin server weight
                     * 
                     */
                    int64_t GetRealServerWeight() const;

                    /**
                     * 设置Origin server weight
                     * @param _realServerWeight Origin server weight
                     * 
                     */
                    void SetRealServerWeight(const int64_t& _realServerWeight);

                    /**
                     * 判断参数 RealServerWeight 是否已赋值
                     * @return RealServerWeight 是否已赋值
                     * 
                     */
                    bool RealServerWeightHasBeenSet() const;

                    /**
                     * 获取Origin server health check status. Valid values:
0: normal;
1: exceptional.
If health check is not enabled, this status will always be normal.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RealServerStatus Origin server health check status. Valid values:
0: normal;
1: exceptional.
If health check is not enabled, this status will always be normal.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRealServerStatus() const;

                    /**
                     * 设置Origin server health check status. Valid values:
0: normal;
1: exceptional.
If health check is not enabled, this status will always be normal.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _realServerStatus Origin server health check status. Valid values:
0: normal;
1: exceptional.
If health check is not enabled, this status will always be normal.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRealServerStatus(const int64_t& _realServerStatus);

                    /**
                     * 判断参数 RealServerStatus 是否已赋值
                     * @return RealServerStatus 是否已赋值
                     * 
                     */
                    bool RealServerStatusHasBeenSet() const;

                    /**
                     * 获取Origin server port number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RealServerPort Origin server port number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRealServerPort() const;

                    /**
                     * 设置Origin server port number
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _realServerPort Origin server port number
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRealServerPort(const int64_t& _realServerPort);

                    /**
                     * 判断参数 RealServerPort 是否已赋值
                     * @return RealServerPort 是否已赋值
                     * 
                     */
                    bool RealServerPortHasBeenSet() const;

                    /**
                     * 获取If the origin server is a domain name, the domain name will be resolved to one or multiple IPs. This field indicates the exceptional IP list.
                     * @return DownIPList If the origin server is a domain name, the domain name will be resolved to one or multiple IPs. This field indicates the exceptional IP list.
                     * 
                     */
                    std::vector<std::string> GetDownIPList() const;

                    /**
                     * 设置If the origin server is a domain name, the domain name will be resolved to one or multiple IPs. This field indicates the exceptional IP list.
                     * @param _downIPList If the origin server is a domain name, the domain name will be resolved to one or multiple IPs. This field indicates the exceptional IP list.
                     * 
                     */
                    void SetDownIPList(const std::vector<std::string>& _downIPList);

                    /**
                     * 判断参数 DownIPList 是否已赋值
                     * @return DownIPList 是否已赋值
                     * 
                     */
                    bool DownIPListHasBeenSet() const;

                    /**
                     * 获取Role of the origin server. Values: `master` (primary origin server); `slave` (secondary origin server). This parameter only takes effect when origin failover is enabled for the listener.
                     * @return RealServerFailoverRole Role of the origin server. Values: `master` (primary origin server); `slave` (secondary origin server). This parameter only takes effect when origin failover is enabled for the listener.
                     * 
                     */
                    std::string GetRealServerFailoverRole() const;

                    /**
                     * 设置Role of the origin server. Values: `master` (primary origin server); `slave` (secondary origin server). This parameter only takes effect when origin failover is enabled for the listener.
                     * @param _realServerFailoverRole Role of the origin server. Values: `master` (primary origin server); `slave` (secondary origin server). This parameter only takes effect when origin failover is enabled for the listener.
                     * 
                     */
                    void SetRealServerFailoverRole(const std::string& _realServerFailoverRole);

                    /**
                     * 判断参数 RealServerFailoverRole 是否已赋值
                     * @return RealServerFailoverRole 是否已赋值
                     * 
                     */
                    bool RealServerFailoverRoleHasBeenSet() const;

                private:

                    /**
                     * Origin server ID
                     */
                    std::string m_realServerId;
                    bool m_realServerIdHasBeenSet;

                    /**
                     * Origin server IP or domain name
                     */
                    std::string m_realServerIP;
                    bool m_realServerIPHasBeenSet;

                    /**
                     * Origin server weight
                     */
                    int64_t m_realServerWeight;
                    bool m_realServerWeightHasBeenSet;

                    /**
                     * Origin server health check status. Valid values:
0: normal;
1: exceptional.
If health check is not enabled, this status will always be normal.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_realServerStatus;
                    bool m_realServerStatusHasBeenSet;

                    /**
                     * Origin server port number
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_realServerPort;
                    bool m_realServerPortHasBeenSet;

                    /**
                     * If the origin server is a domain name, the domain name will be resolved to one or multiple IPs. This field indicates the exceptional IP list.
                     */
                    std::vector<std::string> m_downIPList;
                    bool m_downIPListHasBeenSet;

                    /**
                     * Role of the origin server. Values: `master` (primary origin server); `slave` (secondary origin server). This parameter only takes effect when origin failover is enabled for the listener.
                     */
                    std::string m_realServerFailoverRole;
                    bool m_realServerFailoverRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_BINDREALSERVER_H_
