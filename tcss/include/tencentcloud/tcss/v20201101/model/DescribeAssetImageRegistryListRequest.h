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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYLISTREQUEST_H_

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
                * DescribeAssetImageRegistryList request structure.
                */
                class DescribeAssetImageRegistryListRequest : public AbstractModel
                {
                public:
                    DescribeAssetImageRegistryListRequest();
                    ~DescribeAssetImageRegistryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
                     * @return Limit <p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
                     * @param _limit <p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
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
                     * 获取<p>Offset. Default value: 0.</p>
                     * @return Offset <p>Offset. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset. Default value: 0.</p>
                     * @param _offset <p>Offset. Default value: 0.</p>
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
                     * 获取<p>Filter field.<br>IsAuthorized can be set to all, 0 (unauthorized), and 1 (authorized).</p>
                     * @return Filters <p>Filter field.<br>IsAuthorized can be set to all, 0 (unauthorized), and 1 (authorized).</p>
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置<p>Filter field.<br>IsAuthorized can be set to all, 0 (unauthorized), and 1 (authorized).</p>
                     * @param _filters <p>Filter field.<br>IsAuthorized can be set to all, 0 (unauthorized), and 1 (authorized).</p>
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
                     * 获取<p>Sorting field.</p>
                     * @return By <p>Sorting field.</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Sorting field.</p>
                     * @param _by <p>Sorting field.</p>
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
                     * 获取<p>Sorting method. Valid values: asc and desc.</p>
                     * @return Order <p>Sorting method. Valid values: asc and desc.</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting method. Valid values: asc and desc.</p>
                     * @param _order <p>Sorting method. Valid values: asc and desc.</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>Whether to display only the latest image of each repository. Default value: false.</p>
                     * @return OnlyShowLatest <p>Whether to display only the latest image of each repository. Default value: false.</p>
                     * 
                     */
                    bool GetOnlyShowLatest() const;

                    /**
                     * 设置<p>Whether to display only the latest image of each repository. Default value: false.</p>
                     * @param _onlyShowLatest <p>Whether to display only the latest image of each repository. Default value: false.</p>
                     * 
                     */
                    void SetOnlyShowLatest(const bool& _onlyShowLatest);

                    /**
                     * 判断参数 OnlyShowLatest 是否已赋值
                     * @return OnlyShowLatest 是否已赋值
                     * 
                     */
                    bool OnlyShowLatestHasBeenSet() const;

                    /**
                     * 获取<p>Whether to display only running container images.</p>
                     * @return IsRunning <p>Whether to display only running container images.</p>
                     * 
                     */
                    bool GetIsRunning() const;

                    /**
                     * 设置<p>Whether to display only running container images.</p>
                     * @param _isRunning <p>Whether to display only running container images.</p>
                     * 
                     */
                    void SetIsRunning(const bool& _isRunning);

                    /**
                     * 判断参数 IsRunning 是否已赋值
                     * @return IsRunning 是否已赋值
                     * 
                     */
                    bool IsRunningHasBeenSet() const;

                private:

                    /**
                     * <p>Number of items to return. The default number is 10, and the maximum number is 100.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Filter field.<br>IsAuthorized can be set to all, 0 (unauthorized), and 1 (authorized).</p>
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Sorting field.</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * <p>Sorting method. Valid values: asc and desc.</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Whether to display only the latest image of each repository. Default value: false.</p>
                     */
                    bool m_onlyShowLatest;
                    bool m_onlyShowLatestHasBeenSet;

                    /**
                     * <p>Whether to display only running container images.</p>
                     */
                    bool m_isRunning;
                    bool m_isRunningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYLISTREQUEST_H_
