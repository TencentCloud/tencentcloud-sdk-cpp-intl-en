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
                * Page recording control parameters
                */
                class WebRecordVideoParams : public AbstractModel
                {
                public:
                    WebRecordVideoParams();
                    ~WebRecordVideoParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recording screen width, defaults to 1280, value range [0, 1920]
                     * @return Width Recording screen width, defaults to 1280, value range [0, 1920]
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Recording screen width, defaults to 1280, value range [0, 1920]
                     * @param _width Recording screen width, defaults to 1280, value range [0, 1920]
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
                     * 获取Recording screen height, defaults to 720, value range [0, 1080]
                     * @return Height Recording screen height, defaults to 720, value range [0, 1080]
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Recording screen height, defaults to 720, value range [0, 1080]
                     * @param _height Recording screen height, defaults to 720, value range [0, 1080]
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
                     * 获取Specify the output format, optional hls, mp4. When storing to VOD, this parameter is invalid; please use the MediaType setting within TencentVod (https://cloud.tencent.com/document/api/647/44055#TencentVod).
 
                     * @return Format Specify the output format, optional hls, mp4. When storing to VOD, this parameter is invalid; please use the MediaType setting within TencentVod (https://cloud.tencent.com/document/api/647/44055#TencentVod).
 
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Specify the output format, optional hls, mp4. When storing to VOD, this parameter is invalid; please use the MediaType setting within TencentVod (https://cloud.tencent.com/document/api/647/44055#TencentVod).
 
                     * @param _format Specify the output format, optional hls, mp4. When storing to VOD, this parameter is invalid; please use the MediaType setting within TencentVod (https://cloud.tencent.com/document/api/647/44055#TencentVod).
 
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
                     * 获取If the file format is aac or mp4, the system will automatically split the video file when it exceeds the length limit. Unit: minutes. Default: 1440 min (24h), value range: 1-1440. [Single file size is limited to a maximum of 2G. Files will be automatically split if either condition is met: file size >2G or recording duration > 24h]
This parameter does not take effect for Hls format recordings.
Sample value: 1440
                     * @return MaxMediaFileDuration If the file format is aac or mp4, the system will automatically split the video file when it exceeds the length limit. Unit: minutes. Default: 1440 min (24h), value range: 1-1440. [Single file size is limited to a maximum of 2G. Files will be automatically split if either condition is met: file size >2G or recording duration > 24h]
This parameter does not take effect for Hls format recordings.
Sample value: 1440
                     * 
                     */
                    int64_t GetMaxMediaFileDuration() const;

                    /**
                     * 设置If the file format is aac or mp4, the system will automatically split the video file when it exceeds the length limit. Unit: minutes. Default: 1440 min (24h), value range: 1-1440. [Single file size is limited to a maximum of 2G. Files will be automatically split if either condition is met: file size >2G or recording duration > 24h]
This parameter does not take effect for Hls format recordings.
Sample value: 1440
                     * @param _maxMediaFileDuration If the file format is aac or mp4, the system will automatically split the video file when it exceeds the length limit. Unit: minutes. Default: 1440 min (24h), value range: 1-1440. [Single file size is limited to a maximum of 2G. Files will be automatically split if either condition is met: file size >2G or recording duration > 24h]
This parameter does not take effect for Hls format recordings.
Sample value: 1440
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
                     * Recording screen width, defaults to 1280, value range [0, 1920]
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Recording screen height, defaults to 720, value range [0, 1080]
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Specify the output format, optional hls, mp4. When storing to VOD, this parameter is invalid; please use the MediaType setting within TencentVod (https://cloud.tencent.com/document/api/647/44055#TencentVod).
 
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * If the file format is aac or mp4, the system will automatically split the video file when it exceeds the length limit. Unit: minutes. Default: 1440 min (24h), value range: 1-1440. [Single file size is limited to a maximum of 2G. Files will be automatically split if either condition is met: file size >2G or recording duration > 24h]
This parameter does not take effect for Hls format recordings.
Sample value: 1440
                     */
                    int64_t m_maxMediaFileDuration;
                    bool m_maxMediaFileDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_WEBRECORDVIDEOPARAMS_H_
