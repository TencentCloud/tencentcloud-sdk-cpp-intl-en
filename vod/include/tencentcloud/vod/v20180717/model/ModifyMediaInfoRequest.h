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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIAINFOREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIAINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaKeyFrameDescItem.h>
#include <tencentcloud/vod/v20180717/model/MediaSubtitleInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyMediaInfo request structure.
                */
                class ModifyMediaInfoRequest : public AbstractModel
                {
                public:
                    ModifyMediaInfoRequest();
                    ~ModifyMediaInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique media file ID.
                     * @return FileId Unique media file ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Unique media file ID.
                     * @param _fileId Unique media file ID.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @return SubAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @param _subAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
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
                     * 获取Media filename, which can contain up to 64 characters.
                     * @return Name Media filename, which can contain up to 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Media filename, which can contain up to 64 characters.
                     * @param _name Media filename, which can contain up to 64 characters.
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
                     * 获取Media file description, which can contain up to 128 characters.
                     * @return Description Media file description, which can contain up to 128 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Media file description, which can contain up to 128 characters.
                     * @param _description Media file description, which can contain up to 128 characters.
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
                     * 获取Media file category ID.
                     * @return ClassId Media file category ID.
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Media file category ID.
                     * @param _classId Media file category ID.
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
                     * 获取Media file expiration time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). The value `9999-12-31T23:59:59Z` indicates that the media file never expires. After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted.
                     * @return ExpireTime Media file expiration time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). The value `9999-12-31T23:59:59Z` indicates that the media file never expires. After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Media file expiration time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). The value `9999-12-31T23:59:59Z` indicates that the media file never expires. After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted.
                     * @param _expireTime Media file expiration time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). The value `9999-12-31T23:59:59Z` indicates that the media file never expires. After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted.
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
                     * 获取String generated by [Base64-encoding](https://tools.ietf.org/html/rfc4648) the video cover image file (such as .jpeg or .png file). Only .gif, .jpeg, and .png image formats are supported.
                     * @return CoverData String generated by [Base64-encoding](https://tools.ietf.org/html/rfc4648) the video cover image file (such as .jpeg or .png file). Only .gif, .jpeg, and .png image formats are supported.
                     * 
                     */
                    std::string GetCoverData() const;

                    /**
                     * 设置String generated by [Base64-encoding](https://tools.ietf.org/html/rfc4648) the video cover image file (such as .jpeg or .png file). Only .gif, .jpeg, and .png image formats are supported.
                     * @param _coverData String generated by [Base64-encoding](https://tools.ietf.org/html/rfc4648) the video cover image file (such as .jpeg or .png file). Only .gif, .jpeg, and .png image formats are supported.
                     * 
                     */
                    void SetCoverData(const std::string& _coverData);

                    /**
                     * 判断参数 CoverData 是否已赋值
                     * @return CoverData 是否已赋值
                     * 
                     */
                    bool CoverDataHasBeenSet() const;

                    /**
                     * 获取Set of video timestamps to be added. If a timestamp already exists at an offset time point, it will be overwritten. Up to 100 timestamps can be added to one media file. In the same request, the time offset parameters of `AddKeyFrameDescs` must be different from those of `DeleteKeyFrameDescs`.
                     * @return AddKeyFrameDescs Set of video timestamps to be added. If a timestamp already exists at an offset time point, it will be overwritten. Up to 100 timestamps can be added to one media file. In the same request, the time offset parameters of `AddKeyFrameDescs` must be different from those of `DeleteKeyFrameDescs`.
                     * 
                     */
                    std::vector<MediaKeyFrameDescItem> GetAddKeyFrameDescs() const;

                    /**
                     * 设置Set of video timestamps to be added. If a timestamp already exists at an offset time point, it will be overwritten. Up to 100 timestamps can be added to one media file. In the same request, the time offset parameters of `AddKeyFrameDescs` must be different from those of `DeleteKeyFrameDescs`.
                     * @param _addKeyFrameDescs Set of video timestamps to be added. If a timestamp already exists at an offset time point, it will be overwritten. Up to 100 timestamps can be added to one media file. In the same request, the time offset parameters of `AddKeyFrameDescs` must be different from those of `DeleteKeyFrameDescs`.
                     * 
                     */
                    void SetAddKeyFrameDescs(const std::vector<MediaKeyFrameDescItem>& _addKeyFrameDescs);

                    /**
                     * 判断参数 AddKeyFrameDescs 是否已赋值
                     * @return AddKeyFrameDescs 是否已赋值
                     * 
                     */
                    bool AddKeyFrameDescsHasBeenSet() const;

                    /**
                     * 获取Time offset of the set of video timestamps to be deleted in seconds. In the same request, the time offset parameters of `AddKeyFrameDescs` must be different from those of `DeleteKeyFrameDescs`.
                     * @return DeleteKeyFrameDescs Time offset of the set of video timestamps to be deleted in seconds. In the same request, the time offset parameters of `AddKeyFrameDescs` must be different from those of `DeleteKeyFrameDescs`.
                     * 
                     */
                    std::vector<double> GetDeleteKeyFrameDescs() const;

                    /**
                     * 设置Time offset of the set of video timestamps to be deleted in seconds. In the same request, the time offset parameters of `AddKeyFrameDescs` must be different from those of `DeleteKeyFrameDescs`.
                     * @param _deleteKeyFrameDescs Time offset of the set of video timestamps to be deleted in seconds. In the same request, the time offset parameters of `AddKeyFrameDescs` must be different from those of `DeleteKeyFrameDescs`.
                     * 
                     */
                    void SetDeleteKeyFrameDescs(const std::vector<double>& _deleteKeyFrameDescs);

                    /**
                     * 判断参数 DeleteKeyFrameDescs 是否已赋值
                     * @return DeleteKeyFrameDescs 是否已赋值
                     * 
                     */
                    bool DeleteKeyFrameDescsHasBeenSet() const;

                    /**
                     * 获取The value `1` indicates to delete all timestamps in the video. Other values are meaningless.
In the same request, `ClearKeyFrameDescs` and `AddKeyFrameDescs` cannot be present at the same time.
                     * @return ClearKeyFrameDescs The value `1` indicates to delete all timestamps in the video. Other values are meaningless.
In the same request, `ClearKeyFrameDescs` and `AddKeyFrameDescs` cannot be present at the same time.
                     * 
                     */
                    int64_t GetClearKeyFrameDescs() const;

                    /**
                     * 设置The value `1` indicates to delete all timestamps in the video. Other values are meaningless.
In the same request, `ClearKeyFrameDescs` and `AddKeyFrameDescs` cannot be present at the same time.
                     * @param _clearKeyFrameDescs The value `1` indicates to delete all timestamps in the video. Other values are meaningless.
In the same request, `ClearKeyFrameDescs` and `AddKeyFrameDescs` cannot be present at the same time.
                     * 
                     */
                    void SetClearKeyFrameDescs(const int64_t& _clearKeyFrameDescs);

                    /**
                     * 判断参数 ClearKeyFrameDescs 是否已赋值
                     * @return ClearKeyFrameDescs 是否已赋值
                     * 
                     */
                    bool ClearKeyFrameDescsHasBeenSet() const;

                    /**
                     * 获取The tags to add. Each file can have up to 16 tags. A tag can contain at most 32 characters. You cannot include the same tag in `AddTags` and `DeleteTags` at the same time.
                     * @return AddTags The tags to add. Each file can have up to 16 tags. A tag can contain at most 32 characters. You cannot include the same tag in `AddTags` and `DeleteTags` at the same time.
                     * 
                     */
                    std::vector<std::string> GetAddTags() const;

                    /**
                     * 设置The tags to add. Each file can have up to 16 tags. A tag can contain at most 32 characters. You cannot include the same tag in `AddTags` and `DeleteTags` at the same time.
                     * @param _addTags The tags to add. Each file can have up to 16 tags. A tag can contain at most 32 characters. You cannot include the same tag in `AddTags` and `DeleteTags` at the same time.
                     * 
                     */
                    void SetAddTags(const std::vector<std::string>& _addTags);

                    /**
                     * 判断参数 AddTags 是否已赋值
                     * @return AddTags 是否已赋值
                     * 
                     */
                    bool AddTagsHasBeenSet() const;

                    /**
                     * 获取Set of tags to be deleted. In the same request, the parameters of `AddTags` must be different from those of `DeleteTags`.
                     * @return DeleteTags Set of tags to be deleted. In the same request, the parameters of `AddTags` must be different from those of `DeleteTags`.
                     * 
                     */
                    std::vector<std::string> GetDeleteTags() const;

                    /**
                     * 设置Set of tags to be deleted. In the same request, the parameters of `AddTags` must be different from those of `DeleteTags`.
                     * @param _deleteTags Set of tags to be deleted. In the same request, the parameters of `AddTags` must be different from those of `DeleteTags`.
                     * 
                     */
                    void SetDeleteTags(const std::vector<std::string>& _deleteTags);

                    /**
                     * 判断参数 DeleteTags 是否已赋值
                     * @return DeleteTags 是否已赋值
                     * 
                     */
                    bool DeleteTagsHasBeenSet() const;

                    /**
                     * 获取The value `1` indicates to delete all tags of the media file. Other values are meaningless.
In the same request, `ClearTags` and `AddTags` cannot be present at the same time.
                     * @return ClearTags The value `1` indicates to delete all tags of the media file. Other values are meaningless.
In the same request, `ClearTags` and `AddTags` cannot be present at the same time.
                     * 
                     */
                    int64_t GetClearTags() const;

                    /**
                     * 设置The value `1` indicates to delete all tags of the media file. Other values are meaningless.
In the same request, `ClearTags` and `AddTags` cannot be present at the same time.
                     * @param _clearTags The value `1` indicates to delete all tags of the media file. Other values are meaningless.
In the same request, `ClearTags` and `AddTags` cannot be present at the same time.
                     * 
                     */
                    void SetClearTags(const int64_t& _clearTags);

                    /**
                     * 判断参数 ClearTags 是否已赋值
                     * @return ClearTags 是否已赋值
                     * 
                     */
                    bool ClearTagsHasBeenSet() const;

                    /**
                     * 获取Information of multiple subtitles to be added. A single media file can have up to 16 subtitles. In the same request, the subtitle IDs specified in `AddSubtitles` must be different from those in `DeleteSubtitleIds`.
                     * @return AddSubtitles Information of multiple subtitles to be added. A single media file can have up to 16 subtitles. In the same request, the subtitle IDs specified in `AddSubtitles` must be different from those in `DeleteSubtitleIds`.
                     * 
                     */
                    std::vector<MediaSubtitleInput> GetAddSubtitles() const;

                    /**
                     * 设置Information of multiple subtitles to be added. A single media file can have up to 16 subtitles. In the same request, the subtitle IDs specified in `AddSubtitles` must be different from those in `DeleteSubtitleIds`.
                     * @param _addSubtitles Information of multiple subtitles to be added. A single media file can have up to 16 subtitles. In the same request, the subtitle IDs specified in `AddSubtitles` must be different from those in `DeleteSubtitleIds`.
                     * 
                     */
                    void SetAddSubtitles(const std::vector<MediaSubtitleInput>& _addSubtitles);

                    /**
                     * 判断参数 AddSubtitles 是否已赋值
                     * @return AddSubtitles 是否已赋值
                     * 
                     */
                    bool AddSubtitlesHasBeenSet() const;

                    /**
                     * 获取Unique IDs of the subtitles to be deleted. In the same request, the subtitle IDs specified in `AddSubtitles` must be different from those in `DeleteSubtitleIds`.
                     * @return DeleteSubtitleIds Unique IDs of the subtitles to be deleted. In the same request, the subtitle IDs specified in `AddSubtitles` must be different from those in `DeleteSubtitleIds`.
                     * 
                     */
                    std::vector<std::string> GetDeleteSubtitleIds() const;

                    /**
                     * 设置Unique IDs of the subtitles to be deleted. In the same request, the subtitle IDs specified in `AddSubtitles` must be different from those in `DeleteSubtitleIds`.
                     * @param _deleteSubtitleIds Unique IDs of the subtitles to be deleted. In the same request, the subtitle IDs specified in `AddSubtitles` must be different from those in `DeleteSubtitleIds`.
                     * 
                     */
                    void SetDeleteSubtitleIds(const std::vector<std::string>& _deleteSubtitleIds);

                    /**
                     * 判断参数 DeleteSubtitleIds 是否已赋值
                     * @return DeleteSubtitleIds 是否已赋值
                     * 
                     */
                    bool DeleteSubtitleIdsHasBeenSet() const;

                    /**
                     * 获取The value `1` indicates to delete all subtitle information of the media file. Other values are meaningless.
`ClearSubtitles` and `AddSubtitles` cannot co-exist in the same request.
                     * @return ClearSubtitles The value `1` indicates to delete all subtitle information of the media file. Other values are meaningless.
`ClearSubtitles` and `AddSubtitles` cannot co-exist in the same request.
                     * 
                     */
                    int64_t GetClearSubtitles() const;

                    /**
                     * 设置The value `1` indicates to delete all subtitle information of the media file. Other values are meaningless.
`ClearSubtitles` and `AddSubtitles` cannot co-exist in the same request.
                     * @param _clearSubtitles The value `1` indicates to delete all subtitle information of the media file. Other values are meaningless.
`ClearSubtitles` and `AddSubtitles` cannot co-exist in the same request.
                     * 
                     */
                    void SetClearSubtitles(const int64_t& _clearSubtitles);

                    /**
                     * 判断参数 ClearSubtitles 是否已赋值
                     * @return ClearSubtitles 是否已赋值
                     * 
                     */
                    bool ClearSubtitlesHasBeenSet() const;

                private:

                    /**
                     * Unique media file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Media filename, which can contain up to 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Media file description, which can contain up to 128 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Media file category ID.
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * Media file expiration time in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). The value `9999-12-31T23:59:59Z` indicates that the media file never expires. After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * String generated by [Base64-encoding](https://tools.ietf.org/html/rfc4648) the video cover image file (such as .jpeg or .png file). Only .gif, .jpeg, and .png image formats are supported.
                     */
                    std::string m_coverData;
                    bool m_coverDataHasBeenSet;

                    /**
                     * Set of video timestamps to be added. If a timestamp already exists at an offset time point, it will be overwritten. Up to 100 timestamps can be added to one media file. In the same request, the time offset parameters of `AddKeyFrameDescs` must be different from those of `DeleteKeyFrameDescs`.
                     */
                    std::vector<MediaKeyFrameDescItem> m_addKeyFrameDescs;
                    bool m_addKeyFrameDescsHasBeenSet;

                    /**
                     * Time offset of the set of video timestamps to be deleted in seconds. In the same request, the time offset parameters of `AddKeyFrameDescs` must be different from those of `DeleteKeyFrameDescs`.
                     */
                    std::vector<double> m_deleteKeyFrameDescs;
                    bool m_deleteKeyFrameDescsHasBeenSet;

                    /**
                     * The value `1` indicates to delete all timestamps in the video. Other values are meaningless.
In the same request, `ClearKeyFrameDescs` and `AddKeyFrameDescs` cannot be present at the same time.
                     */
                    int64_t m_clearKeyFrameDescs;
                    bool m_clearKeyFrameDescsHasBeenSet;

                    /**
                     * The tags to add. Each file can have up to 16 tags. A tag can contain at most 32 characters. You cannot include the same tag in `AddTags` and `DeleteTags` at the same time.
                     */
                    std::vector<std::string> m_addTags;
                    bool m_addTagsHasBeenSet;

                    /**
                     * Set of tags to be deleted. In the same request, the parameters of `AddTags` must be different from those of `DeleteTags`.
                     */
                    std::vector<std::string> m_deleteTags;
                    bool m_deleteTagsHasBeenSet;

                    /**
                     * The value `1` indicates to delete all tags of the media file. Other values are meaningless.
In the same request, `ClearTags` and `AddTags` cannot be present at the same time.
                     */
                    int64_t m_clearTags;
                    bool m_clearTagsHasBeenSet;

                    /**
                     * Information of multiple subtitles to be added. A single media file can have up to 16 subtitles. In the same request, the subtitle IDs specified in `AddSubtitles` must be different from those in `DeleteSubtitleIds`.
                     */
                    std::vector<MediaSubtitleInput> m_addSubtitles;
                    bool m_addSubtitlesHasBeenSet;

                    /**
                     * Unique IDs of the subtitles to be deleted. In the same request, the subtitle IDs specified in `AddSubtitles` must be different from those in `DeleteSubtitleIds`.
                     */
                    std::vector<std::string> m_deleteSubtitleIds;
                    bool m_deleteSubtitleIdsHasBeenSet;

                    /**
                     * The value `1` indicates to delete all subtitle information of the media file. Other values are meaningless.
`ClearSubtitles` and `AddSubtitles` cannot co-exist in the same request.
                     */
                    int64_t m_clearSubtitles;
                    bool m_clearSubtitlesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIAINFOREQUEST_H_
