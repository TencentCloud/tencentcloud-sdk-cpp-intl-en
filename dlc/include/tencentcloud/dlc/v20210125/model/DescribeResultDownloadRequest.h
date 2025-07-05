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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERESULTDOWNLOADREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERESULTDOWNLOADREQUEST_H_

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
                * DescribeResultDownload request structure.
                */
                class DescribeResultDownloadRequest : public AbstractModel
                {
                public:
                    DescribeResultDownloadRequest();
                    ~DescribeResultDownloadRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The query task ID.
                     * @return DownloadId The query task ID.
                     * 
                     */
                    std::string GetDownloadId() const;

                    /**
                     * 设置The query task ID.
                     * @param _downloadId The query task ID.
                     * 
                     */
                    void SetDownloadId(const std::string& _downloadId);

                    /**
                     * 判断参数 DownloadId 是否已赋值
                     * @return DownloadId 是否已赋值
                     * 
                     */
                    bool DownloadIdHasBeenSet() const;

                private:

                    /**
                     * The query task ID.
                     */
                    std::string m_downloadId;
                    bool m_downloadIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERESULTDOWNLOADREQUEST_H_
