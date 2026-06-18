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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RELATEDEVENT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RELATEDEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Related Attack Event Structure
                */
                class RelatedEvent : public AbstractModel
                {
                public:
                    RelatedEvent();
                    ~RelatedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Event ID
                     * @return EventID Event ID
                     * 
                     */
                    std::string GetEventID() const;

                    /**
                     * 设置Event ID
                     * @param _eventID Event ID
                     * 
                     */
                    void SetEventID(const std::string& _eventID);

                    /**
                     * 判断参数 EventID 是否已赋值
                     * @return EventID 是否已赋值
                     * 
                     */
                    bool EventIDHasBeenSet() const;

                    /**
                     * 获取Event description
                     * @return Description Event description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Event description
                     * @param _description Event description
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
                     * 获取Number of Alarms Associated with Event
                     * @return RelatedCount Number of Alarms Associated with Event
                     * 
                     */
                    int64_t GetRelatedCount() const;

                    /**
                     * 设置Number of Alarms Associated with Event
                     * @param _relatedCount Number of Alarms Associated with Event
                     * 
                     */
                    void SetRelatedCount(const int64_t& _relatedCount);

                    /**
                     * 判断参数 RelatedCount 是否已赋值
                     * @return RelatedCount 是否已赋值
                     * 
                     */
                    bool RelatedCountHasBeenSet() const;

                private:

                    /**
                     * Event ID
                     */
                    std::string m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * Event description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Number of Alarms Associated with Event
                     */
                    int64_t m_relatedCount;
                    bool m_relatedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RELATEDEVENT_H_
