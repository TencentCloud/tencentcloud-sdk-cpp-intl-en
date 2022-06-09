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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEUPLOADURLRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEUPLOADURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * CreateUploadUrl response structure.
                */
                class CreateUploadUrlResponse : public AbstractModel
                {
                public:
                    CreateUploadUrlResponse();
                    ~CreateUploadUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The URL for uploading contents with the `HTTP PUT` method.
                     * @return UploadUrl The URL for uploading contents with the `HTTP PUT` method.
                     */
                    std::string GetUploadUrl() const;

                    /**
                     * 判断参数 UploadUrl 是否已赋值
                     * @return UploadUrl 是否已赋值
                     */
                    bool UploadUrlHasBeenSet() const;

                    /**
                     * 获取The resource URL obtained after this upload is completed and to be passed in where it is required later.
                     * @return ResourceUrl The resource URL obtained after this upload is completed and to be passed in where it is required later.
                     */
                    std::string GetResourceUrl() const;

                    /**
                     * 判断参数 ResourceUrl 是否已赋值
                     * @return ResourceUrl 是否已赋值
                     */
                    bool ResourceUrlHasBeenSet() const;

                    /**
                     * 获取The point in time when the upload/download link expires, which is a 10-bit Unix timestamp.
                     * @return ExpiredTimestamp The point in time when the upload/download link expires, which is a 10-bit Unix timestamp.
                     */
                    int64_t GetExpiredTimestamp() const;

                    /**
                     * 判断参数 ExpiredTimestamp 是否已赋值
                     * @return ExpiredTimestamp 是否已赋值
                     */
                    bool ExpiredTimestampHasBeenSet() const;

                private:

                    /**
                     * The URL for uploading contents with the `HTTP PUT` method.
                     */
                    std::string m_uploadUrl;
                    bool m_uploadUrlHasBeenSet;

                    /**
                     * The resource URL obtained after this upload is completed and to be passed in where it is required later.
                     */
                    std::string m_resourceUrl;
                    bool m_resourceUrlHasBeenSet;

                    /**
                     * The point in time when the upload/download link expires, which is a 10-bit Unix timestamp.
                     */
                    int64_t m_expiredTimestamp;
                    bool m_expiredTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEUPLOADURLRESPONSE_H_
