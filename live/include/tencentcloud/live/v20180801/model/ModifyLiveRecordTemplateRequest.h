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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVERECORDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVERECORDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyLiveRecordTemplate request structure.
                */
                class ModifyLiveRecordTemplateRequest : public AbstractModel
                {
                public:
                    ModifyLiveRecordTemplateRequest();
                    ~ModifyLiveRecordTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template ID obtained through the `DescribeRecordTemplates` API.
                     * @return TemplateId Template ID obtained through the `DescribeRecordTemplates` API.
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置Template ID obtained through the `DescribeRecordTemplates` API.
                     * @param _templateId Template ID obtained through the `DescribeRecordTemplates` API.
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
                     * 获取FLV recording parameter, which is set when FLV recording is enabled.
                     * @return FlvParam FLV recording parameter, which is set when FLV recording is enabled.
                     * 
                     */
                    RecordParam GetFlvParam() const;

                    /**
                     * 设置FLV recording parameter, which is set when FLV recording is enabled.
                     * @param _flvParam FLV recording parameter, which is set when FLV recording is enabled.
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
                     * 获取HLS recording parameter, which is set when HLS recording is enabled.
                     * @return HlsParam HLS recording parameter, which is set when HLS recording is enabled.
                     * 
                     */
                    RecordParam GetHlsParam() const;

                    /**
                     * 设置HLS recording parameter, which is set when HLS recording is enabled.
                     * @param _hlsParam HLS recording parameter, which is set when HLS recording is enabled.
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
                     * 获取MP4 recording parameter, which is set when MP4 recording is enabled.
                     * @return Mp4Param MP4 recording parameter, which is set when MP4 recording is enabled.
                     * 
                     */
                    RecordParam GetMp4Param() const;

                    /**
                     * 设置MP4 recording parameter, which is set when MP4 recording is enabled.
                     * @param _mp4Param MP4 recording parameter, which is set when MP4 recording is enabled.
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
                     * 获取AAC recording parameter, which is set when AAC recording is enabled.
                     * @return AacParam AAC recording parameter, which is set when AAC recording is enabled.
                     * 
                     */
                    RecordParam GetAacParam() const;

                    /**
                     * 设置AAC recording parameter, which is set when AAC recording is enabled.
                     * @param _aacParam AAC recording parameter, which is set when AAC recording is enabled.
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
                     * 获取Custom HLS recording parameter.
                     * @return HlsSpecialParam Custom HLS recording parameter.
                     * 
                     */
                    HlsSpecialParam GetHlsSpecialParam() const;

                    /**
                     * 设置Custom HLS recording parameter.
                     * @param _hlsSpecialParam Custom HLS recording parameter.
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
                     * 获取MP3 recording parameter, which is set when MP3 recording is enabled.
                     * @return Mp3Param MP3 recording parameter, which is set when MP3 recording is enabled.
                     * 
                     */
                    RecordParam GetMp3Param() const;

                    /**
                     * 设置MP3 recording parameter, which is set when MP3 recording is enabled.
                     * @param _mp3Param MP3 recording parameter, which is set when MP3 recording is enabled.
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
                     * 获取Whether to remove the watermark. This parameter is invalid if `IsDelayLive` is `1`.
                     * @return RemoveWatermark Whether to remove the watermark. This parameter is invalid if `IsDelayLive` is `1`.
                     * 
                     */
                    bool GetRemoveWatermark() const;

                    /**
                     * 设置Whether to remove the watermark. This parameter is invalid if `IsDelayLive` is `1`.
                     * @param _removeWatermark Whether to remove the watermark. This parameter is invalid if `IsDelayLive` is `1`.
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
                     * @return FlvSpecialParam A special parameter for FLV recording.
                     * 
                     */
                    FlvSpecialParam GetFlvSpecialParam() const;

                    /**
                     * 设置A special parameter for FLV recording.
                     * @param _flvSpecialParam A special parameter for FLV recording.
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
                     * Template ID obtained through the `DescribeRecordTemplates` API.
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
                     * FLV recording parameter, which is set when FLV recording is enabled.
                     */
                    RecordParam m_flvParam;
                    bool m_flvParamHasBeenSet;

                    /**
                     * HLS recording parameter, which is set when HLS recording is enabled.
                     */
                    RecordParam m_hlsParam;
                    bool m_hlsParamHasBeenSet;

                    /**
                     * MP4 recording parameter, which is set when MP4 recording is enabled.
                     */
                    RecordParam m_mp4Param;
                    bool m_mp4ParamHasBeenSet;

                    /**
                     * AAC recording parameter, which is set when AAC recording is enabled.
                     */
                    RecordParam m_aacParam;
                    bool m_aacParamHasBeenSet;

                    /**
                     * Custom HLS recording parameter.
                     */
                    HlsSpecialParam m_hlsSpecialParam;
                    bool m_hlsSpecialParamHasBeenSet;

                    /**
                     * MP3 recording parameter, which is set when MP3 recording is enabled.
                     */
                    RecordParam m_mp3Param;
                    bool m_mp3ParamHasBeenSet;

                    /**
                     * Whether to remove the watermark. This parameter is invalid if `IsDelayLive` is `1`.
                     */
                    bool m_removeWatermark;
                    bool m_removeWatermarkHasBeenSet;

                    /**
                     * A special parameter for FLV recording.
                     */
                    FlvSpecialParam m_flvSpecialParam;
                    bool m_flvSpecialParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVERECORDTEMPLATEREQUEST_H_
