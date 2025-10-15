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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_JOBDTO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_JOBDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/JobExecutionDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Data exploration JOB.
                */
                class JobDto : public AbstractModel
                {
                public:
                    JobDto();
                    ~JobDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID of the data exploration.

                     * @return JobId Task ID of the data exploration.

                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Task ID of the data exploration.

                     * @param _jobId Task ID of the data exploration.

                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Task name.
                     * @return JobName Task name.
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Task name.
                     * @param _jobName Task name.
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Task type
                     * @return JobType Task type
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置Task type
                     * @param _jobType Task type
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取Script ID
                     * @return ScriptId Script ID
                     * 
                     */
                    std::string GetScriptId() const;

                    /**
                     * 设置Script ID
                     * @param _scriptId Script ID
                     * 
                     */
                    void SetScriptId(const std::string& _scriptId);

                    /**
                     * 判断参数 ScriptId 是否已赋值
                     * @return ScriptId 是否已赋值
                     * 
                     */
                    bool ScriptIdHasBeenSet() const;

                    /**
                     * 获取Subtask List
                     * @return JobExecutionList Subtask List
                     * 
                     */
                    std::vector<JobExecutionDto> GetJobExecutionList() const;

                    /**
                     * 设置Subtask List
                     * @param _jobExecutionList Subtask List
                     * 
                     */
                    void SetJobExecutionList(const std::vector<JobExecutionDto>& _jobExecutionList);

                    /**
                     * 判断参数 JobExecutionList 是否已赋值
                     * @return JobExecutionList 是否已赋值
                     * 
                     */
                    bool JobExecutionListHasBeenSet() const;

                    /**
                     * 获取Specifies the script content.
                     * @return ScriptContent Specifies the script content.
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置Specifies the script content.
                     * @param _scriptContent Specifies the script content.
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取State of a task.
                     * @return Status State of a task.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置State of a task.
                     * @param _status State of a task.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task creation time
                     * @return CreateTime Task creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time
                     * @param _createTime Task creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取End time.

                     * @return EndTime End time.

                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.

                     * @param _endTime End time.

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
                     * 获取Root account UIN.
                     * @return OwnerUin Root account UIN.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Root account UIN.
                     * @param _ownerUin Root account UIN.
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Account UIN.
                     * @return UserUin Account UIN.
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置Account UIN.
                     * @param _userUin Account UIN.
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取Duration. specifies the time taken.

                     * @return TimeCost Duration. specifies the time taken.

                     * 
                     */
                    int64_t GetTimeCost() const;

                    /**
                     * 设置Duration. specifies the time taken.

                     * @param _timeCost Duration. specifies the time taken.

                     * 
                     */
                    void SetTimeCost(const int64_t& _timeCost);

                    /**
                     * 判断参数 TimeCost 是否已赋值
                     * @return TimeCost 是否已赋值
                     * 
                     */
                    bool TimeCostHasBeenSet() const;

                    /**
                     * 获取Specifies whether the script content is truncated.

                     * @return ScriptContentTruncate Specifies whether the script content is truncated.

                     * 
                     */
                    bool GetScriptContentTruncate() const;

                    /**
                     * 设置Specifies whether the script content is truncated.

                     * @param _scriptContentTruncate Specifies whether the script content is truncated.

                     * 
                     */
                    void SetScriptContentTruncate(const bool& _scriptContentTruncate);

                    /**
                     * 判断参数 ScriptContentTruncate 是否已赋值
                     * @return ScriptContentTruncate 是否已赋值
                     * 
                     */
                    bool ScriptContentTruncateHasBeenSet() const;

                private:

                    /**
                     * Task ID of the data exploration.

                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Task name.
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Task type
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * Script ID
                     */
                    std::string m_scriptId;
                    bool m_scriptIdHasBeenSet;

                    /**
                     * Subtask List
                     */
                    std::vector<JobExecutionDto> m_jobExecutionList;
                    bool m_jobExecutionListHasBeenSet;

                    /**
                     * Specifies the script content.
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * State of a task.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * End time.

                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Root account UIN.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Account UIN.
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * Duration. specifies the time taken.

                     */
                    int64_t m_timeCost;
                    bool m_timeCostHasBeenSet;

                    /**
                     * Specifies whether the script content is truncated.

                     */
                    bool m_scriptContentTruncate;
                    bool m_scriptContentTruncateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_JOBDTO_H_
