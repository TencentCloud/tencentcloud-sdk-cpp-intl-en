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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSTENDENCYINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSTENDENCYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Trojan trend details
                */
                class VirusTendencyInfo : public AbstractModel
                {
                public:
                    VirusTendencyInfo();
                    ~VirusTendencyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Date
                     * @return Date Date
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Date
                     * @param Date Date
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取Total number of pending events
                     * @return PendingEventCount Total number of pending events
                     */
                    uint64_t GetPendingEventCount() const;

                    /**
                     * 设置Total number of pending events
                     * @param PendingEventCount Total number of pending events
                     */
                    void SetPendingEventCount(const uint64_t& _pendingEventCount);

                    /**
                     * 判断参数 PendingEventCount 是否已赋值
                     * @return PendingEventCount 是否已赋值
                     */
                    bool PendingEventCountHasBeenSet() const;

                    /**
                     * 获取Total number of containers at risk
                     * @return RiskContainerCount Total number of containers at risk
                     */
                    uint64_t GetRiskContainerCount() const;

                    /**
                     * 设置Total number of containers at risk
                     * @param RiskContainerCount Total number of containers at risk
                     */
                    void SetRiskContainerCount(const uint64_t& _riskContainerCount);

                    /**
                     * 判断参数 RiskContainerCount 是否已赋值
                     * @return RiskContainerCount 是否已赋值
                     */
                    bool RiskContainerCountHasBeenSet() const;

                    /**
                     * 获取Total number of events
                     * @return EventCount Total number of events
                     */
                    uint64_t GetEventCount() const;

                    /**
                     * 设置Total number of events
                     * @param EventCount Total number of events
                     */
                    void SetEventCount(const uint64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取Total number of isolated events
                     * @return IsolateEventCount Total number of isolated events
                     */
                    uint64_t GetIsolateEventCount() const;

                    /**
                     * 设置Total number of isolated events
                     * @param IsolateEventCount Total number of isolated events
                     */
                    void SetIsolateEventCount(const uint64_t& _isolateEventCount);

                    /**
                     * 判断参数 IsolateEventCount 是否已赋值
                     * @return IsolateEventCount 是否已赋值
                     */
                    bool IsolateEventCountHasBeenSet() const;

                private:

                    /**
                     * Date
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * Total number of pending events
                     */
                    uint64_t m_pendingEventCount;
                    bool m_pendingEventCountHasBeenSet;

                    /**
                     * Total number of containers at risk
                     */
                    uint64_t m_riskContainerCount;
                    bool m_riskContainerCountHasBeenSet;

                    /**
                     * Total number of events
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * Total number of isolated events
                     */
                    uint64_t m_isolateEventCount;
                    bool m_isolateEventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VIRUSTENDENCYINFO_H_
