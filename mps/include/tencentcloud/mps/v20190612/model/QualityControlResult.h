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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/QualityControlItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The issues detected by quality control.
                */
                class QualityControlResult : public AbstractModel
                {
                public:
                    QualityControlResult();
                    ~QualityControlResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The issue type. Valid values:
`Jitter`
`Blur`
`LowLighting`
`HighLighting` (overexposure)
`CrashScreen` (video corruption)
`BlackWhiteEdge`
`SolidColorScreen` (blank screen)
`Noise`
`Mosaic` (pixelation)
`QRCode`
`AppletCode` (Weixin Mini Program code)
`BarCode`
`LowVoice`
`HighVoice`
`NoVoice`
`LowEvaluation` (low no-reference video quality score)
                     * @return Type The issue type. Valid values:
`Jitter`
`Blur`
`LowLighting`
`HighLighting` (overexposure)
`CrashScreen` (video corruption)
`BlackWhiteEdge`
`SolidColorScreen` (blank screen)
`Noise`
`Mosaic` (pixelation)
`QRCode`
`AppletCode` (Weixin Mini Program code)
`BarCode`
`LowVoice`
`HighVoice`
`NoVoice`
`LowEvaluation` (low no-reference video quality score)
                     */
                    std::string GetType() const;

                    /**
                     * 设置The issue type. Valid values:
`Jitter`
`Blur`
`LowLighting`
`HighLighting` (overexposure)
`CrashScreen` (video corruption)
`BlackWhiteEdge`
`SolidColorScreen` (blank screen)
`Noise`
`Mosaic` (pixelation)
`QRCode`
`AppletCode` (Weixin Mini Program code)
`BarCode`
`LowVoice`
`HighVoice`
`NoVoice`
`LowEvaluation` (low no-reference video quality score)
                     * @param Type The issue type. Valid values:
`Jitter`
`Blur`
`LowLighting`
`HighLighting` (overexposure)
`CrashScreen` (video corruption)
`BlackWhiteEdge`
`SolidColorScreen` (blank screen)
`Noise`
`Mosaic` (pixelation)
`QRCode`
`AppletCode` (Weixin Mini Program code)
`BarCode`
`LowVoice`
`HighVoice`
`NoVoice`
`LowEvaluation` (low no-reference video quality score)
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The information of a checked segment in quality control.
                     * @return QualityControlItems The information of a checked segment in quality control.
                     */
                    std::vector<QualityControlItem> GetQualityControlItems() const;

                    /**
                     * 设置The information of a checked segment in quality control.
                     * @param QualityControlItems The information of a checked segment in quality control.
                     */
                    void SetQualityControlItems(const std::vector<QualityControlItem>& _qualityControlItems);

                    /**
                     * 判断参数 QualityControlItems 是否已赋值
                     * @return QualityControlItems 是否已赋值
                     */
                    bool QualityControlItemsHasBeenSet() const;

                private:

                    /**
                     * The issue type. Valid values:
`Jitter`
`Blur`
`LowLighting`
`HighLighting` (overexposure)
`CrashScreen` (video corruption)
`BlackWhiteEdge`
`SolidColorScreen` (blank screen)
`Noise`
`Mosaic` (pixelation)
`QRCode`
`AppletCode` (Weixin Mini Program code)
`BarCode`
`LowVoice`
`HighVoice`
`NoVoice`
`LowEvaluation` (low no-reference video quality score)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The information of a checked segment in quality control.
                     */
                    std::vector<QualityControlItem> m_qualityControlItems;
                    bool m_qualityControlItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLRESULT_H_
