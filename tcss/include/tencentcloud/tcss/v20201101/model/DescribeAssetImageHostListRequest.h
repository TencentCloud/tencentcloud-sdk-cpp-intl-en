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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEHOSTLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEHOSTLISTREQUEST_H_

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
                * DescribeAssetImageHostList request structure.
                */
                class DescribeAssetImageHostListRequest : public AbstractModel
                {
                public:
                    DescribeAssetImageHostListRequest();
                    ~DescribeAssetImageHostListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter. Valid values: `ImageID`, `HostID`.
                     * @return Filters Filter. Valid values: `ImageID`, `HostID`.
                     * 
                     */
                    std::vector<AssetFilters> GetFilters() const;

                    /**
                     * 设置Filter. Valid values: `ImageID`, `HostID`.
                     * @param _filters Filter. Valid values: `ImageID`, `HostID`.
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Filter. Valid values: `ImageID`, `HostID`.
                     */
                    std::vector<AssetFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEHOSTLISTREQUEST_H_
