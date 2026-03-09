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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERWORKFLOWSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERWORKFLOWSREQUEST_H_

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
                * ListTriggerWorkflows request structure.
                */
                class ListTriggerWorkflowsRequest : public AbstractModel
                {
                public:
                    ListTriggerWorkflowsRequest();
                    ~ListTriggerWorkflowsRequest() = default;
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
                     * 获取Request data page number. default value is 1. valid values: at least 1.
                     * @return PageNumber Request data page number. default value is 1. valid values: at least 1.
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Request data page number. default value is 1. valid values: at least 1.
                     * @param _pageNumber Request data page number. default value is 1. valid values: at least 1.
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
                     * 获取Number of records per page. the default value is `10`. the minimum value is `10`. the maximum value is `200`.
                     * @return PageSize Number of records per page. the default value is `10`. the minimum value is `10`. the maximum value is `200`.
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of records per page. the default value is `10`. the minimum value is `10`. the maximum value is `200`.
                     * @param _pageSize Number of records per page. the default value is `10`. the minimum value is `10`. the maximum value is `200`.
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
                     * 获取Person in Charge ID
                     * @return OwnerUin Person in Charge ID
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置Person in Charge ID
                     * @param _ownerUin Person in Charge ID
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
                     * 获取Modify the time interval yyyy-MM-dd HH:MM:ss. fill in two times in the array.
                     * @return ModifyTime Modify the time interval yyyy-MM-dd HH:MM:ss. fill in two times in the array.
                     * 
                     */
                    std::vector<std::string> GetModifyTime() const;

                    /**
                     * 设置Modify the time interval yyyy-MM-dd HH:MM:ss. fill in two times in the array.
                     * @param _modifyTime Modify the time interval yyyy-MM-dd HH:MM:ss. fill in two times in the array.
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
                     * Request data page number. default value is 1. valid values: at least 1.
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of records per page. the default value is `10`. the minimum value is `10`. the maximum value is `200`.
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
                     * bundleId item.
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Person in Charge ID
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Creator ID.
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * Modify the time interval yyyy-MM-dd HH:MM:ss. fill in two times in the array.
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

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTRIGGERWORKFLOWSREQUEST_H_
