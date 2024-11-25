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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_AUTOUPGRADEOPTIONS_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_AUTOUPGRADEOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Ops window settings of managed node pools
                */
                class AutoUpgradeOptions : public AbstractModel
                {
                public:
                    AutoUpgradeOptions();
                    ~AutoUpgradeOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Automatic upgrade start time
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return AutoUpgradeStartTime Automatic upgrade start time
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAutoUpgradeStartTime() const;

                    /**
                     * 设置Automatic upgrade start time
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _autoUpgradeStartTime Automatic upgrade start time
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAutoUpgradeStartTime(const std::string& _autoUpgradeStartTime);

                    /**
                     * 判断参数 AutoUpgradeStartTime 是否已赋值
                     * @return AutoUpgradeStartTime 是否已赋值
                     * 
                     */
                    bool AutoUpgradeStartTimeHasBeenSet() const;

                    /**
                     * 获取Automatic upgrade duration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Duration Automatic upgrade duration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置Automatic upgrade duration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _duration Automatic upgrade duration
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Ops date
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return WeeklyPeriod Ops date
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetWeeklyPeriod() const;

                    /**
                     * 设置Ops date
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _weeklyPeriod Ops date
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWeeklyPeriod(const std::vector<std::string>& _weeklyPeriod);

                    /**
                     * 判断参数 WeeklyPeriod 是否已赋值
                     * @return WeeklyPeriod 是否已赋值
                     * 
                     */
                    bool WeeklyPeriodHasBeenSet() const;

                private:

                    /**
                     * Automatic upgrade start time
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_autoUpgradeStartTime;
                    bool m_autoUpgradeStartTimeHasBeenSet;

                    /**
                     * Automatic upgrade duration
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Ops date
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_weeklyPeriod;
                    bool m_weeklyPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_AUTOUPGRADEOPTIONS_H_
