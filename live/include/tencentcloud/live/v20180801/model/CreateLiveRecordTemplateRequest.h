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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVERECORDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVERECORDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/RecordParam.h>
#include <tencentcloud/live/v20180801/model/HlsSpecialParam.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateLiveRecordTemplate request structure.
                */
                class CreateLiveRecordTemplateRequest : public AbstractModel
                {
                public:
                    CreateLiveRecordTemplateRequest();
                    ~CreateLiveRecordTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template name. Only letters, digits, underscores, and hyphens can be contained.
                     * @return TemplateName Template name. Only letters, digits, underscores, and hyphens can be contained.
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name. Only letters, digits, underscores, and hyphens can be contained.
                     * @param TemplateName Template name. Only letters, digits, underscores, and hyphens can be contained.
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Message description
                     * @return Description Message description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Message description
                     * @param Description Message description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取FLV recording parameter, which is set when FLV recording is enabled.
                     * @return FlvParam FLV recording parameter, which is set when FLV recording is enabled.
                     */
                    RecordParam GetFlvParam() const;

                    /**
                     * 设置FLV recording parameter, which is set when FLV recording is enabled.
                     * @param FlvParam FLV recording parameter, which is set when FLV recording is enabled.
                     */
                    void SetFlvParam(const RecordParam& _flvParam);

                    /**
                     * 判断参数 FlvParam 是否已赋值
                     * @return FlvParam 是否已赋值
                     */
                    bool FlvParamHasBeenSet() const;

                    /**
                     * 获取HLS recording parameter, which is set when HLS recording is enabled.
                     * @return HlsParam HLS recording parameter, which is set when HLS recording is enabled.
                     */
                    RecordParam GetHlsParam() const;

                    /**
                     * 设置HLS recording parameter, which is set when HLS recording is enabled.
                     * @param HlsParam HLS recording parameter, which is set when HLS recording is enabled.
                     */
                    void SetHlsParam(const RecordParam& _hlsParam);

                    /**
                     * 判断参数 HlsParam 是否已赋值
                     * @return HlsParam 是否已赋值
                     */
                    bool HlsParamHasBeenSet() const;

                    /**
                     * 获取Mp4 recording parameter, which is set when Mp4 recording is enabled.
                     * @return Mp4Param Mp4 recording parameter, which is set when Mp4 recording is enabled.
                     */
                    RecordParam GetMp4Param() const;

                    /**
                     * 设置Mp4 recording parameter, which is set when Mp4 recording is enabled.
                     * @param Mp4Param Mp4 recording parameter, which is set when Mp4 recording is enabled.
                     */
                    void SetMp4Param(const RecordParam& _mp4Param);

                    /**
                     * 判断参数 Mp4Param 是否已赋值
                     * @return Mp4Param 是否已赋值
                     */
                    bool Mp4ParamHasBeenSet() const;

                    /**
                     * 获取AAC recording parameter, which is set when AAC recording is enabled.
                     * @return AacParam AAC recording parameter, which is set when AAC recording is enabled.
                     */
                    RecordParam GetAacParam() const;

                    /**
                     * 设置AAC recording parameter, which is set when AAC recording is enabled.
                     * @param AacParam AAC recording parameter, which is set when AAC recording is enabled.
                     */
                    void SetAacParam(const RecordParam& _aacParam);

                    /**
                     * 判断参数 AacParam 是否已赋值
                     * @return AacParam 是否已赋值
                     */
                    bool AacParamHasBeenSet() const;

                    /**
                     * 获取LVB type. Default value: 0.
0: LVB.
1: LCB.
                     * @return IsDelayLive LVB type. Default value: 0.
0: LVB.
1: LCB.
                     */
                    int64_t GetIsDelayLive() const;

                    /**
                     * 设置LVB type. Default value: 0.
0: LVB.
1: LCB.
                     * @param IsDelayLive LVB type. Default value: 0.
0: LVB.
1: LCB.
                     */
                    void SetIsDelayLive(const int64_t& _isDelayLive);

                    /**
                     * 判断参数 IsDelayLive 是否已赋值
                     * @return IsDelayLive 是否已赋值
                     */
                    bool IsDelayLiveHasBeenSet() const;

                    /**
                     * 获取HLS-specific recording parameter.
                     * @return HlsSpecialParam HLS-specific recording parameter.
                     */
                    HlsSpecialParam GetHlsSpecialParam() const;

                    /**
                     * 设置HLS-specific recording parameter.
                     * @param HlsSpecialParam HLS-specific recording parameter.
                     */
                    void SetHlsSpecialParam(const HlsSpecialParam& _hlsSpecialParam);

                    /**
                     * 判断参数 HlsSpecialParam 是否已赋值
                     * @return HlsSpecialParam 是否已赋值
                     */
                    bool HlsSpecialParamHasBeenSet() const;

                    /**
                     * 获取Mp3 recording parameter, which is set when Mp3 recording is enabled.
                     * @return Mp3Param Mp3 recording parameter, which is set when Mp3 recording is enabled.
                     */
                    RecordParam GetMp3Param() const;

                    /**
                     * 设置Mp3 recording parameter, which is set when Mp3 recording is enabled.
                     * @param Mp3Param Mp3 recording parameter, which is set when Mp3 recording is enabled.
                     */
                    void SetMp3Param(const RecordParam& _mp3Param);

                    /**
                     * 判断参数 Mp3Param 是否已赋值
                     * @return Mp3Param 是否已赋值
                     */
                    bool Mp3ParamHasBeenSet() const;

                private:

                    /**
                     * Template name. Only letters, digits, underscores, and hyphens can be contained.
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
                     * Mp4 recording parameter, which is set when Mp4 recording is enabled.
                     */
                    RecordParam m_mp4Param;
                    bool m_mp4ParamHasBeenSet;

                    /**
                     * AAC recording parameter, which is set when AAC recording is enabled.
                     */
                    RecordParam m_aacParam;
                    bool m_aacParamHasBeenSet;

                    /**
                     * LVB type. Default value: 0.
0: LVB.
1: LCB.
                     */
                    int64_t m_isDelayLive;
                    bool m_isDelayLiveHasBeenSet;

                    /**
                     * HLS-specific recording parameter.
                     */
                    HlsSpecialParam m_hlsSpecialParam;
                    bool m_hlsSpecialParamHasBeenSet;

                    /**
                     * Mp3 recording parameter, which is set when Mp3 recording is enabled.
                     */
                    RecordParam m_mp3Param;
                    bool m_mp3ParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVERECORDTEMPLATEREQUEST_H_
