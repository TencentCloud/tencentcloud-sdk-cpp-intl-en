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
                     * 获取<p>Region English name, for example: ap-guangzhou</p>
                     * @return Region <p>Region English name, for example: ap-guangzhou</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region English name, for example: ap-guangzhou</p>
                     * @param _region <p>Region English name, for example: ap-guangzhou</p>
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
                     * 获取<p>Node type. proxy means the node type is host, set means the node type is node. proxy type must be the first item in the array. Source/target configuration for tdsqlmysql type is required.</p>
                     * @return Role <p>Node type. proxy means the node type is host, set means the node type is node. proxy type must be the first item in the array. Source/target configuration for tdsqlmysql type is required.</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>Node type. proxy means the node type is host, set means the node type is node. proxy type must be the first item in the array. Source/target configuration for tdsqlmysql type is required.</p>
                     * @param _role <p>Node type. proxy means the node type is host, set means the node type is node. proxy type must be the first item in the array. Source/target configuration for tdsqlmysql type is required.</p>
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
                     * 获取<p>Database kernel type, used in tdsql to differentiate between different kernels: percona, mariadb, mysql. Note that tdsql-C mysql and tdsql PostgreSQL do not need to fill in this field.</p>
                     * @return DbKernel <p>Database kernel type, used in tdsql to differentiate between different kernels: percona, mariadb, mysql. Note that tdsql-C mysql and tdsql PostgreSQL do not need to fill in this field.</p>
                     * 
                     */
                    std::string GetDbKernel() const;

                    /**
                     * 设置<p>Database kernel type, used in tdsql to differentiate between different kernels: percona, mariadb, mysql. Note that tdsql-C mysql and tdsql PostgreSQL do not need to fill in this field.</p>
                     * @param _dbKernel <p>Database kernel type, used in tdsql to differentiate between different kernels: percona, mariadb, mysql. Note that tdsql-C mysql and tdsql PostgreSQL do not need to fill in this field.</p>
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
                     * 获取<p>Database instance ID, in the format of: cdb-powiqx8q</p>
                     * @return InstanceId <p>Database instance ID, in the format of: cdb-powiqx8q</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Database instance ID, in the format of: cdb-powiqx8q</p>
                     * @param _instanceId <p>Database instance ID, in the format of: cdb-powiqx8q</p>
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
                     * 获取<p>IP address of the instance. This item is required when the access type is not cdb.</p>
                     * @return Ip <p>IP address of the instance. This item is required when the access type is not cdb.</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>IP address of the instance. This item is required when the access type is not cdb.</p>
                     * @param _ip <p>IP address of the instance. This item is required when the access type is not cdb.</p>
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
                     * 获取<p>Instance port. This item is required when the access type is not cdb.</p>
                     * @return Port <p>Instance port. This item is required when the access type is not cdb.</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>Instance port. This item is required when the access type is not cdb.</p>
                     * @param _port <p>Instance port. This item is required when the access type is not cdb.</p>
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
                     * 获取<p>User name, required for accessing instances that need username and password authentication.</p>
                     * @return User <p>User name, required for accessing instances that need username and password authentication.</p>
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>User name, required for accessing instances that need username and password authentication.</p>
                     * @param _user <p>User name, required for accessing instances that need username and password authentication.</p>
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
                     * 获取<p>Password is required for accessing instances that need username and password authentication.</p>
                     * @return Password <p>Password is required for accessing instances that need username and password authentication.</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Password is required for accessing instances that need username and password authentication.</p>
                     * @param _password <p>Password is required for accessing instances that need username and password authentication.</p>
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
                     * 获取<p>Database name, required when the database is cdwpg</p>
                     * @return DbName <p>Database name, required when the database is cdwpg</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>Database name, required when the database is cdwpg</p>
                     * @param _dbName <p>Database name, required when the database is cdwpg</p>
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
                     * 获取<p>Private network ID. This item is required for private network, Direct Connect, and VPN access methods, in the format of vpc-92jblxto.</p>
                     * @return VpcId <p>Private network ID. This item is required for private network, Direct Connect, and VPN access methods, in the format of vpc-92jblxto.</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>Private network ID. This item is required for private network, Direct Connect, and VPN access methods, in the format of vpc-92jblxto.</p>
                     * @param _vpcId <p>Private network ID. This item is required for private network, Direct Connect, and VPN access methods, in the format of vpc-92jblxto.</p>
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
                     * 获取<p>Subnet ID under the private network. This item is required for private network, Direct Connect, and VPN access methods, in the format of subnet-3paxmkdz.</p>
                     * @return SubnetId <p>Subnet ID under the private network. This item is required for private network, Direct Connect, and VPN access methods, in the format of subnet-3paxmkdz.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet ID under the private network. This item is required for private network, Direct Connect, and VPN access methods, in the format of subnet-3paxmkdz.</p>
                     * @param _subnetId <p>Subnet ID under the private network. This item is required for private network, Direct Connect, and VPN access methods, in the format of subnet-3paxmkdz.</p>
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
                     * 获取<p>CVM instance short ID, in the format of: ins-olgl39y8, is identical to the instance ID displayed on the cloud server console page. If it is a CVM self-created instance, this field is required.</p>
                     * @return CvmInstanceId <p>CVM instance short ID, in the format of: ins-olgl39y8, is identical to the instance ID displayed on the cloud server console page. If it is a CVM self-created instance, this field is required.</p>
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置<p>CVM instance short ID, in the format of: ins-olgl39y8, is identical to the instance ID displayed on the cloud server console page. If it is a CVM self-created instance, this field is required.</p>
                     * @param _cvmInstanceId <p>CVM instance short ID, in the format of: ins-olgl39y8, is identical to the instance ID displayed on the cloud server console page. If it is a CVM self-created instance, this field is required.</p>
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
                     * 获取<p>Direct Connect gateway ID. This item is required for dedicated access type, in the format of: dcg-0rxtqqxb</p>
                     * @return UniqDcgId <p>Direct Connect gateway ID. This item is required for dedicated access type, in the format of: dcg-0rxtqqxb</p>
                     * 
                     */
                    std::string GetUniqDcgId() const;

                    /**
                     * 设置<p>Direct Connect gateway ID. This item is required for dedicated access type, in the format of: dcg-0rxtqqxb</p>
                     * @param _uniqDcgId <p>Direct Connect gateway ID. This item is required for dedicated access type, in the format of: dcg-0rxtqqxb</p>
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
                     * 获取<p>VPN Gateway ID. This item is required for VPN access type, in the format of vpngw-9ghexg7q.</p>
                     * @return UniqVpnGwId <p>VPN Gateway ID. This item is required for VPN access type, in the format of vpngw-9ghexg7q.</p>
                     * 
                     */
                    std::string GetUniqVpnGwId() const;

                    /**
                     * 设置<p>VPN Gateway ID. This item is required for VPN access type, in the format of vpngw-9ghexg7q.</p>
                     * @param _uniqVpnGwId <p>VPN Gateway ID. This item is required for VPN access type, in the format of vpngw-9ghexg7q.</p>
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
                     * 获取<p>Cloud Connect Network ID. This item is required for the CCN access type, for example: ccn-afp6kltc</p>
                     * @return CcnId <p>Cloud Connect Network ID. This item is required for the CCN access type, for example: ccn-afp6kltc</p>
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置<p>Cloud Connect Network ID. This item is required for the CCN access type, for example: ccn-afp6kltc</p>
                     * @param _ccnId <p>Cloud Connect Network ID. This item is required for the CCN access type, for example: ccn-afp6kltc</p>
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
                     * 获取<p>Cloud vendor type. For RDS instances, fill in aliyun. In other cases, fill in others. Default is others.</p>
                     * @return Supplier <p>Cloud vendor type. For RDS instances, fill in aliyun. In other cases, fill in others. Default is others.</p>
                     * 
                     */
                    std::string GetSupplier() const;

                    /**
                     * 设置<p>Cloud vendor type. For RDS instances, fill in aliyun. In other cases, fill in others. Default is others.</p>
                     * @param _supplier <p>Cloud vendor type. For RDS instances, fill in aliyun. In other cases, fill in others. Default is others.</p>
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
                     * 获取<p>Database version. Valid only for RDS instances, ignored for other instances, in the format of 5.6 or 5.7, defaults to 5.6.</p>
                     * @return EngineVersion <p>Database version. Valid only for RDS instances, ignored for other instances, in the format of 5.6 or 5.7, defaults to 5.6.</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>Database version. Valid only for RDS instances, ignored for other instances, in the format of 5.6 or 5.7, defaults to 5.6.</p>
                     * @param _engineVersion <p>Database version. Valid only for RDS instances, ignored for other instances, in the format of 5.6 or 5.7, defaults to 5.6.</p>
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
                     * 获取<p>Account of the instance. This item is required if it is a cross-account instance.</p>
                     * @return Account <p>Account of the instance. This item is required if it is a cross-account instance.</p>
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置<p>Account of the instance. This item is required if it is a cross-account instance.</p>
                     * @param _account <p>Account of the instance. This item is required if it is a cross-account instance.</p>
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
                     * 获取<p>Associated account is empty, self (means resources within this account), or other (means cross-account resources).</p>
                     * @return AccountMode <p>Associated account is empty, self (means resources within this account), or other (means cross-account resources).</p>
                     * 
                     */
                    std::string GetAccountMode() const;

                    /**
                     * 设置<p>Associated account is empty, self (means resources within this account), or other (means cross-account resources).</p>
                     * @param _accountMode <p>Associated account is empty, self (means resources within this account), or other (means cross-account resources).</p>
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
                     * 获取<p>Role for cross-account sync, only allow [a-zA-Z0-9-_]+. This item is required if it is a cross-account instance.</p>
                     * @return AccountRole <p>Role for cross-account sync, only allow [a-zA-Z0-9-_]+. This item is required if it is a cross-account instance.</p>
                     * 
                     */
                    std::string GetAccountRole() const;

                    /**
                     * 设置<p>Role for cross-account sync, only allow [a-zA-Z0-9-_]+. This item is required if it is a cross-account instance.</p>
                     * @param _accountRole <p>Role for cross-account sync, only allow [a-zA-Z0-9-_]+. This item is required if it is a cross-account instance.</p>
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
                     * 获取<p>External role id</p>
                     * @return RoleExternalId <p>External role id</p>
                     * 
                     */
                    std::string GetRoleExternalId() const;

                    /**
                     * 设置<p>External role id</p>
                     * @param _roleExternalId <p>External role id</p>
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
                     * 获取<p>Temporary key Id can be obtained by applying for role assumption temporary access credentials https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role-based definition.</p>
                     * @return TmpSecretId <p>Temporary key Id can be obtained by applying for role assumption temporary access credentials https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role-based definition.</p>
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置<p>Temporary key Id can be obtained by applying for role assumption temporary access credentials https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role-based definition.</p>
                     * @param _tmpSecretId <p>Temporary key Id can be obtained by applying for role assumption temporary access credentials https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role-based definition.</p>
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
                     * 获取<p>Temporary key Id can be obtained by applying for role assumption temporary access credentials at https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role definition.</p>
                     * @return TmpSecretKey <p>Temporary key Id can be obtained by applying for role assumption temporary access credentials at https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role definition.</p>
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置<p>Temporary key Id can be obtained by applying for role assumption temporary access credentials at https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role definition.</p>
                     * @param _tmpSecretKey <p>Temporary key Id can be obtained by applying for role assumption temporary access credentials at https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role definition.</p>
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
                     * 获取<p>Temporary key Id can be obtained by applying for role assumption temporary access credentials https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role-based definition.</p>
                     * @return TmpToken <p>Temporary key Id can be obtained by applying for role assumption temporary access credentials https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role-based definition.</p>
                     * 
                     */
                    std::string GetTmpToken() const;

                    /**
                     * 设置<p>Temporary key Id can be obtained by applying for role assumption temporary access credentials https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role-based definition.</p>
                     * @param _tmpToken <p>Temporary key Id can be obtained by applying for role assumption temporary access credentials https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role-based definition.</p>
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
                     * 获取<p>Whether to use encrypted transmission. UnEncrypted means no encrypted transmission, Encrypted means encrypted transmission. Default: UnEncrypted</p>
                     * @return EncryptConn <p>Whether to use encrypted transmission. UnEncrypted means no encrypted transmission, Encrypted means encrypted transmission. Default: UnEncrypted</p>
                     * 
                     */
                    std::string GetEncryptConn() const;

                    /**
                     * 设置<p>Whether to use encrypted transmission. UnEncrypted means no encrypted transmission, Encrypted means encrypted transmission. Default: UnEncrypted</p>
                     * @param _encryptConn <p>Whether to use encrypted transmission. UnEncrypted means no encrypted transmission, Encrypted means encrypted transmission. Default: UnEncrypted</p>
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
                     * 获取<p>Network environment of the database. Required when AccessType is Cloud Connect Network (ccn). UserIDC refers to User IDC, and TencentVPC refers to Tencent Cloud VPC.</p>
                     * @return DatabaseNetEnv <p>Network environment of the database. Required when AccessType is Cloud Connect Network (ccn). UserIDC refers to User IDC, and TencentVPC refers to Tencent Cloud VPC.</p>
                     * 
                     */
                    std::string GetDatabaseNetEnv() const;

                    /**
                     * 设置<p>Network environment of the database. Required when AccessType is Cloud Connect Network (ccn). UserIDC refers to User IDC, and TencentVPC refers to Tencent Cloud VPC.</p>
                     * @param _databaseNetEnv <p>Network environment of the database. Required when AccessType is Cloud Connect Network (ccn). UserIDC refers to User IDC, and TencentVPC refers to Tencent Cloud VPC.</p>
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
                     * 获取<p>When the database is an instance of cross-account cloud networking, it refers to the main account to which the CCN belongs.</p>
                     * @return CcnOwnerUin <p>When the database is an instance of cross-account cloud networking, it refers to the main account to which the CCN belongs.</p>
                     * 
                     */
                    std::string GetCcnOwnerUin() const;

                    /**
                     * 设置<p>When the database is an instance of cross-account cloud networking, it refers to the main account to which the CCN belongs.</p>
                     * @param _ccnOwnerUin <p>When the database is an instance of cross-account cloud networking, it refers to the main account to which the CCN belongs.</p>
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
                     * 获取<p>When the database is cynos and it is a sub-database instance within the cynos cluster, this parameter is the ID of the sub-instance.</p>
                     * @return ChildInstanceId <p>When the database is cynos and it is a sub-database instance within the cynos cluster, this parameter is the ID of the sub-instance.</p>
                     * 
                     */
                    std::string GetChildInstanceId() const;

                    /**
                     * 设置<p>When the database is cynos and it is a sub-database instance within the cynos cluster, this parameter is the ID of the sub-instance.</p>
                     * @param _childInstanceId <p>When the database is cynos and it is a sub-database instance within the cynos cluster, this parameter is the ID of the sub-instance.</p>
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
                     * 获取<p>When the database is cynos and it is a sub-database instance within the cynos cluster, this parameter is the type of the sub-instance, for example: pass ro for a read-only instance, pass rw for a read-write instance.</p>
                     * @return ChildInstanceType <p>When the database is cynos and it is a sub-database instance within the cynos cluster, this parameter is the type of the sub-instance, for example: pass ro for a read-only instance, pass rw for a read-write instance.</p>
                     * 
                     */
                    std::string GetChildInstanceType() const;

                    /**
                     * 设置<p>When the database is cynos and it is a sub-database instance within the cynos cluster, this parameter is the type of the sub-instance, for example: pass ro for a read-only instance, pass rw for a read-write instance.</p>
                     * @param _childInstanceType <p>When the database is cynos and it is a sub-database instance within the cynos cluster, this parameter is the type of the sub-instance, for example: pass ro for a read-only instance, pass rw for a read-write instance.</p>
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
                     * 获取<p>Shard id of tdsql. Required if the node type is set.</p>
                     * @return SetId <p>Shard id of tdsql. Required if the node type is set.</p>
                     * 
                     */
                    std::string GetSetId() const;

                    /**
                     * 设置<p>Shard id of tdsql. Required if the node type is set.</p>
                     * @param _setId <p>Shard id of tdsql. Required if the node type is set.</p>
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
                     * <p>Region English name, for example: ap-guangzhou</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Node type. proxy means the node type is host, set means the node type is node. proxy type must be the first item in the array. Source/target configuration for tdsqlmysql type is required.</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>Database kernel type, used in tdsql to differentiate between different kernels: percona, mariadb, mysql. Note that tdsql-C mysql and tdsql PostgreSQL do not need to fill in this field.</p>
                     */
                    std::string m_dbKernel;
                    bool m_dbKernelHasBeenSet;

                    /**
                     * <p>Database instance ID, in the format of: cdb-powiqx8q</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>IP address of the instance. This item is required when the access type is not cdb.</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>Instance port. This item is required when the access type is not cdb.</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>User name, required for accessing instances that need username and password authentication.</p>
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>Password is required for accessing instances that need username and password authentication.</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>Database name, required when the database is cdwpg</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>Private network ID. This item is required for private network, Direct Connect, and VPN access methods, in the format of vpc-92jblxto.</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>Subnet ID under the private network. This item is required for private network, Direct Connect, and VPN access methods, in the format of subnet-3paxmkdz.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>CVM instance short ID, in the format of: ins-olgl39y8, is identical to the instance ID displayed on the cloud server console page. If it is a CVM self-created instance, this field is required.</p>
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * <p>Direct Connect gateway ID. This item is required for dedicated access type, in the format of: dcg-0rxtqqxb</p>
                     */
                    std::string m_uniqDcgId;
                    bool m_uniqDcgIdHasBeenSet;

                    /**
                     * <p>VPN Gateway ID. This item is required for VPN access type, in the format of vpngw-9ghexg7q.</p>
                     */
                    std::string m_uniqVpnGwId;
                    bool m_uniqVpnGwIdHasBeenSet;

                    /**
                     * <p>Cloud Connect Network ID. This item is required for the CCN access type, for example: ccn-afp6kltc</p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>Cloud vendor type. For RDS instances, fill in aliyun. In other cases, fill in others. Default is others.</p>
                     */
                    std::string m_supplier;
                    bool m_supplierHasBeenSet;

                    /**
                     * <p>Database version. Valid only for RDS instances, ignored for other instances, in the format of 5.6 or 5.7, defaults to 5.6.</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>Account of the instance. This item is required if it is a cross-account instance.</p>
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>Associated account is empty, self (means resources within this account), or other (means cross-account resources).</p>
                     */
                    std::string m_accountMode;
                    bool m_accountModeHasBeenSet;

                    /**
                     * <p>Role for cross-account sync, only allow [a-zA-Z0-9-_]+. This item is required if it is a cross-account instance.</p>
                     */
                    std::string m_accountRole;
                    bool m_accountRoleHasBeenSet;

                    /**
                     * <p>External role id</p>
                     */
                    std::string m_roleExternalId;
                    bool m_roleExternalIdHasBeenSet;

                    /**
                     * <p>Temporary key Id can be obtained by applying for role assumption temporary access credentials https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role-based definition.</p>
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * <p>Temporary key Id can be obtained by applying for role assumption temporary access credentials at https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role definition.</p>
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * <p>Temporary key Id can be obtained by applying for role assumption temporary access credentials https://www.tencentcloud.com/document/product/1312/48197.?from_cn_redirect=1 Among them, the definition of the role resource RoleArn can be found in the DTS cross-account sync document (https://www.tencentcloud.com/document/product/571/68729?from_cn_redirect=1) Section 4 about role-based definition.</p>
                     */
                    std::string m_tmpToken;
                    bool m_tmpTokenHasBeenSet;

                    /**
                     * <p>Whether to use encrypted transmission. UnEncrypted means no encrypted transmission, Encrypted means encrypted transmission. Default: UnEncrypted</p>
                     */
                    std::string m_encryptConn;
                    bool m_encryptConnHasBeenSet;

                    /**
                     * <p>Network environment of the database. Required when AccessType is Cloud Connect Network (ccn). UserIDC refers to User IDC, and TencentVPC refers to Tencent Cloud VPC.</p>
                     */
                    std::string m_databaseNetEnv;
                    bool m_databaseNetEnvHasBeenSet;

                    /**
                     * <p>When the database is an instance of cross-account cloud networking, it refers to the main account to which the CCN belongs.</p>
                     */
                    std::string m_ccnOwnerUin;
                    bool m_ccnOwnerUinHasBeenSet;

                    /**
                     * <p>When the database is cynos and it is a sub-database instance within the cynos cluster, this parameter is the ID of the sub-instance.</p>
                     */
                    std::string m_childInstanceId;
                    bool m_childInstanceIdHasBeenSet;

                    /**
                     * <p>When the database is cynos and it is a sub-database instance within the cynos cluster, this parameter is the type of the sub-instance, for example: pass ro for a read-only instance, pass rw for a read-write instance.</p>
                     */
                    std::string m_childInstanceType;
                    bool m_childInstanceTypeHasBeenSet;

                    /**
                     * <p>Shard id of tdsql. Required if the node type is set.</p>
                     */
                    std::string m_setId;
                    bool m_setIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_ENDPOINT_H_
