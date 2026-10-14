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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_FLOWSTATISTICSARRAY_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_FLOWSTATISTICSARRAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/FlowStatistics.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * List of the stream's statistical data.
                */
                class FlowStatisticsArray : public AbstractModel
                {
                public:
                    FlowStatisticsArray();
                    ~FlowStatisticsArray() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Timestamp.
                     * @return Timestamp Timestamp.
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置Timestamp.
                     * @param _timestamp Timestamp.
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Statistics for each session.
                     * @return FlowStatistics Statistics for each session.
                     * 
                     */
                    std::vector<FlowStatistics> GetFlowStatistics() const;

                    /**
                     * 设置Statistics for each session.
                     * @param _flowStatistics Statistics for each session.
                     * 
                     */
                    void SetFlowStatistics(const std::vector<FlowStatistics>& _flowStatistics);

                    /**
                     * 判断参数 FlowStatistics 是否已赋值
                     * @return FlowStatistics 是否已赋值
                     * 
                     */
                    bool FlowStatisticsHasBeenSet() const;

                private:

                    /**
                     * Timestamp.
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Statistics for each session.
                     */
                    std::vector<FlowStatistics> m_flowStatistics;
                    bool m_flowStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_FLOWSTATISTICSARRAY_H_
