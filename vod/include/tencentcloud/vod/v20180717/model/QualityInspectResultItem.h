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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTRESULTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Audio and video quality detection exception result info.
                */
                class QualityInspectResultItem : public AbstractModel
                {
                public:
                    QualityInspectResultItem();
                    ~QualityInspectResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Exception type. Valid values:</p><li>Jitter: jitter</li><li>Blur: blur</li><li>LowLighting: low illumination</li><li>HighLighting: overexposure</li><li>CrashScreen: screen glitch</li><li>BlackWhiteEdge: black and white edges</li><li>SolidColorScreen: solid color screen</li><li>Noise: noise</li><li>Mosaic: mosaic</li><li>QRCode: QR code</li><li>AppletCode: mini program code</li><li>BarCode: barcode</li><li>LowVoice: bass</li><li>HighVoice: audio burst</li><li>NoVoice: mute</li><li>LowEvaluation: no reference scoring below threshold</li><li>LowColorfulness: color richness info</li><li>AudioVideoAsync: audio and video synchronization issues</li><li>AudioSubtitleAsync: audio and subtitle out of sync</li><li>VideoAesthetic: low video aesthetic score</li><li>AudioDiscontinuity: discontinuous audio</li><li>AudioVolume: volume information</li><li>AudioLoudnessJitter: severe volume change</li><li>BackgroundMusic: background music exists</li><li>AudioEvaluation: poor bass quality</li><li>AudioNoise: noise</li><li>AudioSpeechQuality: low speech definition</li><li>AudioReverb: high reverberation level</li><li>AudioHighLoudness: loudness distortion</li>
                     * @return Type <p>Exception type. Valid values:</p><li>Jitter: jitter</li><li>Blur: blur</li><li>LowLighting: low illumination</li><li>HighLighting: overexposure</li><li>CrashScreen: screen glitch</li><li>BlackWhiteEdge: black and white edges</li><li>SolidColorScreen: solid color screen</li><li>Noise: noise</li><li>Mosaic: mosaic</li><li>QRCode: QR code</li><li>AppletCode: mini program code</li><li>BarCode: barcode</li><li>LowVoice: bass</li><li>HighVoice: audio burst</li><li>NoVoice: mute</li><li>LowEvaluation: no reference scoring below threshold</li><li>LowColorfulness: color richness info</li><li>AudioVideoAsync: audio and video synchronization issues</li><li>AudioSubtitleAsync: audio and subtitle out of sync</li><li>VideoAesthetic: low video aesthetic score</li><li>AudioDiscontinuity: discontinuous audio</li><li>AudioVolume: volume information</li><li>AudioLoudnessJitter: severe volume change</li><li>BackgroundMusic: background music exists</li><li>AudioEvaluation: poor bass quality</li><li>AudioNoise: noise</li><li>AudioSpeechQuality: low speech definition</li><li>AudioReverb: high reverberation level</li><li>AudioHighLoudness: loudness distortion</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>Exception type. Valid values:</p><li>Jitter: jitter</li><li>Blur: blur</li><li>LowLighting: low illumination</li><li>HighLighting: overexposure</li><li>CrashScreen: screen glitch</li><li>BlackWhiteEdge: black and white edges</li><li>SolidColorScreen: solid color screen</li><li>Noise: noise</li><li>Mosaic: mosaic</li><li>QRCode: QR code</li><li>AppletCode: mini program code</li><li>BarCode: barcode</li><li>LowVoice: bass</li><li>HighVoice: audio burst</li><li>NoVoice: mute</li><li>LowEvaluation: no reference scoring below threshold</li><li>LowColorfulness: color richness info</li><li>AudioVideoAsync: audio and video synchronization issues</li><li>AudioSubtitleAsync: audio and subtitle out of sync</li><li>VideoAesthetic: low video aesthetic score</li><li>AudioDiscontinuity: discontinuous audio</li><li>AudioVolume: volume information</li><li>AudioLoudnessJitter: severe volume change</li><li>BackgroundMusic: background music exists</li><li>AudioEvaluation: poor bass quality</li><li>AudioNoise: noise</li><li>AudioSpeechQuality: low speech definition</li><li>AudioReverb: high reverberation level</li><li>AudioHighLoudness: loudness distortion</li>
                     * @param _type <p>Exception type. Valid values:</p><li>Jitter: jitter</li><li>Blur: blur</li><li>LowLighting: low illumination</li><li>HighLighting: overexposure</li><li>CrashScreen: screen glitch</li><li>BlackWhiteEdge: black and white edges</li><li>SolidColorScreen: solid color screen</li><li>Noise: noise</li><li>Mosaic: mosaic</li><li>QRCode: QR code</li><li>AppletCode: mini program code</li><li>BarCode: barcode</li><li>LowVoice: bass</li><li>HighVoice: audio burst</li><li>NoVoice: mute</li><li>LowEvaluation: no reference scoring below threshold</li><li>LowColorfulness: color richness info</li><li>AudioVideoAsync: audio and video synchronization issues</li><li>AudioSubtitleAsync: audio and subtitle out of sync</li><li>VideoAesthetic: low video aesthetic score</li><li>AudioDiscontinuity: discontinuous audio</li><li>AudioVolume: volume information</li><li>AudioLoudnessJitter: severe volume change</li><li>BackgroundMusic: background music exists</li><li>AudioEvaluation: poor bass quality</li><li>AudioNoise: noise</li><li>AudioSpeechQuality: low speech definition</li><li>AudioReverb: high reverberation level</li><li>AudioHighLoudness: loudness distortion</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Abnormal fragment list.<br><font color="red">Note:</font> This list only shows up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.</p>
                     * @return SegmentSet <p>Abnormal fragment list.<br><font color="red">Note:</font> This list only shows up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.</p>
                     * 
                     */
                    std::vector<QualityInspectItem> GetSegmentSet() const;

                    /**
                     * 设置<p>Abnormal fragment list.<br><font color="red">Note:</font> This list only shows up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.</p>
                     * @param _segmentSet <p>Abnormal fragment list.<br><font color="red">Note:</font> This list only shows up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.</p>
                     * 
                     */
                    void SetSegmentSet(const std::vector<QualityInspectItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取<p>URL of the exception segment list file. The file content is in JSON, and its data structure is consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)</p>
                     * @return SegmentSetFileUrl <p>URL of the exception segment list file. The file content is in JSON, and its data structure is consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)</p>
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置<p>URL of the exception segment list file. The file content is in JSON, and its data structure is consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)</p>
                     * @param _segmentSetFileUrl <p>URL of the exception segment list file. The file content is in JSON, and its data structure is consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)</p>
                     * 
                     */
                    void SetSegmentSetFileUrl(const std::string& _segmentSetFileUrl);

                    /**
                     * 判断参数 SegmentSetFileUrl 是否已赋值
                     * @return SegmentSetFileUrl 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlHasBeenSet() const;

                    /**
                     * 获取<p>Expiration time of the URL of the abnormal Segment List File, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @return SegmentSetFileUrlExpireTime <p>Expiration time of the URL of the abnormal Segment List File, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置<p>Expiration time of the URL of the abnormal Segment List File, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @param _segmentSetFileUrlExpireTime <p>Expiration time of the URL of the abnormal Segment List File, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    void SetSegmentSetFileUrlExpireTime(const std::string& _segmentSetFileUrlExpireTime);

                    /**
                     * 判断参数 SegmentSetFileUrlExpireTime 是否已赋值
                     * @return SegmentSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool SegmentSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Exception type. Valid values:</p><li>Jitter: jitter</li><li>Blur: blur</li><li>LowLighting: low illumination</li><li>HighLighting: overexposure</li><li>CrashScreen: screen glitch</li><li>BlackWhiteEdge: black and white edges</li><li>SolidColorScreen: solid color screen</li><li>Noise: noise</li><li>Mosaic: mosaic</li><li>QRCode: QR code</li><li>AppletCode: mini program code</li><li>BarCode: barcode</li><li>LowVoice: bass</li><li>HighVoice: audio burst</li><li>NoVoice: mute</li><li>LowEvaluation: no reference scoring below threshold</li><li>LowColorfulness: color richness info</li><li>AudioVideoAsync: audio and video synchronization issues</li><li>AudioSubtitleAsync: audio and subtitle out of sync</li><li>VideoAesthetic: low video aesthetic score</li><li>AudioDiscontinuity: discontinuous audio</li><li>AudioVolume: volume information</li><li>AudioLoudnessJitter: severe volume change</li><li>BackgroundMusic: background music exists</li><li>AudioEvaluation: poor bass quality</li><li>AudioNoise: noise</li><li>AudioSpeechQuality: low speech definition</li><li>AudioReverb: high reverberation level</li><li>AudioHighLoudness: loudness distortion</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Abnormal fragment list.<br><font color="red">Note:</font> This list only shows up to the first 100 elements. To obtain the complete result, get it from the file corresponding to SegmentSetFileUrl.</p>
                     */
                    std::vector<QualityInspectItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * <p>URL of the exception segment list file. The file content is in JSON, and its data structure is consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted after reaching the SegmentSetFileUrlExpireTime time point.)</p>
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * <p>Expiration time of the URL of the abnormal Segment List File, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTRESULTITEM_H_
