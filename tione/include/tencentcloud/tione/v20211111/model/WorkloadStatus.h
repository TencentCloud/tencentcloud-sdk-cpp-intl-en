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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_WORKLOADSTATUS_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_WORKLOADSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/StatefulSetCondition.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Workload status.
                */
                class WorkloadStatus : public AbstractModel
                {
                public:
                    WorkloadStatus();
                    ~WorkloadStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of current instances.
                     * @return Replicas Number of current instances.
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置Number of current instances.
                     * @param _replicas Number of current instances.
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
                     * 获取Number of updated instances.
                     * @return UpdatedReplicas Number of updated instances.
                     * 
                     */
                    int64_t GetUpdatedReplicas() const;

                    /**
                     * 设置Number of updated instances.
                     * @param _updatedReplicas Number of updated instances.
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
                     * 获取Number of ready instances.
                     * @return ReadyReplicas Number of ready instances.
                     * 
                     */
                    int64_t GetReadyReplicas() const;

                    /**
                     * 设置Number of ready instances.
                     * @param _readyReplicas Number of ready instances.
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
                     * 获取Number of available instances.
                     * @return AvailableReplicas Number of available instances.
                     * 
                     */
                    int64_t GetAvailableReplicas() const;

                    /**
                     * 设置Number of available instances.
                     * @param _availableReplicas Number of available instances.
                     * 
                     */
                    void SetAvailableReplicas(const int64_t& _availableReplicas);

                    /**
                     * 判断参数 AvailableReplicas 是否已赋值
                     * @return AvailableReplicas 是否已赋值
                     * 
                     */
                    bool AvailableReplicasHasBeenSet() const;

                    /**
                     * 获取Number of unavailable instances.
                     * @return UnavailableReplicas Number of unavailable instances.
                     * 
                     */
                    int64_t GetUnavailableReplicas() const;

                    /**
                     * 设置Number of unavailable instances.
                     * @param _unavailableReplicas Number of unavailable instances.
                     * 
                     */
                    void SetUnavailableReplicas(const int64_t& _unavailableReplicas);

                    /**
                     * 判断参数 UnavailableReplicas 是否已赋值
                     * @return UnavailableReplicas 是否已赋值
                     * 
                     */
                    bool UnavailableReplicasHasBeenSet() const;

                    /**
                     * 获取Normal: running.Abnormal: service abnormalities, such as container startup failure.Waiting: service waiting, such as container image pulling.Stopped: stopped.Pending: starting.Stopping: stopping.
                     * @return Status Normal: running.Abnormal: service abnormalities, such as container startup failure.Waiting: service waiting, such as container image pulling.Stopped: stopped.Pending: starting.Stopping: stopping.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Normal: running.Abnormal: service abnormalities, such as container startup failure.Waiting: service waiting, such as container image pulling.Stopped: stopped.Pending: starting.Stopping: stopping.
                     * @param _status Normal: running.Abnormal: service abnormalities, such as container startup failure.Waiting: service waiting, such as container image pulling.Stopped: stopped.Pending: starting.Stopping: stopping.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Workload status information.
                     * @return StatefulSetCondition Workload status information.
                     * @deprecated
                     */
                    std::vector<StatefulSetCondition> GetStatefulSetCondition() const;

                    /**
                     * 设置Workload status information.
                     * @param _statefulSetCondition Workload status information.
                     * @deprecated
                     */
                    void SetStatefulSetCondition(const std::vector<StatefulSetCondition>& _statefulSetCondition);

                    /**
                     * 判断参数 StatefulSetCondition 是否已赋值
                     * @return StatefulSetCondition 是否已赋值
                     * @deprecated
                     */
                    bool StatefulSetConditionHasBeenSet() const;

                    /**
                     * 获取Status information of workload history.
                     * @return Conditions Status information of workload history.
                     * 
                     */
                    std::vector<StatefulSetCondition> GetConditions() const;

                    /**
                     * 设置Status information of workload history.
                     * @param _conditions Status information of workload history.
                     * 
                     */
                    void SetConditions(const std::vector<StatefulSetCondition>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取Display the reason when the status is abnormal.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Reason Display the reason when the status is abnormal.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置Display the reason when the status is abnormal.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reason Display the reason when the status is abnormal.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * Number of current instances.
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * Number of updated instances.
                     */
                    int64_t m_updatedReplicas;
                    bool m_updatedReplicasHasBeenSet;

                    /**
                     * Number of ready instances.
                     */
                    int64_t m_readyReplicas;
                    bool m_readyReplicasHasBeenSet;

                    /**
                     * Number of available instances.
                     */
                    int64_t m_availableReplicas;
                    bool m_availableReplicasHasBeenSet;

                    /**
                     * Number of unavailable instances.
                     */
                    int64_t m_unavailableReplicas;
                    bool m_unavailableReplicasHasBeenSet;

                    /**
                     * Normal: running.Abnormal: service abnormalities, such as container startup failure.Waiting: service waiting, such as container image pulling.Stopped: stopped.Pending: starting.Stopping: stopping.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Workload status information.
                     */
                    std::vector<StatefulSetCondition> m_statefulSetCondition;
                    bool m_statefulSetConditionHasBeenSet;

                    /**
                     * Status information of workload history.
                     */
                    std::vector<StatefulSetCondition> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * Display the reason when the status is abnormal.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_WORKLOADSTATUS_H_
