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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLDSTRULE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLDSTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ACL target (IP/port) match rule
                */
                class TrafficSandboxACLDstRule : public AbstractModel
                {
                public:
                    TrafficSandboxACLDstRule();
                    ~TrafficSandboxACLDstRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target IP list
Input parameter limit: each item supports three formats: single IP address (for example, 10.0.0.1), CIDR block (for example, 10.0.0.1/24), and IP range (for example, 10.0.0.1-10.0.2.0).
                     * @return DstIP Target IP list
Input parameter limit: each item supports three formats: single IP address (for example, 10.0.0.1), CIDR block (for example, 10.0.0.1/24), and IP range (for example, 10.0.0.1-10.0.2.0).
                     * 
                     */
                    std::vector<std::string> GetDstIP() const;

                    /**
                     * 设置Target IP list
Input parameter limit: each item supports three formats: single IP address (for example, 10.0.0.1), CIDR block (for example, 10.0.0.1/24), and IP range (for example, 10.0.0.1-10.0.2.0).
                     * @param _dstIP Target IP list
Input parameter limit: each item supports three formats: single IP address (for example, 10.0.0.1), CIDR block (for example, 10.0.0.1/24), and IP range (for example, 10.0.0.1-10.0.2.0).
                     * 
                     */
                    void SetDstIP(const std::vector<std::string>& _dstIP);

                    /**
                     * 判断参数 DstIP 是否已赋值
                     * @return DstIP 是否已赋值
                     * 
                     */
                    bool DstIPHasBeenSet() const;

                    /**
                     * 获取List of excluded target IPs
Input parameter limitations: The format is the same as that of DstIP.
                     * @return DstIPExcept List of excluded target IPs
Input parameter limitations: The format is the same as that of DstIP.
                     * 
                     */
                    std::vector<std::string> GetDstIPExcept() const;

                    /**
                     * 设置List of excluded target IPs
Input parameter limitations: The format is the same as that of DstIP.
                     * @param _dstIPExcept List of excluded target IPs
Input parameter limitations: The format is the same as that of DstIP.
                     * 
                     */
                    void SetDstIPExcept(const std::vector<std::string>& _dstIPExcept);

                    /**
                     * 判断参数 DstIPExcept 是否已赋值
                     * @return DstIPExcept 是否已赋值
                     * 
                     */
                    bool DstIPExceptHasBeenSet() const;

                    /**
                     * 获取Target port or port range
Input parameter limit: single port, for example, 80; port range, for example, 8000-9000.
                     * @return DstPort Target port or port range
Input parameter limit: single port, for example, 80; port range, for example, 8000-9000.
                     * 
                     */
                    std::vector<std::string> GetDstPort() const;

                    /**
                     * 设置Target port or port range
Input parameter limit: single port, for example, 80; port range, for example, 8000-9000.
                     * @param _dstPort Target port or port range
Input parameter limit: single port, for example, 80; port range, for example, 8000-9000.
                     * 
                     */
                    void SetDstPort(const std::vector<std::string>& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取Excluded target port list
Input parameter limitations: The format is the same as that of DstPort.
                     * @return DstPortExcept Excluded target port list
Input parameter limitations: The format is the same as that of DstPort.
                     * 
                     */
                    std::vector<std::string> GetDstPortExcept() const;

                    /**
                     * 设置Excluded target port list
Input parameter limitations: The format is the same as that of DstPort.
                     * @param _dstPortExcept Excluded target port list
Input parameter limitations: The format is the same as that of DstPort.
                     * 
                     */
                    void SetDstPortExcept(const std::vector<std::string>& _dstPortExcept);

                    /**
                     * 判断参数 DstPortExcept 是否已赋值
                     * @return DstPortExcept 是否已赋值
                     * 
                     */
                    bool DstPortExceptHasBeenSet() const;

                private:

                    /**
                     * Target IP list
Input parameter limit: each item supports three formats: single IP address (for example, 10.0.0.1), CIDR block (for example, 10.0.0.1/24), and IP range (for example, 10.0.0.1-10.0.2.0).
                     */
                    std::vector<std::string> m_dstIP;
                    bool m_dstIPHasBeenSet;

                    /**
                     * List of excluded target IPs
Input parameter limitations: The format is the same as that of DstIP.
                     */
                    std::vector<std::string> m_dstIPExcept;
                    bool m_dstIPExceptHasBeenSet;

                    /**
                     * Target port or port range
Input parameter limit: single port, for example, 80; port range, for example, 8000-9000.
                     */
                    std::vector<std::string> m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * Excluded target port list
Input parameter limitations: The format is the same as that of DstPort.
                     */
                    std::vector<std::string> m_dstPortExcept;
                    bool m_dstPortExceptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLDSTRULE_H_
