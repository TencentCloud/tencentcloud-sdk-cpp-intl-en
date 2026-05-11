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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSOUTPUTFILE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSOUTPUTFILE_H_

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
                * For description of the returned file in an MPS video processing task.
                */
                class MPSOutputFile : public AbstractModel
                {
                public:
                    MPSOutputFile();
                    ~MPSOutputFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File type. Used to identify specific return files in the execution result of an MPS video processing task.
Value: <li>AiAnalysis.DeLogo.Video: The erased video file generated in the intelligent erasure task, stored in the original file type by default;</li> <li>AiAnalysis.DeLogo.OriginSubtitle: The subtitle file extracted from video in the intelligent erasure task;</li> <li>AiAnalysis.DeLogo.TranslateSubtitle: The translation file of subtitles extracted from video in the intelligent erasure task.</li> <li>MediaProcess.Transcode.Video: The enhanced audio and video file in the audio and video enhancement task, stored in the transcoded file type by default.</li>
<li>AiAnalysis.HorizontalToVerticalTask.Video: The generated video file in the horizontal to vertical task is stored as an intelligent media type by default.</li>
<li>AiAnalysis.VideoRemakeTaskk.Video: The generated video file in the intelligent deduplication task, stored as an intelligent media type by default.</li>
<li>AiAnalysis.SegmentTask.Video: Generated video file in the intelligent video splitting task, stored as intelligent media type by default.</li>
<li>SmartErase.Video: Generated video file in the intelligent erasure task, stored as intelligent media type by default.</li>

                     * @return FileType File type. Used to identify specific return files in the execution result of an MPS video processing task.
Value: <li>AiAnalysis.DeLogo.Video: The erased video file generated in the intelligent erasure task, stored in the original file type by default;</li> <li>AiAnalysis.DeLogo.OriginSubtitle: The subtitle file extracted from video in the intelligent erasure task;</li> <li>AiAnalysis.DeLogo.TranslateSubtitle: The translation file of subtitles extracted from video in the intelligent erasure task.</li> <li>MediaProcess.Transcode.Video: The enhanced audio and video file in the audio and video enhancement task, stored in the transcoded file type by default.</li>
<li>AiAnalysis.HorizontalToVerticalTask.Video: The generated video file in the horizontal to vertical task is stored as an intelligent media type by default.</li>
<li>AiAnalysis.VideoRemakeTaskk.Video: The generated video file in the intelligent deduplication task, stored as an intelligent media type by default.</li>
<li>AiAnalysis.SegmentTask.Video: Generated video file in the intelligent video splitting task, stored as intelligent media type by default.</li>
<li>SmartErase.Video: Generated video file in the intelligent erasure task, stored as intelligent media type by default.</li>

                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File type. Used to identify specific return files in the execution result of an MPS video processing task.
Value: <li>AiAnalysis.DeLogo.Video: The erased video file generated in the intelligent erasure task, stored in the original file type by default;</li> <li>AiAnalysis.DeLogo.OriginSubtitle: The subtitle file extracted from video in the intelligent erasure task;</li> <li>AiAnalysis.DeLogo.TranslateSubtitle: The translation file of subtitles extracted from video in the intelligent erasure task.</li> <li>MediaProcess.Transcode.Video: The enhanced audio and video file in the audio and video enhancement task, stored in the transcoded file type by default.</li>
<li>AiAnalysis.HorizontalToVerticalTask.Video: The generated video file in the horizontal to vertical task is stored as an intelligent media type by default.</li>
<li>AiAnalysis.VideoRemakeTaskk.Video: The generated video file in the intelligent deduplication task, stored as an intelligent media type by default.</li>
<li>AiAnalysis.SegmentTask.Video: Generated video file in the intelligent video splitting task, stored as intelligent media type by default.</li>
<li>SmartErase.Video: Generated video file in the intelligent erasure task, stored as intelligent media type by default.</li>

                     * @param _fileType File type. Used to identify specific return files in the execution result of an MPS video processing task.
Value: <li>AiAnalysis.DeLogo.Video: The erased video file generated in the intelligent erasure task, stored in the original file type by default;</li> <li>AiAnalysis.DeLogo.OriginSubtitle: The subtitle file extracted from video in the intelligent erasure task;</li> <li>AiAnalysis.DeLogo.TranslateSubtitle: The translation file of subtitles extracted from video in the intelligent erasure task.</li> <li>MediaProcess.Transcode.Video: The enhanced audio and video file in the audio and video enhancement task, stored in the transcoded file type by default.</li>
<li>AiAnalysis.HorizontalToVerticalTask.Video: The generated video file in the horizontal to vertical task is stored as an intelligent media type by default.</li>
<li>AiAnalysis.VideoRemakeTaskk.Video: The generated video file in the intelligent deduplication task, stored as an intelligent media type by default.</li>
<li>AiAnalysis.SegmentTask.Video: Generated video file in the intelligent video splitting task, stored as intelligent media type by default.</li>
<li>SmartErase.Video: Generated video file in the intelligent erasure task, stored as intelligent media type by default.</li>

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
                     * 获取Storage format. To represent the storage format of the result file. Valid values: <li>Permanent: permanent storage;</li> <li>Temporary: temporary storage.</li>
                     * @return StorageMode Storage format. To represent the storage format of the result file. Valid values: <li>Permanent: permanent storage;</li> <li>Temporary: temporary storage.</li>
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置Storage format. To represent the storage format of the result file. Valid values: <li>Permanent: permanent storage;</li> <li>Temporary: temporary storage.</li>
                     * @param _storageMode Storage format. To represent the storage format of the result file. Valid values: <li>Permanent: permanent storage;</li> <li>Temporary: temporary storage.</li>
                     * 
                     */
                    void SetStorageMode(const std::string& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     * 
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取Media file ID. Valid when Type is Permanent, indicating that the result file is stored as a media asset on the VOD platform, with the field value being the FileId of the media asset.
                     * @return FileId Media file ID. Valid when Type is Permanent, indicating that the result file is stored as a media asset on the VOD platform, with the field value being the FileId of the media asset.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID. Valid when Type is Permanent, indicating that the result file is stored as a media asset on the VOD platform, with the field value being the FileId of the media asset.
                     * @param _fileId Media file ID. Valid when Type is Permanent, indicating that the result file is stored as a media asset on the VOD platform, with the field value being the FileId of the media asset.
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
                     * 获取Downloadable Url of the result file.
                     * @return Url Downloadable Url of the result file.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Downloadable Url of the result file.
                     * @param _url Downloadable Url of the result file.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Transcoding specification ID. Valid when FileType equals MediaProcess.Transcode.Video. A value of 0 means the original file.
                     * @return Definition Transcoding specification ID. Valid when FileType equals MediaProcess.Transcode.Video. A value of 0 means the original file.
                     * 
                     */
                    std::string GetDefinition() const;

                    /**
                     * 设置Transcoding specification ID. Valid when FileType equals MediaProcess.Transcode.Video. A value of 0 means the original file.
                     * @param _definition Transcoding specification ID. Valid when FileType equals MediaProcess.Transcode.Video. A value of 0 means the original file.
                     * 
                     */
                    void SetDefinition(const std::string& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Expiration time. Valid when StorageMode is Temporary, indicates the expiry date of the Url, in seconds.
                     * @return ExpiredTime Expiration time. Valid when StorageMode is Temporary, indicates the expiry date of the Url, in seconds.
                     * 
                     */
                    uint64_t GetExpiredTime() const;

                    /**
                     * 设置Expiration time. Valid when StorageMode is Temporary, indicates the expiry date of the Url, in seconds.
                     * @param _expiredTime Expiration time. Valid when StorageMode is Temporary, indicates the expiry date of the Url, in seconds.
                     * 
                     */
                    void SetExpiredTime(const uint64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * File type. Used to identify specific return files in the execution result of an MPS video processing task.
Value: <li>AiAnalysis.DeLogo.Video: The erased video file generated in the intelligent erasure task, stored in the original file type by default;</li> <li>AiAnalysis.DeLogo.OriginSubtitle: The subtitle file extracted from video in the intelligent erasure task;</li> <li>AiAnalysis.DeLogo.TranslateSubtitle: The translation file of subtitles extracted from video in the intelligent erasure task.</li> <li>MediaProcess.Transcode.Video: The enhanced audio and video file in the audio and video enhancement task, stored in the transcoded file type by default.</li>
<li>AiAnalysis.HorizontalToVerticalTask.Video: The generated video file in the horizontal to vertical task is stored as an intelligent media type by default.</li>
<li>AiAnalysis.VideoRemakeTaskk.Video: The generated video file in the intelligent deduplication task, stored as an intelligent media type by default.</li>
<li>AiAnalysis.SegmentTask.Video: Generated video file in the intelligent video splitting task, stored as intelligent media type by default.</li>
<li>SmartErase.Video: Generated video file in the intelligent erasure task, stored as intelligent media type by default.</li>

                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Storage format. To represent the storage format of the result file. Valid values: <li>Permanent: permanent storage;</li> <li>Temporary: temporary storage.</li>
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * Media file ID. Valid when Type is Permanent, indicating that the result file is stored as a media asset on the VOD platform, with the field value being the FileId of the media asset.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Downloadable Url of the result file.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Transcoding specification ID. Valid when FileType equals MediaProcess.Transcode.Video. A value of 0 means the original file.
                     */
                    std::string m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Expiration time. Valid when StorageMode is Temporary, indicates the expiry date of the Url, in seconds.
                     */
                    uint64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSOUTPUTFILE_H_
