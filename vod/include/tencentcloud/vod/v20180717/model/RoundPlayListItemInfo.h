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
                * Carousel program information
                */
                class RoundPlayListItemInfo : public AbstractModel
                {
                public:
                    RoundPlayListItemInfo();
                    ~RoundPlayListItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The file ID.
                     * @return FileId The file ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The file ID.
                     * @param _fileId The file ID.
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
                     * 获取The type of the media played. Valid values:
<li>`Transcode`: A transcoding output. Because a file may be bound to multiple transcoding templates, you need to specify `Definition` if the type is `Transcode`.</li>
<li>`Original`: The original file.</li>
The file must be in HLS format.
                     * @return AudioVideoType The type of the media played. Valid values:
<li>`Transcode`: A transcoding output. Because a file may be bound to multiple transcoding templates, you need to specify `Definition` if the type is `Transcode`.</li>
<li>`Original`: The original file.</li>
The file must be in HLS format.
                     * 
                     */
                    std::string GetAudioVideoType() const;

                    /**
                     * 设置The type of the media played. Valid values:
<li>`Transcode`: A transcoding output. Because a file may be bound to multiple transcoding templates, you need to specify `Definition` if the type is `Transcode`.</li>
<li>`Original`: The original file.</li>
The file must be in HLS format.
                     * @param _audioVideoType The type of the media played. Valid values:
<li>`Transcode`: A transcoding output. Because a file may be bound to multiple transcoding templates, you need to specify `Definition` if the type is `Transcode`.</li>
<li>`Original`: The original file.</li>
The file must be in HLS format.
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
                     * 获取ID of the program to be played, assigned by the system.
                     * @return ItemId ID of the program to be played, assigned by the system.
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置ID of the program to be played, assigned by the system.
                     * @param _itemId ID of the program to be played, assigned by the system.
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
                     * 获取The transcoding template to be played is specified. this parameter is required if `audiovideotype` is `transcode`.
                     * @return Definition The transcoding template to be played is specified. this parameter is required if `audiovideotype` is `transcode`.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置The transcoding template to be played is specified. this parameter is required if `audiovideotype` is `transcode`.
                     * @param _definition The transcoding template to be played is specified. this parameter is required if `audiovideotype` is `transcode`.
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
                     * The file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * The type of the media played. Valid values:
<li>`Transcode`: A transcoding output. Because a file may be bound to multiple transcoding templates, you need to specify `Definition` if the type is `Transcode`.</li>
<li>`Original`: The original file.</li>
The file must be in HLS format.
                     */
                    std::string m_audioVideoType;
                    bool m_audioVideoTypeHasBeenSet;

                    /**
                     * ID of the program to be played, assigned by the system.
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * The transcoding template to be played is specified. this parameter is required if `audiovideotype` is `transcode`.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYLISTITEMINFO_H_
