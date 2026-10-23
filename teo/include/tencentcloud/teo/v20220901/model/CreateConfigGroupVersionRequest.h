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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATECONFIGGROUPVERSIONREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATECONFIGGROUPVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateConfigGroupVersion request structure.
                */
                class CreateConfigGroupVersionRequest : public AbstractModel
                {
                public:
                    CreateConfigGroupVersionRequest();
                    ~CreateConfigGroupVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
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
                     * 获取<p>Configuration group ID for the new version. You can obtain the complete environment information through the DescribeEnvironments interface. The environment information contains the configuration group ID for each configuration group type.</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/101862?from_cn_redirect=1">DescribeEnvironments</a> return value <code>EnvInfos</code></p>
                     * @return GroupId <p>Configuration group ID for the new version. You can obtain the complete environment information through the DescribeEnvironments interface. The environment information contains the configuration group ID for each configuration group type.</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/101862?from_cn_redirect=1">DescribeEnvironments</a> return value <code>EnvInfos</code></p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>Configuration group ID for the new version. You can obtain the complete environment information through the DescribeEnvironments interface. The environment information contains the configuration group ID for each configuration group type.</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/101862?from_cn_redirect=1">DescribeEnvironments</a> return value <code>EnvInfos</code></p>
                     * @param _groupId <p>Configuration group ID for the new version. You can obtain the complete environment information through the DescribeEnvironments interface. The environment information contains the configuration group ID for each configuration group type.</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/101862?from_cn_redirect=1">DescribeEnvironments</a> return value <code>EnvInfos</code></p>
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
                     * 获取<p>Configuration content to be imported. Use JSON format and encode in UTF-8 mode. Refer to the example below and the <a href="https://www.tencentcloud.com/document/product/1552/125342?from_cn_redirect=1">configuration group syntax explanation</a> for the configuration file content.</p>
                     * @return Content <p>Configuration content to be imported. Use JSON format and encode in UTF-8 mode. Refer to the example below and the <a href="https://www.tencentcloud.com/document/product/1552/125342?from_cn_redirect=1">configuration group syntax explanation</a> for the configuration file content.</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>Configuration content to be imported. Use JSON format and encode in UTF-8 mode. Refer to the example below and the <a href="https://www.tencentcloud.com/document/product/1552/125342?from_cn_redirect=1">configuration group syntax explanation</a> for the configuration file content.</p>
                     * @param _content <p>Configuration content to be imported. Use JSON format and encode in UTF-8 mode. Refer to the example below and the <a href="https://www.tencentcloud.com/document/product/1552/125342?from_cn_redirect=1">configuration group syntax explanation</a> for the configuration file content.</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>Version description, enter a maximum length of 50 characters, can be used to fill in the usage scenario of this version.</p>
                     * @return Description <p>Version description, enter a maximum length of 50 characters, can be used to fill in the usage scenario of this version.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Version description, enter a maximum length of 50 characters, can be used to fill in the usage scenario of this version.</p>
                     * @param _description <p>Version description, enter a maximum length of 50 characters, can be used to fill in the usage scenario of this version.</p>
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
                     * 获取<p>Source version ID on which the new version is based. The new version will be created as a derivative based on the configuration of this source version. This field is optional. If not provided, it defaults to the version currently taking effect in the production environment as the source version.</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     * @return SourceVersion <p>Source version ID on which the new version is based. The new version will be created as a derivative based on the configuration of this source version. This field is optional. If not provided, it defaults to the version currently taking effect in the production environment as the source version.</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     * 
                     */
                    std::string GetSourceVersion() const;

                    /**
                     * 设置<p>Source version ID on which the new version is based. The new version will be created as a derivative based on the configuration of this source version. This field is optional. If not provided, it defaults to the version currently taking effect in the production environment as the source version.</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     * @param _sourceVersion <p>Source version ID on which the new version is based. The new version will be created as a derivative based on the configuration of this source version. This field is optional. If not provided, it defaults to the version currently taking effect in the production environment as the source version.</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     * 
                     */
                    void SetSourceVersion(const std::string& _sourceVersion);

                    /**
                     * 判断参数 SourceVersion 是否已赋值
                     * @return SourceVersion 是否已赋值
                     * 
                     */
                    bool SourceVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Configuration group ID for the new version. You can obtain the complete environment information through the DescribeEnvironments interface. The environment information contains the configuration group ID for each configuration group type.</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/1552/101862?from_cn_redirect=1">DescribeEnvironments</a> return value <code>EnvInfos</code></p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>Configuration content to be imported. Use JSON format and encode in UTF-8 mode. Refer to the example below and the <a href="https://www.tencentcloud.com/document/product/1552/125342?from_cn_redirect=1">configuration group syntax explanation</a> for the configuration file content.</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>Version description, enter a maximum length of 50 characters, can be used to fill in the usage scenario of this version.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Source version ID on which the new version is based. The new version will be created as a derivative based on the configuration of this source version. This field is optional. If not provided, it defaults to the version currently taking effect in the production environment as the source version.</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     */
                    std::string m_sourceVersion;
                    bool m_sourceVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATECONFIGGROUPVERSIONREQUEST_H_
