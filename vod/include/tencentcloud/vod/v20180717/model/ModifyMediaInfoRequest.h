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
                     * 获取
                     * @return FileId 
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置
                     * @param _fileId 
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
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
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
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
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
                     * 获取
                     * @return Description 
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置
                     * @param _description 
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
                     * 获取
                     * @return ClassId 
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置
                     * @param _classId 
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
                     * 获取
                     * @return ExpireTime 
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置
                     * @param _expireTime 
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
                     * 获取
                     * @return CoverData 
                     * 
                     */
                    std::string GetCoverData() const;

                    /**
                     * 设置
                     * @param _coverData 
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
                     * 获取
                     * @return AddKeyFrameDescs 
                     * 
                     */
                    std::vector<MediaKeyFrameDescItem> GetAddKeyFrameDescs() const;

                    /**
                     * 设置
                     * @param _addKeyFrameDescs 
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
                     * 获取
                     * @return DeleteKeyFrameDescs 
                     * 
                     */
                    std::vector<double> GetDeleteKeyFrameDescs() const;

                    /**
                     * 设置
                     * @param _deleteKeyFrameDescs 
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
                     * 获取
                     * @return ClearKeyFrameDescs 
                     * 
                     */
                    int64_t GetClearKeyFrameDescs() const;

                    /**
                     * 设置
                     * @param _clearKeyFrameDescs 
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
                     * 获取
                     * @return AddTags 
                     * 
                     */
                    std::vector<std::string> GetAddTags() const;

                    /**
                     * 设置
                     * @param _addTags 
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
                     * 获取
                     * @return DeleteTags 
                     * 
                     */
                    std::vector<std::string> GetDeleteTags() const;

                    /**
                     * 设置
                     * @param _deleteTags 
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
                     * 获取
                     * @return ClearTags 
                     * 
                     */
                    int64_t GetClearTags() const;

                    /**
                     * 设置
                     * @param _clearTags 
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
                     * 获取
                     * @return AddSubtitles 
                     * 
                     */
                    std::vector<MediaSubtitleInput> GetAddSubtitles() const;

                    /**
                     * 设置
                     * @param _addSubtitles 
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
                     * 获取
                     * @return DeleteSubtitleIds 
                     * 
                     */
                    std::vector<std::string> GetDeleteSubtitleIds() const;

                    /**
                     * 设置
                     * @param _deleteSubtitleIds 
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
                     * 获取
                     * @return ClearSubtitles 
                     * 
                     */
                    int64_t GetClearSubtitles() const;

                    /**
                     * 设置
                     * @param _clearSubtitles 
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
                     * 获取
                     * @return DeleteKnowledgeBases 
                     * 
                     */
                    std::vector<std::string> GetDeleteKnowledgeBases() const;

                    /**
                     * 设置
                     * @param _deleteKnowledgeBases 
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
                     * 获取
                     * @return ClearKnowledgeBases 
                     * 
                     */
                    int64_t GetClearKnowledgeBases() const;

                    /**
                     * 设置
                     * @param _clearKnowledgeBases 
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
                     * 
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_coverData;
                    bool m_coverDataHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<MediaKeyFrameDescItem> m_addKeyFrameDescs;
                    bool m_addKeyFrameDescsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<double> m_deleteKeyFrameDescs;
                    bool m_deleteKeyFrameDescsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_clearKeyFrameDescs;
                    bool m_clearKeyFrameDescsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_addTags;
                    bool m_addTagsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_deleteTags;
                    bool m_deleteTagsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_clearTags;
                    bool m_clearTagsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<MediaSubtitleInput> m_addSubtitles;
                    bool m_addSubtitlesHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_deleteSubtitleIds;
                    bool m_deleteSubtitleIdsHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_clearSubtitles;
                    bool m_clearSubtitlesHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_deleteKnowledgeBases;
                    bool m_deleteKnowledgeBasesHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_clearKnowledgeBases;
                    bool m_clearKnowledgeBasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIAINFOREQUEST_H_
