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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_CHANNELOUTPUTSSTATISTICS_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_CHANNELOUTPUTSSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/OutputsStatistics.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Channel output information.
                */
                class ChannelOutputsStatistics : public AbstractModel
                {
                public:
                    ChannelOutputsStatistics();
                    ~ChannelOutputsStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Output group name.
                     * @return OutputGroupName Output group name.
                     */
                    std::string GetOutputGroupName() const;

                    /**
                     * 设置Output group name.
                     * @param OutputGroupName Output group name.
                     */
                    void SetOutputGroupName(const std::string& _outputGroupName);

                    /**
                     * 判断参数 OutputGroupName 是否已赋值
                     * @return OutputGroupName 是否已赋值
                     */
                    bool OutputGroupNameHasBeenSet() const;

                    /**
                     * 获取Output group statistics.
                     * @return Statistics Output group statistics.
                     */
                    OutputsStatistics GetStatistics() const;

                    /**
                     * 设置Output group statistics.
                     * @param Statistics Output group statistics.
                     */
                    void SetStatistics(const OutputsStatistics& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     */
                    bool StatisticsHasBeenSet() const;

                private:

                    /**
                     * Output group name.
                     */
                    std::string m_outputGroupName;
                    bool m_outputGroupNameHasBeenSet;

                    /**
                     * Output group statistics.
                     */
                    OutputsStatistics m_statistics;
                    bool m_statisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_CHANNELOUTPUTSSTATISTICS_H_
