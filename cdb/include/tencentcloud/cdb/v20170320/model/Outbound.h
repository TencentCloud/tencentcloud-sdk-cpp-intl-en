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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_OUTBOUND_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_OUTBOUND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Security group outbound rule
                */
                class Outbound : public AbstractModel
                {
                public:
                    Outbound();
                    ~Outbound() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy, which can be ACCEPT or DROP
                     * @return Action Policy, which can be ACCEPT or DROP
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Policy, which can be ACCEPT or DROP
                     * @param Action Policy, which can be ACCEPT or DROP
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Destination IP or IP range, such as 172.16.0.0/12
                     * @return CidrIp Destination IP or IP range, such as 172.16.0.0/12
                     */
                    std::string GetCidrIp() const;

                    /**
                     * 设置Destination IP or IP range, such as 172.16.0.0/12
                     * @param CidrIp Destination IP or IP range, such as 172.16.0.0/12
                     */
                    void SetCidrIp(const std::string& _cidrIp);

                    /**
                     * 判断参数 CidrIp 是否已赋值
                     * @return CidrIp 是否已赋值
                     */
                    bool CidrIpHasBeenSet() const;

                    /**
                     * 获取Port or port range
                     * @return PortRange Port or port range
                     */
                    std::string GetPortRange() const;

                    /**
                     * 设置Port or port range
                     * @param PortRange Port or port range
                     */
                    void SetPortRange(const std::string& _portRange);

                    /**
                     * 判断参数 PortRange 是否已赋值
                     * @return PortRange 是否已赋值
                     */
                    bool PortRangeHasBeenSet() const;

                    /**
                     * 获取Network protocol. UDP and TCP are supported
                     * @return IpProtocol Network protocol. UDP and TCP are supported
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置Network protocol. UDP and TCP are supported
                     * @param IpProtocol Network protocol. UDP and TCP are supported
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取The direction of the rule, which is OUTPUT for inbound rules
                     * @return Dir The direction of the rule, which is OUTPUT for inbound rules
                     */
                    std::string GetDir() const;

                    /**
                     * 设置The direction of the rule, which is OUTPUT for inbound rules
                     * @param Dir The direction of the rule, which is OUTPUT for inbound rules
                     */
                    void SetDir(const std::string& _dir);

                    /**
                     * 判断参数 Dir 是否已赋值
                     * @return Dir 是否已赋值
                     */
                    bool DirHasBeenSet() const;

                private:

                    /**
                     * Policy, which can be ACCEPT or DROP
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Destination IP or IP range, such as 172.16.0.0/12
                     */
                    std::string m_cidrIp;
                    bool m_cidrIpHasBeenSet;

                    /**
                     * Port or port range
                     */
                    std::string m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * Network protocol. UDP and TCP are supported
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * The direction of the rule, which is OUTPUT for inbound rules
                     */
                    std::string m_dir;
                    bool m_dirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_OUTBOUND_H_