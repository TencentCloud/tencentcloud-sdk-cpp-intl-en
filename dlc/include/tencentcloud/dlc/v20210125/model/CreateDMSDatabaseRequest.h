/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDMSDATABASEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDMSDATABASEREQUEST_H_

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
                * CreateDMSDatabase request structure.
                */
                class CreateDMSDatabaseRequest : public AbstractModel
                {
                public:
                    CreateDMSDatabaseRequest();
                    ~CreateDMSDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Basic metadata object
                     * @return Asset Basic metadata object
                     * 
                     */
                    Asset GetAsset() const;

                    /**
                     * 设置Basic metadata object
                     * @param _asset Basic metadata object
                     * 
                     */
                    void SetAsset(const Asset& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                    /**
                     * 获取Schema directory
                     * @return SchemaName Schema directory
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Schema directory
                     * @param _schemaName Schema directory
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
                     * 获取Db storage path
                     * @return Location Db storage path
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Db storage path
                     * @param _location Db storage path
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
                     * 获取Database name
                     * @return Name Database name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Database name
                     * @param _name Database name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Basic metadata object
                     */
                    Asset m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * Schema directory
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * Db storage path
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDMSDATABASEREQUEST_H_
