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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_WORKLOADINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_WORKLOADINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Workload details
                */
                class WorkloadInfo : public AbstractModel
                {
                public:
                    WorkloadInfo();
                    ~WorkloadInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The resource ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ClusterId The resource ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The resource ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _clusterId The resource ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ApplicationName Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _applicationName Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Version name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return VersionName Version name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置Version name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _versionName Version name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取Number of ready replicas
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ReadyReplicas Number of ready replicas
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetReadyReplicas() const;

                    /**
                     * 设置Number of ready replicas
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _readyReplicas Number of ready replicas
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReadyReplicas(const int64_t& _readyReplicas);

                    /**
                     * 判断参数 ReadyReplicas 是否已赋值
                     * @return ReadyReplicas 是否已赋值
                     * 
                     */
                    bool ReadyReplicasHasBeenSet() const;

                    /**
                     * 获取Number of replicas
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Replicas Number of replicas
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置Number of replicas
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _replicas Number of replicas
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取Number of updated replicas
Note: This field may return `null`, indicating that no valid value was found.
                     * @return UpdatedReplicas Number of updated replicas
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetUpdatedReplicas() const;

                    /**
                     * 设置Number of updated replicas
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _updatedReplicas Number of updated replicas
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetUpdatedReplicas(const int64_t& _updatedReplicas);

                    /**
                     * 判断参数 UpdatedReplicas 是否已赋值
                     * @return UpdatedReplicas 是否已赋值
                     * 
                     */
                    bool UpdatedReplicasHasBeenSet() const;

                    /**
                     * 获取Number of replicas ready for update
Note: This field may return `null`, indicating that no valid value was found.
                     * @return UpdatedReadyReplicas Number of replicas ready for update
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetUpdatedReadyReplicas() const;

                    /**
                     * 设置Number of replicas ready for update
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _updatedReadyReplicas Number of replicas ready for update
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetUpdatedReadyReplicas(const int64_t& _updatedReadyReplicas);

                    /**
                     * 判断参数 UpdatedReadyReplicas 是否已赋值
                     * @return UpdatedReadyReplicas 是否已赋值
                     * 
                     */
                    bool UpdatedReadyReplicasHasBeenSet() const;

                    /**
                     * 获取## Version Updates
Note: This field may return `null`, indicating that no valid value was found.
                     * @return UpdateRevision ## Version Updates
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetUpdateRevision() const;

                    /**
                     * 设置## Version Updates
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _updateRevision ## Version Updates
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetUpdateRevision(const std::string& _updateRevision);

                    /**
                     * 判断参数 UpdateRevision 是否已赋值
                     * @return UpdateRevision 是否已赋值
                     * 
                     */
                    bool UpdateRevisionHasBeenSet() const;

                    /**
                     * 获取Current Version
Note: This field may return `null`, indicating that no valid value was found.
                     * @return CurrentRevision Current Version
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetCurrentRevision() const;

                    /**
                     * 设置Current Version
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _currentRevision Current Version
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetCurrentRevision(const std::string& _currentRevision);

                    /**
                     * 判断参数 CurrentRevision 是否已赋值
                     * @return CurrentRevision 是否已赋值
                     * 
                     */
                    bool CurrentRevisionHasBeenSet() const;

                private:

                    /**
                     * The resource ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Application name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Version name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * Number of ready replicas
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_readyReplicas;
                    bool m_readyReplicasHasBeenSet;

                    /**
                     * Number of replicas
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * Number of updated replicas
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_updatedReplicas;
                    bool m_updatedReplicasHasBeenSet;

                    /**
                     * Number of replicas ready for update
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_updatedReadyReplicas;
                    bool m_updatedReadyReplicasHasBeenSet;

                    /**
                     * ## Version Updates
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_updateRevision;
                    bool m_updateRevisionHasBeenSet;

                    /**
                     * Current Version
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_currentRevision;
                    bool m_currentRevisionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_WORKLOADINFO_H_
