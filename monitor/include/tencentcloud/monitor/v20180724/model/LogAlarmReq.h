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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_LOGALARMREQ_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_LOGALARMREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/LogFilterInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Log alarm request information
                */
                class LogAlarmReq : public AbstractModel
                {
                public:
                    LogAlarmReq();
                    ~LogAlarmReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取APM instance ID
                     * @return InstanceId APM instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置APM instance ID
                     * @param InstanceId APM instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Search condition
                     * @return Filter Search condition
                     */
                    std::vector<LogFilterInfo> GetFilter() const;

                    /**
                     * 设置Search condition
                     * @param Filter Search condition
                     */
                    void SetFilter(const std::vector<LogFilterInfo>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取The switch to enable/disable alarm merging
                     * @return AlarmMerge The switch to enable/disable alarm merging
                     */
                    std::string GetAlarmMerge() const;

                    /**
                     * 设置The switch to enable/disable alarm merging
                     * @param AlarmMerge The switch to enable/disable alarm merging
                     */
                    void SetAlarmMerge(const std::string& _alarmMerge);

                    /**
                     * 判断参数 AlarmMerge 是否已赋值
                     * @return AlarmMerge 是否已赋值
                     */
                    bool AlarmMergeHasBeenSet() const;

                    /**
                     * 获取Alarm merging time
                     * @return AlarmMergeTime Alarm merging time
                     */
                    std::string GetAlarmMergeTime() const;

                    /**
                     * 设置Alarm merging time
                     * @param AlarmMergeTime Alarm merging time
                     */
                    void SetAlarmMergeTime(const std::string& _alarmMergeTime);

                    /**
                     * 判断参数 AlarmMergeTime 是否已赋值
                     * @return AlarmMergeTime 是否已赋值
                     */
                    bool AlarmMergeTimeHasBeenSet() const;

                private:

                    /**
                     * APM instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Search condition
                     */
                    std::vector<LogFilterInfo> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * The switch to enable/disable alarm merging
                     */
                    std::string m_alarmMerge;
                    bool m_alarmMergeHasBeenSet;

                    /**
                     * Alarm merging time
                     */
                    std::string m_alarmMergeTime;
                    bool m_alarmMergeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_LOGALARMREQ_H_
