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
                * Basic information of VOD media file
                */
                class MediaBasicInfo : public AbstractModel
                {
                public:
                    MediaBasicInfo();
                    ~MediaBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media filename.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Name Media filename.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Media filename.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Name Media filename.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Media file description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description Media file description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Media file description.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Description Media file description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Creation time of media file in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time of media file in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of media file in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CreateTime Creation time of media file in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last update time of media file (by an operation that triggers updating of media file information such as modifying video attributes or initiating video processing) in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Last update time of media file (by an operation that triggers updating of media file information such as modifying video attributes or initiating video processing) in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last update time of media file (by an operation that triggers updating of media file information such as modifying video attributes or initiating video processing) in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param UpdateTime Last update time of media file (by an operation that triggers updating of media file information such as modifying video attributes or initiating video processing) in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time of media file in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. `9999-12-31T23:59:59Z` means "never expire".
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ExpireTime Expiration time of media file in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. `9999-12-31T23:59:59Z` means "never expire".
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time of media file in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. `9999-12-31T23:59:59Z` means "never expire".
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ExpireTime Expiration time of media file in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. `9999-12-31T23:59:59Z` means "never expire".
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Category ID of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClassId Category ID of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ClassId Category ID of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取Category name of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClassName Category name of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置Category name of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ClassName Category name of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     */
                    bool ClassNameHasBeenSet() const;

                    /**
                     * 获取Category path to media file separated by "-", such as "new first-level category - new second-level category".
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ClassPath Category path to media file separated by "-", such as "new first-level category - new second-level category".
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置Category path to media file separated by "-", such as "new first-level category - new second-level category".
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ClassPath Category path to media file separated by "-", such as "new first-level category - new second-level category".
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetClassPath(const std::string& _classPath);

                    /**
                     * 判断参数 ClassPath 是否已赋值
                     * @return ClassPath 是否已赋值
                     */
                    bool ClassPathHasBeenSet() const;

                    /**
                     * 获取Cover image address of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CoverUrl Cover image address of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置Cover image address of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param CoverUrl Cover image address of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     */
                    bool CoverUrlHasBeenSet() const;

                    /**
                     * 获取Media file container, such as mp4 and flv.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Type Media file container, such as mp4 and flv.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Media file container, such as mp4 and flv.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Type Media file container, such as mp4 and flv.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取URL of source media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MediaUrl URL of source media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMediaUrl() const;

                    /**
                     * 设置URL of source media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MediaUrl URL of source media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMediaUrl(const std::string& _mediaUrl);

                    /**
                     * 判断参数 MediaUrl 是否已赋值
                     * @return MediaUrl 是否已赋值
                     */
                    bool MediaUrlHasBeenSet() const;

                    /**
                     * 获取Source information of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SourceInfo Source information of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaSourceData GetSourceInfo() const;

                    /**
                     * 设置Source information of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SourceInfo Source information of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSourceInfo(const MediaSourceData& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     */
                    bool SourceInfoHasBeenSet() const;

                    /**
                     * 获取Regions where media files are stored, such as `ap-chongqing`. For more regions, see [Storage Region](https://intl.cloud.tencent.com/document/product/266/9760).
                     * @return StorageRegion Regions where media files are stored, such as `ap-chongqing`. For more regions, see [Storage Region](https://intl.cloud.tencent.com/document/product/266/9760).
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置Regions where media files are stored, such as `ap-chongqing`. For more regions, see [Storage Region](https://intl.cloud.tencent.com/document/product/266/9760).
                     * @param StorageRegion Regions where media files are stored, such as `ap-chongqing`. For more regions, see [Storage Region](https://intl.cloud.tencent.com/document/product/266/9760).
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取Tag information of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TagSet Tag information of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetTagSet() const;

                    /**
                     * 设置Tag information of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TagSet Tag information of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTagSet(const std::vector<std::string>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取Unique ID of an LVB recording file.
                     * @return Vid Unique ID of an LVB recording file.
                     */
                    std::string GetVid() const;

                    /**
                     * 设置Unique ID of an LVB recording file.
                     * @param Vid Unique ID of an LVB recording file.
                     */
                    void SetVid(const std::string& _vid);

                    /**
                     * 判断参数 Vid 是否已赋值
                     * @return Vid 是否已赋值
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
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置File type:
<li>Video: video file</li>
<li>Audio: audio file</li>
<li>Image: image file</li>
                     * @param Category File type:
<li>Video: video file</li>
<li>Audio: audio file</li>
<li>Image: image file</li>
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取File status. Valid values: Normal, Forbidden.

*Note: this field is not supported yet.
                     * @return Status File status. Valid values: Normal, Forbidden.

*Note: this field is not supported yet.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置File status. Valid values: Normal, Forbidden.

*Note: this field is not supported yet.
                     * @param Status File status. Valid values: Normal, Forbidden.

*Note: this field is not supported yet.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Storage class of a media file:
<li>STANDARD</li>
<li>STANDARD_IA</li>
<li>ARCHIVE</li>
<li>DEEP_ARCHIVE</li>
                     * @return StorageClass Storage class of a media file:
<li>STANDARD</li>
<li>STANDARD_IA</li>
<li>ARCHIVE</li>
<li>DEEP_ARCHIVE</li>
                     */
                    std::string GetStorageClass() const;

                    /**
                     * 设置Storage class of a media file:
<li>STANDARD</li>
<li>STANDARD_IA</li>
<li>ARCHIVE</li>
<li>DEEP_ARCHIVE</li>
                     * @param StorageClass Storage class of a media file:
<li>STANDARD</li>
<li>STANDARD_IA</li>
<li>ARCHIVE</li>
<li>DEEP_ARCHIVE</li>
                     */
                    void SetStorageClass(const std::string& _storageClass);

                    /**
                     * 判断参数 StorageClass 是否已赋值
                     * @return StorageClass 是否已赋值
                     */
                    bool StorageClassHasBeenSet() const;

                private:

                    /**
                     * Media filename.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Media file description.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time of media file in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last update time of media file (by an operation that triggers updating of media file information such as modifying video attributes or initiating video processing) in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Expiration time of media file in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. `9999-12-31T23:59:59Z` means "never expire".
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Category ID of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * Category name of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * Category path to media file separated by "-", such as "new first-level category - new second-level category".
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

                    /**
                     * Cover image address of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                    /**
                     * Media file container, such as mp4 and flv.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * URL of source media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mediaUrl;
                    bool m_mediaUrlHasBeenSet;

                    /**
                     * Source information of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaSourceData m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                    /**
                     * Regions where media files are stored, such as `ap-chongqing`. For more regions, see [Storage Region](https://intl.cloud.tencent.com/document/product/266/9760).
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * Tag information of media file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * Unique ID of an LVB recording file.
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
                     * File status. Valid values: Normal, Forbidden.

*Note: this field is not supported yet.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Storage class of a media file:
<li>STANDARD</li>
<li>STANDARD_IA</li>
<li>ARCHIVE</li>
<li>DEEP_ARCHIVE</li>
                     */
                    std::string m_storageClass;
                    bool m_storageClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIABASICINFO_H_
