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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MACHINEEXTRAINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MACHINEEXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Server Basic Information
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WanIP Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWanIP() const;

                    /**
                     * 设置Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wanIP Public IP address
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivateIP Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _privateIP Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Network Type. 1: VPC network; 2: Basic Network; 3: Non-Tencent Cloud Network
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetworkType Network Type. 1: VPC network; 2: Basic Network; 3: Non-Tencent Cloud Network
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNetworkType() const;

                    /**
                     * 设置Network Type. 1: VPC network; 2: Basic Network; 3: Non-Tencent Cloud Network
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _networkType Network Type. 1: VPC network; 2: Basic Network; 3: Non-Tencent Cloud Network
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Network Name, returns vpc_id in the case of a VPC network
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NetworkName Network Name, returns vpc_id in the case of a VPC network
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNetworkName() const;

                    /**
                     * 设置Network Name, returns vpc_id in the case of a VPC network
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _networkName Network Name, returns vpc_id in the case of a VPC network
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceID Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceID Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostName Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostName Host name
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wanIP;
                    bool m_wanIPHasBeenSet;

                    /**
                     * Private IP address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * Network Type. 1: VPC network; 2: Basic Network; 3: Non-Tencent Cloud Network
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * Network Name, returns vpc_id in the case of a VPC network
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_networkName;
                    bool m_networkNameHasBeenSet;

                    /**
                     * Instance ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * Host name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MACHINEEXTRAINFO_H_
