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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTSTATISTICS_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * File system snapshot statistics
                */
                class SnapshotStatistics : public AbstractModel
                {
                public:
                    SnapshotStatistics();
                    ~SnapshotStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region
                     * @return Region Region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region
                     * @param _region Region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Total number of snapshots
                     * @return SnapshotNumber Total number of snapshots
                     * 
                     */
                    uint64_t GetSnapshotNumber() const;

                    /**
                     * 设置Total number of snapshots
                     * @param _snapshotNumber Total number of snapshots
                     * 
                     */
                    void SetSnapshotNumber(const uint64_t& _snapshotNumber);

                    /**
                     * 判断参数 SnapshotNumber 是否已赋值
                     * @return SnapshotNumber 是否已赋值
                     * 
                     */
                    bool SnapshotNumberHasBeenSet() const;

                    /**
                     * 获取Total snapshot size
                     * @return SnapshotSize Total snapshot size
                     * 
                     */
                    uint64_t GetSnapshotSize() const;

                    /**
                     * 设置Total snapshot size
                     * @param _snapshotSize Total snapshot size
                     * 
                     */
                    void SetSnapshotSize(const uint64_t& _snapshotSize);

                    /**
                     * 判断参数 SnapshotSize 是否已赋值
                     * @return SnapshotSize 是否已赋值
                     * 
                     */
                    bool SnapshotSizeHasBeenSet() const;

                private:

                    /**
                     * Region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Total number of snapshots
                     */
                    uint64_t m_snapshotNumber;
                    bool m_snapshotNumberHasBeenSet;

                    /**
                     * Total snapshot size
                     */
                    uint64_t m_snapshotSize;
                    bool m_snapshotSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_SNAPSHOTSTATISTICS_H_
