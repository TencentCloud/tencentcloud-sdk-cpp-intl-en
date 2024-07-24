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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SYNCDBENDPOINTINFOS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SYNCDBENDPOINTINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Endpoint.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Node information of multi-node databases configured for data sync. This data structure is valid for multi-node databases such as TDSQL for MySQL. For single-node databases such as MySQL, use `Endpoint` instead.
                */
                class SyncDBEndpointInfos : public AbstractModel
                {
                public:
                    SyncDBEndpointInfos();
                    ~SyncDBEndpointInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region of the database
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Region of the database
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the database
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Region of the database
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
                     * 获取Instance network access type. Valid values: `extranet` (public network); `ipv6` (public IPv6); `cvm` (self-build on CVM); `dcg` (Direct Connect); `vpncloud` (VPN access); `cdb` (database); `ccn` (CCN); `intranet` (intranet); `vpc` (VPC). Note that the valid values are subject to the current link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AccessType Instance network access type. Valid values: `extranet` (public network); `ipv6` (public IPv6); `cvm` (self-build on CVM); `dcg` (Direct Connect); `vpncloud` (VPN access); `cdb` (database); `ccn` (CCN); `intranet` (intranet); `vpc` (VPC). Note that the valid values are subject to the current link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置Instance network access type. Valid values: `extranet` (public network); `ipv6` (public IPv6); `cvm` (self-build on CVM); `dcg` (Direct Connect); `vpncloud` (VPN access); `cdb` (database); `ccn` (CCN); `intranet` (intranet); `vpc` (VPC). Note that the valid values are subject to the current link.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _accessType Instance network access type. Valid values: `extranet` (public network); `ipv6` (public IPv6); `cvm` (self-build on CVM); `dcg` (Direct Connect); `vpncloud` (VPN access); `cdb` (database); `ccn` (CCN); `intranet` (intranet); `vpc` (VPC). Note that the valid values are subject to the current link.
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
                     * 获取Database information. Note: If the data type is tdsqlmysql, the order of this Endpoint array should correspond to the set order, and the first shard (shardkey range starting from 0) must be entered first.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Info Database information. Note: If the data type is tdsqlmysql, the order of this Endpoint array should correspond to the set order, and the first shard (shardkey range starting from 0) must be entered first.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Endpoint> GetInfo() const;

                    /**
                     * 设置Database information. Note: If the data type is tdsqlmysql, the order of this Endpoint array should correspond to the set order, and the first shard (shardkey range starting from 0) must be entered first.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _info Database information. Note: If the data type is tdsqlmysql, the order of this Endpoint array should correspond to the set order, and the first shard (shardkey range starting from 0) must be entered first.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInfo(const std::vector<Endpoint>& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * Region of the database
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instance network access type. Valid values: `extranet` (public network); `ipv6` (public IPv6); `cvm` (self-build on CVM); `dcg` (Direct Connect); `vpncloud` (VPN access); `cdb` (database); `ccn` (CCN); `intranet` (intranet); `vpc` (VPC). Note that the valid values are subject to the current link.
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
                     * Database information. Note: If the data type is tdsqlmysql, the order of this Endpoint array should correspond to the set order, and the first shard (shardkey range starting from 0) must be entered first.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Endpoint> m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SYNCDBENDPOINTINFOS_H_
