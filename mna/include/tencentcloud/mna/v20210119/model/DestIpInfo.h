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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DESTIPINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DESTIPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * Target IP info
                */
                class DestIpInfo : public AbstractModel
                {
                public:
                    DestIpInfo();
                    ~DestIpInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time: s
                     * @return Time Time: s
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Time: s
                     * @param _time Time: s
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Gateway IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GatewayIp Gateway IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGatewayIp() const;

                    /**
                     * 设置Gateway IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gatewayIp Gateway IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGatewayIp(const std::string& _gatewayIp);

                    /**
                     * 判断参数 GatewayIp 是否已赋值
                     * @return GatewayIp 是否已赋值
                     * 
                     */
                    bool GatewayIpHasBeenSet() const;

                    /**
                     * 获取gateway address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GatewaySite gateway address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGatewaySite() const;

                    /**
                     * 设置gateway address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _gatewaySite gateway address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGatewaySite(const std::string& _gatewaySite);

                    /**
                     * 判断参数 GatewaySite 是否已赋值
                     * @return GatewaySite 是否已赋值
                     * 
                     */
                    bool GatewaySiteHasBeenSet() const;

                    /**
                     * 获取Number of target IPs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IpCount Number of target IPs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIpCount() const;

                    /**
                     * 设置Number of target IPs
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipCount Number of target IPs
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIpCount(const int64_t& _ipCount);

                    /**
                     * 判断参数 IpCount 是否已赋值
                     * @return IpCount 是否已赋值
                     * 
                     */
                    bool IpCountHasBeenSet() const;

                    /**
                     * 获取Target IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IpList Target IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置Target IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ipList Target IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                private:

                    /**
                     * Time: s
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Gateway IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gatewayIp;
                    bool m_gatewayIpHasBeenSet;

                    /**
                     * gateway address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_gatewaySite;
                    bool m_gatewaySiteHasBeenSet;

                    /**
                     * Number of target IPs
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ipCount;
                    bool m_ipCountHasBeenSet;

                    /**
                     * Target IP list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DESTIPINFO_H_
