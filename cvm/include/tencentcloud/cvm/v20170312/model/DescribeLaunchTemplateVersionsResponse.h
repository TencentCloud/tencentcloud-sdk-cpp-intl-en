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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/LaunchTemplateVersionInfo.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeLaunchTemplateVersions response structure.
                */
                class DescribeLaunchTemplateVersionsResponse : public AbstractModel
                {
                public:
                    DescribeLaunchTemplateVersionsResponse();
                    ~DescribeLaunchTemplateVersionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of instance launch templates.
                     * @return TotalCount Total number of instance launch templates.
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
                     * 获取Set of instance launch template versions.
                     * @return LaunchTemplateVersionSet Set of instance launch template versions.
                     * 
                     */
                    std::vector<LaunchTemplateVersionInfo> GetLaunchTemplateVersionSet() const;

                    /**
                     * 判断参数 LaunchTemplateVersionSet 是否已赋值
                     * @return LaunchTemplateVersionSet 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionSetHasBeenSet() const;

                private:

                    /**
                     * Total number of instance launch templates.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Set of instance launch template versions.
                     */
                    std::vector<LaunchTemplateVersionInfo> m_launchTemplateVersionSet;
                    bool m_launchTemplateVersionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSE_H_
