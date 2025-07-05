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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTASYNCEVENTSRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTASYNCEVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/AsyncEvent.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ListAsyncEvents response structure.
                */
                class ListAsyncEventsResponse : public AbstractModel
                {
                public:
                    ListAsyncEventsResponse();
                    ~ListAsyncEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of events that meet the filter
                     * @return TotalCount Total number of events that meet the filter
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Async event list
                     * @return EventList Async event list
                     * 
                     */
                    std::vector<AsyncEvent> GetEventList() const;

                    /**
                     * 判断参数 EventList 是否已赋值
                     * @return EventList 是否已赋值
                     * 
                     */
                    bool EventListHasBeenSet() const;

                private:

                    /**
                     * Total number of events that meet the filter
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Async event list
                     */
                    std::vector<AsyncEvent> m_eventList;
                    bool m_eventListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTASYNCEVENTSRESPONSE_H_
