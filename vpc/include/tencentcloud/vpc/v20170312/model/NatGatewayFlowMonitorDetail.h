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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYFLOWMONITORDETAIL_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYFLOWMONITORDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Traffic monitoring details of the NAT gateway.
                */
                class NatGatewayFlowMonitorDetail : public AbstractModel
                {
                public:
                    NatGatewayFlowMonitorDetail();
                    ~NatGatewayFlowMonitorDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source `IP` address.
                     * @return PrivateIpAddress Source `IP` address.
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置Source `IP` address.
                     * @param _privateIpAddress Source `IP` address.
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取Number of inbound packets.
                     * @return InPkg Number of inbound packets.
                     * 
                     */
                    uint64_t GetInPkg() const;

                    /**
                     * 设置Number of inbound packets.
                     * @param _inPkg Number of inbound packets.
                     * 
                     */
                    void SetInPkg(const uint64_t& _inPkg);

                    /**
                     * 判断参数 InPkg 是否已赋值
                     * @return InPkg 是否已赋值
                     * 
                     */
                    bool InPkgHasBeenSet() const;

                    /**
                     * 获取Number of outbound packets.
                     * @return OutPkg Number of outbound packets.
                     * 
                     */
                    uint64_t GetOutPkg() const;

                    /**
                     * 设置Number of outbound packets.
                     * @param _outPkg Number of outbound packets.
                     * 
                     */
                    void SetOutPkg(const uint64_t& _outPkg);

                    /**
                     * 判断参数 OutPkg 是否已赋值
                     * @return OutPkg 是否已赋值
                     * 
                     */
                    bool OutPkgHasBeenSet() const;

                    /**
                     * 获取Inbound traffic. Unit: `bytes`.
                     * @return InTraffic Inbound traffic. Unit: `bytes`.
                     * 
                     */
                    uint64_t GetInTraffic() const;

                    /**
                     * 设置Inbound traffic. Unit: `bytes`.
                     * @param _inTraffic Inbound traffic. Unit: `bytes`.
                     * 
                     */
                    void SetInTraffic(const uint64_t& _inTraffic);

                    /**
                     * 判断参数 InTraffic 是否已赋值
                     * @return InTraffic 是否已赋值
                     * 
                     */
                    bool InTrafficHasBeenSet() const;

                    /**
                     * 获取Outbound traffic. Unit: `bytes`.
                     * @return OutTraffic Outbound traffic. Unit: `bytes`.
                     * 
                     */
                    uint64_t GetOutTraffic() const;

                    /**
                     * 设置Outbound traffic. Unit: `bytes`.
                     * @param _outTraffic Outbound traffic. Unit: `bytes`.
                     * 
                     */
                    void SetOutTraffic(const uint64_t& _outTraffic);

                    /**
                     * 判断参数 OutTraffic 是否已赋值
                     * @return OutTraffic 是否已赋值
                     * 
                     */
                    bool OutTrafficHasBeenSet() const;

                    /**
                     * 获取Number of concurrent connections. Only standard NAT gateways support this parameter.
                     * @return ConcurrentConnectionCount Number of concurrent connections. Only standard NAT gateways support this parameter.
                     * 
                     */
                    uint64_t GetConcurrentConnectionCount() const;

                    /**
                     * 设置Number of concurrent connections. Only standard NAT gateways support this parameter.
                     * @param _concurrentConnectionCount Number of concurrent connections. Only standard NAT gateways support this parameter.
                     * 
                     */
                    void SetConcurrentConnectionCount(const uint64_t& _concurrentConnectionCount);

                    /**
                     * 判断参数 ConcurrentConnectionCount 是否已赋值
                     * @return ConcurrentConnectionCount 是否已赋值
                     * 
                     */
                    bool ConcurrentConnectionCountHasBeenSet() const;

                    /**
                     * 获取New connection rate. Only standard NAT gateways support this parameter.
                     * @return NewConnectionRate New connection rate. Only standard NAT gateways support this parameter.
                     * 
                     */
                    uint64_t GetNewConnectionRate() const;

                    /**
                     * 设置New connection rate. Only standard NAT gateways support this parameter.
                     * @param _newConnectionRate New connection rate. Only standard NAT gateways support this parameter.
                     * 
                     */
                    void SetNewConnectionRate(const uint64_t& _newConnectionRate);

                    /**
                     * 判断参数 NewConnectionRate 是否已赋值
                     * @return NewConnectionRate 是否已赋值
                     * 
                     */
                    bool NewConnectionRateHasBeenSet() const;

                private:

                    /**
                     * Source `IP` address.
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * Number of inbound packets.
                     */
                    uint64_t m_inPkg;
                    bool m_inPkgHasBeenSet;

                    /**
                     * Number of outbound packets.
                     */
                    uint64_t m_outPkg;
                    bool m_outPkgHasBeenSet;

                    /**
                     * Inbound traffic. Unit: `bytes`.
                     */
                    uint64_t m_inTraffic;
                    bool m_inTrafficHasBeenSet;

                    /**
                     * Outbound traffic. Unit: `bytes`.
                     */
                    uint64_t m_outTraffic;
                    bool m_outTrafficHasBeenSet;

                    /**
                     * Number of concurrent connections. Only standard NAT gateways support this parameter.
                     */
                    uint64_t m_concurrentConnectionCount;
                    bool m_concurrentConnectionCountHasBeenSet;

                    /**
                     * New connection rate. Only standard NAT gateways support this parameter.
                     */
                    uint64_t m_newConnectionRate;
                    bool m_newConnectionRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYFLOWMONITORDETAIL_H_
