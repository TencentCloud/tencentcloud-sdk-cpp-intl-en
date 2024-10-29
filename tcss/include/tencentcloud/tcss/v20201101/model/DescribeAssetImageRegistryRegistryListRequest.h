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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYREGISTRYLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYREGISTRYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetImageRegistryRegistryList request structure.
                */
                class DescribeAssetImageRegistryRegistryListRequest : public AbstractModel
                {
                public:
                    DescribeAssetImageRegistryRegistryListRequest();
                    ~DescribeAssetImageRegistryRegistryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number to return, default is 10, maximum is 100
                     * @return Limit Number to return, default is 10, maximum is 100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number to return, default is 10, maximum is 100
                     * @param _limit Number to return, default is 10, maximum is 100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset, the default is 0
                     * @return Offset Offset, the default is 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, the default is 0
                     * @param _offset Offset, the default is 0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Filter field IsAuthorized Whether to authorize. The value can be all, 0 unauthorized, 1 authorized
                     * @return Filters Filter field IsAuthorized Whether to authorize. The value can be all, 0 unauthorized, 1 authorized
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter field IsAuthorized Whether to authorize. The value can be all, 0 unauthorized, 1 authorized
                     * @param _filters Filter field IsAuthorized Whether to authorize. The value can be all, 0 unauthorized, 1 authorized
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sort field
                     * @return By Sort field
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sort field
                     * @param _by Sort field
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Sort by asc, desc
                     * @return Order Sort by asc, desc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort by asc, desc
                     * @param _order Sort by asc, desc
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * Number to return, default is 10, maximum is 100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, the default is 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter field IsAuthorized Whether to authorize. The value can be all, 0 unauthorized, 1 authorized
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sort field
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Sort by asc, desc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYREGISTRYLISTREQUEST_H_
