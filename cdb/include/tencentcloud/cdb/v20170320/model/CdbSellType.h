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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CDBSELLTYPE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CDBSELLTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Purchasable instance type
                */
                class CdbSellType : public AbstractModel
                {
                public:
                    CdbSellType();
                    ~CdbSellType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Purchasable instance name.
Z3: High-availability, corresponds to the specified specification DeviceType, including UNIVERSAL and EXCLUSIVE.
CVM: It is a basic edition type, and the DeviceType in the corresponding specifications is BASIC (Offline).
TKE: It is the basic version v2 type, and the DeviceType in the corresponding specifications is BASIC_V2.
CLOUD_NATIVE_CLUSTER: Represents the standard type of cloud disk edition.
CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Indicates the enhanced cloud disk edition.
ECONOMICAL: Means economical.
                     * @return TypeName Purchasable instance name.
Z3: High-availability, corresponds to the specified specification DeviceType, including UNIVERSAL and EXCLUSIVE.
CVM: It is a basic edition type, and the DeviceType in the corresponding specifications is BASIC (Offline).
TKE: It is the basic version v2 type, and the DeviceType in the corresponding specifications is BASIC_V2.
CLOUD_NATIVE_CLUSTER: Represents the standard type of cloud disk edition.
CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Indicates the enhanced cloud disk edition.
ECONOMICAL: Means economical.
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置Purchasable instance name.
Z3: High-availability, corresponds to the specified specification DeviceType, including UNIVERSAL and EXCLUSIVE.
CVM: It is a basic edition type, and the DeviceType in the corresponding specifications is BASIC (Offline).
TKE: It is the basic version v2 type, and the DeviceType in the corresponding specifications is BASIC_V2.
CLOUD_NATIVE_CLUSTER: Represents the standard type of cloud disk edition.
CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Indicates the enhanced cloud disk edition.
ECONOMICAL: Means economical.
                     * @param _typeName Purchasable instance name.
Z3: High-availability, corresponds to the specified specification DeviceType, including UNIVERSAL and EXCLUSIVE.
CVM: It is a basic edition type, and the DeviceType in the corresponding specifications is BASIC (Offline).
TKE: It is the basic version v2 type, and the DeviceType in the corresponding specifications is BASIC_V2.
CLOUD_NATIVE_CLUSTER: Represents the standard type of cloud disk edition.
CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Indicates the enhanced cloud disk edition.
ECONOMICAL: Means economical.
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取Engine version number
                     * @return EngineVersion Engine version number
                     * 
                     */
                    std::vector<std::string> GetEngineVersion() const;

                    /**
                     * 设置Engine version number
                     * @param _engineVersion Engine version number
                     * 
                     */
                    void SetEngineVersion(const std::vector<std::string>& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取Purchasable specifications ID
                     * @return ConfigIds Purchasable specifications ID
                     * 
                     */
                    std::vector<int64_t> GetConfigIds() const;

                    /**
                     * 设置Purchasable specifications ID
                     * @param _configIds Purchasable specifications ID
                     * 
                     */
                    void SetConfigIds(const std::vector<int64_t>& _configIds);

                    /**
                     * 判断参数 ConfigIds 是否已赋值
                     * @return ConfigIds 是否已赋值
                     * 
                     */
                    bool ConfigIdsHasBeenSet() const;

                private:

                    /**
                     * Purchasable instance name.
Z3: High-availability, corresponds to the specified specification DeviceType, including UNIVERSAL and EXCLUSIVE.
CVM: It is a basic edition type, and the DeviceType in the corresponding specifications is BASIC (Offline).
TKE: It is the basic version v2 type, and the DeviceType in the corresponding specifications is BASIC_V2.
CLOUD_NATIVE_CLUSTER: Represents the standard type of cloud disk edition.
CLOUD_NATIVE_CLUSTER_EXCLUSIVE: Indicates the enhanced cloud disk edition.
ECONOMICAL: Means economical.
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Engine version number
                     */
                    std::vector<std::string> m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * Purchasable specifications ID
                     */
                    std::vector<int64_t> m_configIds;
                    bool m_configIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CDBSELLTYPE_H_
