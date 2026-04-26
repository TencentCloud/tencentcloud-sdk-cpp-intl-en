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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_WEBRECORDVIDEOPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_WEBRECORDVIDEOPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Recording control parameters.
                */
                class WebRecordVideoParams : public AbstractModel
                {
                public:
                    WebRecordVideoParams();
                    ~WebRecordVideoParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recording image width defaults to 1280, with a value range of [0, 1920].
                     * @return Width Recording image width defaults to 1280, with a value range of [0, 1920].
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Recording image width defaults to 1280, with a value range of [0, 1920].
                     * @param _width Recording image width defaults to 1280, with a value range of [0, 1920].
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Recording image height, defaults to 720, in the range of [0, 1080].
                     * @return Height Recording image height, defaults to 720, in the range of [0, 1080].
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Recording image height, defaults to 720, in the range of [0, 1080].
                     * @param _height Recording image height, defaults to 720, in the range of [0, 1080].
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Specify output format. valid values: hls, mp4. this parameter is invalid when storing in VOD. to store in VOD, set MediaType in TencentVod (https://www.tencentcloud.comom/document/api/647/44055?from_cn_redirect=1#TencentVod).

                     * @return Format Specify output format. valid values: hls, mp4. this parameter is invalid when storing in VOD. to store in VOD, set MediaType in TencentVod (https://www.tencentcloud.comom/document/api/647/44055?from_cn_redirect=1#TencentVod).

                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Specify output format. valid values: hls, mp4. this parameter is invalid when storing in VOD. to store in VOD, set MediaType in TencentVod (https://www.tencentcloud.comom/document/api/647/44055?from_cn_redirect=1#TencentVod).

                     * @param _format Specify output format. valid values: hls, mp4. this parameter is invalid when storing in VOD. to store in VOD, set MediaType in TencentVod (https://www.tencentcloud.comom/document/api/647/44055?from_cn_redirect=1#TencentVod).

                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取If the file format is aac or mp4, the system will automatically split the video file when the length limit is exceeded. measurement unit: minute. defaults to 1440 min (24h). value range: 1-1440. [single file limit is 2G. if file size exceeds 2G or recording duration exceeds 24h, the file will be automatically split.].
Hls format recording. this parameter is not effective.
Example value: 1440.
                     * @return MaxMediaFileDuration If the file format is aac or mp4, the system will automatically split the video file when the length limit is exceeded. measurement unit: minute. defaults to 1440 min (24h). value range: 1-1440. [single file limit is 2G. if file size exceeds 2G or recording duration exceeds 24h, the file will be automatically split.].
Hls format recording. this parameter is not effective.
Example value: 1440.
                     * 
                     */
                    int64_t GetMaxMediaFileDuration() const;

                    /**
                     * 设置If the file format is aac or mp4, the system will automatically split the video file when the length limit is exceeded. measurement unit: minute. defaults to 1440 min (24h). value range: 1-1440. [single file limit is 2G. if file size exceeds 2G or recording duration exceeds 24h, the file will be automatically split.].
Hls format recording. this parameter is not effective.
Example value: 1440.
                     * @param _maxMediaFileDuration If the file format is aac or mp4, the system will automatically split the video file when the length limit is exceeded. measurement unit: minute. defaults to 1440 min (24h). value range: 1-1440. [single file limit is 2G. if file size exceeds 2G or recording duration exceeds 24h, the file will be automatically split.].
Hls format recording. this parameter is not effective.
Example value: 1440.
                     * 
                     */
                    void SetMaxMediaFileDuration(const int64_t& _maxMediaFileDuration);

                    /**
                     * 判断参数 MaxMediaFileDuration 是否已赋值
                     * @return MaxMediaFileDuration 是否已赋值
                     * 
                     */
                    bool MaxMediaFileDurationHasBeenSet() const;

                private:

                    /**
                     * Recording image width defaults to 1280, with a value range of [0, 1920].
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Recording image height, defaults to 720, in the range of [0, 1080].
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Specify output format. valid values: hls, mp4. this parameter is invalid when storing in VOD. to store in VOD, set MediaType in TencentVod (https://www.tencentcloud.comom/document/api/647/44055?from_cn_redirect=1#TencentVod).

                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * If the file format is aac or mp4, the system will automatically split the video file when the length limit is exceeded. measurement unit: minute. defaults to 1440 min (24h). value range: 1-1440. [single file limit is 2G. if file size exceeds 2G or recording duration exceeds 24h, the file will be automatically split.].
Hls format recording. this parameter is not effective.
Example value: 1440.
                     */
                    int64_t m_maxMediaFileDuration;
                    bool m_maxMediaFileDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_WEBRECORDVIDEOPARAMS_H_
