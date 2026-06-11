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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ESINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ESINFO_H_

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
                * es cluster configuration
                */
                class EsInfo : public AbstractModel
                {
                public:
                    EsInfo();
                    ~EsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ES Types. 1: Cloud ES, 2: Self-build ES.
                     * @return EsType ES Types. 1: Cloud ES, 2: Self-build ES.
                     * 
                     */
                    uint64_t GetEsType() const;

                    /**
                     * 设置ES Types. 1: Cloud ES, 2: Self-build ES.
                     * @param _esType ES Types. 1: Cloud ES, 2: Self-build ES.
                     * 
                     */
                    void SetEsType(const uint64_t& _esType);

                    /**
                     * 判断参数 EsType 是否已赋值
                     * @return EsType 是否已赋值
                     * 
                     */
                    bool EsTypeHasBeenSet() const;

                    /**
                     * 获取Access method 1: private network, 2: public network. Self-built ES required.
                     * @return AccessMode Access method 1: private network, 2: public network. Self-built ES required.
                     * 
                     */
                    uint64_t GetAccessMode() const;

                    /**
                     * 设置Access method 1: private network, 2: public network. Self-built ES required.
                     * @param _accessMode Access method 1: private network, 2: public network. Self-built ES required.
                     * 
                     */
                    void SetAccessMode(const uint64_t& _accessMode);

                    /**
                     * 判断参数 AccessMode 是否已赋值
                     * @return AccessMode 是否已赋值
                     * 
                     */
                    bool AccessModeHasBeenSet() const;

                    /**
                     * 获取Instance id. Required for es instance.
                     * @return InstanceId Instance id. Required for es instance.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance id. Required for es instance.
                     * @param _instanceId Instance id. Required for es instance.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Username.
                     * @return User Username.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Username.
                     * @param _user Username.
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Access address. Self-built ES required.
                     * @return Address Access address. Self-built ES required.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Access address. Self-built ES required.
                     * @param _address Access address. Self-built ES required.
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Access port. Self-built ES required.
                     * @return Port Access port. Self-built ES required.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Access port. Self-built ES required.
                     * @param _port Access port. Self-built ES required.
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
                     * 获取Network. Required when accessing self-built ES via private network.
                     * @return VpcId Network. Required when accessing self-built ES via private network.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Network. Required when accessing self-built ES via private network.
                     * @param _vpcId Network. Required when accessing self-built ES via private network.
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
                     * 获取Network service type. Required when accessing a self-built ES via private network.
CLB:1025 Cloud Virtual Machine (CVM):0
                     * @return VirtualGatewayType Network service type. Required when accessing a self-built ES via private network.
CLB:1025 Cloud Virtual Machine (CVM):0
                     * 
                     */
                    uint64_t GetVirtualGatewayType() const;

                    /**
                     * 设置Network service type. Required when accessing a self-built ES via private network.
CLB:1025 Cloud Virtual Machine (CVM):0
                     * @param _virtualGatewayType Network service type. Required when accessing a self-built ES via private network.
CLB:1025 Cloud Virtual Machine (CVM):0
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
                     * 获取Password.
                     * @return Password Password.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password.
                     * @param _password Password.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * ES Types. 1: Cloud ES, 2: Self-build ES.
                     */
                    uint64_t m_esType;
                    bool m_esTypeHasBeenSet;

                    /**
                     * Access method 1: private network, 2: public network. Self-built ES required.
                     */
                    uint64_t m_accessMode;
                    bool m_accessModeHasBeenSet;

                    /**
                     * Instance id. Required for es instance.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Username.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Access address. Self-built ES required.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Access port. Self-built ES required.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Network. Required when accessing self-built ES via private network.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Network service type. Required when accessing a self-built ES via private network.
CLB:1025 Cloud Virtual Machine (CVM):0
                     */
                    uint64_t m_virtualGatewayType;
                    bool m_virtualGatewayTypeHasBeenSet;

                    /**
                     * Password.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ESINFO_H_
