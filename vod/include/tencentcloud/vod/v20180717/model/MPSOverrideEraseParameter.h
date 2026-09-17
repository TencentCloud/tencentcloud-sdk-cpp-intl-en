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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSOVERRIDEERASEPARAMETER_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSOVERRIDEERASEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSUpdateSmartEraseSubtitleConfig.h>
#include <tencentcloud/vod/v20180717/model/MPSUpdateSmartEraseWatermarkConfig.h>
#include <tencentcloud/vod/v20180717/model/MPSSmartErasePrivacyConfig.h>


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
                class MPSOverrideEraseParameter : public AbstractModel
                {
                public:
                    MPSOverrideEraseParameter();
                    ~MPSOverrideEraseParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return EraseType 
                     * 
                     */
                    std::string GetEraseType() const;

                    /**
                     * 设置
                     * @param _eraseType 
                     * 
                     */
                    void SetEraseType(const std::string& _eraseType);

                    /**
                     * 判断参数 EraseType 是否已赋值
                     * @return EraseType 是否已赋值
                     * 
                     */
                    bool EraseTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return EraseSubtitleConfig 
                     * 
                     */
                    MPSUpdateSmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置
                     * @param _eraseSubtitleConfig 
                     * 
                     */
                    void SetEraseSubtitleConfig(const MPSUpdateSmartEraseSubtitleConfig& _eraseSubtitleConfig);

                    /**
                     * 判断参数 EraseSubtitleConfig 是否已赋值
                     * @return EraseSubtitleConfig 是否已赋值
                     * 
                     */
                    bool EraseSubtitleConfigHasBeenSet() const;

                    /**
                     * 获取
                     * @return EraseWatermarkConfig 
                     * 
                     */
                    MPSUpdateSmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置
                     * @param _eraseWatermarkConfig 
                     * 
                     */
                    void SetEraseWatermarkConfig(const MPSUpdateSmartEraseWatermarkConfig& _eraseWatermarkConfig);

                    /**
                     * 判断参数 EraseWatermarkConfig 是否已赋值
                     * @return EraseWatermarkConfig 是否已赋值
                     * 
                     */
                    bool EraseWatermarkConfigHasBeenSet() const;

                    /**
                     * 获取
                     * @return ErasePrivacyConfig 
                     * 
                     */
                    MPSSmartErasePrivacyConfig GetErasePrivacyConfig() const;

                    /**
                     * 设置
                     * @param _erasePrivacyConfig 
                     * 
                     */
                    void SetErasePrivacyConfig(const MPSSmartErasePrivacyConfig& _erasePrivacyConfig);

                    /**
                     * 判断参数 ErasePrivacyConfig 是否已赋值
                     * @return ErasePrivacyConfig 是否已赋值
                     * 
                     */
                    bool ErasePrivacyConfigHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubtitleEmbedId 
                     * 
                     */
                    int64_t GetSubtitleEmbedId() const;

                    /**
                     * 设置
                     * @param _subtitleEmbedId 
                     * 
                     */
                    void SetSubtitleEmbedId(const int64_t& _subtitleEmbedId);

                    /**
                     * 判断参数 SubtitleEmbedId 是否已赋值
                     * @return SubtitleEmbedId 是否已赋值
                     * 
                     */
                    bool SubtitleEmbedIdHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * 
                     */
                    MPSUpdateSmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * 
                     */
                    MPSUpdateSmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * 
                     */
                    MPSSmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_subtitleEmbedId;
                    bool m_subtitleEmbedIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSOVERRIDEERASEPARAMETER_H_
