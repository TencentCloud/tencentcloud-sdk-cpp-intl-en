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
                     * 获取<p>Sampled screenshot specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF">sampling screenshot parameter template</a>.</p>
                     * @return Definition <p>Sampled screenshot specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF">sampling screenshot parameter template</a>.</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>Sampled screenshot specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF">sampling screenshot parameter template</a>.</p>
                     * @param _definition <p>Sampled screenshot specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF">sampling screenshot parameter template</a>.</p>
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
                     * 获取<p>Sampling method, valid value:</p><li>Percent: Sampling based on percentage interval.</li><li>Time: Sampling based on time interval.</li>
                     * @return SampleType <p>Sampling method, valid value:</p><li>Percent: Sampling based on percentage interval.</li><li>Time: Sampling based on time interval.</li>
                     * 
                     */
                    std::string GetSampleType() const;

                    /**
                     * 设置<p>Sampling method, valid value:</p><li>Percent: Sampling based on percentage interval.</li><li>Time: Sampling based on time interval.</li>
                     * @param _sampleType <p>Sampling method, valid value:</p><li>Percent: Sampling based on percentage interval.</li><li>Time: Sampling based on time interval.</li>
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
                     * 获取<p>Sampling interval</p><li>When SampleType is Percent, this value indicates the percentage of images.</li><li>When SampleType is Time, this value indicates the time interval for each image, in seconds. The first image is always the first video frame.</li>
                     * @return Interval <p>Sampling interval</p><li>When SampleType is Percent, this value indicates the percentage of images.</li><li>When SampleType is Time, this value indicates the time interval for each image, in seconds. The first image is always the first video frame.</li>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置<p>Sampling interval</p><li>When SampleType is Percent, this value indicates the percentage of images.</li><li>When SampleType is Time, this value indicates the time interval for each image, in seconds. The first image is always the first video frame.</li>
                     * @param _interval <p>Sampling interval</p><li>When SampleType is Percent, this value indicates the percentage of images.</li><li>When SampleType is Time, this value indicates the time interval for each image, in seconds. The first image is always the first video frame.</li>
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
                     * 获取<p>Storage location of a file after screenshot.</p>
                     * @return Storage <p>Storage location of a file after screenshot.</p>
                     * 
                     */
                    TaskOutputStorage GetStorage() const;

                    /**
                     * 设置<p>Storage location of a file after screenshot.</p>
                     * @param _storage <p>Storage location of a file after screenshot.</p>
                     * 
                     */
                    void SetStorage(const TaskOutputStorage& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取<p>List of generated screenshot paths.</p>
                     * @return ImagePathSet <p>List of generated screenshot paths.</p>
                     * 
                     */
                    std::vector<std::string> GetImagePathSet() const;

                    /**
                     * 设置<p>List of generated screenshot paths.</p>
                     * @param _imagePathSet <p>List of generated screenshot paths.</p>
                     * 
                     */
                    void SetImagePathSet(const std::vector<std::string>& _imagePathSet);

                    /**
                     * 判断参数 ImagePathSet 是否已赋值
                     * @return ImagePathSet 是否已赋值
                     * 
                     */
                    bool ImagePathSetHasBeenSet() const;

                    /**
                     * 获取<p>List of template IDs of watermarked screenshots.</p>
                     * @return WaterMarkDefinition <p>List of template IDs of watermarked screenshots.</p>
                     * 
                     */
                    std::vector<int64_t> GetWaterMarkDefinition() const;

                    /**
                     * 设置<p>List of template IDs of watermarked screenshots.</p>
                     * @param _waterMarkDefinition <p>List of template IDs of watermarked screenshots.</p>
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
                     * <p>Sampled screenshot specification ID. Please refer to <a href="https://www.tencentcloud.com/document/product/266/33480?from_cn_redirect=1#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF">sampling screenshot parameter template</a>.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Sampling method, valid value:</p><li>Percent: Sampling based on percentage interval.</li><li>Time: Sampling based on time interval.</li>
                     */
                    std::string m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * <p>Sampling interval</p><li>When SampleType is Percent, this value indicates the percentage of images.</li><li>When SampleType is Time, this value indicates the time interval for each image, in seconds. The first image is always the first video frame.</li>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>Storage location of a file after screenshot.</p>
                     */
                    TaskOutputStorage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>List of generated screenshot paths.</p>
                     */
                    std::vector<std::string> m_imagePathSet;
                    bool m_imagePathSetHasBeenSet;

                    /**
                     * <p>List of template IDs of watermarked screenshots.</p>
                     */
                    std::vector<int64_t> m_waterMarkDefinition;
                    bool m_waterMarkDefinitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASAMPLESNAPSHOTITEM_H_
