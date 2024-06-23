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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSWORKFLOWSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSWORKFLOWSREQUEST_H_

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
                * DescribeOpsWorkflows request structure.
                */
                class DescribeOpsWorkflowsRequest : public AbstractModel
                {
                public:
                    DescribeOpsWorkflowsRequest();
                    ~DescribeOpsWorkflowsRequest() = default;
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
                     * 获取Task Product Type Name List, separated by ','
                     * @return ProductNameList Task Product Type Name List, separated by ','
                     * 
                     */
                    std::string GetProductNameList() const;

                    /**
                     * 设置Task Product Type Name List, separated by ','
                     * @param _productNameList Task Product Type Name List, separated by ','
                     * 
                     */
                    void SetProductNameList(const std::string& _productNameList);

                    /**
                     * 判断参数 ProductNameList 是否已赋值
                     * @return ProductNameList 是否已赋值
                     * 
                     */
                    bool ProductNameListHasBeenSet() const;

                    /**
                     * 获取File ID list, separated by ','
                     * @return FolderIdList File ID list, separated by ','
                     * 
                     */
                    std::string GetFolderIdList() const;

                    /**
                     * 设置File ID list, separated by ','
                     * @param _folderIdList File ID list, separated by ','
                     * 
                     */
                    void SetFolderIdList(const std::string& _folderIdList);

                    /**
                     * 判断参数 FolderIdList 是否已赋值
                     * @return FolderIdList 是否已赋值
                     * 
                     */
                    bool FolderIdListHasBeenSet() const;

                    /**
                     * 获取Workflow ID, separated by ','
                     * @return WorkFlowIdList Workflow ID, separated by ','
                     * 
                     */
                    std::string GetWorkFlowIdList() const;

                    /**
                     * 设置Workflow ID, separated by ','
                     * @param _workFlowIdList Workflow ID, separated by ','
                     * 
                     */
                    void SetWorkFlowIdList(const std::string& _workFlowIdList);

                    /**
                     * 判断参数 WorkFlowIdList 是否已赋值
                     * @return WorkFlowIdList 是否已赋值
                     * 
                     */
                    bool WorkFlowIdListHasBeenSet() const;

                    /**
                     * 获取Workflow Name List, separated by ','
                     * @return WorkFlowNameList Workflow Name List, separated by ','
                     * 
                     */
                    std::string GetWorkFlowNameList() const;

                    /**
                     * 设置Workflow Name List, separated by ','
                     * @param _workFlowNameList Workflow Name List, separated by ','
                     * 
                     */
                    void SetWorkFlowNameList(const std::string& _workFlowNameList);

                    /**
                     * 判断参数 WorkFlowNameList 是否已赋值
                     * @return WorkFlowNameList 是否已赋值
                     * 
                     */
                    bool WorkFlowNameListHasBeenSet() const;

                    /**
                     * 获取Task Name List, separated by ','
                     * @return TaskNameList Task Name List, separated by ','
                     * 
                     */
                    std::string GetTaskNameList() const;

                    /**
                     * 设置Task Name List, separated by ','
                     * @param _taskNameList Task Name List, separated by ','
                     * 
                     */
                    void SetTaskNameList(const std::string& _taskNameList);

                    /**
                     * 判断参数 TaskNameList 是否已赋值
                     * @return TaskNameList 是否已赋值
                     * 
                     */
                    bool TaskNameListHasBeenSet() const;

                    /**
                     * 获取Task ID list, separated by ','
                     * @return TaskIdList Task ID list, separated by ','
                     * 
                     */
                    std::string GetTaskIdList() const;

                    /**
                     * 设置Task ID list, separated by ','
                     * @param _taskIdList Task ID list, separated by ','
                     * 
                     */
                    void SetTaskIdList(const std::string& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取Status List, separated by ','
                     * @return StatusList Status List, separated by ','
                     * 
                     */
                    std::string GetStatusList() const;

                    /**
                     * 设置Status List, separated by ','
                     * @param _statusList Status List, separated by ','
                     * 
                     */
                    void SetStatusList(const std::string& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取Person in Charge List, separated by ','
                     * @return InChargeList Person in Charge List, separated by ','
                     * 
                     */
                    std::string GetInChargeList() const;

                    /**
                     * 设置Person in Charge List, separated by ','
                     * @param _inChargeList Person in Charge List, separated by ','
                     * 
                     */
                    void SetInChargeList(const std::string& _inChargeList);

                    /**
                     * 判断参数 InChargeList 是否已赋值
                     * @return InChargeList 是否已赋值
                     * 
                     */
                    bool InChargeListHasBeenSet() const;

                    /**
                     * 获取Page number
                     * @return PageNumber Page number
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number
                     * @param _pageNumber Page number
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
                     * 获取Page size
                     * @return PageSize Page size
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Page size
                     * @param _pageSize Page size
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
                     * 获取Sorting Item
                     * @return SortItem Sorting Item
                     * 
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置Sorting Item
                     * @param _sortItem Sorting Item
                     * 
                     */
                    void SetSortItem(const std::string& _sortItem);

                    /**
                     * 判断参数 SortItem 是否已赋值
                     * @return SortItem 是否已赋值
                     * 
                     */
                    bool SortItemHasBeenSet() const;

                    /**
                     * 获取Sort Method, DESC or ASC
                     * @return SortType Sort Method, DESC or ASC
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置Sort Method, DESC or ASC
                     * @param _sortType Sort Method, DESC or ASC
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Task Product Type Name List, separated by ','
                     */
                    std::string m_productNameList;
                    bool m_productNameListHasBeenSet;

                    /**
                     * File ID list, separated by ','
                     */
                    std::string m_folderIdList;
                    bool m_folderIdListHasBeenSet;

                    /**
                     * Workflow ID, separated by ','
                     */
                    std::string m_workFlowIdList;
                    bool m_workFlowIdListHasBeenSet;

                    /**
                     * Workflow Name List, separated by ','
                     */
                    std::string m_workFlowNameList;
                    bool m_workFlowNameListHasBeenSet;

                    /**
                     * Task Name List, separated by ','
                     */
                    std::string m_taskNameList;
                    bool m_taskNameListHasBeenSet;

                    /**
                     * Task ID list, separated by ','
                     */
                    std::string m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * Status List, separated by ','
                     */
                    std::string m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * Person in Charge List, separated by ','
                     */
                    std::string m_inChargeList;
                    bool m_inChargeListHasBeenSet;

                    /**
                     * Page number
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Page size
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Sorting Item
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                    /**
                     * Sort Method, DESC or ASC
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPSWORKFLOWSREQUEST_H_
