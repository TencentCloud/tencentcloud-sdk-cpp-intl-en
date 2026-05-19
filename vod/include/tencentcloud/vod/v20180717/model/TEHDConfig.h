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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TEHDCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TEHDCONFIG_H_

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
                * TESHD parameter configuration.
                */
                class TEHDConfig : public AbstractModel
                {
                public:
                    TEHDConfig();
                    ~TEHDConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TESHD transcoding type. Valid values: <li>TEHD-100</li> <li>OFF (default)</li>
                     * @return Type TESHD transcoding type. Valid values: <li>TEHD-100</li> <li>OFF (default)</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置TESHD transcoding type. Valid values: <li>TEHD-100</li> <li>OFF (default)</li>
                     * @param _type TESHD transcoding type. Valid values: <li>TEHD-100</li> <li>OFF (default)</li>
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
                     * 获取Maximum video bitrate. Valid at that time when Type is specified as top speed Codec.
Leave it blank or set it to 0 to let VOD automatically set the bitrate cap.
                     * @return MaxVideoBitrate Maximum video bitrate. Valid at that time when Type is specified as top speed Codec.
Leave it blank or set it to 0 to let VOD automatically set the bitrate cap.
                     * 
                     */
                    uint64_t GetMaxVideoBitrate() const;

                    /**
                     * 设置Maximum video bitrate. Valid at that time when Type is specified as top speed Codec.
Leave it blank or set it to 0 to let VOD automatically set the bitrate cap.
                     * @param _maxVideoBitrate Maximum video bitrate. Valid at that time when Type is specified as top speed Codec.
Leave it blank or set it to 0 to let VOD automatically set the bitrate cap.
                     * 
                     */
                    void SetMaxVideoBitrate(const uint64_t& _maxVideoBitrate);

                    /**
                     * 判断参数 MaxVideoBitrate 是否已赋值
                     * @return MaxVideoBitrate 是否已赋值
                     * 
                     */
                    bool MaxVideoBitrateHasBeenSet() const;

                private:

                    /**
                     * TESHD transcoding type. Valid values: <li>TEHD-100</li> <li>OFF (default)</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Maximum video bitrate. Valid at that time when Type is specified as top speed Codec.
Leave it blank or set it to 0 to let VOD automatically set the bitrate cap.
                     */
                    uint64_t m_maxVideoBitrate;
                    bool m_maxVideoBitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TEHDCONFIG_H_
