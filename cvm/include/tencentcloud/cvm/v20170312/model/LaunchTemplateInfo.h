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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEINFO_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Information of instance launch template.
                */
                class LaunchTemplateInfo : public AbstractModel
                {
                public:
                    LaunchTemplateInfo();
                    ~LaunchTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LatestVersionNumber Instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetLatestVersionNumber() const;

                    /**
                     * 设置Instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param LatestVersionNumber Instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLatestVersionNumber(const uint64_t& _latestVersionNumber);

                    /**
                     * 判断参数 LatestVersionNumber 是否已赋值
                     * @return LatestVersionNumber 是否已赋值
                     */
                    bool LatestVersionNumberHasBeenSet() const;

                    /**
                     * 获取Instance launch template ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LaunchTemplateId Instance launch template ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLaunchTemplateId() const;

                    /**
                     * 设置Instance launch template ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param LaunchTemplateId Instance launch template ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLaunchTemplateId(const std::string& _launchTemplateId);

                    /**
                     * 判断参数 LaunchTemplateId 是否已赋值
                     * @return LaunchTemplateId 是否已赋值
                     */
                    bool LaunchTemplateIdHasBeenSet() const;

                    /**
                     * 获取Instance launch template name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LaunchTemplateName Instance launch template name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLaunchTemplateName() const;

                    /**
                     * 设置Instance launch template name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param LaunchTemplateName Instance launch template name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLaunchTemplateName(const std::string& _launchTemplateName);

                    /**
                     * 判断参数 LaunchTemplateName 是否已赋值
                     * @return LaunchTemplateName 是否已赋值
                     */
                    bool LaunchTemplateNameHasBeenSet() const;

                    /**
                     * 获取Default instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DefaultVersionNumber Default instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetDefaultVersionNumber() const;

                    /**
                     * 设置Default instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param DefaultVersionNumber Default instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDefaultVersionNumber(const uint64_t& _defaultVersionNumber);

                    /**
                     * 判断参数 DefaultVersionNumber 是否已赋值
                     * @return DefaultVersionNumber 是否已赋值
                     */
                    bool DefaultVersionNumberHasBeenSet() const;

                    /**
                     * 获取Total number of versions that the instance launch template contains.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return LaunchTemplateVersionCount Total number of versions that the instance launch template contains.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t GetLaunchTemplateVersionCount() const;

                    /**
                     * 设置Total number of versions that the instance launch template contains.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param LaunchTemplateVersionCount Total number of versions that the instance launch template contains.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLaunchTemplateVersionCount(const uint64_t& _launchTemplateVersionCount);

                    /**
                     * 判断参数 LaunchTemplateVersionCount 是否已赋值
                     * @return LaunchTemplateVersionCount 是否已赋值
                     */
                    bool LaunchTemplateVersionCountHasBeenSet() const;

                    /**
                     * 获取UIN of the user who created the template.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CreatedBy UIN of the user who created the template.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置UIN of the user who created the template.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CreatedBy UIN of the user who created the template.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCreatedBy(const std::string& _createdBy);

                    /**
                     * 判断参数 CreatedBy 是否已赋值
                     * @return CreatedBy 是否已赋值
                     */
                    bool CreatedByHasBeenSet() const;

                    /**
                     * 获取Creation time of the template.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CreationTime Creation time of the template.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置Creation time of the template.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param CreationTime Creation time of the template.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     */
                    bool CreationTimeHasBeenSet() const;

                private:

                    /**
                     * Instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_latestVersionNumber;
                    bool m_latestVersionNumberHasBeenSet;

                    /**
                     * Instance launch template ID.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_launchTemplateId;
                    bool m_launchTemplateIdHasBeenSet;

                    /**
                     * Instance launch template name.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_launchTemplateName;
                    bool m_launchTemplateNameHasBeenSet;

                    /**
                     * Default instance launch template version number.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_defaultVersionNumber;
                    bool m_defaultVersionNumberHasBeenSet;

                    /**
                     * Total number of versions that the instance launch template contains.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    uint64_t m_launchTemplateVersionCount;
                    bool m_launchTemplateVersionCountHasBeenSet;

                    /**
                     * UIN of the user who created the template.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * Creation time of the template.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_LAUNCHTEMPLATEINFO_H_
