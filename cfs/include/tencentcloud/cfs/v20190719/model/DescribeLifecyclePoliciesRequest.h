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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEPOLICIESREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeLifecyclePolicies request structure.
                */
                class DescribeLifecyclePoliciesRequest : public AbstractModel
                {
                public:
                    DescribeLifecyclePoliciesRequest();
                    ~DescribeLifecyclePoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Lifecycle management policy name.
                     * @return LifecyclePolicyName Lifecycle management policy name.
                     * 
                     */
                    std::string GetLifecyclePolicyName() const;

                    /**
                     * 设置Lifecycle management policy name.
                     * @param _lifecyclePolicyName Lifecycle management policy name.
                     * 
                     */
                    void SetLifecyclePolicyName(const std::string& _lifecyclePolicyName);

                    /**
                     * 判断参数 LifecyclePolicyName 是否已赋值
                     * @return LifecyclePolicyName 是否已赋值
                     * 
                     */
                    bool LifecyclePolicyNameHasBeenSet() const;

                    /**
                     * 获取Number of lifecycle management policies per page.
                     * @return PageSize Number of lifecycle management policies per page.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of lifecycle management policies per page.
                     * @param _pageSize Number of lifecycle management policies per page.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Page number of the list.
                     * @return PageNumber Page number of the list.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number of the list.
                     * @param _pageNumber Page number of the list.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取File system ID.
                     * @return FileSystemId File system ID.
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID.
                     * @param _fileSystemId File system ID.
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取Lifecycle management policy ID.
                     * @return LifecyclePolicyID Lifecycle management policy ID.
                     * 
                     */
                    std::string GetLifecyclePolicyID() const;

                    /**
                     * 设置Lifecycle management policy ID.
                     * @param _lifecyclePolicyID Lifecycle management policy ID.
                     * 
                     */
                    void SetLifecyclePolicyID(const std::string& _lifecyclePolicyID);

                    /**
                     * 判断参数 LifecyclePolicyID 是否已赋值
                     * @return LifecyclePolicyID 是否已赋值
                     * 
                     */
                    bool LifecyclePolicyIDHasBeenSet() const;

                private:

                    /**
                     * Lifecycle management policy name.
                     */
                    std::string m_lifecyclePolicyName;
                    bool m_lifecyclePolicyNameHasBeenSet;

                    /**
                     * Number of lifecycle management policies per page.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number of the list.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * File system ID.
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Lifecycle management policy ID.
                     */
                    std::string m_lifecyclePolicyID;
                    bool m_lifecyclePolicyIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBELIFECYCLEPOLICIESREQUEST_H_
