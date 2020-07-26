/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUPOPTION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUPOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Cluster auto scaling configuration
                */
                class ClusterAsGroupOption : public AbstractModel
                {
                public:
                    ClusterAsGroupOption();
                    ~ClusterAsGroupOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable scale-down
Note: this field may return null, indicating that no valid value was found.
                     * @return IsScaleDownEnabled Whether to enable scale-down
Note: this field may return null, indicating that no valid value was found.
                     */
                    bool GetIsScaleDownEnabled() const;

                    /**
                     * 设置Whether to enable scale-down
Note: this field may return null, indicating that no valid value was found.
                     * @param IsScaleDownEnabled Whether to enable scale-down
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetIsScaleDownEnabled(const bool& _isScaleDownEnabled);

                    /**
                     * 判断参数 IsScaleDownEnabled 是否已赋值
                     * @return IsScaleDownEnabled 是否已赋值
                     */
                    bool IsScaleDownEnabledHasBeenSet() const;

                    /**
                     * 获取Scale-up selection algorithm when there are multiple scaling groups (random: random selection. most-pods: pod with the most types. least-waste: least waste of resources. The default value is random.)
Note: this field may return null, indicating that no valid value was found.
                     * @return Expander Scale-up selection algorithm when there are multiple scaling groups (random: random selection. most-pods: pod with the most types. least-waste: least waste of resources. The default value is random.)
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::string GetExpander() const;

                    /**
                     * 设置Scale-up selection algorithm when there are multiple scaling groups (random: random selection. most-pods: pod with the most types. least-waste: least waste of resources. The default value is random.)
Note: this field may return null, indicating that no valid value was found.
                     * @param Expander Scale-up selection algorithm when there are multiple scaling groups (random: random selection. most-pods: pod with the most types. least-waste: least waste of resources. The default value is random.)
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetExpander(const std::string& _expander);

                    /**
                     * 判断参数 Expander 是否已赋值
                     * @return Expander 是否已赋值
                     */
                    bool ExpanderHasBeenSet() const;

                    /**
                     * 获取Max concurrent scale-down volume
Note: this field may return null, indicating that no valid value was found.
                     * @return MaxEmptyBulkDelete Max concurrent scale-down volume
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t GetMaxEmptyBulkDelete() const;

                    /**
                     * 设置Max concurrent scale-down volume
Note: this field may return null, indicating that no valid value was found.
                     * @param MaxEmptyBulkDelete Max concurrent scale-down volume
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetMaxEmptyBulkDelete(const int64_t& _maxEmptyBulkDelete);

                    /**
                     * 判断参数 MaxEmptyBulkDelete 是否已赋值
                     * @return MaxEmptyBulkDelete 是否已赋值
                     */
                    bool MaxEmptyBulkDeleteHasBeenSet() const;

                    /**
                     * 获取Number of minutes after cluster scale-up when the system starts judging whether to perform scale-down
Note: this field may return null, indicating that no valid value was found.
                     * @return ScaleDownDelay Number of minutes after cluster scale-up when the system starts judging whether to perform scale-down
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t GetScaleDownDelay() const;

                    /**
                     * 设置Number of minutes after cluster scale-up when the system starts judging whether to perform scale-down
Note: this field may return null, indicating that no valid value was found.
                     * @param ScaleDownDelay Number of minutes after cluster scale-up when the system starts judging whether to perform scale-down
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetScaleDownDelay(const int64_t& _scaleDownDelay);

                    /**
                     * 判断参数 ScaleDownDelay 是否已赋值
                     * @return ScaleDownDelay 是否已赋值
                     */
                    bool ScaleDownDelayHasBeenSet() const;

                    /**
                     * 获取Number of consecutive minutes of idleness after which the node is subject to scale-down (default value: 10)
Note: this field may return null, indicating that no valid value was found.
                     * @return ScaleDownUnneededTime Number of consecutive minutes of idleness after which the node is subject to scale-down (default value: 10)
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t GetScaleDownUnneededTime() const;

                    /**
                     * 设置Number of consecutive minutes of idleness after which the node is subject to scale-down (default value: 10)
Note: this field may return null, indicating that no valid value was found.
                     * @param ScaleDownUnneededTime Number of consecutive minutes of idleness after which the node is subject to scale-down (default value: 10)
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetScaleDownUnneededTime(const int64_t& _scaleDownUnneededTime);

                    /**
                     * 判断参数 ScaleDownUnneededTime 是否已赋值
                     * @return ScaleDownUnneededTime 是否已赋值
                     */
                    bool ScaleDownUnneededTimeHasBeenSet() const;

                    /**
                     * 获取Percentage of node resource usage below which the node is considered to be idle (default value: 50)
Note: this field may return null, indicating that no valid value was found.
                     * @return ScaleDownUtilizationThreshold Percentage of node resource usage below which the node is considered to be idle (default value: 50)
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t GetScaleDownUtilizationThreshold() const;

                    /**
                     * 设置Percentage of node resource usage below which the node is considered to be idle (default value: 50)
Note: this field may return null, indicating that no valid value was found.
                     * @param ScaleDownUtilizationThreshold Percentage of node resource usage below which the node is considered to be idle (default value: 50)
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetScaleDownUtilizationThreshold(const int64_t& _scaleDownUtilizationThreshold);

                    /**
                     * 判断参数 ScaleDownUtilizationThreshold 是否已赋值
                     * @return ScaleDownUtilizationThreshold 是否已赋值
                     */
                    bool ScaleDownUtilizationThresholdHasBeenSet() const;

                    /**
                     * 获取Whether to skip scale-down for nodes with local storage pods (default value: False)
Note: this field may return null, indicating that no valid value was found.
                     * @return SkipNodesWithLocalStorage Whether to skip scale-down for nodes with local storage pods (default value: False)
Note: this field may return null, indicating that no valid value was found.
                     */
                    bool GetSkipNodesWithLocalStorage() const;

                    /**
                     * 设置Whether to skip scale-down for nodes with local storage pods (default value: False)
Note: this field may return null, indicating that no valid value was found.
                     * @param SkipNodesWithLocalStorage Whether to skip scale-down for nodes with local storage pods (default value: False)
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetSkipNodesWithLocalStorage(const bool& _skipNodesWithLocalStorage);

                    /**
                     * 判断参数 SkipNodesWithLocalStorage 是否已赋值
                     * @return SkipNodesWithLocalStorage 是否已赋值
                     */
                    bool SkipNodesWithLocalStorageHasBeenSet() const;

                    /**
                     * 获取Whether to skip scale-down for nodes with pods in the kube-system namespace that are not managed by DaemonSet (default value: False)
Note: this field may return null, indicating that no valid value was found.
                     * @return SkipNodesWithSystemPods Whether to skip scale-down for nodes with pods in the kube-system namespace that are not managed by DaemonSet (default value: False)
Note: this field may return null, indicating that no valid value was found.
                     */
                    bool GetSkipNodesWithSystemPods() const;

                    /**
                     * 设置Whether to skip scale-down for nodes with pods in the kube-system namespace that are not managed by DaemonSet (default value: False)
Note: this field may return null, indicating that no valid value was found.
                     * @param SkipNodesWithSystemPods Whether to skip scale-down for nodes with pods in the kube-system namespace that are not managed by DaemonSet (default value: False)
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetSkipNodesWithSystemPods(const bool& _skipNodesWithSystemPods);

                    /**
                     * 判断参数 SkipNodesWithSystemPods 是否已赋值
                     * @return SkipNodesWithSystemPods 是否已赋值
                     */
                    bool SkipNodesWithSystemPodsHasBeenSet() const;

                    /**
                     * 获取Whether to ignore DaemonSet pods by default when calculating resource usage (default value: False: do not ignore)
Note: this field may return null, indicating that no valid value was found.
                     * @return IgnoreDaemonSetsUtilization Whether to ignore DaemonSet pods by default when calculating resource usage (default value: False: do not ignore)
Note: this field may return null, indicating that no valid value was found.
                     */
                    bool GetIgnoreDaemonSetsUtilization() const;

                    /**
                     * 设置Whether to ignore DaemonSet pods by default when calculating resource usage (default value: False: do not ignore)
Note: this field may return null, indicating that no valid value was found.
                     * @param IgnoreDaemonSetsUtilization Whether to ignore DaemonSet pods by default when calculating resource usage (default value: False: do not ignore)
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetIgnoreDaemonSetsUtilization(const bool& _ignoreDaemonSetsUtilization);

                    /**
                     * 判断参数 IgnoreDaemonSetsUtilization 是否已赋值
                     * @return IgnoreDaemonSetsUtilization 是否已赋值
                     */
                    bool IgnoreDaemonSetsUtilizationHasBeenSet() const;

                    /**
                     * 获取Number at which CA health detection is triggered (default value: 3). After the number specified in OkTotalUnreadyCount is exceeded, CA will perform health detection.
Note: this field may return null, indicating that no valid value was found.
                     * @return OkTotalUnreadyCount Number at which CA health detection is triggered (default value: 3). After the number specified in OkTotalUnreadyCount is exceeded, CA will perform health detection.
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t GetOkTotalUnreadyCount() const;

                    /**
                     * 设置Number at which CA health detection is triggered (default value: 3). After the number specified in OkTotalUnreadyCount is exceeded, CA will perform health detection.
Note: this field may return null, indicating that no valid value was found.
                     * @param OkTotalUnreadyCount Number at which CA health detection is triggered (default value: 3). After the number specified in OkTotalUnreadyCount is exceeded, CA will perform health detection.
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetOkTotalUnreadyCount(const int64_t& _okTotalUnreadyCount);

                    /**
                     * 判断参数 OkTotalUnreadyCount 是否已赋值
                     * @return OkTotalUnreadyCount 是否已赋值
                     */
                    bool OkTotalUnreadyCountHasBeenSet() const;

                    /**
                     * 获取Max percentage of unready nodes. After the max percentage is exceeded, CA will stop operation.
Note: this field may return null, indicating that no valid value was found.
                     * @return MaxTotalUnreadyPercentage Max percentage of unready nodes. After the max percentage is exceeded, CA will stop operation.
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t GetMaxTotalUnreadyPercentage() const;

                    /**
                     * 设置Max percentage of unready nodes. After the max percentage is exceeded, CA will stop operation.
Note: this field may return null, indicating that no valid value was found.
                     * @param MaxTotalUnreadyPercentage Max percentage of unready nodes. After the max percentage is exceeded, CA will stop operation.
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetMaxTotalUnreadyPercentage(const int64_t& _maxTotalUnreadyPercentage);

                    /**
                     * 判断参数 MaxTotalUnreadyPercentage 是否已赋值
                     * @return MaxTotalUnreadyPercentage 是否已赋值
                     */
                    bool MaxTotalUnreadyPercentageHasBeenSet() const;

                    /**
                     * 获取Amount of time before unready nodes become eligible for scale-down
Note: this field may return null, indicating that no valid value was found.
                     * @return ScaleDownUnreadyTime Amount of time before unready nodes become eligible for scale-down
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t GetScaleDownUnreadyTime() const;

                    /**
                     * 设置Amount of time before unready nodes become eligible for scale-down
Note: this field may return null, indicating that no valid value was found.
                     * @param ScaleDownUnreadyTime Amount of time before unready nodes become eligible for scale-down
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetScaleDownUnreadyTime(const int64_t& _scaleDownUnreadyTime);

                    /**
                     * 判断参数 ScaleDownUnreadyTime 是否已赋值
                     * @return ScaleDownUnreadyTime 是否已赋值
                     */
                    bool ScaleDownUnreadyTimeHasBeenSet() const;

                    /**
                     * 获取Waiting time before CA deletes nodes that are not registered in Kubernetes
Note: this field may return null, indicating that no valid value was found.
                     * @return UnregisteredNodeRemovalTime Waiting time before CA deletes nodes that are not registered in Kubernetes
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t GetUnregisteredNodeRemovalTime() const;

                    /**
                     * 设置Waiting time before CA deletes nodes that are not registered in Kubernetes
Note: this field may return null, indicating that no valid value was found.
                     * @param UnregisteredNodeRemovalTime Waiting time before CA deletes nodes that are not registered in Kubernetes
Note: this field may return null, indicating that no valid value was found.
                     */
                    void SetUnregisteredNodeRemovalTime(const int64_t& _unregisteredNodeRemovalTime);

                    /**
                     * 判断参数 UnregisteredNodeRemovalTime 是否已赋值
                     * @return UnregisteredNodeRemovalTime 是否已赋值
                     */
                    bool UnregisteredNodeRemovalTimeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable scale-down
Note: this field may return null, indicating that no valid value was found.
                     */
                    bool m_isScaleDownEnabled;
                    bool m_isScaleDownEnabledHasBeenSet;

                    /**
                     * Scale-up selection algorithm when there are multiple scaling groups (random: random selection. most-pods: pod with the most types. least-waste: least waste of resources. The default value is random.)
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::string m_expander;
                    bool m_expanderHasBeenSet;

                    /**
                     * Max concurrent scale-down volume
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t m_maxEmptyBulkDelete;
                    bool m_maxEmptyBulkDeleteHasBeenSet;

                    /**
                     * Number of minutes after cluster scale-up when the system starts judging whether to perform scale-down
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t m_scaleDownDelay;
                    bool m_scaleDownDelayHasBeenSet;

                    /**
                     * Number of consecutive minutes of idleness after which the node is subject to scale-down (default value: 10)
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t m_scaleDownUnneededTime;
                    bool m_scaleDownUnneededTimeHasBeenSet;

                    /**
                     * Percentage of node resource usage below which the node is considered to be idle (default value: 50)
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t m_scaleDownUtilizationThreshold;
                    bool m_scaleDownUtilizationThresholdHasBeenSet;

                    /**
                     * Whether to skip scale-down for nodes with local storage pods (default value: False)
Note: this field may return null, indicating that no valid value was found.
                     */
                    bool m_skipNodesWithLocalStorage;
                    bool m_skipNodesWithLocalStorageHasBeenSet;

                    /**
                     * Whether to skip scale-down for nodes with pods in the kube-system namespace that are not managed by DaemonSet (default value: False)
Note: this field may return null, indicating that no valid value was found.
                     */
                    bool m_skipNodesWithSystemPods;
                    bool m_skipNodesWithSystemPodsHasBeenSet;

                    /**
                     * Whether to ignore DaemonSet pods by default when calculating resource usage (default value: False: do not ignore)
Note: this field may return null, indicating that no valid value was found.
                     */
                    bool m_ignoreDaemonSetsUtilization;
                    bool m_ignoreDaemonSetsUtilizationHasBeenSet;

                    /**
                     * Number at which CA health detection is triggered (default value: 3). After the number specified in OkTotalUnreadyCount is exceeded, CA will perform health detection.
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t m_okTotalUnreadyCount;
                    bool m_okTotalUnreadyCountHasBeenSet;

                    /**
                     * Max percentage of unready nodes. After the max percentage is exceeded, CA will stop operation.
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t m_maxTotalUnreadyPercentage;
                    bool m_maxTotalUnreadyPercentageHasBeenSet;

                    /**
                     * Amount of time before unready nodes become eligible for scale-down
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t m_scaleDownUnreadyTime;
                    bool m_scaleDownUnreadyTimeHasBeenSet;

                    /**
                     * Waiting time before CA deletes nodes that are not registered in Kubernetes
Note: this field may return null, indicating that no valid value was found.
                     */
                    int64_t m_unregisteredNodeRemovalTime;
                    bool m_unregisteredNodeRemovalTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUPOPTION_H_
