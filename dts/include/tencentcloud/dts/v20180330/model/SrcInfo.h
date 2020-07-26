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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SRCINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SRCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * Source instance information
                */
                class SrcInfo : public AbstractModel
                {
                public:
                    SrcInfo();
                    ~SrcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alibaba Cloud AccessKey, which is applicable if the source database is an Alibaba Cloud ApsaraDB for RDS 5.6 instance
                     * @return AccessKey Alibaba Cloud AccessKey, which is applicable if the source database is an Alibaba Cloud ApsaraDB for RDS 5.6 instance
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置Alibaba Cloud AccessKey, which is applicable if the source database is an Alibaba Cloud ApsaraDB for RDS 5.6 instance
                     * @param AccessKey Alibaba Cloud AccessKey, which is applicable if the source database is an Alibaba Cloud ApsaraDB for RDS 5.6 instance
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取Instance IP address
                     * @return Ip Instance IP address
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Instance IP address
                     * @param Ip Instance IP address
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Instance port
                     * @return Port Instance port
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Instance port
                     * @param Port Instance port
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Instance username
                     * @return User Instance username
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Instance username
                     * @param User Instance username
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Instance password
                     * @return Password Instance password
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance password
                     * @param Password Instance password
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Alibaba Cloud ApsaraDB for RDS instance ID, which is applicable if the source database is an Alibaba Cloud ApsaraDB for RDS 5.6/5.7 instance
                     * @return RdsInstanceId Alibaba Cloud ApsaraDB for RDS instance ID, which is applicable if the source database is an Alibaba Cloud ApsaraDB for RDS 5.6/5.7 instance
                     */
                    std::string GetRdsInstanceId() const;

                    /**
                     * 设置Alibaba Cloud ApsaraDB for RDS instance ID, which is applicable if the source database is an Alibaba Cloud ApsaraDB for RDS 5.6/5.7 instance
                     * @param RdsInstanceId Alibaba Cloud ApsaraDB for RDS instance ID, which is applicable if the source database is an Alibaba Cloud ApsaraDB for RDS 5.6/5.7 instance
                     */
                    void SetRdsInstanceId(const std::string& _rdsInstanceId);

                    /**
                     * 判断参数 RdsInstanceId 是否已赋值
                     * @return RdsInstanceId 是否已赋值
                     */
                    bool RdsInstanceIdHasBeenSet() const;

                    /**
                     * 获取Short CVM instance ID in the format of `ins-olgl39y8`. It is the same as the instance ID displayed on the CVM Console page. For CVM-based self-created instances, this field needs to be passed in
                     * @return CvmInstanceId Short CVM instance ID in the format of `ins-olgl39y8`. It is the same as the instance ID displayed on the CVM Console page. For CVM-based self-created instances, this field needs to be passed in
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置Short CVM instance ID in the format of `ins-olgl39y8`. It is the same as the instance ID displayed on the CVM Console page. For CVM-based self-created instances, this field needs to be passed in
                     * @param CvmInstanceId Short CVM instance ID in the format of `ins-olgl39y8`. It is the same as the instance ID displayed on the CVM Console page. For CVM-based self-created instances, this field needs to be passed in
                     */
                    void SetCvmInstanceId(const std::string& _cvmInstanceId);

                    /**
                     * 判断参数 CvmInstanceId 是否已赋值
                     * @return CvmInstanceId 是否已赋值
                     */
                    bool CvmInstanceIdHasBeenSet() const;

                    /**
                     * 获取Direct Connect gateway ID in the format of dcg-0rxtqqxb
                     * @return UniqDcgId Direct Connect gateway ID in the format of dcg-0rxtqqxb
                     */
                    std::string GetUniqDcgId() const;

                    /**
                     * 设置Direct Connect gateway ID in the format of dcg-0rxtqqxb
                     * @param UniqDcgId Direct Connect gateway ID in the format of dcg-0rxtqqxb
                     */
                    void SetUniqDcgId(const std::string& _uniqDcgId);

                    /**
                     * 判断参数 UniqDcgId 是否已赋值
                     * @return UniqDcgId 是否已赋值
                     */
                    bool UniqDcgIdHasBeenSet() const;

                    /**
                     * 获取VPC ID in the format of vpc-92jblxto
                     * @return VpcId VPC ID in the format of vpc-92jblxto
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID in the format of vpc-92jblxto
                     * @param VpcId VPC ID in the format of vpc-92jblxto
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取VPC Subnet ID in the format of subnet-3paxmkdz
                     * @return SubnetId VPC Subnet ID in the format of subnet-3paxmkdz
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC Subnet ID in the format of subnet-3paxmkdz
                     * @param SubnetId VPC Subnet ID in the format of subnet-3paxmkdz
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取VPN gateway ID in the format of vpngw-9ghexg7q
                     * @return UniqVpnGwId VPN gateway ID in the format of vpngw-9ghexg7q
                     */
                    std::string GetUniqVpnGwId() const;

                    /**
                     * 设置VPN gateway ID in the format of vpngw-9ghexg7q
                     * @param UniqVpnGwId VPN gateway ID in the format of vpngw-9ghexg7q
                     */
                    void SetUniqVpnGwId(const std::string& _uniqVpnGwId);

                    /**
                     * 判断参数 UniqVpnGwId 是否已赋值
                     * @return UniqVpnGwId 是否已赋值
                     */
                    bool UniqVpnGwIdHasBeenSet() const;

                    /**
                     * 获取Database instance ID in the format of cdb-powiqx8q
                     * @return InstanceId Database instance ID in the format of cdb-powiqx8q
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Database instance ID in the format of cdb-powiqx8q
                     * @param InstanceId Database instance ID in the format of cdb-powiqx8q
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Region name, such as ap-guangzhou
                     * @return Region Region name, such as ap-guangzhou
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region name, such as ap-guangzhou
                     * @param Region Region name, such as ap-guangzhou
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取For Alibaba Cloud ApsaraDB for RDS instances, enter "aliyun"; otherwise, enter "others"
                     * @return Supplier For Alibaba Cloud ApsaraDB for RDS instances, enter "aliyun"; otherwise, enter "others"
                     */
                    std::string GetSupplier() const;

                    /**
                     * 设置For Alibaba Cloud ApsaraDB for RDS instances, enter "aliyun"; otherwise, enter "others"
                     * @param Supplier For Alibaba Cloud ApsaraDB for RDS instances, enter "aliyun"; otherwise, enter "others"
                     */
                    void SetSupplier(const std::string& _supplier);

                    /**
                     * 判断参数 Supplier 是否已赋值
                     * @return Supplier 是否已赋值
                     */
                    bool SupplierHasBeenSet() const;

                    /**
                     * 获取CCN instance ID, such as ccn-afp6kltc
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CcnId CCN instance ID, such as ccn-afp6kltc
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置CCN instance ID, such as ccn-afp6kltc
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CcnId CCN instance ID, such as ccn-afp6kltc
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取Database version. This parameter is valid only when the instance is an RDS instance. Value: 5.6 or 5.7. Default value: 5.6
                     * @return EngineVersion Database version. This parameter is valid only when the instance is an RDS instance. Value: 5.6 or 5.7. Default value: 5.6
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置Database version. This parameter is valid only when the instance is an RDS instance. Value: 5.6 or 5.7. Default value: 5.6
                     * @param EngineVersion Database version. This parameter is valid only when the instance is an RDS instance. Value: 5.6 or 5.7. Default value: 5.6
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                private:

                    /**
                     * Alibaba Cloud AccessKey, which is applicable if the source database is an Alibaba Cloud ApsaraDB for RDS 5.6 instance
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * Instance IP address
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Instance port
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Instance username
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Instance password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Alibaba Cloud ApsaraDB for RDS instance ID, which is applicable if the source database is an Alibaba Cloud ApsaraDB for RDS 5.6/5.7 instance
                     */
                    std::string m_rdsInstanceId;
                    bool m_rdsInstanceIdHasBeenSet;

                    /**
                     * Short CVM instance ID in the format of `ins-olgl39y8`. It is the same as the instance ID displayed on the CVM Console page. For CVM-based self-created instances, this field needs to be passed in
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * Direct Connect gateway ID in the format of dcg-0rxtqqxb
                     */
                    std::string m_uniqDcgId;
                    bool m_uniqDcgIdHasBeenSet;

                    /**
                     * VPC ID in the format of vpc-92jblxto
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * VPC Subnet ID in the format of subnet-3paxmkdz
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VPN gateway ID in the format of vpngw-9ghexg7q
                     */
                    std::string m_uniqVpnGwId;
                    bool m_uniqVpnGwIdHasBeenSet;

                    /**
                     * Database instance ID in the format of cdb-powiqx8q
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Region name, such as ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * For Alibaba Cloud ApsaraDB for RDS instances, enter "aliyun"; otherwise, enter "others"
                     */
                    std::string m_supplier;
                    bool m_supplierHasBeenSet;

                    /**
                     * CCN instance ID, such as ccn-afp6kltc
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * Database version. This parameter is valid only when the instance is an RDS instance. Value: 5.6 or 5.7. Default value: 5.6
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SRCINFO_H_
