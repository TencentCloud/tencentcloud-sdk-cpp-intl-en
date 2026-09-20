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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIABASICINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIABASICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaSourceData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Basic information of an on-demand media file
                */
                class MediaBasicInfo : public AbstractModel
                {
                public:
                    MediaBasicInfo();
                    ~MediaBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media file name.
                     * @return Name Media file name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Media file name.
                     * @param _name Media file name.
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
                     * 获取Media file description.
                     * @return Description Media file description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Media file description.
                     * @param _description Media file description.
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
                     * 获取Media file creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Media file creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Media file creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _createTime Media file creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取Latest update time of media file (operations such as modifying video properties and initiating video processing will trigger update of media file information) in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return UpdateTime Latest update time of media file (operations such as modifying video properties and initiating video processing will trigger update of media file information) in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Latest update time of media file (operations such as modifying video properties and initiating video processing will trigger update of media file information) in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _updateTime Latest update time of media file (operations such as modifying video properties and initiating video processing will trigger update of media file information) in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Expiry date of the media file in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). After expiry, the media file and its related resources (transcoding results, sprites) will be permanently deleted. "9999-12-31T23:59:59Z" means it never expires.
                     * @return ExpireTime Expiry date of the media file in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). After expiry, the media file and its related resources (transcoding results, sprites) will be permanently deleted. "9999-12-31T23:59:59Z" means it never expires.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiry date of the media file in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). After expiry, the media file and its related resources (transcoding results, sprites) will be permanently deleted. "9999-12-31T23:59:59Z" means it never expires.
                     * @param _expireTime Expiry date of the media file in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). After expiry, the media file and its related resources (transcoding results, sprites) will be permanently deleted. "9999-12-31T23:59:59Z" means it never expires.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Category ID of the media file.
                     * @return ClassId Category ID of the media file.
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID of the media file.
                     * @param _classId Category ID of the media file.
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取Category name of the media file.
                     * @return ClassName Category name of the media file.
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置Category name of the media file.
                     * @param _className Category name of the media file.
                     * 
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     * 
                     */
                    bool ClassNameHasBeenSet() const;

                    /**
                     * 获取Category path of the media file. Categories are separated by "-", for example "New first-level category - New secondary category".
                     * @return ClassPath Category path of the media file. Categories are separated by "-", for example "New first-level category - New secondary category".
                     * 
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置Category path of the media file. Categories are separated by "-", for example "New first-level category - New secondary category".
                     * @param _classPath Category path of the media file. Categories are separated by "-", for example "New first-level category - New secondary category".
                     * 
                     */
                    void SetClassPath(const std::string& _classPath);

                    /**
                     * 判断参数 ClassPath 是否已赋值
                     * @return ClassPath 是否已赋值
                     * 
                     */
                    bool ClassPathHasBeenSet() const;

                    /**
                     * 获取Thumbnail URL of the media file.
                     * @return CoverUrl Thumbnail URL of the media file.
                     * 
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置Thumbnail URL of the media file.
                     * @param _coverUrl Thumbnail URL of the media file.
                     * 
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     * 
                     */
                    bool CoverUrlHasBeenSet() const;

                    /**
                     * 获取Muxing format of the media file, such as mp4 and flv.
                     * @return Type Muxing format of the media file, such as mp4 and flv.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Muxing format of the media file, such as mp4 and flv.
                     * @param _type Muxing format of the media file, such as mp4 and flv.
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
                     * 获取URL address of the original media file.
                     * @return MediaUrl URL address of the original media file.
                     * 
                     */
                    std::string GetMediaUrl() const;

                    /**
                     * 设置URL address of the original media file.
                     * @param _mediaUrl URL address of the original media file.
                     * 
                     */
                    void SetMediaUrl(const std::string& _mediaUrl);

                    /**
                     * 判断参数 MediaUrl 是否已赋值
                     * @return MediaUrl 是否已赋值
                     * 
                     */
                    bool MediaUrlHasBeenSet() const;

                    /**
                     * 获取Source information of the media file.
                     * @return SourceInfo Source information of the media file.
                     * 
                     */
                    MediaSourceData GetSourceInfo() const;

                    /**
                     * 设置Source information of the media file.
                     * @param _sourceInfo Source information of the media file.
                     * 
                     */
                    void SetSourceInfo(const MediaSourceData& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                    /**
                     * 获取Storage region of media files, for example, ap-chongqing. See region list.
                     * @return StorageRegion Storage region of media files, for example, ap-chongqing. See region list.
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置Storage region of media files, for example, ap-chongqing. See region list.
                     * @param _storageRegion Storage region of media files, for example, ap-chongqing. See region list.
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
                     * 获取Media storage path.
                     * @return StoragePath Media storage path.
                     * 
                     */
                    std::string GetStoragePath() const;

                    /**
                     * 设置Media storage path.
                     * @param _storagePath Media storage path.
                     * 
                     */
                    void SetStoragePath(const std::string& _storagePath);

                    /**
                     * 判断参数 StoragePath 是否已赋值
                     * @return StoragePath 是否已赋值
                     * 
                     */
                    bool StoragePathHasBeenSet() const;

                    /**
                     * 获取Tag information of a media file.
                     * @return TagSet Tag information of a media file.
                     * 
                     */
                    std::vector<std::string> GetTagSet() const;

                    /**
                     * 设置Tag information of a media file.
                     * @param _tagSet Tag information of a media file.
                     * 
                     */
                    void SetTagSet(const std::vector<std::string>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Unique identifier of the live streaming recording file.
                     * @return Vid Unique identifier of the live streaming recording file.
                     * 
                     */
                    std::string GetVid() const;

                    /**
                     * 设置Unique identifier of the live streaming recording file.
                     * @param _vid Unique identifier of the live streaming recording file.
                     * 
                     */
                    void SetVid(const std::string& _vid);

                    /**
                     * 判断参数 Vid 是否已赋值
                     * @return Vid 是否已赋值
                     * 
                     */
                    bool VidHasBeenSet() const;

                    /**
                     * 获取File type:
<li>Video: video file</li>
<li>Audio: audio file</li>
<li>Image: image file</li>
                     * @return Category File type:
<li>Video: video file</li>
<li>Audio: audio file</li>
<li>Image: image file</li>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置File type:
<li>Video: video file</li>
<li>Audio: audio file</li>
<li>Image: image file</li>
                     * @param _category File type:
<li>Video: video file</li>
<li>Audio: audio file</li>
<li>Image: image file</li>
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
                     * 获取File status: Normal: normal, Forbidden: blocked.
                     * @return Status File status: Normal: normal, Forbidden: blocked.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置File status: Normal: normal, Forbidden: blocked.
                     * @param _status File status: Normal: normal, Forbidden: blocked.
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
                     * 获取Storage class of a media file
<li> STANDARD: standard storage.</li>
<li> STANDARD_IA: Infrequent storage.</li>
<li> ARCHIVE: Archive storage.</li>
<li> DEEP_ARCHIVE: Deep archive storage.</li>
                     * @return StorageClass Storage class of a media file
<li> STANDARD: standard storage.</li>
<li> STANDARD_IA: Infrequent storage.</li>
<li> ARCHIVE: Archive storage.</li>
<li> DEEP_ARCHIVE: Deep archive storage.</li>
                     * 
                     */
                    std::string GetStorageClass() const;

                    /**
                     * 设置Storage class of a media file
<li> STANDARD: standard storage.</li>
<li> STANDARD_IA: Infrequent storage.</li>
<li> ARCHIVE: Archive storage.</li>
<li> DEEP_ARCHIVE: Deep archive storage.</li>
                     * @param _storageClass Storage class of a media file
<li> STANDARD: standard storage.</li>
<li> STANDARD_IA: Infrequent storage.</li>
<li> ARCHIVE: Archive storage.</li>
<li> DEEP_ARCHIVE: Deep archive storage.</li>
                     * 
                     */
                    void SetStorageClass(const std::string& _storageClass);

                    /**
                     * 判断参数 StorageClass 是否已赋值
                     * @return StorageClass 是否已赋值
                     * 
                     */
                    bool StorageClassHasBeenSet() const;

                private:

                    /**
                     * Media file name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Media file description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Media file creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Latest update time of media file (operations such as modifying video properties and initiating video processing will trigger update of media file information) in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Expiry date of the media file in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). After expiry, the media file and its related resources (transcoding results, sprites) will be permanently deleted. "9999-12-31T23:59:59Z" means it never expires.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Category ID of the media file.
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * Category name of the media file.
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * Category path of the media file. Categories are separated by "-", for example "New first-level category - New secondary category".
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

                    /**
                     * Thumbnail URL of the media file.
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                    /**
                     * Muxing format of the media file, such as mp4 and flv.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * URL address of the original media file.
                     */
                    std::string m_mediaUrl;
                    bool m_mediaUrlHasBeenSet;

                    /**
                     * Source information of the media file.
                     */
                    MediaSourceData m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                    /**
                     * Storage region of media files, for example, ap-chongqing. See region list.
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * Media storage path.
                     */
                    std::string m_storagePath;
                    bool m_storagePathHasBeenSet;

                    /**
                     * Tag information of a media file.
                     */
                    std::vector<std::string> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Unique identifier of the live streaming recording file.
                     */
                    std::string m_vid;
                    bool m_vidHasBeenSet;

                    /**
                     * File type:
<li>Video: video file</li>
<li>Audio: audio file</li>
<li>Image: image file</li>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * File status: Normal: normal, Forbidden: blocked.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Storage class of a media file
<li> STANDARD: standard storage.</li>
<li> STANDARD_IA: Infrequent storage.</li>
<li> ARCHIVE: Archive storage.</li>
<li> DEEP_ARCHIVE: Deep archive storage.</li>
                     */
                    std::string m_storageClass;
                    bool m_storageClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIABASICINFO_H_
