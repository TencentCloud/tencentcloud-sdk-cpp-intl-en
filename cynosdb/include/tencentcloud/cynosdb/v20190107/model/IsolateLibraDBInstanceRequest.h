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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATELIBRADBINSTANCEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATELIBRADBINSTANCEREQUEST_H_

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
                * IsolateLibraDBInstance request structure.
                */
                class IsolateLibraDBInstanceRequest : public AbstractModel
                {
                public:
                    IsolateLibraDBInstanceRequest();
                    ~IsolateLibraDBInstanceRequest() = default;
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
                     * 获取Read-only analysis engine instance ID list
                     * @return InstanceIdList Read-only analysis engine instance ID list
                     * 
                     */
                    std::vector<std::string> GetInstanceIdList() const;

                    /**
                     * 设置Read-only analysis engine instance ID list
                     * @param _instanceIdList Read-only analysis engine instance ID list
                     * 
                     */
                    void SetInstanceIdList(const std::vector<std::string>& _instanceIdList);

                    /**
                     * 判断参数 InstanceIdList 是否已赋值
                     * @return InstanceIdList 是否已赋值
                     * 
                     */
                    bool InstanceIdListHasBeenSet() const;

                    /**
                     * 获取Whether to force isolation
                     * @return ForceIsolate Whether to force isolation
                     * 
                     */
                    bool GetForceIsolate() const;

                    /**
                     * 设置Whether to force isolation
                     * @param _forceIsolate Whether to force isolation
                     * 
                     */
                    void SetForceIsolate(const bool& _forceIsolate);

                    /**
                     * 判断参数 ForceIsolate 是否已赋值
                     * @return ForceIsolate 是否已赋值
                     * 
                     */
                    bool ForceIsolateHasBeenSet() const;

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
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Read-only analysis engine instance ID list
                     */
                    std::vector<std::string> m_instanceIdList;
                    bool m_instanceIdListHasBeenSet;

                    /**
                     * Whether to force isolation
                     */
                    bool m_forceIsolate;
                    bool m_forceIsolateHasBeenSet;

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

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ISOLATELIBRADBINSTANCEREQUEST_H_
