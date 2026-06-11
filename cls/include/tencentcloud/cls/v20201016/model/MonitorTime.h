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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MONITORTIME_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MONITORTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Monitoring task execution time point in alarm policy
                */
                class MonitorTime : public AbstractModel
                {
                public:
                    MonitorTime();
                    ~MonitorTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Execution cycle. Value range: <code>Period</code>, <code>Fixed</code>, <code>Cron</code>.</p><ul><li>Period: at a fixed frequency</li><li>Fixed: fixed time</li><li>Cron: cron expression</li></ul>
                     * @return Type <p>Execution cycle. Value range: <code>Period</code>, <code>Fixed</code>, <code>Cron</code>.</p><ul><li>Period: at a fixed frequency</li><li>Fixed: fixed time</li><li>Cron: cron expression</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Execution cycle. Value range: <code>Period</code>, <code>Fixed</code>, <code>Cron</code>.</p><ul><li>Period: at a fixed frequency</li><li>Fixed: fixed time</li><li>Cron: cron expression</li></ul>
                     * @param _type <p>Execution cycle. Value range: <code>Period</code>, <code>Fixed</code>, <code>Cron</code>.</p><ul><li>Period: at a fixed frequency</li><li>Fixed: fixed time</li><li>Cron: cron expression</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Execution period or custom execution time point. Unit: minutes, value range: 1-1440.<br>When type is <code>Period</code> or <code>Fixed</code>, the time field takes effect.</p>
                     * @return Time <p>Execution period or custom execution time point. Unit: minutes, value range: 1-1440.<br>When type is <code>Period</code> or <code>Fixed</code>, the time field takes effect.</p>
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置<p>Execution period or custom execution time point. Unit: minutes, value range: 1-1440.<br>When type is <code>Period</code> or <code>Fixed</code>, the time field takes effect.</p>
                     * @param _time <p>Execution period or custom execution time point. Unit: minutes, value range: 1-1440.<br>When type is <code>Period</code> or <code>Fixed</code>, the time field takes effect.</p>
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取<p>The cron expression for the execution period. Example: <code>0/1 * * * *</code>. From left to right, each field represents Minutes field, Hours field, Day of month field, Month field, Day of week field. No support for second level. When the type is <code>Cron</code>, the CronExpression field takes effect.</p>
                     * @return CronExpression <p>The cron expression for the execution period. Example: <code>0/1 * * * *</code>. From left to right, each field represents Minutes field, Hours field, Day of month field, Month field, Day of week field. No support for second level. When the type is <code>Cron</code>, the CronExpression field takes effect.</p>
                     * 
                     */
                    std::string GetCronExpression() const;

                    /**
                     * 设置<p>The cron expression for the execution period. Example: <code>0/1 * * * *</code>. From left to right, each field represents Minutes field, Hours field, Day of month field, Month field, Day of week field. No support for second level. When the type is <code>Cron</code>, the CronExpression field takes effect.</p>
                     * @param _cronExpression <p>The cron expression for the execution period. Example: <code>0/1 * * * *</code>. From left to right, each field represents Minutes field, Hours field, Day of month field, Month field, Day of week field. No support for second level. When the type is <code>Cron</code>, the CronExpression field takes effect.</p>
                     * 
                     */
                    void SetCronExpression(const std::string& _cronExpression);

                    /**
                     * 判断参数 CronExpression 是否已赋值
                     * @return CronExpression 是否已赋值
                     * 
                     */
                    bool CronExpressionHasBeenSet() const;

                private:

                    /**
                     * <p>Execution cycle. Value range: <code>Period</code>, <code>Fixed</code>, <code>Cron</code>.</p><ul><li>Period: at a fixed frequency</li><li>Fixed: fixed time</li><li>Cron: cron expression</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Execution period or custom execution time point. Unit: minutes, value range: 1-1440.<br>When type is <code>Period</code> or <code>Fixed</code>, the time field takes effect.</p>
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>The cron expression for the execution period. Example: <code>0/1 * * * *</code>. From left to right, each field represents Minutes field, Hours field, Day of month field, Month field, Day of week field. No support for second level. When the type is <code>Cron</code>, the CronExpression field takes effect.</p>
                     */
                    std::string m_cronExpression;
                    bool m_cronExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MONITORTIME_H_
