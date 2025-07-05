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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECDATESTAT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECDATESTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Overview Trend Results
                */
                class RuleExecDateStat : public AbstractModel
                {
                public:
                    RuleExecDateStat();
                    ~RuleExecDateStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Statistics Date
                     * @return StatDate Statistics Date
                     * 
                     */
                    std::string GetStatDate() const;

                    /**
                     * 设置Statistics Date
                     * @param _statDate Statistics Date
                     * 
                     */
                    void SetStatDate(const std::string& _statDate);

                    /**
                     * 判断参数 StatDate 是否已赋值
                     * @return StatDate 是否已赋值
                     * 
                     */
                    bool StatDateHasBeenSet() const;

                    /**
                     * 获取Number of Alerts
                     * @return AlarmCnt Number of Alerts
                     * 
                     */
                    uint64_t GetAlarmCnt() const;

                    /**
                     * 设置Number of Alerts
                     * @param _alarmCnt Number of Alerts
                     * 
                     */
                    void SetAlarmCnt(const uint64_t& _alarmCnt);

                    /**
                     * 判断参数 AlarmCnt 是否已赋值
                     * @return AlarmCnt 是否已赋值
                     * 
                     */
                    bool AlarmCntHasBeenSet() const;

                    /**
                     * 获取Number of blocked processes
                     * @return PipelineCnt Number of blocked processes
                     * 
                     */
                    uint64_t GetPipelineCnt() const;

                    /**
                     * 设置Number of blocked processes
                     * @param _pipelineCnt Number of blocked processes
                     * 
                     */
                    void SetPipelineCnt(const uint64_t& _pipelineCnt);

                    /**
                     * 判断参数 PipelineCnt 是否已赋值
                     * @return PipelineCnt 是否已赋值
                     * 
                     */
                    bool PipelineCntHasBeenSet() const;

                private:

                    /**
                     * Statistics Date
                     */
                    std::string m_statDate;
                    bool m_statDateHasBeenSet;

                    /**
                     * Number of Alerts
                     */
                    uint64_t m_alarmCnt;
                    bool m_alarmCntHasBeenSet;

                    /**
                     * Number of blocked processes
                     */
                    uint64_t m_pipelineCnt;
                    bool m_pipelineCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECDATESTAT_H_
