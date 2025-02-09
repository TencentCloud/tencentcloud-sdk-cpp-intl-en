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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_UPLOADFILETEMPSECRET_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_UPLOADFILETEMPSECRET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Temporary key for file upload
                */
                class UploadFileTempSecret : public AbstractModel
                {
                public:
                    UploadFileTempSecret();
                    ~UploadFileTempSecret() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Bucket Bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bucket Bucket
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Region
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Destination of upload
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Path Destination of upload
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Destination of upload
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _path Destination of upload
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Temporary secret ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TempSecretId Temporary secret ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTempSecretId() const;

                    /**
                     * 设置Temporary secret ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tempSecretId Temporary secret ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTempSecretId(const std::string& _tempSecretId);

                    /**
                     * 判断参数 TempSecretId 是否已赋值
                     * @return TempSecretId 是否已赋值
                     * 
                     */
                    bool TempSecretIdHasBeenSet() const;

                    /**
                     * 获取Temporary secret key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TempSecretKey Temporary secret key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTempSecretKey() const;

                    /**
                     * 设置Temporary secret key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tempSecretKey Temporary secret key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTempSecretKey(const std::string& _tempSecretKey);

                    /**
                     * 判断参数 TempSecretKey 是否已赋值
                     * @return TempSecretKey 是否已赋值
                     * 
                     */
                    bool TempSecretKeyHasBeenSet() const;

                    /**
                     * 获取Token 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Token Token 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置Token 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _token Token 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取Whether to enable global acceleration. Valid values: 0 (no), 1 (yes)
                     * @return AccelerateEnable Whether to enable global acceleration. Valid values: 0 (no), 1 (yes)
                     * 
                     */
                    int64_t GetAccelerateEnable() const;

                    /**
                     * 设置Whether to enable global acceleration. Valid values: 0 (no), 1 (yes)
                     * @param _accelerateEnable Whether to enable global acceleration. Valid values: 0 (no), 1 (yes)
                     * 
                     */
                    void SetAccelerateEnable(const int64_t& _accelerateEnable);

                    /**
                     * 判断参数 AccelerateEnable 是否已赋值
                     * @return AccelerateEnable 是否已赋值
                     * 
                     */
                    bool AccelerateEnableHasBeenSet() const;

                private:

                    /**
                     * Bucket
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * Region
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Destination of upload
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Temporary secret ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tempSecretId;
                    bool m_tempSecretIdHasBeenSet;

                    /**
                     * Temporary secret key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tempSecretKey;
                    bool m_tempSecretKeyHasBeenSet;

                    /**
                     * Token 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * Whether to enable global acceleration. Valid values: 0 (no), 1 (yes)
                     */
                    int64_t m_accelerateEnable;
                    bool m_accelerateEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_UPLOADFILETEMPSECRET_H_
