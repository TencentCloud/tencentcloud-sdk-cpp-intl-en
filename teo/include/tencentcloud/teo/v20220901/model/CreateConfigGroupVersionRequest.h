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
                     * 获取<p>Zone ID.</p>
                     * @return ZoneId <p>Zone ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Zone ID.</p>
                     * @param _zoneId <p>Zone ID.</p>
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
                     * 获取<p>ID of the configuration group for which to create a new version. You can obtain the complete environment information through the environment information interface (DescribeEnvironments). The environment information contains the configuration group ID of each configuration group type.</p><p>For parameter values, see the return value <code>EnvInfos</code> of <a href="https://www.tencentcloud.com/document/api/1552/101862?from_cn_redirect=1">DescribeEnvironments</a>.</p>
                     * @return GroupId <p>ID of the configuration group for which to create a new version. You can obtain the complete environment information through the environment information interface (DescribeEnvironments). The environment information contains the configuration group ID of each configuration group type.</p><p>For parameter values, see the return value <code>EnvInfos</code> of <a href="https://www.tencentcloud.com/document/api/1552/101862?from_cn_redirect=1">DescribeEnvironments</a>.</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>ID of the configuration group for which to create a new version. You can obtain the complete environment information through the environment information interface (DescribeEnvironments). The environment information contains the configuration group ID of each configuration group type.</p><p>For parameter values, see the return value <code>EnvInfos</code> of <a href="https://www.tencentcloud.com/document/api/1552/101862?from_cn_redirect=1">DescribeEnvironments</a>.</p>
                     * @param _groupId <p>ID of the configuration group for which to create a new version. You can obtain the complete environment information through the environment information interface (DescribeEnvironments). The environment information contains the configuration group ID of each configuration group type.</p><p>For parameter values, see the return value <code>EnvInfos</code> of <a href="https://www.tencentcloud.com/document/api/1552/101862?from_cn_redirect=1">DescribeEnvironments</a>.</p>
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
                     * 获取<p>Configuration content to be imported, which is required to be in the JSON format and encoded in the UTF-8 mode. For the configuration file content, refer to the example below and the <a href="https://www.tencentcloud.com/document/product/1552/125342?from_cn_redirect=1">configuration group syntax explanation</a>.</p>
                     * @return Content <p>Configuration content to be imported, which is required to be in the JSON format and encoded in the UTF-8 mode. For the configuration file content, refer to the example below and the <a href="https://www.tencentcloud.com/document/product/1552/125342?from_cn_redirect=1">configuration group syntax explanation</a>.</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>Configuration content to be imported, which is required to be in the JSON format and encoded in the UTF-8 mode. For the configuration file content, refer to the example below and the <a href="https://www.tencentcloud.com/document/product/1552/125342?from_cn_redirect=1">configuration group syntax explanation</a>.</p>
                     * @param _content <p>Configuration content to be imported, which is required to be in the JSON format and encoded in the UTF-8 mode. For the configuration file content, refer to the example below and the <a href="https://www.tencentcloud.com/document/product/1552/125342?from_cn_redirect=1">configuration group syntax explanation</a>.</p>
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
                     * 获取<p>Version description. You can enter up to 50 characters. This field can be used to fill in the usage scenario of this version.</p>
                     * @return Description <p>Version description. You can enter up to 50 characters. This field can be used to fill in the usage scenario of this version.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Version description. You can enter up to 50 characters. This field can be used to fill in the usage scenario of this version.</p>
                     * @param _description <p>Version description. You can enter up to 50 characters. This field can be used to fill in the usage scenario of this version.</p>
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
                     * 获取<p>The source version ID on which the new version is based. The new version will be derived from the configuration of this source version. This field is optional. If not specified, it defaults to the version currently in effect in the current production environment as the source version.</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     * @return SourceVersion <p>The source version ID on which the new version is based. The new version will be derived from the configuration of this source version. This field is optional. If not specified, it defaults to the version currently in effect in the current production environment as the source version.</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     * 
                     */
                    std::string GetSourceVersion() const;

                    /**
                     * 设置<p>The source version ID on which the new version is based. The new version will be derived from the configuration of this source version. This field is optional. If not specified, it defaults to the version currently in effect in the current production environment as the source version.</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     * @param _sourceVersion <p>The source version ID on which the new version is based. The new version will be derived from the configuration of this source version. This field is optional. If not specified, it defaults to the version currently in effect in the current production environment as the source version.</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
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
                     * <p>Zone ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>ID of the configuration group for which to create a new version. You can obtain the complete environment information through the environment information interface (DescribeEnvironments). The environment information contains the configuration group ID of each configuration group type.</p><p>For parameter values, see the return value <code>EnvInfos</code> of <a href="https://www.tencentcloud.com/document/api/1552/101862?from_cn_redirect=1">DescribeEnvironments</a>.</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>Configuration content to be imported, which is required to be in the JSON format and encoded in the UTF-8 mode. For the configuration file content, refer to the example below and the <a href="https://www.tencentcloud.com/document/product/1552/125342?from_cn_redirect=1">configuration group syntax explanation</a>.</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>Version description. You can enter up to 50 characters. This field can be used to fill in the usage scenario of this version.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>The source version ID on which the new version is based. The new version will be derived from the configuration of this source version. This field is optional. If not specified, it defaults to the version currently in effect in the current production environment as the source version.</p><p>For reference:</p><ul><li><a href="https://www.tencentcloud.com/document/api/1552/101867?from_cn_redirect=1">CreateConfigGroupVersion</a> return value <code>VersionId</code></li><li><a href="https://www.tencentcloud.com/document/api/1552/101864?from_cn_redirect=1">DescribeConfigGroupVersions</a> return value <code>ConfigGroupVersionInfos</code></li></ul>
                     */
                    std::string m_sourceVersion;
                    bool m_sourceVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATECONFIGGROUPVERSIONREQUEST_H_
