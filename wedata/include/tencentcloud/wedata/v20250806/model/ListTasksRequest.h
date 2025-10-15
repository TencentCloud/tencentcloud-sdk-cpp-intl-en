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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListTasks request structure.
                */
                class ListTasksRequest : public AbstractModel
                {
                public:
                    ListTasksRequest();
                    ~ListTasksRequest() = default;
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
                     * 获取Specifies the data page number of the request. default value is 1. valid values: equal to or greater than 1.
                     * @return PageNumber Specifies the data page number of the request. default value is 1. valid values: equal to or greater than 1.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Specifies the data page number of the request. default value is 1. valid values: equal to or greater than 1.
                     * @param _pageNumber Specifies the data page number of the request. default value is 1. valid values: equal to or greater than 1.
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Specifies the number of data records displayed per page. default: 10. value range: 10 to 200.
                     * @return PageSize Specifies the number of data records displayed per page. default: 10. value range: 10 to 200.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Specifies the number of data records displayed per page. default: 10. value range: 10 to 200.
                     * @param _pageSize Specifies the number of data records displayed per page. default: 10. value range: 10 to 200.
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Task name.
                     * @return TaskName Task name.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.
                     * @param _taskName Task name.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Workflow ID
                     * @return WorkflowId Workflow ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置Workflow ID
                     * @param _workflowId Workflow ID
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
                     * 获取Owner ID.
                     * @return OwnerUin Owner ID.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Owner ID.
                     * @param _ownerUin Owner ID.
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
                     * 获取Task type
                     * @return TaskTypeId Task type
                     * 
                     */
                    int64_t GetTaskTypeId() const;

                    /**
                     * 设置Task type
                     * @param _taskTypeId Task type
                     * 
                     */
                    void SetTaskTypeId(const int64_t& _taskTypeId);

                    /**
                     * 判断参数 TaskTypeId 是否已赋值
                     * @return TaskTypeId 是否已赋值
                     * 
                     */
                    bool TaskTypeIdHasBeenSet() const;

                    /**
                     * 获取Task Status:
* N: New
* Y: Scheduling
* F: Offline
* O: Paused
* T: Offlining
* INVALID: Invalid
                     * @return Status Task Status:
* N: New
* Y: Scheduling
* F: Offline
* O: Paused
* T: Offlining
* INVALID: Invalid
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task Status:
* N: New
* Y: Scheduling
* F: Offline
* O: Paused
* T: Offlining
* INVALID: Invalid
                     * @param _status Task Status:
* N: New
* Y: Scheduling
* F: Offline
* O: Paused
* T: Offlining
* INVALID: Invalid
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
                     * 获取Submission status.
                     * @return Submit Submission status.
                     * 
                     */
                    bool GetSubmit() const;

                    /**
                     * 设置Submission status.
                     * @param _submit Submission status.
                     * 
                     */
                    void SetSubmit(const bool& _submit);

                    /**
                     * 判断参数 Submit 是否已赋值
                     * @return Submit 是否已赋值
                     * 
                     */
                    bool SubmitHasBeenSet() const;

                    /**
                     * 获取Bundle id.
                     * @return BundleId Bundle id.
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置Bundle id.
                     * @param _bundleId Bundle id.
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
                     * 获取Creator ID.
                     * @return CreateUserUin Creator ID.
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置Creator ID.
                     * @param _createUserUin Creator ID.
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
                     * 获取Modification time range (yyyy-MM-dd HH:mm:ss). Two time values must be provided in the array.
                     * @return ModifyTime Modification time range (yyyy-MM-dd HH:mm:ss). Two time values must be provided in the array.
                     * 
                     */
                    std::vector<std::string> GetModifyTime() const;

                    /**
                     * 设置Modification time range (yyyy-MM-dd HH:mm:ss). Two time values must be provided in the array.
                     * @param _modifyTime Modification time range (yyyy-MM-dd HH:mm:ss). Two time values must be provided in the array.
                     * 
                     */
                    void SetModifyTime(const std::vector<std::string>& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Creation time range (yyyy-MM-dd HH:MM:ss). Two time values must be provided in the array.
                     * @return CreateTime Creation time range (yyyy-MM-dd HH:MM:ss). Two time values must be provided in the array.
                     * 
                     */
                    std::vector<std::string> GetCreateTime() const;

                    /**
                     * 设置Creation time range (yyyy-MM-dd HH:MM:ss). Two time values must be provided in the array.
                     * @param _createTime Creation time range (yyyy-MM-dd HH:MM:ss). Two time values must be provided in the array.
                     * 
                     */
                    void SetCreateTime(const std::vector<std::string>& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Specifies the data page number of the request. default value is 1. valid values: equal to or greater than 1.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Specifies the number of data records displayed per page. default: 10. value range: 10 to 200.
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Task name.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Workflow ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * Owner ID.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Task type
                     */
                    int64_t m_taskTypeId;
                    bool m_taskTypeIdHasBeenSet;

                    /**
                     * Task Status:
* N: New
* Y: Scheduling
* F: Offline
* O: Paused
* T: Offlining
* INVALID: Invalid
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Submission status.
                     */
                    bool m_submit;
                    bool m_submitHasBeenSet;

                    /**
                     * Bundle id.
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Creator ID.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Modification time range (yyyy-MM-dd HH:mm:ss). Two time values must be provided in the array.
                     */
                    std::vector<std::string> m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Creation time range (yyyy-MM-dd HH:MM:ss). Two time values must be provided in the array.
                     */
                    std::vector<std::string> m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKSREQUEST_H_
