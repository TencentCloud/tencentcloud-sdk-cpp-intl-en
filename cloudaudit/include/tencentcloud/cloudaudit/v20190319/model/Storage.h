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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_STORAGE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_STORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * Tracking set storage information
                */
                class Storage : public AbstractModel
                {
                public:
                    Storage();
                    ~Storage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage type (Valid values: cos, cls)
                     * @return StorageType Storage type (Valid values: cos, cls)
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Storage type (Valid values: cos, cls)
                     * @param _storageType Storage type (Valid values: cos, cls)
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取Storage region
                     * @return StorageRegion Storage region
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置Storage region
                     * @param _storageRegion Storage region
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取Storage name. For COS, the storage name is the custom bucket name, which can contain up to 50 lowercase letters, digits, and hyphens. It cannot contain "-APPID" and cannot start or end with a hyphen. For CLS, the storage name is the log topic ID, which can contain 1-50 characters.
                     * @return StorageName Storage name. For COS, the storage name is the custom bucket name, which can contain up to 50 lowercase letters, digits, and hyphens. It cannot contain "-APPID" and cannot start or end with a hyphen. For CLS, the storage name is the log topic ID, which can contain 1-50 characters.
                     * 
                     */
                    std::string GetStorageName() const;

                    /**
                     * 设置Storage name. For COS, the storage name is the custom bucket name, which can contain up to 50 lowercase letters, digits, and hyphens. It cannot contain "-APPID" and cannot start or end with a hyphen. For CLS, the storage name is the log topic ID, which can contain 1-50 characters.
                     * @param _storageName Storage name. For COS, the storage name is the custom bucket name, which can contain up to 50 lowercase letters, digits, and hyphens. It cannot contain "-APPID" and cannot start or end with a hyphen. For CLS, the storage name is the log topic ID, which can contain 1-50 characters.
                     * 
                     */
                    void SetStorageName(const std::string& _storageName);

                    /**
                     * 判断参数 StorageName 是否已赋值
                     * @return StorageName 是否已赋值
                     * 
                     */
                    bool StorageNameHasBeenSet() const;

                    /**
                     * 获取Storage directory prefix. The COS log file prefix can only contain 3-40 letters and digits.
                     * @return StoragePrefix Storage directory prefix. The COS log file prefix can only contain 3-40 letters and digits.
                     * 
                     */
                    std::string GetStoragePrefix() const;

                    /**
                     * 设置Storage directory prefix. The COS log file prefix can only contain 3-40 letters and digits.
                     * @param _storagePrefix Storage directory prefix. The COS log file prefix can only contain 3-40 letters and digits.
                     * 
                     */
                    void SetStoragePrefix(const std::string& _storagePrefix);

                    /**
                     * 判断参数 StoragePrefix 是否已赋值
                     * @return StoragePrefix 是否已赋值
                     * 
                     */
                    bool StoragePrefixHasBeenSet() const;

                private:

                    /**
                     * Storage type (Valid values: cos, cls)
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Storage region
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * Storage name. For COS, the storage name is the custom bucket name, which can contain up to 50 lowercase letters, digits, and hyphens. It cannot contain "-APPID" and cannot start or end with a hyphen. For CLS, the storage name is the log topic ID, which can contain 1-50 characters.
                     */
                    std::string m_storageName;
                    bool m_storageNameHasBeenSet;

                    /**
                     * Storage directory prefix. The COS log file prefix can only contain 3-40 letters and digits.
                     */
                    std::string m_storagePrefix;
                    bool m_storagePrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_STORAGE_H_
