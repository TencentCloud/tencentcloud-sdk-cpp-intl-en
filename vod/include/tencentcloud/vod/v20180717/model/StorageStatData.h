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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_STORAGESTATDATA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_STORAGESTATDATA_H_

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
                * 
                */
                class StorageStatData : public AbstractModel
                {
                public:
                    StorageStatData();
                    ~StorageStatData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Area 
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置
                     * @param _area 
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取
                     * @return TotalStorage 
                     * 
                     */
                    uint64_t GetTotalStorage() const;

                    /**
                     * 设置
                     * @param _totalStorage 
                     * 
                     */
                    void SetTotalStorage(const uint64_t& _totalStorage);

                    /**
                     * 判断参数 TotalStorage 是否已赋值
                     * @return TotalStorage 是否已赋值
                     * 
                     */
                    bool TotalStorageHasBeenSet() const;

                    /**
                     * 获取
                     * @return InfrequentStorage 
                     * 
                     */
                    uint64_t GetInfrequentStorage() const;

                    /**
                     * 设置
                     * @param _infrequentStorage 
                     * 
                     */
                    void SetInfrequentStorage(const uint64_t& _infrequentStorage);

                    /**
                     * 判断参数 InfrequentStorage 是否已赋值
                     * @return InfrequentStorage 是否已赋值
                     * 
                     */
                    bool InfrequentStorageHasBeenSet() const;

                    /**
                     * 获取
                     * @return StandardStorage 
                     * 
                     */
                    uint64_t GetStandardStorage() const;

                    /**
                     * 设置
                     * @param _standardStorage 
                     * 
                     */
                    void SetStandardStorage(const uint64_t& _standardStorage);

                    /**
                     * 判断参数 StandardStorage 是否已赋值
                     * @return StandardStorage 是否已赋值
                     * 
                     */
                    bool StandardStorageHasBeenSet() const;

                    /**
                     * 获取
                     * @return ArchiveStorage 
                     * 
                     */
                    uint64_t GetArchiveStorage() const;

                    /**
                     * 设置
                     * @param _archiveStorage 
                     * 
                     */
                    void SetArchiveStorage(const uint64_t& _archiveStorage);

                    /**
                     * 判断参数 ArchiveStorage 是否已赋值
                     * @return ArchiveStorage 是否已赋值
                     * 
                     */
                    bool ArchiveStorageHasBeenSet() const;

                    /**
                     * 获取
                     * @return DeepArchiveStorage 
                     * 
                     */
                    uint64_t GetDeepArchiveStorage() const;

                    /**
                     * 设置
                     * @param _deepArchiveStorage 
                     * 
                     */
                    void SetDeepArchiveStorage(const uint64_t& _deepArchiveStorage);

                    /**
                     * 判断参数 DeepArchiveStorage 是否已赋值
                     * @return DeepArchiveStorage 是否已赋值
                     * 
                     */
                    bool DeepArchiveStorageHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_totalStorage;
                    bool m_totalStorageHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_infrequentStorage;
                    bool m_infrequentStorageHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_standardStorage;
                    bool m_standardStorageHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_archiveStorage;
                    bool m_archiveStorageHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_deepArchiveStorage;
                    bool m_deepArchiveStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_STORAGESTATDATA_H_
