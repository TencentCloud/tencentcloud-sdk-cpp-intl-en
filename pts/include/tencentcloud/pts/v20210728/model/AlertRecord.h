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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORD_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/AlertRecordStatus.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Alert history record.
                */
                class AlertRecord : public AbstractModel
                {
                public:
                    AlertRecord();
                    ~AlertRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alert history record ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return AlertRecordId Alert history record ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetAlertRecordId() const;

                    /**
                     * 设置Alert history record ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _alertRecordId Alert history record ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetAlertRecordId(const std::string& _alertRecordId);

                    /**
                     * 判断参数 AlertRecordId 是否已赋值
                     * @return AlertRecordId 是否已赋值
                     * 
                     */
                    bool AlertRecordIdHasBeenSet() const;

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
                     * 获取Status.

Note: This field may return null, indicating that no valid value is found.
                     * @return Status Status.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    AlertRecordStatus GetStatus() const;

                    /**
                     * 设置Status.

Note: This field may return null, indicating that no valid value is found.
                     * @param _status Status.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetStatus(const AlertRecordStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取Job ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return JobId Job ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Job ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _jobId Job ID.

Note: This field may return null, indicating that no valid value is found.
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
                     * 获取Alert target.

Note: This field may return null, indicating that no valid value is found.
                     * @return Target Alert target.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Alert target.

Note: This field may return null, indicating that no valid value is found.
                     * @param _target Alert target.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取SLA ID.

Note: This field may return null, indicating that no valid value is found.
                     * @return JobSLAId SLA ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetJobSLAId() const;

                    /**
                     * 设置SLA ID.

Note: This field may return null, indicating that no valid value is found.
                     * @param _jobSLAId SLA ID.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetJobSLAId(const std::string& _jobSLAId);

                    /**
                     * 判断参数 JobSLAId 是否已赋值
                     * @return JobSLAId 是否已赋值
                     * 
                     */
                    bool JobSLAIdHasBeenSet() const;

                    /**
                     * 获取SLA description.

Note: This field may return null, indicating that no valid value is found.
                     * @return JobSLADescription SLA description.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetJobSLADescription() const;

                    /**
                     * 设置SLA description.

Note: This field may return null, indicating that no valid value is found.
                     * @param _jobSLADescription SLA description.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetJobSLADescription(const std::string& _jobSLADescription);

                    /**
                     * 判断参数 JobSLADescription 是否已赋值
                     * @return JobSLADescription 是否已赋值
                     * 
                     */
                    bool JobSLADescriptionHasBeenSet() const;

                private:

                    /**
                     * Alert history record ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_alertRecordId;
                    bool m_alertRecordIdHasBeenSet;

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
                     * Status.

Note: This field may return null, indicating that no valid value is found.
                     */
                    AlertRecordStatus m_status;
                    bool m_statusHasBeenSet;

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
                     * Job ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

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

                    /**
                     * Scenario name.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_scenarioName;
                    bool m_scenarioNameHasBeenSet;

                    /**
                     * Alert target.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * SLA ID.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_jobSLAId;
                    bool m_jobSLAIdHasBeenSet;

                    /**
                     * SLA description.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_jobSLADescription;
                    bool m_jobSLADescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORD_H_
