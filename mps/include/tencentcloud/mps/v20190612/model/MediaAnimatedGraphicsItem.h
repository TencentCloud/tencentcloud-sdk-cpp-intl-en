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
                * Video motion graphic result information
                */
                class MediaAnimatedGraphicsItem : public AbstractModel
                {
                public:
                    MediaAnimatedGraphicsItem();
                    ~MediaAnimatedGraphicsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage location of the animated image file.
                     * @return Storage Storage location of the animated image file.
                     * 
                     */
                    TaskOutputStorage GetStorage() const;

                    /**
                     * 设置Storage location of the animated image file.
                     * @param _storage Storage location of the animated image file.
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
                     * 获取File path of the animated image.
                     * @return Path File path of the animated image.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置File path of the animated image.
                     * @param _path File path of the animated image.
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
                     * 获取Rotating image template ID. Please refer to the [Rotating Image Template](https://www.tencentcloud.com/document/product/862/77168?from_cn_redirect=1#.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF.5B.5D(id.3Amove)).
                     * @return Definition Rotating image template ID. Please refer to the [Rotating Image Template](https://www.tencentcloud.com/document/product/862/77168?from_cn_redirect=1#.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF.5B.5D(id.3Amove)).
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Rotating image template ID. Please refer to the [Rotating Image Template](https://www.tencentcloud.com/document/product/862/77168?from_cn_redirect=1#.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF.5B.5D(id.3Amove)).
                     * @param _definition Rotating image template ID. Please refer to the [Rotating Image Template](https://www.tencentcloud.com/document/product/862/77168?from_cn_redirect=1#.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF.5B.5D(id.3Amove)).
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
                     * 获取Animated image file format, for example gif.
                     * @return Container Animated image file format, for example gif.
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置Animated image file format, for example gif.
                     * @param _container Animated image file format, for example gif.
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
                     * 获取Height of the animated image, measurement unit: px.
                     * @return Height Height of the animated image, measurement unit: px.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Height of the animated image, measurement unit: px.
                     * @param _height Height of the animated image, measurement unit: px.
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
                     * 获取Width of the animated image, measurement unit: px.
                     * @return Width Width of the animated image, measurement unit: px.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Width of the animated image, measurement unit: px.
                     * @param _width Width of the animated image, measurement unit: px.
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
                     * 获取Animated image bitrate. Measurement unit: bps.
                     * @return Bitrate Animated image bitrate. Measurement unit: bps.
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置Animated image bitrate. Measurement unit: bps.
                     * @param _bitrate Animated image bitrate. Measurement unit: bps.
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
                     * 获取Animated image size, unit: byte.
                     * @return Size Animated image size, unit: byte.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Animated image size, unit: byte.
                     * @param _size Animated image size, unit: byte.
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
                     * 获取md5 value of the animated image.
                     * @return Md5 md5 value of the animated image.
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置md5 value of the animated image.
                     * @param _md5 md5 value of the animated image.
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
                     * 获取Start time offset of the GIF in the video, in seconds.
                     * @return StartTimeOffset Start time offset of the GIF in the video, in seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of the GIF in the video, in seconds.
                     * @param _startTimeOffset Start time offset of the GIF in the video, in seconds.
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
                     * 获取End time offset of the GIF in the video, in seconds.
                     * @return EndTimeOffset End time offset of the GIF in the video, in seconds.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of the GIF in the video, in seconds.
                     * @param _endTimeOffset End time offset of the GIF in the video, in seconds.
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
                     * Storage location of the animated image file.
                     */
                    TaskOutputStorage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * File path of the animated image.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Rotating image template ID. Please refer to the [Rotating Image Template](https://www.tencentcloud.com/document/product/862/77168?from_cn_redirect=1#.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF.5B.5D(id.3Amove)).
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Animated image file format, for example gif.
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * Height of the animated image, measurement unit: px.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Width of the animated image, measurement unit: px.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Animated image bitrate. Measurement unit: bps.
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * Animated image size, unit: byte.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * md5 value of the animated image.
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * Start time offset of the GIF in the video, in seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of the GIF in the video, in seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAANIMATEDGRAPHICSITEM_H_
