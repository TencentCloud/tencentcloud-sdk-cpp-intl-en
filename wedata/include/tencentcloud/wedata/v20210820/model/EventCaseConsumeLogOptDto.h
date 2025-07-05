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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASECONSUMELOGOPTDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASECONSUMELOGOPTDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskOpsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Event Consumption Record
                */
                class EventCaseConsumeLogOptDto : public AbstractModel
                {
                public:
                    EventCaseConsumeLogOptDto();
                    ~EventCaseConsumeLogOptDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Consumer ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ConsumeLogId Consumer ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetConsumeLogId() const;

                    /**
                     * 设置Consumer ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _consumeLogId Consumer ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetConsumeLogId(const std::string& _consumeLogId);

                    /**
                     * 判断参数 ConsumeLogId 是否已赋值
                     * @return ConsumeLogId 是否已赋值
                     * 
                     */
                    bool ConsumeLogIdHasBeenSet() const;

                    /**
                     * 获取Event Case ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @return EventCaseId Event Case ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEventCaseId() const;

                    /**
                     * 设置Event Case ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _eventCaseId Event Case ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEventCaseId(const std::string& _eventCaseId);

                    /**
                     * 判断参数 EventCaseId 是否已赋值
                     * @return EventCaseId 是否已赋值
                     * 
                     */
                    bool EventCaseIdHasBeenSet() const;

                    /**
                     * 获取Consumer ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ConsumerId Consumer ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetConsumerId() const;

                    /**
                     * 设置Consumer ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _consumerId Consumer ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetConsumerId(const std::string& _consumerId);

                    /**
                     * 判断参数 ConsumerId 是否已赋值
                     * @return ConsumerId 是否已赋值
                     * 
                     */
                    bool ConsumerIdHasBeenSet() const;

                    /**
                     * 获取Consumption Timestamp\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreationTimestamp Consumption Timestamp\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreationTimestamp() const;

                    /**
                     * 设置Consumption Timestamp\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _creationTimestamp Consumption Timestamp\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreationTimestamp(const std::string& _creationTimestamp);

                    /**
                     * 判断参数 CreationTimestamp 是否已赋值
                     * @return CreationTimestamp 是否已赋值
                     * 
                     */
                    bool CreationTimestampHasBeenSet() const;

                    /**
                     * 获取Task DetailsNote: This field may return null, indicating that no valid value can be obtained.
                     * @return ConsumerDetail Task DetailsNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    TaskOpsDto GetConsumerDetail() const;

                    /**
                     * 设置Task DetailsNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _consumerDetail Task DetailsNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetConsumerDetail(const TaskOpsDto& _consumerDetail);

                    /**
                     * 判断参数 ConsumerDetail 是否已赋值
                     * @return ConsumerDetail 是否已赋值
                     * 
                     */
                    bool ConsumerDetailHasBeenSet() const;

                private:

                    /**
                     * Consumer ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_consumeLogId;
                    bool m_consumeLogIdHasBeenSet;

                    /**
                     * Event Case ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_eventCaseId;
                    bool m_eventCaseIdHasBeenSet;

                    /**
                     * Consumer ID\nNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_consumerId;
                    bool m_consumerIdHasBeenSet;

                    /**
                     * Consumption Timestamp\nNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_creationTimestamp;
                    bool m_creationTimestampHasBeenSet;

                    /**
                     * Task DetailsNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    TaskOpsDto m_consumerDetail;
                    bool m_consumerDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTCASECONSUMELOGOPTDTO_H_
