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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGEVENTSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDBDiagEvents request structure.
                */
                class DescribeDBDiagEventsRequest : public AbstractModel
                {
                public:
                    DescribeDBDiagEventsRequest();
                    ~DescribeDBDiagEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time in the format of “2021-05-27 00:00:00”. The earliest time that can be queried is 30 days before the current time.
                     * @return StartTime Start time in the format of “2021-05-27 00:00:00”. The earliest time that can be queried is 30 days before the current time.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in the format of “2021-05-27 00:00:00”. The earliest time that can be queried is 30 days before the current time.
                     * @param StartTime Start time in the format of “2021-05-27 00:00:00”. The earliest time that can be queried is 30 days before the current time.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time in the format of "2021-05-27 01:00:00". The interval between the end time and the start time can be up to 7 days.
                     * @return EndTime End time in the format of "2021-05-27 01:00:00". The interval between the end time and the start time can be up to 7 days.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in the format of "2021-05-27 01:00:00". The interval between the end time and the start time can be up to 7 days.
                     * @param EndTime End time in the format of "2021-05-27 01:00:00". The interval between the end time and the start time can be up to 7 days.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Risk level list. Valid values in descending order of severity: `1` (critical), `2` (serious), `3` (alarm), `4` (warning), `5` (healthy).
                     * @return Severities Risk level list. Valid values in descending order of severity: `1` (critical), `2` (serious), `3` (alarm), `4` (warning), `5` (healthy).
                     */
                    std::vector<int64_t> GetSeverities() const;

                    /**
                     * 设置Risk level list. Valid values in descending order of severity: `1` (critical), `2` (serious), `3` (alarm), `4` (warning), `5` (healthy).
                     * @param Severities Risk level list. Valid values in descending order of severity: `1` (critical), `2` (serious), `3` (alarm), `4` (warning), `5` (healthy).
                     */
                    void SetSeverities(const std::vector<int64_t>& _severities);

                    /**
                     * 判断参数 Severities 是否已赋值
                     * @return Severities 是否已赋值
                     */
                    bool SeveritiesHasBeenSet() const;

                    /**
                     * 获取Instance ID list.
                     * @return InstanceIds Instance ID list.
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list.
                     * @param InstanceIds Instance ID list.
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param Offset Offset. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 50.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 50.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 50.
                     * @param Limit Number of returned results. Default value: 20. Maximum value: 50.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Start time in the format of “2021-05-27 00:00:00”. The earliest time that can be queried is 30 days before the current time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in the format of "2021-05-27 01:00:00". The interval between the end time and the start time can be up to 7 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Risk level list. Valid values in descending order of severity: `1` (critical), `2` (serious), `3` (alarm), `4` (warning), `5` (healthy).
                     */
                    std::vector<int64_t> m_severities;
                    bool m_severitiesHasBeenSet;

                    /**
                     * Instance ID list.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 50.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGEVENTSREQUEST_H_
