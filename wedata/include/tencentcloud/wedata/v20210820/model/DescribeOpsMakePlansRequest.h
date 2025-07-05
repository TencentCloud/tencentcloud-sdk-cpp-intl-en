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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSMAKEPLANSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSMAKEPLANSREQUEST_H_

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
                * DescribeOpsMakePlans request structure.
                */
                class DescribeOpsMakePlansRequest : public AbstractModel
                {
                public:
                    DescribeOpsMakePlansRequest();
                    ~DescribeOpsMakePlansRequest() = default;
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
                     * 获取Pagination number, default value: 1
                     * @return PageNumber Pagination number, default value: 1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Pagination number, default value: 1
                     * @param _pageNumber Pagination number, default value: 1
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
                     * 获取Page size, default value 10
                     * @return PageSize Page size, default value 10
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page size, default value 10
                     * @param _pageSize Page size, default value 10
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
                     * 获取Supplemental Plan ID
                     * @return PlanId Supplemental Plan ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Supplemental Plan ID
                     * @param _planId Supplemental Plan ID
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取Supplemental Plan Name
                     * @return PlanName Supplemental Plan Name
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置Supplemental Plan Name
                     * @param _planName Supplemental Plan Name
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取Supplementary Task Name
                     * @return TaskName Supplementary Task Name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Supplementary Task Name
                     * @param _taskName Supplementary Task Name
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
                     * 获取Supplementary Task ID
                     * @return TaskId Supplementary Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Supplementary Task ID
                     * @param _taskId Supplementary Task ID
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
                     * 获取Supplementary Plan Creator
                     * @return Creator Supplementary Plan Creator
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Supplementary Plan Creator
                     * @param _creator Supplementary Plan Creator
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Minimum Creation Time of Supplementary Plan
                     * @return MinCreateTime Minimum Creation Time of Supplementary Plan
                     * 
                     */
                    std::string GetMinCreateTime() const;

                    /**
                     * 设置Minimum Creation Time of Supplementary Plan
                     * @param _minCreateTime Minimum Creation Time of Supplementary Plan
                     * 
                     */
                    void SetMinCreateTime(const std::string& _minCreateTime);

                    /**
                     * 判断参数 MinCreateTime 是否已赋值
                     * @return MinCreateTime 是否已赋值
                     * 
                     */
                    bool MinCreateTimeHasBeenSet() const;

                    /**
                     * 获取Maximum Creation Time of Supplementary Plan
                     * @return MaxCreateTime Maximum Creation Time of Supplementary Plan
                     * 
                     */
                    std::string GetMaxCreateTime() const;

                    /**
                     * 设置Maximum Creation Time of Supplementary Plan
                     * @param _maxCreateTime Maximum Creation Time of Supplementary Plan
                     * 
                     */
                    void SetMaxCreateTime(const std::string& _maxCreateTime);

                    /**
                     * 判断参数 MaxCreateTime 是否已赋值
                     * @return MaxCreateTime 是否已赋值
                     * 
                     */
                    bool MaxCreateTimeHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Pagination number, default value: 1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page size, default value 10
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Supplemental Plan ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Supplemental Plan Name
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * Supplementary Task Name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Supplementary Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Supplementary Plan Creator
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Minimum Creation Time of Supplementary Plan
                     */
                    std::string m_minCreateTime;
                    bool m_minCreateTimeHasBeenSet;

                    /**
                     * Maximum Creation Time of Supplementary Plan
                     */
                    std::string m_maxCreateTime;
                    bool m_maxCreateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSMAKEPLANSREQUEST_H_
