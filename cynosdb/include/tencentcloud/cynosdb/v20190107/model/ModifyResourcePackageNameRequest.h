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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGENAMEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGENAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyResourcePackageName request structure.
                */
                class ModifyResourcePackageNameRequest : public AbstractModel
                {
                public:
                    ModifyResourcePackageNameRequest();
                    ~ModifyResourcePackageNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of a resource pack
                     * @return PackageId The unique ID of a resource pack
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置The unique ID of a resource pack
                     * @param _packageId The unique ID of a resource pack
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
                     * 获取Custom resource pack name, which can contains up to 120 characters.
                     * @return PackageName Custom resource pack name, which can contains up to 120 characters.
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置Custom resource pack name, which can contains up to 120 characters.
                     * @param _packageName Custom resource pack name, which can contains up to 120 characters.
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                private:

                    /**
                     * The unique ID of a resource pack
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * Custom resource pack name, which can contains up to 120 characters.
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYRESOURCEPACKAGENAMEREQUEST_H_
