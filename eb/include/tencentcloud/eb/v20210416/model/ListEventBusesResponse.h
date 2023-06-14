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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_LISTEVENTBUSESRESPONSE_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_LISTEVENTBUSESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/EventBus.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * ListEventBuses response structure.
                */
                class ListEventBusesResponse : public AbstractModel
                {
                public:
                    ListEventBusesResponse();
                    ~ListEventBusesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Event bus information
                     * @return EventBuses Event bus information
                     * 
                     */
                    std::vector<EventBus> GetEventBuses() const;

                    /**
                     * 判断参数 EventBuses 是否已赋值
                     * @return EventBuses 是否已赋值
                     * 
                     */
                    bool EventBusesHasBeenSet() const;

                    /**
                     * 获取Total number of event buses
                     * @return TotalCount Total number of event buses
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Event bus information
                     */
                    std::vector<EventBus> m_eventBuses;
                    bool m_eventBusesHasBeenSet;

                    /**
                     * Total number of event buses
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_LISTEVENTBUSESRESPONSE_H_
