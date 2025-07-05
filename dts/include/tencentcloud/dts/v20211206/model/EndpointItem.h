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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINTITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/KeyValuePairOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Instance node information of data subscription
                */
                class EndpointItem : public AbstractModel
                {
                public:
                    EndpointItem();
                    ~EndpointItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region of the source database. If AccessType is ccn, please fill in the region where vpc is located because the region of the source database is unknown. For other access methods, please fill in the region where the subscription task is located, as ensuring the subscription task and the source database are in the same region is the optimal network solution.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatabaseRegion Region of the source database. If AccessType is ccn, please fill in the region where vpc is located because the region of the source database is unknown. For other access methods, please fill in the region where the subscription task is located, as ensuring the subscription task and the source database are in the same region is the optimal network solution.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabaseRegion() const;

                    /**
                     * 设置Region of the source database. If AccessType is ccn, please fill in the region where vpc is located because the region of the source database is unknown. For other access methods, please fill in the region where the subscription task is located, as ensuring the subscription task and the source database are in the same region is the optimal network solution.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _databaseRegion Region of the source database. If AccessType is ccn, please fill in the region where vpc is located because the region of the source database is unknown. For other access methods, please fill in the region where the subscription task is located, as ensuring the subscription task and the source database are in the same region is the optimal network solution.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabaseRegion(const std::string& _databaseRegion);

                    /**
                     * 判断参数 DatabaseRegion 是否已赋值
                     * @return DatabaseRegion 是否已赋值
                     * 
                     */
                    bool DatabaseRegionHasBeenSet() const;

                    /**
                     * 获取UsernameNote: This field may return null, indicating that no valid values can be obtained.
                     * @return User UsernameNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置UsernameNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _user UsernameNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Password. It is required when used as an input parameter and empty when used as an output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Password Password. It is required when used as an input parameter and empty when used as an output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password. It is required when used as an input parameter and empty when used as an output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _password Password. It is required when used as an input parameter and empty when used as an output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Target instance ID. This field is required when AccessType is cdb. When configuring the InstanceId, the instance information is queried and checked. The mysql query interface has been authenticated. Please ensure that the sub-user has the cdb:DescribeDBInstances interface permission.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Target instance ID. This field is required when AccessType is cdb. When configuring the InstanceId, the instance information is queried and checked. The mysql query interface has been authenticated. Please ensure that the sub-user has the cdb:DescribeDBInstances interface permission.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Target instance ID. This field is required when AccessType is cdb. When configuring the InstanceId, the instance information is queried and checked. The mysql query interface has been authenticated. Please ensure that the sub-user has the cdb:DescribeDBInstances interface permission.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Target instance ID. This field is required when AccessType is cdb. When configuring the InstanceId, the instance information is queried and checked. The mysql query interface has been authenticated. Please ensure that the sub-user has the cdb:DescribeDBInstances interface permission.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cloud Virtual Machine ID. This field is required when AccessType is cvm.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CvmInstanceId Cloud Virtual Machine ID. This field is required when AccessType is cvm.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置Cloud Virtual Machine ID. This field is required when AccessType is cvm.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cvmInstanceId Cloud Virtual Machine ID. This field is required when AccessType is cvm.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCvmInstanceId(const std::string& _cvmInstanceId);

                    /**
                     * 判断参数 CvmInstanceId 是否已赋值
                     * @return CvmInstanceId 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdHasBeenSet() const;

                    /**
                     * 获取Direct Connect gateway ID. This field is required when AccessType is dcg.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UniqDcgId Direct Connect gateway ID. This field is required when AccessType is dcg.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUniqDcgId() const;

                    /**
                     * 设置Direct Connect gateway ID. This field is required when AccessType is dcg.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uniqDcgId Direct Connect gateway ID. This field is required when AccessType is dcg.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUniqDcgId(const std::string& _uniqDcgId);

                    /**
                     * 判断参数 UniqDcgId 是否已赋值
                     * @return UniqDcgId 是否已赋值
                     * 
                     */
                    bool UniqDcgIdHasBeenSet() const;

                    /**
                     * 获取Cloud Connect Network ID. This field is required when AccessType is ccn.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CcnId Cloud Connect Network ID. This field is required when AccessType is ccn.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置Cloud Connect Network ID. This field is required when AccessType is ccn.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ccnId Cloud Connect Network ID. This field is required when AccessType is ccn.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取VPN gateway ID. This field is required when AccessType is vpncloud.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UniqVpnGwId VPN gateway ID. This field is required when AccessType is vpncloud.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUniqVpnGwId() const;

                    /**
                     * 设置VPN gateway ID. This field is required when AccessType is vpncloud.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uniqVpnGwId VPN gateway ID. This field is required when AccessType is vpncloud.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUniqVpnGwId(const std::string& _uniqVpnGwId);

                    /**
                     * 判断参数 UniqVpnGwId 是否已赋值
                     * @return UniqVpnGwId 是否已赋值
                     * 
                     */
                    bool UniqVpnGwIdHasBeenSet() const;

                    /**
                     * 获取VpcID. This field is required when AccessType is dcg\ccn\vpncloud\vpc.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VpcID. This field is required when AccessType is dcg\ccn\vpncloud\vpc.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VpcID. This field is required when AccessType is dcg\ccn\vpncloud\vpc.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId VpcID. This field is required when AccessType is dcg\ccn\vpncloud\vpc.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Subnet ID. This field is required when AccessType is dcg\ccn\vpncloud\vpc.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId Subnet ID. This field is required when AccessType is dcg\ccn\vpncloud\vpc.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet ID. This field is required when AccessType is dcg\ccn\vpncloud\vpc.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetId Subnet ID. This field is required when AccessType is dcg\ccn\vpncloud\vpc.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Database address, supports domain name and IP. This field is required when AccessType is dcg\ccn\vpncloud\vpc\extranet\intranet.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostName Database address, supports domain name and IP. This field is required when AccessType is dcg\ccn\vpncloud\vpc\extranet\intranet.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置Database address, supports domain name and IP. This field is required when AccessType is dcg\ccn\vpncloud\vpc\extranet\intranet.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostName Database address, supports domain name and IP. This field is required when AccessType is dcg\ccn\vpncloud\vpc\extranet\intranet.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Database port. This field is required when AccessType is dcg\ccn\vpncloud\vpc\extranet\intranet\cvm.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port Database port. This field is required when AccessType is dcg\ccn\vpncloud\vpc\extranet\intranet\cvm.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Database port. This field is required when AccessType is dcg\ccn\vpncloud\vpc\extranet\intranet\cvm.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _port Database port. This field is required when AccessType is dcg\ccn\vpncloud\vpc\extranet\intranet\cvm.Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to use encrypted transmission. Valid values: UnEncrypted; Encrypted. Only mysql supports it. If it is not filled in, it will not be encrypted by default. Other products do not need to fill in this.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EncryptConn Whether to use encrypted transmission. Valid values: UnEncrypted; Encrypted. Only mysql supports it. If it is not filled in, it will not be encrypted by default. Other products do not need to fill in this.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEncryptConn() const;

                    /**
                     * 设置Whether to use encrypted transmission. Valid values: UnEncrypted; Encrypted. Only mysql supports it. If it is not filled in, it will not be encrypted by default. Other products do not need to fill in this.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _encryptConn Whether to use encrypted transmission. Valid values: UnEncrypted; Encrypted. Only mysql supports it. If it is not filled in, it will not be encrypted by default. Other products do not need to fill in this.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEncryptConn(const std::string& _encryptConn);

                    /**
                     * 判断参数 EncryptConn 是否已赋值
                     * @return EncryptConn 是否已赋值
                     * 
                     */
                    bool EncryptConnHasBeenSet() const;

                    /**
                     * 获取Database network environment. This field is required when AccessType is ccn. Valid values: UserIDC; TencentVPC; Aws; AliYun; Others.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatabaseNetEnv Database network environment. This field is required when AccessType is ccn. Valid values: UserIDC; TencentVPC; Aws; AliYun; Others.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabaseNetEnv() const;

                    /**
                     * 设置Database network environment. This field is required when AccessType is ccn. Valid values: UserIDC; TencentVPC; Aws; AliYun; Others.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _databaseNetEnv Database network environment. This field is required when AccessType is ccn. Valid values: UserIDC; TencentVPC; Aws; AliYun; Others.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabaseNetEnv(const std::string& _databaseNetEnv);

                    /**
                     * 判断参数 DatabaseNetEnv 是否已赋值
                     * @return DatabaseNetEnv 是否已赋值
                     * 
                     */
                    bool DatabaseNetEnvHasBeenSet() const;

                    /**
                     * 获取The UIN of the main account to which the Cloud Connect Network gateway belongs. It is required for cross-account CCN.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CcnOwnerUin The UIN of the main account to which the Cloud Connect Network gateway belongs. It is required for cross-account CCN.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCcnOwnerUin() const;

                    /**
                     * 设置The UIN of the main account to which the Cloud Connect Network gateway belongs. It is required for cross-account CCN.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ccnOwnerUin The UIN of the main account to which the Cloud Connect Network gateway belongs. It is required for cross-account CCN.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCcnOwnerUin(const std::string& _ccnOwnerUin);

                    /**
                     * 判断参数 CcnOwnerUin 是否已赋值
                     * @return CcnOwnerUin 是否已赋值
                     * 
                     */
                    bool CcnOwnerUinHasBeenSet() const;

                    /**
                     * 获取Additional information added for the business. Parameter name is called key, parameter value is called value. Mandatory parameters for tdpg: PgDatabase (subscribed database name).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtraAttr Additional information added for the business. Parameter name is called key, parameter value is called value. Mandatory parameters for tdpg: PgDatabase (subscribed database name).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KeyValuePairOption> GetExtraAttr() const;

                    /**
                     * 设置Additional information added for the business. Parameter name is called key, parameter value is called value. Mandatory parameters for tdpg: PgDatabase (subscribed database name).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extraAttr Additional information added for the business. Parameter name is called key, parameter value is called value. Mandatory parameters for tdpg: PgDatabase (subscribed database name).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtraAttr(const std::vector<KeyValuePairOption>& _extraAttr);

                    /**
                     * 判断参数 ExtraAttr 是否已赋值
                     * @return ExtraAttr 是否已赋值
                     * 
                     */
                    bool ExtraAttrHasBeenSet() const;

                    /**
                     * 获取
                     * @return ChildInstanceId 
                     * 
                     */
                    std::string GetChildInstanceId() const;

                    /**
                     * 设置
                     * @param _childInstanceId 
                     * 
                     */
                    void SetChildInstanceId(const std::string& _childInstanceId);

                    /**
                     * 判断参数 ChildInstanceId 是否已赋值
                     * @return ChildInstanceId 是否已赋值
                     * 
                     */
                    bool ChildInstanceIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ChildInstanceType 
                     * 
                     */
                    std::string GetChildInstanceType() const;

                    /**
                     * 设置
                     * @param _childInstanceType 
                     * 
                     */
                    void SetChildInstanceType(const std::string& _childInstanceType);

                    /**
                     * 判断参数 ChildInstanceType 是否已赋值
                     * @return ChildInstanceType 是否已赋值
                     * 
                     */
                    bool ChildInstanceTypeHasBeenSet() const;

                private:

                    /**
                     * Region of the source database. If AccessType is ccn, please fill in the region where vpc is located because the region of the source database is unknown. For other access methods, please fill in the region where the subscription task is located, as ensuring the subscription task and the source database are in the same region is the optimal network solution.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_databaseRegion;
                    bool m_databaseRegionHasBeenSet;

                    /**
                     * UsernameNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Password. It is required when used as an input parameter and empty when used as an output parameter.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Target instance ID. This field is required when AccessType is cdb. When configuring the InstanceId, the instance information is queried and checked. The mysql query interface has been authenticated. Please ensure that the sub-user has the cdb:DescribeDBInstances interface permission.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Cloud Virtual Machine ID. This field is required when AccessType is cvm.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * Direct Connect gateway ID. This field is required when AccessType is dcg.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uniqDcgId;
                    bool m_uniqDcgIdHasBeenSet;

                    /**
                     * Cloud Connect Network ID. This field is required when AccessType is ccn.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * VPN gateway ID. This field is required when AccessType is vpncloud.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uniqVpnGwId;
                    bool m_uniqVpnGwIdHasBeenSet;

                    /**
                     * VpcID. This field is required when AccessType is dcg\ccn\vpncloud\vpc.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID. This field is required when AccessType is dcg\ccn\vpncloud\vpc.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Database address, supports domain name and IP. This field is required when AccessType is dcg\ccn\vpncloud\vpc\extranet\intranet.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Database port. This field is required when AccessType is dcg\ccn\vpncloud\vpc\extranet\intranet\cvm.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Whether to use encrypted transmission. Valid values: UnEncrypted; Encrypted. Only mysql supports it. If it is not filled in, it will not be encrypted by default. Other products do not need to fill in this.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_encryptConn;
                    bool m_encryptConnHasBeenSet;

                    /**
                     * Database network environment. This field is required when AccessType is ccn. Valid values: UserIDC; TencentVPC; Aws; AliYun; Others.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_databaseNetEnv;
                    bool m_databaseNetEnvHasBeenSet;

                    /**
                     * The UIN of the main account to which the Cloud Connect Network gateway belongs. It is required for cross-account CCN.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ccnOwnerUin;
                    bool m_ccnOwnerUinHasBeenSet;

                    /**
                     * Additional information added for the business. Parameter name is called key, parameter value is called value. Mandatory parameters for tdpg: PgDatabase (subscribed database name).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KeyValuePairOption> m_extraAttr;
                    bool m_extraAttrHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_childInstanceId;
                    bool m_childInstanceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_childInstanceType;
                    bool m_childInstanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINTITEM_H_
