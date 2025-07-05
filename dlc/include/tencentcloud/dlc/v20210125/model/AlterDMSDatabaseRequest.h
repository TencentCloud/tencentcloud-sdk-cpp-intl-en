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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ALTERDMSDATABASEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ALTERDMSDATABASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Asset.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * AlterDMSDatabase request structure.
                */
                class AlterDMSDatabaseRequest : public AbstractModel
                {
                public:
                    AlterDMSDatabaseRequest();
                    ~AlterDMSDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Current name
                     * @return CurrentName Current name
                     * 
                     */
                    std::string GetCurrentName() const;

                    /**
                     * 设置Current name
                     * @param _currentName Current name
                     * 
                     */
                    void SetCurrentName(const std::string& _currentName);

                    /**
                     * 判断参数 CurrentName 是否已赋值
                     * @return CurrentName 是否已赋值
                     * 
                     */
                    bool CurrentNameHasBeenSet() const;

                    /**
                     * 获取Schema name
                     * @return SchemaName Schema name
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Schema name
                     * @param _schemaName Schema name
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取Path
                     * @return Location Path
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Path
                     * @param _location Path
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
                     * 获取Basic object
                     * @return Asset Basic object
                     * 
                     */
                    Asset GetAsset() const;

                    /**
                     * 设置Basic object
                     * @param _asset Basic object
                     * 
                     */
                    void SetAsset(const Asset& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                private:

                    /**
                     * Current name
                     */
                    std::string m_currentName;
                    bool m_currentNameHasBeenSet;

                    /**
                     * Schema name
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * Path
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Basic object
                     */
                    Asset m_asset;
                    bool m_assetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ALTERDMSDATABASEREQUEST_H_
