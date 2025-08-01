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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATERESULTDOWNLOADRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATERESULTDOWNLOADRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateResultDownload response structure.
                */
                class CreateResultDownloadResponse : public AbstractModel
                {
                public:
                    CreateResultDownloadResponse();
                    ~CreateResultDownloadResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The download task ID.
                     * @return DownloadId The download task ID.
                     * 
                     */
                    std::string GetDownloadId() const;

                    /**
                     * 判断参数 DownloadId 是否已赋值
                     * @return DownloadId 是否已赋值
                     * 
                     */
                    bool DownloadIdHasBeenSet() const;

                private:

                    /**
                     * The download task ID.
                     */
                    std::string m_downloadId;
                    bool m_downloadIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATERESULTDOWNLOADRESPONSE_H_
