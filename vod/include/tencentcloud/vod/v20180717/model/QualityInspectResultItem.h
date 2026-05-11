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
                * Abnormal result Information of media quality inspection.
                */
                class QualityInspectResultItem : public AbstractModel
                {
                public:
                    QualityInspectResultItem();
                    ~QualityInspectResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Exception type. Valid values:
<li>Jitter: jitter.</li>
<li>Blur: blurry;</li>
<li>LowLighting: low light;</li>
<li>HighLighting: overexposure.</li>
<li>CrashScreen: screen glitch;</li>
<li>BlackWhiteEdge: black and white edges.</li>
<li>SolidColorScreen: solid color screen.</li>
<li>Noise: noise.</li>
<li>Mosaic: mosaic.</li>
<li>QRCode: QR code.</li>
<li>AppletCode: mini program code.</li>
<li>BarCode: barcode;</li>
<li>LowVoice: bass;</li>
<li>HighVoice: high voice;</li>
<li>NoVoice: mute;</li>
<li>LowEvaluation: no-reference scoring below threshold.</li>
                     * @return Type Exception type. Valid values:
<li>Jitter: jitter.</li>
<li>Blur: blurry;</li>
<li>LowLighting: low light;</li>
<li>HighLighting: overexposure.</li>
<li>CrashScreen: screen glitch;</li>
<li>BlackWhiteEdge: black and white edges.</li>
<li>SolidColorScreen: solid color screen.</li>
<li>Noise: noise.</li>
<li>Mosaic: mosaic.</li>
<li>QRCode: QR code.</li>
<li>AppletCode: mini program code.</li>
<li>BarCode: barcode;</li>
<li>LowVoice: bass;</li>
<li>HighVoice: high voice;</li>
<li>NoVoice: mute;</li>
<li>LowEvaluation: no-reference scoring below threshold.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Exception type. Valid values:
<li>Jitter: jitter.</li>
<li>Blur: blurry;</li>
<li>LowLighting: low light;</li>
<li>HighLighting: overexposure.</li>
<li>CrashScreen: screen glitch;</li>
<li>BlackWhiteEdge: black and white edges.</li>
<li>SolidColorScreen: solid color screen.</li>
<li>Noise: noise.</li>
<li>Mosaic: mosaic.</li>
<li>QRCode: QR code.</li>
<li>AppletCode: mini program code.</li>
<li>BarCode: barcode;</li>
<li>LowVoice: bass;</li>
<li>HighVoice: high voice;</li>
<li>NoVoice: mute;</li>
<li>LowEvaluation: no-reference scoring below threshold.</li>
                     * @param _type Exception type. Valid values:
<li>Jitter: jitter.</li>
<li>Blur: blurry;</li>
<li>LowLighting: low light;</li>
<li>HighLighting: overexposure.</li>
<li>CrashScreen: screen glitch;</li>
<li>BlackWhiteEdge: black and white edges.</li>
<li>SolidColorScreen: solid color screen.</li>
<li>Noise: noise.</li>
<li>Mosaic: mosaic.</li>
<li>QRCode: QR code.</li>
<li>AppletCode: mini program code.</li>
<li>BarCode: barcode;</li>
<li>LowVoice: bass;</li>
<li>HighVoice: high voice;</li>
<li>NoVoice: mute;</li>
<li>LowEvaluation: no-reference scoring below threshold.</li>
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
                     * 获取Abnormal fragment list.
<font color=red>Note:</font> The list only displays the first 100 elements. To obtain the complete result, refer to the corresponding file in SegmentSetFileUrl.
                     * @return SegmentSet Abnormal fragment list.
<font color=red>Note:</font> The list only displays the first 100 elements. To obtain the complete result, refer to the corresponding file in SegmentSetFileUrl.
                     * 
                     */
                    std::vector<QualityInspectItem> GetSegmentSet() const;

                    /**
                     * 设置Abnormal fragment list.
<font color=red>Note:</font> The list only displays the first 100 elements. To obtain the complete result, refer to the corresponding file in SegmentSetFileUrl.
                     * @param _segmentSet Abnormal fragment list.
<font color=red>Note:</font> The list only displays the first 100 elements. To obtain the complete result, refer to the corresponding file in SegmentSetFileUrl.
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
                     * 获取URL of Abnormal Fragment List File. The content of the file is JSON, consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted when reaching SegmentSetFileUrlExpireTime.)
                     * @return SegmentSetFileUrl URL of Abnormal Fragment List File. The content of the file is JSON, consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted when reaching SegmentSetFileUrlExpireTime.)
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置URL of Abnormal Fragment List File. The content of the file is JSON, consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted when reaching SegmentSetFileUrlExpireTime.)
                     * @param _segmentSetFileUrl URL of Abnormal Fragment List File. The content of the file is JSON, consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted when reaching SegmentSetFileUrlExpireTime.)
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
                     * 获取Expiration time of the Segment List File URL for anomalies, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return SegmentSetFileUrlExpireTime Expiration time of the Segment List File URL for anomalies, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置Expiration time of the Segment List File URL for anomalies, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _segmentSetFileUrlExpireTime Expiration time of the Segment List File URL for anomalies, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * Exception type. Valid values:
<li>Jitter: jitter.</li>
<li>Blur: blurry;</li>
<li>LowLighting: low light;</li>
<li>HighLighting: overexposure.</li>
<li>CrashScreen: screen glitch;</li>
<li>BlackWhiteEdge: black and white edges.</li>
<li>SolidColorScreen: solid color screen.</li>
<li>Noise: noise.</li>
<li>Mosaic: mosaic.</li>
<li>QRCode: QR code.</li>
<li>AppletCode: mini program code.</li>
<li>BarCode: barcode;</li>
<li>LowVoice: bass;</li>
<li>HighVoice: high voice;</li>
<li>NoVoice: mute;</li>
<li>LowEvaluation: no-reference scoring below threshold.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Abnormal fragment list.
<font color=red>Note:</font> The list only displays the first 100 elements. To obtain the complete result, refer to the corresponding file in SegmentSetFileUrl.
                     */
                    std::vector<QualityInspectItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * URL of Abnormal Fragment List File. The content of the file is JSON, consistent with the fields of SegmentSet. (The file will not be retained permanently and will be deleted when reaching SegmentSetFileUrlExpireTime.)
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * Expiration time of the Segment List File URL for anomalies, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTRESULTITEM_H_
