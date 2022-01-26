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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_EVENTITEM_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_EVENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/EventInfo.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Modification details of one parameter
                */
                class EventItem : public AbstractModel
                {
                public:
                    EventItem();
                    ~EventItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ParamName Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ParamName Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取The number of modification events
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EventCount The number of modification events
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置The number of modification events
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param EventCount The number of modification events
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取Modification event details
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EventDetail Modification event details
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<EventInfo> GetEventDetail() const;

                    /**
                     * 设置Modification event details
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param EventDetail Modification event details
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEventDetail(const std::vector<EventInfo>& _eventDetail);

                    /**
                     * 判断参数 EventDetail 是否已赋值
                     * @return EventDetail 是否已赋值
                     */
                    bool EventDetailHasBeenSet() const;

                private:

                    /**
                     * Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * The number of modification events
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * Modification event details
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<EventInfo> m_eventDetail;
                    bool m_eventDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_EVENTITEM_H_
