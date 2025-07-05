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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVEWATERMARKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVEWATERMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DeleteLiveWatermark request structure.
                */
                class DeleteLiveWatermarkRequest : public AbstractModel
                {
                public:
                    DeleteLiveWatermarkRequest();
                    ~DeleteLiveWatermarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Watermark ID.
Watermark ID obtained in the returned value of the [AddLiveWatermark](https://intl.cloud.tencent.com/document/product/267/30154?from_cn_redirect=1) API call.
Watermark ID returned by the `DescribeLiveWatermarks` API.
                     * @return WatermarkId Watermark ID.
Watermark ID obtained in the returned value of the [AddLiveWatermark](https://intl.cloud.tencent.com/document/product/267/30154?from_cn_redirect=1) API call.
Watermark ID returned by the `DescribeLiveWatermarks` API.
                     * 
                     */
                    int64_t GetWatermarkId() const;

                    /**
                     * 设置Watermark ID.
Watermark ID obtained in the returned value of the [AddLiveWatermark](https://intl.cloud.tencent.com/document/product/267/30154?from_cn_redirect=1) API call.
Watermark ID returned by the `DescribeLiveWatermarks` API.
                     * @param _watermarkId Watermark ID.
Watermark ID obtained in the returned value of the [AddLiveWatermark](https://intl.cloud.tencent.com/document/product/267/30154?from_cn_redirect=1) API call.
Watermark ID returned by the `DescribeLiveWatermarks` API.
                     * 
                     */
                    void SetWatermarkId(const int64_t& _watermarkId);

                    /**
                     * 判断参数 WatermarkId 是否已赋值
                     * @return WatermarkId 是否已赋值
                     * 
                     */
                    bool WatermarkIdHasBeenSet() const;

                private:

                    /**
                     * Watermark ID.
Watermark ID obtained in the returned value of the [AddLiveWatermark](https://intl.cloud.tencent.com/document/product/267/30154?from_cn_redirect=1) API call.
Watermark ID returned by the `DescribeLiveWatermarks` API.
                     */
                    int64_t m_watermarkId;
                    bool m_watermarkIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETELIVEWATERMARKREQUEST_H_
