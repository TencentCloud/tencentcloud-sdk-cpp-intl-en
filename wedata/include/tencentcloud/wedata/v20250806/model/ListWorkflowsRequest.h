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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTWORKFLOWSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTWORKFLOWSREQUEST_H_

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
                * ListWorkflows request structure.
                */
                class ListWorkflowsRequest : public AbstractModel
                {
                public:
                    ListWorkflowsRequest();
                    ~ListWorkflowsRequest() = default;
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
                     * 获取Search keywords.
                     * @return Keyword Search keywords.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Search keywords.
                     * @param _keyword Search keywords.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取Workflow folder.
                     * @return ParentFolderPath Workflow folder.
                     * 
                     */
                    std::string GetParentFolderPath() const;

                    /**
                     * 设置Workflow folder.
                     * @param _parentFolderPath Workflow folder.
                     * 
                     */
                    void SetParentFolderPath(const std::string& _parentFolderPath);

                    /**
                     * 判断参数 ParentFolderPath 是否已赋值
                     * @return ParentFolderPath 是否已赋值
                     * 
                     */
                    bool ParentFolderPathHasBeenSet() const;

                    /**
                     * 获取Workflow type. valid values: cycle and manual.
                     * @return WorkflowType Workflow type. valid values: cycle and manual.
                     * 
                     */
                    std::string GetWorkflowType() const;

                    /**
                     * 设置Workflow type. valid values: cycle and manual.
                     * @param _workflowType Workflow type. valid values: cycle and manual.
                     * 
                     */
                    void SetWorkflowType(const std::string& _workflowType);

                    /**
                     * 判断参数 WorkflowType 是否已赋值
                     * @return WorkflowType 是否已赋值
                     * 
                     */
                    bool WorkflowTypeHasBeenSet() const;

                    /**
                     * 获取bundleId item.
                     * @return BundleId bundleId item.
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置bundleId item.
                     * @param _bundleId bundleId item.
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
                     * 获取Owner ID
                     * @return OwnerUin Owner ID
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Owner ID
                     * @param _ownerUin Owner ID
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
                     * 获取Modification time interval yyyy-MM-dd HH:MM:ss. fill in two times in the array.
                     * @return ModifyTime Modification time interval yyyy-MM-dd HH:MM:ss. fill in two times in the array.
                     * 
                     */
                    std::vector<std::string> GetModifyTime() const;

                    /**
                     * 设置Modification time interval yyyy-MM-dd HH:MM:ss. fill in two times in the array.
                     * @param _modifyTime Modification time interval yyyy-MM-dd HH:MM:ss. fill in two times in the array.
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
                     * 获取Creation time range yyyy-MM-dd HH:MM:ss. two times must be filled in the array.
                     * @return CreateTime Creation time range yyyy-MM-dd HH:MM:ss. two times must be filled in the array.
                     * 
                     */
                    std::vector<std::string> GetCreateTime() const;

                    /**
                     * 设置Creation time range yyyy-MM-dd HH:MM:ss. two times must be filled in the array.
                     * @param _createTime Creation time range yyyy-MM-dd HH:MM:ss. two times must be filled in the array.
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
                     * Search keywords.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * Workflow folder.
                     */
                    std::string m_parentFolderPath;
                    bool m_parentFolderPathHasBeenSet;

                    /**
                     * Workflow type. valid values: cycle and manual.
                     */
                    std::string m_workflowType;
                    bool m_workflowTypeHasBeenSet;

                    /**
                     * bundleId item.
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Owner ID
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Creator ID.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Modification time interval yyyy-MM-dd HH:MM:ss. fill in two times in the array.
                     */
                    std::vector<std::string> m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Creation time range yyyy-MM-dd HH:MM:ss. two times must be filled in the array.
                     */
                    std::vector<std::string> m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTWORKFLOWSREQUEST_H_
