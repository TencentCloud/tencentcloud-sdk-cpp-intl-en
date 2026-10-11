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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEPULLSECRET_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEPULLSECRET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Key used for obtaining an image.
                */
                class ImagePullSecret : public AbstractModel
                {
                public:
                    ImagePullSecret();
                    ~ImagePullSecret() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Namespace of the source key.
                     * @return SourceNamespace Namespace of the source key.
                     * 
                     */
                    std::string GetSourceNamespace() const;

                    /**
                     * 设置Namespace of the source key.
                     * @param _sourceNamespace Namespace of the source key.
                     * 
                     */
                    void SetSourceNamespace(const std::string& _sourceNamespace);

                    /**
                     * 判断参数 SourceNamespace 是否已赋值
                     * @return SourceNamespace 是否已赋值
                     * 
                     */
                    bool SourceNamespaceHasBeenSet() const;

                    /**
                     * 获取Key name list.
                     * @return SecretNames Key name list.
                     * 
                     */
                    std::vector<std::string> GetSecretNames() const;

                    /**
                     * 设置Key name list.
                     * @param _secretNames Key name list.
                     * 
                     */
                    void SetSecretNames(const std::vector<std::string>& _secretNames);

                    /**
                     * 判断参数 SecretNames 是否已赋值
                     * @return SecretNames 是否已赋值
                     * 
                     */
                    bool SecretNamesHasBeenSet() const;

                private:

                    /**
                     * Namespace of the source key.
                     */
                    std::string m_sourceNamespace;
                    bool m_sourceNamespaceHasBeenSet;

                    /**
                     * Key name list.
                     */
                    std::vector<std::string> m_secretNames;
                    bool m_secretNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEPULLSECRET_H_
