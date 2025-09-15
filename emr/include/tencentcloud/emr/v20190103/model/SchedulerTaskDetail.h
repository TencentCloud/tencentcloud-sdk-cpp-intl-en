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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCHEDULERTASKDETAIL_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCHEDULERTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Scheduling task details
                */
                class SchedulerTaskDetail : public AbstractModel
                {
                public:
                    SchedulerTaskDetail();
                    ~SchedulerTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Steps.
                     * @return Step Steps.
                     * 
                     */
                    std::string GetStep() const;

                    /**
                     * 设置Steps.
                     * @param _step Steps.
                     * 
                     */
                    void SetStep(const std::string& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                    /**
                     * 获取Progress.
                     * @return Progress Progress.
                     * 
                     */
                    std::string GetProgress() const;

                    /**
                     * 设置Progress.
                     * @param _progress Progress.
                     * 
                     */
                    void SetProgress(const std::string& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Failure information.
                     * @return FailReason Failure information.
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置Failure information.
                     * @param _failReason Failure information.
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取ID used to obtain details.
                     * @return JobId ID used to obtain details.
                     * 
                     */
                    uint64_t GetJobId() const;

                    /**
                     * 设置ID used to obtain details.
                     * @param _jobId ID used to obtain details.
                     * 
                     */
                    void SetJobId(const uint64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * Steps.
                     */
                    std::string m_step;
                    bool m_stepHasBeenSet;

                    /**
                     * Progress.
                     */
                    std::string m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Failure information.
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * ID used to obtain details.
                     */
                    uint64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCHEDULERTASKDETAIL_H_
