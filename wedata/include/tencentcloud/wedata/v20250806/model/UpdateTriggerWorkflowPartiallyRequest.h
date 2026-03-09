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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETRIGGERWORKFLOWPARTIALLYREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETRIGGERWORKFLOWPARTIALLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/UpdateTriggerWorkflowPartially.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateTriggerWorkflowPartially request structure.
                */
                class UpdateTriggerWorkflowPartiallyRequest : public AbstractModel
                {
                public:
                    UpdateTriggerWorkflowPartiallyRequest();
                    ~UpdateTriggerWorkflowPartiallyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
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
                     * 获取Workflow ID.
                     * @return WorkflowId Workflow ID.
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID.
                     * @param _workflowId Workflow ID.
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取Responsible person ID.
                     * @return NewSetting Responsible person ID.
                     * 
                     */
                    UpdateTriggerWorkflowPartially GetNewSetting() const;

                    /**
                     * 设置Responsible person ID.
                     * @param _newSetting Responsible person ID.
                     * 
                     */
                    void SetNewSetting(const UpdateTriggerWorkflowPartially& _newSetting);

                    /**
                     * 判断参数 NewSetting 是否已赋值
                     * @return NewSetting 是否已赋值
                     * 
                     */
                    bool NewSettingHasBeenSet() const;

                    /**
                     * 获取Delete field content, identify in the form of property path, separate deleted values with ":" and multiple values with ",".
Delete the attributes "WorkflowParams:aa,bb" where ParamKey is aa,bb in the scheduling parameters.
Delete the scheduling configuration with TriggerId "da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0" in TriggerWorkflowSchedulerConfigurations. 
Delete the spark sql general parameter "GeneralTaskParams: spark_sql". 

                     * @return FieldToRemoveList Delete field content, identify in the form of property path, separate deleted values with ":" and multiple values with ",".
Delete the attributes "WorkflowParams:aa,bb" where ParamKey is aa,bb in the scheduling parameters.
Delete the scheduling configuration with TriggerId "da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0" in TriggerWorkflowSchedulerConfigurations. 
Delete the spark sql general parameter "GeneralTaskParams: spark_sql". 

                     * 
                     */
                    std::vector<std::string> GetFieldToRemoveList() const;

                    /**
                     * 设置Delete field content, identify in the form of property path, separate deleted values with ":" and multiple values with ",".
Delete the attributes "WorkflowParams:aa,bb" where ParamKey is aa,bb in the scheduling parameters.
Delete the scheduling configuration with TriggerId "da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0" in TriggerWorkflowSchedulerConfigurations. 
Delete the spark sql general parameter "GeneralTaskParams: spark_sql". 

                     * @param _fieldToRemoveList Delete field content, identify in the form of property path, separate deleted values with ":" and multiple values with ",".
Delete the attributes "WorkflowParams:aa,bb" where ParamKey is aa,bb in the scheduling parameters.
Delete the scheduling configuration with TriggerId "da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0" in TriggerWorkflowSchedulerConfigurations. 
Delete the spark sql general parameter "GeneralTaskParams: spark_sql". 

                     * 
                     */
                    void SetFieldToRemoveList(const std::vector<std::string>& _fieldToRemoveList);

                    /**
                     * 判断参数 FieldToRemoveList 是否已赋值
                     * @return FieldToRemoveList 是否已赋值
                     * 
                     */
                    bool FieldToRemoveListHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Workflow ID.
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Responsible person ID.
                     */
                    UpdateTriggerWorkflowPartially m_newSetting;
                    bool m_newSettingHasBeenSet;

                    /**
                     * Delete field content, identify in the form of property path, separate deleted values with ":" and multiple values with ",".
Delete the attributes "WorkflowParams:aa,bb" where ParamKey is aa,bb in the scheduling parameters.
Delete the scheduling configuration with TriggerId "da46d950-d5ca-4cfb-a5a9-f3c2eeea1bf0" in TriggerWorkflowSchedulerConfigurations. 
Delete the spark sql general parameter "GeneralTaskParams: spark_sql". 

                     */
                    std::vector<std::string> m_fieldToRemoveList;
                    bool m_fieldToRemoveListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETRIGGERWORKFLOWPARTIALLYREQUEST_H_
