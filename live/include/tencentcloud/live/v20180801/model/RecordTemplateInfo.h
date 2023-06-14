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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDTEMPLATEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/RecordParam.h>
#include <tencentcloud/live/v20180801/model/HlsSpecialParam.h>
#include <tencentcloud/live/v20180801/model/FlvSpecialParam.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Recording template information
                */
                class RecordTemplateInfo : public AbstractModel
                {
                public:
                    RecordTemplateInfo();
                    ~RecordTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template ID.
                     * @return TemplateId Template ID.
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Template ID.
                     * @param _templateId Template ID.
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Template name.
                     * @return TemplateName Template name.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name.
                     * @param _templateName Template name.
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Message description
                     * @return Description Message description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Message description
                     * @param _description Message description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取FLV recording parameter.
                     * @return FlvParam FLV recording parameter.
                     * 
                     */
                    RecordParam GetFlvParam() const;

                    /**
                     * 设置FLV recording parameter.
                     * @param _flvParam FLV recording parameter.
                     * 
                     */
                    void SetFlvParam(const RecordParam& _flvParam);

                    /**
                     * 判断参数 FlvParam 是否已赋值
                     * @return FlvParam 是否已赋值
                     * 
                     */
                    bool FlvParamHasBeenSet() const;

                    /**
                     * 获取HLS recording parameter.
                     * @return HlsParam HLS recording parameter.
                     * 
                     */
                    RecordParam GetHlsParam() const;

                    /**
                     * 设置HLS recording parameter.
                     * @param _hlsParam HLS recording parameter.
                     * 
                     */
                    void SetHlsParam(const RecordParam& _hlsParam);

                    /**
                     * 判断参数 HlsParam 是否已赋值
                     * @return HlsParam 是否已赋值
                     * 
                     */
                    bool HlsParamHasBeenSet() const;

                    /**
                     * 获取MP4 recording parameter.
                     * @return Mp4Param MP4 recording parameter.
                     * 
                     */
                    RecordParam GetMp4Param() const;

                    /**
                     * 设置MP4 recording parameter.
                     * @param _mp4Param MP4 recording parameter.
                     * 
                     */
                    void SetMp4Param(const RecordParam& _mp4Param);

                    /**
                     * 判断参数 Mp4Param 是否已赋值
                     * @return Mp4Param 是否已赋值
                     * 
                     */
                    bool Mp4ParamHasBeenSet() const;

                    /**
                     * 获取AAC recording parameter.
                     * @return AacParam AAC recording parameter.
                     * 
                     */
                    RecordParam GetAacParam() const;

                    /**
                     * 设置AAC recording parameter.
                     * @param _aacParam AAC recording parameter.
                     * 
                     */
                    void SetAacParam(const RecordParam& _aacParam);

                    /**
                     * 判断参数 AacParam 是否已赋值
                     * @return AacParam 是否已赋值
                     * 
                     */
                    bool AacParamHasBeenSet() const;

                    /**
                     * 获取0: LVB,
1: LCB.
                     * @return IsDelayLive 0: LVB,
1: LCB.
                     * 
                     */
                    int64_t GetIsDelayLive() const;

                    /**
                     * 设置0: LVB,
1: LCB.
                     * @param _isDelayLive 0: LVB,
1: LCB.
                     * 
                     */
                    void SetIsDelayLive(const int64_t& _isDelayLive);

                    /**
                     * 判断参数 IsDelayLive 是否已赋值
                     * @return IsDelayLive 是否已赋值
                     * 
                     */
                    bool IsDelayLiveHasBeenSet() const;

                    /**
                     * 获取A special parameter for HLS recording.
                     * @return HlsSpecialParam A special parameter for HLS recording.
                     * 
                     */
                    HlsSpecialParam GetHlsSpecialParam() const;

                    /**
                     * 设置A special parameter for HLS recording.
                     * @param _hlsSpecialParam A special parameter for HLS recording.
                     * 
                     */
                    void SetHlsSpecialParam(const HlsSpecialParam& _hlsSpecialParam);

                    /**
                     * 判断参数 HlsSpecialParam 是否已赋值
                     * @return HlsSpecialParam 是否已赋值
                     * 
                     */
                    bool HlsSpecialParamHasBeenSet() const;

                    /**
                     * 获取MP3 recording parameter.
                     * @return Mp3Param MP3 recording parameter.
                     * 
                     */
                    RecordParam GetMp3Param() const;

                    /**
                     * 设置MP3 recording parameter.
                     * @param _mp3Param MP3 recording parameter.
                     * 
                     */
                    void SetMp3Param(const RecordParam& _mp3Param);

                    /**
                     * 判断参数 Mp3Param 是否已赋值
                     * @return Mp3Param 是否已赋值
                     * 
                     */
                    bool Mp3ParamHasBeenSet() const;

                    /**
                     * 获取Whether the watermark is removed.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return RemoveWatermark Whether the watermark is removed.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    bool GetRemoveWatermark() const;

                    /**
                     * 设置Whether the watermark is removed.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _removeWatermark Whether the watermark is removed.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetRemoveWatermark(const bool& _removeWatermark);

                    /**
                     * 判断参数 RemoveWatermark 是否已赋值
                     * @return RemoveWatermark 是否已赋值
                     * 
                     */
                    bool RemoveWatermarkHasBeenSet() const;

                    /**
                     * 获取A special parameter for FLV recording.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FlvSpecialParam A special parameter for FLV recording.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    FlvSpecialParam GetFlvSpecialParam() const;

                    /**
                     * 设置A special parameter for FLV recording.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _flvSpecialParam A special parameter for FLV recording.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFlvSpecialParam(const FlvSpecialParam& _flvSpecialParam);

                    /**
                     * 判断参数 FlvSpecialParam 是否已赋值
                     * @return FlvSpecialParam 是否已赋值
                     * 
                     */
                    bool FlvSpecialParamHasBeenSet() const;

                private:

                    /**
                     * Template ID.
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Template name.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Message description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * FLV recording parameter.
                     */
                    RecordParam m_flvParam;
                    bool m_flvParamHasBeenSet;

                    /**
                     * HLS recording parameter.
                     */
                    RecordParam m_hlsParam;
                    bool m_hlsParamHasBeenSet;

                    /**
                     * MP4 recording parameter.
                     */
                    RecordParam m_mp4Param;
                    bool m_mp4ParamHasBeenSet;

                    /**
                     * AAC recording parameter.
                     */
                    RecordParam m_aacParam;
                    bool m_aacParamHasBeenSet;

                    /**
                     * 0: LVB,
1: LCB.
                     */
                    int64_t m_isDelayLive;
                    bool m_isDelayLiveHasBeenSet;

                    /**
                     * A special parameter for HLS recording.
                     */
                    HlsSpecialParam m_hlsSpecialParam;
                    bool m_hlsSpecialParamHasBeenSet;

                    /**
                     * MP3 recording parameter.
                     */
                    RecordParam m_mp3Param;
                    bool m_mp3ParamHasBeenSet;

                    /**
                     * Whether the watermark is removed.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    bool m_removeWatermark;
                    bool m_removeWatermarkHasBeenSet;

                    /**
                     * A special parameter for FLV recording.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    FlvSpecialParam m_flvSpecialParam;
                    bool m_flvSpecialParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_RECORDTEMPLATEINFO_H_
