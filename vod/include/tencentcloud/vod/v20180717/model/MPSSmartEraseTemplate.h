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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASETEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSSmartEraseSubtitleConfig.h>
#include <tencentcloud/vod/v20180717/model/MPSSmartEraseWatermarkConfig.h>
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
                class MPSSmartEraseTemplate : public AbstractModel
                {
                public:
                    MPSSmartEraseTemplate();
                    ~MPSSmartEraseTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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
                     * @return Comment 
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置
                     * @param _comment 
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取
                     * @return EraseSubtitleConfig 
                     * 
                     */
                    MPSSmartEraseSubtitleConfig GetEraseSubtitleConfig() const;

                    /**
                     * 设置
                     * @param _eraseSubtitleConfig 
                     * 
                     */
                    void SetEraseSubtitleConfig(const MPSSmartEraseSubtitleConfig& _eraseSubtitleConfig);

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
                    MPSSmartEraseWatermarkConfig GetEraseWatermarkConfig() const;

                    /**
                     * 设置
                     * @param _eraseWatermarkConfig 
                     * 
                     */
                    void SetEraseWatermarkConfig(const MPSSmartEraseWatermarkConfig& _eraseWatermarkConfig);

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
                     * @return SampleWidth 
                     * 
                     */
                    uint64_t GetSampleWidth() const;

                    /**
                     * 设置
                     * @param _sampleWidth 
                     * 
                     */
                    void SetSampleWidth(const uint64_t& _sampleWidth);

                    /**
                     * 判断参数 SampleWidth 是否已赋值
                     * @return SampleWidth 是否已赋值
                     * 
                     */
                    bool SampleWidthHasBeenSet() const;

                    /**
                     * 获取
                     * @return SampleHeight 
                     * 
                     */
                    uint64_t GetSampleHeight() const;

                    /**
                     * 设置
                     * @param _sampleHeight 
                     * 
                     */
                    void SetSampleHeight(const uint64_t& _sampleHeight);

                    /**
                     * 判断参数 SampleHeight 是否已赋值
                     * @return SampleHeight 是否已赋值
                     * 
                     */
                    bool SampleHeightHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_eraseType;
                    bool m_eraseTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 
                     */
                    MPSSmartEraseSubtitleConfig m_eraseSubtitleConfig;
                    bool m_eraseSubtitleConfigHasBeenSet;

                    /**
                     * 
                     */
                    MPSSmartEraseWatermarkConfig m_eraseWatermarkConfig;
                    bool m_eraseWatermarkConfigHasBeenSet;

                    /**
                     * 
                     */
                    MPSSmartErasePrivacyConfig m_erasePrivacyConfig;
                    bool m_erasePrivacyConfigHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_sampleWidth;
                    bool m_sampleWidthHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_sampleHeight;
                    bool m_sampleHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTERASETEMPLATE_H_
