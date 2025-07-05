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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REMOVEWATERMARKTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REMOVEWATERMARKTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The output of a watermark removal task.
                */
                class RemoveWaterMarkTaskOutput : public AbstractModel
                {
                public:
                    RemoveWaterMarkTaskOutput();
                    ~RemoveWaterMarkTaskOutput() = default;
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
                     * 获取The file type, such as MP4 or MP3.
                     * @return FileType The file type, such as MP4 or MP3.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置The file type, such as MP4 or MP3.
                     * @param _fileType The file type, such as MP4 or MP3.
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
                     * 获取The playback URL of the output file.
                     * @return FileUrl The playback URL of the output file.
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置The playback URL of the output file.
                     * @param _fileUrl The playback URL of the output file.
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取The filename, which can be up to 64 characters long.
                     * @return MediaName The filename, which can be up to 64 characters long.
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置The filename, which can be up to 64 characters long.
                     * @param _mediaName The filename, which can be up to 64 characters long.
                     * 
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     * 
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取The metadata of the video, including size, duration, video stream information, and audio stream information.
                     * @return MetaData The metadata of the video, including size, duration, video stream information, and audio stream information.
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置The metadata of the video, including size, duration, video stream information, and audio stream information.
                     * @param _metaData The metadata of the video, including size, duration, video stream information, and audio stream information.
                     * 
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                private:

                    /**
                     * The file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * The file type, such as MP4 or MP3.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * The playback URL of the output file.
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * The filename, which can be up to 64 characters long.
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * The metadata of the video, including size, duration, video stream information, and audio stream information.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REMOVEWATERMARKTASKOUTPUT_H_
