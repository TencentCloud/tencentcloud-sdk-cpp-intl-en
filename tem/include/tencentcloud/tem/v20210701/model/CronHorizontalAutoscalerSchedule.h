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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_CRONHORIZONTALAUTOSCALERSCHEDULE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_CRONHORIZONTALAUTOSCALERSCHEDULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Details of a scheduled scaling policy
                */
                class CronHorizontalAutoscalerSchedule : public AbstractModel
                {
                public:
                    CronHorizontalAutoscalerSchedule();
                    ~CronHorizontalAutoscalerSchedule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Triggering time, in the format of HH:MM
Example:
00:00 (Trigger at midnight)
                     * @return StartAt Triggering time, in the format of HH:MM
Example:
00:00 (Trigger at midnight)
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置Triggering time, in the format of HH:MM
Example:
00:00 (Trigger at midnight)
                     * @param StartAt Triggering time, in the format of HH:MM
Example:
00:00 (Trigger at midnight)
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     */
                    bool StartAtHasBeenSet() const;

                    /**
                     * 获取Number of target pods (less than 50)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TargetReplicas Number of target pods (less than 50)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetTargetReplicas() const;

                    /**
                     * 设置Number of target pods (less than 50)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param TargetReplicas Number of target pods (less than 50)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTargetReplicas(const int64_t& _targetReplicas);

                    /**
                     * 判断参数 TargetReplicas 是否已赋值
                     * @return TargetReplicas 是否已赋值
                     */
                    bool TargetReplicasHasBeenSet() const;

                private:

                    /**
                     * Triggering time, in the format of HH:MM
Example:
00:00 (Trigger at midnight)
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                    /**
                     * Number of target pods (less than 50)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_targetReplicas;
                    bool m_targetReplicasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_CRONHORIZONTALAUTOSCALERSCHEDULE_H_
