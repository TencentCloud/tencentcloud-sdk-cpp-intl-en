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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNMETADATAFILERESPONSE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNMETADATAFILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * GetRunMetadataFile response structure.
                */
                class GetRunMetadataFileResponse : public AbstractModel
                {
                public:
                    GetRunMetadataFileResponse();
                    ~GetRunMetadataFileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Document pre-signed link that works in a minute
                     * @return CosSignedUrl Document pre-signed link that works in a minute
                     * 
                     */
                    std::string GetCosSignedUrl() const;

                    /**
                     * 判断参数 CosSignedUrl 是否已赋值
                     * @return CosSignedUrl 是否已赋值
                     * 
                     */
                    bool CosSignedUrlHasBeenSet() const;

                    /**
                     * 获取Batch document pre-signed link that works in a minute
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CosSignedUrls Batch document pre-signed link that works in a minute
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetCosSignedUrls() const;

                    /**
                     * 判断参数 CosSignedUrls 是否已赋值
                     * @return CosSignedUrls 是否已赋值
                     * 
                     */
                    bool CosSignedUrlsHasBeenSet() const;

                private:

                    /**
                     * Document pre-signed link that works in a minute
                     */
                    std::string m_cosSignedUrl;
                    bool m_cosSignedUrlHasBeenSet;

                    /**
                     * Batch document pre-signed link that works in a minute
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_cosSignedUrls;
                    bool m_cosSignedUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_GETRUNMETADATAFILERESPONSE_H_
