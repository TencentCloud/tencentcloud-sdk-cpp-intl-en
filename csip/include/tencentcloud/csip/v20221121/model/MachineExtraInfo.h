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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINEEXTRAINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINEEXTRAINFO_H_

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
                * Additional Information on Machine
                */
                class MachineExtraInfo : public AbstractModel
                {
                public:
                    MachineExtraInfo();
                    ~MachineExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Public IP address
                     * @return WanIP Public IP address
                     * 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置Public IP address
                     * @param _wanIP Public IP address
                     * 
                     */
                    void SetWanIP(const std::string& _wanIP);

                    /**
                     * 判断参数 WanIP 是否已赋值
                     * @return WanIP 是否已赋值
                     * 
                     */
                    bool WanIPHasBeenSet() const;

                    /**
                     * 获取Private IP address
                     * @return PrivateIP Private IP address
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置Private IP address
                     * @param _privateIP Private IP address
                     * 
                     */
                    void SetPrivateIP(const std::string& _privateIP);

                    /**
                     * 判断参数 PrivateIP 是否已赋值
                     * @return PrivateIP 是否已赋值
                     * 
                     */
                    bool PrivateIPHasBeenSet() const;

                    /**
                     * 获取Network type: 1-vpc network 2-basic network 3-Non-Tencent Cloud Network
                     * @return NetworkType Network type: 1-vpc network 2-basic network 3-Non-Tencent Cloud Network
                     * 
                     */
                    int64_t GetNetworkType() const;

                    /**
                     * 设置Network type: 1-vpc network 2-basic network 3-Non-Tencent Cloud Network
                     * @param _networkType Network type: 1-vpc network 2-basic network 3-Non-Tencent Cloud Network
                     * 
                     */
                    void SetNetworkType(const int64_t& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return NetworkName VPC ID
                     * 
                     */
                    std::string GetNetworkName() const;

                    /**
                     * 设置VPC ID
                     * @param _networkName VPC ID
                     * 
                     */
                    void SetNetworkName(const std::string& _networkName);

                    /**
                     * 判断参数 NetworkName 是否已赋值
                     * @return NetworkName 是否已赋值
                     * 
                     */
                    bool NetworkNameHasBeenSet() const;

                    /**
                     * 获取CVM instance ID
                     * @return InstanceID CVM instance ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置CVM instance ID
                     * @param _instanceID CVM instance ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取Host name.
                     * @return HostName Host name.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name.
                     * @param _hostName Host name.
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                private:

                    /**
                     * Public IP address
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * Private IP address
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * Network type: 1-vpc network 2-basic network 3-Non-Tencent Cloud Network
                     */
                    int64_t m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_networkName;
                    bool m_networkNameHasBeenSet;

                    /**
                     * CVM instance ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Host name.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINEEXTRAINFO_H_
