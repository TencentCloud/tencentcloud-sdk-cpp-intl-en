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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWRUNSRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWRUNSRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/WorkflowRun.h>
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
                * ListWorkflowRunsRsp
                */
                class ListWorkflowRunsRsp : public AbstractModel
                {
                public:
                    ListWorkflowRunsRsp();
                    ~ListWorkflowRunsRsp() = default;
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
                     * 获取Workflow run list
                     * @return Items Workflow run list
                     * 
                     */
                    std::vector<WorkflowRun> GetItems() const;

                    /**
                     * 设置Workflow run list
                     * @param _items Workflow run list
                     * 
                     */
                    void SetItems(const std::vector<WorkflowRun>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取Statistics of workflow execution status.
Statistical caliber is the full data under current filter conditions, unaffected by PageNumber/PageSize.
                     * @return BizStateEnumInfos Statistics of workflow execution status.
Statistical caliber is the full data under current filter conditions, unaffected by PageNumber/PageSize.
                     * 
                     */
                    std::vector<ScheduleBizEnumBrief> GetBizStateEnumInfos() const;

                    /**
                     * 设置Statistics of workflow execution status.
Statistical caliber is the full data under current filter conditions, unaffected by PageNumber/PageSize.
                     * @param _bizStateEnumInfos Statistics of workflow execution status.
Statistical caliber is the full data under current filter conditions, unaffected by PageNumber/PageSize.
                     * 
                     */
                    void SetBizStateEnumInfos(const std::vector<ScheduleBizEnumBrief>& _bizStateEnumInfos);

                    /**
                     * 判断参数 BizStateEnumInfos 是否已赋值
                     * @return BizStateEnumInfos 是否已赋值
                     * 
                     */
                    bool BizStateEnumInfosHasBeenSet() const;

                    /**
                     * 获取Statistics of workflow execution error codes.
Statistical caliber is the full data under current filter conditions, unaffected by PageNumber/PageSize.
                     * @return BizErrorCodeEnumInfos Statistics of workflow execution error codes.
Statistical caliber is the full data under current filter conditions, unaffected by PageNumber/PageSize.
                     * 
                     */
                    std::vector<ScheduleBizEnumBrief> GetBizErrorCodeEnumInfos() const;

                    /**
                     * 设置Statistics of workflow execution error codes.
Statistical caliber is the full data under current filter conditions, unaffected by PageNumber/PageSize.
                     * @param _bizErrorCodeEnumInfos Statistics of workflow execution error codes.
Statistical caliber is the full data under current filter conditions, unaffected by PageNumber/PageSize.
                     * 
                     */
                    void SetBizErrorCodeEnumInfos(const std::vector<ScheduleBizEnumBrief>& _bizErrorCodeEnumInfos);

                    /**
                     * 判断参数 BizErrorCodeEnumInfos 是否已赋值
                     * @return BizErrorCodeEnumInfos 是否已赋值
                     * 
                     */
                    bool BizErrorCodeEnumInfosHasBeenSet() const;

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
                     * Workflow run list
                     */
                    std::vector<WorkflowRun> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * Statistics of workflow execution status.
Statistical caliber is the full data under current filter conditions, unaffected by PageNumber/PageSize.
                     */
                    std::vector<ScheduleBizEnumBrief> m_bizStateEnumInfos;
                    bool m_bizStateEnumInfosHasBeenSet;

                    /**
                     * Statistics of workflow execution error codes.
Statistical caliber is the full data under current filter conditions, unaffected by PageNumber/PageSize.
                     */
                    std::vector<ScheduleBizEnumBrief> m_bizErrorCodeEnumInfos;
                    bool m_bizErrorCodeEnumInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWRUNSRSP_H_
