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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBLUEPRINTSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBLUEPRINTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Filter.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeBlueprints request structure.
                */
                class DescribeBlueprintsRequest : public AbstractModel
                {
                public:
                    DescribeBlueprintsRequest();
                    ~DescribeBlueprintsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image ID list.
                     * @return BlueprintIds Image ID list.
                     * 
                     */
                    std::vector<std::string> GetBlueprintIds() const;

                    /**
                     * 设置Image ID list.
                     * @param _blueprintIds Image ID list.
                     * 
                     */
                    void SetBlueprintIds(const std::vector<std::string>& _blueprintIds);

                    /**
                     * 判断参数 BlueprintIds 是否已赋值
                     * @return BlueprintIds 是否已赋值
                     * 
                     */
                    bool BlueprintIdsHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     * @return Offset Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     * @param _offset Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
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
                     * 获取Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
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
                     * 获取Filter list.
<li>blueprint-id</li>Filter by the **image ID**.
Type: String
Required: no
<li>blueprint-type</li>Filter by the **image type**.
Valid values: `APP_OS` (application image), `PURE_OS` (system image), `DOCKER` (Docker container image), `PRIVATE` (custom image), `SHARED` (shared image)
Type: String
Required: no
<li>platform-type</li>Filter by the **image operating system**.
Valid values: `LINUX_UNIX` (Linux or Unix), `WINDOWS` (Windows)
Type: String
Required: no
<li>blueprint-name</li>Filter by the **image name**.
Type: String
Required: no
<li>blueprint-state</li>Filter by the **image status**.
Type: String
Required: no
<li>scene-id</li>Filter by the **scene ID**.
Type: String
Required: no

Each request can contain up to 10 `Filters`, each of which can contain up to 100 `Filter.Values`. `BlueprintIds` and `Filters` cannot be specified at the same time.
                     * @return Filters Filter list.
<li>blueprint-id</li>Filter by the **image ID**.
Type: String
Required: no
<li>blueprint-type</li>Filter by the **image type**.
Valid values: `APP_OS` (application image), `PURE_OS` (system image), `DOCKER` (Docker container image), `PRIVATE` (custom image), `SHARED` (shared image)
Type: String
Required: no
<li>platform-type</li>Filter by the **image operating system**.
Valid values: `LINUX_UNIX` (Linux or Unix), `WINDOWS` (Windows)
Type: String
Required: no
<li>blueprint-name</li>Filter by the **image name**.
Type: String
Required: no
<li>blueprint-state</li>Filter by the **image status**.
Type: String
Required: no
<li>scene-id</li>Filter by the **scene ID**.
Type: String
Required: no

Each request can contain up to 10 `Filters`, each of which can contain up to 100 `Filter.Values`. `BlueprintIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter list.
<li>blueprint-id</li>Filter by the **image ID**.
Type: String
Required: no
<li>blueprint-type</li>Filter by the **image type**.
Valid values: `APP_OS` (application image), `PURE_OS` (system image), `DOCKER` (Docker container image), `PRIVATE` (custom image), `SHARED` (shared image)
Type: String
Required: no
<li>platform-type</li>Filter by the **image operating system**.
Valid values: `LINUX_UNIX` (Linux or Unix), `WINDOWS` (Windows)
Type: String
Required: no
<li>blueprint-name</li>Filter by the **image name**.
Type: String
Required: no
<li>blueprint-state</li>Filter by the **image status**.
Type: String
Required: no
<li>scene-id</li>Filter by the **scene ID**.
Type: String
Required: no

Each request can contain up to 10 `Filters`, each of which can contain up to 100 `Filter.Values`. `BlueprintIds` and `Filters` cannot be specified at the same time.
                     * @param _filters Filter list.
<li>blueprint-id</li>Filter by the **image ID**.
Type: String
Required: no
<li>blueprint-type</li>Filter by the **image type**.
Valid values: `APP_OS` (application image), `PURE_OS` (system image), `DOCKER` (Docker container image), `PRIVATE` (custom image), `SHARED` (shared image)
Type: String
Required: no
<li>platform-type</li>Filter by the **image operating system**.
Valid values: `LINUX_UNIX` (Linux or Unix), `WINDOWS` (Windows)
Type: String
Required: no
<li>blueprint-name</li>Filter by the **image name**.
Type: String
Required: no
<li>blueprint-state</li>Filter by the **image status**.
Type: String
Required: no
<li>scene-id</li>Filter by the **scene ID**.
Type: String
Required: no

Each request can contain up to 10 `Filters`, each of which can contain up to 100 `Filter.Values`. `BlueprintIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Image ID list.
                     */
                    std::vector<std::string> m_blueprintIds;
                    bool m_blueprintIdsHasBeenSet;

                    /**
                     * Offset. Default value: 0. For more information on `Offset`, please see the relevant section in [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100. For more information on `Limit`, please see the relevant section in the API [Overview](https://intl.cloud.tencent.com/document/product/1207/47578?from_cn_redirect=1).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter list.
<li>blueprint-id</li>Filter by the **image ID**.
Type: String
Required: no
<li>blueprint-type</li>Filter by the **image type**.
Valid values: `APP_OS` (application image), `PURE_OS` (system image), `DOCKER` (Docker container image), `PRIVATE` (custom image), `SHARED` (shared image)
Type: String
Required: no
<li>platform-type</li>Filter by the **image operating system**.
Valid values: `LINUX_UNIX` (Linux or Unix), `WINDOWS` (Windows)
Type: String
Required: no
<li>blueprint-name</li>Filter by the **image name**.
Type: String
Required: no
<li>blueprint-state</li>Filter by the **image status**.
Type: String
Required: no
<li>scene-id</li>Filter by the **scene ID**.
Type: String
Required: no

Each request can contain up to 10 `Filters`, each of which can contain up to 100 `Filter.Values`. `BlueprintIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBLUEPRINTSREQUEST_H_
