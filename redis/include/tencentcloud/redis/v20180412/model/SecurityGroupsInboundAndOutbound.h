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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_SECURITYGROUPSINBOUNDANDOUTBOUND_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_SECURITYGROUPSINBOUNDANDOUTBOUND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Security group inbound/outbound rules
                */
                class SecurityGroupsInboundAndOutbound : public AbstractModel
                {
                public:
                    SecurityGroupsInboundAndOutbound();
                    ~SecurityGroupsInboundAndOutbound() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Action to be executed
                     * @return Action Action to be executed
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action to be executed
                     * @param _action Action to be executed
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
                     * 获取IP addresses
                     * @return Ip IP addresses
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP addresses
                     * @param _ip IP addresses
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Port number
                     * @return Port Port number
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port number
                     * @param _port Port number
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Protocol type
                     * @return Proto Protocol type
                     * 
                     */
                    std::string GetProto() const;

                    /**
                     * 设置Protocol type
                     * @param _proto Protocol type
                     * 
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     * 
                     */
                    bool ProtoHasBeenSet() const;

                private:

                    /**
                     * Action to be executed
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * IP addresses
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Port number
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Protocol type
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_SECURITYGROUPSINBOUNDANDOUTBOUND_H_
