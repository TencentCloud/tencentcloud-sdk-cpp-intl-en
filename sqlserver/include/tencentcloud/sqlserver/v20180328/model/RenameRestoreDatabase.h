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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RENAMERESTOREDATABASE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RENAMERESTOREDATABASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Used in the `RestoreInstance`, `RollbackInstance`, `CreateMigration`, and `CloneDB` APIs to specify and rename the database to be restored, rolled back, migrated, or cloned.
                */
                class RenameRestoreDatabase : public AbstractModel
                {
                public:
                    RenameRestoreDatabase();
                    ~RenameRestoreDatabase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name. If the `OldName` database does not exist, a failure will be returned.
It can be left empty in offline migration tasks.
                     * @return OldName Database name. If the `OldName` database does not exist, a failure will be returned.
It can be left empty in offline migration tasks.
                     */
                    std::string GetOldName() const;

                    /**
                     * 设置Database name. If the `OldName` database does not exist, a failure will be returned.
It can be left empty in offline migration tasks.
                     * @param OldName Database name. If the `OldName` database does not exist, a failure will be returned.
It can be left empty in offline migration tasks.
                     */
                    void SetOldName(const std::string& _oldName);

                    /**
                     * 判断参数 OldName 是否已赋值
                     * @return OldName 是否已赋值
                     */
                    bool OldNameHasBeenSet() const;

                    /**
                     * 获取New database name. In offline migration, `OldName` will be used if `NewName` is left empty (`OldName` and `NewName` cannot be both empty). In database cloning, `OldName` and `NewName` must be both specified and cannot have the same value.
                     * @return NewName New database name. In offline migration, `OldName` will be used if `NewName` is left empty (`OldName` and `NewName` cannot be both empty). In database cloning, `OldName` and `NewName` must be both specified and cannot have the same value.
                     */
                    std::string GetNewName() const;

                    /**
                     * 设置New database name. In offline migration, `OldName` will be used if `NewName` is left empty (`OldName` and `NewName` cannot be both empty). In database cloning, `OldName` and `NewName` must be both specified and cannot have the same value.
                     * @param NewName New database name. In offline migration, `OldName` will be used if `NewName` is left empty (`OldName` and `NewName` cannot be both empty). In database cloning, `OldName` and `NewName` must be both specified and cannot have the same value.
                     */
                    void SetNewName(const std::string& _newName);

                    /**
                     * 判断参数 NewName 是否已赋值
                     * @return NewName 是否已赋值
                     */
                    bool NewNameHasBeenSet() const;

                private:

                    /**
                     * Database name. If the `OldName` database does not exist, a failure will be returned.
It can be left empty in offline migration tasks.
                     */
                    std::string m_oldName;
                    bool m_oldNameHasBeenSet;

                    /**
                     * New database name. In offline migration, `OldName` will be used if `NewName` is left empty (`OldName` and `NewName` cannot be both empty). In database cloning, `OldName` and `NewName` must be both specified and cannot have the same value.
                     */
                    std::string m_newName;
                    bool m_newNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RENAMERESTOREDATABASE_H_
