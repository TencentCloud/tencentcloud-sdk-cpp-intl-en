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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_STORAGESUMMARYDISTRIBUTION_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_STORAGESUMMARYDISTRIBUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Dps.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * HDFS Cloud File Storage (CFS) details.
                */
                class StorageSummaryDistribution : public AbstractModel
                {
                public:
                    StorageSummaryDistribution();
                    ~StorageSummaryDistribution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data item.
                     * @return MetricItem Data item.
                     * 
                     */
                    std::string GetMetricItem() const;

                    /**
                     * 设置Data item.
                     * @param _metricItem Data item.
                     * 
                     */
                    void SetMetricItem(const std::string& _metricItem);

                    /**
                     * 判断参数 MetricItem 是否已赋值
                     * @return MetricItem 是否已赋值
                     * 
                     */
                    bool MetricItemHasBeenSet() const;

                    /**
                     * 获取Data item description.
                     * @return MetricName Data item description.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Data item description.
                     * @param _metricName Data item description.
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
                     * 获取Sampling value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Dps Sampling value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Dps> GetDps() const;

                    /**
                     * 设置Sampling value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dps Sampling value.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDps(const std::vector<Dps>& _dps);

                    /**
                     * 判断参数 Dps 是否已赋值
                     * @return Dps 是否已赋值
                     * 
                     */
                    bool DpsHasBeenSet() const;

                private:

                    /**
                     * Data item.
                     */
                    std::string m_metricItem;
                    bool m_metricItemHasBeenSet;

                    /**
                     * Data item description.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Sampling value.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Dps> m_dps;
                    bool m_dpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STORAGESUMMARYDISTRIBUTION_H_
