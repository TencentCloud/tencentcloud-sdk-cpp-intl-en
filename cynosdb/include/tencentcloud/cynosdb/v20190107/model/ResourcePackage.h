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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RESOURCEPACKAGE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RESOURCEPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Information of a resource pack
                */
                class ResourcePackage : public AbstractModel
                {
                public:
                    ResourcePackage();
                    ~ResourcePackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The unique ID of the resource package.
                     * @return PackageId The unique ID of the resource package.
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置The unique ID of the resource package.
                     * @param _packageId The unique ID of the resource package.
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取Resource package type: CCU: compute resource package.
DISK: storage resource package.
                     * @return PackageType Resource package type: CCU: compute resource package.
DISK: storage resource package.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Resource package type: CCU: compute resource package.
DISK: storage resource package.
                     * @param _packageType Resource package type: CCU: compute resource package.
DISK: storage resource package.
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取Deduction priority of the current resource package bound to the current instance.
                     * @return DeductionPriority Deduction priority of the current resource package bound to the current instance.
                     * 
                     */
                    int64_t GetDeductionPriority() const;

                    /**
                     * 设置Deduction priority of the current resource package bound to the current instance.
                     * @param _deductionPriority Deduction priority of the current resource package bound to the current instance.
                     * 
                     */
                    void SetDeductionPriority(const int64_t& _deductionPriority);

                    /**
                     * 判断参数 DeductionPriority 是否已赋值
                     * @return DeductionPriority 是否已赋值
                     * 
                     */
                    bool DeductionPriorityHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the resource package.
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * Resource package type: CCU: compute resource package.
DISK: storage resource package.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Deduction priority of the current resource package bound to the current instance.
                     */
                    int64_t m_deductionPriority;
                    bool m_deductionPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RESOURCEPACKAGE_H_
