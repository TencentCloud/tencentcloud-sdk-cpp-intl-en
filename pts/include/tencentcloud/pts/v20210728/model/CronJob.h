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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CRONJOB_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CRONJOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Cron job.
                */
                class CronJob : public AbstractModel
                {
                public:
                    CronJob();
                    ~CronJob() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cron job ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return CronJobId Cron job ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetCronJobId() const;

                    /**
                     * 设置Cron job ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _cronJobId Cron job ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetCronJobId(const std::string& _cronJobId);

                    /**
                     * 判断参数 CronJobId 是否已赋值
                     * @return CronJobId 是否已赋值
                     * 
                     */
                    bool CronJobIdHasBeenSet() const;

                    /**
                     * 获取Cron job name.

Note: This field may return null, indicating that no valid value is found.
                     * @return Name Cron job name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Cron job name.

Note: This field may return null, indicating that no valid value is found.
                     * @param _name Cron job name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return ProjectId Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _projectId Project ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Scenario ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return ScenarioId Scenario ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetScenarioId() const;

                    /**
                     * 设置Scenario ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _scenarioId Scenario ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetScenarioId(const std::string& _scenarioId);

                    /**
                     * 判断参数 ScenarioId 是否已赋值
                     * @return ScenarioId 是否已赋值
                     * 
                     */
                    bool ScenarioIdHasBeenSet() const;

                    /**
                     * 获取Scenario name.

Note: This field may return null, indicating that no valid value is found.
                     * @return ScenarioName Scenario name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetScenarioName() const;

                    /**
                     * 设置Scenario name.

Note: This field may return null, indicating that no valid value is found.
                     * @param _scenarioName Scenario name.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetScenarioName(const std::string& _scenarioName);

                    /**
                     * 判断参数 ScenarioName 是否已赋值
                     * @return ScenarioName 是否已赋值
                     * 
                     */
                    bool ScenarioNameHasBeenSet() const;

                    /**
                     * 获取Cron expression.

Note: This field may return null, indicating that no valid value is found.
                     * @return CronExpression Cron expression.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetCronExpression() const;

                    /**
                     * 设置Cron expression.

Note: This field may return null, indicating that no valid value is found.
                     * @param _cronExpression Cron expression.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetCronExpression(const std::string& _cronExpression);

                    /**
                     * 判断参数 CronExpression 是否已赋值
                     * @return CronExpression 是否已赋值
                     * 
                     */
                    bool CronExpressionHasBeenSet() const;

                    /**
                     * 获取End time.

Note: This field may return null, indicating that no valid value is found.
                     * @return EndTime End time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _endTime End time.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Abort reason.

Note: This field may return null, indicating that no valid value is found.
                     * @return AbortReason Abort reason.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetAbortReason() const;

                    /**
                     * 设置Abort reason.

Note: This field may return null, indicating that no valid value is found.
                     * @param _abortReason Abort reason.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAbortReason(const int64_t& _abortReason);

                    /**
                     * 判断参数 AbortReason 是否已赋值
                     * @return AbortReason 是否已赋值
                     * 
                     */
                    bool AbortReasonHasBeenSet() const;

                    /**
                     * 获取Cron job status.

Note: This field may return null, indicating that no valid value is found.
                     * @return Status Cron job status.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Cron job status.

Note: This field may return null, indicating that no valid value is found.
                     * @param _status Cron job status.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Notice ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return NoticeId Notice ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetNoticeId() const;

                    /**
                     * 设置Notice ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _noticeId Notice ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetNoticeId(const std::string& _noticeId);

                    /**
                     * 判断参数 NoticeId 是否已赋值
                     * @return NoticeId 是否已赋值
                     * 
                     */
                    bool NoticeIdHasBeenSet() const;

                    /**
                     * 获取Create time.

Note: This field may return null, indicating that no valid value is found.
                     * @return CreatedAt Create time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Create time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _createdAt Create time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Update time.

Note: This field may return null, indicating that no valid value is found.
                     * @return UpdatedAt Update time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _updatedAt Update time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Execution frequency type: 1, execute once only; 2, Daily; 3, Weekly; 4, Advanced mode using cron expression.

Note: This field may return null, indicating that no valid value is found.
                     * @return FrequencyType Execution frequency type: 1, execute once only; 2, Daily; 3, Weekly; 4, Advanced mode using cron expression.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetFrequencyType() const;

                    /**
                     * 设置Execution frequency type: 1, execute once only; 2, Daily; 3, Weekly; 4, Advanced mode using cron expression.

Note: This field may return null, indicating that no valid value is found.
                     * @param _frequencyType Execution frequency type: 1, execute once only; 2, Daily; 3, Weekly; 4, Advanced mode using cron expression.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetFrequencyType(const int64_t& _frequencyType);

                    /**
                     * 判断参数 FrequencyType 是否已赋值
                     * @return FrequencyType 是否已赋值
                     * 
                     */
                    bool FrequencyTypeHasBeenSet() const;

                    /**
                     * 获取Note.

Note: This field may return null, indicating that no valid value is found.
                     * @return Note Note.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Note.

Note: This field may return null, indicating that no valid value is found.
                     * @param _note Note.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取Cron job initiator.

Note: This field may return null, indicating that no valid value is found.
                     * @return JobOwner Cron job initiator.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetJobOwner() const;

                    /**
                     * 设置Cron job initiator.

Note: This field may return null, indicating that no valid value is found.
                     * @param _jobOwner Cron job initiator.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetJobOwner(const std::string& _jobOwner);

                    /**
                     * 判断参数 JobOwner 是否已赋值
                     * @return JobOwner 是否已赋值
                     * 
                     */
                    bool JobOwnerHasBeenSet() const;

                    /**
                     * 获取App ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return AppId App ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置App ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _appId App ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Account uin.

Note: This field may return null, indicating that no valid value is found.
                     * @return Uin Account uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置Account uin.

Note: This field may return null, indicating that no valid value is found.
                     * @param _uin Account uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * @return SubAccountUin Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * @param _subAccountUin Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                private:

                    /**
                     * Cron job ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_cronJobId;
                    bool m_cronJobIdHasBeenSet;

                    /**
                     * Cron job name.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Project ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Scenario ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_scenarioId;
                    bool m_scenarioIdHasBeenSet;

                    /**
                     * Scenario name.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_scenarioName;
                    bool m_scenarioNameHasBeenSet;

                    /**
                     * Cron expression.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_cronExpression;
                    bool m_cronExpressionHasBeenSet;

                    /**
                     * End time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Abort reason.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_abortReason;
                    bool m_abortReasonHasBeenSet;

                    /**
                     * Cron job status.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Notice ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_noticeId;
                    bool m_noticeIdHasBeenSet;

                    /**
                     * Create time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Update time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Execution frequency type: 1, execute once only; 2, Daily; 3, Weekly; 4, Advanced mode using cron expression.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_frequencyType;
                    bool m_frequencyTypeHasBeenSet;

                    /**
                     * Note.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Cron job initiator.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_jobOwner;
                    bool m_jobOwnerHasBeenSet;

                    /**
                     * App ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Account uin.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Sub account uin.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CRONJOB_H_
