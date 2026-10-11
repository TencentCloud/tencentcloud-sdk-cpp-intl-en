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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWSREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/OrderBy.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
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
                     * 获取<p>Workspace ID, which can be obtained through ListWorkspaces. Required</p>
                     * @return WorkspaceId <p>Workspace ID, which can be obtained through ListWorkspaces. Required</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace ID, which can be obtained through ListWorkspaces. Required</p>
                     * @param _workspaceId <p>Workspace ID, which can be obtained through ListWorkspaces. Required</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * @return PageNumber <p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     * @param _pageNumber <p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
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
                     * 获取<p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * @return PageSize <p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     * @param _pageSize <p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
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
                     * 获取<p>Workflow name keyword for fuzzy matching of WorkflowName. Optional, single value</p>
                     * @return WorkflowNameKeyword <p>Workflow name keyword for fuzzy matching of WorkflowName. Optional, single value</p>
                     * 
                     */
                    std::string GetWorkflowNameKeyword() const;

                    /**
                     * 设置<p>Workflow name keyword for fuzzy matching of WorkflowName. Optional, single value</p>
                     * @param _workflowNameKeyword <p>Workflow name keyword for fuzzy matching of WorkflowName. Optional, single value</p>
                     * 
                     */
                    void SetWorkflowNameKeyword(const std::string& _workflowNameKeyword);

                    /**
                     * 判断参数 WorkflowNameKeyword 是否已赋值
                     * @return WorkflowNameKeyword 是否已赋值
                     * 
                     */
                    bool WorkflowNameKeywordHasBeenSet() const;

                    /**
                     * 获取<p>Workflow name, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * @return WorkflowNames <p>Workflow name, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * 
                     */
                    std::vector<std::string> GetWorkflowNames() const;

                    /**
                     * 设置<p>Workflow name, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * @param _workflowNames <p>Workflow name, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * 
                     */
                    void SetWorkflowNames(const std::vector<std::string>& _workflowNames);

                    /**
                     * 判断参数 WorkflowNames 是否已赋值
                     * @return WorkflowNames 是否已赋值
                     * 
                     */
                    bool WorkflowNamesHasBeenSet() const;

                    /**
                     * 获取<p>Workflow ID. Exact match. Optional. Multiple selection (OR relationship between multiple values)</p>
                     * @return WorkflowIds <p>Workflow ID. Exact match. Optional. Multiple selection (OR relationship between multiple values)</p>
                     * 
                     */
                    std::vector<std::string> GetWorkflowIds() const;

                    /**
                     * 设置<p>Workflow ID. Exact match. Optional. Multiple selection (OR relationship between multiple values)</p>
                     * @param _workflowIds <p>Workflow ID. Exact match. Optional. Multiple selection (OR relationship between multiple values)</p>
                     * 
                     */
                    void SetWorkflowIds(const std::vector<std::string>& _workflowIds);

                    /**
                     * 判断参数 WorkflowIds 是否已赋值
                     * @return WorkflowIds 是否已赋值
                     * 
                     */
                    bool WorkflowIdsHasBeenSet() const;

                    /**
                     * 获取<p>Workflow runner UIN, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * @return RunUserUins <p>Workflow runner UIN, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * 
                     */
                    std::vector<std::string> GetRunUserUins() const;

                    /**
                     * 设置<p>Workflow runner UIN, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * @param _runUserUins <p>Workflow runner UIN, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     * 
                     */
                    void SetRunUserUins(const std::vector<std::string>& _runUserUins);

                    /**
                     * 判断参数 RunUserUins 是否已赋值
                     * @return RunUserUins 是否已赋值
                     * 
                     */
                    bool RunUserUinsHasBeenSet() const;

                    /**
                     * 获取<p>Tag name ID. Exact match. You can obtain it via tag-related APIs. Optional. Multiple selection (multiple values are in an OR relationship with each other)</p>
                     * @return LabelKeyIds <p>Tag name ID. Exact match. You can obtain it via tag-related APIs. Optional. Multiple selection (multiple values are in an OR relationship with each other)</p>
                     * 
                     */
                    std::vector<std::string> GetLabelKeyIds() const;

                    /**
                     * 设置<p>Tag name ID. Exact match. You can obtain it via tag-related APIs. Optional. Multiple selection (multiple values are in an OR relationship with each other)</p>
                     * @param _labelKeyIds <p>Tag name ID. Exact match. You can obtain it via tag-related APIs. Optional. Multiple selection (multiple values are in an OR relationship with each other)</p>
                     * 
                     */
                    void SetLabelKeyIds(const std::vector<std::string>& _labelKeyIds);

                    /**
                     * 判断参数 LabelKeyIds 是否已赋值
                     * @return LabelKeyIds 是否已赋值
                     * 
                     */
                    bool LabelKeyIdsHasBeenSet() const;

                    /**
                     * 获取<p>Tag value ID, exact match, obtainable through the tag-related API. Optional, multiple selection (multiple values are in an OR relationship with each other)</p>
                     * @return LabelValueIds <p>Tag value ID, exact match, obtainable through the tag-related API. Optional, multiple selection (multiple values are in an OR relationship with each other)</p>
                     * 
                     */
                    std::vector<std::string> GetLabelValueIds() const;

                    /**
                     * 设置<p>Tag value ID, exact match, obtainable through the tag-related API. Optional, multiple selection (multiple values are in an OR relationship with each other)</p>
                     * @param _labelValueIds <p>Tag value ID, exact match, obtainable through the tag-related API. Optional, multiple selection (multiple values are in an OR relationship with each other)</p>
                     * 
                     */
                    void SetLabelValueIds(const std::vector<std::string>& _labelValueIds);

                    /**
                     * 判断参数 LabelValueIds 是否已赋值
                     * @return LabelValueIds 是否已赋值
                     * 
                     */
                    bool LabelValueIdsHasBeenSet() const;

                    /**
                     * 获取<p>Quick filter type. Optional, single value</p><p>Align with the legacy Cloud API (wedata/2025-10-10) document example values:</p><ul><li>MY_FAVORITE: collected by me</li><li>MY_OWNER: I am responsible</li><li>MY_AUTHORITY: I have permission</li><li>WorkflowId: support filtering by multiple workflow IDs</li></ul><p>Backend implementation status quo: currently only MY_FAVORITE takes effect (set favoriteUserUin to filter the current user's favorites). MY_OWNER / MY_AUTHORITY are not yet implemented at the Service layer, and the input will be ignored (returned as full results).</p>
                     * @return QuickSelectionType <p>Quick filter type. Optional, single value</p><p>Align with the legacy Cloud API (wedata/2025-10-10) document example values:</p><ul><li>MY_FAVORITE: collected by me</li><li>MY_OWNER: I am responsible</li><li>MY_AUTHORITY: I have permission</li><li>WorkflowId: support filtering by multiple workflow IDs</li></ul><p>Backend implementation status quo: currently only MY_FAVORITE takes effect (set favoriteUserUin to filter the current user's favorites). MY_OWNER / MY_AUTHORITY are not yet implemented at the Service layer, and the input will be ignored (returned as full results).</p>
                     * 
                     */
                    std::string GetQuickSelectionType() const;

                    /**
                     * 设置<p>Quick filter type. Optional, single value</p><p>Align with the legacy Cloud API (wedata/2025-10-10) document example values:</p><ul><li>MY_FAVORITE: collected by me</li><li>MY_OWNER: I am responsible</li><li>MY_AUTHORITY: I have permission</li><li>WorkflowId: support filtering by multiple workflow IDs</li></ul><p>Backend implementation status quo: currently only MY_FAVORITE takes effect (set favoriteUserUin to filter the current user's favorites). MY_OWNER / MY_AUTHORITY are not yet implemented at the Service layer, and the input will be ignored (returned as full results).</p>
                     * @param _quickSelectionType <p>Quick filter type. Optional, single value</p><p>Align with the legacy Cloud API (wedata/2025-10-10) document example values:</p><ul><li>MY_FAVORITE: collected by me</li><li>MY_OWNER: I am responsible</li><li>MY_AUTHORITY: I have permission</li><li>WorkflowId: support filtering by multiple workflow IDs</li></ul><p>Backend implementation status quo: currently only MY_FAVORITE takes effect (set favoriteUserUin to filter the current user's favorites). MY_OWNER / MY_AUTHORITY are not yet implemented at the Service layer, and the input will be ignored (returned as full results).</p>
                     * 
                     */
                    void SetQuickSelectionType(const std::string& _quickSelectionType);

                    /**
                     * 判断参数 QuickSelectionType 是否已赋值
                     * @return QuickSelectionType 是否已赋值
                     * 
                     */
                    bool QuickSelectionTypeHasBeenSet() const;

                    /**
                     * 获取<p>Sorting criteria. The priority of multiple criteria is indicated by their sequence in the array. Optional.<br>Sortable field allowlist: CreateTime</p>
                     * @return OrderBys <p>Sorting criteria. The priority of multiple criteria is indicated by their sequence in the array. Optional.<br>Sortable field allowlist: CreateTime</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>Sorting criteria. The priority of multiple criteria is indicated by their sequence in the array. Optional.<br>Sortable field allowlist: CreateTime</p>
                     * @param _orderBys <p>Sorting criteria. The priority of multiple criteria is indicated by their sequence in the array. Optional.<br>Sortable field allowlist: CreateTime</p>
                     * 
                     */
                    void SetOrderBys(const std::vector<OrderBy>& _orderBys);

                    /**
                     * 判断参数 OrderBys 是否已赋值
                     * @return OrderBys 是否已赋值
                     * 
                     */
                    bool OrderBysHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID, which can be obtained through ListWorkspaces. Required</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Page number. Value range: starts from 1. Optional. Default value: 1.</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Size per page. Optional. Default: 10. Value range: [10, 200]</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Workflow name keyword for fuzzy matching of WorkflowName. Optional, single value</p>
                     */
                    std::string m_workflowNameKeyword;
                    bool m_workflowNameKeywordHasBeenSet;

                    /**
                     * <p>Workflow name, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     */
                    std::vector<std::string> m_workflowNames;
                    bool m_workflowNamesHasBeenSet;

                    /**
                     * <p>Workflow ID. Exact match. Optional. Multiple selection (OR relationship between multiple values)</p>
                     */
                    std::vector<std::string> m_workflowIds;
                    bool m_workflowIdsHasBeenSet;

                    /**
                     * <p>Workflow runner UIN, exact match. Optional, multiple selection (OR relationship between multiple values)</p>
                     */
                    std::vector<std::string> m_runUserUins;
                    bool m_runUserUinsHasBeenSet;

                    /**
                     * <p>Tag name ID. Exact match. You can obtain it via tag-related APIs. Optional. Multiple selection (multiple values are in an OR relationship with each other)</p>
                     */
                    std::vector<std::string> m_labelKeyIds;
                    bool m_labelKeyIdsHasBeenSet;

                    /**
                     * <p>Tag value ID, exact match, obtainable through the tag-related API. Optional, multiple selection (multiple values are in an OR relationship with each other)</p>
                     */
                    std::vector<std::string> m_labelValueIds;
                    bool m_labelValueIdsHasBeenSet;

                    /**
                     * <p>Quick filter type. Optional, single value</p><p>Align with the legacy Cloud API (wedata/2025-10-10) document example values:</p><ul><li>MY_FAVORITE: collected by me</li><li>MY_OWNER: I am responsible</li><li>MY_AUTHORITY: I have permission</li><li>WorkflowId: support filtering by multiple workflow IDs</li></ul><p>Backend implementation status quo: currently only MY_FAVORITE takes effect (set favoriteUserUin to filter the current user's favorites). MY_OWNER / MY_AUTHORITY are not yet implemented at the Service layer, and the input will be ignored (returned as full results).</p>
                     */
                    std::string m_quickSelectionType;
                    bool m_quickSelectionTypeHasBeenSet;

                    /**
                     * <p>Sorting criteria. The priority of multiple criteria is indicated by their sequence in the array. Optional.<br>Sortable field allowlist: CreateTime</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKFLOWSREQUEST_H_
