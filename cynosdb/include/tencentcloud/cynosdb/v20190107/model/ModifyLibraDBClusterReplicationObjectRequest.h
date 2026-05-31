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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERREPLICATIONOBJECTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERREPLICATIONOBJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ReplicationObject.h>
#include <tencentcloud/cynosdb/v20190107/model/AutoMapRule.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyLibraDBClusterReplicationObject request structure.
                */
                class ModifyLibraDBClusterReplicationObjectRequest : public AbstractModel
                {
                public:
                    ModifyLibraDBClusterReplicationObjectRequest();
                    ~ModifyLibraDBClusterReplicationObjectRequest() = default;
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
                     * 获取Read-only analysis engine instance ID
                     * @return InstanceId Read-only analysis engine instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Read-only analysis engine instance ID
                     * @param _instanceId Read-only analysis engine instance ID
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
                     * 获取Map mode
                     * @return ForceDefaultMapRule Map mode
                     * 
                     */
                    std::string GetForceDefaultMapRule() const;

                    /**
                     * 设置Map mode
                     * @param _forceDefaultMapRule Map mode
                     * 
                     */
                    void SetForceDefaultMapRule(const std::string& _forceDefaultMapRule);

                    /**
                     * 判断参数 ForceDefaultMapRule 是否已赋值
                     * @return ForceDefaultMapRule 是否已赋值
                     * 
                     */
                    bool ForceDefaultMapRuleHasBeenSet() const;

                    /**
                     * 获取sync object
                     * @return Objects sync object
                     * 
                     */
                    std::vector<ReplicationObject> GetObjects() const;

                    /**
                     * 设置sync object
                     * @param _objects sync object
                     * 
                     */
                    void SetObjects(const std::vector<ReplicationObject>& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     * 
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取Automated mapping rule
                     * @return AutoMapRules Automated mapping rule
                     * 
                     */
                    std::vector<AutoMapRule> GetAutoMapRules() const;

                    /**
                     * 设置Automated mapping rule
                     * @param _autoMapRules Automated mapping rule
                     * 
                     */
                    void SetAutoMapRules(const std::vector<AutoMapRule>& _autoMapRules);

                    /**
                     * 判断参数 AutoMapRules 是否已赋值
                     * @return AutoMapRules 是否已赋值
                     * 
                     */
                    bool AutoMapRulesHasBeenSet() const;

                    /**
                     * 获取Whether to refresh existing mapping relationships according to the latest mapping rule
                     * @return RefreshMapping Whether to refresh existing mapping relationships according to the latest mapping rule
                     * 
                     */
                    bool GetRefreshMapping() const;

                    /**
                     * 设置Whether to refresh existing mapping relationships according to the latest mapping rule
                     * @param _refreshMapping Whether to refresh existing mapping relationships according to the latest mapping rule
                     * 
                     */
                    void SetRefreshMapping(const bool& _refreshMapping);

                    /**
                     * 判断参数 RefreshMapping 是否已赋值
                     * @return RefreshMapping 是否已赋值
                     * 
                     */
                    bool RefreshMappingHasBeenSet() const;

                private:

                    /**
                     * Analysis Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Read-only analysis engine instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Map mode
                     */
                    std::string m_forceDefaultMapRule;
                    bool m_forceDefaultMapRuleHasBeenSet;

                    /**
                     * sync object
                     */
                    std::vector<ReplicationObject> m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * Automated mapping rule
                     */
                    std::vector<AutoMapRule> m_autoMapRules;
                    bool m_autoMapRulesHasBeenSet;

                    /**
                     * Whether to refresh existing mapping relationships according to the latest mapping rule
                     */
                    bool m_refreshMapping;
                    bool m_refreshMappingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERREPLICATIONOBJECTREQUEST_H_
