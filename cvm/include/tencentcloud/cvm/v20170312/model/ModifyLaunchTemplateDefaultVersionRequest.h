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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYLAUNCHTEMPLATEDEFAULTVERSIONREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYLAUNCHTEMPLATEDEFAULTVERSIONREQUEST_H_

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
                * ModifyLaunchTemplateDefaultVersion request structure.
                */
                class ModifyLaunchTemplateDefaultVersionRequest : public AbstractModel
                {
                public:
                    ModifyLaunchTemplateDefaultVersionRequest();
                    ~ModifyLaunchTemplateDefaultVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The launch template ID
                     * @return LaunchTemplateId The launch template ID
                     * 
                     */
                    std::string GetLaunchTemplateId() const;

                    /**
                     * 设置The launch template ID
                     * @param _launchTemplateId The launch template ID
                     * 
                     */
                    void SetLaunchTemplateId(const std::string& _launchTemplateId);

                    /**
                     * 判断参数 LaunchTemplateId 是否已赋值
                     * @return LaunchTemplateId 是否已赋值
                     * 
                     */
                    bool LaunchTemplateIdHasBeenSet() const;

                    /**
                     * 获取The number of the version that you want to set as the default version
                     * @return DefaultVersion The number of the version that you want to set as the default version
                     * 
                     */
                    int64_t GetDefaultVersion() const;

                    /**
                     * 设置The number of the version that you want to set as the default version
                     * @param _defaultVersion The number of the version that you want to set as the default version
                     * 
                     */
                    void SetDefaultVersion(const int64_t& _defaultVersion);

                    /**
                     * 判断参数 DefaultVersion 是否已赋值
                     * @return DefaultVersion 是否已赋值
                     * 
                     */
                    bool DefaultVersionHasBeenSet() const;

                private:

                    /**
                     * The launch template ID
                     */
                    std::string m_launchTemplateId;
                    bool m_launchTemplateIdHasBeenSet;

                    /**
                     * The number of the version that you want to set as the default version
                     */
                    int64_t m_defaultVersion;
                    bool m_defaultVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYLAUNCHTEMPLATEDEFAULTVERSIONREQUEST_H_
