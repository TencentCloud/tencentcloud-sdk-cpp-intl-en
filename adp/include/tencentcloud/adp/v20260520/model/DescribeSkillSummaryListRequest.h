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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLSUMMARYLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLSUMMARYLISTREQUEST_H_

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
                * DescribeSkillSummaryList request structure.
                */
                class DescribeSkillSummaryListRequest : public AbstractModel
                {
                public:
                    DescribeSkillSummaryListRequest();
                    ~DescribeSkillSummaryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Space ID. Required.
                     * @return SpaceId Space ID. Required.
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置Space ID. Required.
                     * @param _spaceId Space ID. Required.
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取Query only the Skills favorited by the current user
                     * @return FavoriteOnly Query only the Skills favorited by the current user
                     * 
                     */
                    bool GetFavoriteOnly() const;

                    /**
                     * 设置Query only the Skills favorited by the current user
                     * @param _favoriteOnly Query only the Skills favorited by the current user
                     * 
                     */
                    void SetFavoriteOnly(const bool& _favoriteOnly);

                    /**
                     * 判断参数 FavoriteOnly 是否已赋值
                     * @return FavoriteOnly 是否已赋值
                     * 
                     */
                    bool FavoriteOnlyHasBeenSet() const;

                    /**
                     * 获取Filter criteria (multiple Filters are in an AND relationship, while multiple Values within the same Filter are in an OR relationship):
-SkillIdList: List of skill IDs, string array, exact match
- ProviderType: Skill provider type, enumerated value array, exact match
     (SKILL_PROVIDER_TYPE_OFFICIAL=1/SKILL_PROVIDER_TYPE_THIRD_PARTY=2/SKILL_PROVIDER_TYPE_CUSTOM=3/SKILL_PROVIDER_TYPE_CUSTOM_SHARED=4)
-CategoryKey: Category identifier, string array, exact match.
- AnalysisStatus: Security detection status, enumeration value array, exact match.
     (SKILL_ANALYSIS_PENDING=0/SKILL_ANALYSIS_RUNNING=1/SKILL_ANALYSIS_AVAILABLE=2/SKILL_ANALYSIS_UNAVAILABLE=3/SKILL_ANALYSIS_FAILED=4)
- RiskLevel: Risk level, enumerated value array, exact match
     (SKILL_RISK_NONE=0/SKILL_RISK_LOW=1/SKILL_RISK_MEDIUM=2/SKILL_RISK_HIGH=3)
- SkillStatus: Publishing status in the Skill dimension. Enumerated value array. Exact match. OR between multiple values. Only meaningful when Perspective is EDITOR or ALL.
(SKILL_STATUS_INITIALIZED=0/SKILL_STATUS_AUDITING=1/SKILL_STATUS_PENDING_RELEASE=2/SKILL_STATUS_RELEASED=3)
- ShareStatus: Shared status, enumeration value array, exact match. This parameter is valid only when ProviderType includes SKILL_PROVIDER_TYPE_CUSTOM/SKILL_PROVIDER_TYPE_CUSTOM_SHARED.
     (SHARE_STATUS_UNSHARED=0/SHARE_STATUS_SHARED=1/SHARE_STATUS_APPROVING=2)
-Perspective: Perspective enum, string single value. The length of Values must be 1. Multi-value is deemed as illegal. This parameter is valid only when ProviderType=SKILL_PROVIDER_TYPE_CUSTOM. Default if not passed: USER
(USER=User perspective. Only Skills with usage permissions are returned / EDITOR=Editor perspective. Only Skills with edit permission are returned / ALL=Full perspective. Skills with any permission bit are returned)
-Creator: Filter by creator. String single value. The length of Values must be 1. Multi-value is deemed as illegal. This parameter is valid only when ProviderType=SKILL_PROVIDER_TYPE_CUSTOM.
Currently, only the placeholder "$self" is supported, which means only Skills created by the current caller are returned.
To scale to a specified identity subsequently, add the agreement here if needed.
                     * @return FilterList Filter criteria (multiple Filters are in an AND relationship, while multiple Values within the same Filter are in an OR relationship):
-SkillIdList: List of skill IDs, string array, exact match
- ProviderType: Skill provider type, enumerated value array, exact match
     (SKILL_PROVIDER_TYPE_OFFICIAL=1/SKILL_PROVIDER_TYPE_THIRD_PARTY=2/SKILL_PROVIDER_TYPE_CUSTOM=3/SKILL_PROVIDER_TYPE_CUSTOM_SHARED=4)
-CategoryKey: Category identifier, string array, exact match.
- AnalysisStatus: Security detection status, enumeration value array, exact match.
     (SKILL_ANALYSIS_PENDING=0/SKILL_ANALYSIS_RUNNING=1/SKILL_ANALYSIS_AVAILABLE=2/SKILL_ANALYSIS_UNAVAILABLE=3/SKILL_ANALYSIS_FAILED=4)
- RiskLevel: Risk level, enumerated value array, exact match
     (SKILL_RISK_NONE=0/SKILL_RISK_LOW=1/SKILL_RISK_MEDIUM=2/SKILL_RISK_HIGH=3)
- SkillStatus: Publishing status in the Skill dimension. Enumerated value array. Exact match. OR between multiple values. Only meaningful when Perspective is EDITOR or ALL.
(SKILL_STATUS_INITIALIZED=0/SKILL_STATUS_AUDITING=1/SKILL_STATUS_PENDING_RELEASE=2/SKILL_STATUS_RELEASED=3)
- ShareStatus: Shared status, enumeration value array, exact match. This parameter is valid only when ProviderType includes SKILL_PROVIDER_TYPE_CUSTOM/SKILL_PROVIDER_TYPE_CUSTOM_SHARED.
     (SHARE_STATUS_UNSHARED=0/SHARE_STATUS_SHARED=1/SHARE_STATUS_APPROVING=2)
-Perspective: Perspective enum, string single value. The length of Values must be 1. Multi-value is deemed as illegal. This parameter is valid only when ProviderType=SKILL_PROVIDER_TYPE_CUSTOM. Default if not passed: USER
(USER=User perspective. Only Skills with usage permissions are returned / EDITOR=Editor perspective. Only Skills with edit permission are returned / ALL=Full perspective. Skills with any permission bit are returned)
-Creator: Filter by creator. String single value. The length of Values must be 1. Multi-value is deemed as illegal. This parameter is valid only when ProviderType=SKILL_PROVIDER_TYPE_CUSTOM.
Currently, only the placeholder "$self" is supported, which means only Skills created by the current caller are returned.
To scale to a specified identity subsequently, add the agreement here if needed.
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置Filter criteria (multiple Filters are in an AND relationship, while multiple Values within the same Filter are in an OR relationship):
-SkillIdList: List of skill IDs, string array, exact match
- ProviderType: Skill provider type, enumerated value array, exact match
     (SKILL_PROVIDER_TYPE_OFFICIAL=1/SKILL_PROVIDER_TYPE_THIRD_PARTY=2/SKILL_PROVIDER_TYPE_CUSTOM=3/SKILL_PROVIDER_TYPE_CUSTOM_SHARED=4)
-CategoryKey: Category identifier, string array, exact match.
- AnalysisStatus: Security detection status, enumeration value array, exact match.
     (SKILL_ANALYSIS_PENDING=0/SKILL_ANALYSIS_RUNNING=1/SKILL_ANALYSIS_AVAILABLE=2/SKILL_ANALYSIS_UNAVAILABLE=3/SKILL_ANALYSIS_FAILED=4)
- RiskLevel: Risk level, enumerated value array, exact match
     (SKILL_RISK_NONE=0/SKILL_RISK_LOW=1/SKILL_RISK_MEDIUM=2/SKILL_RISK_HIGH=3)
- SkillStatus: Publishing status in the Skill dimension. Enumerated value array. Exact match. OR between multiple values. Only meaningful when Perspective is EDITOR or ALL.
(SKILL_STATUS_INITIALIZED=0/SKILL_STATUS_AUDITING=1/SKILL_STATUS_PENDING_RELEASE=2/SKILL_STATUS_RELEASED=3)
- ShareStatus: Shared status, enumeration value array, exact match. This parameter is valid only when ProviderType includes SKILL_PROVIDER_TYPE_CUSTOM/SKILL_PROVIDER_TYPE_CUSTOM_SHARED.
     (SHARE_STATUS_UNSHARED=0/SHARE_STATUS_SHARED=1/SHARE_STATUS_APPROVING=2)
-Perspective: Perspective enum, string single value. The length of Values must be 1. Multi-value is deemed as illegal. This parameter is valid only when ProviderType=SKILL_PROVIDER_TYPE_CUSTOM. Default if not passed: USER
(USER=User perspective. Only Skills with usage permissions are returned / EDITOR=Editor perspective. Only Skills with edit permission are returned / ALL=Full perspective. Skills with any permission bit are returned)
-Creator: Filter by creator. String single value. The length of Values must be 1. Multi-value is deemed as illegal. This parameter is valid only when ProviderType=SKILL_PROVIDER_TYPE_CUSTOM.
Currently, only the placeholder "$self" is supported, which means only Skills created by the current caller are returned.
To scale to a specified identity subsequently, add the agreement here if needed.
                     * @param _filterList Filter criteria (multiple Filters are in an AND relationship, while multiple Values within the same Filter are in an OR relationship):
-SkillIdList: List of skill IDs, string array, exact match
- ProviderType: Skill provider type, enumerated value array, exact match
     (SKILL_PROVIDER_TYPE_OFFICIAL=1/SKILL_PROVIDER_TYPE_THIRD_PARTY=2/SKILL_PROVIDER_TYPE_CUSTOM=3/SKILL_PROVIDER_TYPE_CUSTOM_SHARED=4)
-CategoryKey: Category identifier, string array, exact match.
- AnalysisStatus: Security detection status, enumeration value array, exact match.
     (SKILL_ANALYSIS_PENDING=0/SKILL_ANALYSIS_RUNNING=1/SKILL_ANALYSIS_AVAILABLE=2/SKILL_ANALYSIS_UNAVAILABLE=3/SKILL_ANALYSIS_FAILED=4)
- RiskLevel: Risk level, enumerated value array, exact match
     (SKILL_RISK_NONE=0/SKILL_RISK_LOW=1/SKILL_RISK_MEDIUM=2/SKILL_RISK_HIGH=3)
- SkillStatus: Publishing status in the Skill dimension. Enumerated value array. Exact match. OR between multiple values. Only meaningful when Perspective is EDITOR or ALL.
(SKILL_STATUS_INITIALIZED=0/SKILL_STATUS_AUDITING=1/SKILL_STATUS_PENDING_RELEASE=2/SKILL_STATUS_RELEASED=3)
- ShareStatus: Shared status, enumeration value array, exact match. This parameter is valid only when ProviderType includes SKILL_PROVIDER_TYPE_CUSTOM/SKILL_PROVIDER_TYPE_CUSTOM_SHARED.
     (SHARE_STATUS_UNSHARED=0/SHARE_STATUS_SHARED=1/SHARE_STATUS_APPROVING=2)
-Perspective: Perspective enum, string single value. The length of Values must be 1. Multi-value is deemed as illegal. This parameter is valid only when ProviderType=SKILL_PROVIDER_TYPE_CUSTOM. Default if not passed: USER
(USER=User perspective. Only Skills with usage permissions are returned / EDITOR=Editor perspective. Only Skills with edit permission are returned / ALL=Full perspective. Skills with any permission bit are returned)
-Creator: Filter by creator. String single value. The length of Values must be 1. Multi-value is deemed as illegal. This parameter is valid only when ProviderType=SKILL_PROVIDER_TYPE_CUSTOM.
Currently, only the placeholder "$self" is supported, which means only Skills created by the current caller are returned.
To scale to a specified identity subsequently, add the agreement here if needed.
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
                     * 获取Page number, starting from 0
                     * @return PageNumber Page number, starting from 0
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number, starting from 0
                     * @param _pageNumber Page number, starting from 0
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
                     * 获取Number of items per page. Maximum value: 100.
                     * @return PageSize Number of items per page. Maximum value: 100.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page. Maximum value: 100.
                     * @param _pageSize Number of items per page. Maximum value: 100.
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
                     * 获取Fuzzy search by name/display name
                     * @return Query Fuzzy search by name/display name
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Fuzzy search by name/display name
                     * @param _query Fuzzy search by name/display name
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
                     * Space ID. Required.
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * Query only the Skills favorited by the current user
                     */
                    bool m_favoriteOnly;
                    bool m_favoriteOnlyHasBeenSet;

                    /**
                     * Filter criteria (multiple Filters are in an AND relationship, while multiple Values within the same Filter are in an OR relationship):
-SkillIdList: List of skill IDs, string array, exact match
- ProviderType: Skill provider type, enumerated value array, exact match
     (SKILL_PROVIDER_TYPE_OFFICIAL=1/SKILL_PROVIDER_TYPE_THIRD_PARTY=2/SKILL_PROVIDER_TYPE_CUSTOM=3/SKILL_PROVIDER_TYPE_CUSTOM_SHARED=4)
-CategoryKey: Category identifier, string array, exact match.
- AnalysisStatus: Security detection status, enumeration value array, exact match.
     (SKILL_ANALYSIS_PENDING=0/SKILL_ANALYSIS_RUNNING=1/SKILL_ANALYSIS_AVAILABLE=2/SKILL_ANALYSIS_UNAVAILABLE=3/SKILL_ANALYSIS_FAILED=4)
- RiskLevel: Risk level, enumerated value array, exact match
     (SKILL_RISK_NONE=0/SKILL_RISK_LOW=1/SKILL_RISK_MEDIUM=2/SKILL_RISK_HIGH=3)
- SkillStatus: Publishing status in the Skill dimension. Enumerated value array. Exact match. OR between multiple values. Only meaningful when Perspective is EDITOR or ALL.
(SKILL_STATUS_INITIALIZED=0/SKILL_STATUS_AUDITING=1/SKILL_STATUS_PENDING_RELEASE=2/SKILL_STATUS_RELEASED=3)
- ShareStatus: Shared status, enumeration value array, exact match. This parameter is valid only when ProviderType includes SKILL_PROVIDER_TYPE_CUSTOM/SKILL_PROVIDER_TYPE_CUSTOM_SHARED.
     (SHARE_STATUS_UNSHARED=0/SHARE_STATUS_SHARED=1/SHARE_STATUS_APPROVING=2)
-Perspective: Perspective enum, string single value. The length of Values must be 1. Multi-value is deemed as illegal. This parameter is valid only when ProviderType=SKILL_PROVIDER_TYPE_CUSTOM. Default if not passed: USER
(USER=User perspective. Only Skills with usage permissions are returned / EDITOR=Editor perspective. Only Skills with edit permission are returned / ALL=Full perspective. Skills with any permission bit are returned)
-Creator: Filter by creator. String single value. The length of Values must be 1. Multi-value is deemed as illegal. This parameter is valid only when ProviderType=SKILL_PROVIDER_TYPE_CUSTOM.
Currently, only the placeholder "$self" is supported, which means only Skills created by the current caller are returned.
To scale to a specified identity subsequently, add the agreement here if needed.
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * Page number, starting from 0
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of items per page. Maximum value: 100.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Fuzzy search by name/display name
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBESKILLSUMMARYLISTREQUEST_H_
