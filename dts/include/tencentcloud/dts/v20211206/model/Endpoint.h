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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINT_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINT_H_

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
                * Information of the source and target databases in data sync
                */
                class Endpoint : public AbstractModel
                {
                public:
                    Endpoint();
                    ~Endpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region name, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Region name, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region name, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Region name, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Node type of TDSQL for MySQL. Enumerated values: `proxy`, `set`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Role Node type of TDSQL for MySQL. Enumerated values: `proxy`, `set`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Node type of TDSQL for MySQL. Enumerated values: `proxy`, `set`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _role Node type of TDSQL for MySQL. Enumerated values: `proxy`, `set`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Database kernel type, which is used to distinguish between different kernels in TDSQL. Valid values: `percona`, `mariadb`, `mysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbKernel Database kernel type, which is used to distinguish between different kernels in TDSQL. Valid values: `percona`, `mariadb`, `mysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbKernel() const;

                    /**
                     * 设置Database kernel type, which is used to distinguish between different kernels in TDSQL. Valid values: `percona`, `mariadb`, `mysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbKernel Database kernel type, which is used to distinguish between different kernels in TDSQL. Valid values: `percona`, `mariadb`, `mysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDbKernel(const std::string& _dbKernel);

                    /**
                     * 判断参数 DbKernel 是否已赋值
                     * @return DbKernel 是否已赋值
                     * 
                     */
                    bool DbKernelHasBeenSet() const;

                    /**
                     * 获取Database instance ID in the format of `cdb-powiqx8q`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceId Database instance ID in the format of `cdb-powiqx8q`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Database instance ID in the format of `cdb-powiqx8q`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceId Database instance ID in the format of `cdb-powiqx8q`
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance IP address, which is required if the access type is not `cdb`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Ip Instance IP address, which is required if the access type is not `cdb`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Instance IP address, which is required if the access type is not `cdb`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ip Instance IP address, which is required if the access type is not `cdb`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Instance port, which is required if the access type is not `cdb`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port Instance port, which is required if the access type is not `cdb`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Instance port, which is required if the access type is not `cdb`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _port Instance port, which is required if the access type is not `cdb`.
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

                    /**
                     * 获取Username, which is required for an instance authenticated by username and password.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return User Username, which is required for an instance authenticated by username and password.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Username, which is required for an instance authenticated by username and password.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _user Username, which is required for an instance authenticated by username and password.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Password, which is required for an instance authenticated by username and password.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Password Password, which is required for an instance authenticated by username and password.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password, which is required for an instance authenticated by username and password.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _password Password, which is required for an instance authenticated by username and password.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Database name, which is required if the database type is `cdwpg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DbName Database name, which is required if the database type is `cdwpg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name, which is required if the database type is `cdwpg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dbName Database name, which is required if the database type is `cdwpg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取VPC ID in the format of `vpc-92jblxto`, which is required if the access type is `vpc`, `dcg`, or `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId VPC ID in the format of `vpc-92jblxto`, which is required if the access type is `vpc`, `dcg`, or `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID in the format of `vpc-92jblxto`, which is required if the access type is `vpc`, `dcg`, or `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId VPC ID in the format of `vpc-92jblxto`, which is required if the access type is `vpc`, `dcg`, or `vpncloud`.
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
                     * 获取ID of the subnet in the VPC in the format of `subnet-3paxmkdz`, which is required if the access type is `vpc`, `dcg`, or `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId ID of the subnet in the VPC in the format of `subnet-3paxmkdz`, which is required if the access type is `vpc`, `dcg`, or `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置ID of the subnet in the VPC in the format of `subnet-3paxmkdz`, which is required if the access type is `vpc`, `dcg`, or `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subnetId ID of the subnet in the VPC in the format of `subnet-3paxmkdz`, which is required if the access type is `vpc`, `dcg`, or `vpncloud`.
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
                     * 获取Short CVM instance ID in the format of `ins-olgl39y8`, which is required if the access type is `cvm`. It is the same as the instance ID displayed in the CVM console.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CvmInstanceId Short CVM instance ID in the format of `ins-olgl39y8`, which is required if the access type is `cvm`. It is the same as the instance ID displayed in the CVM console.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置Short CVM instance ID in the format of `ins-olgl39y8`, which is required if the access type is `cvm`. It is the same as the instance ID displayed in the CVM console.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cvmInstanceId Short CVM instance ID in the format of `ins-olgl39y8`, which is required if the access type is `cvm`. It is the same as the instance ID displayed in the CVM console.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Direct Connect gateway ID in the format of `dcg-0rxtqqxb`, which is required if the access type is `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UniqDcgId Direct Connect gateway ID in the format of `dcg-0rxtqqxb`, which is required if the access type is `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUniqDcgId() const;

                    /**
                     * 设置Direct Connect gateway ID in the format of `dcg-0rxtqqxb`, which is required if the access type is `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uniqDcgId Direct Connect gateway ID in the format of `dcg-0rxtqqxb`, which is required if the access type is `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取VPN gateway ID in the format of `vpngw-9ghexg7q`, which is required if the access type is `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UniqVpnGwId VPN gateway ID in the format of `vpngw-9ghexg7q`, which is required if the access type is `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUniqVpnGwId() const;

                    /**
                     * 设置VPN gateway ID in the format of `vpngw-9ghexg7q`, which is required if the access type is `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uniqVpnGwId VPN gateway ID in the format of `vpngw-9ghexg7q`, which is required if the access type is `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取CCN instance ID in the format of `ccn-afp6kltc`, which is required if the access type is `ccn`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CcnId CCN instance ID in the format of `ccn-afp6kltc`, which is required if the access type is `ccn`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置CCN instance ID in the format of `ccn-afp6kltc`, which is required if the access type is `ccn`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ccnId CCN instance ID in the format of `ccn-afp6kltc`, which is required if the access type is `ccn`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cloud vendor type. For Alibaba Cloud ApsaraDB for RDS instances, enter `aliyun`; otherwise, enter `others`. Default value: `others`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Supplier Cloud vendor type. For Alibaba Cloud ApsaraDB for RDS instances, enter `aliyun`; otherwise, enter `others`. Default value: `others`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSupplier() const;

                    /**
                     * 设置Cloud vendor type. For Alibaba Cloud ApsaraDB for RDS instances, enter `aliyun`; otherwise, enter `others`. Default value: `others`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _supplier Cloud vendor type. For Alibaba Cloud ApsaraDB for RDS instances, enter `aliyun`; otherwise, enter `others`. Default value: `others`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSupplier(const std::string& _supplier);

                    /**
                     * 判断参数 Supplier 是否已赋值
                     * @return Supplier 是否已赋值
                     * 
                     */
                    bool SupplierHasBeenSet() const;

                    /**
                     * 获取Database version in the format of `5.6` or `5.7`, which takes effect only if the instance is an RDS instance. Default value: `5.6`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EngineVersion Database version in the format of `5.6` or `5.7`, which takes effect only if the instance is an RDS instance. Default value: `5.6`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置Database version in the format of `5.6` or `5.7`, which takes effect only if the instance is an RDS instance. Default value: `5.6`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _engineVersion Database version in the format of `5.6` or `5.7`, which takes effect only if the instance is an RDS instance. Default value: `5.6`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取Instance account, which is required if the operation is performed across accounts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Account Instance account, which is required if the operation is performed across accounts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置Instance account, which is required if the operation is performed across accounts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _account Instance account, which is required if the operation is performed across accounts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccountMode The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccountMode() const;

                    /**
                     * 设置The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accountMode The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccountMode(const std::string& _accountMode);

                    /**
                     * 判断参数 AccountMode 是否已赋值
                     * @return AccountMode 是否已赋值
                     * 
                     */
                    bool AccountModeHasBeenSet() const;

                    /**
                     * 获取The role used for cross-account sync, which can contain [a-zA-Z0-9\-\_]+ and is required if the operation is performed across accounts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccountRole The role used for cross-account sync, which can contain [a-zA-Z0-9\-\_]+ and is required if the operation is performed across accounts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccountRole() const;

                    /**
                     * 设置The role used for cross-account sync, which can contain [a-zA-Z0-9\-\_]+ and is required if the operation is performed across accounts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accountRole The role used for cross-account sync, which can contain [a-zA-Z0-9\-\_]+ and is required if the operation is performed across accounts.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccountRole(const std::string& _accountRole);

                    /**
                     * 判断参数 AccountRole 是否已赋值
                     * @return AccountRole 是否已赋值
                     * 
                     */
                    bool AccountRoleHasBeenSet() const;

                    /**
                     * 获取External role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleExternalId External role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoleExternalId() const;

                    /**
                     * 设置External role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleExternalId External role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleExternalId(const std::string& _roleExternalId);

                    /**
                     * 判断参数 RoleExternalId 是否已赋值
                     * @return RoleExternalId 是否已赋值
                     * 
                     */
                    bool RoleExternalIdHasBeenSet() const;

                    /**
                     * 获取Temporary SecretId, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TmpSecretId Temporary SecretId, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置Temporary SecretId, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tmpSecretId Temporary SecretId, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTmpSecretId(const std::string& _tmpSecretId);

                    /**
                     * 判断参数 TmpSecretId 是否已赋值
                     * @return TmpSecretId 是否已赋值
                     * 
                     */
                    bool TmpSecretIdHasBeenSet() const;

                    /**
                     * 获取Temporary SecretKey, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TmpSecretKey Temporary SecretKey, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置Temporary SecretKey, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tmpSecretKey Temporary SecretKey, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTmpSecretKey(const std::string& _tmpSecretKey);

                    /**
                     * 判断参数 TmpSecretKey 是否已赋值
                     * @return TmpSecretKey 是否已赋值
                     * 
                     */
                    bool TmpSecretKeyHasBeenSet() const;

                    /**
                     * 获取Temporary token, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance. Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TmpToken Temporary token, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTmpToken() const;

                    /**
                     * 设置Temporary token, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance. Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tmpToken Temporary token, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance. Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTmpToken(const std::string& _tmpToken);

                    /**
                     * 判断参数 TmpToken 是否已赋值
                     * @return TmpToken 是否已赋值
                     * 
                     */
                    bool TmpTokenHasBeenSet() const;

                    /**
                     * 获取Whether to enable encrypted transfer (`UnEncrypted`: No; `Encrypted`: Yes). Default value: `UnEncrypted`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EncryptConn Whether to enable encrypted transfer (`UnEncrypted`: No; `Encrypted`: Yes). Default value: `UnEncrypted`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEncryptConn() const;

                    /**
                     * 设置Whether to enable encrypted transfer (`UnEncrypted`: No; `Encrypted`: Yes). Default value: `UnEncrypted`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _encryptConn Whether to enable encrypted transfer (`UnEncrypted`: No; `Encrypted`: Yes). Default value: `UnEncrypted`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Network environment of the database. This parameter is required when `AccessType` is `ccn`. Valid values: `UserIDC` (user IDC), `TencentVPC` (Tencent Cloud VPC).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatabaseNetEnv Network environment of the database. This parameter is required when `AccessType` is `ccn`. Valid values: `UserIDC` (user IDC), `TencentVPC` (Tencent Cloud VPC).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabaseNetEnv() const;

                    /**
                     * 设置Network environment of the database. This parameter is required when `AccessType` is `ccn`. Valid values: `UserIDC` (user IDC), `TencentVPC` (Tencent Cloud VPC).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _databaseNetEnv Network environment of the database. This parameter is required when `AccessType` is `ccn`. Valid values: `UserIDC` (user IDC), `TencentVPC` (Tencent Cloud VPC).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The root account of CCN in the scenario where the database is connected to CCN under another Tencent Cloud account
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CcnOwnerUin The root account of CCN in the scenario where the database is connected to CCN under another Tencent Cloud account
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCcnOwnerUin() const;

                    /**
                     * 设置The root account of CCN in the scenario where the database is connected to CCN under another Tencent Cloud account
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _ccnOwnerUin The root account of CCN in the scenario where the database is connected to CCN under another Tencent Cloud account
Note: This field may return `null`, indicating that no valid values can be obtained.
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

                    /**
                     * 获取
                     * @return SetId 
                     * 
                     */
                    std::string GetSetId() const;

                    /**
                     * 设置
                     * @param _setId 
                     * 
                     */
                    void SetSetId(const std::string& _setId);

                    /**
                     * 判断参数 SetId 是否已赋值
                     * @return SetId 是否已赋值
                     * 
                     */
                    bool SetIdHasBeenSet() const;

                private:

                    /**
                     * Region name, such as `ap-guangzhou`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Node type of TDSQL for MySQL. Enumerated values: `proxy`, `set`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Database kernel type, which is used to distinguish between different kernels in TDSQL. Valid values: `percona`, `mariadb`, `mysql`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbKernel;
                    bool m_dbKernelHasBeenSet;

                    /**
                     * Database instance ID in the format of `cdb-powiqx8q`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance IP address, which is required if the access type is not `cdb`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Instance port, which is required if the access type is not `cdb`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Username, which is required for an instance authenticated by username and password.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Password, which is required for an instance authenticated by username and password.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Database name, which is required if the database type is `cdwpg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * VPC ID in the format of `vpc-92jblxto`, which is required if the access type is `vpc`, `dcg`, or `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ID of the subnet in the VPC in the format of `subnet-3paxmkdz`, which is required if the access type is `vpc`, `dcg`, or `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Short CVM instance ID in the format of `ins-olgl39y8`, which is required if the access type is `cvm`. It is the same as the instance ID displayed in the CVM console.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * Direct Connect gateway ID in the format of `dcg-0rxtqqxb`, which is required if the access type is `dcg`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uniqDcgId;
                    bool m_uniqDcgIdHasBeenSet;

                    /**
                     * VPN gateway ID in the format of `vpngw-9ghexg7q`, which is required if the access type is `vpncloud`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uniqVpnGwId;
                    bool m_uniqVpnGwIdHasBeenSet;

                    /**
                     * CCN instance ID in the format of `ccn-afp6kltc`, which is required if the access type is `ccn`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * Cloud vendor type. For Alibaba Cloud ApsaraDB for RDS instances, enter `aliyun`; otherwise, enter `others`. Default value: `others`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_supplier;
                    bool m_supplierHasBeenSet;

                    /**
                     * Database version in the format of `5.6` or `5.7`, which takes effect only if the instance is an RDS instance. Default value: `5.6`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Instance account, which is required if the operation is performed across accounts.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * The account to which the resource belongs. Valid values: empty or `self` (the current account); `other` (another account).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accountMode;
                    bool m_accountModeHasBeenSet;

                    /**
                     * The role used for cross-account sync, which can contain [a-zA-Z0-9\-\_]+ and is required if the operation is performed across accounts.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accountRole;
                    bool m_accountRoleHasBeenSet;

                    /**
                     * External role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_roleExternalId;
                    bool m_roleExternalIdHasBeenSet;

                    /**
                     * Temporary SecretId, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * Temporary SecretKey, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * Temporary token, you can obtain the temporary key by [GetFederationToken](https://intl.cloud.tencent.com/document/product/1312/48195?from_cn_redirect=1). This field is required if it is a cross-account instance. Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tmpToken;
                    bool m_tmpTokenHasBeenSet;

                    /**
                     * Whether to enable encrypted transfer (`UnEncrypted`: No; `Encrypted`: Yes). Default value: `UnEncrypted`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_encryptConn;
                    bool m_encryptConnHasBeenSet;

                    /**
                     * Network environment of the database. This parameter is required when `AccessType` is `ccn`. Valid values: `UserIDC` (user IDC), `TencentVPC` (Tencent Cloud VPC).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_databaseNetEnv;
                    bool m_databaseNetEnvHasBeenSet;

                    /**
                     * The root account of CCN in the scenario where the database is connected to CCN under another Tencent Cloud account
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_ccnOwnerUin;
                    bool m_ccnOwnerUinHasBeenSet;

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

                    /**
                     * 
                     */
                    std::string m_setId;
                    bool m_setIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINT_H_
