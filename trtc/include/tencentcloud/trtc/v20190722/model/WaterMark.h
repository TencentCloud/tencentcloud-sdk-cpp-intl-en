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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARK_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/WaterMarkImage.h>
#include <tencentcloud/trtc/v20190722/model/WaterMarkChar.h>
#include <tencentcloud/trtc/v20190722/model/WaterMarkTimestamp.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The watermark layout.
                */
                class WaterMark : public AbstractModel
                {
                public:
                    WaterMark();
                    ~WaterMark() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The watermark type. 0 (default): image; 1: text (not supported yet).
                     * @return WaterMarkType The watermark type. 0 (default): image; 1: text (not supported yet).
                     */
                    uint64_t GetWaterMarkType() const;

                    /**
                     * 设置The watermark type. 0 (default): image; 1: text (not supported yet).
                     * @param WaterMarkType The watermark type. 0 (default): image; 1: text (not supported yet).
                     */
                    void SetWaterMarkType(const uint64_t& _waterMarkType);

                    /**
                     * 判断参数 WaterMarkType 是否已赋值
                     * @return WaterMarkType 是否已赋值
                     */
                    bool WaterMarkTypeHasBeenSet() const;

                    /**
                     * 获取The information of watermark images. This parameter is required if the watermark type is image.
                     * @return WaterMarkImage The information of watermark images. This parameter is required if the watermark type is image.
                     */
                    WaterMarkImage GetWaterMarkImage() const;

                    /**
                     * 设置The information of watermark images. This parameter is required if the watermark type is image.
                     * @param WaterMarkImage The information of watermark images. This parameter is required if the watermark type is image.
                     */
                    void SetWaterMarkImage(const WaterMarkImage& _waterMarkImage);

                    /**
                     * 判断参数 WaterMarkImage 是否已赋值
                     * @return WaterMarkImage 是否已赋值
                     */
                    bool WaterMarkImageHasBeenSet() const;

                    /**
                     * 获取The information of the text watermark. This parameter is required if `WaterMarkType` is `1`.
                     * @return WaterMarkChar The information of the text watermark. This parameter is required if `WaterMarkType` is `1`.
                     */
                    WaterMarkChar GetWaterMarkChar() const;

                    /**
                     * 设置The information of the text watermark. This parameter is required if `WaterMarkType` is `1`.
                     * @param WaterMarkChar The information of the text watermark. This parameter is required if `WaterMarkType` is `1`.
                     */
                    void SetWaterMarkChar(const WaterMarkChar& _waterMarkChar);

                    /**
                     * 判断参数 WaterMarkChar 是否已赋值
                     * @return WaterMarkChar 是否已赋值
                     */
                    bool WaterMarkCharHasBeenSet() const;

                    /**
                     * 获取The information of the timestamp watermark. This parameter is required if `WaterMarkType` is `2`.
                     * @return WaterMarkTimestamp The information of the timestamp watermark. This parameter is required if `WaterMarkType` is `2`.
                     */
                    WaterMarkTimestamp GetWaterMarkTimestamp() const;

                    /**
                     * 设置The information of the timestamp watermark. This parameter is required if `WaterMarkType` is `2`.
                     * @param WaterMarkTimestamp The information of the timestamp watermark. This parameter is required if `WaterMarkType` is `2`.
                     */
                    void SetWaterMarkTimestamp(const WaterMarkTimestamp& _waterMarkTimestamp);

                    /**
                     * 判断参数 WaterMarkTimestamp 是否已赋值
                     * @return WaterMarkTimestamp 是否已赋值
                     */
                    bool WaterMarkTimestampHasBeenSet() const;

                private:

                    /**
                     * The watermark type. 0 (default): image; 1: text (not supported yet).
                     */
                    uint64_t m_waterMarkType;
                    bool m_waterMarkTypeHasBeenSet;

                    /**
                     * The information of watermark images. This parameter is required if the watermark type is image.
                     */
                    WaterMarkImage m_waterMarkImage;
                    bool m_waterMarkImageHasBeenSet;

                    /**
                     * The information of the text watermark. This parameter is required if `WaterMarkType` is `1`.
                     */
                    WaterMarkChar m_waterMarkChar;
                    bool m_waterMarkCharHasBeenSet;

                    /**
                     * The information of the timestamp watermark. This parameter is required if `WaterMarkType` is `2`.
                     */
                    WaterMarkTimestamp m_waterMarkTimestamp;
                    bool m_waterMarkTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARK_H_
