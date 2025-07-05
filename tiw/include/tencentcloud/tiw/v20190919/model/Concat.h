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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CONCAT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CONCAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Real-time recording video splicing parameter
                */
                class Concat : public AbstractModel
                {
                public:
                    Concat();
                    ~Concat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the video splicing feature
If the video splicing feature is enabled, the real-time recording service will splice multiple video clips resulting from the pause into one video.
                     * @return Enabled Whether to enable the video splicing feature
If the video splicing feature is enabled, the real-time recording service will splice multiple video clips resulting from the pause into one video.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Whether to enable the video splicing feature
If the video splicing feature is enabled, the real-time recording service will splice multiple video clips resulting from the pause into one video.
                     * @param _enabled Whether to enable the video splicing feature
If the video splicing feature is enabled, the real-time recording service will splice multiple video clips resulting from the pause into one video.
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Download address of the padding image used during video splicing. If it is not specified, a pure black image is used by default.
                     * @return Image Download address of the padding image used during video splicing. If it is not specified, a pure black image is used by default.
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置Download address of the padding image used during video splicing. If it is not specified, a pure black image is used by default.
                     * @param _image Download address of the padding image used during video splicing. If it is not specified, a pure black image is used by default.
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the video splicing feature
If the video splicing feature is enabled, the real-time recording service will splice multiple video clips resulting from the pause into one video.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Download address of the padding image used during video splicing. If it is not specified, a pure black image is used by default.
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CONCAT_H_
