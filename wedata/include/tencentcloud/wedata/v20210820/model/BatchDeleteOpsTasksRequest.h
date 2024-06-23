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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHDELETEOPSTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHDELETEOPSTASKSREQUEST_H_

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
                * BatchDeleteOpsTasks request structure.
                */
                class BatchDeleteOpsTasksRequest : public AbstractModel
                {
                public:
                    BatchDeleteOpsTasksRequest();
                    ~BatchDeleteOpsTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Batch Deleted Task TaskId
                     * @return TaskIdList Batch Deleted Task TaskId
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置Batch Deleted Task TaskId
                     * @param _taskIdList Batch Deleted Task TaskId
                     * 
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取true: After deletion, downstream tasks can run normally
false: After deletion, downstream tasks cannot run
                     * @return DeleteMode true: After deletion, downstream tasks can run normally
false: After deletion, downstream tasks cannot run
                     * 
                     */
                    bool GetDeleteMode() const;

                    /**
                     * 设置true: After deletion, downstream tasks can run normally
false: After deletion, downstream tasks cannot run
                     * @param _deleteMode true: After deletion, downstream tasks can run normally
false: After deletion, downstream tasks cannot run
                     * 
                     */
                    void SetDeleteMode(const bool& _deleteMode);

                    /**
                     * 判断参数 DeleteMode 是否已赋值
                     * @return DeleteMode 是否已赋值
                     * 
                     */
                    bool DeleteModeHasBeenSet() const;

                    /**
                     * 获取true: Notify Downstream Task Responsible Persons
false: Do Not Notify Downstream Task Responsible Persons
                     * @return EnableNotify true: Notify Downstream Task Responsible Persons
false: Do Not Notify Downstream Task Responsible Persons
                     * 
                     */
                    bool GetEnableNotify() const;

                    /**
                     * 设置true: Notify Downstream Task Responsible Persons
false: Do Not Notify Downstream Task Responsible Persons
                     * @param _enableNotify true: Notify Downstream Task Responsible Persons
false: Do Not Notify Downstream Task Responsible Persons
                     * 
                     */
                    void SetEnableNotify(const bool& _enableNotify);

                    /**
                     * 判断参数 EnableNotify 是否已赋值
                     * @return EnableNotify 是否已赋值
                     * 
                     */
                    bool EnableNotifyHasBeenSet() const;

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

                private:

                    /**
                     * Batch Deleted Task TaskId
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * true: After deletion, downstream tasks can run normally
false: After deletion, downstream tasks cannot run
                     */
                    bool m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                    /**
                     * true: Notify Downstream Task Responsible Persons
false: Do Not Notify Downstream Task Responsible Persons
                     */
                    bool m_enableNotify;
                    bool m_enableNotifyHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHDELETEOPSTASKSREQUEST_H_
