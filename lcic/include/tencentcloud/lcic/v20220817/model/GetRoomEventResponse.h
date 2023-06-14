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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMEVENTRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMEVENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/EventInfo.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * GetRoomEvent response structure.
                */
                class GetRoomEventResponse : public AbstractModel
                {
                public:
                    GetRoomEventResponse();
                    ~GetRoomEventResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of events for the room. The value of this parameter is not affected by `keyword`.
                     * @return Total The total number of events for the room. The value of this parameter is not affected by `keyword`.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取The event details, including the type and time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Events The event details, including the type and time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<EventInfo> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                private:

                    /**
                     * The total number of events for the room. The value of this parameter is not affected by `keyword`.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * The event details, including the type and time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<EventInfo> m_events;
                    bool m_eventsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMEVENTRESPONSE_H_
