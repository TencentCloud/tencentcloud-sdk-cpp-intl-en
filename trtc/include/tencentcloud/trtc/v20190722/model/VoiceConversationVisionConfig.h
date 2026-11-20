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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONVISIONCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONVISIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/CloudStorage.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * Parameter configuration related to AI conversation visual understanding.
                */
                class VoiceConversationVisionConfig : public AbstractModel
                {
                public:
                    VoiceConversationVisionConfig();
                    ~VoiceConversationVisionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether to enable visual understanding.</p>
                     * @return Enable <p>Whether to enable visual understanding.</p>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>Whether to enable visual understanding.</p>
                     * @param _enable <p>Whether to enable visual understanding.</p>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>Storage type.</p><p>Enumeration values:</p><ul><li>0: Do not store.</li><li>1: Specify cloud storage. In such cases, the CloudStorage parameter is required.</li></ul><p>Default value: 0</p>
                     * @return StorageType <p>Storage type.</p><p>Enumeration values:</p><ul><li>0: Do not store.</li><li>1: Specify cloud storage. In such cases, the CloudStorage parameter is required.</li></ul><p>Default value: 0</p>
                     * 
                     */
                    uint64_t GetStorageType() const;

                    /**
                     * 设置<p>Storage type.</p><p>Enumeration values:</p><ul><li>0: Do not store.</li><li>1: Specify cloud storage. In such cases, the CloudStorage parameter is required.</li></ul><p>Default value: 0</p>
                     * @param _storageType <p>Storage type.</p><p>Enumeration values:</p><ul><li>0: Do not store.</li><li>1: Specify cloud storage. In such cases, the CloudStorage parameter is required.</li></ul><p>Default value: 0</p>
                     * 
                     */
                    void SetStorageType(const uint64_t& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>Third-party Cloud Storage archive configuration. After configuration, the backend will automatically upload I-frames received from the SDK to the designated cloud bucket for persistent storage.</p>
                     * @return CloudStorage <p>Third-party Cloud Storage archive configuration. After configuration, the backend will automatically upload I-frames received from the SDK to the designated cloud bucket for persistent storage.</p>
                     * 
                     */
                    CloudStorage GetCloudStorage() const;

                    /**
                     * 设置<p>Third-party Cloud Storage archive configuration. After configuration, the backend will automatically upload I-frames received from the SDK to the designated cloud bucket for persistent storage.</p>
                     * @param _cloudStorage <p>Third-party Cloud Storage archive configuration. After configuration, the backend will automatically upload I-frames received from the SDK to the designated cloud bucket for persistent storage.</p>
                     * 
                     */
                    void SetCloudStorage(const CloudStorage& _cloudStorage);

                    /**
                     * 判断参数 CloudStorage 是否已赋值
                     * @return CloudStorage 是否已赋值
                     * 
                     */
                    bool CloudStorageHasBeenSet() const;

                private:

                    /**
                     * <p>Whether to enable visual understanding.</p>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>Storage type.</p><p>Enumeration values:</p><ul><li>0: Do not store.</li><li>1: Specify cloud storage. In such cases, the CloudStorage parameter is required.</li></ul><p>Default value: 0</p>
                     */
                    uint64_t m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>Third-party Cloud Storage archive configuration. After configuration, the backend will automatically upload I-frames received from the SDK to the designated cloud bucket for persistent storage.</p>
                     */
                    CloudStorage m_cloudStorage;
                    bool m_cloudStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOICECONVERSATIONVISIONCONFIG_H_
