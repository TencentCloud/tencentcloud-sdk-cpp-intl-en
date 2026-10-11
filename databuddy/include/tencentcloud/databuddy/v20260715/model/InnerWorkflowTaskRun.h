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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUN_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/InnerWorkflowTaskRunIteration.h>
#include <tencentcloud/databuddy/v20260715/model/ScheduleBizEnumBrief.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Built-in workflow task execution details (FOR_EACH tasks only)
                */
                class InnerWorkflowTaskRun : public AbstractModel
                {
                public:
                    InnerWorkflowTaskRun();
                    ~InnerWorkflowTaskRun() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Current page
                     * @return PageNumber Current page
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置Current page
                     * @param _pageNumber Current page
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
                     * 获取Page Size
                     * @return PageSize Page Size
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置Page Size
                     * @param _pageSize Page Size
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
                     * 获取Total number of records
                     * @return TotalCount Total number of records
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of records
                     * @param _totalCount Total number of records
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Total pages
                     * @return TotalPageNumber Total pages
                     * 
                     */
                    int64_t GetTotalPageNumber() const;

                    /**
                     * 设置Total pages
                     * @param _totalPageNumber Total pages
                     * 
                     */
                    void SetTotalPageNumber(const int64_t& _totalPageNumber);

                    /**
                     * 判断参数 TotalPageNumber 是否已赋值
                     * @return TotalPageNumber 是否已赋值
                     * 
                     */
                    bool TotalPageNumberHasBeenSet() const;

                    /**
                     * 获取Iteration run list
                     * @return Items Iteration run list
                     * 
                     */
                    std::vector<InnerWorkflowTaskRunIteration> GetItems() const;

                    /**
                     * 设置Iteration run list
                     * @param _items Iteration run list
                     * 
                     */
                    void SetItems(const std::vector<InnerWorkflowTaskRunIteration>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Number of iterations.
                     * @return IterationCount Number of iterations.
                     * 
                     */
                    int64_t GetIterationCount() const;

                    /**
                     * 设置Number of iterations.
                     * @param _iterationCount Number of iterations.
                     * 
                     */
                    void SetIterationCount(const int64_t& _iterationCount);

                    /**
                     * 判断参数 IterationCount 是否已赋值
                     * @return IterationCount 是否已赋值
                     * 
                     */
                    bool IterationCountHasBeenSet() const;

                    /**
                     * 获取Number of failures
                     * @return FailureCount Number of failures
                     * 
                     */
                    int64_t GetFailureCount() const;

                    /**
                     * 设置Number of failures
                     * @param _failureCount Number of failures
                     * 
                     */
                    void SetFailureCount(const int64_t& _failureCount);

                    /**
                     * 判断参数 FailureCount 是否已赋值
                     * @return FailureCount 是否已赋值
                     * 
                     */
                    bool FailureCountHasBeenSet() const;

                    /**
                     * 获取Number of successes
                     * @return SuccessCount Number of successes
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置Number of successes
                     * @param _successCount Number of successes
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取Built-in workflow ID, which can be obtained through ListWorkflows
                     * @return InnerWorkflowId Built-in workflow ID, which can be obtained through ListWorkflows
                     * 
                     */
                    std::string GetInnerWorkflowId() const;

                    /**
                     * 设置Built-in workflow ID, which can be obtained through ListWorkflows
                     * @param _innerWorkflowId Built-in workflow ID, which can be obtained through ListWorkflows
                     * 
                     */
                    void SetInnerWorkflowId(const std::string& _innerWorkflowId);

                    /**
                     * 判断参数 InnerWorkflowId 是否已赋值
                     * @return InnerWorkflowId 是否已赋值
                     * 
                     */
                    bool InnerWorkflowIdHasBeenSet() const;

                    /**
                     * 获取Built-in task ID, which can be obtained through ListWorkflowTasks.
                     * @return InnerTaskId Built-in task ID, which can be obtained through ListWorkflowTasks.
                     * 
                     */
                    std::string GetInnerTaskId() const;

                    /**
                     * 设置Built-in task ID, which can be obtained through ListWorkflowTasks.
                     * @param _innerTaskId Built-in task ID, which can be obtained through ListWorkflowTasks.
                     * 
                     */
                    void SetInnerTaskId(const std::string& _innerTaskId);

                    /**
                     * 判断参数 InnerTaskId 是否已赋值
                     * @return InnerTaskId 是否已赋值
                     * 
                     */
                    bool InnerTaskIdHasBeenSet() const;

                    /**
                     * 获取Statistics on the number of built-in task running statuses (list of key-value pairs for instance business enums)
                     * @return InnerTaskRunBizEnumInfos Statistics on the number of built-in task running statuses (list of key-value pairs for instance business enums)
                     * 
                     */
                    std::vector<ScheduleBizEnumBrief> GetInnerTaskRunBizEnumInfos() const;

                    /**
                     * 设置Statistics on the number of built-in task running statuses (list of key-value pairs for instance business enums)
                     * @param _innerTaskRunBizEnumInfos Statistics on the number of built-in task running statuses (list of key-value pairs for instance business enums)
                     * 
                     */
                    void SetInnerTaskRunBizEnumInfos(const std::vector<ScheduleBizEnumBrief>& _innerTaskRunBizEnumInfos);

                    /**
                     * 判断参数 InnerTaskRunBizEnumInfos 是否已赋值
                     * @return InnerTaskRunBizEnumInfos 是否已赋值
                     * 
                     */
                    bool InnerTaskRunBizEnumInfosHasBeenSet() const;

                private:

                    /**
                     * Current page
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page Size
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Total number of records
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Total pages
                     */
                    int64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                    /**
                     * Iteration run list
                     */
                    std::vector<InnerWorkflowTaskRunIteration> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Number of iterations.
                     */
                    int64_t m_iterationCount;
                    bool m_iterationCountHasBeenSet;

                    /**
                     * Number of failures
                     */
                    int64_t m_failureCount;
                    bool m_failureCountHasBeenSet;

                    /**
                     * Number of successes
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * Built-in workflow ID, which can be obtained through ListWorkflows
                     */
                    std::string m_innerWorkflowId;
                    bool m_innerWorkflowIdHasBeenSet;

                    /**
                     * Built-in task ID, which can be obtained through ListWorkflowTasks.
                     */
                    std::string m_innerTaskId;
                    bool m_innerTaskIdHasBeenSet;

                    /**
                     * Statistics on the number of built-in task running statuses (list of key-value pairs for instance business enums)
                     */
                    std::vector<ScheduleBizEnumBrief> m_innerTaskRunBizEnumInfos;
                    bool m_innerTaskRunBizEnumInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_INNERWORKFLOWTASKRUN_H_
