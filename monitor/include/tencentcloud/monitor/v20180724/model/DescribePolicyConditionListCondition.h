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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONDITION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListEventMetric.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListMetric.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Policy conditions returned by the DescribePolicyConditionList API
                */
                class DescribePolicyConditionListCondition : public AbstractModel
                {
                public:
                    DescribePolicyConditionListCondition();
                    ~DescribePolicyConditionListCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Policy view name.
                     * @return PolicyViewName Policy view name.
                     */
                    std::string GetPolicyViewName() const;

                    /**
                     * 设置Policy view name.
                     * @param PolicyViewName Policy view name.
                     */
                    void SetPolicyViewName(const std::string& _policyViewName);

                    /**
                     * 判断参数 PolicyViewName 是否已赋值
                     * @return PolicyViewName 是否已赋值
                     */
                    bool PolicyViewNameHasBeenSet() const;

                    /**
                     * 获取Event alarm conditions.
Note: This field may return null, indicating that no valid value was found.
                     * @return EventMetrics Event alarm conditions.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyConditionListEventMetric> GetEventMetrics() const;

                    /**
                     * 设置Event alarm conditions.
Note: This field may return null, indicating that no valid value was found.
                     * @param EventMetrics Event alarm conditions.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetEventMetrics(const std::vector<DescribePolicyConditionListEventMetric>& _eventMetrics);

                    /**
                     * 判断参数 EventMetrics 是否已赋值
                     * @return EventMetrics 是否已赋值
                     */
                    bool EventMetricsHasBeenSet() const;

                    /**
                     * 获取Whether to support multiple regions.
                     * @return IsSupportMultiRegion Whether to support multiple regions.
                     */
                    bool GetIsSupportMultiRegion() const;

                    /**
                     * 设置Whether to support multiple regions.
                     * @param IsSupportMultiRegion Whether to support multiple regions.
                     */
                    void SetIsSupportMultiRegion(const bool& _isSupportMultiRegion);

                    /**
                     * 判断参数 IsSupportMultiRegion 是否已赋值
                     * @return IsSupportMultiRegion 是否已赋值
                     */
                    bool IsSupportMultiRegionHasBeenSet() const;

                    /**
                     * 获取Metric alarm conditions.
Note: This field may return null, indicating that no valid value was found.
                     * @return Metrics Metric alarm conditions.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyConditionListMetric> GetMetrics() const;

                    /**
                     * 设置Metric alarm conditions.
Note: This field may return null, indicating that no valid value was found.
                     * @param Metrics Metric alarm conditions.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetMetrics(const std::vector<DescribePolicyConditionListMetric>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取Policy type name.
                     * @return Name Policy type name.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Policy type name.
                     * @param Name Policy type name.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Sorting ID.
                     * @return SortId Sorting ID.
                     */
                    int64_t GetSortId() const;

                    /**
                     * 设置Sorting ID.
                     * @param SortId Sorting ID.
                     */
                    void SetSortId(const int64_t& _sortId);

                    /**
                     * 判断参数 SortId 是否已赋值
                     * @return SortId 是否已赋值
                     */
                    bool SortIdHasBeenSet() const;

                    /**
                     * 获取Whether to support default policies.
                     * @return SupportDefault Whether to support default policies.
                     */
                    bool GetSupportDefault() const;

                    /**
                     * 设置Whether to support default policies.
                     * @param SupportDefault Whether to support default policies.
                     */
                    void SetSupportDefault(const bool& _supportDefault);

                    /**
                     * 判断参数 SupportDefault 是否已赋值
                     * @return SupportDefault 是否已赋值
                     */
                    bool SupportDefaultHasBeenSet() const;

                    /**
                     * 获取List of regions that support this policy type.
Note: This field may return null, indicating that no valid value was found.
                     * @return SupportRegions List of regions that support this policy type.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> GetSupportRegions() const;

                    /**
                     * 设置List of regions that support this policy type.
Note: This field may return null, indicating that no valid value was found.
                     * @param SupportRegions List of regions that support this policy type.
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetSupportRegions(const std::vector<std::string>& _supportRegions);

                    /**
                     * 判断参数 SupportRegions 是否已赋值
                     * @return SupportRegions 是否已赋值
                     */
                    bool SupportRegionsHasBeenSet() const;

                private:

                    /**
                     * Policy view name.
                     */
                    std::string m_policyViewName;
                    bool m_policyViewNameHasBeenSet;

                    /**
                     * Event alarm conditions.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyConditionListEventMetric> m_eventMetrics;
                    bool m_eventMetricsHasBeenSet;

                    /**
                     * Whether to support multiple regions.
                     */
                    bool m_isSupportMultiRegion;
                    bool m_isSupportMultiRegionHasBeenSet;

                    /**
                     * Metric alarm conditions.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<DescribePolicyConditionListMetric> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * Policy type name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Sorting ID.
                     */
                    int64_t m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * Whether to support default policies.
                     */
                    bool m_supportDefault;
                    bool m_supportDefaultHasBeenSet;

                    /**
                     * List of regions that support this policy type.
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_supportRegions;
                    bool m_supportRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONDITION_H_
