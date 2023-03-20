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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERESULTDOWNLOADRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERESULTDOWNLOADRESPONSE_H_

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
                * DescribeResultDownload response structure.
                */
                class DescribeResultDownloadResponse : public AbstractModel
                {
                public:
                    DescribeResultDownloadResponse();
                    ~DescribeResultDownloadResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The file save path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Path The file save path.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPath() const;

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取The task status. Valid values: `init`, `queue`, `format`, `compress`, `success`, `timeout`, and `error`.
                     * @return Status The task status. Valid values: `init`, `queue`, `format`, `compress`, `success`, `timeout`, and `error`.
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The task exception cause.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Reason The task exception cause.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取The temporary secret ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecretId The temporary secret ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSecretId() const;

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取The temporary secret key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecretKey The temporary secret key.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取The temporary token.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Token The temporary token.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * The file save path.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * The task status. Valid values: `init`, `queue`, `format`, `compress`, `success`, `timeout`, and `error`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The task exception cause.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * The temporary secret ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * The temporary secret key.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * The temporary token.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERESULTDOWNLOADRESPONSE_H_
