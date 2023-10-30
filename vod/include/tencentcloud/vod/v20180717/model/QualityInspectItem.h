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
                * Abnormal segment information of media quality inspection.
                */
                class QualityInspectItem : public AbstractModel
                {
                public:
                    QualityInspectItem();
                    ~QualityInspectItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Abnormal segment start offset time, unit: seconds.
                     * @return StartTimeOffset Abnormal segment start offset time, unit: seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Abnormal segment start offset time, unit: seconds.
                     * @param _startTimeOffset Abnormal segment start offset time, unit: seconds.
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
                     * 获取Abnormal segment termination's offset time, unit: seconds.
                     * @return EndTimeOffset Abnormal segment termination's offset time, unit: seconds.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置Abnormal segment termination's offset time, unit: seconds.
                     * @param _endTimeOffset Abnormal segment termination's offset time, unit: seconds.
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
                     * 获取Detect abnormality in the area coordinates. The array contains 4 elements [x1, y1, x2, y2], which indicate the horizontal and vertical coordinates of the upper left and lower right points of the area in sequence. <font color=red>Pay attention to:</font> The value of this field is valid only when Type is one of the following: <li>BlackWhiteEdge: black and white edge;</li> <li>Mosaic: mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Mini Program code;</li> <li>BarCode: bar code.</li>
                     * @return AreaCoordSet Detect abnormality in the area coordinates. The array contains 4 elements [x1, y1, x2, y2], which indicate the horizontal and vertical coordinates of the upper left and lower right points of the area in sequence. <font color=red>Pay attention to:</font> The value of this field is valid only when Type is one of the following: <li>BlackWhiteEdge: black and white edge;</li> <li>Mosaic: mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Mini Program code;</li> <li>BarCode: bar code.</li>
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Detect abnormality in the area coordinates. The array contains 4 elements [x1, y1, x2, y2], which indicate the horizontal and vertical coordinates of the upper left and lower right points of the area in sequence. <font color=red>Pay attention to:</font> The value of this field is valid only when Type is one of the following: <li>BlackWhiteEdge: black and white edge;</li> <li>Mosaic: mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Mini Program code;</li> <li>BarCode: bar code.</li>
                     * @param _areaCoordSet Detect abnormality in the area coordinates. The array contains 4 elements [x1, y1, x2, y2], which indicate the horizontal and vertical coordinates of the upper left and lower right points of the area in sequence. <font color=red>Pay attention to:</font> The value of this field is valid only when Type is one of the following: <li>BlackWhiteEdge: black and white edge;</li> <li>Mosaic: mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Mini Program code;</li> <li>BarCode: bar code.</li>
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
                     * 获取Confidence threshold, range: [0, 100]. <font color=red>Pay attention to:</font> This field is valid only when Type has one of the following values: <li>Mosaic: Mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Mini Program code;</li> <li>BarCode: Bar code.</li>
                     * @return Confidence Confidence threshold, range: [0, 100]. <font color=red>Pay attention to:</font> This field is valid only when Type has one of the following values: <li>Mosaic: Mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Mini Program code;</li> <li>BarCode: Bar code.</li>
                     * 
                     */
                    uint64_t GetConfidence() const;

                    /**
                     * 设置Confidence threshold, range: [0, 100]. <font color=red>Pay attention to:</font> This field is valid only when Type has one of the following values: <li>Mosaic: Mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Mini Program code;</li> <li>BarCode: Bar code.</li>
                     * @param _confidence Confidence threshold, range: [0, 100]. <font color=red>Pay attention to:</font> This field is valid only when Type has one of the following values: <li>Mosaic: Mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Mini Program code;</li> <li>BarCode: Bar code.</li>
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
                     * Abnormal segment start offset time, unit: seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * Abnormal segment termination's offset time, unit: seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Detect abnormality in the area coordinates. The array contains 4 elements [x1, y1, x2, y2], which indicate the horizontal and vertical coordinates of the upper left and lower right points of the area in sequence. <font color=red>Pay attention to:</font> The value of this field is valid only when Type is one of the following: <li>BlackWhiteEdge: black and white edge;</li> <li>Mosaic: mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Mini Program code;</li> <li>BarCode: bar code.</li>
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * Confidence threshold, range: [0, 100]. <font color=red>Pay attention to:</font> This field is valid only when Type has one of the following values: <li>Mosaic: Mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Mini Program code;</li> <li>BarCode: Bar code.</li>
                     */
                    uint64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTITEM_H_
