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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_COSTOKEN_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_COSTOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Cos token
                */
                class CosToken : public AbstractModel
                {
                public:
                    CosToken();
                    ~CosToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique request ID
                     * @return RequestId Unique request ID
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置Unique request ID
                     * @param _requestId Unique request ID
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取Bucket name
                     * @return Bucket Bucket name
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Bucket name
                     * @param _bucket Bucket name
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取Bucket region
                     * @return Region Bucket region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Bucket region
                     * @param _region Bucket region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Temporary key SecretId
                     * @return TmpSecretId Temporary key SecretId
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置Temporary key SecretId
                     * @param _tmpSecretId Temporary key SecretId
                     * 
                     */
                    void SetTmpSecretId(const std::string& _tmpSecretId);

                    /**
                     * 判断参数 TmpSecretId 是否已赋值
                     * @return TmpSecretId 是否已赋值
                     * 
                     */
                    bool TmpSecretIdHasBeenSet() const;

                    /**
                     * 获取Temporary key SecretKey
                     * @return TmpSecretKey Temporary key SecretKey
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置Temporary key SecretKey
                     * @param _tmpSecretKey Temporary key SecretKey
                     * 
                     */
                    void SetTmpSecretKey(const std::string& _tmpSecretKey);

                    /**
                     * 判断参数 TmpSecretKey 是否已赋值
                     * @return TmpSecretKey 是否已赋值
                     * 
                     */
                    bool TmpSecretKeyHasBeenSet() const;

                    /**
                     * 获取`sessionToken` of temporary key
                     * @return SessionToken `sessionToken` of temporary key
                     * 
                     */
                    std::string GetSessionToken() const;

                    /**
                     * 设置`sessionToken` of temporary key
                     * @param _sessionToken `sessionToken` of temporary key
                     * 
                     */
                    void SetSessionToken(const std::string& _sessionToken);

                    /**
                     * 判断参数 SessionToken 是否已赋值
                     * @return SessionToken 是否已赋值
                     * 
                     */
                    bool SessionTokenHasBeenSet() const;

                    /**
                     * 获取Start time of temporary key acquisition
                     * @return StartTime Start time of temporary key acquisition
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of temporary key acquisition
                     * @param _startTime Start time of temporary key acquisition
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取`ExpiredTime` of temporary key
                     * @return ExpiredTime `ExpiredTime` of temporary key
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置`ExpiredTime` of temporary key
                     * @param _expiredTime `ExpiredTime` of temporary key
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取Full package path
                     * @return FullPath Full package path
                     * 
                     */
                    std::string GetFullPath() const;

                    /**
                     * 设置Full package path
                     * @param _fullPath Full package path
                     * 
                     */
                    void SetFullPath(const std::string& _fullPath);

                    /**
                     * 判断参数 FullPath 是否已赋值
                     * @return FullPath 是否已赋值
                     * 
                     */
                    bool FullPathHasBeenSet() const;

                private:

                    /**
                     * Unique request ID
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * Bucket name
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Bucket region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Temporary key SecretId
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * Temporary key SecretKey
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * `sessionToken` of temporary key
                     */
                    std::string m_sessionToken;
                    bool m_sessionTokenHasBeenSet;

                    /**
                     * Start time of temporary key acquisition
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * `ExpiredTime` of temporary key
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * Full package path
                     */
                    std::string m_fullPath;
                    bool m_fullPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_COSTOKEN_H_
