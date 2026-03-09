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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKPARTIALLYREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKPARTIALLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/UpdateTaskPart.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateTaskPartially request structure.
                */
                class UpdateTaskPartiallyRequest : public AbstractModel
                {
                public:
                    UpdateTaskPartiallyRequest();
                    ~UpdateTaskPartiallyRequest() = default;
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
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
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
                     * 获取Task basic attributes.
                     * @return NewSetting Task basic attributes.
                     * 
                     */
                    UpdateTaskPart GetNewSetting() const;

                    /**
                     * 设置Task basic attributes.
                     * @param _newSetting Task basic attributes.
                     * 
                     */
                    void SetNewSetting(const UpdateTaskPart& _newSetting);

                    /**
                     * 判断参数 NewSetting 是否已赋值
                     * @return NewSetting 是否已赋值
                     * 
                     */
                    bool NewSettingHasBeenSet() const;

                    /**
                     * 获取Delete field content, identified in the form of property paths, with deleted values separated by ":" and multiple values separated by "," delete the attribute "TaskConfiguration/TaskSchedulingParameterList:aa,bb" where ParamKey is aa,bb in scheduling parameters delete the upstream dependency "TaskSchedulerConfiguration/UpstreamDependencyConfigList:2509162129381111,2509162129381112" where TaskId is 2509162129381111,2509162129381112 in upstream dependencies delete the downstream dependency "TaskSchedulerConfiguration/DownStreamDependencyConfigList:2509162129382222,2509162129382223" where TaskId is 2509162129382222,2509162129382223 in downstream circular dependencies delete the event "TaskSchedulerConfiguration/EventListenerList:event_250916_213234,event_250916_213235" where EventName is event_250916_213234,event_250916_213235 in events delete the parameter "TaskSchedulerConfiguration/ParamTaskOutList:pp_out,pp_1" where ParamKey is pp_out,pp_1 in parameter output transmission delete the parameter "TaskSchedulerConfiguration/ParamTaskInList:pp_in,pp_1" where ParamKey is pp_in,pp_1 in parameter application delete the output registration "TaskSchedulerConfiguration/TaskOutputRegistryList:6578laxif4d1" where TablePhysicalId is 6578laxif4d1 in product registration.
                     * @return FieldToRemoveList Delete field content, identified in the form of property paths, with deleted values separated by ":" and multiple values separated by "," delete the attribute "TaskConfiguration/TaskSchedulingParameterList:aa,bb" where ParamKey is aa,bb in scheduling parameters delete the upstream dependency "TaskSchedulerConfiguration/UpstreamDependencyConfigList:2509162129381111,2509162129381112" where TaskId is 2509162129381111,2509162129381112 in upstream dependencies delete the downstream dependency "TaskSchedulerConfiguration/DownStreamDependencyConfigList:2509162129382222,2509162129382223" where TaskId is 2509162129382222,2509162129382223 in downstream circular dependencies delete the event "TaskSchedulerConfiguration/EventListenerList:event_250916_213234,event_250916_213235" where EventName is event_250916_213234,event_250916_213235 in events delete the parameter "TaskSchedulerConfiguration/ParamTaskOutList:pp_out,pp_1" where ParamKey is pp_out,pp_1 in parameter output transmission delete the parameter "TaskSchedulerConfiguration/ParamTaskInList:pp_in,pp_1" where ParamKey is pp_in,pp_1 in parameter application delete the output registration "TaskSchedulerConfiguration/TaskOutputRegistryList:6578laxif4d1" where TablePhysicalId is 6578laxif4d1 in product registration.
                     * 
                     */
                    std::vector<std::string> GetFieldToRemoveList() const;

                    /**
                     * 设置Delete field content, identified in the form of property paths, with deleted values separated by ":" and multiple values separated by "," delete the attribute "TaskConfiguration/TaskSchedulingParameterList:aa,bb" where ParamKey is aa,bb in scheduling parameters delete the upstream dependency "TaskSchedulerConfiguration/UpstreamDependencyConfigList:2509162129381111,2509162129381112" where TaskId is 2509162129381111,2509162129381112 in upstream dependencies delete the downstream dependency "TaskSchedulerConfiguration/DownStreamDependencyConfigList:2509162129382222,2509162129382223" where TaskId is 2509162129382222,2509162129382223 in downstream circular dependencies delete the event "TaskSchedulerConfiguration/EventListenerList:event_250916_213234,event_250916_213235" where EventName is event_250916_213234,event_250916_213235 in events delete the parameter "TaskSchedulerConfiguration/ParamTaskOutList:pp_out,pp_1" where ParamKey is pp_out,pp_1 in parameter output transmission delete the parameter "TaskSchedulerConfiguration/ParamTaskInList:pp_in,pp_1" where ParamKey is pp_in,pp_1 in parameter application delete the output registration "TaskSchedulerConfiguration/TaskOutputRegistryList:6578laxif4d1" where TablePhysicalId is 6578laxif4d1 in product registration.
                     * @param _fieldToRemoveList Delete field content, identified in the form of property paths, with deleted values separated by ":" and multiple values separated by "," delete the attribute "TaskConfiguration/TaskSchedulingParameterList:aa,bb" where ParamKey is aa,bb in scheduling parameters delete the upstream dependency "TaskSchedulerConfiguration/UpstreamDependencyConfigList:2509162129381111,2509162129381112" where TaskId is 2509162129381111,2509162129381112 in upstream dependencies delete the downstream dependency "TaskSchedulerConfiguration/DownStreamDependencyConfigList:2509162129382222,2509162129382223" where TaskId is 2509162129382222,2509162129382223 in downstream circular dependencies delete the event "TaskSchedulerConfiguration/EventListenerList:event_250916_213234,event_250916_213235" where EventName is event_250916_213234,event_250916_213235 in events delete the parameter "TaskSchedulerConfiguration/ParamTaskOutList:pp_out,pp_1" where ParamKey is pp_out,pp_1 in parameter output transmission delete the parameter "TaskSchedulerConfiguration/ParamTaskInList:pp_in,pp_1" where ParamKey is pp_in,pp_1 in parameter application delete the output registration "TaskSchedulerConfiguration/TaskOutputRegistryList:6578laxif4d1" where TablePhysicalId is 6578laxif4d1 in product registration.
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
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task basic attributes.
                     */
                    UpdateTaskPart m_newSetting;
                    bool m_newSettingHasBeenSet;

                    /**
                     * Delete field content, identified in the form of property paths, with deleted values separated by ":" and multiple values separated by "," delete the attribute "TaskConfiguration/TaskSchedulingParameterList:aa,bb" where ParamKey is aa,bb in scheduling parameters delete the upstream dependency "TaskSchedulerConfiguration/UpstreamDependencyConfigList:2509162129381111,2509162129381112" where TaskId is 2509162129381111,2509162129381112 in upstream dependencies delete the downstream dependency "TaskSchedulerConfiguration/DownStreamDependencyConfigList:2509162129382222,2509162129382223" where TaskId is 2509162129382222,2509162129382223 in downstream circular dependencies delete the event "TaskSchedulerConfiguration/EventListenerList:event_250916_213234,event_250916_213235" where EventName is event_250916_213234,event_250916_213235 in events delete the parameter "TaskSchedulerConfiguration/ParamTaskOutList:pp_out,pp_1" where ParamKey is pp_out,pp_1 in parameter output transmission delete the parameter "TaskSchedulerConfiguration/ParamTaskInList:pp_in,pp_1" where ParamKey is pp_in,pp_1 in parameter application delete the output registration "TaskSchedulerConfiguration/TaskOutputRegistryList:6578laxif4d1" where TablePhysicalId is 6578laxif4d1 in product registration.
                     */
                    std::vector<std::string> m_fieldToRemoveList;
                    bool m_fieldToRemoveListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATETASKPARTIALLYREQUEST_H_
