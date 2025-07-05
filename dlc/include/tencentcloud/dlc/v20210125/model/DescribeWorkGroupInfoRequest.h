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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPINFOREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeWorkGroupInfo request structure.
                */
                class DescribeWorkGroupInfoRequest : public AbstractModel
                {
                public:
                    DescribeWorkGroupInfoRequest();
                    ~DescribeWorkGroupInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Working group IDs
                     * @return WorkGroupId Working group IDs
                     * 
                     */
                    int64_t GetWorkGroupId() const;

                    /**
                     * 设置Working group IDs
                     * @param _workGroupId Working group IDs
                     * 
                     */
                    void SetWorkGroupId(const int64_t& _workGroupId);

                    /**
                     * 判断参数 WorkGroupId 是否已赋值
                     * @return WorkGroupId 是否已赋值
                     * 
                     */
                    bool WorkGroupIdHasBeenSet() const;

                    /**
                     * 获取Types of queried information. User: user information; DataAuth: data permissions; EngineAuth: engine permissions
                     * @return Type Types of queried information. User: user information; DataAuth: data permissions; EngineAuth: engine permissions
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Types of queried information. User: user information; DataAuth: data permissions; EngineAuth: engine permissions
                     * @param _type Types of queried information. User: user information; DataAuth: data permissions; EngineAuth: engine permissions
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Filter criteria that are queried

When the type is User, the fuzzy search is supported as the key is user-name.

When the type is DataAuth, the keys supported are:

policy-type: types of permissions;

policy-source: data sources;

data-name: fuzzy search of the database and table.

When the type is EngineAuth, the keys supported are:

policy-type: types of permissions;

policy-source: data sources;

engine-name: fuzzy search of the database and table.
                     * @return Filters Filter criteria that are queried

When the type is User, the fuzzy search is supported as the key is user-name.

When the type is DataAuth, the keys supported are:

policy-type: types of permissions;

policy-source: data sources;

data-name: fuzzy search of the database and table.

When the type is EngineAuth, the keys supported are:

policy-type: types of permissions;

policy-source: data sources;

engine-name: fuzzy search of the database and table.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria that are queried

When the type is User, the fuzzy search is supported as the key is user-name.

When the type is DataAuth, the keys supported are:

policy-type: types of permissions;

policy-source: data sources;

data-name: fuzzy search of the database and table.

When the type is EngineAuth, the keys supported are:

policy-type: types of permissions;

policy-source: data sources;

engine-name: fuzzy search of the database and table.
                     * @param _filters Filter criteria that are queried

When the type is User, the fuzzy search is supported as the key is user-name.

When the type is DataAuth, the keys supported are:

policy-type: types of permissions;

policy-source: data sources;

data-name: fuzzy search of the database and table.

When the type is EngineAuth, the keys supported are:

policy-type: types of permissions;

policy-source: data sources;

engine-name: fuzzy search of the database and table.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sort fields.

When the type is User, create-time and user-name are supported.

When the type is DataAuth, create-time is supported.

When the type is EngineAuth, create-time is supported.
                     * @return SortBy Sort fields.

When the type is User, create-time and user-name are supported.

When the type is DataAuth, create-time is supported.

When the type is EngineAuth, create-time is supported.
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sort fields.

When the type is User, create-time and user-name are supported.

When the type is DataAuth, create-time is supported.

When the type is EngineAuth, create-time is supported.
                     * @param _sortBy Sort fields.

When the type is User, create-time and user-name are supported.

When the type is DataAuth, create-time is supported.

When the type is EngineAuth, create-time is supported.
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
                     * 获取Sorting methods: desc means in order; asc means in reverse order; it is asc by default.
                     * @return Sorting Sorting methods: desc means in order; asc means in reverse order; it is asc by default.
                     * 
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置Sorting methods: desc means in order; asc means in reverse order; it is asc by default.
                     * @param _sorting Sorting methods: desc means in order; asc means in reverse order; it is asc by default.
                     * 
                     */
                    void SetSorting(const std::string& _sorting);

                    /**
                     * 判断参数 Sorting 是否已赋值
                     * @return Sorting 是否已赋值
                     * 
                     */
                    bool SortingHasBeenSet() const;

                    /**
                     * 获取Quantity of returns. It is 20 by default, and the maximum value is 100.
                     * @return Limit Quantity of returns. It is 20 by default, and the maximum value is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Quantity of returns. It is 20 by default, and the maximum value is 100.
                     * @param _limit Quantity of returns. It is 20 by default, and the maximum value is 100.
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
                     * 获取Offset, which is 0 by default.
                     * @return Offset Offset, which is 0 by default.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, which is 0 by default.
                     * @param _offset Offset, which is 0 by default.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Working group IDs
                     */
                    int64_t m_workGroupId;
                    bool m_workGroupIdHasBeenSet;

                    /**
                     * Types of queried information. User: user information; DataAuth: data permissions; EngineAuth: engine permissions
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Filter criteria that are queried

When the type is User, the fuzzy search is supported as the key is user-name.

When the type is DataAuth, the keys supported are:

policy-type: types of permissions;

policy-source: data sources;

data-name: fuzzy search of the database and table.

When the type is EngineAuth, the keys supported are:

policy-type: types of permissions;

policy-source: data sources;

engine-name: fuzzy search of the database and table.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sort fields.

When the type is User, create-time and user-name are supported.

When the type is DataAuth, create-time is supported.

When the type is EngineAuth, create-time is supported.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * Sorting methods: desc means in order; asc means in reverse order; it is asc by default.
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                    /**
                     * Quantity of returns. It is 20 by default, and the maximum value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which is 0 by default.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEWORKGROUPINFOREQUEST_H_
