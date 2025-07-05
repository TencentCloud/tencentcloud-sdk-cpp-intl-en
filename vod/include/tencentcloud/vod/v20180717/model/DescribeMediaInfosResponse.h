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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAINFOSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAINFOSRESPONSE_H_

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
                * DescribeMediaInfos response structure.
                */
                class DescribeMediaInfosResponse : public AbstractModel
                {
                public:
                    DescribeMediaInfosResponse();
                    ~DescribeMediaInfosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Media file information list.
                     * @return MediaInfoSet Media file information list.
                     * 
                     */
                    std::vector<MediaInfo> GetMediaInfoSet() const;

                    /**
                     * 判断参数 MediaInfoSet 是否已赋值
                     * @return MediaInfoSet 是否已赋值
                     * 
                     */
                    bool MediaInfoSetHasBeenSet() const;

                    /**
                     * 获取List of IDs of files that do not exist.
                     * @return NotExistFileIdSet List of IDs of files that do not exist.
                     * 
                     */
                    std::vector<std::string> GetNotExistFileIdSet() const;

                    /**
                     * 判断参数 NotExistFileIdSet 是否已赋值
                     * @return NotExistFileIdSet 是否已赋值
                     * 
                     */
                    bool NotExistFileIdSetHasBeenSet() const;

                private:

                    /**
                     * Media file information list.
                     */
                    std::vector<MediaInfo> m_mediaInfoSet;
                    bool m_mediaInfoSetHasBeenSet;

                    /**
                     * List of IDs of files that do not exist.
                     */
                    std::vector<std::string> m_notExistFileIdSet;
                    bool m_notExistFileIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMEDIAINFOSRESPONSE_H_
