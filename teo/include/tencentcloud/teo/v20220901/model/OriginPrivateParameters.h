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
                * Private authentication parameters for Cloud Object Storage origin server.
                */
                class OriginPrivateParameters : public AbstractModel
                {
                public:
                    OriginPrivateParameters();
                    ~OriginPrivateParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authentication parameter access key id.
                     * @return AccessKeyId Authentication parameter access key id.
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置Authentication parameter access key id.
                     * @param _accessKeyId Authentication parameter access key id.
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
                     * 获取Authentication parameter secret access key.
                     * @return SecretAccessKey Authentication parameter secret access key.
                     * 
                     */
                    std::string GetSecretAccessKey() const;

                    /**
                     * 设置Authentication parameter secret access key.
                     * @param _secretAccessKey Authentication parameter secret access key.
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
                     * 获取Authentication version. values:.
<Li>V2: v2 version;</li>.
<Li>V4: v4 version.</li>.
                     * @return SignatureVersion Authentication version. values:.
<Li>V2: v2 version;</li>.
<Li>V4: v4 version.</li>.
                     * 
                     */
                    std::string GetSignatureVersion() const;

                    /**
                     * 设置Authentication version. values:.
<Li>V2: v2 version;</li>.
<Li>V4: v4 version.</li>.
                     * @param _signatureVersion Authentication version. values:.
<Li>V2: v2 version;</li>.
<Li>V4: v4 version.</li>.
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
                     * 获取Region of the bucket.
                     * @return Region Region of the bucket.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region of the bucket.
                     * @param _region Region of the bucket.
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
                     * Authentication parameter access key id.
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * Authentication parameter secret access key.
                     */
                    std::string m_secretAccessKey;
                    bool m_secretAccessKeyHasBeenSet;

                    /**
                     * Authentication version. values:.
<Li>V2: v2 version;</li>.
<Li>V4: v4 version.</li>.
                     */
                    std::string m_signatureVersion;
                    bool m_signatureVersionHasBeenSet;

                    /**
                     * Region of the bucket.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINPRIVATEPARAMETERS_H_
