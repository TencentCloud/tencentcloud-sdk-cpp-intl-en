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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXINPUTPARAM_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXINPUTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/CommonMixLayoutParams.h>
#include <tencentcloud/live/v20180801/model/CommonMixCropParams.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * General stream mix input parameter.
                */
                class CommonMixInputParam : public AbstractModel
                {
                public:
                    CommonMixInputParam();
                    ~CommonMixInputParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Input stream name, which can contain up to 80 bytes of letters, digits, and underscores.
The value should be the name of an input stream for stream mix when `LayoutParams.InputType` is set to `0` (audio and video), `4` (pure audio), or `5` (pure video).
The value can be a random name for identification, such as `Canvas1` or `Picture1`, when `LayoutParams.InputType` is set to `2` (image) or `3` (canvas).
                     * @return InputStreamName Input stream name, which can contain up to 80 bytes of letters, digits, and underscores.
The value should be the name of an input stream for stream mix when `LayoutParams.InputType` is set to `0` (audio and video), `4` (pure audio), or `5` (pure video).
The value can be a random name for identification, such as `Canvas1` or `Picture1`, when `LayoutParams.InputType` is set to `2` (image) or `3` (canvas).
                     * 
                     */
                    std::string GetInputStreamName() const;

                    /**
                     * 设置Input stream name, which can contain up to 80 bytes of letters, digits, and underscores.
The value should be the name of an input stream for stream mix when `LayoutParams.InputType` is set to `0` (audio and video), `4` (pure audio), or `5` (pure video).
The value can be a random name for identification, such as `Canvas1` or `Picture1`, when `LayoutParams.InputType` is set to `2` (image) or `3` (canvas).
                     * @param _inputStreamName Input stream name, which can contain up to 80 bytes of letters, digits, and underscores.
The value should be the name of an input stream for stream mix when `LayoutParams.InputType` is set to `0` (audio and video), `4` (pure audio), or `5` (pure video).
The value can be a random name for identification, such as `Canvas1` or `Picture1`, when `LayoutParams.InputType` is set to `2` (image) or `3` (canvas).
                     * 
                     */
                    void SetInputStreamName(const std::string& _inputStreamName);

                    /**
                     * 判断参数 InputStreamName 是否已赋值
                     * @return InputStreamName 是否已赋值
                     * 
                     */
                    bool InputStreamNameHasBeenSet() const;

                    /**
                     * 获取Input stream layout parameter.
                     * @return LayoutParams Input stream layout parameter.
                     * 
                     */
                    CommonMixLayoutParams GetLayoutParams() const;

                    /**
                     * 设置Input stream layout parameter.
                     * @param _layoutParams Input stream layout parameter.
                     * 
                     */
                    void SetLayoutParams(const CommonMixLayoutParams& _layoutParams);

                    /**
                     * 判断参数 LayoutParams 是否已赋值
                     * @return LayoutParams 是否已赋值
                     * 
                     */
                    bool LayoutParamsHasBeenSet() const;

                    /**
                     * 获取Input stream crop parameter.
                     * @return CropParams Input stream crop parameter.
                     * 
                     */
                    CommonMixCropParams GetCropParams() const;

                    /**
                     * 设置Input stream crop parameter.
                     * @param _cropParams Input stream crop parameter.
                     * 
                     */
                    void SetCropParams(const CommonMixCropParams& _cropParams);

                    /**
                     * 判断参数 CropParams 是否已赋值
                     * @return CropParams 是否已赋值
                     * 
                     */
                    bool CropParamsHasBeenSet() const;

                private:

                    /**
                     * Input stream name, which can contain up to 80 bytes of letters, digits, and underscores.
The value should be the name of an input stream for stream mix when `LayoutParams.InputType` is set to `0` (audio and video), `4` (pure audio), or `5` (pure video).
The value can be a random name for identification, such as `Canvas1` or `Picture1`, when `LayoutParams.InputType` is set to `2` (image) or `3` (canvas).
                     */
                    std::string m_inputStreamName;
                    bool m_inputStreamNameHasBeenSet;

                    /**
                     * Input stream layout parameter.
                     */
                    CommonMixLayoutParams m_layoutParams;
                    bool m_layoutParamsHasBeenSet;

                    /**
                     * Input stream crop parameter.
                     */
                    CommonMixCropParams m_cropParams;
                    bool m_cropParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_COMMONMIXINPUTPARAM_H_
