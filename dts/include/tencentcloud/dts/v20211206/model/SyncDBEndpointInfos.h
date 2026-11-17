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
                     * 获取Database region
                     * @return Region Database region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Database region
                     * @param _region Database region
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
                     * 获取Instance network access type. For example: extranet (public network), ipv6 (public network ipv6), cvm (self-built CVM), dcg (DC), vpncloud (instance accessed via VPN), cdb (cloud database), ccn (CCN), intranet (self-developed cloud migration), and vpc (VPC). Note that the specific valid values depend on the current linkage.
                     * @return AccessType Instance network access type. For example: extranet (public network), ipv6 (public network ipv6), cvm (self-built CVM), dcg (DC), vpncloud (instance accessed via VPN), cdb (cloud database), ccn (CCN), intranet (self-developed cloud migration), and vpc (VPC). Note that the specific valid values depend on the current linkage.
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置Instance network access type. For example: extranet (public network), ipv6 (public network ipv6), cvm (self-built CVM), dcg (DC), vpncloud (instance accessed via VPN), cdb (cloud database), ccn (CCN), intranet (self-developed cloud migration), and vpc (VPC). Note that the specific valid values depend on the current linkage.
                     * @param _accessType Instance network access type. For example: extranet (public network), ipv6 (public network ipv6), cvm (self-built CVM), dcg (DC), vpncloud (instance accessed via VPN), cdb (cloud database), ccn (CCN), intranet (self-developed cloud migration), and vpc (VPC). Note that the specific valid values depend on the current linkage.
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
                     * 获取Instance database type. For example: mysql, redis, mongodb, postgresql, mariadb, and percona.
                     * @return DatabaseType Instance database type. For example: mysql, redis, mongodb, postgresql, mariadb, and percona.
                     * 
                     */
                    std::string GetDatabaseType() const;

                    /**
                     * 设置Instance database type. For example: mysql, redis, mongodb, postgresql, mariadb, and percona.
                     * @param _databaseType Instance database type. For example: mysql, redis, mongodb, postgresql, mariadb, and percona.
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
                     * 获取Database information. Note: If the database type is tdsqlmysql, the order of the Endpoint array should follow the following rule: proxy nodes are placed before set nodes. If SrcConnectType selects proxy access, only the proxy node needs to be filled. If set access is selected, the first set node in the array should be the shard with a shardkey range starting from 0.
                     * @return Info Database information. Note: If the database type is tdsqlmysql, the order of the Endpoint array should follow the following rule: proxy nodes are placed before set nodes. If SrcConnectType selects proxy access, only the proxy node needs to be filled. If set access is selected, the first set node in the array should be the shard with a shardkey range starting from 0.
                     * 
                     */
                    std::vector<Endpoint> GetInfo() const;

                    /**
                     * 设置Database information. Note: If the database type is tdsqlmysql, the order of the Endpoint array should follow the following rule: proxy nodes are placed before set nodes. If SrcConnectType selects proxy access, only the proxy node needs to be filled. If set access is selected, the first set node in the array should be the shard with a shardkey range starting from 0.
                     * @param _info Database information. Note: If the database type is tdsqlmysql, the order of the Endpoint array should follow the following rule: proxy nodes are placed before set nodes. If SrcConnectType selects proxy access, only the proxy node needs to be filled. If set access is selected, the first set node in the array should be the shard with a shardkey range starting from 0.
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
                     * Database region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Instance network access type. For example: extranet (public network), ipv6 (public network ipv6), cvm (self-built CVM), dcg (DC), vpncloud (instance accessed via VPN), cdb (cloud database), ccn (CCN), intranet (self-developed cloud migration), and vpc (VPC). Note that the specific valid values depend on the current linkage.
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Instance database type. For example: mysql, redis, mongodb, postgresql, mariadb, and percona.
                     */
                    std::string m_databaseType;
                    bool m_databaseTypeHasBeenSet;

                    /**
                     * Database information. Note: If the database type is tdsqlmysql, the order of the Endpoint array should follow the following rule: proxy nodes are placed before set nodes. If SrcConnectType selects proxy access, only the proxy node needs to be filled. If set access is selected, the first set node in the array should be the shard with a shardkey range starting from 0.
                     */
                    std::vector<Endpoint> m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SYNCDBENDPOINTINFOS_H_
