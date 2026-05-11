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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASKOUTPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASKOUTPUTFILEINFO_H_

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
                * Scenario-based output file info of the AIGC image generation task.
                */
                class SceneAigcImageTaskOutputFileInfo : public AbstractModel
                {
                public:
                    SceneAigcImageTaskOutputFileInfo();
                    ~SceneAigcImageTaskOutputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage mode. Valid values: <li>Permanent: retained permanently;</li> <li>Temporary: temporary storage;</li>

                     * @return StorageMode Storage mode. Valid values: <li>Permanent: retained permanently;</li> <li>Temporary: temporary storage;</li>

                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置Storage mode. Valid values: <li>Permanent: retained permanently;</li> <li>Temporary: temporary storage;</li>

                     * @param _storageMode Storage mode. Valid values: <li>Permanent: retained permanently;</li> <li>Temporary: temporary storage;</li>

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
                     * 获取Output filename, up to 64 characters. Default filename is specified generation by system. Valid when StorageMode is Permanent.
                     * @return MediaName Output filename, up to 64 characters. Default filename is specified generation by system. Valid when StorageMode is Permanent.
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置Output filename, up to 64 characters. Default filename is specified generation by system. Valid when StorageMode is Permanent.
                     * @param _mediaName Output filename, up to 64 characters. Default filename is specified generation by system. Valid when StorageMode is Permanent.
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
                     * 获取Category ID, used to categorize and manage media. You can create a category and obtain the category ID through the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API. Valid when StorageMode is Permanent.

                     * @return ClassId Category ID, used to categorize and manage media. You can create a category and obtain the category ID through the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API. Valid when StorageMode is Permanent.

                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID, used to categorize and manage media. You can create a category and obtain the category ID through the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API. Valid when StorageMode is Permanent.

                     * @param _classId Category ID, used to categorize and manage media. You can create a category and obtain the category ID through the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API. Valid when StorageMode is Permanent.

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
                     * 获取Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return ExpireTime Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _expireTime Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取File type, such as mp4, flv.
                     * @return FileType File type, such as mp4, flv.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File type, such as mp4, flv.
                     * @param _fileType File type, such as mp4, flv.
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
                     * 获取Media file playback address.
                     * @return FileUrl Media file playback address.
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置Media file playback address.
                     * @param _fileUrl Media file playback address.
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
                     * 获取Media file ID. Valid when StorageMode is Permanent.
                     * @return FileId Media file ID. Valid when StorageMode is Permanent.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID. Valid when StorageMode is Permanent.
                     * @param _fileId Media file ID. Valid when StorageMode is Permanent.
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
                     * 获取Output video meta information. Valid when StorageMode is Permanent.
                     * @return MetaData Output video meta information. Valid when StorageMode is Permanent.
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置Output video meta information. Valid when StorageMode is Permanent.
                     * @param _metaData Output video meta information. Valid when StorageMode is Permanent.
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
                     * Storage mode. Valid values: <li>Permanent: retained permanently;</li> <li>Temporary: temporary storage;</li>

                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * Output filename, up to 64 characters. Default filename is specified generation by system. Valid when StorageMode is Permanent.
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * Category ID, used to categorize and manage media. You can create a category and obtain the category ID through the [create category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API. Valid when StorageMode is Permanent.

                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * Expiry date of the output file. Files will be deleted longer than this time. Default is no expiration. Format according to ISO 8601 standard. For details, see [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * File type, such as mp4, flv.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Media file playback address.
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * Media file ID. Valid when StorageMode is Permanent.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Output video meta information. Valid when StorageMode is Permanent.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SCENEAIGCIMAGETASKOUTPUTFILEINFO_H_
