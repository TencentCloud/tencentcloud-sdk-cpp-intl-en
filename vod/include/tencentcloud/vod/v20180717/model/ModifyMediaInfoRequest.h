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
                     * 获取Unique identifier of a media file.
                     * @return FileId Unique identifier of a media file.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Unique identifier of a media file.
                     * @param _fileId Unique identifier of a media file.
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
                     * 获取<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
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
                     * 获取Media filename, with a maximum length of 64 characters.
                     * @return Name Media filename, with a maximum length of 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Media filename, with a maximum length of 64 characters.
                     * @param _name Media filename, with a maximum length of 64 characters.
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
                     * 获取Media file description, longest 128 characters.
                     * @return Description Media file description, longest 128 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Media file description, longest 128 characters.
                     * @param _description Media file description, longest 128 characters.
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
                     * 获取Media File Category ID.
                     * @return ClassId Media File Category ID.
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Media File Category ID.
                     * @param _classId Media File Category ID.
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
                     * 获取Media file expiry time uses [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). Enter "9999-12-31T23:59:59Z" to indicate no expiry. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted.
                     * @return ExpireTime Media file expiry time uses [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). Enter "9999-12-31T23:59:59Z" to indicate no expiry. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Media file expiry time uses [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). Enter "9999-12-31T23:59:59Z" to indicate no expiry. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted.
                     * @param _expireTime Media file expiry time uses [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). Enter "9999-12-31T23:59:59Z" to indicate no expiry. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted.
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
                     * 获取The video cover image file (such as jpeg, png) is an encoded string in [Base64](https://tools.ietf.org/html/rfc4648). Only three image formats (gif, jpeg, png) are supported.
                     * @return CoverData The video cover image file (such as jpeg, png) is an encoded string in [Base64](https://tools.ietf.org/html/rfc4648). Only three image formats (gif, jpeg, png) are supported.
                     * 
                     */
                    std::string GetCoverData() const;

                    /**
                     * 设置The video cover image file (such as jpeg, png) is an encoded string in [Base64](https://tools.ietf.org/html/rfc4648). Only three image formats (gif, jpeg, png) are supported.
                     * @param _coverData The video cover image file (such as jpeg, png) is an encoded string in [Base64](https://tools.ietf.org/html/rfc4648). Only three image formats (gif, jpeg, png) are supported.
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
                     * 获取Newly added set of video timestamp information. If timestamp already exists at a certain offset, perform overlay operation. Maximum for a single media file is 100 Dotting Information. In the same request, time offset parameter of AddKeyFrameDescs must be all different from DeleteKeyFrameDescs.
                     * @return AddKeyFrameDescs Newly added set of video timestamp information. If timestamp already exists at a certain offset, perform overlay operation. Maximum for a single media file is 100 Dotting Information. In the same request, time offset parameter of AddKeyFrameDescs must be all different from DeleteKeyFrameDescs.
                     * 
                     */
                    std::vector<MediaKeyFrameDescItem> GetAddKeyFrameDescs() const;

                    /**
                     * 设置Newly added set of video timestamp information. If timestamp already exists at a certain offset, perform overlay operation. Maximum for a single media file is 100 Dotting Information. In the same request, time offset parameter of AddKeyFrameDescs must be all different from DeleteKeyFrameDescs.
                     * @param _addKeyFrameDescs Newly added set of video timestamp information. If timestamp already exists at a certain offset, perform overlay operation. Maximum for a single media file is 100 Dotting Information. In the same request, time offset parameter of AddKeyFrameDescs must be all different from DeleteKeyFrameDescs.
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
                     * 获取Time offset of the video timestamp information set to be deleted, unit: second. In the same request, the time offset parameter of AddKeyFrameDescs must be consistent with all different DeleteKeyFrameDescs.
                     * @return DeleteKeyFrameDescs Time offset of the video timestamp information set to be deleted, unit: second. In the same request, the time offset parameter of AddKeyFrameDescs must be consistent with all different DeleteKeyFrameDescs.
                     * 
                     */
                    std::vector<double> GetDeleteKeyFrameDescs() const;

                    /**
                     * 设置Time offset of the video timestamp information set to be deleted, unit: second. In the same request, the time offset parameter of AddKeyFrameDescs must be consistent with all different DeleteKeyFrameDescs.
                     * @param _deleteKeyFrameDescs Time offset of the video timestamp information set to be deleted, unit: second. In the same request, the time offset parameter of AddKeyFrameDescs must be consistent with all different DeleteKeyFrameDescs.
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
                     * 获取Value 1 indicates clearing video dotting information. Other values meaningless.
In the same request, ClearKeyFrameDescs and AddKeyFrameDescs cannot appear simultaneously.
                     * @return ClearKeyFrameDescs Value 1 indicates clearing video dotting information. Other values meaningless.
In the same request, ClearKeyFrameDescs and AddKeyFrameDescs cannot appear simultaneously.
                     * 
                     */
                    int64_t GetClearKeyFrameDescs() const;

                    /**
                     * 设置Value 1 indicates clearing video dotting information. Other values meaningless.
In the same request, ClearKeyFrameDescs and AddKeyFrameDescs cannot appear simultaneously.
                     * @param _clearKeyFrameDescs Value 1 indicates clearing video dotting information. Other values meaningless.
In the same request, ClearKeyFrameDescs and AddKeyFrameDescs cannot appear simultaneously.
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
                     * 获取A group of newly-added tags. Maximum for a single media file is 16 tags. Maximum for a single tag is 32 characters. In the same request, the AddTags parameter must be consistent with DeleteTags.
                     * @return AddTags A group of newly-added tags. Maximum for a single media file is 16 tags. Maximum for a single tag is 32 characters. In the same request, the AddTags parameter must be consistent with DeleteTags.
                     * 
                     */
                    std::vector<std::string> GetAddTags() const;

                    /**
                     * 设置A group of newly-added tags. Maximum for a single media file is 16 tags. Maximum for a single tag is 32 characters. In the same request, the AddTags parameter must be consistent with DeleteTags.
                     * @param _addTags A group of newly-added tags. Maximum for a single media file is 16 tags. Maximum for a single tag is 32 characters. In the same request, the AddTags parameter must be consistent with DeleteTags.
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
                     * 获取A group of tags to delete. In the same request, the AddTags parameter must be different from DeleteTags.
                     * @return DeleteTags A group of tags to delete. In the same request, the AddTags parameter must be different from DeleteTags.
                     * 
                     */
                    std::vector<std::string> GetDeleteTags() const;

                    /**
                     * 设置A group of tags to delete. In the same request, the AddTags parameter must be different from DeleteTags.
                     * @param _deleteTags A group of tags to delete. In the same request, the AddTags parameter must be different from DeleteTags.
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
                     * 获取Value 1 means clear all media files, other values meaningless.
In the same request, ClearTags and AddTags cannot appear simultaneously.
                     * @return ClearTags Value 1 means clear all media files, other values meaningless.
In the same request, ClearTags and AddTags cannot appear simultaneously.
                     * 
                     */
                    int64_t GetClearTags() const;

                    /**
                     * 设置Value 1 means clear all media files, other values meaningless.
In the same request, ClearTags and AddTags cannot appear simultaneously.
                     * @param _clearTags Value 1 means clear all media files, other values meaningless.
In the same request, ClearTags and AddTags cannot appear simultaneously.
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
                     * 获取Add a set of subtitles. Maximum for a single media file is 16 subtitles. In the same request, the specified subtitle ID in AddSubtitles must be all different from those in DeleteSubtitleIds.
                     * @return AddSubtitles Add a set of subtitles. Maximum for a single media file is 16 subtitles. In the same request, the specified subtitle ID in AddSubtitles must be all different from those in DeleteSubtitleIds.
                     * 
                     */
                    std::vector<MediaSubtitleInput> GetAddSubtitles() const;

                    /**
                     * 设置Add a set of subtitles. Maximum for a single media file is 16 subtitles. In the same request, the specified subtitle ID in AddSubtitles must be all different from those in DeleteSubtitleIds.
                     * @param _addSubtitles Add a set of subtitles. Maximum for a single media file is 16 subtitles. In the same request, the specified subtitle ID in AddSubtitles must be all different from those in DeleteSubtitleIds.
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
                     * 获取Unique identifier of subtitle to be deleted. In the same request, the specified subtitle id in AddSubtitles must be consistent with all different in DeleteSubtitleIds.
                     * @return DeleteSubtitleIds Unique identifier of subtitle to be deleted. In the same request, the specified subtitle id in AddSubtitles must be consistent with all different in DeleteSubtitleIds.
                     * 
                     */
                    std::vector<std::string> GetDeleteSubtitleIds() const;

                    /**
                     * 设置Unique identifier of subtitle to be deleted. In the same request, the specified subtitle id in AddSubtitles must be consistent with all different in DeleteSubtitleIds.
                     * @param _deleteSubtitleIds Unique identifier of subtitle to be deleted. In the same request, the specified subtitle id in AddSubtitles must be consistent with all different in DeleteSubtitleIds.
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
                     * 获取Value 1 means clear all subtitle information of the media file. Other values meaningless.
In the same request, ClearSubtitles and AddSubtitles cannot appear simultaneously.
                     * @return ClearSubtitles Value 1 means clear all subtitle information of the media file. Other values meaningless.
In the same request, ClearSubtitles and AddSubtitles cannot appear simultaneously.
                     * 
                     */
                    int64_t GetClearSubtitles() const;

                    /**
                     * 设置Value 1 means clear all subtitle information of the media file. Other values meaningless.
In the same request, ClearSubtitles and AddSubtitles cannot appear simultaneously.
                     * @param _clearSubtitles Value 1 means clear all subtitle information of the media file. Other values meaningless.
In the same request, ClearSubtitles and AddSubtitles cannot appear simultaneously.
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
                     * Unique identifier of a media file.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Media filename, with a maximum length of 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Media file description, longest 128 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Media File Category ID.
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * Media file expiry time uses [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). Enter "9999-12-31T23:59:59Z" to indicate no expiry. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * The video cover image file (such as jpeg, png) is an encoded string in [Base64](https://tools.ietf.org/html/rfc4648). Only three image formats (gif, jpeg, png) are supported.
                     */
                    std::string m_coverData;
                    bool m_coverDataHasBeenSet;

                    /**
                     * Newly added set of video timestamp information. If timestamp already exists at a certain offset, perform overlay operation. Maximum for a single media file is 100 Dotting Information. In the same request, time offset parameter of AddKeyFrameDescs must be all different from DeleteKeyFrameDescs.
                     */
                    std::vector<MediaKeyFrameDescItem> m_addKeyFrameDescs;
                    bool m_addKeyFrameDescsHasBeenSet;

                    /**
                     * Time offset of the video timestamp information set to be deleted, unit: second. In the same request, the time offset parameter of AddKeyFrameDescs must be consistent with all different DeleteKeyFrameDescs.
                     */
                    std::vector<double> m_deleteKeyFrameDescs;
                    bool m_deleteKeyFrameDescsHasBeenSet;

                    /**
                     * Value 1 indicates clearing video dotting information. Other values meaningless.
In the same request, ClearKeyFrameDescs and AddKeyFrameDescs cannot appear simultaneously.
                     */
                    int64_t m_clearKeyFrameDescs;
                    bool m_clearKeyFrameDescsHasBeenSet;

                    /**
                     * A group of newly-added tags. Maximum for a single media file is 16 tags. Maximum for a single tag is 32 characters. In the same request, the AddTags parameter must be consistent with DeleteTags.
                     */
                    std::vector<std::string> m_addTags;
                    bool m_addTagsHasBeenSet;

                    /**
                     * A group of tags to delete. In the same request, the AddTags parameter must be different from DeleteTags.
                     */
                    std::vector<std::string> m_deleteTags;
                    bool m_deleteTagsHasBeenSet;

                    /**
                     * Value 1 means clear all media files, other values meaningless.
In the same request, ClearTags and AddTags cannot appear simultaneously.
                     */
                    int64_t m_clearTags;
                    bool m_clearTagsHasBeenSet;

                    /**
                     * Add a set of subtitles. Maximum for a single media file is 16 subtitles. In the same request, the specified subtitle ID in AddSubtitles must be all different from those in DeleteSubtitleIds.
                     */
                    std::vector<MediaSubtitleInput> m_addSubtitles;
                    bool m_addSubtitlesHasBeenSet;

                    /**
                     * Unique identifier of subtitle to be deleted. In the same request, the specified subtitle id in AddSubtitles must be consistent with all different in DeleteSubtitleIds.
                     */
                    std::vector<std::string> m_deleteSubtitleIds;
                    bool m_deleteSubtitleIdsHasBeenSet;

                    /**
                     * Value 1 means clear all subtitle information of the media file. Other values meaningless.
In the same request, ClearSubtitles and AddSubtitles cannot appear simultaneously.
                     */
                    int64_t m_clearSubtitles;
                    bool m_clearSubtitlesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIAINFOREQUEST_H_
