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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKAGAINREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKAGAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ScanTaskAgain request structure.
                */
                class ScanTaskAgainRequest : public AbstractModel
                {
                public:
                    ScanTaskAgainRequest();
                    ~ScanTaskAgainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Module type. Currently supported values: Malware: Trojan; Vul: vulnerability; Baseline: baseline.
                     * @return ModuleType Module type. Currently supported values: Malware: Trojan; Vul: vulnerability; Baseline: baseline.
                     * 
                     */
                    std::string GetModuleType() const;

                    /**
                     * 设置Module type. Currently supported values: Malware: Trojan; Vul: vulnerability; Baseline: baseline.
                     * @param _moduleType Module type. Currently supported values: Malware: Trojan; Vul: vulnerability; Baseline: baseline.
                     * 
                     */
                    void SetModuleType(const std::string& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取String array of host QUUIDs. This parameter is effective for selected servers.
                     * @return QuuidList String array of host QUUIDs. This parameter is effective for selected servers.
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置String array of host QUUIDs. This parameter is effective for selected servers.
                     * @param _quuidList String array of host QUUIDs. This parameter is effective for selected servers.
                     * 
                     */
                    void SetQuuidList(const std::vector<std::string>& _quuidList);

                    /**
                     * 判断参数 QuuidList 是否已赋值
                     * @return QuuidList 是否已赋值
                     * 
                     */
                    bool QuuidListHasBeenSet() const;

                    /**
                     * 获取Scan timeout
                     * @return TimeoutPeriod Scan timeout
                     * 
                     */
                    uint64_t GetTimeoutPeriod() const;

                    /**
                     * 设置Scan timeout
                     * @param _timeoutPeriod Scan timeout
                     * 
                     */
                    void SetTimeoutPeriod(const uint64_t& _timeoutPeriod);

                    /**
                     * 判断参数 TimeoutPeriod 是否已赋值
                     * @return TimeoutPeriod 是否已赋值
                     * 
                     */
                    bool TimeoutPeriodHasBeenSet() const;

                private:

                    /**
                     * Module type. Currently supported values: Malware: Trojan; Vul: vulnerability; Baseline: baseline.
                     */
                    std::string m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                    /**
                     * Task ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * String array of host QUUIDs. This parameter is effective for selected servers.
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                    /**
                     * Scan timeout
                     */
                    uint64_t m_timeoutPeriod;
                    bool m_timeoutPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKAGAINREQUEST_H_
