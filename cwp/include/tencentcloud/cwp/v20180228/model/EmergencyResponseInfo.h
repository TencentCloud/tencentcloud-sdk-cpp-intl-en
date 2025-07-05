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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EMERGENCYRESPONSEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EMERGENCYRESPONSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Expert service - emergency response information
                */
                class EmergencyResponseInfo : public AbstractModel
                {
                public:
                    EmergencyResponseInfo();
                    ~EmergencyResponseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Number of hosts
                     * @return HostNum Number of hosts
                     * 
                     */
                    uint64_t GetHostNum() const;

                    /**
                     * 设置Number of hosts
                     * @param _hostNum Number of hosts
                     * 
                     */
                    void SetHostNum(const uint64_t& _hostNum);

                    /**
                     * 判断参数 HostNum 是否已赋值
                     * @return HostNum 是否已赋值
                     * 
                     */
                    bool HostNumHasBeenSet() const;

                    /**
                     * 获取
                     * @return Status 
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Service start time
                     * @return StartTime Service start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Service start time
                     * @param _startTime Service start time
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Service end time
                     * @return EndTime Service end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Service end time
                     * @param _endTime Service end time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Report download link
                     * @return ReportPath Report download link
                     * 
                     */
                    std::string GetReportPath() const;

                    /**
                     * 设置Report download link
                     * @param _reportPath Report download link
                     * 
                     */
                    void SetReportPath(const std::string& _reportPath);

                    /**
                     * 判断参数 ReportPath 是否已赋值
                     * @return ReportPath 是否已赋值
                     * 
                     */
                    bool ReportPathHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Number of hosts
                     */
                    uint64_t m_hostNum;
                    bool m_hostNumHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Service start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Service end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Report download link
                     */
                    std::string m_reportPath;
                    bool m_reportPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EMERGENCYRESPONSEINFO_H_
