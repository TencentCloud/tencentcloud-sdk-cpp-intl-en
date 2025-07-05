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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DEPLOYCONFIGGROUPVERSIONREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DEPLOYCONFIGGROUPVERSIONREQUEST_H_

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
                * DeployConfigGroupVersion request structure.
                */
                class DeployConfigGroupVersionRequest : public AbstractModel
                {
                public:
                    DeployConfigGroupVersionRequest();
                    ~DeployConfigGroupVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Environment ID. Please specify the environment ID to which the version should be released.
                     * @return EnvId Environment ID. Please specify the environment ID to which the version should be released.
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置Environment ID. Please specify the environment ID to which the version should be released.
                     * @param _envId Environment ID. Please specify the environment ID to which the version should be released.
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取Version information required for release. Multiple versions of different configuration groups can be modified simultaneously, while each group allows modifying only one version at a time.
                     * @return ConfigGroupVersionInfos Version information required for release. Multiple versions of different configuration groups can be modified simultaneously, while each group allows modifying only one version at a time.
                     * 
                     */
                    std::vector<ConfigGroupVersionInfo> GetConfigGroupVersionInfos() const;

                    /**
                     * 设置Version information required for release. Multiple versions of different configuration groups can be modified simultaneously, while each group allows modifying only one version at a time.
                     * @param _configGroupVersionInfos Version information required for release. Multiple versions of different configuration groups can be modified simultaneously, while each group allows modifying only one version at a time.
                     * 
                     */
                    void SetConfigGroupVersionInfos(const std::vector<ConfigGroupVersionInfo>& _configGroupVersionInfos);

                    /**
                     * 判断参数 ConfigGroupVersionInfos 是否已赋值
                     * @return ConfigGroupVersionInfos 是否已赋值
                     * 
                     */
                    bool ConfigGroupVersionInfosHasBeenSet() const;

                    /**
                     * 获取Change description. It is used to describe the content and reasons for this change. A maximum of 100 characters are supported.
                     * @return Description Change description. It is used to describe the content and reasons for this change. A maximum of 100 characters are supported.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Change description. It is used to describe the content and reasons for this change. A maximum of 100 characters are supported.
                     * @param _description Change description. It is used to describe the content and reasons for this change. A maximum of 100 characters are supported.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Environment ID. Please specify the environment ID to which the version should be released.
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * Version information required for release. Multiple versions of different configuration groups can be modified simultaneously, while each group allows modifying only one version at a time.
                     */
                    std::vector<ConfigGroupVersionInfo> m_configGroupVersionInfos;
                    bool m_configGroupVersionInfosHasBeenSet;

                    /**
                     * Change description. It is used to describe the content and reasons for this change. A maximum of 100 characters are supported.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DEPLOYCONFIGGROUPVERSIONREQUEST_H_
