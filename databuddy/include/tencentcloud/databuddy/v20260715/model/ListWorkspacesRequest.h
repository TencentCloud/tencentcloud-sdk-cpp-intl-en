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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACESREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACESREQUEST_H_

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
                * ListWorkspaces request structure.
                */
                class ListWorkspacesRequest : public AbstractModel
                {
                public:
                    ListWorkspacesRequest();
                    ~ListWorkspacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Workspace ID exact match</p>
                     * @return WorkspaceId <p>Workspace ID exact match</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>Workspace ID exact match</p>
                     * @param _workspaceId <p>Workspace ID exact match</p>
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
                     * 获取<p>Fuzzy matching by workspace name</p>
                     * @return WorkspaceKeyword <p>Fuzzy matching by workspace name</p>
                     * 
                     */
                    std::string GetWorkspaceKeyword() const;

                    /**
                     * 设置<p>Fuzzy matching by workspace name</p>
                     * @param _workspaceKeyword <p>Fuzzy matching by workspace name</p>
                     * 
                     */
                    void SetWorkspaceKeyword(const std::string& _workspaceKeyword);

                    /**
                     * 判断参数 WorkspaceKeyword 是否已赋值
                     * @return WorkspaceKeyword 是否已赋值
                     * 
                     */
                    bool WorkspaceKeywordHasBeenSet() const;

                    /**
                     * 获取<p>Workspace status filtering (multiple selection): 0=not specified 1=creating 2=creation failure 3=operating normally 4=deleted</p>
                     * @return StatusList <p>Workspace status filtering (multiple selection): 0=not specified 1=creating 2=creation failure 3=operating normally 4=deleted</p>
                     * 
                     */
                    std::vector<int64_t> GetStatusList() const;

                    /**
                     * 设置<p>Workspace status filtering (multiple selection): 0=not specified 1=creating 2=creation failure 3=operating normally 4=deleted</p>
                     * @param _statusList <p>Workspace status filtering (multiple selection): 0=not specified 1=creating 2=creation failure 3=operating normally 4=deleted</p>
                     * 
                     */
                    void SetStatusList(const std::vector<int64_t>& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取<p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}]; import one for single-field sorting. Default: in descending order by creation time.</p>
                     * @return OrderBys <p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}]; import one for single-field sorting. Default: in descending order by creation time.</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}]; import one for single-field sorting. Default: in descending order by creation time.</p>
                     * @param _orderBys <p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}]; import one for single-field sorting. Default: in descending order by creation time.</p>
                     * 
                     */
                    void SetOrderBys(const std::vector<OrderBy>& _orderBys);

                    /**
                     * 判断参数 OrderBys 是否已赋值
                     * @return OrderBys 是否已赋值
                     * 
                     */
                    bool OrderBysHasBeenSet() const;

                    /**
                     * 获取<p>Page number. Value range: starts from 1. Default value: 1.</p>
                     * @return PageNumber <p>Page number. Value range: starts from 1. Default value: 1.</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number. Value range: starts from 1. Default value: 1.</p>
                     * @param _pageNumber <p>Page number. Value range: starts from 1. Default value: 1.</p>
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
                     * 获取<p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
                     * @return PageSize <p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
                     * @param _pageSize <p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
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
                     * 获取<p>Workspace region filtering (multiple selection), for example, ap-guangzhou</p>
                     * @return WorkspaceRegion <p>Workspace region filtering (multiple selection), for example, ap-guangzhou</p>
                     * 
                     */
                    std::vector<std::string> GetWorkspaceRegion() const;

                    /**
                     * 设置<p>Workspace region filtering (multiple selection), for example, ap-guangzhou</p>
                     * @param _workspaceRegion <p>Workspace region filtering (multiple selection), for example, ap-guangzhou</p>
                     * 
                     */
                    void SetWorkspaceRegion(const std::vector<std::string>& _workspaceRegion);

                    /**
                     * 判断参数 WorkspaceRegion 是否已赋值
                     * @return WorkspaceRegion 是否已赋值
                     * 
                     */
                    bool WorkspaceRegionHasBeenSet() const;

                    /**
                     * 获取<p>Creator UIN filter (multi-option)</p>
                     * @return Creator <p>Creator UIN filter (multi-option)</p>
                     * 
                     */
                    std::vector<std::string> GetCreator() const;

                    /**
                     * 设置<p>Creator UIN filter (multi-option)</p>
                     * @param _creator <p>Creator UIN filter (multi-option)</p>
                     * 
                     */
                    void SetCreator(const std::vector<std::string>& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                private:

                    /**
                     * <p>Workspace ID exact match</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>Fuzzy matching by workspace name</p>
                     */
                    std::string m_workspaceKeyword;
                    bool m_workspaceKeywordHasBeenSet;

                    /**
                     * <p>Workspace status filtering (multiple selection): 0=not specified 1=creating 2=creation failure 3=operating normally 4=deleted</p>
                     */
                    std::vector<int64_t> m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * <p>Multi-field sorting, for example, [{Name: 'CreateTime', Direction: 'Desc'}]; import one for single-field sorting. Default: in descending order by creation time.</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                    /**
                     * <p>Page number. Value range: starts from 1. Default value: 1.</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Size per page. Default: 10. Minimum: 10. Maximum: 100</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Workspace region filtering (multiple selection), for example, ap-guangzhou</p>
                     */
                    std::vector<std::string> m_workspaceRegion;
                    bool m_workspaceRegionHasBeenSet;

                    /**
                     * <p>Creator UIN filter (multi-option)</p>
                     */
                    std::vector<std::string> m_creator;
                    bool m_creatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTWORKSPACESREQUEST_H_
