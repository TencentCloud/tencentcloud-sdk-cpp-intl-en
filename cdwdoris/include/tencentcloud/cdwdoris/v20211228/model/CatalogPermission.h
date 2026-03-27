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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CATALOGPERMISSION_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CATALOGPERMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * catalog Level Permission
                */
                class CatalogPermission : public AbstractModel
                {
                public:
                    CatalogPermission();
                    ~CatalogPermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取catalog Name
                     * @return CatalogName catalog Name
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置catalog Name
                     * @param _catalogName catalog Name
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取catalog permission
                     * @return Permissions catalog permission
                     * 
                     */
                    std::vector<std::string> GetPermissions() const;

                    /**
                     * 设置catalog permission
                     * @param _permissions catalog permission
                     * 
                     */
                    void SetPermissions(const std::vector<std::string>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                private:

                    /**
                     * catalog Name
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * catalog permission
                     */
                    std::vector<std::string> m_permissions;
                    bool m_permissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CATALOGPERMISSION_H_
