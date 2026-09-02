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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVIRUS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVIRUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Virus info of an image
                */
                class ImageVirus : public AbstractModel
                {
                public:
                    ImageVirus();
                    ~ImageVirus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Trojan path</p>
                     * @return Path <p>Trojan path</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Trojan path</p>
                     * @param _path <p>Trojan path</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>Risk level</p>
                     * @return RiskLevel <p>Risk level</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level</p>
                     * @param _riskLevel <p>Risk level</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>Category</p>
                     * @return Category <p>Category</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>Category</p>
                     * @param _category <p>Category</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>Trojan name</p>
                     * @return VirusName <p>Trojan name</p>
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置<p>Trojan name</p>
                     * @param _virusName <p>Trojan name</p>
                     * 
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取<p>Trojan Tag</p>
                     * @return Tags <p>Trojan Tag</p>
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置<p>Trojan Tag</p>
                     * @param _tags <p>Trojan Tag</p>
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>File type</p>
                     * @return FileType <p>File type</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>File type</p>
                     * @param _fileType <p>File type</p>
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>File name.</p>
                     * @return FileName <p>File name.</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>File name.</p>
                     * @param _fileName <p>File name.</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>File md5</p>
                     * @return FileMd5 <p>File md5</p>
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置<p>File md5</p>
                     * @param _fileMd5 <p>File md5</p>
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取<p>File size</p>
                     * @return FileSize <p>File size</p>
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置<p>File size</p>
                     * @param _fileSize <p>File size</p>
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取<p>First detection time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return FirstDetectedTime <p>First detection time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetFirstDetectedTime() const;

                    /**
                     * 设置<p>First detection time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _firstDetectedTime <p>First detection time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetFirstDetectedTime(const std::string& _firstDetectedTime);

                    /**
                     * 判断参数 FirstDetectedTime 是否已赋值
                     * @return FirstDetectedTime 是否已赋值
                     * 
                     */
                    bool FirstDetectedTimeHasBeenSet() const;

                    /**
                     * 获取<p>Last detection time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @return LatestDetectedTime <p>Last detection time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetLatestDetectedTime() const;

                    /**
                     * 设置<p>Last detection time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * @param _latestDetectedTime <p>Last detection time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetLatestDetectedTime(const std::string& _latestDetectedTime);

                    /**
                     * 判断参数 LatestDetectedTime 是否已赋值
                     * @return LatestDetectedTime 是否已赋值
                     * 
                     */
                    bool LatestDetectedTimeHasBeenSet() const;

                    /**
                     * 获取<p>Image ID.</p>
                     * @return ImageId <p>Image ID.</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>Image ID.</p>
                     * @param _imageId <p>Image ID.</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>Associated account name</p>
                     * @return OwnerAccountName <p>Associated account name</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>Associated account name</p>
                     * @param _ownerAccountName <p>Associated account name</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>Associated account uin</p>
                     * @return OwnerUin <p>Associated account uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>Associated account uin</p>
                     * @param _ownerUin <p>Associated account uin</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>appid of the associated account</p>
                     * @return OwnerAppId <p>appid of the associated account</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>appid of the associated account</p>
                     * @param _ownerAppId <p>appid of the associated account</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Detection platform</p>
                     * @return CheckPlatform <p>Detection platform</p>
                     * 
                     */
                    std::string GetCheckPlatform() const;

                    /**
                     * 设置<p>Detection platform</p>
                     * @param _checkPlatform <p>Detection platform</p>
                     * 
                     */
                    void SetCheckPlatform(const std::string& _checkPlatform);

                    /**
                     * 判断参数 CheckPlatform 是否已赋值
                     * @return CheckPlatform 是否已赋值
                     * 
                     */
                    bool CheckPlatformHasBeenSet() const;

                    /**
                     * 获取<p>Numbers of affected images</p>
                     * @return AffectImageCount <p>Numbers of affected images</p>
                     * 
                     */
                    uint64_t GetAffectImageCount() const;

                    /**
                     * 设置<p>Numbers of affected images</p>
                     * @param _affectImageCount <p>Numbers of affected images</p>
                     * 
                     */
                    void SetAffectImageCount(const uint64_t& _affectImageCount);

                    /**
                     * 判断参数 AffectImageCount 是否已赋值
                     * @return AffectImageCount 是否已赋值
                     * 
                     */
                    bool AffectImageCountHasBeenSet() const;

                    /**
                     * 获取<p>Image layer id</p>
                     * @return LayerId <p>Image layer id</p>
                     * 
                     */
                    std::string GetLayerId() const;

                    /**
                     * 设置<p>Image layer id</p>
                     * @param _layerId <p>Image layer id</p>
                     * 
                     */
                    void SetLayerId(const std::string& _layerId);

                    /**
                     * 判断参数 LayerId 是否已赋值
                     * @return LayerId 是否已赋值
                     * 
                     */
                    bool LayerIdHasBeenSet() const;

                    /**
                     * 获取<p>Trojan record id</p>
                     * @return Id <p>Trojan record id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>Trojan record id</p>
                     * @param _id <p>Trojan record id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Trojan handling suggestions</p>
                     * @return Suggestion <p>Trojan handling suggestions</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>Trojan handling suggestions</p>
                     * @param _suggestion <p>Trojan handling suggestions</p>
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取<p>Trojan description</p>
                     * @return Description <p>Trojan description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Trojan description</p>
                     * @param _description <p>Trojan description</p>
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
                     * 获取<p>Trojan horse type</p>
                     * @return VirusType <p>Trojan horse type</p>
                     * 
                     */
                    std::string GetVirusType() const;

                    /**
                     * 设置<p>Trojan horse type</p>
                     * @param _virusType <p>Trojan horse type</p>
                     * 
                     */
                    void SetVirusType(const std::string& _virusType);

                    /**
                     * 判断参数 VirusType 是否已赋值
                     * @return VirusType 是否已赋值
                     * 
                     */
                    bool VirusTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Trojan path</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>Risk level</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Category</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>Trojan name</p>
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * <p>Trojan Tag</p>
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>File type</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>File name.</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>File md5</p>
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * <p>File size</p>
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>First detection time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_firstDetectedTime;
                    bool m_firstDetectedTimeHasBeenSet;

                    /**
                     * <p>Last detection time</p><p>Parameter format: YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_latestDetectedTime;
                    bool m_latestDetectedTimeHasBeenSet;

                    /**
                     * <p>Image ID.</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>Associated account name</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>Associated account uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>appid of the associated account</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>Detection platform</p>
                     */
                    std::string m_checkPlatform;
                    bool m_checkPlatformHasBeenSet;

                    /**
                     * <p>Numbers of affected images</p>
                     */
                    uint64_t m_affectImageCount;
                    bool m_affectImageCountHasBeenSet;

                    /**
                     * <p>Image layer id</p>
                     */
                    std::string m_layerId;
                    bool m_layerIdHasBeenSet;

                    /**
                     * <p>Trojan record id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Trojan handling suggestions</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>Trojan description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Trojan horse type</p>
                     */
                    std::string m_virusType;
                    bool m_virusTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVIRUS_H_
