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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/McuWaterMarkImage.h>
#include <tencentcloud/trtc/v20190722/model/McuWaterMarkText.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The Watermark information.
                */
                class McuWaterMarkParams : public AbstractModel
                {
                public:
                    McuWaterMarkParams();
                    ~McuWaterMarkParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The watermark type. Valid values: `0` (default): Image; `1`: Text.
                     * @return WaterMarkType The watermark type. Valid values: `0` (default): Image; `1`: Text.
                     */
                    uint64_t GetWaterMarkType() const;

                    /**
                     * 设置The watermark type. Valid values: `0` (default): Image; `1`: Text.
                     * @param WaterMarkType The watermark type. Valid values: `0` (default): Image; `1`: Text.
                     */
                    void SetWaterMarkType(const uint64_t& _waterMarkType);

                    /**
                     * 判断参数 WaterMarkType 是否已赋值
                     * @return WaterMarkType 是否已赋值
                     */
                    bool WaterMarkTypeHasBeenSet() const;

                    /**
                     * 获取The watermark image information. This parameter is required if `WaterMarkType` is 0.
                     * @return WaterMarkImage The watermark image information. This parameter is required if `WaterMarkType` is 0.
                     */
                    McuWaterMarkImage GetWaterMarkImage() const;

                    /**
                     * 设置The watermark image information. This parameter is required if `WaterMarkType` is 0.
                     * @param WaterMarkImage The watermark image information. This parameter is required if `WaterMarkType` is 0.
                     */
                    void SetWaterMarkImage(const McuWaterMarkImage& _waterMarkImage);

                    /**
                     * 判断参数 WaterMarkImage 是否已赋值
                     * @return WaterMarkImage 是否已赋值
                     */
                    bool WaterMarkImageHasBeenSet() const;

                    /**
                     * 获取The text watermark configuration. This parameter is required if `WaterMarkType` is `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WaterMarkText The text watermark configuration. This parameter is required if `WaterMarkType` is `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    McuWaterMarkText GetWaterMarkText() const;

                    /**
                     * 设置The text watermark configuration. This parameter is required if `WaterMarkType` is `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param WaterMarkText The text watermark configuration. This parameter is required if `WaterMarkType` is `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetWaterMarkText(const McuWaterMarkText& _waterMarkText);

                    /**
                     * 判断参数 WaterMarkText 是否已赋值
                     * @return WaterMarkText 是否已赋值
                     */
                    bool WaterMarkTextHasBeenSet() const;

                private:

                    /**
                     * The watermark type. Valid values: `0` (default): Image; `1`: Text.
                     */
                    uint64_t m_waterMarkType;
                    bool m_waterMarkTypeHasBeenSet;

                    /**
                     * The watermark image information. This parameter is required if `WaterMarkType` is 0.
                     */
                    McuWaterMarkImage m_waterMarkImage;
                    bool m_waterMarkImageHasBeenSet;

                    /**
                     * The text watermark configuration. This parameter is required if `WaterMarkType` is `1`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    McuWaterMarkText m_waterMarkText;
                    bool m_waterMarkTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKPARAMS_H_
