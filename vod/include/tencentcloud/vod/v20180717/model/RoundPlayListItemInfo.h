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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYLISTITEMINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYLISTITEMINFO_H_

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
                * Program information for carousel playback
                */
                class RoundPlayListItemInfo : public AbstractModel
                {
                public:
                    RoundPlayListItemInfo();
                    ~RoundPlayListItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media file identifier.
                     * @return FileId Media file identifier.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file identifier.
                     * @param _fileId Media file identifier.
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
                     * 获取Played audio and video type. Available values:
<li>Transcode: transcoding output. There will be multiple templates for transcoding output, and the Definition field must be specified.</li>
<li>Original: original audio/video.</li>
The format of Type must be HLS format.
                     * @return AudioVideoType Played audio and video type. Available values:
<li>Transcode: transcoding output. There will be multiple templates for transcoding output, and the Definition field must be specified.</li>
<li>Original: original audio/video.</li>
The format of Type must be HLS format.
                     * 
                     */
                    std::string GetAudioVideoType() const;

                    /**
                     * 设置Played audio and video type. Available values:
<li>Transcode: transcoding output. There will be multiple templates for transcoding output, and the Definition field must be specified.</li>
<li>Original: original audio/video.</li>
The format of Type must be HLS format.
                     * @param _audioVideoType Played audio and video type. Available values:
<li>Transcode: transcoding output. There will be multiple templates for transcoding output, and the Definition field must be specified.</li>
<li>Original: original audio/video.</li>
The format of Type must be HLS format.
                     * 
                     */
                    void SetAudioVideoType(const std::string& _audioVideoType);

                    /**
                     * 判断参数 AudioVideoType 是否已赋值
                     * @return AudioVideoType 是否已赋值
                     * 
                     */
                    bool AudioVideoTypeHasBeenSet() const;

                    /**
                     * 获取Program ID assigned by the system.
                     * @return ItemId Program ID assigned by the system.
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置Program ID assigned by the system.
                     * @param _itemId Program ID assigned by the system.
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取Specify the transcoding template for playback. This parameter is required when AudioVideoType is Transcode.
                     * @return Definition Specify the transcoding template for playback. This parameter is required when AudioVideoType is Transcode.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Specify the transcoding template for playback. This parameter is required when AudioVideoType is Transcode.
                     * @param _definition Specify the transcoding template for playback. This parameter is required when AudioVideoType is Transcode.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * Media file identifier.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Played audio and video type. Available values:
<li>Transcode: transcoding output. There will be multiple templates for transcoding output, and the Definition field must be specified.</li>
<li>Original: original audio/video.</li>
The format of Type must be HLS format.
                     */
                    std::string m_audioVideoType;
                    bool m_audioVideoTypeHasBeenSet;

                    /**
                     * Program ID assigned by the system.
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * Specify the transcoding template for playback. This parameter is required when AudioVideoType is Transcode.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYLISTITEMINFO_H_
