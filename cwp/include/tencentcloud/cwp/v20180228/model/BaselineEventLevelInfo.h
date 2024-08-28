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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEEVENTLEVELINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEEVENTLEVELINFO_H_

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
                * Host information of Top server risks
                */
                class BaselineEventLevelInfo : public AbstractModel
                {
                public:
                    BaselineEventLevelInfo();
                    ~BaselineEventLevelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventLevel Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEventLevel() const;

                    /**
                     * 设置Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventLevel Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventLevel(const uint64_t& _eventLevel);

                    /**
                     * 判断参数 EventLevel 是否已赋值
                     * @return EventLevel 是否已赋值
                     * 
                     */
                    bool EventLevelHasBeenSet() const;

                    /**
                     * 获取Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventCount Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEventCount() const;

                    /**
                     * 设置Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _eventCount Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventCount(const uint64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                private:

                    /**
                     * Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_eventLevel;
                    bool m_eventLevelHasBeenSet;

                    /**
                     * Number of vulnerabilities
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEEVENTLEVELINFO_H_
