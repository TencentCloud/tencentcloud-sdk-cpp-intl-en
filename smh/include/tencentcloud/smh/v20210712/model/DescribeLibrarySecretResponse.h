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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBELIBRARYSECRETRESPONSE_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBELIBRARYSECRETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * DescribeLibrarySecret response structure.
                */
                class DescribeLibrarySecretResponse : public AbstractModel
                {
                public:
                    DescribeLibrarySecretResponse();
                    ~DescribeLibrarySecretResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the media library ID to query.
                     * @return LibraryId Specifies the media library ID to query.
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取Queried media library key.
                     * @return LibrarySecret Queried media library key.
                     * 
                     */
                    std::string GetLibrarySecret() const;

                    /**
                     * 判断参数 LibrarySecret 是否已赋值
                     * @return LibrarySecret 是否已赋值
                     * 
                     */
                    bool LibrarySecretHasBeenSet() const;

                private:

                    /**
                     * Specifies the media library ID to query.
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * Queried media library key.
                     */
                    std::string m_librarySecret;
                    bool m_librarySecretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBELIBRARYSECRETRESPONSE_H_
