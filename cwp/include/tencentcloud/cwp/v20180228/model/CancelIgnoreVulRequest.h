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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CANCELIGNOREVULREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CANCELIGNOREVULREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CancelIgnoreVul request structure.
                */
                class CancelIgnoreVulRequest : public AbstractModel
                {
                public:
                    CancelIgnoreVulRequest();
                    ~CancelIgnoreVulRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability event ID string (multiple entries are separated by comma)
                     * @return EventIds Vulnerability event ID string (multiple entries are separated by comma)
                     * 
                     */
                    std::string GetEventIds() const;

                    /**
                     * 设置Vulnerability event ID string (multiple entries are separated by comma)
                     * @param _eventIds Vulnerability event ID string (multiple entries are separated by comma)
                     * 
                     */
                    void SetEventIds(const std::string& _eventIds);

                    /**
                     * 判断参数 EventIds 是否已赋值
                     * @return EventIds 是否已赋值
                     * 
                     */
                    bool EventIdsHasBeenSet() const;

                private:

                    /**
                     * Vulnerability event ID string (multiple entries are separated by comma)
                     */
                    std::string m_eventIds;
                    bool m_eventIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CANCELIGNOREVULREQUEST_H_
