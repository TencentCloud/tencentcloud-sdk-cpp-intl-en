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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONLISTREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONLISTREQUEST_H_

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
                * DescribeApplicationList request structure.
                */
                class DescribeApplicationListRequest : public AbstractModel
                {
                public:
                    DescribeApplicationListRequest();
                    ~DescribeApplicationListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application list offset.
                     * @return Offset Application list offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Application list offset.
                     * @param _offset Application list offset.
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
                     * 获取Application quantity limit.
                     * @return Limit Application quantity limit.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Application quantity limit.
                     * @param _limit Application quantity limit.
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
                     * 获取Filter criteria.
                     * @return Filters Filter criteria.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria.
                     * @param _filters Filter criteria.
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
                     * 获取Application category (DESKTOP: desktop; MOBILE: mobile).
                     * @return ApplicationCategory Application category (DESKTOP: desktop; MOBILE: mobile).
                     * 
                     */
                    std::string GetApplicationCategory() const;

                    /**
                     * 设置Application category (DESKTOP: desktop; MOBILE: mobile).
                     * @param _applicationCategory Application category (DESKTOP: desktop; MOBILE: mobile).
                     * 
                     */
                    void SetApplicationCategory(const std::string& _applicationCategory);

                    /**
                     * 判断参数 ApplicationCategory 是否已赋值
                     * @return ApplicationCategory 是否已赋值
                     * 
                     */
                    bool ApplicationCategoryHasBeenSet() const;

                private:

                    /**
                     * Application list offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Application quantity limit.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Application category (DESKTOP: desktop; MOBILE: mobile).
                     */
                    std::string m_applicationCategory;
                    bool m_applicationCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONLISTREQUEST_H_
