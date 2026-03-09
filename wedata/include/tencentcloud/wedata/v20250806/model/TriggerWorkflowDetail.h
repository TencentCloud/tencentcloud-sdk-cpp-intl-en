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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWDETAIL_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ParamInfo.h>
#include <tencentcloud/wedata/v20250806/model/WorkflowTriggerConfig.h>
#include <tencentcloud/wedata/v20250806/model/WorkflowGeneralTaskParam.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Query workflow details.
                */
                class TriggerWorkflowDetail : public AbstractModel
                {
                public:
                    TriggerWorkflowDetail();
                    ~TriggerWorkflowDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowName Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowName Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取Responsible person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OwnerUin Responsible person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Responsible person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ownerUin Responsible person ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateUserUin Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createUserUin Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取Workflow parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowParams Workflow parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ParamInfo> GetWorkflowParams() const;

                    /**
                     * 设置Workflow parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowParams Workflow parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowParams(const std::vector<ParamInfo>& _workflowParams);

                    /**
                     * 判断参数 WorkflowParams 是否已赋值
                     * @return WorkflowParams 是否已赋值
                     * 
                     */
                    bool WorkflowParamsHasBeenSet() const;

                    /**
                     * 获取Unify scheduling parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TriggerWorkflowSchedulerConfigurations Unify scheduling parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<WorkflowTriggerConfig> GetTriggerWorkflowSchedulerConfigurations() const;

                    /**
                     * 设置Unify scheduling parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _triggerWorkflowSchedulerConfigurations Unify scheduling parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTriggerWorkflowSchedulerConfigurations(const std::vector<WorkflowTriggerConfig>& _triggerWorkflowSchedulerConfigurations);

                    /**
                     * 判断参数 TriggerWorkflowSchedulerConfigurations 是否已赋值
                     * @return TriggerWorkflowSchedulerConfigurations 是否已赋值
                     * 
                     */
                    bool TriggerWorkflowSchedulerConfigurationsHasBeenSet() const;

                    /**
                     * 获取Workflow description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkflowDesc Workflow description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkflowDesc() const;

                    /**
                     * 设置Workflow description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workflowDesc Workflow description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkflowDesc(const std::string& _workflowDesc);

                    /**
                     * 判断参数 WorkflowDesc 是否已赋值
                     * @return WorkflowDesc 是否已赋值
                     * 
                     */
                    bool WorkflowDescHasBeenSet() const;

                    /**
                     * 获取Workflow path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Path Workflow path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Workflow path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _path Workflow path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取BundleId item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BundleId BundleId item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置BundleId item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bundleId BundleId item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取BundleInfo item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BundleInfo BundleInfo item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置BundleInfo item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bundleInfo BundleInfo item.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                    /**
                     * 获取General parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GeneralTaskParams General parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<WorkflowGeneralTaskParam> GetGeneralTaskParams() const;

                    /**
                     * 设置General parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _generalTaskParams General parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGeneralTaskParams(const std::vector<WorkflowGeneralTaskParam>& _generalTaskParams);

                    /**
                     * 判断参数 GeneralTaskParams 是否已赋值
                     * @return GeneralTaskParams 是否已赋值
                     * 
                     */
                    bool GeneralTaskParamsHasBeenSet() const;

                    /**
                     * 获取Trigger status: ACTIVE (start), PAUSED (suspend).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SchedulerStatus Trigger status: ACTIVE (start), PAUSED (suspend).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSchedulerStatus() const;

                    /**
                     * 设置Trigger status: ACTIVE (start), PAUSED (suspend).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _schedulerStatus Trigger status: ACTIVE (start), PAUSED (suspend).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSchedulerStatus(const std::string& _schedulerStatus);

                    /**
                     * 判断参数 SchedulerStatus 是否已赋值
                     * @return SchedulerStatus 是否已赋值
                     * 
                     */
                    bool SchedulerStatusHasBeenSet() const;

                private:

                    /**
                     * Workflow name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * Responsible person ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Creator ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Workflow parameter array.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ParamInfo> m_workflowParams;
                    bool m_workflowParamsHasBeenSet;

                    /**
                     * Unify scheduling parameters.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WorkflowTriggerConfig> m_triggerWorkflowSchedulerConfigurations;
                    bool m_triggerWorkflowSchedulerConfigurationsHasBeenSet;

                    /**
                     * Workflow description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workflowDesc;
                    bool m_workflowDescHasBeenSet;

                    /**
                     * Workflow path.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * BundleId item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * BundleInfo item.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * General parameter.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WorkflowGeneralTaskParam> m_generalTaskParams;
                    bool m_generalTaskParamsHasBeenSet;

                    /**
                     * Trigger status: ACTIVE (start), PAUSED (suspend).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_schedulerStatus;
                    bool m_schedulerStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWDETAIL_H_
