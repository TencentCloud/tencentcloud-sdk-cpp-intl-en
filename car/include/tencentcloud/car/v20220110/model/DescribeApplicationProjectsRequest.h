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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONPROJECTSREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONPROJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/car/v20220110/model/Filter.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * DescribeApplicationProjects request structure.
                */
                class DescribeApplicationProjectsRequest : public AbstractModel
                {
                public:
                    DescribeApplicationProjectsRequest();
                    ~DescribeApplicationProjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Subscript.
                     * @return Offset Subscript.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Subscript.
                     * @param _offset Subscript.
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
                     * 获取Number of entries per page.
                     * @return Limit Number of entries per page.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page.
                     * @param _limit Number of entries per page.
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
                     * 获取Filter.
                     * @return Filters Filter.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter.
                     * @param _filters Filter.
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
                     * 获取Project category.DESKTOP: desktop (default value).MOBILE: mobile.
                     * @return ProjectCategory Project category.DESKTOP: desktop (default value).MOBILE: mobile.
                     * 
                     */
                    std::string GetProjectCategory() const;

                    /**
                     * 设置Project category.DESKTOP: desktop (default value).MOBILE: mobile.
                     * @param _projectCategory Project category.DESKTOP: desktop (default value).MOBILE: mobile.
                     * 
                     */
                    void SetProjectCategory(const std::string& _projectCategory);

                    /**
                     * 判断参数 ProjectCategory 是否已赋值
                     * @return ProjectCategory 是否已赋值
                     * 
                     */
                    bool ProjectCategoryHasBeenSet() const;

                private:

                    /**
                     * Subscript.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Project category.DESKTOP: desktop (default value).MOBILE: mobile.
                     */
                    std::string m_projectCategory;
                    bool m_projectCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONPROJECTSREQUEST_H_
