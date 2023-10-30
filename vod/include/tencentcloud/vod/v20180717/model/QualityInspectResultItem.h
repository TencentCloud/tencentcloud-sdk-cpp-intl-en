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
                     * 获取Abnormal type, range: <li>Jitter: Jitter;</li> <li>Blur: Blur;</li> <li>LowLighting: Low lighting;</li> <li>HighLighting: Overexposure;</li> <li>CrashScreen: Crash screen;</li> <li>BlackWhiteEdge: Black and white edges;</li> <li>SolidColorScreen: Solid color screen;</li> <li>Noise: Noise;</li> <li>Mosaic: Mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Applet code;</li> <li>BarCode: Bar code;</li> <li>LowVoice: Low voice;</li> <li>HighVoice: High voice;</li> <li>NoVoice: mutes;</li> <li>LowEvaluation: No reference scoring below the threshold.</li>
                     * @return Type Abnormal type, range: <li>Jitter: Jitter;</li> <li>Blur: Blur;</li> <li>LowLighting: Low lighting;</li> <li>HighLighting: Overexposure;</li> <li>CrashScreen: Crash screen;</li> <li>BlackWhiteEdge: Black and white edges;</li> <li>SolidColorScreen: Solid color screen;</li> <li>Noise: Noise;</li> <li>Mosaic: Mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Applet code;</li> <li>BarCode: Bar code;</li> <li>LowVoice: Low voice;</li> <li>HighVoice: High voice;</li> <li>NoVoice: mutes;</li> <li>LowEvaluation: No reference scoring below the threshold.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Abnormal type, range: <li>Jitter: Jitter;</li> <li>Blur: Blur;</li> <li>LowLighting: Low lighting;</li> <li>HighLighting: Overexposure;</li> <li>CrashScreen: Crash screen;</li> <li>BlackWhiteEdge: Black and white edges;</li> <li>SolidColorScreen: Solid color screen;</li> <li>Noise: Noise;</li> <li>Mosaic: Mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Applet code;</li> <li>BarCode: Bar code;</li> <li>LowVoice: Low voice;</li> <li>HighVoice: High voice;</li> <li>NoVoice: mutes;</li> <li>LowEvaluation: No reference scoring below the threshold.</li>
                     * @param _type Abnormal type, range: <li>Jitter: Jitter;</li> <li>Blur: Blur;</li> <li>LowLighting: Low lighting;</li> <li>HighLighting: Overexposure;</li> <li>CrashScreen: Crash screen;</li> <li>BlackWhiteEdge: Black and white edges;</li> <li>SolidColorScreen: Solid color screen;</li> <li>Noise: Noise;</li> <li>Mosaic: Mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Applet code;</li> <li>BarCode: Bar code;</li> <li>LowVoice: Low voice;</li> <li>HighVoice: High voice;</li> <li>NoVoice: mutes;</li> <li>LowEvaluation: No reference scoring below the threshold.</li>
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
                     * 获取Abnormal segment List. <font color=red>Pay attention to:</font> This list will only show the first 100 elements at most. If you wish to get the complete result, please get it from the file corresponding to SegmentSetFileUrl.
                     * @return SegmentSet Abnormal segment List. <font color=red>Pay attention to:</font> This list will only show the first 100 elements at most. If you wish to get the complete result, please get it from the file corresponding to SegmentSetFileUrl.
                     * 
                     */
                    std::vector<QualityInspectItem> GetSegmentSet() const;

                    /**
                     * 设置Abnormal segment List. <font color=red>Pay attention to:</font> This list will only show the first 100 elements at most. If you wish to get the complete result, please get it from the file corresponding to SegmentSetFileUrl.
                     * @param _segmentSet Abnormal segment List. <font color=red>Pay attention to:</font> This list will only show the first 100 elements at most. If you wish to get the complete result, please get it from the file corresponding to SegmentSetFileUrl.
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
                     * 获取Abnormal segment List file URL. The file content is JSON, and the data structure is consistent with the SegmentSet Field. (The file will not be permanently stored, and will be deleted after reaching the SegmentSetFileUrlExpireTime Time point).
                     * @return SegmentSetFileUrl Abnormal segment List file URL. The file content is JSON, and the data structure is consistent with the SegmentSet Field. (The file will not be permanently stored, and will be deleted after reaching the SegmentSetFileUrlExpireTime Time point).
                     * 
                     */
                    std::string GetSegmentSetFileUrl() const;

                    /**
                     * 设置Abnormal segment List file URL. The file content is JSON, and the data structure is consistent with the SegmentSet Field. (The file will not be permanently stored, and will be deleted after reaching the SegmentSetFileUrlExpireTime Time point).
                     * @param _segmentSetFileUrl Abnormal segment List file URL. The file content is JSON, and the data structure is consistent with the SegmentSet Field. (The file will not be permanently stored, and will be deleted after reaching the SegmentSetFileUrlExpireTime Time point).
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
                     * 获取Abnormal segment List file URL expiration time, using [ISO date supported](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return SegmentSetFileUrlExpireTime Abnormal segment List file URL expiration time, using [ISO date supported](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetSegmentSetFileUrlExpireTime() const;

                    /**
                     * 设置Abnormal segment List file URL expiration time, using [ISO date supported](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _segmentSetFileUrlExpireTime Abnormal segment List file URL expiration time, using [ISO date supported](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * Abnormal type, range: <li>Jitter: Jitter;</li> <li>Blur: Blur;</li> <li>LowLighting: Low lighting;</li> <li>HighLighting: Overexposure;</li> <li>CrashScreen: Crash screen;</li> <li>BlackWhiteEdge: Black and white edges;</li> <li>SolidColorScreen: Solid color screen;</li> <li>Noise: Noise;</li> <li>Mosaic: Mosaic;</li> <li>QRCode: QR code;</li> <li>AppletCode: Applet code;</li> <li>BarCode: Bar code;</li> <li>LowVoice: Low voice;</li> <li>HighVoice: High voice;</li> <li>NoVoice: mutes;</li> <li>LowEvaluation: No reference scoring below the threshold.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Abnormal segment List. <font color=red>Pay attention to:</font> This list will only show the first 100 elements at most. If you wish to get the complete result, please get it from the file corresponding to SegmentSetFileUrl.
                     */
                    std::vector<QualityInspectItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * Abnormal segment List file URL. The file content is JSON, and the data structure is consistent with the SegmentSet Field. (The file will not be permanently stored, and will be deleted after reaching the SegmentSetFileUrlExpireTime Time point).
                     */
                    std::string m_segmentSetFileUrl;
                    bool m_segmentSetFileUrlHasBeenSet;

                    /**
                     * Abnormal segment List file URL expiration time, using [ISO date supported](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_segmentSetFileUrlExpireTime;
                    bool m_segmentSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTRESULTITEM_H_
