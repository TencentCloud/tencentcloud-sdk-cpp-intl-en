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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASKOUTPUT_H_

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
                * Output of media file composing task.
                */
                class ComposeMediaTaskOutput : public AbstractModel
                {
                public:
                    ComposeMediaTaskOutput();
                    ~ComposeMediaTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File type, such as mp4 and mp3.
                     * @return FileType File type, such as mp4 and mp3.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File type, such as mp4 and mp3.
                     * @param _fileType File type, such as mp4 and mp3.
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
                     * 获取Media file ID.
                     * @return FileId Media file ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID.
                     * @param _fileId Media file ID.
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
                     * 获取Filename of up to 64 characters.
                     * @return MediaName Filename of up to 64 characters.
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置Filename of up to 64 characters.
                     * @param _mediaName Filename of up to 64 characters.
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
                     * 获取Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [category creating](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, which means "Other".</li>
                     * @return ClassId Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [category creating](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, which means "Other".</li>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [category creating](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, which means "Other".</li>
                     * @param _classId Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [category creating](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, which means "Other".</li>
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
                     * 获取Expiration time of output media file in ISO 8601 format, after which the file will be deleted. Files will never expire by default. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return ExpireTime Expiration time of output media file in ISO 8601 format, after which the file will be deleted. Files will never expire by default. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time of output media file in ISO 8601 format, after which the file will be deleted. Files will never expire by default. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _expireTime Expiration time of output media file in ISO 8601 format, after which the file will be deleted. Files will never expire by default. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * File type, such as mp4 and mp3.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Media file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Media file playback address.
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * Filename of up to 64 characters.
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [category creating](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, which means "Other".</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * Expiration time of output media file in ISO 8601 format, after which the file will be deleted. Files will never expire by default. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASKOUTPUT_H_
