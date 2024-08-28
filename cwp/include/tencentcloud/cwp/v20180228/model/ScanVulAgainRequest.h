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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULAGAINREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULAGAINREQUEST_H_

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
                * ScanVulAgain request structure.
                */
                class ScanVulAgainRequest : public AbstractModel
                {
                public:
                    ScanVulAgainRequest();
                    ~ScanVulAgainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability event ID string (Multiple entries are separated by English commas.)
                     * @return EventIds Vulnerability event ID string (Multiple entries are separated by English commas.)
                     * 
                     */
                    std::string GetEventIds() const;

                    /**
                     * 设置Vulnerability event ID string (Multiple entries are separated by English commas.)
                     * @param _eventIds Vulnerability event ID string (Multiple entries are separated by English commas.)
                     * 
                     */
                    void SetEventIds(const std::string& _eventIds);

                    /**
                     * 判断参数 EventIds 是否已赋值
                     * @return EventIds 是否已赋值
                     * 
                     */
                    bool EventIdsHasBeenSet() const;

                    /**
                     * 获取Recheck machine UUID (Multiple entries are separated by commas.)
                     * @return Uuids Recheck machine UUID (Multiple entries are separated by commas.)
                     * 
                     */
                    std::string GetUuids() const;

                    /**
                     * 设置Recheck machine UUID (Multiple entries are separated by commas.)
                     * @param _uuids Recheck machine UUID (Multiple entries are separated by commas.)
                     * 
                     */
                    void SetUuids(const std::string& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                private:

                    /**
                     * Vulnerability event ID string (Multiple entries are separated by English commas.)
                     */
                    std::string m_eventIds;
                    bool m_eventIdsHasBeenSet;

                    /**
                     * Recheck machine UUID (Multiple entries are separated by commas.)
                     */
                    std::string m_uuids;
                    bool m_uuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULAGAINREQUEST_H_
