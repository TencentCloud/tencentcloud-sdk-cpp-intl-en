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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_JOBDATETIME_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_JOBDATETIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/TimedJob.h>
#include <tencentcloud/waf/v20180125/model/CronJob.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Rule execution time structure
                */
                class JobDateTime : public AbstractModel
                {
                public:
                    JobDateTime();
                    ~JobDateTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time parameter for scheduled execution.
                     * @return Timed Time parameter for scheduled execution.
                     * 
                     */
                    std::vector<TimedJob> GetTimed() const;

                    /**
                     * 设置Time parameter for scheduled execution.
                     * @param _timed Time parameter for scheduled execution.
                     * 
                     */
                    void SetTimed(const std::vector<TimedJob>& _timed);

                    /**
                     * 判断参数 Timed 是否已赋值
                     * @return Timed 是否已赋值
                     * 
                     */
                    bool TimedHasBeenSet() const;

                    /**
                     * 获取Time parameter for periodic execution.
                     * @return Cron Time parameter for periodic execution.
                     * 
                     */
                    std::vector<CronJob> GetCron() const;

                    /**
                     * 设置Time parameter for periodic execution.
                     * @param _cron Time parameter for periodic execution.
                     * 
                     */
                    void SetCron(const std::vector<CronJob>& _cron);

                    /**
                     * 判断参数 Cron 是否已赋值
                     * @return Cron 是否已赋值
                     * 
                     */
                    bool CronHasBeenSet() const;

                    /**
                     * 获取Specifies the time zone.
                     * @return TimeTZone Specifies the time zone.
                     * 
                     */
                    std::string GetTimeTZone() const;

                    /**
                     * 设置Specifies the time zone.
                     * @param _timeTZone Specifies the time zone.
                     * 
                     */
                    void SetTimeTZone(const std::string& _timeTZone);

                    /**
                     * 判断参数 TimeTZone 是否已赋值
                     * @return TimeTZone 是否已赋值
                     * 
                     */
                    bool TimeTZoneHasBeenSet() const;

                private:

                    /**
                     * Time parameter for scheduled execution.
                     */
                    std::vector<TimedJob> m_timed;
                    bool m_timedHasBeenSet;

                    /**
                     * Time parameter for periodic execution.
                     */
                    std::vector<CronJob> m_cron;
                    bool m_cronHasBeenSet;

                    /**
                     * Specifies the time zone.
                     */
                    std::string m_timeTZone;
                    bool m_timeTZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_JOBDATETIME_H_
