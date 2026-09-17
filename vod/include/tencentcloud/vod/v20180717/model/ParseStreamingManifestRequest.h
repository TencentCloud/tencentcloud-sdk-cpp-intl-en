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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PARSESTREAMINGMANIFESTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PARSESTREAMINGMANIFESTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ParseStreamingManifest request structure.
                */
                class ParseStreamingManifestRequest : public AbstractModel
                {
                public:
                    ParseStreamingManifestRequest();
                    ~ParseStreamingManifestRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return MediaManifestContent 
                     * 
                     */
                    std::string GetMediaManifestContent() const;

                    /**
                     * 设置
                     * @param _mediaManifestContent 
                     * 
                     */
                    void SetMediaManifestContent(const std::string& _mediaManifestContent);

                    /**
                     * 判断参数 MediaManifestContent 是否已赋值
                     * @return MediaManifestContent 是否已赋值
                     * 
                     */
                    bool MediaManifestContentHasBeenSet() const;

                    /**
                     * 获取
                     * @return ManifestType 
                     * 
                     */
                    std::string GetManifestType() const;

                    /**
                     * 设置
                     * @param _manifestType 
                     * 
                     */
                    void SetManifestType(const std::string& _manifestType);

                    /**
                     * 判断参数 ManifestType 是否已赋值
                     * @return ManifestType 是否已赋值
                     * 
                     */
                    bool ManifestTypeHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_mediaManifestContent;
                    bool m_mediaManifestContentHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_manifestType;
                    bool m_manifestTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PARSESTREAMINGMANIFESTREQUEST_H_
