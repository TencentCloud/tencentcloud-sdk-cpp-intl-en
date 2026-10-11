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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOW_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowBaseInfo.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowTriggerConfiguration.h>
#include <tencentcloud/databuddy/v20260715/model/ParamInfo.h>
#include <tencentcloud/databuddy/v20260715/model/LabelBrief.h>
#include <tencentcloud/databuddy/v20260715/model/AlarmBrief.h>
#include <tencentcloud/databuddy/v20260715/model/MonitorMetricBrief.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowAdvanceConfig.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowTask.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Complete workflow configuration
                */
                class Workflow : public AbstractModel
                {
                public:
                    Workflow();
                    ~Workflow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Workspace ID, which can be obtained through ListWorkspaces.</p>
                     * @return WorkspaceId <p>Workspace ID, which can be obtained through ListWorkspaces.</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace ID, which can be obtained through ListWorkspaces.</p>
                     * @param _workspaceId <p>Workspace ID, which can be obtained through ListWorkspaces.</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Workflow basic info</p>
                     * @return BaseInfo <p>Workflow basic info</p>
                     * 
                     */
                    WorkflowBaseInfo GetBaseInfo() const;

                    /**
                     * 设置<p>Workflow basic info</p>
                     * @param _baseInfo <p>Workflow basic info</p>
                     * 
                     */
                    void SetBaseInfo(const WorkflowBaseInfo& _baseInfo);

                    /**
                     * 判断参数 BaseInfo 是否已赋值
                     * @return BaseInfo 是否已赋值
                     * 
                     */
                    bool BaseInfoHasBeenSet() const;

                    /**
                     * 获取<p>Workflow scheduling configuration.</p>
                     * @return Trigger <p>Workflow scheduling configuration.</p>
                     * 
                     */
                    std::vector<WorkflowTriggerConfiguration> GetTrigger() const;

                    /**
                     * 设置<p>Workflow scheduling configuration.</p>
                     * @param _trigger <p>Workflow scheduling configuration.</p>
                     * 
                     */
                    void SetTrigger(const std::vector<WorkflowTriggerConfiguration>& _trigger);

                    /**
                     * 判断参数 Trigger 是否已赋值
                     * @return Trigger 是否已赋值
                     * 
                     */
                    bool TriggerHasBeenSet() const;

                    /**
                     * 获取<p>Workflow parameter list. The parameter name is required and can only contain digits, upper- and lower-case letters, spaces, .$@#!%^&amp;*()-_+=&gt;. It can contain up to 128 characters.</p>
                     * @return ParamList <p>Workflow parameter list. The parameter name is required and can only contain digits, upper- and lower-case letters, spaces, .$@#!%^&amp;*()-_+=&gt;. It can contain up to 128 characters.</p>
                     * 
                     */
                    std::vector<ParamInfo> GetParamList() const;

                    /**
                     * 设置<p>Workflow parameter list. The parameter name is required and can only contain digits, upper- and lower-case letters, spaces, .$@#!%^&amp;*()-_+=&gt;. It can contain up to 128 characters.</p>
                     * @param _paramList <p>Workflow parameter list. The parameter name is required and can only contain digits, upper- and lower-case letters, spaces, .$@#!%^&amp;*()-_+=&gt;. It can contain up to 128 characters.</p>
                     * 
                     */
                    void SetParamList(const std::vector<ParamInfo>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取<p>Tag tag name is required and can only contain digits, upper- and lower-case letters, spaces, .$@#!%^&amp;*()-_+=&gt;', up to 128 characters</p>
                     * @return LabelList <p>Tag tag name is required and can only contain digits, upper- and lower-case letters, spaces, .$@#!%^&amp;*()-_+=&gt;', up to 128 characters</p>
                     * 
                     */
                    std::vector<LabelBrief> GetLabelList() const;

                    /**
                     * 设置<p>Tag tag name is required and can only contain digits, upper- and lower-case letters, spaces, .$@#!%^&amp;*()-_+=&gt;', up to 128 characters</p>
                     * @param _labelList <p>Tag tag name is required and can only contain digits, upper- and lower-case letters, spaces, .$@#!%^&amp;*()-_+=&gt;', up to 128 characters</p>
                     * 
                     */
                    void SetLabelList(const std::vector<LabelBrief>& _labelList);

                    /**
                     * 判断参数 LabelList 是否已赋值
                     * @return LabelList 是否已赋值
                     * 
                     */
                    bool LabelListHasBeenSet() const;

                    /**
                     * 获取<p>Workflow alert configuration.</p>
                     * @return Alarm <p>Workflow alert configuration.</p>
                     * 
                     */
                    AlarmBrief GetAlarm() const;

                    /**
                     * 设置<p>Workflow alert configuration.</p>
                     * @param _alarm <p>Workflow alert configuration.</p>
                     * 
                     */
                    void SetAlarm(const AlarmBrief& _alarm);

                    /**
                     * 判断参数 Alarm 是否已赋值
                     * @return Alarm 是否已赋值
                     * 
                     */
                    bool AlarmHasBeenSet() const;

                    /**
                     * 获取<p>Monitoring metrics configuration</p>
                     * @return MonitorMetric <p>Monitoring metrics configuration</p>
                     * 
                     */
                    MonitorMetricBrief GetMonitorMetric() const;

                    /**
                     * 设置<p>Monitoring metrics configuration</p>
                     * @param _monitorMetric <p>Monitoring metrics configuration</p>
                     * 
                     */
                    void SetMonitorMetric(const MonitorMetricBrief& _monitorMetric);

                    /**
                     * 判断参数 MonitorMetric 是否已赋值
                     * @return MonitorMetric 是否已赋值
                     * 
                     */
                    bool MonitorMetricHasBeenSet() const;

                    /**
                     * 获取<p>Workflow advanced setting.</p>
                     * @return AdvanceConfig <p>Workflow advanced setting.</p>
                     * 
                     */
                    WorkflowAdvanceConfig GetAdvanceConfig() const;

                    /**
                     * 设置<p>Workflow advanced setting.</p>
                     * @param _advanceConfig <p>Workflow advanced setting.</p>
                     * 
                     */
                    void SetAdvanceConfig(const WorkflowAdvanceConfig& _advanceConfig);

                    /**
                     * 判断参数 AdvanceConfig 是否已赋值
                     * @return AdvanceConfig 是否已赋值
                     * 
                     */
                    bool AdvanceConfigHasBeenSet() const;

                    /**
                     * 获取<p>Workflow task list</p>
                     * @return TaskList <p>Workflow task list</p>
                     * 
                     */
                    std::vector<WorkflowTask> GetTaskList() const;

                    /**
                     * 设置<p>Workflow task list</p>
                     * @param _taskList <p>Workflow task list</p>
                     * 
                     */
                    void SetTaskList(const std::vector<WorkflowTask>& _taskList);

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     * 
                     */
                    bool TaskListHasBeenSet() const;

                    /**
                     * 获取<p>BundleId, obtainable through the Bundle API</p>
                     * @return BundleId <p>BundleId, obtainable through the Bundle API</p>
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>BundleId, obtainable through the Bundle API</p>
                     * @param _bundleId <p>BundleId, obtainable through the Bundle API</p>
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
                     * 获取<p>Bundle information</p>
                     * @return BundleInfo <p>Bundle information</p>
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置<p>Bundle information</p>
                     * @param _bundleInfo <p>Bundle information</p>
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
                     * 获取<p>GIT configuration ID, corresponding to ConfigKey in the GetWorkspaceConfig API</p>
                     * @return GitConfigId <p>GIT configuration ID, corresponding to ConfigKey in the GetWorkspaceConfig API</p>
                     * 
                     */
                    std::string GetGitConfigId() const;

                    /**
                     * 设置<p>GIT configuration ID, corresponding to ConfigKey in the GetWorkspaceConfig API</p>
                     * @param _gitConfigId <p>GIT configuration ID, corresponding to ConfigKey in the GetWorkspaceConfig API</p>
                     * 
                     */
                    void SetGitConfigId(const std::string& _gitConfigId);

                    /**
                     * 判断参数 GitConfigId 是否已赋值
                     * @return GitConfigId 是否已赋值
                     * 
                     */
                    bool GitConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>Git branch information.</p>
                     * @return GitBranch <p>Git branch information.</p>
                     * 
                     */
                    std::string GetGitBranch() const;

                    /**
                     * 设置<p>Git branch information.</p>
                     * @param _gitBranch <p>Git branch information.</p>
                     * 
                     */
                    void SetGitBranch(const std::string& _gitBranch);

                    /**
                     * 判断参数 GitBranch 是否已赋值
                     * @return GitBranch 是否已赋值
                     * 
                     */
                    bool GitBranchHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID, which can be obtained through ListWorkspaces.</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Workflow basic info</p>
                     */
                    WorkflowBaseInfo m_baseInfo;
                    bool m_baseInfoHasBeenSet;

                    /**
                     * <p>Workflow scheduling configuration.</p>
                     */
                    std::vector<WorkflowTriggerConfiguration> m_trigger;
                    bool m_triggerHasBeenSet;

                    /**
                     * <p>Workflow parameter list. The parameter name is required and can only contain digits, upper- and lower-case letters, spaces, .$@#!%^&amp;*()-_+=&gt;. It can contain up to 128 characters.</p>
                     */
                    std::vector<ParamInfo> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * <p>Tag tag name is required and can only contain digits, upper- and lower-case letters, spaces, .$@#!%^&amp;*()-_+=&gt;', up to 128 characters</p>
                     */
                    std::vector<LabelBrief> m_labelList;
                    bool m_labelListHasBeenSet;

                    /**
                     * <p>Workflow alert configuration.</p>
                     */
                    AlarmBrief m_alarm;
                    bool m_alarmHasBeenSet;

                    /**
                     * <p>Monitoring metrics configuration</p>
                     */
                    MonitorMetricBrief m_monitorMetric;
                    bool m_monitorMetricHasBeenSet;

                    /**
                     * <p>Workflow advanced setting.</p>
                     */
                    WorkflowAdvanceConfig m_advanceConfig;
                    bool m_advanceConfigHasBeenSet;

                    /**
                     * <p>Workflow task list</p>
                     */
                    std::vector<WorkflowTask> m_taskList;
                    bool m_taskListHasBeenSet;

                    /**
                     * <p>BundleId, obtainable through the Bundle API</p>
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>Bundle information</p>
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * <p>GIT configuration ID, corresponding to ConfigKey in the GetWorkspaceConfig API</p>
                     */
                    std::string m_gitConfigId;
                    bool m_gitConfigIdHasBeenSet;

                    /**
                     * <p>Git branch information.</p>
                     */
                    std::string m_gitBranch;
                    bool m_gitBranchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKFLOW_H_
