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

#ifndef TENCENTCLOUD_CTSDB_V20230202_MODEL_NETWORK_H_
#define TENCENTCLOUD_CTSDB_V20230202_MODEL_NETWORK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctsdb
    {
        namespace V20230202
        {
            namespace Model
            {
                /**
                * Instance network information (influxdb).
                */
                class Network : public AbstractModel
                {
                public:
                    Network();
                    ~Network() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId vpc id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId vpc id
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取vpc subnet id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId vpc subnet id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置vpc subnet id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetId vpc subnet id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取VPC IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VIP VPC IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVIP() const;

                    /**
                     * 设置VPC IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vIP VPC IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVIP(const std::string& _vIP);

                    /**
                     * 判断参数 VIP 是否已赋值
                     * @return VIP 是否已赋值
                     * 
                     */
                    bool VIPHasBeenSet() const;

                    /**
                     * 获取VPC port address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port VPC port address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置VPC port address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _port VPC port address.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * vpc id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc subnet id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VPC IP address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vIP;
                    bool m_vIPHasBeenSet;

                    /**
                     * VPC port address.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTSDB_V20230202_MODEL_NETWORK_H_
