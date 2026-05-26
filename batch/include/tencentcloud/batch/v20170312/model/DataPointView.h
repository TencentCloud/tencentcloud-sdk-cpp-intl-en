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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DATAPOINTVIEW_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DATAPOINTVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Monitor the collected data.
                */
                class DataPointView : public AbstractModel
                {
                public:
                    DataPointView();
                    ~DataPointView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The time when monitoring data is collected

                     * @return Timestamps The time when monitoring data is collected

                     * 
                     */
                    std::vector<int64_t> GetTimestamps() const;

                    /**
                     * 设置The time when monitoring data is collected

                     * @param _timestamps The time when monitoring data is collected

                     * 
                     */
                    void SetTimestamps(const std::vector<int64_t>& _timestamps);

                    /**
                     * 判断参数 Timestamps 是否已赋值
                     * @return Timestamps 是否已赋值
                     * 
                     */
                    bool TimestampsHasBeenSet() const;

                    /**
                     * 获取Monitoring metric data; if involved in the gap time of monitoring data of multiple instances, the value will be null

                     * @return Values Monitoring metric data; if involved in the gap time of monitoring data of multiple instances, the value will be null

                     * 
                     */
                    std::vector<double> GetValues() const;

                    /**
                     * 设置Monitoring metric data; if involved in the gap time of monitoring data of multiple instances, the value will be null

                     * @param _values Monitoring metric data; if involved in the gap time of monitoring data of multiple instances, the value will be null

                     * 
                     */
                    void SetValues(const std::vector<double>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * The time when monitoring data is collected

                     */
                    std::vector<int64_t> m_timestamps;
                    bool m_timestampsHasBeenSet;

                    /**
                     * Monitoring metric data; if involved in the gap time of monitoring data of multiple instances, the value will be null

                     */
                    std::vector<double> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DATAPOINTVIEW_H_
