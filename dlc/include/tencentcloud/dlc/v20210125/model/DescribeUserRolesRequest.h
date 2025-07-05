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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERROLESREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERROLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeUserRoles request structure.
                */
                class DescribeUserRolesRequest : public AbstractModel
                {
                public:
                    DescribeUserRolesRequest();
                    ~DescribeUserRolesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The number limit of enumerated user roles.
                     * @return Limit The number limit of enumerated user roles.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number limit of enumerated user roles.
                     * @param _limit The number limit of enumerated user roles.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The offset for starting enumeration. 
                     * @return Offset The offset for starting enumeration. 
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The offset for starting enumeration. 
                     * @param _offset The offset for starting enumeration. 
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Fuzzy enumeration by arn.
                     * @return Fuzzy Fuzzy enumeration by arn.
                     * 
                     */
                    std::string GetFuzzy() const;

                    /**
                     * 设置Fuzzy enumeration by arn.
                     * @param _fuzzy Fuzzy enumeration by arn.
                     * 
                     */
                    void SetFuzzy(const std::string& _fuzzy);

                    /**
                     * 判断参数 Fuzzy 是否已赋值
                     * @return Fuzzy 是否已赋值
                     * 
                     */
                    bool FuzzyHasBeenSet() const;

                    /**
                     * 获取The field for sorting the returned results.
                     * @return SortBy The field for sorting the returned results.
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置The field for sorting the returned results.
                     * @param _sortBy The field for sorting the returned results.
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取The sorting order, descending or ascending, such as `desc`.
                     * @return Sorting The sorting order, descending or ascending, such as `desc`.
                     * 
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置The sorting order, descending or ascending, such as `desc`.
                     * @param _sorting The sorting order, descending or ascending, such as `desc`.
                     * 
                     */
                    void SetSorting(const std::string& _sorting);

                    /**
                     * 判断参数 Sorting 是否已赋值
                     * @return Sorting 是否已赋值
                     * 
                     */
                    bool SortingHasBeenSet() const;

                private:

                    /**
                     * The number limit of enumerated user roles.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The offset for starting enumeration. 
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Fuzzy enumeration by arn.
                     */
                    std::string m_fuzzy;
                    bool m_fuzzyHasBeenSet;

                    /**
                     * The field for sorting the returned results.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * The sorting order, descending or ascending, such as `desc`.
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERROLESREQUEST_H_
