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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATELIBRADBCLUSTERREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATELIBRADBCLUSTERREQUEST_H_

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
                * IsolateLibraDBCluster request structure.
                */
                class IsolateLibraDBClusterRequest : public AbstractModel
                {
                public:
                    IsolateLibraDBClusterRequest();
                    ~IsolateLibraDBClusterRequest() = default;
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
                     * 获取Isolation reason type
                     * @return IsolateReasonTypes Isolation reason type
                     * 
                     */
                    std::vector<int64_t> GetIsolateReasonTypes() const;

                    /**
                     * 设置Isolation reason type
                     * @param _isolateReasonTypes Isolation reason type
                     * 
                     */
                    void SetIsolateReasonTypes(const std::vector<int64_t>& _isolateReasonTypes);

                    /**
                     * 判断参数 IsolateReasonTypes 是否已赋值
                     * @return IsolateReasonTypes 是否已赋值
                     * 
                     */
                    bool IsolateReasonTypesHasBeenSet() const;

                    /**
                     * 获取Cause of isolation
                     * @return IsolateReason Cause of isolation
                     * 
                     */
                    std::string GetIsolateReason() const;

                    /**
                     * 设置Cause of isolation
                     * @param _isolateReason Cause of isolation
                     * 
                     */
                    void SetIsolateReason(const std::string& _isolateReason);

                    /**
                     * 判断参数 IsolateReason 是否已赋值
                     * @return IsolateReason 是否已赋值
                     * 
                     */
                    bool IsolateReasonHasBeenSet() const;

                private:

                    /**
                     * Analysis Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Isolation reason type
                     */
                    std::vector<int64_t> m_isolateReasonTypes;
                    bool m_isolateReasonTypesHasBeenSet;

                    /**
                     * Cause of isolation
                     */
                    std::string m_isolateReason;
                    bool m_isolateReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATELIBRADBCLUSTERREQUEST_H_
