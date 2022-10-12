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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DOWNLOADHELMCHARTRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DOWNLOADHELMCHARTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DownloadHelmChart response structure.
                */
                class DownloadHelmChartResponse : public AbstractModel
                {
                public:
                    DownloadHelmChartResponse();
                    ~DownloadHelmChartResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Temporary token
                     * @return TmpToken Temporary token
                     */
                    std::string GetTmpToken() const;

                    /**
                     * 判断参数 TmpToken 是否已赋值
                     * @return TmpToken 是否已赋值
                     */
                    bool TmpTokenHasBeenSet() const;

                    /**
                     * 获取Temporary `secretId`
                     * @return TmpSecretId Temporary `secretId`
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 判断参数 TmpSecretId 是否已赋值
                     * @return TmpSecretId 是否已赋值
                     */
                    bool TmpSecretIdHasBeenSet() const;

                    /**
                     * 获取Temporary `secretKey`
                     * @return TmpSecretKey Temporary `secretKey`
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 判断参数 TmpSecretKey 是否已赋值
                     * @return TmpSecretKey 是否已赋值
                     */
                    bool TmpSecretKeyHasBeenSet() const;

                    /**
                     * 获取Bucket information
                     * @return Bucket Bucket information
                     */
                    std::string GetBucket() const;

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return Region Instance ID
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Chart information
                     * @return Path Chart information
                     */
                    std::string GetPath() const;

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Start timestamp
                     * @return StartTime Start timestamp
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Token expiration timestamp
                     * @return ExpiredTime Token expiration timestamp
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * Temporary token
                     */
                    std::string m_tmpToken;
                    bool m_tmpTokenHasBeenSet;

                    /**
                     * Temporary `secretId`
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * Temporary `secretKey`
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * Bucket information
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Chart information
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Start timestamp
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Token expiration timestamp
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DOWNLOADHELMCHARTRESPONSE_H_
