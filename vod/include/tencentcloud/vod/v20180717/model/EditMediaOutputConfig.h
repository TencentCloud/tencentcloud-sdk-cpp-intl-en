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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/EditMediaVideoStream.h>
#include <tencentcloud/vod/v20180717/model/EditMediaTEHDConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Result file output of edited video.
                */
                class EditMediaOutputConfig : public AbstractModel
                {
                public:
                    EditMediaOutputConfig();
                    ~EditMediaOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Output file format, optional values: mp4, hls. The default is mp4.
                     * @return Type Output file format, optional values: mp4, hls. The default is mp4.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Output file format, optional values: mp4, hls. The default is mp4.
                     * @param _type Output file format, optional values: mp4, hls. The default is mp4.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Classification ID is used to classify media. You can create a classification through the Create Classification interface to obtain the classification ID. 
<li>Default value: 0, indicating other categories. </li>
                     * @return ClassId Classification ID is used to classify media. You can create a classification through the Create Classification interface to obtain the classification ID. 
<li>Default value: 0, indicating other categories. </li>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Classification ID is used to classify media. You can create a classification through the Create Classification interface to obtain the classification ID. 
<li>Default value: 0, indicating other categories. </li>
                     * @param _classId Classification ID is used to classify media. You can create a classification through the Create Classification interface to obtain the classification ID. 
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

                    /**
                     * 获取Output video information.
                     * @return VideoStream Output video information.
                     * 
                     */
                    EditMediaVideoStream GetVideoStream() const;

                    /**
                     * 设置Output video information.
                     * @param _videoStream Output video information.
                     * 
                     */
                    void SetVideoStream(const EditMediaVideoStream& _videoStream);

                    /**
                     * 判断参数 VideoStream 是否已赋值
                     * @return VideoStream 是否已赋值
                     * 
                     */
                    bool VideoStreamHasBeenSet() const;

                    /**
                     * 获取TSC Transcoding Config.
                     * @return TEHDConfig TSC Transcoding Config.
                     * 
                     */
                    EditMediaTEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置TSC Transcoding Config.
                     * @param _tEHDConfig TSC Transcoding Config.
                     * 
                     */
                    void SetTEHDConfig(const EditMediaTEHDConfig& _tEHDConfig);

                    /**
                     * 判断参数 TEHDConfig 是否已赋值
                     * @return TEHDConfig 是否已赋值
                     * 
                     */
                    bool TEHDConfigHasBeenSet() const;

                private:

                    /**
                     * Output file name, up to 64 characters. By default, the generated file name is specified by the system.
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * Output file format, optional values: mp4, hls. The default is mp4.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Classification ID is used to classify media. You can create a classification through the Create Classification interface to obtain the classification ID. 
<li>Default value: 0, indicating other categories. </li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * The expiration time of the output file. The file will be deleted after this time. The default is permanent and not expired. The format is expressed in accordance with the ISO 8601 standard. For details, see [ISO Date Format Description](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Output video information.
                     */
                    EditMediaVideoStream m_videoStream;
                    bool m_videoStreamHasBeenSet;

                    /**
                     * TSC Transcoding Config.
                     */
                    EditMediaTEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAOUTPUTCONFIG_H_
