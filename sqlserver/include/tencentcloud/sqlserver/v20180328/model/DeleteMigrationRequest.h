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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEMIGRATIONREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEMIGRATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteMigration request structure.
                */
                class DeleteMigrationRequest : public AbstractModel
                {
                public:
                    DeleteMigrationRequest();
                    ~DeleteMigrationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Migration task ID
                     * @return MigrateId Migration task ID
                     */
                    uint64_t GetMigrateId() const;

                    /**
                     * 设置Migration task ID
                     * @param MigrateId Migration task ID
                     */
                    void SetMigrateId(const uint64_t& _migrateId);

                    /**
                     * 判断参数 MigrateId 是否已赋值
                     * @return MigrateId 是否已赋值
                     */
                    bool MigrateIdHasBeenSet() const;

                private:

                    /**
                     * Migration task ID
                     */
                    uint64_t m_migrateId;
                    bool m_migrateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEMIGRATIONREQUEST_H_
