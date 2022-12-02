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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DBINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DBINFO_H_

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
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Database information
                */
                class DBInfo : public AbstractModel
                {
                public:
                    DBInfo();
                    ~DBInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node role in a distributed database, such as the mongos node in MongoDB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Role Node role in a distributed database, such as the mongos node in MongoDB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Node role in a distributed database, such as the mongos node in MongoDB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Role Node role in a distributed database, such as the mongos node in MongoDB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Kernel version, such as the different kernel versions of MariaDB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbKernel Kernel version, such as the different kernel versions of MariaDB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDbKernel() const;

                    /**
                     * 设置Kernel version, such as the different kernel versions of MariaDB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DbKernel Kernel version, such as the different kernel versions of MariaDB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDbKernel(const std::string& _dbKernel);

                    /**
                     * 判断参数 DbKernel 是否已赋值
                     * @return DbKernel 是否已赋值
                     */
                    bool DbKernelHasBeenSet() const;

                    /**
                     * 获取Instance IP address, which is required for the following access types: public network, Direct Connect, VPN, CCN, intranet, and VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Host Instance IP address, which is required for the following access types: public network, Direct Connect, VPN, CCN, intranet, and VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Instance IP address, which is required for the following access types: public network, Direct Connect, VPN, CCN, intranet, and VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Host Instance IP address, which is required for the following access types: public network, Direct Connect, VPN, CCN, intranet, and VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Instance port, which is required for the following access types: public network, self-build on CVM, Direct Connect, VPN, CCN, intranet, and VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port Instance port, which is required for the following access types: public network, self-build on CVM, Direct Connect, VPN, CCN, intranet, and VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Instance port, which is required for the following access types: public network, self-build on CVM, Direct Connect, VPN, CCN, intranet, and VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Port Instance port, which is required for the following access types: public network, self-build on CVM, Direct Connect, VPN, CCN, intranet, and VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Instance username
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return User Instance username
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Instance username
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param User Instance username
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Instance password
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Password Instance password
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Instance password
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Password Instance password
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Short CVM instance ID in the format of `ins-olgl39y8`, which is required if the access type is `cvm`. It is the same as the instance ID displayed in the CVM console.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CvmInstanceId Short CVM instance ID in the format of `ins-olgl39y8`, which is required if the access type is `cvm`. It is the same as the instance ID displayed in the CVM console.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置Short CVM instance ID in the format of `ins-olgl39y8`, which is required if the access type is `cvm`. It is the same as the instance ID displayed in the CVM console.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CvmInstanceId Short CVM instance ID in the format of `ins-olgl39y8`, which is required if the access type is `cvm`. It is the same as the instance ID displayed in the CVM console.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCvmInstanceId(const std::string& _cvmInstanceId);

                    /**
                     * 判断参数 CvmInstanceId 是否已赋值
                     * @return CvmInstanceId 是否已赋值
                     */
                    bool CvmInstanceIdHasBeenSet() const;

                    /**
                     * 获取VPN gateway ID in the format of `vpngw-9ghexg7q`, which is required if the access type is `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UniqVpnGwId VPN gateway ID in the format of `vpngw-9ghexg7q`, which is required if the access type is `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUniqVpnGwId() const;

                    /**
                     * 设置VPN gateway ID in the format of `vpngw-9ghexg7q`, which is required if the access type is `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UniqVpnGwId VPN gateway ID in the format of `vpngw-9ghexg7q`, which is required if the access type is `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUniqVpnGwId(const std::string& _uniqVpnGwId);

                    /**
                     * 判断参数 UniqVpnGwId 是否已赋值
                     * @return UniqVpnGwId 是否已赋值
                     */
                    bool UniqVpnGwIdHasBeenSet() const;

                    /**
                     * 获取Direct Connect gateway ID in the format of `dcg-0rxtqqxb`, which is required if the access type is `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UniqDcgId Direct Connect gateway ID in the format of `dcg-0rxtqqxb`, which is required if the access type is `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUniqDcgId() const;

                    /**
                     * 设置Direct Connect gateway ID in the format of `dcg-0rxtqqxb`, which is required if the access type is `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UniqDcgId Direct Connect gateway ID in the format of `dcg-0rxtqqxb`, which is required if the access type is `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUniqDcgId(const std::string& _uniqDcgId);

                    /**
                     * 判断参数 UniqDcgId 是否已赋值
                     * @return UniqDcgId 是否已赋值
                     */
                    bool UniqDcgIdHasBeenSet() const;

                    /**
                     * 获取Database instance ID in the format of `cdb-powiqx8q`, which is required if the access type is `cdb`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Database instance ID in the format of `cdb-powiqx8q`, which is required if the access type is `cdb`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Database instance ID in the format of `cdb-powiqx8q`, which is required if the access type is `cdb`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceId Database instance ID in the format of `cdb-powiqx8q`, which is required if the access type is `cdb`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取CCN instance ID such as `ccn-afp6kltc`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CcnGwId CCN instance ID such as `ccn-afp6kltc`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCcnGwId() const;

                    /**
                     * 设置CCN instance ID such as `ccn-afp6kltc`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CcnGwId CCN instance ID such as `ccn-afp6kltc`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCcnGwId(const std::string& _ccnGwId);

                    /**
                     * 判断参数 CcnGwId 是否已赋值
                     * @return CcnGwId 是否已赋值
                     */
                    bool CcnGwIdHasBeenSet() const;

                    /**
                     * 获取VPC ID in the format of `vpc-92jblxto`, which is required if the access type is `vpc`, `vpncloud`, `ccn`, or `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID in the format of `vpc-92jblxto`, which is required if the access type is `vpc`, `vpncloud`, `ccn`, or `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID in the format of `vpc-92jblxto`, which is required if the access type is `vpc`, `vpncloud`, `ccn`, or `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param VpcId VPC ID in the format of `vpc-92jblxto`, which is required if the access type is `vpc`, `vpncloud`, `ccn`, or `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取ID of the subnet in the VPC in the format of `subnet-3paxmkdz`, which is required if the access type is `vpc`, `vpncloud`, `ccn`, or `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId ID of the subnet in the VPC in the format of `subnet-3paxmkdz`, which is required if the access type is `vpc`, `vpncloud`, `ccn`, or `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置ID of the subnet in the VPC in the format of `subnet-3paxmkdz`, which is required if the access type is `vpc`, `vpncloud`, `ccn`, or `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SubnetId ID of the subnet in the VPC in the format of `subnet-3paxmkdz`, which is required if the access type is `vpc`, `vpncloud`, `ccn`, or `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Database version in the format of `5.6` or `5.7`, which takes effect only if the instance is an RDS instance. Default value: `5.6`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineVersion Database version in the format of `5.6` or `5.7`, which takes effect only if the instance is an RDS instance. Default value: `5.6`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置Database version in the format of `5.6` or `5.7`, which takes effect only if the instance is an RDS instance. Default value: `5.6`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EngineVersion Database version in the format of `5.6` or `5.7`, which takes effect only if the instance is an RDS instance. Default value: `5.6`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取Instance account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Account Instance account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置Instance account
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Account Instance account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取The role used for cross-account migration, which can contain [a-zA-Z0-9\-\_]+.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccountRole The role used for cross-account migration, which can contain [a-zA-Z0-9\-\_]+.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAccountRole() const;

                    /**
                     * 设置The role used for cross-account migration, which can contain [a-zA-Z0-9\-\_]+.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AccountRole The role used for cross-account migration, which can contain [a-zA-Z0-9\-\_]+.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAccountRole(const std::string& _accountRole);

                    /**
                     * 判断参数 AccountRole 是否已赋值
                     * @return AccountRole 是否已赋值
                     */
                    bool AccountRoleHasBeenSet() const;

                    /**
                     * 获取The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccountMode The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAccountMode() const;

                    /**
                     * 设置The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AccountMode The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAccountMode(const std::string& _accountMode);

                    /**
                     * 判断参数 AccountMode 是否已赋值
                     * @return AccountMode 是否已赋值
                     */
                    bool AccountModeHasBeenSet() const;

                    /**
                     * 获取ID of the temporary key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TmpSecretId ID of the temporary key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置ID of the temporary key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TmpSecretId ID of the temporary key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTmpSecretId(const std::string& _tmpSecretId);

                    /**
                     * 判断参数 TmpSecretId 是否已赋值
                     * @return TmpSecretId 是否已赋值
                     */
                    bool TmpSecretIdHasBeenSet() const;

                    /**
                     * 获取Key of the temporary key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TmpSecretKey Key of the temporary key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置Key of the temporary key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TmpSecretKey Key of the temporary key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTmpSecretKey(const std::string& _tmpSecretKey);

                    /**
                     * 判断参数 TmpSecretKey 是否已赋值
                     * @return TmpSecretKey 是否已赋值
                     */
                    bool TmpSecretKeyHasBeenSet() const;

                    /**
                     * 获取Temporary token
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TmpToken Temporary token
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTmpToken() const;

                    /**
                     * 设置Temporary token
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TmpToken Temporary token
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTmpToken(const std::string& _tmpToken);

                    /**
                     * 判断参数 TmpToken 是否已赋值
                     * @return TmpToken 是否已赋值
                     */
                    bool TmpTokenHasBeenSet() const;

                private:

                    /**
                     * Node role in a distributed database, such as the mongos node in MongoDB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Kernel version, such as the different kernel versions of MariaDB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbKernel;
                    bool m_dbKernelHasBeenSet;

                    /**
                     * Instance IP address, which is required for the following access types: public network, Direct Connect, VPN, CCN, intranet, and VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Instance port, which is required for the following access types: public network, self-build on CVM, Direct Connect, VPN, CCN, intranet, and VPC.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Instance username
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Instance password
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Short CVM instance ID in the format of `ins-olgl39y8`, which is required if the access type is `cvm`. It is the same as the instance ID displayed in the CVM console.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * VPN gateway ID in the format of `vpngw-9ghexg7q`, which is required if the access type is `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uniqVpnGwId;
                    bool m_uniqVpnGwIdHasBeenSet;

                    /**
                     * Direct Connect gateway ID in the format of `dcg-0rxtqqxb`, which is required if the access type is `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uniqDcgId;
                    bool m_uniqDcgIdHasBeenSet;

                    /**
                     * Database instance ID in the format of `cdb-powiqx8q`, which is required if the access type is `cdb`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * CCN instance ID such as `ccn-afp6kltc`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ccnGwId;
                    bool m_ccnGwIdHasBeenSet;

                    /**
                     * VPC ID in the format of `vpc-92jblxto`, which is required if the access type is `vpc`, `vpncloud`, `ccn`, or `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ID of the subnet in the VPC in the format of `subnet-3paxmkdz`, which is required if the access type is `vpc`, `vpncloud`, `ccn`, or `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Database version in the format of `5.6` or `5.7`, which takes effect only if the instance is an RDS instance. Default value: `5.6`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Instance account
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * The role used for cross-account migration, which can contain [a-zA-Z0-9\-\_]+.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accountRole;
                    bool m_accountRoleHasBeenSet;

                    /**
                     * The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accountMode;
                    bool m_accountModeHasBeenSet;

                    /**
                     * ID of the temporary key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * Key of the temporary key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * Temporary token
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tmpToken;
                    bool m_tmpTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DBINFO_H_
