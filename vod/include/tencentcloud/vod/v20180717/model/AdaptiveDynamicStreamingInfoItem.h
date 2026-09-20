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
                * Adaptive bitstreaming information
                */
                class AdaptiveDynamicStreamingInfoItem : public AbstractModel
                {
                public:
                    AdaptiveDynamicStreamingInfoItem();
                    ~AdaptiveDynamicStreamingInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Adaptive bitrate streaming specification.</p>
                     * @return Definition <p>Adaptive bitrate streaming specification.</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>Adaptive bitrate streaming specification.</p>
                     * @param _definition <p>Adaptive bitrate streaming specification.</p>
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
                     * 获取<p>Packaging format. Value range:</p><li>HLS;</li><li>DASH.</li>
                     * @return Package <p>Packaging format. Value range:</p><li>HLS;</li><li>DASH.</li>
                     * 
                     */
                    std::string GetPackage() const;

                    /**
                     * 设置<p>Packaging format. Value range:</p><li>HLS;</li><li>DASH.</li>
                     * @param _package <p>Packaging format. Value range:</p><li>HLS;</li><li>DASH.</li>
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
                     * 获取<p>Encryption type.</p>
                     * @return DrmType <p>Encryption type.</p>
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置<p>Encryption type.</p>
                     * @param _drmType <p>Encryption type.</p>
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
                     * 获取<p>Playback address.</p>
                     * @return Url <p>Playback address.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Playback address.</p>
                     * @param _url <p>Playback address.</p>
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
                     * 获取<p>Media file size, unit: byte.</p><li>For HLS media files, the size is the sum of the m3u8 and ts file sizes;</li><li>For DASH media files, the size is the sum of the mpd and fragment file sizes;</li><li><font color="red">Note</font>: This field is 0 for adaptive bitrate stream files generated before 2022-01-10T16:00:00Z.</li>
                     * @return Size <p>Media file size, unit: byte.</p><li>For HLS media files, the size is the sum of the m3u8 and ts file sizes;</li><li>For DASH media files, the size is the sum of the mpd and fragment file sizes;</li><li><font color="red">Note</font>: This field is 0 for adaptive bitrate stream files generated before 2022-01-10T16:00:00Z.</li>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>Media file size, unit: byte.</p><li>For HLS media files, the size is the sum of the m3u8 and ts file sizes;</li><li>For DASH media files, the size is the sum of the mpd and fragment file sizes;</li><li><font color="red">Note</font>: This field is 0 for adaptive bitrate stream files generated before 2022-01-10T16:00:00Z.</li>
                     * @param _size <p>Media file size, unit: byte.</p><li>For HLS media files, the size is the sum of the m3u8 and ts file sizes;</li><li>For DASH media files, the size is the sum of the mpd and fragment file sizes;</li><li><font color="red">Note</font>: This field is 0 for adaptive bitrate stream files generated before 2022-01-10T16:00:00Z.</li>
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
                     * 获取<p>Digital watermark type. Available values:</p><li>Trace: traceability watermark processed;</li><li>CopyRight: copyright watermark processed;</li><li>None: no digital watermark processed.</li>
                     * @return DigitalWatermarkType <p>Digital watermark type. Available values:</p><li>Trace: traceability watermark processed;</li><li>CopyRight: copyright watermark processed;</li><li>None: no digital watermark processed.</li>
                     * 
                     */
                    std::string GetDigitalWatermarkType() const;

                    /**
                     * 设置<p>Digital watermark type. Available values:</p><li>Trace: traceability watermark processed;</li><li>CopyRight: copyright watermark processed;</li><li>None: no digital watermark processed.</li>
                     * @param _digitalWatermarkType <p>Digital watermark type. Available values:</p><li>Trace: traceability watermark processed;</li><li>CopyRight: copyright watermark processed;</li><li>None: no digital watermark processed.</li>
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
                     * 获取<p>Subflow information list.</p>
                     * @return SubStreamSet <p>Subflow information list.</p>
                     * 
                     */
                    std::vector<MediaSubStreamInfoItem> GetSubStreamSet() const;

                    /**
                     * 设置<p>Subflow information list.</p>
                     * @param _subStreamSet <p>Subflow information list.</p>
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
                     * 获取<p>Copyright information.</p>
                     * @return CopyRightWatermarkText <p>Copyright information.</p>
                     * 
                     */
                    std::string GetCopyRightWatermarkText() const;

                    /**
                     * 设置<p>Copyright information.</p>
                     * @param _copyRightWatermarkText <p>Copyright information.</p>
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
                     * 获取<p>Digital watermark template id.</p>
                     * @return BlindWatermarkDefinition <p>Digital watermark template id.</p>
                     * 
                     */
                    int64_t GetBlindWatermarkDefinition() const;

                    /**
                     * 设置<p>Digital watermark template id.</p>
                     * @param _blindWatermarkDefinition <p>Digital watermark template id.</p>
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
                     * 获取<p>Subtitle information list.</p>
                     * @return SubtitleSet <p>Subtitle information list.</p>
                     * 
                     */
                    std::vector<MediaSubtitleItem> GetSubtitleSet() const;

                    /**
                     * 设置<p>Subtitle information list.</p>
                     * @param _subtitleSet <p>Subtitle information list.</p>
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
                     * 获取<p>Unique identifier for default subtitle.</p>
                     * @return DefaultSubtitleId <p>Unique identifier for default subtitle.</p>
                     * 
                     */
                    std::string GetDefaultSubtitleId() const;

                    /**
                     * 设置<p>Unique identifier for default subtitle.</p>
                     * @param _defaultSubtitleId <p>Unique identifier for default subtitle.</p>
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
                     * 获取<p>DRM encryption method.</p>
                     * @return DrmEncryptType <p>DRM encryption method.</p>
                     * 
                     */
                    std::string GetDrmEncryptType() const;

                    /**
                     * 设置<p>DRM encryption method.</p>
                     * @param _drmEncryptType <p>DRM encryption method.</p>
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
                     * <p>Adaptive bitrate streaming specification.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Packaging format. Value range:</p><li>HLS;</li><li>DASH.</li>
                     */
                    std::string m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * <p>Encryption type.</p>
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * <p>Playback address.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Media file size, unit: byte.</p><li>For HLS media files, the size is the sum of the m3u8 and ts file sizes;</li><li>For DASH media files, the size is the sum of the mpd and fragment file sizes;</li><li><font color="red">Note</font>: This field is 0 for adaptive bitrate stream files generated before 2022-01-10T16:00:00Z.</li>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>Digital watermark type. Available values:</p><li>Trace: traceability watermark processed;</li><li>CopyRight: copyright watermark processed;</li><li>None: no digital watermark processed.</li>
                     */
                    std::string m_digitalWatermarkType;
                    bool m_digitalWatermarkTypeHasBeenSet;

                    /**
                     * <p>Subflow information list.</p>
                     */
                    std::vector<MediaSubStreamInfoItem> m_subStreamSet;
                    bool m_subStreamSetHasBeenSet;

                    /**
                     * <p>Copyright information.</p>
                     */
                    std::string m_copyRightWatermarkText;
                    bool m_copyRightWatermarkTextHasBeenSet;

                    /**
                     * <p>Digital watermark template id.</p>
                     */
                    int64_t m_blindWatermarkDefinition;
                    bool m_blindWatermarkDefinitionHasBeenSet;

                    /**
                     * <p>Subtitle information list.</p>
                     */
                    std::vector<MediaSubtitleItem> m_subtitleSet;
                    bool m_subtitleSetHasBeenSet;

                    /**
                     * <p>Unique identifier for default subtitle.</p>
                     */
                    std::string m_defaultSubtitleId;
                    bool m_defaultSubtitleIdHasBeenSet;

                    /**
                     * <p>DRM encryption method.</p>
                     */
                    std::string m_drmEncryptType;
                    bool m_drmEncryptTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADAPTIVEDYNAMICSTREAMINGINFOITEM_H_
