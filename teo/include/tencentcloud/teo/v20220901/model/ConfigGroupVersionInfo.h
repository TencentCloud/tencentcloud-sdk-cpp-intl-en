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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPVERSIONINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Version information about the configuration group.
                */
                class ConfigGroupVersionInfo : public AbstractModel
                {
                public:
                    ConfigGroupVersionInfo();
                    ~ConfigGroupVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Version ID.
                     * @return VersionId Version ID.
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置Version ID.
                     * @param _versionId Version ID.
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取Version No.
                     * @return VersionNumber Version No.
                     * 
                     */
                    std::string GetVersionNumber() const;

                    /**
                     * 设置Version No.
                     * @param _versionNumber Version No.
                     * 
                     */
                    void SetVersionNumber(const std::string& _versionNumber);

                    /**
                     * 判断参数 VersionNumber 是否已赋值
                     * @return VersionNumber 是否已赋值
                     * 
                     */
                    bool VersionNumberHasBeenSet() const;

                    /**
                     * 获取Configuraration group ID.
                     * @return GroupId Configuraration group ID.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Configuraration group ID.
                     * @param _groupId Configuraration group ID.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Configuration group type. Valid values: 
<li>l7_acceleration: L7 acceleration configuration group. </li>
<li>edge_functions: Edge function configuration group. </li>
                     * @return GroupType Configuration group type. Valid values: 
<li>l7_acceleration: L7 acceleration configuration group. </li>
<li>edge_functions: Edge function configuration group. </li>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置Configuration group type. Valid values: 
<li>l7_acceleration: L7 acceleration configuration group. </li>
<li>edge_functions: Edge function configuration group. </li>
                     * @param _groupType Configuration group type. Valid values: 
<li>l7_acceleration: L7 acceleration configuration group. </li>
<li>edge_functions: Edge function configuration group. </li>
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取Version description.
                     * @return Description Version description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Version description.
                     * @param _description Version description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Version status. Valid values: 
<li>creating: Being created.</li>
<li>inactive: Not effective.</li>
<li>active: Effective. </li>
                     * @return Status Version status. Valid values: 
<li>creating: Being created.</li>
<li>inactive: Not effective.</li>
<li>active: Effective. </li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Version status. Valid values: 
<li>creating: Being created.</li>
<li>inactive: Not effective.</li>
<li>active: Effective. </li>
                     * @param _status Version status. Valid values: 
<li>creating: Being created.</li>
<li>inactive: Not effective.</li>
<li>active: Effective. </li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Version creation time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     * @return CreateTime Version creation time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Version creation time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     * @param _createTime Version creation time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Version ID.
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * Version No.
                     */
                    std::string m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * Configuraration group ID.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Configuration group type. Valid values: 
<li>l7_acceleration: L7 acceleration configuration group. </li>
<li>edge_functions: Edge function configuration group. </li>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * Version description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Version status. Valid values: 
<li>creating: Being created.</li>
<li>inactive: Not effective.</li>
<li>active: Effective. </li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Version creation time. The time format follows the ISO 8601 standard and is represented in Coordinated Universal Time (UTC).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPVERSIONINFO_H_
