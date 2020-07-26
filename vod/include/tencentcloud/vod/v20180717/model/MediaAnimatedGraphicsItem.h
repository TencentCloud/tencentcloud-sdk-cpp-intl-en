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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAANIMATEDGRAPHICSITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAANIMATEDGRAPHICSITEM_H_

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
                * Result information of animated image generating task
                */
                class MediaAnimatedGraphicsItem : public AbstractModel
                {
                public:
                    MediaAnimatedGraphicsItem();
                    ~MediaAnimatedGraphicsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Address of generated animated image.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Url Address of generated animated image.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Address of generated animated image.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Url Address of generated animated image.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Animated image generating template ID. For more information, please see [Animated Image Generating Parameter Template](https://cloud.tencent.com/document/product/266/33481#.3Cspan-id-.3D-.22zdt.22.3E.3C.2Fspan.3E.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Definition Animated image generating template ID. For more information, please see [Animated Image Generating Parameter Template](https://cloud.tencent.com/document/product/266/33481#.3Cspan-id-.3D-.22zdt.22.3E.3C.2Fspan.3E.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Animated image generating template ID. For more information, please see [Animated Image Generating Parameter Template](https://cloud.tencent.com/document/product/266/33481#.3Cspan-id-.3D-.22zdt.22.3E.3C.2Fspan.3E.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Definition Animated image generating template ID. For more information, please see [Animated Image Generating Parameter Template](https://cloud.tencent.com/document/product/266/33481#.3Cspan-id-.3D-.22zdt.22.3E.3C.2Fspan.3E.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Animated image format, such as gif.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Container Animated image format, such as gif.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Animated image format, such as gif.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Container Animated image format, such as gif.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取Height of animated image in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Height Height of animated image in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Height of animated image in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Height Height of animated image in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Width of animated image in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Width Width of animated image in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Width of animated image in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Width Width of animated image in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Bitrate of animated image in bps.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Bitrate Bitrate of animated image in bps.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of animated image in bps.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Bitrate Bitrate of animated image in bps.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取Size of animated image in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Size Size of animated image in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Size of animated image in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Size Size of animated image in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取MD5 value of an animated image.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Md5 MD5 value of an animated image.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置MD5 value of an animated image.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Md5 MD5 value of an animated image.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取Start time offset of animated image in video in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StartTimeOffset Start time offset of animated image in video in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of animated image in video in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param StartTimeOffset Start time offset of animated image in video in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取End time offset of animated image in video in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EndTimeOffset End time offset of animated image in video in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of animated image in video in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EndTimeOffset End time offset of animated image in video in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * Address of generated animated image.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Animated image generating template ID. For more information, please see [Animated Image Generating Parameter Template](https://cloud.tencent.com/document/product/266/33481#.3Cspan-id-.3D-.22zdt.22.3E.3C.2Fspan.3E.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Animated image format, such as gif.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Height of animated image in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Width of animated image in px.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Bitrate of animated image in bps.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Size of animated image in bytes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * MD5 value of an animated image.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * Start time offset of animated image in video in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of animated image in video in seconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAANIMATEDGRAPHICSITEM_H_
