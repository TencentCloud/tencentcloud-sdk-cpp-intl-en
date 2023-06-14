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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIARESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SearchMedia response structure.
                */
                class SearchMediaResponse : public AbstractModel
                {
                public:
                    SearchMediaResponse();
                    ~SearchMediaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of eligible entries.
<li>Maximum value: 5000. If the number of eligible entries is greater than 5,000, this field will return 5,000 instead of the actual number.</li>
                     * @return TotalCount Number of eligible entries.
<li>Maximum value: 5000. If the number of eligible entries is greater than 5,000, this field will return 5,000 instead of the actual number.</li>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Media file information list
                     * @return MediaInfoSet Media file information list
                     * 
                     */
                    std::vector<MediaInfo> GetMediaInfoSet() const;

                    /**
                     * 判断参数 MediaInfoSet 是否已赋值
                     * @return MediaInfoSet 是否已赋值
                     * 
                     */
                    bool MediaInfoSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible entries.
<li>Maximum value: 5000. If the number of eligible entries is greater than 5,000, this field will return 5,000 instead of the actual number.</li>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Media file information list
                     */
                    std::vector<MediaInfo> m_mediaInfoSet;
                    bool m_mediaInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIARESPONSE_H_
