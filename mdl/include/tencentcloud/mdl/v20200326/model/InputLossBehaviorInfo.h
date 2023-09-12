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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_INPUTLOSSBEHAVIORINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_INPUTLOSSBEHAVIORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Complement the last video frame related settings.
                */
                class InputLossBehaviorInfo : public AbstractModel
                {
                public:
                    InputLossBehaviorInfo();
                    ~InputLossBehaviorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The time to fill in the last video frame, unit ms, range 0-1000000, 1000000 means always inserting, default 0 means filling in black screen frame.
                     * @return RepeatLastFrameMs The time to fill in the last video frame, unit ms, range 0-1000000, 1000000 means always inserting, default 0 means filling in black screen frame.
                     * 
                     */
                    uint64_t GetRepeatLastFrameMs() const;

                    /**
                     * 设置The time to fill in the last video frame, unit ms, range 0-1000000, 1000000 means always inserting, default 0 means filling in black screen frame.
                     * @param _repeatLastFrameMs The time to fill in the last video frame, unit ms, range 0-1000000, 1000000 means always inserting, default 0 means filling in black screen frame.
                     * 
                     */
                    void SetRepeatLastFrameMs(const uint64_t& _repeatLastFrameMs);

                    /**
                     * 判断参数 RepeatLastFrameMs 是否已赋值
                     * @return RepeatLastFrameMs 是否已赋值
                     * 
                     */
                    bool RepeatLastFrameMsHasBeenSet() const;

                    /**
                     * 获取Fill frame type, COLOR means solid color filling, IMAGE means picture filling, the default is COLOR.
                     * @return InputLossImageType Fill frame type, COLOR means solid color filling, IMAGE means picture filling, the default is COLOR.
                     * 
                     */
                    std::string GetInputLossImageType() const;

                    /**
                     * 设置Fill frame type, COLOR means solid color filling, IMAGE means picture filling, the default is COLOR.
                     * @param _inputLossImageType Fill frame type, COLOR means solid color filling, IMAGE means picture filling, the default is COLOR.
                     * 
                     */
                    void SetInputLossImageType(const std::string& _inputLossImageType);

                    /**
                     * 判断参数 InputLossImageType 是否已赋值
                     * @return InputLossImageType 是否已赋值
                     * 
                     */
                    bool InputLossImageTypeHasBeenSet() const;

                    /**
                     * 获取When the type is COLOR, the corresponding rgb value
                     * @return ColorRGB When the type is COLOR, the corresponding rgb value
                     * 
                     */
                    std::string GetColorRGB() const;

                    /**
                     * 设置When the type is COLOR, the corresponding rgb value
                     * @param _colorRGB When the type is COLOR, the corresponding rgb value
                     * 
                     */
                    void SetColorRGB(const std::string& _colorRGB);

                    /**
                     * 判断参数 ColorRGB 是否已赋值
                     * @return ColorRGB 是否已赋值
                     * 
                     */
                    bool ColorRGBHasBeenSet() const;

                    /**
                     * 获取When the type is IMAGE, the corresponding image url value
                     * @return ImageUrl When the type is IMAGE, the corresponding image url value
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置When the type is IMAGE, the corresponding image url value
                     * @param _imageUrl When the type is IMAGE, the corresponding image url value
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * The time to fill in the last video frame, unit ms, range 0-1000000, 1000000 means always inserting, default 0 means filling in black screen frame.
                     */
                    uint64_t m_repeatLastFrameMs;
                    bool m_repeatLastFrameMsHasBeenSet;

                    /**
                     * Fill frame type, COLOR means solid color filling, IMAGE means picture filling, the default is COLOR.
                     */
                    std::string m_inputLossImageType;
                    bool m_inputLossImageTypeHasBeenSet;

                    /**
                     * When the type is COLOR, the corresponding rgb value
                     */
                    std::string m_colorRGB;
                    bool m_colorRGBHasBeenSet;

                    /**
                     * When the type is IMAGE, the corresponding image url value
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_INPUTLOSSBEHAVIORINFO_H_
