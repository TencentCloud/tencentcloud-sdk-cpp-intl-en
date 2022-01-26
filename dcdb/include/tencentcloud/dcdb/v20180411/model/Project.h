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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_PROJECT_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_PROJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * Project description
                */
                class Project : public AbstractModel
                {
                public:
                    Project();
                    ~Project() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param ProjectId Project ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取The UIN of the resource owner (root account)
                     * @return OwnerUin The UIN of the resource owner (root account)
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 设置The UIN of the resource owner (root account)
                     * @param OwnerUin The UIN of the resource owner (root account)
                     */
                    void SetOwnerUin(const int64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Application ID
                     * @return AppId Application ID
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Application ID
                     * @param AppId Application ID
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Project name
                     * @return Name Project name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Project name
                     * @param Name Project name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Creator UIN
                     * @return CreatorUin Creator UIN
                     */
                    int64_t GetCreatorUin() const;

                    /**
                     * 设置Creator UIN
                     * @param CreatorUin Creator UIN
                     */
                    void SetCreatorUin(const int64_t& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取Source platform
                     * @return SrcPlat Source platform
                     */
                    std::string GetSrcPlat() const;

                    /**
                     * 设置Source platform
                     * @param SrcPlat Source platform
                     */
                    void SetSrcPlat(const std::string& _srcPlat);

                    /**
                     * 判断参数 SrcPlat 是否已赋值
                     * @return SrcPlat 是否已赋值
                     */
                    bool SrcPlatHasBeenSet() const;

                    /**
                     * 获取Source APPID
                     * @return SrcAppId Source APPID
                     */
                    int64_t GetSrcAppId() const;

                    /**
                     * 设置Source APPID
                     * @param SrcAppId Source APPID
                     */
                    void SetSrcAppId(const int64_t& _srcAppId);

                    /**
                     * 判断参数 SrcAppId 是否已赋值
                     * @return SrcAppId 是否已赋值
                     */
                    bool SrcAppIdHasBeenSet() const;

                    /**
                     * 获取Project status. Valid values: `0` (normal), `-1` (disabled), `3` (default project).
                     * @return Status Project status. Valid values: `0` (normal), `-1` (disabled), `3` (default project).
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Project status. Valid values: `0` (normal), `-1` (disabled), `3` (default project).
                     * @param Status Project status. Valid values: `0` (normal), `-1` (disabled), `3` (default project).
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Whether it is the default project. Valid values: `1` (yes), `0` (no).
                     * @return IsDefault Whether it is the default project. Valid values: `1` (yes), `0` (no).
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置Whether it is the default project. Valid values: `1` (yes), `0` (no).
                     * @param IsDefault Whether it is the default project. Valid values: `1` (yes), `0` (no).
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Info Description
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置Description
                     * @param Info Description
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * The UIN of the resource owner (root account)
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Application ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Project name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Creator UIN
                     */
                    int64_t m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * Source platform
                     */
                    std::string m_srcPlat;
                    bool m_srcPlatHasBeenSet;

                    /**
                     * Source APPID
                     */
                    int64_t m_srcAppId;
                    bool m_srcAppIdHasBeenSet;

                    /**
                     * Project status. Valid values: `0` (normal), `-1` (disabled), `3` (default project).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether it is the default project. Valid values: `1` (yes), `0` (no).
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_PROJECT_H_
