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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELISTREQUEST_H_

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
                * DescribeInstanceList request structure.
                */
                class DescribeInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeInstanceListRequest();
                    ~DescribeInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project/workspace ID
                     * @return ProjectId Project/workspace ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project/workspace ID
                     * @param _projectId Project/workspace ID
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
                     * 获取Page Number
                     * @return PageIndex Page Number
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置Page Number
                     * @param _pageIndex Page Number
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取Number of items displayed per page
                     * @return PageSize Number of items displayed per page
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Number of items displayed per page
                     * @param _pageSize Number of items displayed per page
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
                     * 获取Cycle List (e.g., daily, one-time), optional
                     * @return CycleList Cycle List (e.g., daily, one-time), optional
                     * 
                     */
                    std::vector<std::string> GetCycleList() const;

                    /**
                     * 设置Cycle List (e.g., daily, one-time), optional
                     * @param _cycleList Cycle List (e.g., daily, one-time), optional
                     * 
                     */
                    void SetCycleList(const std::vector<std::string>& _cycleList);

                    /**
                     * 判断参数 CycleList 是否已赋值
                     * @return CycleList 是否已赋值
                     * 
                     */
                    bool CycleListHasBeenSet() const;

                    /**
                     * 获取Person in Charge
                     * @return OwnerList Person in Charge
                     * 
                     */
                    std::vector<std::string> GetOwnerList() const;

                    /**
                     * 设置Person in Charge
                     * @param _ownerList Person in Charge
                     * 
                     */
                    void SetOwnerList(const std::vector<std::string>& _ownerList);

                    /**
                     * 判断参数 OwnerList 是否已赋值
                     * @return OwnerList 是否已赋值
                     * 
                     */
                    bool OwnerListHasBeenSet() const;

                    /**
                     * 获取Keep consistent with previous
                     * @return InstanceType Keep consistent with previous
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Keep consistent with previous
                     * @param _instanceType Keep consistent with previous
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Sorting Order (asc, desc)
                     * @return Sort Sorting Order (asc, desc)
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sorting Order (asc, desc)
                     * @param _sort Sorting Order (asc, desc)
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Sort Column (costTime Runtime duration, startTime Start Time, state Instance status, curRunDate Data Timestamp)
                     * @return SortCol Sort Column (costTime Runtime duration, startTime Start Time, state Instance status, curRunDate Data Timestamp)
                     * 
                     */
                    std::string GetSortCol() const;

                    /**
                     * 设置Sort Column (costTime Runtime duration, startTime Start Time, state Instance status, curRunDate Data Timestamp)
                     * @param _sortCol Sort Column (costTime Runtime duration, startTime Start Time, state Instance status, curRunDate Data Timestamp)
                     * 
                     */
                    void SetSortCol(const std::string& _sortCol);

                    /**
                     * 判断参数 SortCol 是否已赋值
                     * @return SortCol 是否已赋值
                     * 
                     */
                    bool SortColHasBeenSet() const;

                    /**
                     * 获取Type List (e.g., Python Task Type: 30
PySpark Task Type: 31
hivesql task type:34
shell task type:35
sparksql task type:36 jdbcsql task type:21 dlc task type:32), optional
                     * @return TaskTypeList Type List (e.g., Python Task Type: 30
PySpark Task Type: 31
hivesql task type:34
shell task type:35
sparksql task type:36 jdbcsql task type:21 dlc task type:32), optional
                     * 
                     */
                    std::vector<int64_t> GetTaskTypeList() const;

                    /**
                     * 设置Type List (e.g., Python Task Type: 30
PySpark Task Type: 31
hivesql task type:34
shell task type:35
sparksql task type:36 jdbcsql task type:21 dlc task type:32), optional
                     * @param _taskTypeList Type List (e.g., Python Task Type: 30
PySpark Task Type: 31
hivesql task type:34
shell task type:35
sparksql task type:36 jdbcsql task type:21 dlc task type:32), optional
                     * 
                     */
                    void SetTaskTypeList(const std::vector<int64_t>& _taskTypeList);

                    /**
                     * 判断参数 TaskTypeList 是否已赋值
                     * @return TaskTypeList 是否已赋值
                     * 
                     */
                    bool TaskTypeListHasBeenSet() const;

                    /**
                     * 获取Status list (e.g., success 2, executing 1), optional
                     * @return StateList Status list (e.g., success 2, executing 1), optional
                     * 
                     */
                    std::vector<int64_t> GetStateList() const;

                    /**
                     * 设置Status list (e.g., success 2, executing 1), optional
                     * @param _stateList Status list (e.g., success 2, executing 1), optional
                     * 
                     */
                    void SetStateList(const std::vector<int64_t>& _stateList);

                    /**
                     * 判断参数 StateList 是否已赋值
                     * @return StateList 是否已赋值
                     * 
                     */
                    bool StateListHasBeenSet() const;

                    /**
                     * 获取Task Name
                     * @return Keyword Task Name
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置Task Name
                     * @param _keyword Task Name
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * Project/workspace ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Page Number
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * Number of items displayed per page
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Cycle List (e.g., daily, one-time), optional
                     */
                    std::vector<std::string> m_cycleList;
                    bool m_cycleListHasBeenSet;

                    /**
                     * Person in Charge
                     */
                    std::vector<std::string> m_ownerList;
                    bool m_ownerListHasBeenSet;

                    /**
                     * Keep consistent with previous
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Sorting Order (asc, desc)
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Sort Column (costTime Runtime duration, startTime Start Time, state Instance status, curRunDate Data Timestamp)
                     */
                    std::string m_sortCol;
                    bool m_sortColHasBeenSet;

                    /**
                     * Type List (e.g., Python Task Type: 30
PySpark Task Type: 31
hivesql task type:34
shell task type:35
sparksql task type:36 jdbcsql task type:21 dlc task type:32), optional
                     */
                    std::vector<int64_t> m_taskTypeList;
                    bool m_taskTypeListHasBeenSet;

                    /**
                     * Status list (e.g., success 2, executing 1), optional
                     */
                    std::vector<int64_t> m_stateList;
                    bool m_stateListHasBeenSet;

                    /**
                     * Task Name
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCELISTREQUEST_H_
