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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TCRIMAGEINFO_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TCRIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Image information
                */
                class TcrImageInfo : public AbstractModel
                {
                public:
                    TcrImageInfo();
                    ~TcrImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hash value
                     * @return Digest Hash value
                     * 
                     */
                    std::string GetDigest() const;

                    /**
                     * 设置Hash value
                     * @param _digest Hash value
                     * 
                     */
                    void SetDigest(const std::string& _digest);

                    /**
                     * 判断参数 Digest 是否已赋值
                     * @return Digest 是否已赋值
                     * 
                     */
                    bool DigestHasBeenSet() const;

                    /**
                     * 获取Image size in bytes
                     * @return Size Image size in bytes
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Image size in bytes
                     * @param _size Image size in bytes
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Tag name
                     * @return ImageVersion Tag name
                     * 
                     */
                    std::string GetImageVersion() const;

                    /**
                     * 设置Tag name
                     * @param _imageVersion Tag name
                     * 
                     */
                    void SetImageVersion(const std::string& _imageVersion);

                    /**
                     * 判断参数 ImageVersion 是否已赋值
                     * @return ImageVersion 是否已赋值
                     * 
                     */
                    bool ImageVersionHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Artifact type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Kind Artifact type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置Artifact type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kind Artifact type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取KMS signature information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KmsSignature KMS signature information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKmsSignature() const;

                    /**
                     * 设置KMS signature information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _kmsSignature KMS signature information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKmsSignature(const std::string& _kmsSignature);

                    /**
                     * 判断参数 KmsSignature 是否已赋值
                     * @return KmsSignature 是否已赋值
                     * 
                     */
                    bool KmsSignatureHasBeenSet() const;

                private:

                    /**
                     * Hash value
                     */
                    std::string m_digest;
                    bool m_digestHasBeenSet;

                    /**
                     * Image size in bytes
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Tag name
                     */
                    std::string m_imageVersion;
                    bool m_imageVersionHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Artifact type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * KMS signature information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_kmsSignature;
                    bool m_kmsSignatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TCRIMAGEINFO_H_
