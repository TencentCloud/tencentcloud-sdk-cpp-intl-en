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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SPEKEDRM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SPEKEDRM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 
                */
                class SPEKEDrm : public AbstractModel
                {
                public:
                    SPEKEDrm();
                    ~SPEKEDrm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ResourceId 
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置
                     * @param _resourceId 
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return KeyServerUrl 
                     * 
                     */
                    std::string GetKeyServerUrl() const;

                    /**
                     * 设置
                     * @param _keyServerUrl 
                     * 
                     */
                    void SetKeyServerUrl(const std::string& _keyServerUrl);

                    /**
                     * 判断参数 KeyServerUrl 是否已赋值
                     * @return KeyServerUrl 是否已赋值
                     * 
                     */
                    bool KeyServerUrlHasBeenSet() const;

                    /**
                     * 获取
                     * @return Vector 
                     * 
                     */
                    std::string GetVector() const;

                    /**
                     * 设置
                     * @param _vector 
                     * 
                     */
                    void SetVector(const std::string& _vector);

                    /**
                     * 判断参数 Vector 是否已赋值
                     * @return Vector 是否已赋值
                     * 
                     */
                    bool VectorHasBeenSet() const;

                    /**
                     * 获取
                     * @return EncryptionMethod 
                     * 
                     */
                    std::string GetEncryptionMethod() const;

                    /**
                     * 设置
                     * @param _encryptionMethod 
                     * 
                     */
                    void SetEncryptionMethod(const std::string& _encryptionMethod);

                    /**
                     * 判断参数 EncryptionMethod 是否已赋值
                     * @return EncryptionMethod 是否已赋值
                     * 
                     */
                    bool EncryptionMethodHasBeenSet() const;

                    /**
                     * 获取
                     * @return EncryptionPreset 
                     * 
                     */
                    std::string GetEncryptionPreset() const;

                    /**
                     * 设置
                     * @param _encryptionPreset 
                     * 
                     */
                    void SetEncryptionPreset(const std::string& _encryptionPreset);

                    /**
                     * 判断参数 EncryptionPreset 是否已赋值
                     * @return EncryptionPreset 是否已赋值
                     * 
                     */
                    bool EncryptionPresetHasBeenSet() const;

                    /**
                     * 获取
                     * @return KeyAcquireMode 
                     * 
                     */
                    std::string GetKeyAcquireMode() const;

                    /**
                     * 设置
                     * @param _keyAcquireMode 
                     * 
                     */
                    void SetKeyAcquireMode(const std::string& _keyAcquireMode);

                    /**
                     * 判断参数 KeyAcquireMode 是否已赋值
                     * @return KeyAcquireMode 是否已赋值
                     * 
                     */
                    bool KeyAcquireModeHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_keyServerUrl;
                    bool m_keyServerUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_vector;
                    bool m_vectorHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_encryptionMethod;
                    bool m_encryptionMethodHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_encryptionPreset;
                    bool m_encryptionPresetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_keyAcquireMode;
                    bool m_keyAcquireModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SPEKEDRM_H_
