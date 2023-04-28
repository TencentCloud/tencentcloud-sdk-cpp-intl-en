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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESIGNREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeReleaseFileSign request structure.
                */
                class DescribeReleaseFileSignRequest : public AbstractModel
                {
                public:
                    DescribeReleaseFileSignRequest();
                    ~DescribeReleaseFileSignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Timeout period. If it is not set, it will be 5 minutes by default
                     * @return Timeout Timeout period. If it is not set, it will be 5 minutes by default
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Timeout period. If it is not set, it will be 5 minutes by default
                     * @param Timeout Timeout period. If it is not set, it will be 5 minutes by default
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Bucket type. Valid values: `1`: (Web, which is the default value), `2` (Application).
                     * @return FileType Bucket type. Valid values: `1`: (Web, which is the default value), `2` (Application).
                     */
                    int64_t GetFileType() const;

                    /**
                     * 设置Bucket type. Valid values: `1`: (Web, which is the default value), `2` (Application).
                     * @param FileType Bucket type. Valid values: `1`: (Web, which is the default value), `2` (Application).
                     */
                    void SetFileType(const int64_t& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     */
                    bool FileTypeHasBeenSet() const;

                private:

                    /**
                     * Timeout period. If it is not set, it will be 5 minutes by default
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Bucket type. Valid values: `1`: (Web, which is the default value), `2` (Application).
                     */
                    int64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESIGNREQUEST_H_
