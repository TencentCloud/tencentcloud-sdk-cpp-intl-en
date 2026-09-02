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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULEPLANINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULEPLANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Future trigger plan entry
                */
                class AiSchedulePlanInfo : public AbstractModel
                {
                public:
                    AiSchedulePlanInfo();
                    ~AiSchedulePlanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Trigger ID.
                     * @return TriggerId Trigger ID.
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置Trigger ID.
                     * @param _triggerId Trigger ID.
                     * 
                     */
                    void SetTriggerId(const std::string& _triggerId);

                    /**
                     * 判断参数 TriggerId 是否已赋值
                     * @return TriggerId 是否已赋值
                     * 
                     */
                    bool TriggerIdHasBeenSet() const;

                    /**
                     * 获取Expected trigger time, Unix millisecond timestamp.
                     * @return FireTime Expected trigger time, Unix millisecond timestamp.
                     * 
                     */
                    int64_t GetFireTime() const;

                    /**
                     * 设置Expected trigger time, Unix millisecond timestamp.
                     * @param _fireTime Expected trigger time, Unix millisecond timestamp.
                     * 
                     */
                    void SetFireTime(const int64_t& _fireTime);

                    /**
                     * 判断参数 FireTime 是否已赋值
                     * @return FireTime 是否已赋值
                     * 
                     */
                    bool FireTimeHasBeenSet() const;

                    /**
                     * 获取Trigger type. Parameter Value: 1 (Cron expression), 2 (fixed time).
                     * @return TriggerType Trigger type. Parameter Value: 1 (Cron expression), 2 (fixed time).
                     * 
                     */
                    int64_t GetTriggerType() const;

                    /**
                     * 设置Trigger type. Parameter Value: 1 (Cron expression), 2 (fixed time).
                     * @param _triggerType Trigger type. Parameter Value: 1 (Cron expression), 2 (fixed time).
                     * 
                     */
                    void SetTriggerType(const int64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                private:

                    /**
                     * Trigger ID.
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * Expected trigger time, Unix millisecond timestamp.
                     */
                    int64_t m_fireTime;
                    bool m_fireTimeHasBeenSet;

                    /**
                     * Trigger type. Parameter Value: 1 (Cron expression), 2 (fixed time).
                     */
                    int64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_AISCHEDULEPLANINFO_H_
