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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_INSTANCEINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_INSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * // InstanceInfo instance details result
type InstanceInfo struct {
	AppID        string `json:"AppId" gorm:"column:appid"`
	Region       string `json:"Region" gorm:"column:region"`
	VPCID        string `json:"VpcId" gorm:"column:vpc_id"`
	SubNetID     string `json:"SubnetId" gorm:"column:subnet_id"`
	InstanceID   string `json:"InstanceId" gorm:"column:instance_id"`
	InstanceName string `json:"InstanceName" gorm:"column:instance_name"`
	//InsType common.CVM 3 is CVM instance, 4 is CLB instance, 5 is ENI instance, 6 is MySQL, 7 is Redis, 8 is NAT, 9 is VPN, 10 is ES, 11 is MariaDB, and 12 is Kafka
	InsType   int    `json:"InsType" gorm:"column:instance_type"`
	PublicIP  string `json:"PublicIp" gorm:"column:public_ip"`
	PrivateIP string `json:"PrivateIp" gorm:"column:ip"`

	// It is not required for rule publishing and is used for frontend display
	PortNum          string `json:"PortNum" gorm:"column:port_num"`
	LeakNum          string `json:"LeakNum" gorm:"column:leak_num"`
	ResourceGroupNum int    `json:"ResourceGroupNum"`
	VPCName          string `json:"VPCName" gorm:"column:VPCName"`
}

                */
                class InstanceInfo : public AbstractModel
                {
                public:
                    InstanceInfo();
                    ~InstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取App ID
                     * @return AppId App ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置App ID
                     * @param _appId App ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取VPC ID
                     * @return VpcId VPC ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
                     * @param _vpcId VPC ID
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
                     * 获取VPC name
                     * @return VPCName VPC name
                     * 
                     */
                    std::string GetVPCName() const;

                    /**
                     * 设置VPC name
                     * @param _vPCName VPC name
                     * 
                     */
                    void SetVPCName(const std::string& _vPCName);

                    /**
                     * 判断参数 VPCName 是否已赋值
                     * @return VPCName 是否已赋值
                     * 
                     */
                    bool VPCNameHasBeenSet() const;

                    /**
                     * 获取Subnet ID
                     * @return SubnetId Subnet ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID
                     * @param _subnetId Subnet ID
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
                     * 获取Asset ID
                     * @return InstanceId Asset ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Asset ID
                     * @param _instanceId Asset ID
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
                     * 获取Asset name
                     * @return InstanceName Asset name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Asset name
                     * @param _instanceName Asset name
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Asset type
 3: CVM instance; 4: CLB instance; 5: ENI instance; 6: MySQL; 7: Redis; 8: NAT; 9: VPN; 10: ES; 11: MariaDB; 12: Kafka; 13: NATFW
                     * @return InsType Asset type
 3: CVM instance; 4: CLB instance; 5: ENI instance; 6: MySQL; 7: Redis; 8: NAT; 9: VPN; 10: ES; 11: MariaDB; 12: Kafka; 13: NATFW
                     * 
                     */
                    int64_t GetInsType() const;

                    /**
                     * 设置Asset type
 3: CVM instance; 4: CLB instance; 5: ENI instance; 6: MySQL; 7: Redis; 8: NAT; 9: VPN; 10: ES; 11: MariaDB; 12: Kafka; 13: NATFW
                     * @param _insType Asset type
 3: CVM instance; 4: CLB instance; 5: ENI instance; 6: MySQL; 7: Redis; 8: NAT; 9: VPN; 10: ES; 11: MariaDB; 12: Kafka; 13: NATFW
                     * 
                     */
                    void SetInsType(const int64_t& _insType);

                    /**
                     * 判断参数 InsType 是否已赋值
                     * @return InsType 是否已赋值
                     * 
                     */
                    bool InsTypeHasBeenSet() const;

                    /**
                     * 获取Public IP
                     * @return PublicIp Public IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置Public IP
                     * @param _publicIp Public IP
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取Private IP
                     * @return PrivateIp Private IP
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置Private IP
                     * @param _privateIp Private IP
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取Number of ports
                     * @return PortNum Number of ports
                     * 
                     */
                    std::string GetPortNum() const;

                    /**
                     * 设置Number of ports
                     * @param _portNum Number of ports
                     * 
                     */
                    void SetPortNum(const std::string& _portNum);

                    /**
                     * 判断参数 PortNum 是否已赋值
                     * @return PortNum 是否已赋值
                     * 
                     */
                    bool PortNumHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities
                     * @return LeakNum Number of vulnerabilities
                     * 
                     */
                    std::string GetLeakNum() const;

                    /**
                     * 设置Number of vulnerabilities
                     * @param _leakNum Number of vulnerabilities
                     * 
                     */
                    void SetLeakNum(const std::string& _leakNum);

                    /**
                     * 判断参数 LeakNum 是否已赋值
                     * @return LeakNum 是否已赋值
                     * 
                     */
                    bool LeakNumHasBeenSet() const;

                    /**
                     * 获取1: public network; 2: private network
                     * @return InsSource 1: public network; 2: private network
                     * 
                     */
                    std::string GetInsSource() const;

                    /**
                     * 设置1: public network; 2: private network
                     * @param _insSource 1: public network; 2: private network
                     * 
                     */
                    void SetInsSource(const std::string& _insSource);

                    /**
                     * 判断参数 InsSource 是否已赋值
                     * @return InsSource 是否已赋值
                     * 
                     */
                    bool InsSourceHasBeenSet() const;

                    /**
                     * 获取[a,b]
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ResourcePath [a,b]
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetResourcePath() const;

                    /**
                     * 设置[a,b]
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _resourcePath [a,b]
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetResourcePath(const std::vector<std::string>& _resourcePath);

                    /**
                     * 判断参数 ResourcePath 是否已赋值
                     * @return ResourcePath 是否已赋值
                     * 
                     */
                    bool ResourcePathHasBeenSet() const;

                private:

                    /**
                     * App ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * VPC ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC name
                     */
                    std::string m_vPCName;
                    bool m_vPCNameHasBeenSet;

                    /**
                     * Subnet ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Asset ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Asset name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Asset type
 3: CVM instance; 4: CLB instance; 5: ENI instance; 6: MySQL; 7: Redis; 8: NAT; 9: VPN; 10: ES; 11: MariaDB; 12: Kafka; 13: NATFW
                     */
                    int64_t m_insType;
                    bool m_insTypeHasBeenSet;

                    /**
                     * Public IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * Private IP
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * Number of ports
                     */
                    std::string m_portNum;
                    bool m_portNumHasBeenSet;

                    /**
                     * Number of vulnerabilities
                     */
                    std::string m_leakNum;
                    bool m_leakNumHasBeenSet;

                    /**
                     * 1: public network; 2: private network
                     */
                    std::string m_insSource;
                    bool m_insSourceHasBeenSet;

                    /**
                     * [a,b]
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_resourcePath;
                    bool m_resourcePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_INSTANCEINFO_H_
