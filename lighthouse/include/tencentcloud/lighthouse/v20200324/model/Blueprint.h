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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINT_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Image information.
                */
                class Blueprint : public AbstractModel
                {
                public:
                    Blueprint();
                    ~Blueprint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image ID, which is the unique identifier of `Blueprint`.
                     * @return BlueprintId Image ID, which is the unique identifier of `Blueprint`.
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置Image ID, which is the unique identifier of `Blueprint`.
                     * @param BlueprintId Image ID, which is the unique identifier of `Blueprint`.
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取Image title to be displayed.
                     * @return DisplayTitle Image title to be displayed.
                     */
                    std::string GetDisplayTitle() const;

                    /**
                     * 设置Image title to be displayed.
                     * @param DisplayTitle Image title to be displayed.
                     */
                    void SetDisplayTitle(const std::string& _displayTitle);

                    /**
                     * 判断参数 DisplayTitle 是否已赋值
                     * @return DisplayTitle 是否已赋值
                     */
                    bool DisplayTitleHasBeenSet() const;

                    /**
                     * 获取Image version to be displayed.
                     * @return DisplayVersion Image version to be displayed.
                     */
                    std::string GetDisplayVersion() const;

                    /**
                     * 设置Image version to be displayed.
                     * @param DisplayVersion Image version to be displayed.
                     */
                    void SetDisplayVersion(const std::string& _displayVersion);

                    /**
                     * 判断参数 DisplayVersion 是否已赋值
                     * @return DisplayVersion 是否已赋值
                     */
                    bool DisplayVersionHasBeenSet() const;

                    /**
                     * 获取Image description information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Description Image description information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Image description information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param Description Image description information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取OS name.
                     * @return OsName OS name.
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置OS name.
                     * @param OsName OS name.
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取OS type.
                     * @return Platform OS type.
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置OS type.
                     * @param Platform OS type.
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取OS type, such as LINUX_UNIX and WINDOWS.
                     * @return PlatformType OS type, such as LINUX_UNIX and WINDOWS.
                     */
                    std::string GetPlatformType() const;

                    /**
                     * 设置OS type, such as LINUX_UNIX and WINDOWS.
                     * @param PlatformType OS type, such as LINUX_UNIX and WINDOWS.
                     */
                    void SetPlatformType(const std::string& _platformType);

                    /**
                     * 判断参数 PlatformType 是否已赋值
                     * @return PlatformType 是否已赋值
                     */
                    bool PlatformTypeHasBeenSet() const;

                    /**
                     * 获取Image type, such as APP_OS, PURE_OS, and PRIVATE.
                     * @return BlueprintType Image type, such as APP_OS, PURE_OS, and PRIVATE.
                     */
                    std::string GetBlueprintType() const;

                    /**
                     * 设置Image type, such as APP_OS, PURE_OS, and PRIVATE.
                     * @param BlueprintType Image type, such as APP_OS, PURE_OS, and PRIVATE.
                     */
                    void SetBlueprintType(const std::string& _blueprintType);

                    /**
                     * 判断参数 BlueprintType 是否已赋值
                     * @return BlueprintType 是否已赋值
                     */
                    bool BlueprintTypeHasBeenSet() const;

                    /**
                     * 获取Image picture URL.
                     * @return ImageUrl Image picture URL.
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置Image picture URL.
                     * @param ImageUrl Image picture URL.
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取System disk size required by image in GB.
                     * @return RequiredSystemDiskSize System disk size required by image in GB.
                     */
                    int64_t GetRequiredSystemDiskSize() const;

                    /**
                     * 设置System disk size required by image in GB.
                     * @param RequiredSystemDiskSize System disk size required by image in GB.
                     */
                    void SetRequiredSystemDiskSize(const int64_t& _requiredSystemDiskSize);

                    /**
                     * 判断参数 RequiredSystemDiskSize 是否已赋值
                     * @return RequiredSystemDiskSize 是否已赋值
                     */
                    bool RequiredSystemDiskSizeHasBeenSet() const;

                    /**
                     * 获取Image status.
                     * @return BlueprintState Image status.
                     */
                    std::string GetBlueprintState() const;

                    /**
                     * 设置Image status.
                     * @param BlueprintState Image status.
                     */
                    void SetBlueprintState(const std::string& _blueprintState);

                    /**
                     * 判断参数 BlueprintState 是否已赋值
                     * @return BlueprintState 是否已赋值
                     */
                    bool BlueprintStateHasBeenSet() const;

                    /**
                     * 获取Creation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedTime Creation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreatedTime Creation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Image name.
                     * @return BlueprintName Image name.
                     */
                    std::string GetBlueprintName() const;

                    /**
                     * 设置Image name.
                     * @param BlueprintName Image name.
                     */
                    void SetBlueprintName(const std::string& _blueprintName);

                    /**
                     * 判断参数 BlueprintName 是否已赋值
                     * @return BlueprintName 是否已赋值
                     */
                    bool BlueprintNameHasBeenSet() const;

                    /**
                     * 获取Whether the image supports automation tools.
                     * @return SupportAutomationTools Whether the image supports automation tools.
                     */
                    bool GetSupportAutomationTools() const;

                    /**
                     * 设置Whether the image supports automation tools.
                     * @param SupportAutomationTools Whether the image supports automation tools.
                     */
                    void SetSupportAutomationTools(const bool& _supportAutomationTools);

                    /**
                     * 判断参数 SupportAutomationTools 是否已赋值
                     * @return SupportAutomationTools 是否已赋值
                     */
                    bool SupportAutomationToolsHasBeenSet() const;

                    /**
                     * 获取Memory size required by image in GB.
                     * @return RequiredMemorySize Memory size required by image in GB.
                     */
                    int64_t GetRequiredMemorySize() const;

                    /**
                     * 设置Memory size required by image in GB.
                     * @param RequiredMemorySize Memory size required by image in GB.
                     */
                    void SetRequiredMemorySize(const int64_t& _requiredMemorySize);

                    /**
                     * 判断参数 RequiredMemorySize 是否已赋值
                     * @return RequiredMemorySize 是否已赋值
                     */
                    bool RequiredMemorySizeHasBeenSet() const;

                    /**
                     * 获取ID of the Lighthouse image shared from a CVM image
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ImageId ID of the Lighthouse image shared from a CVM image
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置ID of the Lighthouse image shared from a CVM image
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ImageId ID of the Lighthouse image shared from a CVM image
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取URL of official website of the open-source project
                     * @return CommunityUrl URL of official website of the open-source project
                     */
                    std::string GetCommunityUrl() const;

                    /**
                     * 设置URL of official website of the open-source project
                     * @param CommunityUrl URL of official website of the open-source project
                     */
                    void SetCommunityUrl(const std::string& _communityUrl);

                    /**
                     * 判断参数 CommunityUrl 是否已赋值
                     * @return CommunityUrl 是否已赋值
                     */
                    bool CommunityUrlHasBeenSet() const;

                    /**
                     * 获取Guide documentation URL
                     * @return GuideUrl Guide documentation URL
                     */
                    std::string GetGuideUrl() const;

                    /**
                     * 设置Guide documentation URL
                     * @param GuideUrl Guide documentation URL
                     */
                    void SetGuideUrl(const std::string& _guideUrl);

                    /**
                     * 判断参数 GuideUrl 是否已赋值
                     * @return GuideUrl 是否已赋值
                     */
                    bool GuideUrlHasBeenSet() const;

                    /**
                     * 获取Array of IDs of scenes associated with an image
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SceneIdSet Array of IDs of scenes associated with an image
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetSceneIdSet() const;

                    /**
                     * 设置Array of IDs of scenes associated with an image
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param SceneIdSet Array of IDs of scenes associated with an image
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSceneIdSet(const std::vector<std::string>& _sceneIdSet);

                    /**
                     * 判断参数 SceneIdSet 是否已赋值
                     * @return SceneIdSet 是否已赋值
                     */
                    bool SceneIdSetHasBeenSet() const;

                    /**
                     * 获取Docker version.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return DockerVersion Docker version.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDockerVersion() const;

                    /**
                     * 设置Docker version.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param DockerVersion Docker version.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDockerVersion(const std::string& _dockerVersion);

                    /**
                     * 判断参数 DockerVersion 是否已赋值
                     * @return DockerVersion 是否已赋值
                     */
                    bool DockerVersionHasBeenSet() const;

                private:

                    /**
                     * Image ID, which is the unique identifier of `Blueprint`.
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * Image title to be displayed.
                     */
                    std::string m_displayTitle;
                    bool m_displayTitleHasBeenSet;

                    /**
                     * Image version to be displayed.
                     */
                    std::string m_displayVersion;
                    bool m_displayVersionHasBeenSet;

                    /**
                     * Image description information.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * OS name.
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * OS type.
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * OS type, such as LINUX_UNIX and WINDOWS.
                     */
                    std::string m_platformType;
                    bool m_platformTypeHasBeenSet;

                    /**
                     * Image type, such as APP_OS, PURE_OS, and PRIVATE.
                     */
                    std::string m_blueprintType;
                    bool m_blueprintTypeHasBeenSet;

                    /**
                     * Image picture URL.
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * System disk size required by image in GB.
                     */
                    int64_t m_requiredSystemDiskSize;
                    bool m_requiredSystemDiskSizeHasBeenSet;

                    /**
                     * Image status.
                     */
                    std::string m_blueprintState;
                    bool m_blueprintStateHasBeenSet;

                    /**
                     * Creation time according to ISO 8601 standard. UTC time is used. 
Format: YYYY-MM-DDThh:mm:ssZ.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Image name.
                     */
                    std::string m_blueprintName;
                    bool m_blueprintNameHasBeenSet;

                    /**
                     * Whether the image supports automation tools.
                     */
                    bool m_supportAutomationTools;
                    bool m_supportAutomationToolsHasBeenSet;

                    /**
                     * Memory size required by image in GB.
                     */
                    int64_t m_requiredMemorySize;
                    bool m_requiredMemorySizeHasBeenSet;

                    /**
                     * ID of the Lighthouse image shared from a CVM image
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * URL of official website of the open-source project
                     */
                    std::string m_communityUrl;
                    bool m_communityUrlHasBeenSet;

                    /**
                     * Guide documentation URL
                     */
                    std::string m_guideUrl;
                    bool m_guideUrlHasBeenSet;

                    /**
                     * Array of IDs of scenes associated with an image
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_sceneIdSet;
                    bool m_sceneIdSetHasBeenSet;

                    /**
                     * Docker version.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_dockerVersion;
                    bool m_dockerVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINT_H_
