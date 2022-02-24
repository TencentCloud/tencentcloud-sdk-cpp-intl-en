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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DELETELAUNCHTEMPLATEVERSIONSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DELETELAUNCHTEMPLATEVERSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteLaunchTemplateVersions request structure.
                */
                class DeleteLaunchTemplateVersionsRequest : public AbstractModel
                {
                public:
                    DeleteLaunchTemplateVersionsRequest();
                    ~DeleteLaunchTemplateVersionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The launch template ID
                     * @return LaunchTemplateId The launch template ID
                     */
                    std::string GetLaunchTemplateId() const;

                    /**
                     * 设置The launch template ID
                     * @param LaunchTemplateId The launch template ID
                     */
                    void SetLaunchTemplateId(const std::string& _launchTemplateId);

                    /**
                     * 判断参数 LaunchTemplateId 是否已赋值
                     * @return LaunchTemplateId 是否已赋值
                     */
                    bool LaunchTemplateIdHasBeenSet() const;

                    /**
                     * 获取List of instance launch template versions.
                     * @return LaunchTemplateVersions List of instance launch template versions.
                     */
                    std::vector<int64_t> GetLaunchTemplateVersions() const;

                    /**
                     * 设置List of instance launch template versions.
                     * @param LaunchTemplateVersions List of instance launch template versions.
                     */
                    void SetLaunchTemplateVersions(const std::vector<int64_t>& _launchTemplateVersions);

                    /**
                     * 判断参数 LaunchTemplateVersions 是否已赋值
                     * @return LaunchTemplateVersions 是否已赋值
                     */
                    bool LaunchTemplateVersionsHasBeenSet() const;

                private:

                    /**
                     * The launch template ID
                     */
                    std::string m_launchTemplateId;
                    bool m_launchTemplateIdHasBeenSet;

                    /**
                     * List of instance launch template versions.
                     */
                    std::vector<int64_t> m_launchTemplateVersions;
                    bool m_launchTemplateVersionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DELETELAUNCHTEMPLATEVERSIONSREQUEST_H_
