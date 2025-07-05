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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYENHANCETASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYENHANCETASKOUTPUT_H_

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
                * Output for media quality enhance task
                */
                class QualityEnhanceTaskOutput : public AbstractModel
                {
                public:
                    QualityEnhanceTaskOutput();
                    ~QualityEnhanceTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File types such as mp4, flv, etc.
                     * @return FileType File types such as mp4, flv, etc.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置File types such as mp4, flv, etc.
                     * @param _fileType File types such as mp4, flv, etc.
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
                     * 获取Output file name, up to 64 characters. By default, the generated file name is specified by the system.
                     * @return MediaName Output file name, up to 64 characters. By default, the generated file name is specified by the system.
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置Output file name, up to 64 characters. By default, the generated file name is specified by the system.
                     * @param _mediaName Output file name, up to 64 characters. By default, the generated file name is specified by the system.
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
                     * 获取Classification ID is used to classify media. You can create a classification through the [Create Classification](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) interface to obtain the classification ID. 
<li>Default value: 0, indicating other categories. </li>
                     * @return ClassId Classification ID is used to classify media. You can create a classification through the [Create Classification](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) interface to obtain the classification ID. 
<li>Default value: 0, indicating other categories. </li>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Classification ID is used to classify media. You can create a classification through the [Create Classification](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) interface to obtain the classification ID. 
<li>Default value: 0, indicating other categories. </li>
                     * @param _classId Classification ID is used to classify media. You can create a classification through the [Create Classification](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) interface to obtain the classification ID. 
<li>Default value: 0, indicating other categories. </li>
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
                     * 获取The expiration time of the output file. The file will be deleted after this time. The default is permanent and not expired. The format is expressed in accordance with the ISO 8601 standard. For details, see [ISO Date Format Description](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * @return ExpireTime The expiration time of the output file. The file will be deleted after this time. The default is permanent and not expired. The format is expressed in accordance with the ISO 8601 standard. For details, see [ISO Date Format Description](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置The expiration time of the output file. The file will be deleted after this time. The default is permanent and not expired. The format is expressed in accordance with the ISO 8601 standard. For details, see [ISO Date Format Description](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * @param _expireTime The expiration time of the output file. The file will be deleted after this time. The default is permanent and not expired. The format is expressed in accordance with the ISO 8601 standard. For details, see [ISO Date Format Description](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
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
                     * File types such as mp4, flv, etc.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * Media file playback address.
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * Media file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Output file name, up to 64 characters. By default, the generated file name is specified by the system.
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * Classification ID is used to classify media. You can create a classification through the [Create Classification](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) interface to obtain the classification ID. 
<li>Default value: 0, indicating other categories. </li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * The expiration time of the output file. The file will be deleted after this time. The default is permanent and not expired. The format is expressed in accordance with the ISO 8601 standard. For details, see [ISO Date Format Description](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYENHANCETASKOUTPUT_H_
