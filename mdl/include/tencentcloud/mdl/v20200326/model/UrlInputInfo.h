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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_URLINPUTINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_URLINPUTINFO_H_

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
                * UrlInputInfo
                */
                class UrlInputInfo : public AbstractModel
                {
                public:
                    UrlInputInfo();
                    ~UrlInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video URL, starting with http/https, supports up to 512 characters, currently only supports complete single file videos, does not support streaming formats based on playlists and segments (such as HLS or DASH)
                     * @return Url Video URL, starting with http/https, supports up to 512 characters, currently only supports complete single file videos, does not support streaming formats based on playlists and segments (such as HLS or DASH)
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Video URL, starting with http/https, supports up to 512 characters, currently only supports complete single file videos, does not support streaming formats based on playlists and segments (such as HLS or DASH)
                     * @param _url Video URL, starting with http/https, supports up to 512 characters, currently only supports complete single file videos, does not support streaming formats based on playlists and segments (such as HLS or DASH)
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * Video URL, starting with http/https, supports up to 512 characters, currently only supports complete single file videos, does not support streaming formats based on playlists and segments (such as HLS or DASH)
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_URLINPUTINFO_H_
