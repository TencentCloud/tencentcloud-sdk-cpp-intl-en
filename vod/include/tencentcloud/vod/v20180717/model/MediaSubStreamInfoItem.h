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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBSTREAMINFOITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBSTREAMINFOITEM_H_

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
                * The stream information of adaptive bitrate streaming.
                */
                class MediaSubStreamInfoItem : public AbstractModel
                {
                public:
                    MediaSubStreamInfoItem();
                    ~MediaSubStreamInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The stream type. Valid values:
<li>`audio`: Audio only</li>
<li>`video`: Video (may include audio)</li>
                     * @return Type The stream type. Valid values:
<li>`audio`: Audio only</li>
<li>`video`: Video (may include audio)</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置The stream type. Valid values:
<li>`audio`: Audio only</li>
<li>`video`: Video (may include audio)</li>
                     * @param Type The stream type. Valid values:
<li>`audio`: Audio only</li>
<li>`video`: Video (may include audio)</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The video width (px) if `Type` is `video`.
                     * @return Width The video width (px) if `Type` is `video`.
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置The video width (px) if `Type` is `video`.
                     * @param Width The video width (px) if `Type` is `video`.
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取The video height (px) if `Type` is `video`.
                     * @return Height The video height (px) if `Type` is `video`.
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置The video height (px) if `Type` is `video`.
                     * @param Height The video height (px) if `Type` is `video`.
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取The file size (bytes).
<font color=red>Note:</font>For adaptive bitrate streaming files generated before 2023-02-09T16:00:00Z, the value of this parameter is `0`.
                     * @return Size The file size (bytes).
<font color=red>Note:</font>For adaptive bitrate streaming files generated before 2023-02-09T16:00:00Z, the value of this parameter is `0`.
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置The file size (bytes).
<font color=red>Note:</font>For adaptive bitrate streaming files generated before 2023-02-09T16:00:00Z, the value of this parameter is `0`.
                     * @param Size The file size (bytes).
<font color=red>Note:</font>For adaptive bitrate streaming files generated before 2023-02-09T16:00:00Z, the value of this parameter is `0`.
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * The stream type. Valid values:
<li>`audio`: Audio only</li>
<li>`video`: Video (may include audio)</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The video width (px) if `Type` is `video`.
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The video height (px) if `Type` is `video`.
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * The file size (bytes).
<font color=red>Note:</font>For adaptive bitrate streaming files generated before 2023-02-09T16:00:00Z, the value of this parameter is `0`.
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBSTREAMINFOITEM_H_
