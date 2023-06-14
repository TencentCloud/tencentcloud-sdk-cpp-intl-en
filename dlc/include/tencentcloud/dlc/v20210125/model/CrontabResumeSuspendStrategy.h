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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CRONTABRESUMESUSPENDSTRATEGY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CRONTABRESUMESUSPENDSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Scheduled start and suspension information
                */
                class CrontabResumeSuspendStrategy : public AbstractModel
                {
                public:
                    CrontabResumeSuspendStrategy();
                    ~CrontabResumeSuspendStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The scheduled start time, such as 8:00 AM every Monday.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResumeTime The scheduled start time, such as 8:00 AM every Monday.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResumeTime() const;

                    /**
                     * 设置The scheduled start time, such as 8:00 AM every Monday.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resumeTime The scheduled start time, such as 8:00 AM every Monday.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResumeTime(const std::string& _resumeTime);

                    /**
                     * 判断参数 ResumeTime 是否已赋值
                     * @return ResumeTime 是否已赋值
                     * 
                     */
                    bool ResumeTimeHasBeenSet() const;

                    /**
                     * 获取The scheduled suspension time, such as 8:00 PM every Monday.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SuspendTime The scheduled suspension time, such as 8:00 PM every Monday.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSuspendTime() const;

                    /**
                     * 设置The scheduled suspension time, such as 8:00 PM every Monday.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _suspendTime The scheduled suspension time, such as 8:00 PM every Monday.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSuspendTime(const std::string& _suspendTime);

                    /**
                     * 判断参数 SuspendTime 是否已赋值
                     * @return SuspendTime 是否已赋值
                     * 
                     */
                    bool SuspendTimeHasBeenSet() const;

                    /**
                     * 获取The suspension setting. Valid values: `0` (suspension after task end, default) and `1` (force suspension).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SuspendStrategy The suspension setting. Valid values: `0` (suspension after task end, default) and `1` (force suspension).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSuspendStrategy() const;

                    /**
                     * 设置The suspension setting. Valid values: `0` (suspension after task end, default) and `1` (force suspension).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _suspendStrategy The suspension setting. Valid values: `0` (suspension after task end, default) and `1` (force suspension).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSuspendStrategy(const int64_t& _suspendStrategy);

                    /**
                     * 判断参数 SuspendStrategy 是否已赋值
                     * @return SuspendStrategy 是否已赋值
                     * 
                     */
                    bool SuspendStrategyHasBeenSet() const;

                private:

                    /**
                     * The scheduled start time, such as 8:00 AM every Monday.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resumeTime;
                    bool m_resumeTimeHasBeenSet;

                    /**
                     * The scheduled suspension time, such as 8:00 PM every Monday.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_suspendTime;
                    bool m_suspendTimeHasBeenSet;

                    /**
                     * The suspension setting. Valid values: `0` (suspension after task end, default) and `1` (force suspension).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_suspendStrategy;
                    bool m_suspendStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CRONTABRESUMESUSPENDSTRATEGY_H_
