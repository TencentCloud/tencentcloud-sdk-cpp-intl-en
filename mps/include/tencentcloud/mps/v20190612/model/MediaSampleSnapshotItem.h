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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASAMPLESNAPSHOTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASAMPLESNAPSHOTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Information of a sampled screenshot
                */
                class MediaSampleSnapshotItem : public AbstractModel
                {
                public:
                    MediaSampleSnapshotItem();
                    ~MediaSampleSnapshotItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sampled screenshot specification ID. For more information, please see [Sampled Screencapturing Parameter Template](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * @return Definition Sampled screenshot specification ID. For more information, please see [Sampled Screencapturing Parameter Template](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Sampled screenshot specification ID. For more information, please see [Sampled Screencapturing Parameter Template](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     * @param Definition Sampled screenshot specification ID. For more information, please see [Sampled Screencapturing Parameter Template](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Sample type. Valid values:
<li>Percent: Samples at the specified percentage interval.</li>
<li>Time: Samples at the specified time interval.</li>
                     * @return SampleType Sample type. Valid values:
<li>Percent: Samples at the specified percentage interval.</li>
<li>Time: Samples at the specified time interval.</li>
                     */
                    std::string GetSampleType() const;

                    /**
                     * 设置Sample type. Valid values:
<li>Percent: Samples at the specified percentage interval.</li>
<li>Time: Samples at the specified time interval.</li>
                     * @param SampleType Sample type. Valid values:
<li>Percent: Samples at the specified percentage interval.</li>
<li>Time: Samples at the specified time interval.</li>
                     */
                    void SetSampleType(const std::string& _sampleType);

                    /**
                     * 判断参数 SampleType 是否已赋值
                     * @return SampleType 是否已赋值
                     */
                    bool SampleTypeHasBeenSet() const;

                    /**
                     * 获取Sampling interval
<li>If `SampleType` is `Percent`, this value means taking a screenshot at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, this value means taking a screenshot at an interval of the specified time (in seconds). The first screenshot is always the first video frame.</li>
                     * @return Interval Sampling interval
<li>If `SampleType` is `Percent`, this value means taking a screenshot at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, this value means taking a screenshot at an interval of the specified time (in seconds). The first screenshot is always the first video frame.</li>
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置Sampling interval
<li>If `SampleType` is `Percent`, this value means taking a screenshot at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, this value means taking a screenshot at an interval of the specified time (in seconds). The first screenshot is always the first video frame.</li>
                     * @param Interval Sampling interval
<li>If `SampleType` is `Percent`, this value means taking a screenshot at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, this value means taking a screenshot at an interval of the specified time (in seconds). The first screenshot is always the first video frame.</li>
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Storage location of a generated screenshot file.
                     * @return Storage Storage location of a generated screenshot file.
                     */
                    TaskOutputStorage GetStorage() const;

                    /**
                     * 设置Storage location of a generated screenshot file.
                     * @param Storage Storage location of a generated screenshot file.
                     */
                    void SetStorage(const TaskOutputStorage& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取List of paths to generated screenshots.
                     * @return ImagePathSet List of paths to generated screenshots.
                     */
                    std::vector<std::string> GetImagePathSet() const;

                    /**
                     * 设置List of paths to generated screenshots.
                     * @param ImagePathSet List of paths to generated screenshots.
                     */
                    void SetImagePathSet(const std::vector<std::string>& _imagePathSet);

                    /**
                     * 判断参数 ImagePathSet 是否已赋值
                     * @return ImagePathSet 是否已赋值
                     */
                    bool ImagePathSetHasBeenSet() const;

                    /**
                     * 获取List of watermarking template IDs if the screenshots are watermarked.
                     * @return WaterMarkDefinition List of watermarking template IDs if the screenshots are watermarked.
                     */
                    std::vector<int64_t> GetWaterMarkDefinition() const;

                    /**
                     * 设置List of watermarking template IDs if the screenshots are watermarked.
                     * @param WaterMarkDefinition List of watermarking template IDs if the screenshots are watermarked.
                     */
                    void SetWaterMarkDefinition(const std::vector<int64_t>& _waterMarkDefinition);

                    /**
                     * 判断参数 WaterMarkDefinition 是否已赋值
                     * @return WaterMarkDefinition 是否已赋值
                     */
                    bool WaterMarkDefinitionHasBeenSet() const;

                private:

                    /**
                     * Sampled screenshot specification ID. For more information, please see [Sampled Screencapturing Parameter Template](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Sample type. Valid values:
<li>Percent: Samples at the specified percentage interval.</li>
<li>Time: Samples at the specified time interval.</li>
                     */
                    std::string m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * Sampling interval
<li>If `SampleType` is `Percent`, this value means taking a screenshot at an interval of the specified percentage.</li>
<li>If `SampleType` is `Time`, this value means taking a screenshot at an interval of the specified time (in seconds). The first screenshot is always the first video frame.</li>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Storage location of a generated screenshot file.
                     */
                    TaskOutputStorage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * List of paths to generated screenshots.
                     */
                    std::vector<std::string> m_imagePathSet;
                    bool m_imagePathSetHasBeenSet;

                    /**
                     * List of watermarking template IDs if the screenshots are watermarked.
                     */
                    std::vector<int64_t> m_waterMarkDefinition;
                    bool m_waterMarkDefinitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASAMPLESNAPSHOTITEM_H_
