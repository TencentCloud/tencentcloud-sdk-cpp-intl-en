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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The input of a moderation task.
                */
                class ReviewAudioVideoTaskInput : public AbstractModel
                {
                public:
                    ReviewAudioVideoTaskInput();
                    ~ReviewAudioVideoTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the media file.
                     * @return FileId The ID of the media file.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The ID of the media file.
                     * @param _fileId The ID of the media file.
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
                     * 获取The moderation template ID.
                     * @return Definition The moderation template ID.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置The moderation template ID.
                     * @param _definition The moderation template ID.
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取The type of moderated content. Valid values:
<li>`Media`: The original audio/video.</li>
<li>`Cover`: Thumbnails.</li>
                     * @return ReviewContents The type of moderated content. Valid values:
<li>`Media`: The original audio/video.</li>
<li>`Cover`: Thumbnails.</li>
                     * 
                     */
                    std::vector<std::string> GetReviewContents() const;

                    /**
                     * 设置The type of moderated content. Valid values:
<li>`Media`: The original audio/video.</li>
<li>`Cover`: Thumbnails.</li>
                     * @param _reviewContents The type of moderated content. Valid values:
<li>`Media`: The original audio/video.</li>
<li>`Cover`: Thumbnails.</li>
                     * 
                     */
                    void SetReviewContents(const std::vector<std::string>& _reviewContents);

                    /**
                     * 判断参数 ReviewContents 是否已赋值
                     * @return ReviewContents 是否已赋值
                     * 
                     */
                    bool ReviewContentsHasBeenSet() const;

                private:

                    /**
                     * The ID of the media file.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * The moderation template ID.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * The type of moderated content. Valid values:
<li>`Media`: The original audio/video.</li>
<li>`Cover`: Thumbnails.</li>
                     */
                    std::vector<std::string> m_reviewContents;
                    bool m_reviewContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOTASKINPUT_H_
