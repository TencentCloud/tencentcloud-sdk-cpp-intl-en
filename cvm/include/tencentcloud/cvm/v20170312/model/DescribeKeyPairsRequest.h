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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEKEYPAIRSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEKEYPAIRSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeKeyPairs request structure.
                */
                class DescribeKeyPairsRequest : public AbstractModel
                {
                public:
                    DescribeKeyPairsRequest();
                    ~DescribeKeyPairsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Key pair ID(s) in the format of `skey-11112222`. This API supports using multiple IDs as filters at the same time. For more information on the format of this parameter, see the `id.N` section in [API Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1). You cannot specify `KeyIds` and `Filters` at the same time. You can log in to the [console](https://console.cloud.tencent.com/cvm/index) to query the key pair IDs.
                     * @return KeyIds Key pair ID(s) in the format of `skey-11112222`. This API supports using multiple IDs as filters at the same time. For more information on the format of this parameter, see the `id.N` section in [API Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1). You cannot specify `KeyIds` and `Filters` at the same time. You can log in to the [console](https://console.cloud.tencent.com/cvm/index) to query the key pair IDs.
                     * 
                     */
                    std::vector<std::string> GetKeyIds() const;

                    /**
                     * 设置Key pair ID(s) in the format of `skey-11112222`. This API supports using multiple IDs as filters at the same time. For more information on the format of this parameter, see the `id.N` section in [API Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1). You cannot specify `KeyIds` and `Filters` at the same time. You can log in to the [console](https://console.cloud.tencent.com/cvm/index) to query the key pair IDs.
                     * @param _keyIds Key pair ID(s) in the format of `skey-11112222`. This API supports using multiple IDs as filters at the same time. For more information on the format of this parameter, see the `id.N` section in [API Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1). You cannot specify `KeyIds` and `Filters` at the same time. You can log in to the [console](https://console.cloud.tencent.com/cvm/index) to query the key pair IDs.
                     * 
                     */
                    void SetKeyIds(const std::vector<std::string>& _keyIds);

                    /**
                     * 判断参数 KeyIds 是否已赋值
                     * @return KeyIds 是否已赋值
                     * 
                     */
                    bool KeyIdsHasBeenSet() const;

                    /**
                     * 获取Filters
<li> `project-id` - Integer - Optional - Filter by project ID. To view the list of project IDs, you can go to [Project Management](https://console.cloud.tencent.com/project), or call the `DescribeProject` API and look for `projectId` in the response.</li>
<li> `key-name` - String - Optional - Filter by key pair name.</li>You cannot specify `KeyIds` and `Filters` at the same time.
                     * @return Filters Filters
<li> `project-id` - Integer - Optional - Filter by project ID. To view the list of project IDs, you can go to [Project Management](https://console.cloud.tencent.com/project), or call the `DescribeProject` API and look for `projectId` in the response.</li>
<li> `key-name` - String - Optional - Filter by key pair name.</li>You cannot specify `KeyIds` and `Filters` at the same time.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters
<li> `project-id` - Integer - Optional - Filter by project ID. To view the list of project IDs, you can go to [Project Management](https://console.cloud.tencent.com/project), or call the `DescribeProject` API and look for `projectId` in the response.</li>
<li> `key-name` - String - Optional - Filter by key pair name.</li>You cannot specify `KeyIds` and `Filters` at the same time.
                     * @param _filters Filters
<li> `project-id` - Integer - Optional - Filter by project ID. To view the list of project IDs, you can go to [Project Management](https://console.cloud.tencent.com/project), or call the `DescribeProject` API and look for `projectId` in the response.</li>
<li> `key-name` - String - Optional - Filter by key pair name.</li>You cannot specify `KeyIds` and `Filters` at the same time.
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
                     * 获取Offset; default value: 0. For more information on `Offset`, see the corresponding sections in API [Introduction](https://intl.cloud.tencent.com/document/product/377). Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     * @return Offset Offset; default value: 0. For more information on `Offset`, see the corresponding sections in API [Introduction](https://intl.cloud.tencent.com/document/product/377). Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset; default value: 0. For more information on `Offset`, see the corresponding sections in API [Introduction](https://intl.cloud.tencent.com/document/product/377). Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     * @param _offset Offset; default value: 0. For more information on `Offset`, see the corresponding sections in API [Introduction](https://intl.cloud.tencent.com/document/product/377). Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
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
                     * 获取Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     * @return Limit Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     * @param _limit Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Key pair ID(s) in the format of `skey-11112222`. This API supports using multiple IDs as filters at the same time. For more information on the format of this parameter, see the `id.N` section in [API Introduction](https://intl.cloud.tencent.com/document/api/213/15688?from_cn_redirect=1). You cannot specify `KeyIds` and `Filters` at the same time. You can log in to the [console](https://console.cloud.tencent.com/cvm/index) to query the key pair IDs.
                     */
                    std::vector<std::string> m_keyIds;
                    bool m_keyIdsHasBeenSet;

                    /**
                     * Filters
<li> `project-id` - Integer - Optional - Filter by project ID. To view the list of project IDs, you can go to [Project Management](https://console.cloud.tencent.com/project), or call the `DescribeProject` API and look for `projectId` in the response.</li>
<li> `key-name` - String - Optional - Filter by key pair name.</li>You cannot specify `KeyIds` and `Filters` at the same time.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset; default value: 0. For more information on `Offset`, see the corresponding sections in API [Introduction](https://intl.cloud.tencent.com/document/product/377). Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results returned; default value: 20; maximum: 100. For more information on `Limit`, see the corresponding section in API [Introduction](https://intl.cloud.tencent.com/document/product/377). 
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEKEYPAIRSREQUEST_H_
