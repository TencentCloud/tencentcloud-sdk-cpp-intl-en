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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULREGISTRYIMAGELISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULREGISTRYIMAGELISTREQUEST_H_

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
                * DescribeVulRegistryImageList request structure.
                */
                class DescribeVulRegistryImageListRequest : public AbstractModel
                {
                public:
                    DescribeVulRegistryImageListRequest();
                    ~DescribeVulRegistryImageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability ID
                     * @return PocID Vulnerability ID
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _pocID Vulnerability ID
                     * 
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                    /**
                     * 获取The number of results returned. Default value: 10. Maximum value: 100.
                     * @return Limit The number of results returned. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of results returned. Default value: 10. Maximum value: 100.
                     * @param _limit The number of results returned. Default value: 10. Maximum value: 100.
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
                     * 获取
                     * @return Offset 
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置
                     * @param _offset 
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
                     * 获取Filter condition
`OnlyAffectedNewestImage`: (bool) Whether the latest image is affected.
`ImageDigest`: Image digest. Fuzzy query is supported.
`ImageId`: Image ID.
`Namespace`: Namespace. Fuzzy query is supported.
`ImageTag`: Image tag. Fuzzy query is supported.
`InstanceName`: Instance name. Fuzzy query is supported.
`ImageName`: Image name. Fuzzy query is supported.
`ImageRepoAddress`: Image address. Fuzzy query is supported.
                     * @return Filters Filter condition
`OnlyAffectedNewestImage`: (bool) Whether the latest image is affected.
`ImageDigest`: Image digest. Fuzzy query is supported.
`ImageId`: Image ID.
`Namespace`: Namespace. Fuzzy query is supported.
`ImageTag`: Image tag. Fuzzy query is supported.
`InstanceName`: Instance name. Fuzzy query is supported.
`ImageName`: Image name. Fuzzy query is supported.
`ImageRepoAddress`: Image address. Fuzzy query is supported.
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter condition
`OnlyAffectedNewestImage`: (bool) Whether the latest image is affected.
`ImageDigest`: Image digest. Fuzzy query is supported.
`ImageId`: Image ID.
`Namespace`: Namespace. Fuzzy query is supported.
`ImageTag`: Image tag. Fuzzy query is supported.
`InstanceName`: Instance name. Fuzzy query is supported.
`ImageName`: Image name. Fuzzy query is supported.
`ImageRepoAddress`: Image address. Fuzzy query is supported.
                     * @param _filters Filter condition
`OnlyAffectedNewestImage`: (bool) Whether the latest image is affected.
`ImageDigest`: Image digest. Fuzzy query is supported.
`ImageId`: Image ID.
`Namespace`: Namespace. Fuzzy query is supported.
`ImageTag`: Image tag. Fuzzy query is supported.
`InstanceName`: Instance name. Fuzzy query is supported.
`ImageName`: Image name. Fuzzy query is supported.
`ImageRepoAddress`: Image address. Fuzzy query is supported.
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
                     * 获取Sorting order
                     * @return Order Sorting order
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order
                     * @param _order Sorting order
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
                     * 获取Sorting field
                     * @return By Sorting field
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Sorting field
                     * @param _by Sorting field
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * The number of results returned. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter condition
`OnlyAffectedNewestImage`: (bool) Whether the latest image is affected.
`ImageDigest`: Image digest. Fuzzy query is supported.
`ImageId`: Image ID.
`Namespace`: Namespace. Fuzzy query is supported.
`ImageTag`: Image tag. Fuzzy query is supported.
`InstanceName`: Instance name. Fuzzy query is supported.
`ImageName`: Image name. Fuzzy query is supported.
`ImageRepoAddress`: Image address. Fuzzy query is supported.
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting order
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Sorting field
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULREGISTRYIMAGELISTREQUEST_H_
