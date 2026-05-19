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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATESUBAPPIDREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATESUBAPPIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateSubAppId request structure.
                */
                class CreateSubAppIdRequest : public AbstractModel
                {
                public:
                    CreateSubAppIdRequest();
                    ~CreateSubAppIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Application name, length limited to 40 characters.</p>
                     * @return Name <p>Application name, length limited to 40 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Application name, length limited to 40 characters.</p>
                     * @param _name <p>Application name, length limited to 40 characters.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Application description, length limited to 300 characters. If left blank, the application description is empty by default.</p>
                     * @return Description <p>Application description, length limited to 300 characters. If left blank, the application description is empty by default.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Application description, length limited to 300 characters. If left blank, the application description is empty by default.</p>
                     * @param _description <p>Application description, length limited to 300 characters. If left blank, the application description is empty by default.</p>
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
                     * 获取<p>App type. Valid values: <li>AllInOne: integrated;</li><li>Professional: pro edition.</li>Default value: AllInOne.</p>
                     * @return Type <p>App type. Valid values: <li>AllInOne: integrated;</li><li>Professional: pro edition.</li>Default value: AllInOne.</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>App type. Valid values: <li>AllInOne: integrated;</li><li>Professional: pro edition.</li>Default value: AllInOne.</p>
                     * @param _type <p>App type. Valid values: <li>AllInOne: integrated;</li><li>Professional: pro edition.</li>Default value: AllInOne.</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Mode of this application. Available values are:</p><ul><li>fileid: fileid mode only</li><li>fileid+path: fileid & path mode<br>Leave empty to select fileid mode by default</li></ul>
                     * @return Mode <p>Mode of this application. Available values are:</p><ul><li>fileid: fileid mode only</li><li>fileid+path: fileid & path mode<br>Leave empty to select fileid mode by default</li></ul>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>Mode of this application. Available values are:</p><ul><li>fileid: fileid mode only</li><li>fileid+path: fileid & path mode<br>Leave empty to select fileid mode by default</li></ul>
                     * @param _mode <p>Mode of this application. Available values are:</p><ul><li>fileid: fileid mode only</li><li>fileid+path: fileid & path mode<br>Leave empty to select fileid mode by default</li></ul>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>When Mode is fileid only, it is used to set the default storage region and is selectable.<br>When Mode is fileid+path, it is used to specify the storage region and is required.</p><p>For reference: <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1">Supported region list</a></p>
                     * @return StorageRegion <p>When Mode is fileid only, it is used to set the default storage region and is selectable.<br>When Mode is fileid+path, it is used to specify the storage region and is required.</p><p>For reference: <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1">Supported region list</a></p>
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置<p>When Mode is fileid only, it is used to set the default storage region and is selectable.<br>When Mode is fileid+path, it is used to specify the storage region and is required.</p><p>For reference: <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1">Supported region list</a></p>
                     * @param _storageRegion <p>When Mode is fileid only, it is used to set the default storage region and is selectable.<br>When Mode is fileid+path, it is used to specify the storage region and is required.</p><p>For reference: <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1">Supported region list</a></p>
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取<p>tag that needs to be bound to this application</p>
                     * @return Tags <p>tag that needs to be bound to this application</p>
                     * 
                     */
                    std::vector<ResourceTag> GetTags() const;

                    /**
                     * 设置<p>tag that needs to be bound to this application</p>
                     * @param _tags <p>tag that needs to be bound to this application</p>
                     * 
                     */
                    void SetTags(const std::vector<ResourceTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>Application name, length limited to 40 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Application description, length limited to 300 characters. If left blank, the application description is empty by default.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>App type. Valid values: <li>AllInOne: integrated;</li><li>Professional: pro edition.</li>Default value: AllInOne.</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Mode of this application. Available values are:</p><ul><li>fileid: fileid mode only</li><li>fileid+path: fileid & path mode<br>Leave empty to select fileid mode by default</li></ul>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>When Mode is fileid only, it is used to set the default storage region and is selectable.<br>When Mode is fileid+path, it is used to specify the storage region and is required.</p><p>For reference: <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1">Supported region list</a></p>
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * <p>tag that needs to be bound to this application</p>
                     */
                    std::vector<ResourceTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATESUBAPPIDREQUEST_H_
