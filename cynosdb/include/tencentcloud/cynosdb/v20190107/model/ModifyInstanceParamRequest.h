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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEPARAMREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEPARAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyParamItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyInstanceParam request structure.
                */
                class ModifyInstanceParamRequest : public AbstractModel
                {
                public:
                    ModifyInstanceParamRequest();
                    ~ModifyInstanceParamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取Instance ID.
                     * @return InstanceIds Instance ID.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceIds Instance ID.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Cluster parameter list, for example, [{           "CurrentValue":"2",        "ParamName":"auto_increment_increment"}]
                     * @return ClusterParamList Cluster parameter list, for example, [{           "CurrentValue":"2",        "ParamName":"auto_increment_increment"}]
                     * 
                     */
                    std::vector<ModifyParamItem> GetClusterParamList() const;

                    /**
                     * 设置Cluster parameter list, for example, [{           "CurrentValue":"2",        "ParamName":"auto_increment_increment"}]
                     * @param _clusterParamList Cluster parameter list, for example, [{           "CurrentValue":"2",        "ParamName":"auto_increment_increment"}]
                     * 
                     */
                    void SetClusterParamList(const std::vector<ModifyParamItem>& _clusterParamList);

                    /**
                     * 判断参数 ClusterParamList 是否已赋值
                     * @return ClusterParamList 是否已赋值
                     * 
                     */
                    bool ClusterParamListHasBeenSet() const;

                    /**
                     * 获取Instance parameter list, for example, [{           "CurrentValue":"2",        "ParamName":"innodb_stats_transient_sample_pages"}]
                     * @return InstanceParamList Instance parameter list, for example, [{           "CurrentValue":"2",        "ParamName":"innodb_stats_transient_sample_pages"}]
                     * 
                     */
                    std::vector<ModifyParamItem> GetInstanceParamList() const;

                    /**
                     * 设置Instance parameter list, for example, [{           "CurrentValue":"2",        "ParamName":"innodb_stats_transient_sample_pages"}]
                     * @param _instanceParamList Instance parameter list, for example, [{           "CurrentValue":"2",        "ParamName":"innodb_stats_transient_sample_pages"}]
                     * 
                     */
                    void SetInstanceParamList(const std::vector<ModifyParamItem>& _instanceParamList);

                    /**
                     * 判断参数 InstanceParamList 是否已赋值
                     * @return InstanceParamList 是否已赋值
                     * 
                     */
                    bool InstanceParamListHasBeenSet() const;

                    /**
                     * 获取yes: modify within the Ops time window. no: immediately execute (default value).
                     * @return IsInMaintainPeriod yes: modify within the Ops time window. no: immediately execute (default value).
                     * 
                     */
                    std::string GetIsInMaintainPeriod() const;

                    /**
                     * 设置yes: modify within the Ops time window. no: immediately execute (default value).
                     * @param _isInMaintainPeriod yes: modify within the Ops time window. no: immediately execute (default value).
                     * 
                     */
                    void SetIsInMaintainPeriod(const std::string& _isInMaintainPeriod);

                    /**
                     * 判断参数 IsInMaintainPeriod 是否已赋值
                     * @return IsInMaintainPeriod 是否已赋值
                     * 
                     */
                    bool IsInMaintainPeriodHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Cluster parameter list, for example, [{           "CurrentValue":"2",        "ParamName":"auto_increment_increment"}]
                     */
                    std::vector<ModifyParamItem> m_clusterParamList;
                    bool m_clusterParamListHasBeenSet;

                    /**
                     * Instance parameter list, for example, [{           "CurrentValue":"2",        "ParamName":"innodb_stats_transient_sample_pages"}]
                     */
                    std::vector<ModifyParamItem> m_instanceParamList;
                    bool m_instanceParamListHasBeenSet;

                    /**
                     * yes: modify within the Ops time window. no: immediately execute (default value).
                     */
                    std::string m_isInMaintainPeriod;
                    bool m_isInMaintainPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEPARAMREQUEST_H_
