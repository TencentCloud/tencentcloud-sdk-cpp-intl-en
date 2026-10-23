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
                     * 获取<p>Configuration group version ID, a unique resource ID allocated by EdgeOne when creating a configuration group version.</p><p>Parameter format: ver-2kplomhisdcb</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     * @return VersionId <p>Configuration group version ID, a unique resource ID allocated by EdgeOne when creating a configuration group version.</p><p>Parameter format: ver-2kplomhisdcb</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>Configuration group version ID, a unique resource ID allocated by EdgeOne when creating a configuration group version.</p><p>Parameter format: ver-2kplomhisdcb</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     * @param _versionId <p>Configuration group version ID, a unique resource ID allocated by EdgeOne when creating a configuration group version.</p><p>Parameter format: ver-2kplomhisdcb</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
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
                     * 获取<p>Configuration group version number. This parameter only shows the version. Each time a new version of the configuration group is created, the version number increments by one. The initial version number is "0".</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></p>
                     * @return VersionNumber <p>Configuration group version number. This parameter only shows the version. Each time a new version of the configuration group is created, the version number increments by one. The initial version number is "0".</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></p>
                     * 
                     */
                    std::string GetVersionNumber() const;

                    /**
                     * 设置<p>Configuration group version number. This parameter only shows the version. Each time a new version of the configuration group is created, the version number increments by one. The initial version number is "0".</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></p>
                     * @param _versionNumber <p>Configuration group version number. This parameter only shows the version. Each time a new version of the configuration group is created, the version number increments by one. The initial version number is "0".</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></p>
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
                     * 获取<p>Version ID of the source version on which the configuration group version is based. When creating a configuration group version, designate the source version ID. The new version will be created as a derivative based on the configuration of that source version.</p><p>Parameter format: ver-2kplomhisdcb</p><p>Value for reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     * @return SourceVersion <p>Version ID of the source version on which the configuration group version is based. When creating a configuration group version, designate the source version ID. The new version will be created as a derivative based on the configuration of that source version.</p><p>Parameter format: ver-2kplomhisdcb</p><p>Value for reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     * 
                     */
                    std::string GetSourceVersion() const;

                    /**
                     * 设置<p>Version ID of the source version on which the configuration group version is based. When creating a configuration group version, designate the source version ID. The new version will be created as a derivative based on the configuration of that source version.</p><p>Parameter format: ver-2kplomhisdcb</p><p>Value for reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     * @param _sourceVersion <p>Version ID of the source version on which the configuration group version is based. When creating a configuration group version, designate the source version ID. The new version will be created as a derivative based on the configuration of that source version.</p><p>Parameter format: ver-2kplomhisdcb</p><p>Value for reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     * 
                     */
                    void SetSourceVersion(const std::string& _sourceVersion);

                    /**
                     * 判断参数 SourceVersion 是否已赋值
                     * @return SourceVersion 是否已赋值
                     * 
                     */
                    bool SourceVersionHasBeenSet() const;

                    /**
                     * 获取<p>Configuration group type to which the version belongs.</p><p>Enumeration value:</p><ul><li>l7_acceleration: Layer-7 acceleration configuration group</li><li>edge_functions: Edge function configuration group</li><li>web_security: Web protection configuration group</li></ul>
                     * @return GroupType <p>Configuration group type to which the version belongs.</p><p>Enumeration value:</p><ul><li>l7_acceleration: Layer-7 acceleration configuration group</li><li>edge_functions: Edge function configuration group</li><li>web_security: Web protection configuration group</li></ul>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>Configuration group type to which the version belongs.</p><p>Enumeration value:</p><ul><li>l7_acceleration: Layer-7 acceleration configuration group</li><li>edge_functions: Edge function configuration group</li><li>web_security: Web protection configuration group</li></ul>
                     * @param _groupType <p>Configuration group type to which the version belongs.</p><p>Enumeration value:</p><ul><li>l7_acceleration: Layer-7 acceleration configuration group</li><li>edge_functions: Edge function configuration group</li><li>web_security: Web protection configuration group</li></ul>
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
                     * 获取<p>Configuration group ID for version ownership.</p><p>Parameter format: cg-2kplomhisdcb</p>
                     * @return GroupId <p>Configuration group ID for version ownership.</p><p>Parameter format: cg-2kplomhisdcb</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>Configuration group ID for version ownership.</p><p>Parameter format: cg-2kplomhisdcb</p>
                     * @param _groupId <p>Configuration group ID for version ownership.</p><p>Parameter format: cg-2kplomhisdcb</p>
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
                     * 获取<p>Version description.</p>
                     * @return Description <p>Version description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Version description.</p>
                     * @param _description <p>Version description.</p>
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
                     * 获取<p>Version effective status.</p><p>Enumeration value:</p><ul><li>creating: Version creation in progress</li><li>inactive: Version not in effect</li><li>active: Version in effect</li></ul>
                     * @return Status <p>Version effective status.</p><p>Enumeration value:</p><ul><li>creating: Version creation in progress</li><li>inactive: Version not in effect</li><li>active: Version in effect</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Version effective status.</p><p>Enumeration value:</p><ul><li>creating: Version creation in progress</li><li>inactive: Version not in effect</li><li>active: Version in effect</li></ul>
                     * @param _status <p>Version effective status.</p><p>Enumeration value:</p><ul><li>creating: Version creation in progress</li><li>inactive: Version not in effect</li><li>active: Version in effect</li></ul>
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
                     * 获取<p>Version creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.</p>
                     * @return CreateTime <p>Version creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Version creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.</p>
                     * @param _createTime <p>Version creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.</p>
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
                     * <p>Configuration group version ID, a unique resource ID allocated by EdgeOne when creating a configuration group version.</p><p>Parameter format: ver-2kplomhisdcb</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>Configuration group version number. This parameter only shows the version. Each time a new version of the configuration group is created, the version number increments by one. The initial version number is "0".</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></p>
                     */
                    std::string m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * <p>Version ID of the source version on which the configuration group version is based. When creating a configuration group version, designate the source version ID. The new version will be created as a derivative based on the configuration of that source version.</p><p>Parameter format: ver-2kplomhisdcb</p><p>Value for reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     */
                    std::string m_sourceVersion;
                    bool m_sourceVersionHasBeenSet;

                    /**
                     * <p>Configuration group type to which the version belongs.</p><p>Enumeration value:</p><ul><li>l7_acceleration: Layer-7 acceleration configuration group</li><li>edge_functions: Edge function configuration group</li><li>web_security: Web protection configuration group</li></ul>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>Configuration group ID for version ownership.</p><p>Parameter format: cg-2kplomhisdcb</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>Version description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Version effective status.</p><p>Enumeration value:</p><ul><li>creating: Version creation in progress</li><li>inactive: Version not in effect</li><li>active: Version in effect</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Version creation time, which adopts Coordinated Universal Time (UTC) and follows the date and time format of the ISO 8601 standard.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPVERSIONINFO_H_
