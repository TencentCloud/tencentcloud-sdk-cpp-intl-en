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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_POLICYRULE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_POLICYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Rule information for security group
                */
                class PolicyRule : public AbstractModel
                {
                public:
                    PolicyRule();
                    ~PolicyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy, Valid values: `ACCEPT`, `DROP`.
                     * @return Action Policy, Valid values: `ACCEPT`, `DROP`.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Policy, Valid values: `ACCEPT`, `DROP`.
                     * @param _action Policy, Valid values: `ACCEPT`, `DROP`.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Source or destination IP or IP range, such as 172.16.0.0/12.
                     * @return CidrIp Source or destination IP or IP range, such as 172.16.0.0/12.
                     * 
                     */
                    std::string GetCidrIp() const;

                    /**
                     * 设置Source or destination IP or IP range, such as 172.16.0.0/12.
                     * @param _cidrIp Source or destination IP or IP range, such as 172.16.0.0/12.
                     * 
                     */
                    void SetCidrIp(const std::string& _cidrIp);

                    /**
                     * 判断参数 CidrIp 是否已赋值
                     * @return CidrIp 是否已赋值
                     * 
                     */
                    bool CidrIpHasBeenSet() const;

                    /**
                     * 获取Port
                     * @return PortRange Port
                     * 
                     */
                    std::string GetPortRange() const;

                    /**
                     * 设置Port
                     * @param _portRange Port
                     * 
                     */
                    void SetPortRange(const std::string& _portRange);

                    /**
                     * 判断参数 PortRange 是否已赋值
                     * @return PortRange 是否已赋值
                     * 
                     */
                    bool PortRangeHasBeenSet() const;

                    /**
                     * 获取Network protocol. UDP and TCP are supported.
                     * @return IpProtocol Network protocol. UDP and TCP are supported.
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置Network protocol. UDP and TCP are supported.
                     * @param _ipProtocol Network protocol. UDP and TCP are supported.
                     * 
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     * 
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取The rule description
                     * @return Description The rule description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置The rule description
                     * @param _description The rule description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Policy, Valid values: `ACCEPT`, `DROP`.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Source or destination IP or IP range, such as 172.16.0.0/12.
                     */
                    std::string m_cidrIp;
                    bool m_cidrIpHasBeenSet;

                    /**
                     * Port
                     */
                    std::string m_portRange;
                    bool m_portRangeHasBeenSet;

                    /**
                     * Network protocol. UDP and TCP are supported.
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * The rule description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_POLICYRULE_H_
