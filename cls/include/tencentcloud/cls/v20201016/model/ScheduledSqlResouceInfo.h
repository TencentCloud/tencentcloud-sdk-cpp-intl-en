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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SCHEDULEDSQLRESOUCEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SCHEDULEDSQLRESOUCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MetricLabel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Resource information for ScheduledSql
                */
                class ScheduledSqlResouceInfo : public AbstractModel
                {
                public:
                    ScheduledSqlResouceInfo();
                    ~ScheduledSqlResouceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target topic ID
                     * @return TopicId Target topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Target topic ID
                     * @param _topicId Target topic ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Region information for the topic
                     * @return Region Region information for the topic
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region information for the topic
                     * @param _region Region information for the topic
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Topic type: 0 for log topic, and 1 for metric topic
                     * @return BizType Topic type: 0 for log topic, and 1 for metric topic
                     * 
                     */
                    int64_t GetBizType() const;

                    /**
                     * 设置Topic type: 0 for log topic, and 1 for metric topic
                     * @param _bizType Topic type: 0 for log topic, and 1 for metric topic
                     * 
                     */
                    void SetBizType(const int64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取Metric name. When BizType is 1, MetricName needs to be specified.
                     * @return MetricName Metric name. When BizType is 1, MetricName needs to be specified.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name. When BizType is 1, MetricName needs to be specified.
                     * @param _metricName Metric name. When BizType is 1, MetricName needs to be specified.
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Metric NameWhen BizType is 1, prioritize using the MetricNames field. Multiple metrics can only be filled in the MetricNames field, while it's recommended to fill a single metric in the MetricName field.
                     * @return MetricNames Metric NameWhen BizType is 1, prioritize using the MetricNames field. Multiple metrics can only be filled in the MetricNames field, while it's recommended to fill a single metric in the MetricName field.
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Metric NameWhen BizType is 1, prioritize using the MetricNames field. Multiple metrics can only be filled in the MetricNames field, while it's recommended to fill a single metric in the MetricName field.
                     * @param _metricNames Metric NameWhen BizType is 1, prioritize using the MetricNames field. Multiple metrics can only be filled in the MetricNames field, while it's recommended to fill a single metric in the MetricName field.
                     * 
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     * 
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取Metric dimension. Not accept time type.
                     * @return MetricLabels Metric dimension. Not accept time type.
                     * 
                     */
                    std::vector<std::string> GetMetricLabels() const;

                    /**
                     * 设置Metric dimension. Not accept time type.
                     * @param _metricLabels Metric dimension. Not accept time type.
                     * 
                     */
                    void SetMetricLabels(const std::vector<std::string>& _metricLabels);

                    /**
                     * 判断参数 MetricLabels 是否已赋值
                     * @return MetricLabels 是否已赋值
                     * 
                     */
                    bool MetricLabelsHasBeenSet() const;

                    /**
                     * 获取Metric timestamp. The default value is the left time point of the SQL query time range, but you can also specify other fields (The type is uinx time, TimeStamp, and precision millisecond) as the metric timestamp.
                     * @return CustomTime Metric timestamp. The default value is the left time point of the SQL query time range, but you can also specify other fields (The type is uinx time, TimeStamp, and precision millisecond) as the metric timestamp.
                     * 
                     */
                    std::string GetCustomTime() const;

                    /**
                     * 设置Metric timestamp. The default value is the left time point of the SQL query time range, but you can also specify other fields (The type is uinx time, TimeStamp, and precision millisecond) as the metric timestamp.
                     * @param _customTime Metric timestamp. The default value is the left time point of the SQL query time range, but you can also specify other fields (The type is uinx time, TimeStamp, and precision millisecond) as the metric timestamp.
                     * 
                     */
                    void SetCustomTime(const std::string& _customTime);

                    /**
                     * 判断参数 CustomTime 是否已赋值
                     * @return CustomTime 是否已赋值
                     * 
                     */
                    bool CustomTimeHasBeenSet() const;

                    /**
                     * 获取In addition to MetricLabels, this parameter can be used to supplement static dimensions for the metric.
Dimension names must start with a letter or underscore, followed by letters, digits, or underscores, with a length less than or equal to 1024 bytes.
                     * @return CustomMetricLabels In addition to MetricLabels, this parameter can be used to supplement static dimensions for the metric.
Dimension names must start with a letter or underscore, followed by letters, digits, or underscores, with a length less than or equal to 1024 bytes.
                     * 
                     */
                    std::vector<MetricLabel> GetCustomMetricLabels() const;

                    /**
                     * 设置In addition to MetricLabels, this parameter can be used to supplement static dimensions for the metric.
Dimension names must start with a letter or underscore, followed by letters, digits, or underscores, with a length less than or equal to 1024 bytes.
                     * @param _customMetricLabels In addition to MetricLabels, this parameter can be used to supplement static dimensions for the metric.
Dimension names must start with a letter or underscore, followed by letters, digits, or underscores, with a length less than or equal to 1024 bytes.
                     * 
                     */
                    void SetCustomMetricLabels(const std::vector<MetricLabel>& _customMetricLabels);

                    /**
                     * 判断参数 CustomMetricLabels 是否已赋值
                     * @return CustomMetricLabels 是否已赋值
                     * 
                     */
                    bool CustomMetricLabelsHasBeenSet() const;

                private:

                    /**
                     * Target topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Region information for the topic
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Topic type: 0 for log topic, and 1 for metric topic
                     */
                    int64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * Metric name. When BizType is 1, MetricName needs to be specified.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Metric NameWhen BizType is 1, prioritize using the MetricNames field. Multiple metrics can only be filled in the MetricNames field, while it's recommended to fill a single metric in the MetricName field.
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * Metric dimension. Not accept time type.
                     */
                    std::vector<std::string> m_metricLabels;
                    bool m_metricLabelsHasBeenSet;

                    /**
                     * Metric timestamp. The default value is the left time point of the SQL query time range, but you can also specify other fields (The type is uinx time, TimeStamp, and precision millisecond) as the metric timestamp.
                     */
                    std::string m_customTime;
                    bool m_customTimeHasBeenSet;

                    /**
                     * In addition to MetricLabels, this parameter can be used to supplement static dimensions for the metric.
Dimension names must start with a letter or underscore, followed by letters, digits, or underscores, with a length less than or equal to 1024 bytes.
                     */
                    std::vector<MetricLabel> m_customMetricLabels;
                    bool m_customMetricLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SCHEDULEDSQLRESOUCEINFO_H_
