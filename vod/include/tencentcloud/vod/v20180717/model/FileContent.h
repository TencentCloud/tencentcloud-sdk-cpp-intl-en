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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FILECONTENT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FILECONTENT_H_

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
                * Files stored in VOD.
                */
                class FileContent : public AbstractModel
                {
                public:
                    FileContent();
                    ~FileContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Object key.
                     * @return Key Object key.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Object key.
                     * @param _key Object key.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Last modification time in ISO8601 format, such as 2019-05-24T10:56:40Z.
                     * @return LastModified Last modification time in ISO8601 format, such as 2019-05-24T10:56:40Z.
                     * 
                     */
                    std::string GetLastModified() const;

                    /**
                     * 设置Last modification time in ISO8601 format, such as 2019-05-24T10:56:40Z.
                     * @param _lastModified Last modification time in ISO8601 format, such as 2019-05-24T10:56:40Z.
                     * 
                     */
                    void SetLastModified(const std::string& _lastModified);

                    /**
                     * 判断参数 LastModified 是否已赋值
                     * @return LastModified 是否已赋值
                     * 
                     */
                    bool LastModifiedHasBeenSet() const;

                    /**
                     * 获取The Entity Tag of an object is an information Tag that identifies the object content when the object is created. It can be used to check whether the object content has changed.
                     * @return ETag The Entity Tag of an object is an information Tag that identifies the object content when the object is created. It can be used to check whether the object content has changed.
                     * 
                     */
                    std::string GetETag() const;

                    /**
                     * 设置The Entity Tag of an object is an information Tag that identifies the object content when the object is created. It can be used to check whether the object content has changed.
                     * @param _eTag The Entity Tag of an object is an information Tag that identifies the object content when the object is created. It can be used to check whether the object content has changed.
                     * 
                     */
                    void SetETag(const std::string& _eTag);

                    /**
                     * 判断参数 ETag 是否已赋值
                     * @return ETag 是否已赋值
                     * 
                     */
                    bool ETagHasBeenSet() const;

                    /**
                     * 获取Object size in bytes.
                     * @return Size Object size in bytes.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Object size in bytes.
                     * @param _size Object size in bytes.
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取For enumeration values, please refer to the storage type document (https://www.tencentcloud.com/document/product/436/33417?from_cn_redirect=1), such as STANDARD_IA and ARCHIVE.
                     * @return StorageClass For enumeration values, please refer to the storage type document (https://www.tencentcloud.com/document/product/436/33417?from_cn_redirect=1), such as STANDARD_IA and ARCHIVE.
                     * 
                     */
                    std::string GetStorageClass() const;

                    /**
                     * 设置For enumeration values, please refer to the storage type document (https://www.tencentcloud.com/document/product/436/33417?from_cn_redirect=1), such as STANDARD_IA and ARCHIVE.
                     * @param _storageClass For enumeration values, please refer to the storage type document (https://www.tencentcloud.com/document/product/436/33417?from_cn_redirect=1), such as STANDARD_IA and ARCHIVE.
                     * 
                     */
                    void SetStorageClass(const std::string& _storageClass);

                    /**
                     * 判断参数 StorageClass 是否已赋值
                     * @return StorageClass 是否已赋值
                     * 
                     */
                    bool StorageClassHasBeenSet() const;

                    /**
                     * 获取Unique identifier of the media file for this file.
                     * @return FileId Unique identifier of the media file for this file.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Unique identifier of the media file for this file.
                     * @param _fileId Unique identifier of the media file for this file.
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
                     * 获取File classification: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li> <li>Other: other files</li>
                     * @return Category File classification: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li> <li>Other: other files</li>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置File classification: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li> <li>Other: other files</li>
                     * @param _category File classification: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li> <li>Other: other files</li>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Optional values:
-OriginalFiles: source file
-TranscodeFiles: transcoded file
-AdaptiveDynamicStreamingFiles: Convert to adaptive bitrate stream file.
-SubtitleFiles: Subtitle file
-SampleSnapshotFiles: sampled screenshot files.
-ImageSpriteFiles: Sprite image screenshot files
-SnapshotByTimeOffsetFiles: Time point screenshot files.

                     * @return FileType Optional values:
-OriginalFiles: source file
-TranscodeFiles: transcoded file
-AdaptiveDynamicStreamingFiles: Convert to adaptive bitrate stream file.
-SubtitleFiles: Subtitle file
-SampleSnapshotFiles: sampled screenshot files.
-ImageSpriteFiles: Sprite image screenshot files
-SnapshotByTimeOffsetFiles: Time point screenshot files.

                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Optional values:
-OriginalFiles: source file
-TranscodeFiles: transcoded file
-AdaptiveDynamicStreamingFiles: Convert to adaptive bitrate stream file.
-SubtitleFiles: Subtitle file
-SampleSnapshotFiles: sampled screenshot files.
-ImageSpriteFiles: Sprite image screenshot files
-SnapshotByTimeOffsetFiles: Time point screenshot files.

                     * @param _fileType Optional values:
-OriginalFiles: source file
-TranscodeFiles: transcoded file
-AdaptiveDynamicStreamingFiles: Convert to adaptive bitrate stream file.
-SubtitleFiles: Subtitle file
-SampleSnapshotFiles: sampled screenshot files.
-ImageSpriteFiles: Sprite image screenshot files
-SnapshotByTimeOffsetFiles: Time point screenshot files.

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
                     * 获取Video template ID. For template definition, please refer to transcoding template.
                     * @return Definition Video template ID. For template definition, please refer to transcoding template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Video template ID. For template definition, please refer to transcoding template.
                     * @param _definition Video template ID. For template definition, please refer to transcoding template.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Subtitle ID.
Only valid when FileType=SubtitleFiles.
                     * @return SubtitleID Subtitle ID.
Only valid when FileType=SubtitleFiles.
                     * 
                     */
                    std::string GetSubtitleID() const;

                    /**
                     * 设置Subtitle ID.
Only valid when FileType=SubtitleFiles.
                     * @param _subtitleID Subtitle ID.
Only valid when FileType=SubtitleFiles.
                     * 
                     */
                    void SetSubtitleID(const std::string& _subtitleID);

                    /**
                     * 判断参数 SubtitleID 是否已赋值
                     * @return SubtitleID 是否已赋值
                     * 
                     */
                    bool SubtitleIDHasBeenSet() const;

                private:

                    /**
                     * Object key.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Last modification time in ISO8601 format, such as 2019-05-24T10:56:40Z.
                     */
                    std::string m_lastModified;
                    bool m_lastModifiedHasBeenSet;

                    /**
                     * The Entity Tag of an object is an information Tag that identifies the object content when the object is created. It can be used to check whether the object content has changed.
                     */
                    std::string m_eTag;
                    bool m_eTagHasBeenSet;

                    /**
                     * Object size in bytes.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * For enumeration values, please refer to the storage type document (https://www.tencentcloud.com/document/product/436/33417?from_cn_redirect=1), such as STANDARD_IA and ARCHIVE.
                     */
                    std::string m_storageClass;
                    bool m_storageClassHasBeenSet;

                    /**
                     * Unique identifier of the media file for this file.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * File classification: <li>Video: video file</li> <li>Audio: audio file</li> <li>Image: image file</li> <li>Other: other files</li>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Optional values:
-OriginalFiles: source file
-TranscodeFiles: transcoded file
-AdaptiveDynamicStreamingFiles: Convert to adaptive bitrate stream file.
-SubtitleFiles: Subtitle file
-SampleSnapshotFiles: sampled screenshot files.
-ImageSpriteFiles: Sprite image screenshot files
-SnapshotByTimeOffsetFiles: Time point screenshot files.

                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Video template ID. For template definition, please refer to transcoding template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Subtitle ID.
Only valid when FileType=SubtitleFiles.
                     */
                    std::string m_subtitleID;
                    bool m_subtitleIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FILECONTENT_H_
