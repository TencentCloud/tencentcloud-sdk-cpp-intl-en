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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DBENDPOINTINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DBENDPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DBInfo.h>
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
                * Instance information
                */
                class DBEndpointInfo : public AbstractModel
                {
                public:
                    DBEndpointInfo();
                    ~DBEndpointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Instance region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Instance region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Instance region
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
                     * 获取Instances network access type. Valid values: `extranet` (public network); `ipv6` (public IPv6); `cvm` (self-build on CVM); `dcg` (Direct Connect); `vpncloud` (VPN access); `cdb` (database); `ccn` (CCN); `intranet` (intranet); `vpc` (VPC). Note that the valid values are subject to the current link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessType Instances network access type. Valid values: `extranet` (public network); `ipv6` (public IPv6); `cvm` (self-build on CVM); `dcg` (Direct Connect); `vpncloud` (VPN access); `cdb` (database); `ccn` (CCN); `intranet` (intranet); `vpc` (VPC). Note that the valid values are subject to the current link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置Instances network access type. Valid values: `extranet` (public network); `ipv6` (public IPv6); `cvm` (self-build on CVM); `dcg` (Direct Connect); `vpncloud` (VPN access); `cdb` (database); `ccn` (CCN); `intranet` (intranet); `vpc` (VPC). Note that the valid values are subject to the current link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessType Instances network access type. Valid values: `extranet` (public network); `ipv6` (public IPv6); `cvm` (self-build on CVM); `dcg` (Direct Connect); `vpncloud` (VPN access); `cdb` (database); `ccn` (CCN); `intranet` (intranet); `vpc` (VPC). Note that the valid values are subject to the current link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取Database type, such as `mysql`, `redis`, `mongodb`, `postgresql`, `mariadb`, and `percona`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DatabaseType Database type, such as `mysql`, `redis`, `mongodb`, `postgresql`, `mariadb`, and `percona`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDatabaseType() const;

                    /**
                     * 设置Database type, such as `mysql`, `redis`, `mongodb`, `postgresql`, `mariadb`, and `percona`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _databaseType Database type, such as `mysql`, `redis`, `mongodb`, `postgresql`, `mariadb`, and `percona`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabaseType(const std::string& _databaseType);

                    /**
                     * 判断参数 DatabaseType 是否已赋值
                     * @return DatabaseType 是否已赋值
                     * 
                     */
                    bool DatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Node type. Valid values: empty or `simple` (general node); `cluster` (cluster node).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeType Node type. Valid values: empty or `simple` (general node); `cluster` (cluster node).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type. Valid values: empty or `simple` (general node); `cluster` (cluster node).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeType Node type. Valid values: empty or `simple` (general node); `cluster` (cluster node).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Database information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Info Database information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DBInfo> GetInfo() const;

                    /**
                     * 设置Database information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _info Database information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInfo(const std::vector<DBInfo>& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取Instance service provider, such as "aliyun" and "others".
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Supplier Instance service provider, such as "aliyun" and "others".
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSupplier() const;

                    /**
                     * 设置Instance service provider, such as "aliyun" and "others".
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _supplier Instance service provider, such as "aliyun" and "others".
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
                     * 获取For MongoDB, you can define the following parameters: 	['AuthDatabase':'admin', 
'AuthFlag': "1",	'AuthMechanism':"SCRAM-SHA-1"]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtraAttr For MongoDB, you can define the following parameters: 	['AuthDatabase':'admin', 
'AuthFlag': "1",	'AuthMechanism':"SCRAM-SHA-1"]
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<KeyValuePairOption> GetExtraAttr() const;

                    /**
                     * 设置For MongoDB, you can define the following parameters: 	['AuthDatabase':'admin', 
'AuthFlag': "1",	'AuthMechanism':"SCRAM-SHA-1"]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extraAttr For MongoDB, you can define the following parameters: 	['AuthDatabase':'admin', 
'AuthFlag': "1",	'AuthMechanism':"SCRAM-SHA-1"]
Note: This field may return null, indicating that no valid values can be obtained.
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

                private:

                    /**
                     * Instance region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instances network access type. Valid values: `extranet` (public network); `ipv6` (public IPv6); `cvm` (self-build on CVM); `dcg` (Direct Connect); `vpncloud` (VPN access); `cdb` (database); `ccn` (CCN); `intranet` (intranet); `vpc` (VPC). Note that the valid values are subject to the current link.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Database type, such as `mysql`, `redis`, `mongodb`, `postgresql`, `mariadb`, and `percona`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_databaseType;
                    bool m_databaseTypeHasBeenSet;

                    /**
                     * Node type. Valid values: empty or `simple` (general node); `cluster` (cluster node).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Database information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DBInfo> m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * Instance service provider, such as "aliyun" and "others".
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_supplier;
                    bool m_supplierHasBeenSet;

                    /**
                     * For MongoDB, you can define the following parameters: 	['AuthDatabase':'admin', 
'AuthFlag': "1",	'AuthMechanism':"SCRAM-SHA-1"]
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<KeyValuePairOption> m_extraAttr;
                    bool m_extraAttrHasBeenSet;

                    /**
                     * Network environment of the database. This parameter is required when `AccessType` is `ccn`. Valid values: `UserIDC` (user IDC), `TencentVPC` (Tencent Cloud VPC).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_databaseNetEnv;
                    bool m_databaseNetEnvHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DBENDPOINTINFO_H_
