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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TEHDCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TEHDCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * TSC parameter configuration.
                */
                class TEHDConfig : public AbstractModel
                {
                public:
                    TEHDConfig();
                    ~TEHDConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Top speed Codec type. Available values:
<li>TEHD-100: top speed codec-100 (video top speed codec).</li>
<li>TEHD-200: top speed codec-200 (audio top speed codec).</li>
If not specified, top speed Codec is not enabled.
                     * @return Type Top speed Codec type. Available values:
<li>TEHD-100: top speed codec-100 (video top speed codec).</li>
<li>TEHD-200: top speed codec-200 (audio top speed codec).</li>
If not specified, top speed Codec is not enabled.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Top speed Codec type. Available values:
<li>TEHD-100: top speed codec-100 (video top speed codec).</li>
<li>TEHD-200: top speed codec-200 (audio top speed codec).</li>
If not specified, top speed Codec is not enabled.
                     * @param _type Top speed Codec type. Available values:
<li>TEHD-100: top speed codec-100 (video top speed codec).</li>
<li>TEHD-200: top speed codec-200 (audio top speed codec).</li>
If not specified, top speed Codec is not enabled.
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
                     * 获取Maximum video bitrate. Valid when Type is set to top speed Codec.
If this is not specified or is set to 0, no upper limit is set for the video bitrate.
                     * @return MaxVideoBitrate Maximum video bitrate. Valid when Type is set to top speed Codec.
If this is not specified or is set to 0, no upper limit is set for the video bitrate.
                     * 
                     */
                    int64_t GetMaxVideoBitrate() const;

                    /**
                     * 设置Maximum video bitrate. Valid when Type is set to top speed Codec.
If this is not specified or is set to 0, no upper limit is set for the video bitrate.
                     * @param _maxVideoBitrate Maximum video bitrate. Valid when Type is set to top speed Codec.
If this is not specified or is set to 0, no upper limit is set for the video bitrate.
                     * 
                     */
                    void SetMaxVideoBitrate(const int64_t& _maxVideoBitrate);

                    /**
                     * 判断参数 MaxVideoBitrate 是否已赋值
                     * @return MaxVideoBitrate 是否已赋值
                     * 
                     */
                    bool MaxVideoBitrateHasBeenSet() const;

                private:

                    /**
                     * Top speed Codec type. Available values:
<li>TEHD-100: top speed codec-100 (video top speed codec).</li>
<li>TEHD-200: top speed codec-200 (audio top speed codec).</li>
If not specified, top speed Codec is not enabled.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Maximum video bitrate. Valid when Type is set to top speed Codec.
If this is not specified or is set to 0, no upper limit is set for the video bitrate.
                     */
                    int64_t m_maxVideoBitrate;
                    bool m_maxVideoBitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TEHDCONFIG_H_
