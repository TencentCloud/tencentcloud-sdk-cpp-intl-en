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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_STORAGECONF_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_STORAGECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Storage volume configuration
                */
                class StorageConf : public AbstractModel
                {
                public:
                    StorageConf();
                    ~StorageConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Storage volume name
                     * @return StorageVolName Storage volume name
                     * 
                     */
                    std::string GetStorageVolName() const;

                    /**
                     * 设置Storage volume name
                     * @param _storageVolName Storage volume name
                     * 
                     */
                    void SetStorageVolName(const std::string& _storageVolName);

                    /**
                     * 判断参数 StorageVolName 是否已赋值
                     * @return StorageVolName 是否已赋值
                     * 
                     */
                    bool StorageVolNameHasBeenSet() const;

                    /**
                     * 获取Storage volume path
                     * @return StorageVolPath Storage volume path
                     * 
                     */
                    std::string GetStorageVolPath() const;

                    /**
                     * 设置Storage volume path
                     * @param _storageVolPath Storage volume path
                     * 
                     */
                    void SetStorageVolPath(const std::string& _storageVolPath);

                    /**
                     * 判断参数 StorageVolPath 是否已赋值
                     * @return StorageVolPath 是否已赋值
                     * 
                     */
                    bool StorageVolPathHasBeenSet() const;

                    /**
                     * 获取Storage volume IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return StorageVolIp Storage volume IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStorageVolIp() const;

                    /**
                     * 设置Storage volume IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _storageVolIp Storage volume IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStorageVolIp(const std::string& _storageVolIp);

                    /**
                     * 判断参数 StorageVolIp 是否已赋值
                     * @return StorageVolIp 是否已赋值
                     * 
                     */
                    bool StorageVolIpHasBeenSet() const;

                private:

                    /**
                     * Storage volume name
                     */
                    std::string m_storageVolName;
                    bool m_storageVolNameHasBeenSet;

                    /**
                     * Storage volume path
                     */
                    std::string m_storageVolPath;
                    bool m_storageVolPathHasBeenSet;

                    /**
                     * Storage volume IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_storageVolIp;
                    bool m_storageVolIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_STORAGECONF_H_
