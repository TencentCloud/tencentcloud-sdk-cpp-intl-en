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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAANIMATEDGRAPHICSITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAANIMATEDGRAPHICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Result information of an animated image generating task
                */
                class MediaAnimatedGraphicsItem : public AbstractModel
                {
                public:
                    MediaAnimatedGraphicsItem();
                    ~MediaAnimatedGraphicsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage location of a generated animated image file.
                     * @return Storage Storage location of a generated animated image file.
                     * 
                     */
                    TaskOutputStorage GetStorage() const;

                    /**
                     * 设置Storage location of a generated animated image file.
                     * @param _storage Storage location of a generated animated image file.
                     * 
                     */
                    void SetStorage(const TaskOutputStorage& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取Path to a generated animated image file.
                     * @return Path Path to a generated animated image file.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path to a generated animated image file.
                     * @param _path Path to a generated animated image file.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取ID of an animated image generating template. For more information, please see [Animated Image Generating Parameter Template](https://intl.cloud.tencent.com/document/product/266/33481?from_cn_redirect=1#.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * @return Definition ID of an animated image generating template. For more information, please see [Animated Image Generating Parameter Template](https://intl.cloud.tencent.com/document/product/266/33481?from_cn_redirect=1#.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置ID of an animated image generating template. For more information, please see [Animated Image Generating Parameter Template](https://intl.cloud.tencent.com/document/product/266/33481?from_cn_redirect=1#.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * @param _definition ID of an animated image generating template. For more information, please see [Animated Image Generating Parameter Template](https://intl.cloud.tencent.com/document/product/266/33481?from_cn_redirect=1#.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF).
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
                     * 获取Animated image format, such as gif.
                     * @return Container Animated image format, such as gif.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Animated image format, such as gif.
                     * @param _container Animated image format, such as gif.
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取Height of an animated image in px.
                     * @return Height Height of an animated image in px.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Height of an animated image in px.
                     * @param _height Height of an animated image in px.
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Width of an animated image in px.
                     * @return Width Width of an animated image in px.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Width of an animated image in px.
                     * @param _width Width of an animated image in px.
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Bitrate of an animated image in bps.
                     * @return Bitrate Bitrate of an animated image in bps.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Bitrate of an animated image in bps.
                     * @param _bitrate Bitrate of an animated image in bps.
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取Size of an animated image in bytes.
                     * @return Size Size of an animated image in bytes.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Size of an animated image in bytes.
                     * @param _size Size of an animated image in bytes.
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
                     * 获取MD5 value of an animated image.
                     * @return Md5 MD5 value of an animated image.
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置MD5 value of an animated image.
                     * @param _md5 MD5 value of an animated image.
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取Start time offset of an animated image in the video in seconds.
                     * @return StartTimeOffset Start time offset of an animated image in the video in seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of an animated image in the video in seconds.
                     * @param _startTimeOffset Start time offset of an animated image in the video in seconds.
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取End time offset of an animated image in the video in seconds.
                     * @return EndTimeOffset End time offset of an animated image in the video in seconds.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of an animated image in the video in seconds.
                     * @param _endTimeOffset End time offset of an animated image in the video in seconds.
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * Storage location of a generated animated image file.
                     */
                    TaskOutputStorage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * Path to a generated animated image file.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * ID of an animated image generating template. For more information, please see [Animated Image Generating Parameter Template](https://intl.cloud.tencent.com/document/product/266/33481?from_cn_redirect=1#.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Animated image format, such as gif.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Height of an animated image in px.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Width of an animated image in px.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Bitrate of an animated image in bps.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Size of an animated image in bytes.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * MD5 value of an animated image.
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * Start time offset of an animated image in the video in seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of an animated image in the video in seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAANIMATEDGRAPHICSITEM_H_
