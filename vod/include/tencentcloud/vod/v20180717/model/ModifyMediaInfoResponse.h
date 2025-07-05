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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIAINFORESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIAINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaSubtitleItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyMediaInfo response structure.
                */
                class ModifyMediaInfoResponse : public AbstractModel
                {
                public:
                    ModifyMediaInfoResponse();
                    ~ModifyMediaInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取URL of new video cover.
* Note: this returned value is valid only if the request carries `CoverData`.*
                     * @return CoverUrl URL of new video cover.
* Note: this returned value is valid only if the request carries `CoverData`.*
                     * 
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     * 
                     */
                    bool CoverUrlHasBeenSet() const;

                    /**
                     * 获取Added subtitle information
                     * @return AddedSubtitleSet Added subtitle information
                     * 
                     */
                    std::vector<MediaSubtitleItem> GetAddedSubtitleSet() const;

                    /**
                     * 判断参数 AddedSubtitleSet 是否已赋值
                     * @return AddedSubtitleSet 是否已赋值
                     * 
                     */
                    bool AddedSubtitleSetHasBeenSet() const;

                private:

                    /**
                     * URL of new video cover.
* Note: this returned value is valid only if the request carries `CoverData`.*
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                    /**
                     * Added subtitle information
                     */
                    std::vector<MediaSubtitleItem> m_addedSubtitleSet;
                    bool m_addedSubtitleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIAINFORESPONSE_H_
