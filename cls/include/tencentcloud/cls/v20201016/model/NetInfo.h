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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NETINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Splunk delivery task - Configure network information related to the target
                */
                class NetInfo : public AbstractModel
                {
                public:
                    NetInfo();
                    ~NetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network address.
                     * @return Host Network address.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Network address.
                     * @param _host Network address.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Port.
                     * @return Port Port.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Port.
                     * @param _port Port.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Authentication token
                     * @return Token Authentication token
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置Authentication token
                     * @param _token Authentication token
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取Network type; 1: Private network; 2: Public network
                     * @return NetType Network type; 1: Private network; 2: Public network
                     * 
                     */
                    uint64_t GetNetType() const;

                    /**
                     * 设置Network type; 1: Private network; 2: Public network
                     * @param _netType Network type; 1: Private network; 2: Public network
                     * 
                     */
                    void SetNetType(const uint64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取Associated network; If the network type is private network, this field is required.
                     * @return VpcId Associated network; If the network type is private network, this field is required.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Associated network; If the network type is private network, this field is required.
                     * @param _vpcId Associated network; If the network type is private network, this field is required.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Network service type. If the network type is private network, this field is required.
-0: Cloud cvm
-3: Cloud Direct Connect Gateway
-CCN
-1025: Cloud clb
                     * @return VirtualGatewayType Network service type. If the network type is private network, this field is required.
-0: Cloud cvm
-3: Cloud Direct Connect Gateway
-CCN
-1025: Cloud clb
                     * 
                     */
                    uint64_t GetVirtualGatewayType() const;

                    /**
                     * 设置Network service type. If the network type is private network, this field is required.
-0: Cloud cvm
-3: Cloud Direct Connect Gateway
-CCN
-1025: Cloud clb
                     * @param _virtualGatewayType Network service type. If the network type is private network, this field is required.
-0: Cloud cvm
-3: Cloud Direct Connect Gateway
-CCN
-1025: Cloud clb
                     * 
                     */
                    void SetVirtualGatewayType(const uint64_t& _virtualGatewayType);

                    /**
                     * 判断参数 VirtualGatewayType 是否已赋值
                     * @return VirtualGatewayType 是否已赋值
                     * 
                     */
                    bool VirtualGatewayTypeHasBeenSet() const;

                    /**
                     * 获取Authentication mechanism, whether to use SSL, default non-use
                     * @return IsSSL Authentication mechanism, whether to use SSL, default non-use
                     * 
                     */
                    bool GetIsSSL() const;

                    /**
                     * 设置Authentication mechanism, whether to use SSL, default non-use
                     * @param _isSSL Authentication mechanism, whether to use SSL, default non-use
                     * 
                     */
                    void SetIsSSL(const bool& _isSSL);

                    /**
                     * 判断参数 IsSSL 是否已赋值
                     * @return IsSSL 是否已赋值
                     * 
                     */
                    bool IsSSLHasBeenSet() const;

                private:

                    /**
                     * Network address.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Port.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Authentication token
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * Network type; 1: Private network; 2: Public network
                     */
                    uint64_t m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * Associated network; If the network type is private network, this field is required.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Network service type. If the network type is private network, this field is required.
-0: Cloud cvm
-3: Cloud Direct Connect Gateway
-CCN
-1025: Cloud clb
                     */
                    uint64_t m_virtualGatewayType;
                    bool m_virtualGatewayTypeHasBeenSet;

                    /**
                     * Authentication mechanism, whether to use SSL, default non-use
                     */
                    bool m_isSSL;
                    bool m_isSSLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NETINFO_H_
