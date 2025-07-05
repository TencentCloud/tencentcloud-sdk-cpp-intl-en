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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DROPDMSTABLEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DROPDMSTABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DropDMSTable request structure.
                */
                class DropDMSTableRequest : public AbstractModel
                {
                public:
                    DropDMSTableRequest();
                    ~DropDMSTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database name
                     * @return DbName Database name
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name
                     * @param _dbName Database name
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Table name
                     * @return Name Table name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Table name
                     * @param _name Table name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Whether to delete the data
                     * @return DeleteData Whether to delete the data
                     * 
                     */
                    bool GetDeleteData() const;

                    /**
                     * 设置Whether to delete the data
                     * @param _deleteData Whether to delete the data
                     * 
                     */
                    void SetDeleteData(const bool& _deleteData);

                    /**
                     * 判断参数 DeleteData 是否已赋值
                     * @return DeleteData 是否已赋值
                     * 
                     */
                    bool DeleteDataHasBeenSet() const;

                    /**
                     * 获取Environment properties
                     * @return EnvProps Environment properties
                     * 
                     */
                    KVPair GetEnvProps() const;

                    /**
                     * 设置Environment properties
                     * @param _envProps Environment properties
                     * 
                     */
                    void SetEnvProps(const KVPair& _envProps);

                    /**
                     * 判断参数 EnvProps 是否已赋值
                     * @return EnvProps 是否已赋值
                     * 
                     */
                    bool EnvPropsHasBeenSet() const;

                private:

                    /**
                     * Database name
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Table name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether to delete the data
                     */
                    bool m_deleteData;
                    bool m_deleteDataHasBeenSet;

                    /**
                     * Environment properties
                     */
                    KVPair m_envProps;
                    bool m_envPropsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DROPDMSTABLEREQUEST_H_
