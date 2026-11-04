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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEVARIABLELISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEVARIABLELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeVariableList request structure.
                */
                class DescribeVariableListRequest : public AbstractModel
                {
                public:
                    DescribeVariableListRequest();
                    ~DescribeVariableListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return AppId Application ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置Application ID
                     * @param _appId Application ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Filter criteria (supported: VariableIdList - variable ID list, VariableType - variable type)
                     * @return FilterList Filter criteria (supported: VariableIdList - variable ID list, VariableType - variable type)
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置Filter criteria (supported: VariableIdList - variable ID list, VariableType - variable type)
                     * @param _filterList Filter criteria (supported: VariableIdList - variable ID list, VariableType - variable type)
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                    /**
                     * 获取Module type. Enumeration values: 1: environment parameter, 2: application parameter, 3: system parameter, -1: ALL parameters.
                     * @return ModuleType Module type. Enumeration values: 1: environment parameter, 2: application parameter, 3: system parameter, -1: ALL parameters.
                     * 
                     */
                    int64_t GetModuleType() const;

                    /**
                     * 设置Module type. Enumeration values: 1: environment parameter, 2: application parameter, 3: system parameter, -1: ALL parameters.
                     * @param _moduleType Module type. Enumeration values: 1: environment parameter, 2: application parameter, 3: system parameter, -1: ALL parameters.
                     * 
                     */
                    void SetModuleType(const int64_t& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                    /**
                     * 获取Whether internal variables are required
                     * @return NeedInternalVariable Whether internal variables are required
                     * 
                     */
                    bool GetNeedInternalVariable() const;

                    /**
                     * 设置Whether internal variables are required
                     * @param _needInternalVariable Whether internal variables are required
                     * 
                     */
                    void SetNeedInternalVariable(const bool& _needInternalVariable);

                    /**
                     * 判断参数 NeedInternalVariable 是否已赋值
                     * @return NeedInternalVariable 是否已赋值
                     * 
                     */
                    bool NeedInternalVariableHasBeenSet() const;

                    /**
                     * 获取Page number, starting from 0.
                     * @return PageNumber Page number, starting from 0.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number, starting from 0.
                     * @param _pageNumber Page number, starting from 0.
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
                     * 获取Number of items per page. Maximum: 100.
                     * @return PageSize Number of items per page. Maximum: 100.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page. Maximum: 100.
                     * @param _pageSize Number of items per page. Maximum: 100.
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
                     * 获取Query keyword.
                     * @return Query Query keyword.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query keyword.
                     * @param _query Query keyword.
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Filter criteria (supported: VariableIdList - variable ID list, VariableType - variable type)
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * Module type. Enumeration values: 1: environment parameter, 2: application parameter, 3: system parameter, -1: ALL parameters.
                     */
                    int64_t m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                    /**
                     * Whether internal variables are required
                     */
                    bool m_needInternalVariable;
                    bool m_needInternalVariableHasBeenSet;

                    /**
                     * Page number, starting from 0.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of items per page. Maximum: 100.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Query keyword.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEVARIABLELISTREQUEST_H_
