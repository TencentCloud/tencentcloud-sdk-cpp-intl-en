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
                     * 获取<p>Media file unique identifier.</p>
                     * @return FileId <p>Media file unique identifier.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>Media file unique identifier.</p>
                     * @param _fileId <p>Media file unique identifier.</p>
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
                     * 获取<p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
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
                     * 获取<p>Media filename, up to 64 characters.</p>
                     * @return Name <p>Media filename, up to 64 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Media filename, up to 64 characters.</p>
                     * @param _name <p>Media filename, up to 64 characters.</p>
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
                     * 获取<p>Media file description, up to 128 characters.</p>
                     * @return Description <p>Media file description, up to 128 characters.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Media file description, up to 128 characters.</p>
                     * @param _description <p>Media file description, up to 128 characters.</p>
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
                     * 获取<p>Media File Category ID.</p>
                     * @return ClassId <p>Media File Category ID.</p>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置<p>Media File Category ID.</p>
                     * @param _classId <p>Media File Category ID.</p>
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
                     * 获取<p>Media file expiry time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>. "9999-12-31T23:59:59Z" means it never expires. After expiry, the media file and its related resources (transcoding result, sprites, etc.) will be permanently deleted.</p>
                     * @return ExpireTime <p>Media file expiry time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>. "9999-12-31T23:59:59Z" means it never expires. After expiry, the media file and its related resources (transcoding result, sprites, etc.) will be permanently deleted.</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>Media file expiry time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>. "9999-12-31T23:59:59Z" means it never expires. After expiry, the media file and its related resources (transcoding result, sprites, etc.) will be permanently deleted.</p>
                     * @param _expireTime <p>Media file expiry time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>. "9999-12-31T23:59:59Z" means it never expires. After expiry, the media file and its related resources (transcoding result, sprites, etc.) will be permanently deleted.</p>
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
                     * 获取<p>The Base64-encoded string of the video cover image file (for example, jpeg or png). Only gif, jpeg, and png image formats are supported.</p>
                     * @return CoverData <p>The Base64-encoded string of the video cover image file (for example, jpeg or png). Only gif, jpeg, and png image formats are supported.</p>
                     * 
                     */
                    std::string GetCoverData() const;

                    /**
                     * 设置<p>The Base64-encoded string of the video cover image file (for example, jpeg or png). Only gif, jpeg, and png image formats are supported.</p>
                     * @param _coverData <p>The Base64-encoded string of the video cover image file (for example, jpeg or png). Only gif, jpeg, and png image formats are supported.</p>
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
                     * 获取<p>Newly added set of video timestamp information. If a timestamp already exists at a certain offset, an overlay operation is performed. The maximum for a single media file is 100 timestamp entries. In the same request, the time offset parameters of AddKeyFrameDescs must all be different from those of DeleteKeyFrameDescs.</p>
                     * @return AddKeyFrameDescs <p>Newly added set of video timestamp information. If a timestamp already exists at a certain offset, an overlay operation is performed. The maximum for a single media file is 100 timestamp entries. In the same request, the time offset parameters of AddKeyFrameDescs must all be different from those of DeleteKeyFrameDescs.</p>
                     * 
                     */
                    std::vector<MediaKeyFrameDescItem> GetAddKeyFrameDescs() const;

                    /**
                     * 设置<p>Newly added set of video timestamp information. If a timestamp already exists at a certain offset, an overlay operation is performed. The maximum for a single media file is 100 timestamp entries. In the same request, the time offset parameters of AddKeyFrameDescs must all be different from those of DeleteKeyFrameDescs.</p>
                     * @param _addKeyFrameDescs <p>Newly added set of video timestamp information. If a timestamp already exists at a certain offset, an overlay operation is performed. The maximum for a single media file is 100 timestamp entries. In the same request, the time offset parameters of AddKeyFrameDescs must all be different from those of DeleteKeyFrameDescs.</p>
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
                     * 获取<p>Time offset of the video timestamp information set to be deleted. Unit: seconds. In the same request, the time offset parameter of AddKeyFrameDescs must be different from that of DeleteKeyFrameDescs.</p>
                     * @return DeleteKeyFrameDescs <p>Time offset of the video timestamp information set to be deleted. Unit: seconds. In the same request, the time offset parameter of AddKeyFrameDescs must be different from that of DeleteKeyFrameDescs.</p>
                     * 
                     */
                    std::vector<double> GetDeleteKeyFrameDescs() const;

                    /**
                     * 设置<p>Time offset of the video timestamp information set to be deleted. Unit: seconds. In the same request, the time offset parameter of AddKeyFrameDescs must be different from that of DeleteKeyFrameDescs.</p>
                     * @param _deleteKeyFrameDescs <p>Time offset of the video timestamp information set to be deleted. Unit: seconds. In the same request, the time offset parameter of AddKeyFrameDescs must be different from that of DeleteKeyFrameDescs.</p>
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
                     * 获取<p>Value 1 indicates clearing video dotting information, and other values are meaningless.<br>In the same request, ClearKeyFrameDescs and AddKeyFrameDescs cannot appear simultaneously.</p>
                     * @return ClearKeyFrameDescs <p>Value 1 indicates clearing video dotting information, and other values are meaningless.<br>In the same request, ClearKeyFrameDescs and AddKeyFrameDescs cannot appear simultaneously.</p>
                     * 
                     */
                    int64_t GetClearKeyFrameDescs() const;

                    /**
                     * 设置<p>Value 1 indicates clearing video dotting information, and other values are meaningless.<br>In the same request, ClearKeyFrameDescs and AddKeyFrameDescs cannot appear simultaneously.</p>
                     * @param _clearKeyFrameDescs <p>Value 1 indicates clearing video dotting information, and other values are meaningless.<br>In the same request, ClearKeyFrameDescs and AddKeyFrameDescs cannot appear simultaneously.</p>
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
                     * 获取<p>A newly-added group of tags. Maximum for a single media file: 16 tags. Maximum for a single tag: 32 characters. In the same request, the AddTags parameter must be all different from DeleteTags.</p>
                     * @return AddTags <p>A newly-added group of tags. Maximum for a single media file: 16 tags. Maximum for a single tag: 32 characters. In the same request, the AddTags parameter must be all different from DeleteTags.</p>
                     * 
                     */
                    std::vector<std::string> GetAddTags() const;

                    /**
                     * 设置<p>A newly-added group of tags. Maximum for a single media file: 16 tags. Maximum for a single tag: 32 characters. In the same request, the AddTags parameter must be all different from DeleteTags.</p>
                     * @param _addTags <p>A newly-added group of tags. Maximum for a single media file: 16 tags. Maximum for a single tag: 32 characters. In the same request, the AddTags parameter must be all different from DeleteTags.</p>
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
                     * 获取<p>Set of tags to delete. In the same request, the AddTags parameter must be all different from DeleteTags.</p>
                     * @return DeleteTags <p>Set of tags to delete. In the same request, the AddTags parameter must be all different from DeleteTags.</p>
                     * 
                     */
                    std::vector<std::string> GetDeleteTags() const;

                    /**
                     * 设置<p>Set of tags to delete. In the same request, the AddTags parameter must be all different from DeleteTags.</p>
                     * @param _deleteTags <p>Set of tags to delete. In the same request, the AddTags parameter must be all different from DeleteTags.</p>
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
                     * 获取<p>Value 1 means clear all tags of media files, and other values are meaningless.<br>In the same request, ClearTags and AddTags cannot appear simultaneously.</p>
                     * @return ClearTags <p>Value 1 means clear all tags of media files, and other values are meaningless.<br>In the same request, ClearTags and AddTags cannot appear simultaneously.</p>
                     * 
                     */
                    int64_t GetClearTags() const;

                    /**
                     * 设置<p>Value 1 means clear all tags of media files, and other values are meaningless.<br>In the same request, ClearTags and AddTags cannot appear simultaneously.</p>
                     * @param _clearTags <p>Value 1 means clear all tags of media files, and other values are meaningless.<br>In the same request, ClearTags and AddTags cannot appear simultaneously.</p>
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
                     * 获取<p>Add a set of subtitles. The maximum for a single media file is 16 subtitles. In the same request, the subtitle IDs specified in AddSubtitles must all be different from DeleteSubtitleIds.</p>
                     * @return AddSubtitles <p>Add a set of subtitles. The maximum for a single media file is 16 subtitles. In the same request, the subtitle IDs specified in AddSubtitles must all be different from DeleteSubtitleIds.</p>
                     * 
                     */
                    std::vector<MediaSubtitleInput> GetAddSubtitles() const;

                    /**
                     * 设置<p>Add a set of subtitles. The maximum for a single media file is 16 subtitles. In the same request, the subtitle IDs specified in AddSubtitles must all be different from DeleteSubtitleIds.</p>
                     * @param _addSubtitles <p>Add a set of subtitles. The maximum for a single media file is 16 subtitles. In the same request, the subtitle IDs specified in AddSubtitles must all be different from DeleteSubtitleIds.</p>
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
                     * 获取<p>Unique identifier of subtitle to be deleted. In the same request, the specified subtitle id in AddSubtitles must be different from all DeleteSubtitleIds.</p>
                     * @return DeleteSubtitleIds <p>Unique identifier of subtitle to be deleted. In the same request, the specified subtitle id in AddSubtitles must be different from all DeleteSubtitleIds.</p>
                     * 
                     */
                    std::vector<std::string> GetDeleteSubtitleIds() const;

                    /**
                     * 设置<p>Unique identifier of subtitle to be deleted. In the same request, the specified subtitle id in AddSubtitles must be different from all DeleteSubtitleIds.</p>
                     * @param _deleteSubtitleIds <p>Unique identifier of subtitle to be deleted. In the same request, the specified subtitle id in AddSubtitles must be different from all DeleteSubtitleIds.</p>
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
                     * 获取<p>The value 1 means to clear all subtitle information of the media file. Other values are meaningless.<br>In the same request, ClearSubtitles and AddSubtitles cannot appear simultaneously.</p>
                     * @return ClearSubtitles <p>The value 1 means to clear all subtitle information of the media file. Other values are meaningless.<br>In the same request, ClearSubtitles and AddSubtitles cannot appear simultaneously.</p>
                     * 
                     */
                    int64_t GetClearSubtitles() const;

                    /**
                     * 设置<p>The value 1 means to clear all subtitle information of the media file. Other values are meaningless.<br>In the same request, ClearSubtitles and AddSubtitles cannot appear simultaneously.</p>
                     * @param _clearSubtitles <p>The value 1 means to clear all subtitle information of the media file. Other values are meaningless.<br>In the same request, ClearSubtitles and AddSubtitles cannot appear simultaneously.</p>
                     * 
                     */
                    void SetClearSubtitles(const int64_t& _clearSubtitles);

                    /**
                     * 判断参数 ClearSubtitles 是否已赋值
                     * @return ClearSubtitles 是否已赋值
                     * 
                     */
                    bool ClearSubtitlesHasBeenSet() const;

                    /**
                     * 获取<p>ID of the knowledge base to be outbound.</p>
                     * @return DeleteKnowledgeBases <p>ID of the knowledge base to be outbound.</p>
                     * 
                     */
                    std::vector<std::string> GetDeleteKnowledgeBases() const;

                    /**
                     * 设置<p>ID of the knowledge base to be outbound.</p>
                     * @param _deleteKnowledgeBases <p>ID of the knowledge base to be outbound.</p>
                     * 
                     */
                    void SetDeleteKnowledgeBases(const std::vector<std::string>& _deleteKnowledgeBases);

                    /**
                     * 判断参数 DeleteKnowledgeBases 是否已赋值
                     * @return DeleteKnowledgeBases 是否已赋值
                     * 
                     */
                    bool DeleteKnowledgeBasesHasBeenSet() const;

                    /**
                     * 获取<p>Value 1 means remove this media file from all knowledge bases, and other values are meaningless.</p><p><br>In the same request, ClearKnowledgeBases and DeleteKnowledgeBases cannot appear simultaneously.<p></p></p>
                     * @return ClearKnowledgeBases <p>Value 1 means remove this media file from all knowledge bases, and other values are meaningless.</p><p><br>In the same request, ClearKnowledgeBases and DeleteKnowledgeBases cannot appear simultaneously.<p></p></p>
                     * 
                     */
                    int64_t GetClearKnowledgeBases() const;

                    /**
                     * 设置<p>Value 1 means remove this media file from all knowledge bases, and other values are meaningless.</p><p><br>In the same request, ClearKnowledgeBases and DeleteKnowledgeBases cannot appear simultaneously.<p></p></p>
                     * @param _clearKnowledgeBases <p>Value 1 means remove this media file from all knowledge bases, and other values are meaningless.</p><p><br>In the same request, ClearKnowledgeBases and DeleteKnowledgeBases cannot appear simultaneously.<p></p></p>
                     * 
                     */
                    void SetClearKnowledgeBases(const int64_t& _clearKnowledgeBases);

                    /**
                     * 判断参数 ClearKnowledgeBases 是否已赋值
                     * @return ClearKnowledgeBases 是否已赋值
                     * 
                     */
                    bool ClearKnowledgeBasesHasBeenSet() const;

                private:

                    /**
                     * <p>Media file unique identifier.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p><b>On-demand <a href="https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1">application</a> ID. For customers who activate on-demand services after December 25, 2023, this field must be filled in as the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Media filename, up to 64 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Media file description, up to 128 characters.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Media File Category ID.</p>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * <p>Media file expiry time in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>. "9999-12-31T23:59:59Z" means it never expires. After expiry, the media file and its related resources (transcoding result, sprites, etc.) will be permanently deleted.</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>The Base64-encoded string of the video cover image file (for example, jpeg or png). Only gif, jpeg, and png image formats are supported.</p>
                     */
                    std::string m_coverData;
                    bool m_coverDataHasBeenSet;

                    /**
                     * <p>Newly added set of video timestamp information. If a timestamp already exists at a certain offset, an overlay operation is performed. The maximum for a single media file is 100 timestamp entries. In the same request, the time offset parameters of AddKeyFrameDescs must all be different from those of DeleteKeyFrameDescs.</p>
                     */
                    std::vector<MediaKeyFrameDescItem> m_addKeyFrameDescs;
                    bool m_addKeyFrameDescsHasBeenSet;

                    /**
                     * <p>Time offset of the video timestamp information set to be deleted. Unit: seconds. In the same request, the time offset parameter of AddKeyFrameDescs must be different from that of DeleteKeyFrameDescs.</p>
                     */
                    std::vector<double> m_deleteKeyFrameDescs;
                    bool m_deleteKeyFrameDescsHasBeenSet;

                    /**
                     * <p>Value 1 indicates clearing video dotting information, and other values are meaningless.<br>In the same request, ClearKeyFrameDescs and AddKeyFrameDescs cannot appear simultaneously.</p>
                     */
                    int64_t m_clearKeyFrameDescs;
                    bool m_clearKeyFrameDescsHasBeenSet;

                    /**
                     * <p>A newly-added group of tags. Maximum for a single media file: 16 tags. Maximum for a single tag: 32 characters. In the same request, the AddTags parameter must be all different from DeleteTags.</p>
                     */
                    std::vector<std::string> m_addTags;
                    bool m_addTagsHasBeenSet;

                    /**
                     * <p>Set of tags to delete. In the same request, the AddTags parameter must be all different from DeleteTags.</p>
                     */
                    std::vector<std::string> m_deleteTags;
                    bool m_deleteTagsHasBeenSet;

                    /**
                     * <p>Value 1 means clear all tags of media files, and other values are meaningless.<br>In the same request, ClearTags and AddTags cannot appear simultaneously.</p>
                     */
                    int64_t m_clearTags;
                    bool m_clearTagsHasBeenSet;

                    /**
                     * <p>Add a set of subtitles. The maximum for a single media file is 16 subtitles. In the same request, the subtitle IDs specified in AddSubtitles must all be different from DeleteSubtitleIds.</p>
                     */
                    std::vector<MediaSubtitleInput> m_addSubtitles;
                    bool m_addSubtitlesHasBeenSet;

                    /**
                     * <p>Unique identifier of subtitle to be deleted. In the same request, the specified subtitle id in AddSubtitles must be different from all DeleteSubtitleIds.</p>
                     */
                    std::vector<std::string> m_deleteSubtitleIds;
                    bool m_deleteSubtitleIdsHasBeenSet;

                    /**
                     * <p>The value 1 means to clear all subtitle information of the media file. Other values are meaningless.<br>In the same request, ClearSubtitles and AddSubtitles cannot appear simultaneously.</p>
                     */
                    int64_t m_clearSubtitles;
                    bool m_clearSubtitlesHasBeenSet;

                    /**
                     * <p>ID of the knowledge base to be outbound.</p>
                     */
                    std::vector<std::string> m_deleteKnowledgeBases;
                    bool m_deleteKnowledgeBasesHasBeenSet;

                    /**
                     * <p>Value 1 means remove this media file from all knowledge bases, and other values are meaningless.</p><p><br>In the same request, ClearKnowledgeBases and DeleteKnowledgeBases cannot appear simultaneously.<p></p></p>
                     */
                    int64_t m_clearKnowledgeBases;
                    bool m_clearKnowledgeBasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIAINFOREQUEST_H_
