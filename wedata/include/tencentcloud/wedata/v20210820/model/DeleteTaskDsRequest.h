/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETETASKDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETETASKDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DeleteTaskDs request structure.
                */
                class DeleteTaskDsRequest : public AbstractModel
                {
                public:
                    DeleteTaskDsRequest();
                    ~DeleteTaskDsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
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
                     * 获取Delete script?
true: delete
false: do not delete
Default false if not passed
                     * @return DeleteScript Delete script?
true: delete
false: do not delete
Default false if not passed
                     * 
                     */
                    bool GetDeleteScript() const;

                    /**
                     * 设置Delete script?
true: delete
false: do not delete
Default false if not passed
                     * @param _deleteScript Delete script?
true: delete
false: do not delete
Default false if not passed
                     * 
                     */
                    void SetDeleteScript(const bool& _deleteScript);

                    /**
                     * 判断参数 DeleteScript 是否已赋值
                     * @return DeleteScript 是否已赋值
                     * 
                     */
                    bool DeleteScriptHasBeenSet() const;

                    /**
                     * 获取Task operation: Notify downstream task owners?
true: notify
false: do not notify
Default false if not passed
                     * @return OperateInform Task operation: Notify downstream task owners?
true: notify
false: do not notify
Default false if not passed
                     * 
                     */
                    bool GetOperateInform() const;

                    /**
                     * 设置Task operation: Notify downstream task owners?
true: notify
false: do not notify
Default false if not passed
                     * @param _operateInform Task operation: Notify downstream task owners?
true: notify
false: do not notify
Default false if not passed
                     * 
                     */
                    void SetOperateInform(const bool& _operateInform);

                    /**
                     * 判断参数 OperateInform 是否已赋值
                     * @return OperateInform 是否已赋值
                     * 
                     */
                    bool OperateInformHasBeenSet() const;

                    /**
                     * 获取Task IDChoose either VirtualTaskId or
                     * @return TaskId Task IDChoose either VirtualTaskId or
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task IDChoose either VirtualTaskId or
                     * @param _taskId Task IDChoose either VirtualTaskId or
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
                     * 获取Virtual task id
Either TaskId or this field is optional

                     * @return VirtualTaskId Virtual task id
Either TaskId or this field is optional

                     * 
                     */
                    std::string GetVirtualTaskId() const;

                    /**
                     * 设置Virtual task id
Either TaskId or this field is optional

                     * @param _virtualTaskId Virtual task id
Either TaskId or this field is optional

                     * 
                     */
                    void SetVirtualTaskId(const std::string& _virtualTaskId);

                    /**
                     * 判断参数 VirtualTaskId 是否已赋值
                     * @return VirtualTaskId 是否已赋值
                     * 
                     */
                    bool VirtualTaskIdHasBeenSet() const;

                    /**
                     * 获取Virtual task flag
true: It is a virtual task
false: It is not a virtual task
Default false if not passed
                     * @return VirtualFlag Virtual task flag
true: It is a virtual task
false: It is not a virtual task
Default false if not passed
                     * 
                     */
                    bool GetVirtualFlag() const;

                    /**
                     * 设置Virtual task flag
true: It is a virtual task
false: It is not a virtual task
Default false if not passed
                     * @param _virtualFlag Virtual task flag
true: It is a virtual task
false: It is not a virtual task
Default false if not passed
                     * 
                     */
                    void SetVirtualFlag(const bool& _virtualFlag);

                    /**
                     * 判断参数 VirtualFlag 是否已赋值
                     * @return VirtualFlag 是否已赋值
                     * 
                     */
                    bool VirtualFlagHasBeenSet() const;

                    /**
                     * 获取Task deletion method
true: Do not force fail downstream task instances
false: Force fail downstream task instances
If not specified, the default is false

                     * @return DeleteMode Task deletion method
true: Do not force fail downstream task instances
false: Force fail downstream task instances
If not specified, the default is false

                     * 
                     */
                    bool GetDeleteMode() const;

                    /**
                     * 设置Task deletion method
true: Do not force fail downstream task instances
false: Force fail downstream task instances
If not specified, the default is false

                     * @param _deleteMode Task deletion method
true: Do not force fail downstream task instances
false: Force fail downstream task instances
If not specified, the default is false

                     * 
                     */
                    void SetDeleteMode(const bool& _deleteMode);

                    /**
                     * 判断参数 DeleteMode 是否已赋值
                     * @return DeleteMode 是否已赋值
                     * 
                     */
                    bool DeleteModeHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Delete script?
true: delete
false: do not delete
Default false if not passed
                     */
                    bool m_deleteScript;
                    bool m_deleteScriptHasBeenSet;

                    /**
                     * Task operation: Notify downstream task owners?
true: notify
false: do not notify
Default false if not passed
                     */
                    bool m_operateInform;
                    bool m_operateInformHasBeenSet;

                    /**
                     * Task IDChoose either VirtualTaskId or
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Virtual task id
Either TaskId or this field is optional

                     */
                    std::string m_virtualTaskId;
                    bool m_virtualTaskIdHasBeenSet;

                    /**
                     * Virtual task flag
true: It is a virtual task
false: It is not a virtual task
Default false if not passed
                     */
                    bool m_virtualFlag;
                    bool m_virtualFlagHasBeenSet;

                    /**
                     * Task deletion method
true: Do not force fail downstream task instances
false: Force fail downstream task instances
If not specified, the default is false

                     */
                    bool m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETETASKDSREQUEST_H_
