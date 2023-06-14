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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DATAPOINT_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DATAPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Dimension.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Monitoring data point
                */
                class DataPoint : public AbstractModel
                {
                public:
                    DataPoint();
                    ~DataPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Combination of instance object dimensions
                     * @return Dimensions Combination of instance object dimensions
                     * 
                     */
                    std::vector<Dimension> GetDimensions() const;

                    /**
                     * 设置Combination of instance object dimensions
                     * @param _dimensions Combination of instance object dimensions
                     * 
                     */
                    void SetDimensions(const std::vector<Dimension>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取The array of timestamps indicating at which points in time there is data. Missing timestamps have no data points (i.e., missed)
                     * @return Timestamps The array of timestamps indicating at which points in time there is data. Missing timestamps have no data points (i.e., missed)
                     * 
                     */
                    std::vector<double> GetTimestamps() const;

                    /**
                     * 设置The array of timestamps indicating at which points in time there is data. Missing timestamps have no data points (i.e., missed)
                     * @param _timestamps The array of timestamps indicating at which points in time there is data. Missing timestamps have no data points (i.e., missed)
                     * 
                     */
                    void SetTimestamps(const std::vector<double>& _timestamps);

                    /**
                     * 判断参数 Timestamps 是否已赋值
                     * @return Timestamps 是否已赋值
                     * 
                     */
                    bool TimestampsHasBeenSet() const;

                    /**
                     * 获取The array of monitoring values, which is in one-to-one correspondence to Timestamps
                     * @return Values The array of monitoring values, which is in one-to-one correspondence to Timestamps
                     * 
                     */
                    std::vector<double> GetValues() const;

                    /**
                     * 设置The array of monitoring values, which is in one-to-one correspondence to Timestamps
                     * @param _values The array of monitoring values, which is in one-to-one correspondence to Timestamps
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
                     * Combination of instance object dimensions
                     */
                    std::vector<Dimension> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * The array of timestamps indicating at which points in time there is data. Missing timestamps have no data points (i.e., missed)
                     */
                    std::vector<double> m_timestamps;
                    bool m_timestampsHasBeenSet;

                    /**
                     * The array of monitoring values, which is in one-to-one correspondence to Timestamps
                     */
                    std::vector<double> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DATAPOINT_H_
