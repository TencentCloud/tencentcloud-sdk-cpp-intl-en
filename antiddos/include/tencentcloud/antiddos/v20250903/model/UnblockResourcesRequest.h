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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_UNBLOCKRESOURCESREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_UNBLOCKRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * UnblockResources request structure.
                */
                class UnblockResourcesRequest : public AbstractModel
                {
                public:
                    UnblockResourcesRequest();
                    ~UnblockResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>List of resources to apply for unblocking. Supports unblocking based on public IP. You can obtain detailed resource information of blocked resources through the DescribeDDoSBlockRecords API. Parameter example:</p><ul><li>Public IP: 117.175.94.230.</li></ul><p>Input parameter limit: Maximum list length is 10.</p>
                     * @return Resources <p>List of resources to apply for unblocking. Supports unblocking based on public IP. You can obtain detailed resource information of blocked resources through the DescribeDDoSBlockRecords API. Parameter example:</p><ul><li>Public IP: 117.175.94.230.</li></ul><p>Input parameter limit: Maximum list length is 10.</p>
                     * 
                     */
                    std::vector<std::string> GetResources() const;

                    /**
                     * 设置<p>List of resources to apply for unblocking. Supports unblocking based on public IP. You can obtain detailed resource information of blocked resources through the DescribeDDoSBlockRecords API. Parameter example:</p><ul><li>Public IP: 117.175.94.230.</li></ul><p>Input parameter limit: Maximum list length is 10.</p>
                     * @param _resources <p>List of resources to apply for unblocking. Supports unblocking based on public IP. You can obtain detailed resource information of blocked resources through the DescribeDDoSBlockRecords API. Parameter example:</p><ul><li>Public IP: 117.175.94.230.</li></ul><p>Input parameter limit: Maximum list length is 10.</p>
                     * 
                     */
                    void SetResources(const std::vector<std::string>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                private:

                    /**
                     * <p>List of resources to apply for unblocking. Supports unblocking based on public IP. You can obtain detailed resource information of blocked resources through the DescribeDDoSBlockRecords API. Parameter example:</p><ul><li>Public IP: 117.175.94.230.</li></ul><p>Input parameter limit: Maximum list length is 10.</p>
                     */
                    std::vector<std::string> m_resources;
                    bool m_resourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_UNBLOCKRESOURCESREQUEST_H_
