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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPRIVATEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPRIVATEPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Private authentication parameter for the COS origin server.
                */
                class OriginPrivateParameters : public AbstractModel
                {
                public:
                    OriginPrivateParameters();
                    ~OriginPrivateParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access Key ID authentication parameter.
                     * @return AccessKeyId Access Key ID authentication parameter.
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置Access Key ID authentication parameter.
                     * @param _accessKeyId Access Key ID authentication parameter.
                     * 
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     * 
                     */
                    bool AccessKeyIdHasBeenSet() const;

                    /**
                     * 获取Secret Access Key authentication parameter.
                     * @return SecretAccessKey Secret Access Key authentication parameter.
                     * 
                     */
                    std::string GetSecretAccessKey() const;

                    /**
                     * 设置Secret Access Key authentication parameter.
                     * @param _secretAccessKey Secret Access Key authentication parameter.
                     * 
                     */
                    void SetSecretAccessKey(const std::string& _secretAccessKey);

                    /**
                     * 判断参数 SecretAccessKey 是否已赋值
                     * @return SecretAccessKey 是否已赋值
                     * 
                     */
                    bool SecretAccessKeyHasBeenSet() const;

                    /**
                     * 获取Authentication version. Valid values:
<li>v2: v2 version;</li>
<li>v4: v4 version.</li>
                     * @return SignatureVersion Authentication version. Valid values:
<li>v2: v2 version;</li>
<li>v4: v4 version.</li>
                     * 
                     */
                    std::string GetSignatureVersion() const;

                    /**
                     * 设置Authentication version. Valid values:
<li>v2: v2 version;</li>
<li>v4: v4 version.</li>
                     * @param _signatureVersion Authentication version. Valid values:
<li>v2: v2 version;</li>
<li>v4: v4 version.</li>
                     * 
                     */
                    void SetSignatureVersion(const std::string& _signatureVersion);

                    /**
                     * 判断参数 SignatureVersion 是否已赋值
                     * @return SignatureVersion 是否已赋值
                     * 
                     */
                    bool SignatureVersionHasBeenSet() const;

                    /**
                     * 获取Bucket region.
                     * @return Region Bucket region.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Bucket region.
                     * @param _region Bucket region.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Access Key ID authentication parameter.
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * Secret Access Key authentication parameter.
                     */
                    std::string m_secretAccessKey;
                    bool m_secretAccessKeyHasBeenSet;

                    /**
                     * Authentication version. Valid values:
<li>v2: v2 version;</li>
<li>v4: v4 version.</li>
                     */
                    std::string m_signatureVersion;
                    bool m_signatureVersionHasBeenSet;

                    /**
                     * Bucket region.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPRIVATEPARAMETERS_H_
