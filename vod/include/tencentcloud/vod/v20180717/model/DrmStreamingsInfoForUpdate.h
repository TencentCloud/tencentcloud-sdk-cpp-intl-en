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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DRMSTREAMINGSINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DRMSTREAMINGSINFOFORUPDATE_H_

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
                * DRM adaptive bitrate stream playback information modification object
                */
                class DrmStreamingsInfoForUpdate : public AbstractModel
                {
                public:
                    DrmStreamingsInfoForUpdate();
                    ~DrmStreamingsInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Adaptive bitrate streaming template ID with SimpleAES protection type.
                     * @return SimpleAesDefinition Adaptive bitrate streaming template ID with SimpleAES protection type.
                     * 
                     */
                    uint64_t GetSimpleAesDefinition() const;

                    /**
                     * 设置Adaptive bitrate streaming template ID with SimpleAES protection type.
                     * @param _simpleAesDefinition Adaptive bitrate streaming template ID with SimpleAES protection type.
                     * 
                     */
                    void SetSimpleAesDefinition(const uint64_t& _simpleAesDefinition);

                    /**
                     * 判断参数 SimpleAesDefinition 是否已赋值
                     * @return SimpleAesDefinition 是否已赋值
                     * 
                     */
                    bool SimpleAesDefinitionHasBeenSet() const;

                    /**
                     * 获取Adaptive bitrate streaming template ID with Widevine protection type.
                     * @return WidevineDefinition Adaptive bitrate streaming template ID with Widevine protection type.
                     * 
                     */
                    uint64_t GetWidevineDefinition() const;

                    /**
                     * 设置Adaptive bitrate streaming template ID with Widevine protection type.
                     * @param _widevineDefinition Adaptive bitrate streaming template ID with Widevine protection type.
                     * 
                     */
                    void SetWidevineDefinition(const uint64_t& _widevineDefinition);

                    /**
                     * 判断参数 WidevineDefinition 是否已赋值
                     * @return WidevineDefinition 是否已赋值
                     * 
                     */
                    bool WidevineDefinitionHasBeenSet() const;

                    /**
                     * 获取Adaptive bitstreaming template ID with FairPlay protection.
                     * @return FairPlayDefinition Adaptive bitstreaming template ID with FairPlay protection.
                     * 
                     */
                    uint64_t GetFairPlayDefinition() const;

                    /**
                     * 设置Adaptive bitstreaming template ID with FairPlay protection.
                     * @param _fairPlayDefinition Adaptive bitstreaming template ID with FairPlay protection.
                     * 
                     */
                    void SetFairPlayDefinition(const uint64_t& _fairPlayDefinition);

                    /**
                     * 判断参数 FairPlayDefinition 是否已赋值
                     * @return FairPlayDefinition 是否已赋值
                     * 
                     */
                    bool FairPlayDefinitionHasBeenSet() const;

                private:

                    /**
                     * Adaptive bitrate streaming template ID with SimpleAES protection type.
                     */
                    uint64_t m_simpleAesDefinition;
                    bool m_simpleAesDefinitionHasBeenSet;

                    /**
                     * Adaptive bitrate streaming template ID with Widevine protection type.
                     */
                    uint64_t m_widevineDefinition;
                    bool m_widevineDefinitionHasBeenSet;

                    /**
                     * Adaptive bitstreaming template ID with FairPlay protection.
                     */
                    uint64_t m_fairPlayDefinition;
                    bool m_fairPlayDefinitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DRMSTREAMINGSINFOFORUPDATE_H_
