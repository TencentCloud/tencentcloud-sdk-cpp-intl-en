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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONFIGGROUPVERSIONSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONFIGGROUPVERSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ConfigGroupVersionInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeConfigGroupVersions response structure.
                */
                class DescribeConfigGroupVersionsResponse : public AbstractModel
                {
                public:
                    DescribeConfigGroupVersionsResponse();
                    ~DescribeConfigGroupVersionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total versions.
                     * @return TotalCount Total versions.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Version information list.
                     * @return ConfigGroupVersionInfos Version information list.
                     * 
                     */
                    std::vector<ConfigGroupVersionInfo> GetConfigGroupVersionInfos() const;

                    /**
                     * 判断参数 ConfigGroupVersionInfos 是否已赋值
                     * @return ConfigGroupVersionInfos 是否已赋值
                     * 
                     */
                    bool ConfigGroupVersionInfosHasBeenSet() const;

                private:

                    /**
                     * Total versions.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Version information list.
                     */
                    std::vector<ConfigGroupVersionInfo> m_configGroupVersionInfos;
                    bool m_configGroupVersionInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONFIGGROUPVERSIONSRESPONSE_H_
