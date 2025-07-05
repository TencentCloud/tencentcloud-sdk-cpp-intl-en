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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_JUSTINTIMETRANSCODETEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_JUSTINTIMETRANSCODETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/WatermarkConfigureData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Just In Time transcoding template details.
                */
                class JustInTimeTranscodeTemplate : public AbstractModel
                {
                public:
                    JustInTimeTranscodeTemplate();
                    ~JustInTimeTranscodeTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template type.
                     * @return Type Template type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type.
                     * @param _type Template type.
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
                     * 获取Template name.
                     * @return Name Template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Template name.
                     * @param _name Template name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Template description.
                     * @return Comment Template description.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description.
                     * @param _comment Template description.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Video parameter configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VideoConfigure Video parameter configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    VideoConfigureInfo GetVideoConfigure() const;

                    /**
                     * 设置Video parameter configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _videoConfigure Video parameter configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVideoConfigure(const VideoConfigureInfo& _videoConfigure);

                    /**
                     * 判断参数 VideoConfigure 是否已赋值
                     * @return VideoConfigure 是否已赋值
                     * 
                     */
                    bool VideoConfigureHasBeenSet() const;

                    /**
                     * 获取Watermark parameter configuration. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WatermarkConfigure Watermark parameter configuration. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    WatermarkConfigureData GetWatermarkConfigure() const;

                    /**
                     * 设置Watermark parameter configuration. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _watermarkConfigure Watermark parameter configuration. 
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWatermarkConfigure(const WatermarkConfigureData& _watermarkConfigure);

                    /**
                     * 判断参数 WatermarkConfigure 是否已赋值
                     * @return WatermarkConfigure 是否已赋值
                     * 
                     */
                    bool WatermarkConfigureHasBeenSet() const;

                private:

                    /**
                     * Template type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Video parameter configuration.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    VideoConfigureInfo m_videoConfigure;
                    bool m_videoConfigureHasBeenSet;

                    /**
                     * Watermark parameter configuration. 
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    WatermarkConfigureData m_watermarkConfigure;
                    bool m_watermarkConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_JUSTINTIMETRANSCODETEMPLATE_H_
