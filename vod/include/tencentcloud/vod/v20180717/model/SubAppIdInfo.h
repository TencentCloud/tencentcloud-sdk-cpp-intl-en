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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SUBAPPIDINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SUBAPPIDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Sub-application information.
                */
                class SubAppIdInfo : public AbstractModel
                {
                public:
                    SubAppIdInfo();
                    ~SubAppIdInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subapplication ID.
                     * @return SubAppId Subapplication ID.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置Subapplication ID.
                     * @param _subAppId Subapplication ID.
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Subapplication name.
                     * @return SubAppIdName Subapplication name.
                     * 
                     */
                    std::string GetSubAppIdName() const;

                    /**
                     * 设置Subapplication name.
                     * @param _subAppIdName Subapplication name.
                     * 
                     */
                    void SetSubAppIdName(const std::string& _subAppIdName);

                    /**
                     * 判断参数 SubAppIdName 是否已赋值
                     * @return SubAppIdName 是否已赋值
                     * 
                     */
                    bool SubAppIdNameHasBeenSet() const;

                    /**
                     * 获取Sub-application description.
                     * @return Description Sub-application description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Sub-application description.
                     * @param _description Sub-application description.
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
                     * 获取Subapplication creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Subapplication creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Subapplication creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _createTime Subapplication creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Subapplication status. Valid values:
<li>On: enabled;</li>
<li>Off: disabled</li>
<li>Destroying: Being destroyed.</li>
<li>Destroyed: completion of destruction.</li>
                     * @return Status Subapplication status. Valid values:
<li>On: enabled;</li>
<li>Off: disabled</li>
<li>Destroying: Being destroyed.</li>
<li>Destroyed: completion of destruction.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Subapplication status. Valid values:
<li>On: enabled;</li>
<li>Off: disabled</li>
<li>Destroying: Being destroyed.</li>
<li>Destroyed: completion of destruction.</li>
                     * @param _status Subapplication status. Valid values:
<li>On: enabled;</li>
<li>Off: disabled</li>
<li>Destroying: Being destroyed.</li>
<li>Destroyed: completion of destruction.</li>
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
                     * 获取Subapplication name (this field is not recommended; use the new subapplication name field SubAppIdName instead).
                     * @return Name Subapplication name (this field is not recommended; use the new subapplication name field SubAppIdName instead).
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Subapplication name (this field is not recommended; use the new subapplication name field SubAppIdName instead).
                     * @param _name Subapplication name (this field is not recommended; use the new subapplication name field SubAppIdName instead).
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
                     * 获取Application mode. Valid values:
- fileid: FileID mode only
- - fileid+path: FileID & Path mode
Leave empty to select FileID-only mode by default.
                     * @return Mode Application mode. Valid values:
- fileid: FileID mode only
- - fileid+path: FileID & Path mode
Leave empty to select FileID-only mode by default.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Application mode. Valid values:
- fileid: FileID mode only
- - fileid+path: FileID & Path mode
Leave empty to select FileID-only mode by default.
                     * @param _mode Application mode. Valid values:
- fileid: FileID mode only
- - fileid+path: FileID & Path mode
Leave empty to select FileID-only mode by default.
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
                     * 获取Storage region where the sub-application is enabled.
                     * @return StorageRegions Storage region where the sub-application is enabled.
                     * 
                     */
                    std::vector<std::string> GetStorageRegions() const;

                    /**
                     * 设置Storage region where the sub-application is enabled.
                     * @param _storageRegions Storage region where the sub-application is enabled.
                     * 
                     */
                    void SetStorageRegions(const std::vector<std::string>& _storageRegions);

                    /**
                     * 判断参数 StorageRegions 是否已赋值
                     * @return StorageRegions 是否已赋值
                     * 
                     */
                    bool StorageRegionsHasBeenSet() const;

                    /**
                     * 获取tag bound to the sub-application.
                     * @return Tags tag bound to the sub-application.
                     * 
                     */
                    std::vector<ResourceTag> GetTags() const;

                    /**
                     * 设置tag bound to the sub-application.
                     * @param _tags tag bound to the sub-application.
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
                     * Subapplication ID.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Subapplication name.
                     */
                    std::string m_subAppIdName;
                    bool m_subAppIdNameHasBeenSet;

                    /**
                     * Sub-application description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Subapplication creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Subapplication status. Valid values:
<li>On: enabled;</li>
<li>Off: disabled</li>
<li>Destroying: Being destroyed.</li>
<li>Destroyed: completion of destruction.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Subapplication name (this field is not recommended; use the new subapplication name field SubAppIdName instead).
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Application mode. Valid values:
- fileid: FileID mode only
- - fileid+path: FileID & Path mode
Leave empty to select FileID-only mode by default.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Storage region where the sub-application is enabled.
                     */
                    std::vector<std::string> m_storageRegions;
                    bool m_storageRegionsHasBeenSet;

                    /**
                     * tag bound to the sub-application.
                     */
                    std::vector<ResourceTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SUBAPPIDINFO_H_
