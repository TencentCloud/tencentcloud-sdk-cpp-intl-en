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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Shipping task information
                */
                class ShipperTaskInfo : public AbstractModel
                {
                public:
                    ShipperTaskInfo();
                    ~ShipperTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Shipping task ID
                     * @return TaskId Shipping task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Shipping task ID
                     * @param _taskId Shipping task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Shipping information ID
                     * @return ShipperId Shipping information ID
                     * 
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置Shipping information ID
                     * @param _shipperId Shipping information ID
                     * 
                     */
                    void SetShipperId(const std::string& _shipperId);

                    /**
                     * 判断参数 ShipperId 是否已赋值
                     * @return ShipperId 是否已赋值
                     * 
                     */
                    bool ShipperIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param _topicId Log topic ID
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
                     * 获取Start timestamp of the current batch of shipped logs in milliseconds
                     * @return RangeStart Start timestamp of the current batch of shipped logs in milliseconds
                     * 
                     */
                    int64_t GetRangeStart() const;

                    /**
                     * 设置Start timestamp of the current batch of shipped logs in milliseconds
                     * @param _rangeStart Start timestamp of the current batch of shipped logs in milliseconds
                     * 
                     */
                    void SetRangeStart(const int64_t& _rangeStart);

                    /**
                     * 判断参数 RangeStart 是否已赋值
                     * @return RangeStart 是否已赋值
                     * 
                     */
                    bool RangeStartHasBeenSet() const;

                    /**
                     * 获取End timestamp of the current batch of shipped logs in milliseconds
                     * @return RangeEnd End timestamp of the current batch of shipped logs in milliseconds
                     * 
                     */
                    int64_t GetRangeEnd() const;

                    /**
                     * 设置End timestamp of the current batch of shipped logs in milliseconds
                     * @param _rangeEnd End timestamp of the current batch of shipped logs in milliseconds
                     * 
                     */
                    void SetRangeEnd(const int64_t& _rangeEnd);

                    /**
                     * 判断参数 RangeEnd 是否已赋值
                     * @return RangeEnd 是否已赋值
                     * 
                     */
                    bool RangeEndHasBeenSet() const;

                    /**
                     * 获取Start timestamp of the current shipping task in milliseconds
                     * @return StartTime Start timestamp of the current shipping task in milliseconds
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start timestamp of the current shipping task in milliseconds
                     * @param _startTime Start timestamp of the current shipping task in milliseconds
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End timestamp of the current shipping task in milliseconds
                     * @return EndTime End timestamp of the current shipping task in milliseconds
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End timestamp of the current shipping task in milliseconds
                     * @param _endTime End timestamp of the current shipping task in milliseconds
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Result of the current shipping task. Valid values: `success`, `running`, `failed`
                     * @return Status Result of the current shipping task. Valid values: `success`, `running`, `failed`
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Result of the current shipping task. Valid values: `success`, `running`, `failed`
                     * @param _status Result of the current shipping task. Valid values: `success`, `running`, `failed`
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Result details
                     * @return Message Result details
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Result details
                     * @param _message Result details
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Shipping task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Shipping information ID
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Start timestamp of the current batch of shipped logs in milliseconds
                     */
                    int64_t m_rangeStart;
                    bool m_rangeStartHasBeenSet;

                    /**
                     * End timestamp of the current batch of shipped logs in milliseconds
                     */
                    int64_t m_rangeEnd;
                    bool m_rangeEndHasBeenSet;

                    /**
                     * Start timestamp of the current shipping task in milliseconds
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End timestamp of the current shipping task in milliseconds
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Result of the current shipping task. Valid values: `success`, `running`, `failed`
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Result details
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERTASKINFO_H_
