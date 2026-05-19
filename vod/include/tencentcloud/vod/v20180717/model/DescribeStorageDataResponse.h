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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDATARESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/StorageStatData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeStorageData response structure.
                */
                class DescribeStorageDataResponse : public AbstractModel
                {
                public:
                    DescribeStorageDataResponse();
                    ~DescribeStorageDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total current media volume.
                     * @return MediaCount Total current media volume.
                     * 
                     */
                    uint64_t GetMediaCount() const;

                    /**
                     * 判断参数 MediaCount 是否已赋值
                     * @return MediaCount 是否已赋值
                     * 
                     */
                    bool MediaCountHasBeenSet() const;

                    /**
                     * 获取Current total storage capacity, in bytes.
                     * @return TotalStorage Current total storage capacity, in bytes.
                     * 
                     */
                    uint64_t GetTotalStorage() const;

                    /**
                     * 判断参数 TotalStorage 是否已赋值
                     * @return TotalStorage 是否已赋值
                     * 
                     */
                    bool TotalStorageHasBeenSet() const;

                    /**
                     * 获取Current standard storage capacity, in bytes.
                     * @return StandardStorage Current standard storage capacity, in bytes.
                     * 
                     */
                    uint64_t GetStandardStorage() const;

                    /**
                     * 判断参数 StandardStorage 是否已赋值
                     * @return StandardStorage 是否已赋值
                     * 
                     */
                    bool StandardStorageHasBeenSet() const;

                    /**
                     * 获取Current infrequent access storage capacity in bytes.
                     * @return InfrequentStorage Current infrequent access storage capacity in bytes.
                     * 
                     */
                    uint64_t GetInfrequentStorage() const;

                    /**
                     * 判断参数 InfrequentStorage 是否已赋值
                     * @return InfrequentStorage 是否已赋值
                     * 
                     */
                    bool InfrequentStorageHasBeenSet() const;

                    /**
                     * 获取Current archive storage capacity, in bytes.
                     * @return ArchiveStorage Current archive storage capacity, in bytes.
                     * 
                     */
                    uint64_t GetArchiveStorage() const;

                    /**
                     * 判断参数 ArchiveStorage 是否已赋值
                     * @return ArchiveStorage 是否已赋值
                     * 
                     */
                    bool ArchiveStorageHasBeenSet() const;

                    /**
                     * 获取Current deep archive storage capacity, in bytes.
                     * @return DeepArchiveStorage Current deep archive storage capacity, in bytes.
                     * 
                     */
                    uint64_t GetDeepArchiveStorage() const;

                    /**
                     * 判断参数 DeepArchiveStorage 是否已赋值
                     * @return DeepArchiveStorage 是否已赋值
                     * 
                     */
                    bool DeepArchiveStorageHasBeenSet() const;

                    /**
                     * 获取Storage usage in billing regions.
                     * @return StorageStat Storage usage in billing regions.
                     * 
                     */
                    std::vector<StorageStatData> GetStorageStat() const;

                    /**
                     * 判断参数 StorageStat 是否已赋值
                     * @return StorageStat 是否已赋值
                     * 
                     */
                    bool StorageStatHasBeenSet() const;

                private:

                    /**
                     * Total current media volume.
                     */
                    uint64_t m_mediaCount;
                    bool m_mediaCountHasBeenSet;

                    /**
                     * Current total storage capacity, in bytes.
                     */
                    uint64_t m_totalStorage;
                    bool m_totalStorageHasBeenSet;

                    /**
                     * Current standard storage capacity, in bytes.
                     */
                    uint64_t m_standardStorage;
                    bool m_standardStorageHasBeenSet;

                    /**
                     * Current infrequent access storage capacity in bytes.
                     */
                    uint64_t m_infrequentStorage;
                    bool m_infrequentStorageHasBeenSet;

                    /**
                     * Current archive storage capacity, in bytes.
                     */
                    uint64_t m_archiveStorage;
                    bool m_archiveStorageHasBeenSet;

                    /**
                     * Current deep archive storage capacity, in bytes.
                     */
                    uint64_t m_deepArchiveStorage;
                    bool m_deepArchiveStorageHasBeenSet;

                    /**
                     * Storage usage in billing regions.
                     */
                    std::vector<StorageStatData> m_storageStat;
                    bool m_storageStatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESTORAGEDATARESPONSE_H_
