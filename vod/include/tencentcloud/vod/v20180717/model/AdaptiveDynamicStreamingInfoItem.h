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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaSubStreamInfoItem.h>
#include <tencentcloud/vod/v20180717/model/MediaSubtitleItem.h>


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
                class AdaptiveDynamicStreamingInfoItem : public AbstractModel
                {
                public:
                    AdaptiveDynamicStreamingInfoItem();
                    ~AdaptiveDynamicStreamingInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Definition 
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置
                     * @param _definition 
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取
                     * @return Package 
                     * 
                     */
                    std::string GetPackage() const;

                    /**
                     * 设置
                     * @param _package 
                     * 
                     */
                    void SetPackage(const std::string& _package);

                    /**
                     * 判断参数 Package 是否已赋值
                     * @return Package 是否已赋值
                     * 
                     */
                    bool PackageHasBeenSet() const;

                    /**
                     * 获取
                     * @return DrmType 
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置
                     * @param _drmType 
                     * 
                     */
                    void SetDrmType(const std::string& _drmType);

                    /**
                     * 判断参数 DrmType 是否已赋值
                     * @return DrmType 是否已赋值
                     * 
                     */
                    bool DrmTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Url 
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置
                     * @param _url 
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取
                     * @return Size 
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置
                     * @param _size 
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
                     * 获取
                     * @return DigitalWatermarkType 
                     * 
                     */
                    std::string GetDigitalWatermarkType() const;

                    /**
                     * 设置
                     * @param _digitalWatermarkType 
                     * 
                     */
                    void SetDigitalWatermarkType(const std::string& _digitalWatermarkType);

                    /**
                     * 判断参数 DigitalWatermarkType 是否已赋值
                     * @return DigitalWatermarkType 是否已赋值
                     * 
                     */
                    bool DigitalWatermarkTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubStreamSet 
                     * 
                     */
                    std::vector<MediaSubStreamInfoItem> GetSubStreamSet() const;

                    /**
                     * 设置
                     * @param _subStreamSet 
                     * 
                     */
                    void SetSubStreamSet(const std::vector<MediaSubStreamInfoItem>& _subStreamSet);

                    /**
                     * 判断参数 SubStreamSet 是否已赋值
                     * @return SubStreamSet 是否已赋值
                     * 
                     */
                    bool SubStreamSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return CopyRightWatermarkText 
                     * 
                     */
                    std::string GetCopyRightWatermarkText() const;

                    /**
                     * 设置
                     * @param _copyRightWatermarkText 
                     * 
                     */
                    void SetCopyRightWatermarkText(const std::string& _copyRightWatermarkText);

                    /**
                     * 判断参数 CopyRightWatermarkText 是否已赋值
                     * @return CopyRightWatermarkText 是否已赋值
                     * 
                     */
                    bool CopyRightWatermarkTextHasBeenSet() const;

                    /**
                     * 获取
                     * @return BlindWatermarkDefinition 
                     * 
                     */
                    int64_t GetBlindWatermarkDefinition() const;

                    /**
                     * 设置
                     * @param _blindWatermarkDefinition 
                     * 
                     */
                    void SetBlindWatermarkDefinition(const int64_t& _blindWatermarkDefinition);

                    /**
                     * 判断参数 BlindWatermarkDefinition 是否已赋值
                     * @return BlindWatermarkDefinition 是否已赋值
                     * 
                     */
                    bool BlindWatermarkDefinitionHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubtitleSet 
                     * 
                     */
                    std::vector<MediaSubtitleItem> GetSubtitleSet() const;

                    /**
                     * 设置
                     * @param _subtitleSet 
                     * 
                     */
                    void SetSubtitleSet(const std::vector<MediaSubtitleItem>& _subtitleSet);

                    /**
                     * 判断参数 SubtitleSet 是否已赋值
                     * @return SubtitleSet 是否已赋值
                     * 
                     */
                    bool SubtitleSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return DefaultSubtitleId 
                     * 
                     */
                    std::string GetDefaultSubtitleId() const;

                    /**
                     * 设置
                     * @param _defaultSubtitleId 
                     * 
                     */
                    void SetDefaultSubtitleId(const std::string& _defaultSubtitleId);

                    /**
                     * 判断参数 DefaultSubtitleId 是否已赋值
                     * @return DefaultSubtitleId 是否已赋值
                     * 
                     */
                    bool DefaultSubtitleIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return DrmEncryptType 
                     * 
                     */
                    std::string GetDrmEncryptType() const;

                    /**
                     * 设置
                     * @param _drmEncryptType 
                     * 
                     */
                    void SetDrmEncryptType(const std::string& _drmEncryptType);

                    /**
                     * 判断参数 DrmEncryptType 是否已赋值
                     * @return DrmEncryptType 是否已赋值
                     * 
                     */
                    bool DrmEncryptTypeHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_digitalWatermarkType;
                    bool m_digitalWatermarkTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<MediaSubStreamInfoItem> m_subStreamSet;
                    bool m_subStreamSetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_copyRightWatermarkText;
                    bool m_copyRightWatermarkTextHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_blindWatermarkDefinition;
                    bool m_blindWatermarkDefinitionHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<MediaSubtitleItem> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_defaultSubtitleId;
                    bool m_defaultSubtitleIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_drmEncryptType;
                    bool m_drmEncryptTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_
