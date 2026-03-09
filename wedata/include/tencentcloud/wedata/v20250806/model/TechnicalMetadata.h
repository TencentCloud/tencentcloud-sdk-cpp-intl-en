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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TECHNICALMETADATA_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TECHNICALMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * TechnicalMetadata
                */
                class TechnicalMetadata : public AbstractModel
                {
                public:
                    TechnicalMetadata();
                    ~TechnicalMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Responsible person.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Owner Responsible person.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置Responsible person.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _owner Responsible person.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取Data table location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Location Data table location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Data table location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _location Data table location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取Storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageSize Storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置Storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageSize Storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                private:

                    /**
                     * Responsible person.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * Data table location.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Storage size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TECHNICALMETADATA_H_
