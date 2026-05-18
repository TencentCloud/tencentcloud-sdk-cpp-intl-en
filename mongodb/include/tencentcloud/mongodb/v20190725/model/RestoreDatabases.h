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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_RESTOREDATABASES_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_RESTOREDATABASES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/RestoreCollection.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Rollback database and table to new instance, database table information
                */
                class RestoreDatabases : public AbstractModel
                {
                public:
                    RestoreDatabases();
                    ~RestoreDatabases() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DB name.
                     * @return Db DB name.
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置DB name.
                     * @param _db DB name.
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取Collection information to be rolled back.
                     * @return Collections Collection information to be rolled back.
                     * 
                     */
                    std::vector<RestoreCollection> GetCollections() const;

                    /**
                     * 设置Collection information to be rolled back.
                     * @param _collections Collection information to be rolled back.
                     * 
                     */
                    void SetCollections(const std::vector<RestoreCollection>& _collections);

                    /**
                     * 判断参数 Collections 是否已赋值
                     * @return Collections 是否已赋值
                     * 
                     */
                    bool CollectionsHasBeenSet() const;

                private:

                    /**
                     * DB name.
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * Collection information to be rolled back.
                     */
                    std::vector<RestoreCollection> m_collections;
                    bool m_collectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_RESTOREDATABASES_H_
