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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEPUBLISHSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEPUBLISHSUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DatabaseTuple.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DeletePublishSubscribe request structure.
                */
                class DeletePublishSubscribeRequest : public AbstractModel
                {
                public:
                    DeletePublishSubscribeRequest();
                    ~DeletePublishSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Publish/subscribe ID, which can be obtained through the DescribePublishSubscribe API.
                     * @return PublishSubscribeId Publish/subscribe ID, which can be obtained through the DescribePublishSubscribe API.
                     * 
                     */
                    uint64_t GetPublishSubscribeId() const;

                    /**
                     * 设置Publish/subscribe ID, which can be obtained through the DescribePublishSubscribe API.
                     * @param _publishSubscribeId Publish/subscribe ID, which can be obtained through the DescribePublishSubscribe API.
                     * 
                     */
                    void SetPublishSubscribeId(const uint64_t& _publishSubscribeId);

                    /**
                     * 判断参数 PublishSubscribeId 是否已赋值
                     * @return PublishSubscribeId 是否已赋值
                     * 
                     */
                    bool PublishSubscribeIdHasBeenSet() const;

                    /**
                     * 获取Publish/subscribe relationship collection of the database to be deleted.
                     * @return DatabaseTupleSet Publish/subscribe relationship collection of the database to be deleted.
                     * 
                     */
                    std::vector<DatabaseTuple> GetDatabaseTupleSet() const;

                    /**
                     * 设置Publish/subscribe relationship collection of the database to be deleted.
                     * @param _databaseTupleSet Publish/subscribe relationship collection of the database to be deleted.
                     * 
                     */
                    void SetDatabaseTupleSet(const std::vector<DatabaseTuple>& _databaseTupleSet);

                    /**
                     * 判断参数 DatabaseTupleSet 是否已赋值
                     * @return DatabaseTupleSet 是否已赋值
                     * 
                     */
                    bool DatabaseTupleSetHasBeenSet() const;

                private:

                    /**
                     * Publish/subscribe ID, which can be obtained through the DescribePublishSubscribe API.
                     */
                    uint64_t m_publishSubscribeId;
                    bool m_publishSubscribeIdHasBeenSet;

                    /**
                     * Publish/subscribe relationship collection of the database to be deleted.
                     */
                    std::vector<DatabaseTuple> m_databaseTupleSet;
                    bool m_databaseTupleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DELETEPUBLISHSUBSCRIBEREQUEST_H_
