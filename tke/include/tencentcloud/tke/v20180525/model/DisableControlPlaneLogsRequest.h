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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DISABLECONTROLPLANELOGSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DISABLECONTROLPLANELOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DisableControlPlaneLogs request structure.
                */
                class DisableControlPlaneLogsRequest : public AbstractModel
                {
                public:
                    DisableControlPlaneLogsRequest();
                    ~DisableControlPlaneLogsRequest() = default;
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
                     * 获取Cluster type. currently only support tke.
                     * @return ClusterType Cluster type. currently only support tke.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置Cluster type. currently only support tke.
                     * @param _clusterType Cluster type. currently only support tke.
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取Component name list. currently supports cluster-autoscaler, kapenter.
                     * @return ComponentNames Component name list. currently supports cluster-autoscaler, kapenter.
                     * 
                     */
                    std::vector<std::string> GetComponentNames() const;

                    /**
                     * 设置Component name list. currently supports cluster-autoscaler, kapenter.
                     * @param _componentNames Component name list. currently supports cluster-autoscaler, kapenter.
                     * 
                     */
                    void SetComponentNames(const std::vector<std::string>& _componentNames);

                    /**
                     * 判断参数 ComponentNames 是否已赋值
                     * @return ComponentNames 是否已赋值
                     * 
                     */
                    bool ComponentNamesHasBeenSet() const;

                    /**
                     * 获取Specifies whether to delete the logset and topic. if the logset and topic are in use by other collection rules, they will not be deleted.
                     * @return DeleteLogSetAndTopic Specifies whether to delete the logset and topic. if the logset and topic are in use by other collection rules, they will not be deleted.
                     * 
                     */
                    bool GetDeleteLogSetAndTopic() const;

                    /**
                     * 设置Specifies whether to delete the logset and topic. if the logset and topic are in use by other collection rules, they will not be deleted.
                     * @param _deleteLogSetAndTopic Specifies whether to delete the logset and topic. if the logset and topic are in use by other collection rules, they will not be deleted.
                     * 
                     */
                    void SetDeleteLogSetAndTopic(const bool& _deleteLogSetAndTopic);

                    /**
                     * 判断参数 DeleteLogSetAndTopic 是否已赋值
                     * @return DeleteLogSetAndTopic 是否已赋值
                     * 
                     */
                    bool DeleteLogSetAndTopicHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster type. currently only support tke.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * Component name list. currently supports cluster-autoscaler, kapenter.
                     */
                    std::vector<std::string> m_componentNames;
                    bool m_componentNamesHasBeenSet;

                    /**
                     * Specifies whether to delete the logset and topic. if the logset and topic are in use by other collection rules, they will not be deleted.
                     */
                    bool m_deleteLogSetAndTopic;
                    bool m_deleteLogSetAndTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DISABLECONTROLPLANELOGSREQUEST_H_
