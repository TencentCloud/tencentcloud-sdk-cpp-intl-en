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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TEHDCONFIGFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TEHDCONFIGFORUPDATE_H_

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
                class TEHDConfigForUpdate : public AbstractModel
                {
                public:
                    TEHDConfigForUpdate();
                    ~TEHDConfigForUpdate() = default;
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
                     * 获取Maximum bitrate. If this parameter is left blank, no modification will be made.
                     * @return MaxVideoBitrate Maximum bitrate. If this parameter is left blank, no modification will be made.
                     * 
                     */
                    uint64_t GetMaxVideoBitrate() const;

                    /**
                     * 设置Maximum bitrate. If this parameter is left blank, no modification will be made.
                     * @param _maxVideoBitrate Maximum bitrate. If this parameter is left blank, no modification will be made.
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
                     * Maximum bitrate. If this parameter is left blank, no modification will be made.
                     */
                    uint64_t m_maxVideoBitrate;
                    bool m_maxVideoBitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TEHDCONFIGFORUPDATE_H_
