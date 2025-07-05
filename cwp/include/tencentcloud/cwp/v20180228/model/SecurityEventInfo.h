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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SECURITYEVENTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SECURITYEVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * List of security event statistics
                */
                class SecurityEventInfo : public AbstractModel
                {
                public:
                    SecurityEventInfo();
                    ~SecurityEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of security events
                     * @return EventCnt Number of security events
                     * 
                     */
                    uint64_t GetEventCnt() const;

                    /**
                     * 设置Number of security events
                     * @param _eventCnt Number of security events
                     * 
                     */
                    void SetEventCnt(const uint64_t& _eventCnt);

                    /**
                     * 判断参数 EventCnt 是否已赋值
                     * @return EventCnt 是否已赋值
                     * 
                     */
                    bool EventCntHasBeenSet() const;

                    /**
                     * 获取Number of affected machines
                     * @return UuidCnt Number of affected machines
                     * 
                     */
                    uint64_t GetUuidCnt() const;

                    /**
                     * 设置Number of affected machines
                     * @param _uuidCnt Number of affected machines
                     * 
                     */
                    void SetUuidCnt(const uint64_t& _uuidCnt);

                    /**
                     * 判断参数 UuidCnt 是否已赋值
                     * @return UuidCnt 是否已赋值
                     * 
                     */
                    bool UuidCntHasBeenSet() const;

                private:

                    /**
                     * Number of security events
                     */
                    uint64_t m_eventCnt;
                    bool m_eventCntHasBeenSet;

                    /**
                     * Number of affected machines
                     */
                    uint64_t m_uuidCnt;
                    bool m_uuidCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SECURITYEVENTINFO_H_
