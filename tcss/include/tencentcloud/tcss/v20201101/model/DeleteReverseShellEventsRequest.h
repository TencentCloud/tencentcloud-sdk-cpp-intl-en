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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEREVERSESHELLEVENTSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEREVERSESHELLEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DeleteReverseShellEvents request structure.
                */
                class DeleteReverseShellEventsRequest : public AbstractModel
                {
                public:
                    DeleteReverseShellEventsRequest();
                    ~DeleteReverseShellEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Event IDs
                     * @return EventIdSet Event IDs
                     * 
                     */
                    std::vector<std::string> GetEventIdSet() const;

                    /**
                     * 设置Event IDs
                     * @param _eventIdSet Event IDs
                     * 
                     */
                    void SetEventIdSet(const std::vector<std::string>& _eventIdSet);

                    /**
                     * 判断参数 EventIdSet 是否已赋值
                     * @return EventIdSet 是否已赋值
                     * 
                     */
                    bool EventIdSetHasBeenSet() const;

                private:

                    /**
                     * Event IDs
                     */
                    std::vector<std::string> m_eventIdSet;
                    bool m_eventIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEREVERSESHELLEVENTSREQUEST_H_
