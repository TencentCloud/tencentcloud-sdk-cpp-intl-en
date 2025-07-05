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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_QUERYMETRICITEM_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_QUERYMETRICITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Querying.
                */
                class QueryMetricItem : public AbstractModel
                {
                public:
                    QueryMetricItem();
                    ~QueryMetricItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric name.
                     * @return MetricName Metric name.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name.
                     * @param _metricName Metric name.
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
                     * 获取Year-Over-Year comparison is now supported for comparebyyesterday (compared to yesterday) and comparebylastweek (compared to last week). 
                     * @return Compares Year-Over-Year comparison is now supported for comparebyyesterday (compared to yesterday) and comparebylastweek (compared to last week). 
                     * 
                     */
                    std::vector<std::string> GetCompares() const;

                    /**
                     * 设置Year-Over-Year comparison is now supported for comparebyyesterday (compared to yesterday) and comparebylastweek (compared to last week). 
                     * @param _compares Year-Over-Year comparison is now supported for comparebyyesterday (compared to yesterday) and comparebylastweek (compared to last week). 
                     * 
                     */
                    void SetCompares(const std::vector<std::string>& _compares);

                    /**
                     * 判断参数 Compares 是否已赋值
                     * @return Compares 是否已赋值
                     * 
                     */
                    bool ComparesHasBeenSet() const;

                    /**
                     * 获取Year-On-Year, deprecated, not recommended for use.
                     * @return Compare Year-On-Year, deprecated, not recommended for use.
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置Year-On-Year, deprecated, not recommended for use.
                     * @param _compare Year-On-Year, deprecated, not recommended for use.
                     * 
                     */
                    void SetCompare(const std::string& _compare);

                    /**
                     * 判断参数 Compare 是否已赋值
                     * @return Compare 是否已赋值
                     * 
                     */
                    bool CompareHasBeenSet() const;

                private:

                    /**
                     * Metric name.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Year-Over-Year comparison is now supported for comparebyyesterday (compared to yesterday) and comparebylastweek (compared to last week). 
                     */
                    std::vector<std::string> m_compares;
                    bool m_comparesHasBeenSet;

                    /**
                     * Year-On-Year, deprecated, not recommended for use.
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_QUERYMETRICITEM_H_
