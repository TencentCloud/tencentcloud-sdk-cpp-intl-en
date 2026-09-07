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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeInstanceSpecs request structure.
                */
                class DescribeInstanceSpecsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceSpecsRequest();
                    ~DescribeInstanceSpecsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Database type, value ranges from...to... </p><li> MYSQL </li>
                     * @return DbType <p>Database type, value ranges from...to... </p><li> MYSQL </li>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>Database type, value ranges from...to... </p><li> MYSQL </li>
                     * @param _dbType <p>Database type, value ranges from...to... </p><li> MYSQL </li>
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether required to return AZ information</p>
                     * @return IncludeZoneStocks <p>Whether required to return AZ information</p>
                     * 
                     */
                    bool GetIncludeZoneStocks() const;

                    /**
                     * 设置<p>Whether required to return AZ information</p>
                     * @param _includeZoneStocks <p>Whether required to return AZ information</p>
                     * 
                     */
                    void SetIncludeZoneStocks(const bool& _includeZoneStocks);

                    /**
                     * 判断参数 IncludeZoneStocks 是否已赋值
                     * @return IncludeZoneStocks 是否已赋值
                     * 
                     */
                    bool IncludeZoneStocksHasBeenSet() const;

                    /**
                     * 获取<p>Instance machine type.</p>
                     * @return DeviceType <p>Instance machine type.</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>Instance machine type.</p>
                     * @param _deviceType <p>Instance machine type.</p>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Cluster level. For example, P0, P1. If no availability zone is specified, the query for non-affinity resources will be downgraded for availability zones that do not support affinity.</p>
                     * @return ClusterLevel <p>Cluster level. For example, P0, P1. If no availability zone is specified, the query for non-affinity resources will be downgraded for availability zones that do not support affinity.</p>
                     * 
                     */
                    std::string GetClusterLevel() const;

                    /**
                     * 设置<p>Cluster level. For example, P0, P1. If no availability zone is specified, the query for non-affinity resources will be downgraded for availability zones that do not support affinity.</p>
                     * @param _clusterLevel <p>Cluster level. For example, P0, P1. If no availability zone is specified, the query for non-affinity resources will be downgraded for availability zones that do not support affinity.</p>
                     * 
                     */
                    void SetClusterLevel(const std::string& _clusterLevel);

                    /**
                     * 判断参数 ClusterLevel 是否已赋值
                     * @return ClusterLevel 是否已赋值
                     * 
                     */
                    bool ClusterLevelHasBeenSet() const;

                private:

                    /**
                     * <p>Database type, value ranges from...to... </p><li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>Whether required to return AZ information</p>
                     */
                    bool m_includeZoneStocks;
                    bool m_includeZoneStocksHasBeenSet;

                    /**
                     * <p>Instance machine type.</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>Cluster level. For example, P0, P1. If no availability zone is specified, the query for non-affinity resources will be downgraded for availability zones that do not support affinity.</p>
                     */
                    std::string m_clusterLevel;
                    bool m_clusterLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESPECSREQUEST_H_
