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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTITEM_H_

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
                * Abnormal fragment information for audio and video quality inspection.
                */
                class QualityInspectItem : public AbstractModel
                {
                public:
                    QualityInspectItem();
                    ~QualityInspectItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Offset time of abnormal segment start, in seconds.
                     * @return StartTimeOffset Offset time of abnormal segment start, in seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Offset time of abnormal segment start, in seconds.
                     * @param _startTimeOffset Offset time of abnormal segment start, in seconds.
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取End time offset of an abnormal fragment, in seconds.
                     * @return EndTimeOffset End time offset of an abnormal fragment, in seconds.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of an abnormal fragment, in seconds.
                     * @param _endTimeOffset End time offset of an abnormal fragment, in seconds.
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Coordinates of the detected abnormal area. The array contains 4 elements [x1,y1,x2,y2], which represent the horizontal and vertical coordinates of the top-left and bottom-right corners of the area in sequence.
<font color=red>Note:</font> This field is valid only when Type is one of the following values:
<li>BlackWhiteEdge: black and white edges;</li>
<li>Mosaic: mosaic;</li>
<li>QRCode: QR code;</li>
<li>AppletCode: mini program code;</li>
<li>BarCode: barcode.</li>
                     * @return AreaCoordSet Coordinates of the detected abnormal area. The array contains 4 elements [x1,y1,x2,y2], which represent the horizontal and vertical coordinates of the top-left and bottom-right corners of the area in sequence.
<font color=red>Note:</font> This field is valid only when Type is one of the following values:
<li>BlackWhiteEdge: black and white edges;</li>
<li>Mosaic: mosaic;</li>
<li>QRCode: QR code;</li>
<li>AppletCode: mini program code;</li>
<li>BarCode: barcode.</li>
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Coordinates of the detected abnormal area. The array contains 4 elements [x1,y1,x2,y2], which represent the horizontal and vertical coordinates of the top-left and bottom-right corners of the area in sequence.
<font color=red>Note:</font> This field is valid only when Type is one of the following values:
<li>BlackWhiteEdge: black and white edges;</li>
<li>Mosaic: mosaic;</li>
<li>QRCode: QR code;</li>
<li>AppletCode: mini program code;</li>
<li>BarCode: barcode.</li>
                     * @param _areaCoordSet Coordinates of the detected abnormal area. The array contains 4 elements [x1,y1,x2,y2], which represent the horizontal and vertical coordinates of the top-left and bottom-right corners of the area in sequence.
<font color=red>Note:</font> This field is valid only when Type is one of the following values:
<li>BlackWhiteEdge: black and white edges;</li>
<li>Mosaic: mosaic;</li>
<li>QRCode: QR code;</li>
<li>AppletCode: mini program code;</li>
<li>BarCode: barcode.</li>
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                    /**
                     * 获取Confidence. Value range: [0, 100].
<font color=red>Note:</font> This field is valid only when Type is one of the following values:
<li>Mosaic: mosaic;</li>
<li>QRCode: QR code;</li>
<li>AppletCode: mini program code;</li>
<li>BarCode: barcode.</li>
                     * @return Confidence Confidence. Value range: [0, 100].
<font color=red>Note:</font> This field is valid only when Type is one of the following values:
<li>Mosaic: mosaic;</li>
<li>QRCode: QR code;</li>
<li>AppletCode: mini program code;</li>
<li>BarCode: barcode.</li>
                     * 
                     */
                    uint64_t GetConfidence() const;

                    /**
                     * 设置Confidence. Value range: [0, 100].
<font color=red>Note:</font> This field is valid only when Type is one of the following values:
<li>Mosaic: mosaic;</li>
<li>QRCode: QR code;</li>
<li>AppletCode: mini program code;</li>
<li>BarCode: barcode.</li>
                     * @param _confidence Confidence. Value range: [0, 100].
<font color=red>Note:</font> This field is valid only when Type is one of the following values:
<li>Mosaic: mosaic;</li>
<li>QRCode: QR code;</li>
<li>AppletCode: mini program code;</li>
<li>BarCode: barcode.</li>
                     * 
                     */
                    void SetConfidence(const uint64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * Offset time of abnormal segment start, in seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of an abnormal fragment, in seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Coordinates of the detected abnormal area. The array contains 4 elements [x1,y1,x2,y2], which represent the horizontal and vertical coordinates of the top-left and bottom-right corners of the area in sequence.
<font color=red>Note:</font> This field is valid only when Type is one of the following values:
<li>BlackWhiteEdge: black and white edges;</li>
<li>Mosaic: mosaic;</li>
<li>QRCode: QR code;</li>
<li>AppletCode: mini program code;</li>
<li>BarCode: barcode.</li>
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * Confidence. Value range: [0, 100].
<font color=red>Note:</font> This field is valid only when Type is one of the following values:
<li>Mosaic: mosaic;</li>
<li>QRCode: QR code;</li>
<li>AppletCode: mini program code;</li>
<li>BarCode: barcode.</li>
                     */
                    uint64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTITEM_H_
