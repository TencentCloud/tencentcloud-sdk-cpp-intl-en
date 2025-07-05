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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPROJECTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPROJECTREQUEST_H_

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
                * DescribeProject request structure.
                */
                class DescribeProjectRequest : public AbstractModel
                {
                public:
                    DescribeProjectRequest();
                    ~DescribeProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID. It is common to use the Project ID for queries, and either this or projectName must be present.
                     * @return ProjectId Project ID. It is common to use the Project ID for queries, and either this or projectName must be present.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID. It is common to use the Project ID for queries, and either this or projectName must be present.
                     * @param _projectId Project ID. It is common to use the Project ID for queries, and either this or projectName must be present.
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
                     * 获取Whether to Display Associated Cluster Information
                     * @return DescribeClusters Whether to Display Associated Cluster Information
                     * 
                     */
                    bool GetDescribeClusters() const;

                    /**
                     * 设置Whether to Display Associated Cluster Information
                     * @param _describeClusters Whether to Display Associated Cluster Information
                     * 
                     */
                    void SetDescribeClusters(const bool& _describeClusters);

                    /**
                     * 判断参数 DescribeClusters 是否已赋值
                     * @return DescribeClusters 是否已赋值
                     * 
                     */
                    bool DescribeClustersHasBeenSet() const;

                    /**
                     * 获取Whether to Display Information of Associated Execution Group, only partial information.
                     * @return DescribeExecutors Whether to Display Information of Associated Execution Group, only partial information.
                     * 
                     */
                    bool GetDescribeExecutors() const;

                    /**
                     * 设置Whether to Display Information of Associated Execution Group, only partial information.
                     * @param _describeExecutors Whether to Display Information of Associated Execution Group, only partial information.
                     * 
                     */
                    void SetDescribeExecutors(const bool& _describeExecutors);

                    /**
                     * 判断参数 DescribeExecutors 是否已赋值
                     * @return DescribeExecutors 是否已赋值
                     * 
                     */
                    bool DescribeExecutorsHasBeenSet() const;

                    /**
                     * 获取Default not to display project administrator information
                     * @return DescribeAdminUsers Default not to display project administrator information
                     * 
                     */
                    bool GetDescribeAdminUsers() const;

                    /**
                     * 设置Default not to display project administrator information
                     * @param _describeAdminUsers Default not to display project administrator information
                     * 
                     */
                    void SetDescribeAdminUsers(const bool& _describeAdminUsers);

                    /**
                     * 判断参数 DescribeAdminUsers 是否已赋值
                     * @return DescribeAdminUsers 是否已赋值
                     * 
                     */
                    bool DescribeAdminUsersHasBeenSet() const;

                    /**
                     * 获取Default not to count the number of project personnel
                     * @return DescribeMemberCount Default not to count the number of project personnel
                     * 
                     */
                    bool GetDescribeMemberCount() const;

                    /**
                     * 设置Default not to count the number of project personnel
                     * @param _describeMemberCount Default not to count the number of project personnel
                     * 
                     */
                    void SetDescribeMemberCount(const bool& _describeMemberCount);

                    /**
                     * 判断参数 DescribeMemberCount 是否已赋值
                     * @return DescribeMemberCount 是否已赋值
                     * 
                     */
                    bool DescribeMemberCountHasBeenSet() const;

                    /**
                     * 获取Default not to query creator's information
                     * @return DescribeCreator Default not to query creator's information
                     * 
                     */
                    bool GetDescribeCreator() const;

                    /**
                     * 设置Default not to query creator's information
                     * @param _describeCreator Default not to query creator's information
                     * 
                     */
                    void SetDescribeCreator(const bool& _describeCreator);

                    /**
                     * 判断参数 DescribeCreator 是否已赋值
                     * @return DescribeCreator 是否已赋值
                     * 
                     */
                    bool DescribeCreatorHasBeenSet() const;

                    /**
                     * 获取The project name is unique within a tenant, generally used for conversion to Project ID.
                     * @return ProjectName The project name is unique within a tenant, generally used for conversion to Project ID.
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置The project name is unique within a tenant, generally used for conversion to Project ID.
                     * @param _projectName The project name is unique within a tenant, generally used for conversion to Project ID.
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                private:

                    /**
                     * Project ID. It is common to use the Project ID for queries, and either this or projectName must be present.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Whether to Display Associated Cluster Information
                     */
                    bool m_describeClusters;
                    bool m_describeClustersHasBeenSet;

                    /**
                     * Whether to Display Information of Associated Execution Group, only partial information.
                     */
                    bool m_describeExecutors;
                    bool m_describeExecutorsHasBeenSet;

                    /**
                     * Default not to display project administrator information
                     */
                    bool m_describeAdminUsers;
                    bool m_describeAdminUsersHasBeenSet;

                    /**
                     * Default not to count the number of project personnel
                     */
                    bool m_describeMemberCount;
                    bool m_describeMemberCountHasBeenSet;

                    /**
                     * Default not to query creator's information
                     */
                    bool m_describeCreator;
                    bool m_describeCreatorHasBeenSet;

                    /**
                     * The project name is unique within a tenant, generally used for conversion to Project ID.
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEPROJECTREQUEST_H_
