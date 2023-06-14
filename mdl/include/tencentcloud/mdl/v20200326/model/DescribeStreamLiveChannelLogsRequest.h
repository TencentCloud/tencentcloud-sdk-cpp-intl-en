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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVECHANNELLOGSREQUEST_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVECHANNELLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * DescribeStreamLiveChannelLogs request structure.
                */
                class DescribeStreamLiveChannelLogsRequest : public AbstractModel
                {
                public:
                    DescribeStreamLiveChannelLogsRequest();
                    ~DescribeStreamLiveChannelLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID
                     * @return ChannelId Channel ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID
                     * @param _channelId Channel ID
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Start time for query, which is 1 hour ago by default. You can query logs in the last 7 days.
UTC time, such as `2020-01-01T12:00:00Z`
                     * @return StartTime Start time for query, which is 1 hour ago by default. You can query logs in the last 7 days.
UTC time, such as `2020-01-01T12:00:00Z`
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time for query, which is 1 hour ago by default. You can query logs in the last 7 days.
UTC time, such as `2020-01-01T12:00:00Z`
                     * @param _startTime Start time for query, which is 1 hour ago by default. You can query logs in the last 7 days.
UTC time, such as `2020-01-01T12:00:00Z`
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time for query, which is 1 hour after `StartTime` by default
UTC time, such as `2020-01-01T12:00:00Z`
                     * @return EndTime End time for query, which is 1 hour after `StartTime` by default
UTC time, such as `2020-01-01T12:00:00Z`
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time for query, which is 1 hour after `StartTime` by default
UTC time, such as `2020-01-01T12:00:00Z`
                     * @param _endTime End time for query, which is 1 hour after `StartTime` by default
UTC time, such as `2020-01-01T12:00:00Z`
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Start time for query, which is 1 hour ago by default. You can query logs in the last 7 days.
UTC time, such as `2020-01-01T12:00:00Z`
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time for query, which is 1 hour after `StartTime` by default
UTC time, such as `2020-01-01T12:00:00Z`
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_DESCRIBESTREAMLIVECHANNELLOGSREQUEST_H_
