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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASNAPSHOTBYTIMEOFFSETINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASNAPSHOTBYTIMEOFFSETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaSnapshotByTimeOffsetItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Screenshot information of a VOD file at the specified time point
                */
                class MediaSnapshotByTimeOffsetInfo : public AbstractModel
                {
                public:
                    MediaSnapshotByTimeOffsetInfo();
                    ~MediaSnapshotByTimeOffsetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Collection of screenshot information at the specified time point for a specific specification. Currently, each specification can have only one set of screenshots.
                     * @return SnapshotByTimeOffsetSet Collection of screenshot information at the specified time point for a specific specification. Currently, each specification can have only one set of screenshots.
                     * 
                     */
                    std::vector<MediaSnapshotByTimeOffsetItem> GetSnapshotByTimeOffsetSet() const;

                    /**
                     * 设置Collection of screenshot information at the specified time point for a specific specification. Currently, each specification can have only one set of screenshots.
                     * @param _snapshotByTimeOffsetSet Collection of screenshot information at the specified time point for a specific specification. Currently, each specification can have only one set of screenshots.
                     * 
                     */
                    void SetSnapshotByTimeOffsetSet(const std::vector<MediaSnapshotByTimeOffsetItem>& _snapshotByTimeOffsetSet);

                    /**
                     * 判断参数 SnapshotByTimeOffsetSet 是否已赋值
                     * @return SnapshotByTimeOffsetSet 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetSetHasBeenSet() const;

                private:

                    /**
                     * Collection of screenshot information at the specified time point for a specific specification. Currently, each specification can have only one set of screenshots.
                     */
                    std::vector<MediaSnapshotByTimeOffsetItem> m_snapshotByTimeOffsetSet;
                    bool m_snapshotByTimeOffsetSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASNAPSHOTBYTIMEOFFSETINFO_H_
