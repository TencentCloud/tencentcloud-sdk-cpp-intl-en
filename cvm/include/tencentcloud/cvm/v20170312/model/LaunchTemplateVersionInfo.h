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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEVERSIONINFO_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/LaunchTemplateVersionData.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Set of instance launch template versions.
                */
                class LaunchTemplateVersionInfo : public AbstractModel
                {
                public:
                    LaunchTemplateVersionInfo();
                    ~LaunchTemplateVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LaunchTemplateVersion Instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLaunchTemplateVersion() const;

                    /**
                     * 设置Instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _launchTemplateVersion Instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLaunchTemplateVersion(const uint64_t& _launchTemplateVersion);

                    /**
                     * 判断参数 LaunchTemplateVersion 是否已赋值
                     * @return LaunchTemplateVersion 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionHasBeenSet() const;

                    /**
                     * 获取Details of instance launch template versions.
                     * @return LaunchTemplateVersionData Details of instance launch template versions.
                     * 
                     */
                    LaunchTemplateVersionData GetLaunchTemplateVersionData() const;

                    /**
                     * 设置Details of instance launch template versions.
                     * @param _launchTemplateVersionData Details of instance launch template versions.
                     * 
                     */
                    void SetLaunchTemplateVersionData(const LaunchTemplateVersionData& _launchTemplateVersionData);

                    /**
                     * 判断参数 LaunchTemplateVersionData 是否已赋值
                     * @return LaunchTemplateVersionData 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionDataHasBeenSet() const;

                    /**
                     * 获取Creation time of the instance launch template version.
                     * @return CreationTime Creation time of the instance launch template version.
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Creation time of the instance launch template version.
                     * @param _creationTime Creation time of the instance launch template version.
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取Instance launch template ID.
                     * @return LaunchTemplateId Instance launch template ID.
                     * 
                     */
                    std::string GetLaunchTemplateId() const;

                    /**
                     * 设置Instance launch template ID.
                     * @param _launchTemplateId Instance launch template ID.
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
                     * 获取Specifies whether it’s the default launch template version.
                     * @return IsDefaultVersion Specifies whether it’s the default launch template version.
                     * 
                     */
                    bool GetIsDefaultVersion() const;

                    /**
                     * 设置Specifies whether it’s the default launch template version.
                     * @param _isDefaultVersion Specifies whether it’s the default launch template version.
                     * 
                     */
                    void SetIsDefaultVersion(const bool& _isDefaultVersion);

                    /**
                     * 判断参数 IsDefaultVersion 是否已赋值
                     * @return IsDefaultVersion 是否已赋值
                     * 
                     */
                    bool IsDefaultVersionHasBeenSet() const;

                    /**
                     * 获取Information of instance launch template version description.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LaunchTemplateVersionDescription Information of instance launch template version description.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLaunchTemplateVersionDescription() const;

                    /**
                     * 设置Information of instance launch template version description.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _launchTemplateVersionDescription Information of instance launch template version description.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLaunchTemplateVersionDescription(const std::string& _launchTemplateVersionDescription);

                    /**
                     * 判断参数 LaunchTemplateVersionDescription 是否已赋值
                     * @return LaunchTemplateVersionDescription 是否已赋值
                     * 
                     */
                    bool LaunchTemplateVersionDescriptionHasBeenSet() const;

                    /**
                     * 获取Creator account
                     * @return CreatedBy Creator account
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置Creator account
                     * @param _createdBy Creator account
                     * 
                     */
                    void SetCreatedBy(const std::string& _createdBy);

                    /**
                     * 判断参数 CreatedBy 是否已赋值
                     * @return CreatedBy 是否已赋值
                     * 
                     */
                    bool CreatedByHasBeenSet() const;

                private:

                    /**
                     * Instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_launchTemplateVersion;
                    bool m_launchTemplateVersionHasBeenSet;

                    /**
                     * Details of instance launch template versions.
                     */
                    LaunchTemplateVersionData m_launchTemplateVersionData;
                    bool m_launchTemplateVersionDataHasBeenSet;

                    /**
                     * Creation time of the instance launch template version.
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * Instance launch template ID.
                     */
                    std::string m_launchTemplateId;
                    bool m_launchTemplateIdHasBeenSet;

                    /**
                     * Specifies whether it’s the default launch template version.
                     */
                    bool m_isDefaultVersion;
                    bool m_isDefaultVersionHasBeenSet;

                    /**
                     * Information of instance launch template version description.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_launchTemplateVersionDescription;
                    bool m_launchTemplateVersionDescriptionHasBeenSet;

                    /**
                     * Creator account
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEVERSIONINFO_H_
