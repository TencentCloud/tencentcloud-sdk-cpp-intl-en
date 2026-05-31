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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERTABLEMAPPINGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERTABLEMAPPINGREQUEST_H_

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
                * DescribeLibraDBClusterTableMapping request structure.
                */
                class DescribeLibraDBClusterTableMappingRequest : public AbstractModel
                {
                public:
                    DescribeLibraDBClusterTableMappingRequest();
                    ~DescribeLibraDBClusterTableMappingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Analysis Cluster ID
                     * @return ClusterId Analysis Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Analysis Cluster ID
                     * @param _clusterId Analysis Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Analysis engine instance ID
                     * @return InstanceId Analysis engine instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Analysis engine instance ID
                     * @param _instanceId Analysis engine instance ID
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
                     * 获取Node ID
                     * @return NodeId Node ID
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置Node ID
                     * @param _nodeId Node ID
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Page history limit
                     * @return Limit Page history limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Page history limit
                     * @param _limit Page history limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Source schema list
                     * @return SrcSchemas Source schema list
                     * 
                     */
                    std::vector<std::string> GetSrcSchemas() const;

                    /**
                     * 设置Source schema list
                     * @param _srcSchemas Source schema list
                     * 
                     */
                    void SetSrcSchemas(const std::vector<std::string>& _srcSchemas);

                    /**
                     * 判断参数 SrcSchemas 是否已赋值
                     * @return SrcSchemas 是否已赋值
                     * 
                     */
                    bool SrcSchemasHasBeenSet() const;

                    /**
                     * 获取Source table list
                     * @return SrcTableName Source table list
                     * 
                     */
                    std::vector<std::string> GetSrcTableName() const;

                    /**
                     * 设置Source table list
                     * @param _srcTableName Source table list
                     * 
                     */
                    void SetSrcTableName(const std::vector<std::string>& _srcTableName);

                    /**
                     * 判断参数 SrcTableName 是否已赋值
                     * @return SrcTableName 是否已赋值
                     * 
                     */
                    bool SrcTableNameHasBeenSet() const;

                    /**
                     * 获取Status list
                     * @return StatusList Status list
                     * 
                     */
                    std::vector<std::string> GetStatusList() const;

                    /**
                     * 设置Status list
                     * @param _statusList Status list
                     * 
                     */
                    void SetStatusList(const std::vector<std::string>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取Map database name
                     * @return MapSchemas Map database name
                     * 
                     */
                    std::vector<std::string> GetMapSchemas() const;

                    /**
                     * 设置Map database name
                     * @param _mapSchemas Map database name
                     * 
                     */
                    void SetMapSchemas(const std::vector<std::string>& _mapSchemas);

                    /**
                     * 判断参数 MapSchemas 是否已赋值
                     * @return MapSchemas 是否已赋值
                     * 
                     */
                    bool MapSchemasHasBeenSet() const;

                    /**
                     * 获取Mapping table name
                     * @return MapTableName Mapping table name
                     * 
                     */
                    std::vector<std::string> GetMapTableName() const;

                    /**
                     * 设置Mapping table name
                     * @param _mapTableName Mapping table name
                     * 
                     */
                    void SetMapTableName(const std::vector<std::string>& _mapTableName);

                    /**
                     * 判断参数 MapTableName 是否已赋值
                     * @return MapTableName 是否已赋值
                     * 
                     */
                    bool MapTableNameHasBeenSet() const;

                    /**
                     * 获取Query records where the database name is not null
                     * @return MapSchemaNotEmpty Query records where the database name is not null
                     * 
                     */
                    bool GetMapSchemaNotEmpty() const;

                    /**
                     * 设置Query records where the database name is not null
                     * @param _mapSchemaNotEmpty Query records where the database name is not null
                     * 
                     */
                    void SetMapSchemaNotEmpty(const bool& _mapSchemaNotEmpty);

                    /**
                     * 判断参数 MapSchemaNotEmpty 是否已赋值
                     * @return MapSchemaNotEmpty 是否已赋值
                     * 
                     */
                    bool MapSchemaNotEmptyHasBeenSet() const;

                    /**
                     * 获取Query records where the mapping table name is not null
                     * @return MapTableNameNotEmpty Query records where the mapping table name is not null
                     * 
                     */
                    bool GetMapTableNameNotEmpty() const;

                    /**
                     * 设置Query records where the mapping table name is not null
                     * @param _mapTableNameNotEmpty Query records where the mapping table name is not null
                     * 
                     */
                    void SetMapTableNameNotEmpty(const bool& _mapTableNameNotEmpty);

                    /**
                     * 判断参数 MapTableNameNotEmpty 是否已赋值
                     * @return MapTableNameNotEmpty 是否已赋值
                     * 
                     */
                    bool MapTableNameNotEmptyHasBeenSet() const;

                private:

                    /**
                     * Analysis Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Analysis engine instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node ID
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page history limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Source schema list
                     */
                    std::vector<std::string> m_srcSchemas;
                    bool m_srcSchemasHasBeenSet;

                    /**
                     * Source table list
                     */
                    std::vector<std::string> m_srcTableName;
                    bool m_srcTableNameHasBeenSet;

                    /**
                     * Status list
                     */
                    std::vector<std::string> m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * Map database name
                     */
                    std::vector<std::string> m_mapSchemas;
                    bool m_mapSchemasHasBeenSet;

                    /**
                     * Mapping table name
                     */
                    std::vector<std::string> m_mapTableName;
                    bool m_mapTableNameHasBeenSet;

                    /**
                     * Query records where the database name is not null
                     */
                    bool m_mapSchemaNotEmpty;
                    bool m_mapSchemaNotEmptyHasBeenSet;

                    /**
                     * Query records where the mapping table name is not null
                     */
                    bool m_mapTableNameNotEmpty;
                    bool m_mapTableNameNotEmptyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERTABLEMAPPINGREQUEST_H_
