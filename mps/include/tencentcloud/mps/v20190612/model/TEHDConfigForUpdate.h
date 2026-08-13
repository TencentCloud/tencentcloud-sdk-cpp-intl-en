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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TEHDCONFIGFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TEHDCONFIGFORUPDATE_H_

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
                * TESHD parameter configuration.
                */
                class TEHDConfigForUpdate : public AbstractModel
                {
                public:
                    TEHDConfigForUpdate();
                    ~TEHDConfigForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Top Speed Codec type. Available values:
<li>TEHD-100: Top Speed Codec-100 (video top speed codec).</li>
<li>TEHD-200: Top Speed Codec-200 (TSC audio).</li>
Leave it blank to keep it unchanged.
                     * @return Type Top Speed Codec type. Available values:
<li>TEHD-100: Top Speed Codec-100 (video top speed codec).</li>
<li>TEHD-200: Top Speed Codec-200 (TSC audio).</li>
Leave it blank to keep it unchanged.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Top Speed Codec type. Available values:
<li>TEHD-100: Top Speed Codec-100 (video top speed codec).</li>
<li>TEHD-200: Top Speed Codec-200 (TSC audio).</li>
Leave it blank to keep it unchanged.
                     * @param _type Top Speed Codec type. Available values:
<li>TEHD-100: Top Speed Codec-100 (video top speed codec).</li>
<li>TEHD-200: Top Speed Codec-200 (TSC audio).</li>
Leave it blank to keep it unchanged.
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
                     * 获取Upper limit of video bitrate. Leave blank to keep unchanged.
                     * @return MaxVideoBitrate Upper limit of video bitrate. Leave blank to keep unchanged.
                     * 
                     */
                    int64_t GetMaxVideoBitrate() const;

                    /**
                     * 设置Upper limit of video bitrate. Leave blank to keep unchanged.
                     * @param _maxVideoBitrate Upper limit of video bitrate. Leave blank to keep unchanged.
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
                     * Top Speed Codec type. Available values:
<li>TEHD-100: Top Speed Codec-100 (video top speed codec).</li>
<li>TEHD-200: Top Speed Codec-200 (TSC audio).</li>
Leave it blank to keep it unchanged.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Upper limit of video bitrate. Leave blank to keep unchanged.
                     */
                    int64_t m_maxVideoBitrate;
                    bool m_maxVideoBitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TEHDCONFIGFORUPDATE_H_
