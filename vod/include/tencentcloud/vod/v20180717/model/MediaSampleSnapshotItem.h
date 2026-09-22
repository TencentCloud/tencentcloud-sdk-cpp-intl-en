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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASAMPLESNAPSHOTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASAMPLESNAPSHOTITEM_H_

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
                * Sampling screenshot information
                */
                class MediaSampleSnapshotItem : public AbstractModel
                {
                public:
                    MediaSampleSnapshotItem();
                    ~MediaSampleSnapshotItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sampling screenshot specification ID. See [Sampling Screenshot Parameter Template](https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * @return Definition Sampling screenshot specification ID. See [Sampling Screenshot Parameter Template](https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Sampling screenshot specification ID. See [Sampling Screenshot Parameter Template](https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * @param _definition Sampling screenshot specification ID. See [Sampling Screenshot Parameter Template](https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
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
                     * 获取Sampling method. Valid value:
<li>Percent: interval sampling based on percentage.</li>
<li>Time: sampling based on time interval.</li>
                     * @return SampleType Sampling method. Valid value:
<li>Percent: interval sampling based on percentage.</li>
<li>Time: sampling based on time interval.</li>
                     * 
                     */
                    std::string GetSampleType() const;

                    /**
                     * 设置Sampling method. Valid value:
<li>Percent: interval sampling based on percentage.</li>
<li>Time: sampling based on time interval.</li>
                     * @param _sampleType Sampling method. Valid value:
<li>Percent: interval sampling based on percentage.</li>
<li>Time: sampling based on time interval.</li>
                     * 
                     */
                    void SetSampleType(const std::string& _sampleType);

                    /**
                     * 判断参数 SampleType 是否已赋值
                     * @return SampleType 是否已赋值
                     * 
                     */
                    bool SampleTypeHasBeenSet() const;

                    /**
                     * 获取Sampling interval
<li>When SampleType is Percent, this value indicates the percentage of images.</li>
<li>When SampleType is Time, this value indicates how many time intervals between images, in seconds. The first image is always the first video frame.</li>
                     * @return Interval Sampling interval
<li>When SampleType is Percent, this value indicates the percentage of images.</li>
<li>When SampleType is Time, this value indicates how many time intervals between images, in seconds. The first image is always the first video frame.</li>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置Sampling interval
<li>When SampleType is Percent, this value indicates the percentage of images.</li>
<li>When SampleType is Time, this value indicates how many time intervals between images, in seconds. The first image is always the first video frame.</li>
                     * @param _interval Sampling interval
<li>When SampleType is Percent, this value indicates the percentage of images.</li>
<li>When SampleType is Time, this value indicates how many time intervals between images, in seconds. The first image is always the first video frame.</li>
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取List of generated screenshot URLs.
                     * @return ImageUrlSet List of generated screenshot URLs.
                     * 
                     */
                    std::vector<std::string> GetImageUrlSet() const;

                    /**
                     * 设置List of generated screenshot URLs.
                     * @param _imageUrlSet List of generated screenshot URLs.
                     * 
                     */
                    void SetImageUrlSet(const std::vector<std::string>& _imageUrlSet);

                    /**
                     * 判断参数 ImageUrlSet 是否已赋值
                     * @return ImageUrlSet 是否已赋值
                     * 
                     */
                    bool ImageUrlSetHasBeenSet() const;

                    /**
                     * 获取List of template IDs if the screenshot is watermarked.
                     * @return WaterMarkDefinition List of template IDs if the screenshot is watermarked.
                     * 
                     */
                    std::vector<int64_t> GetWaterMarkDefinition() const;

                    /**
                     * 设置List of template IDs if the screenshot is watermarked.
                     * @param _waterMarkDefinition List of template IDs if the screenshot is watermarked.
                     * 
                     */
                    void SetWaterMarkDefinition(const std::vector<int64_t>& _waterMarkDefinition);

                    /**
                     * 判断参数 WaterMarkDefinition 是否已赋值
                     * @return WaterMarkDefinition 是否已赋值
                     * 
                     */
                    bool WaterMarkDefinitionHasBeenSet() const;

                private:

                    /**
                     * Sampling screenshot specification ID. See [Sampling Screenshot Parameter Template](https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Sampling method. Valid value:
<li>Percent: interval sampling based on percentage.</li>
<li>Time: sampling based on time interval.</li>
                     */
                    std::string m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * Sampling interval
<li>When SampleType is Percent, this value indicates the percentage of images.</li>
<li>When SampleType is Time, this value indicates how many time intervals between images, in seconds. The first image is always the first video frame.</li>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * List of generated screenshot URLs.
                     */
                    std::vector<std::string> m_imageUrlSet;
                    bool m_imageUrlSetHasBeenSet;

                    /**
                     * List of template IDs if the screenshot is watermarked.
                     */
                    std::vector<int64_t> m_waterMarkDefinition;
                    bool m_waterMarkDefinitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASAMPLESNAPSHOTITEM_H_
