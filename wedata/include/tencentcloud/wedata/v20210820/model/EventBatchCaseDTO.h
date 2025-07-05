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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTBATCHCASEDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTBATCHCASEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Event Continuous Time Instance Information
                */
                class EventBatchCaseDTO : public AbstractModel
                {
                public:
                    EventBatchCaseDTO();
                    ~EventBatchCaseDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event Instance ID
                     * @return CaseId Event Instance ID
                     * 
                     */
                    std::string GetCaseId() const;

                    /**
                     * 设置Event Instance ID
                     * @param _caseId Event Instance ID
                     * 
                     */
                    void SetCaseId(const std::string& _caseId);

                    /**
                     * 判断参数 CaseId 是否已赋值
                     * @return CaseId 是否已赋值
                     * 
                     */
                    bool CaseIdHasBeenSet() const;

                    /**
                     * 获取Event
                     * @return Name Event
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Event
                     * @param _name Event
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Event Trigger Start Time
                     * @return StartDimension Event Trigger Start Time
                     * 
                     */
                    std::string GetStartDimension() const;

                    /**
                     * 设置Event Trigger Start Time
                     * @param _startDimension Event Trigger Start Time
                     * 
                     */
                    void SetStartDimension(const std::string& _startDimension);

                    /**
                     * 判断参数 StartDimension 是否已赋值
                     * @return StartDimension 是否已赋值
                     * 
                     */
                    bool StartDimensionHasBeenSet() const;

                    /**
                     * 获取Creation Time
                     * @return CreationTs Creation Time
                     * 
                     */
                    std::string GetCreationTs() const;

                    /**
                     * 设置Creation Time
                     * @param _creationTs Creation Time
                     * 
                     */
                    void SetCreationTs(const std::string& _creationTs);

                    /**
                     * 判断参数 CreationTs 是否已赋值
                     * @return CreationTs 是否已赋值
                     * 
                     */
                    bool CreationTsHasBeenSet() const;

                    /**
                     * 获取Consumer ID
                     * @return ConsumerId Consumer ID
                     * 
                     */
                    std::string GetConsumerId() const;

                    /**
                     * 设置Consumer ID
                     * @param _consumerId Consumer ID
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
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Event Trigger End Time
                     * @return EndDimension Event Trigger End Time
                     * 
                     */
                    std::string GetEndDimension() const;

                    /**
                     * 设置Event Trigger End Time
                     * @param _endDimension Event Trigger End Time
                     * 
                     */
                    void SetEndDimension(const std::string& _endDimension);

                    /**
                     * 判断参数 EndDimension 是否已赋值
                     * @return EndDimension 是否已赋值
                     * 
                     */
                    bool EndDimensionHasBeenSet() const;

                    /**
                     * 获取Event Cycle
                     * @return EventSubType Event Cycle
                     * 
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置Event Cycle
                     * @param _eventSubType Event Cycle
                     * 
                     */
                    void SetEventSubType(const std::string& _eventSubType);

                    /**
                     * 判断参数 EventSubType 是否已赋值
                     * @return EventSubType 是否已赋值
                     * 
                     */
                    bool EventSubTypeHasBeenSet() const;

                private:

                    /**
                     * Event Instance ID
                     */
                    std::string m_caseId;
                    bool m_caseIdHasBeenSet;

                    /**
                     * Event
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Event Trigger Start Time
                     */
                    std::string m_startDimension;
                    bool m_startDimensionHasBeenSet;

                    /**
                     * Creation Time
                     */
                    std::string m_creationTs;
                    bool m_creationTsHasBeenSet;

                    /**
                     * Consumer ID
                     */
                    std::string m_consumerId;
                    bool m_consumerIdHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Event Trigger End Time
                     */
                    std::string m_endDimension;
                    bool m_endDimensionHasBeenSet;

                    /**
                     * Event Cycle
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EVENTBATCHCASEDTO_H_
