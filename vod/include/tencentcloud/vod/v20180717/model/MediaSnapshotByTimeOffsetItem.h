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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASNAPSHOTBYTIMEOFFSETITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASNAPSHOTBYTIMEOFFSETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaSnapshotByTimePicInfoItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Information of time point screenshot in VOD file
                */
                class MediaSnapshotByTimeOffsetItem : public AbstractModel
                {
                public:
                    MediaSnapshotByTimeOffsetItem();
                    ~MediaSnapshotByTimeOffsetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specification of a time point screenshot. For more information, please see [Parameter Template for Time Point Screencapturing](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Definition Specification of a time point screenshot. For more information, please see [Parameter Template for Time Point Screencapturing](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Specification of a time point screenshot. For more information, please see [Parameter Template for Time Point Screencapturing](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _definition Specification of a time point screenshot. For more information, please see [Parameter Template for Time Point Screencapturing](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Information set of screenshots of the same specification. Each element represents a screenshot.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PicInfoSet Information set of screenshots of the same specification. Each element represents a screenshot.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<MediaSnapshotByTimePicInfoItem> GetPicInfoSet() const;

                    /**
                     * 设置Information set of screenshots of the same specification. Each element represents a screenshot.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _picInfoSet Information set of screenshots of the same specification. Each element represents a screenshot.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPicInfoSet(const std::vector<MediaSnapshotByTimePicInfoItem>& _picInfoSet);

                    /**
                     * 判断参数 PicInfoSet 是否已赋值
                     * @return PicInfoSet 是否已赋值
                     * 
                     */
                    bool PicInfoSetHasBeenSet() const;

                private:

                    /**
                     * Specification of a time point screenshot. For more information, please see [Parameter Template for Time Point Screencapturing](https://intl.cloud.tencent.com/document/product/266/33480?from_cn_redirect=1#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Information set of screenshots of the same specification. Each element represents a screenshot.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaSnapshotByTimePicInfoItem> m_picInfoSet;
                    bool m_picInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASNAPSHOTBYTIMEOFFSETITEM_H_
