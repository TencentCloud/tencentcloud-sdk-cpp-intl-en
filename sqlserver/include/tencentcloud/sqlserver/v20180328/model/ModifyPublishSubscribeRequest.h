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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYPUBLISHSUBSCRIBEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYPUBLISHSUBSCRIBEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ModifyDataBaseTuple.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyPublishSubscribe request structure.
                */
                class ModifyPublishSubscribeRequest : public AbstractModel
                {
                public:
                    ModifyPublishSubscribeRequest();
                    ~ModifyPublishSubscribeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. For example: mssql-dg32dcv.
                     * @return InstanceId Instance ID. For example: mssql-dg32dcv.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. For example: mssql-dg32dcv.
                     * @param _instanceId Instance ID. For example: mssql-dg32dcv.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Publish/subscribe ID.
                     * @return PublishSubscribeId Publish/subscribe ID.
                     * 
                     */
                    int64_t GetPublishSubscribeId() const;

                    /**
                     * 设置Publish/subscribe ID.
                     * @param _publishSubscribeId Publish/subscribe ID.
                     * 
                     */
                    void SetPublishSubscribeId(const int64_t& _publishSubscribeId);

                    /**
                     * 判断参数 PublishSubscribeId 是否已赋值
                     * @return PublishSubscribeId 是否已赋值
                     * 
                     */
                    bool PublishSubscribeIdHasBeenSet() const;

                    /**
                     * 获取Publish/subscribe relationship collection of the database to be modified.
                     * @return DatabaseTupleSet Publish/subscribe relationship collection of the database to be modified.
                     * 
                     */
                    std::vector<ModifyDataBaseTuple> GetDatabaseTupleSet() const;

                    /**
                     * 设置Publish/subscribe relationship collection of the database to be modified.
                     * @param _databaseTupleSet Publish/subscribe relationship collection of the database to be modified.
                     * 
                     */
                    void SetDatabaseTupleSet(const std::vector<ModifyDataBaseTuple>& _databaseTupleSet);

                    /**
                     * 判断参数 DatabaseTupleSet 是否已赋值
                     * @return DatabaseTupleSet 是否已赋值
                     * 
                     */
                    bool DatabaseTupleSetHasBeenSet() const;

                private:

                    /**
                     * Instance ID. For example: mssql-dg32dcv.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Publish/subscribe ID.
                     */
                    int64_t m_publishSubscribeId;
                    bool m_publishSubscribeIdHasBeenSet;

                    /**
                     * Publish/subscribe relationship collection of the database to be modified.
                     */
                    std::vector<ModifyDataBaseTuple> m_databaseTupleSet;
                    bool m_databaseTupleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYPUBLISHSUBSCRIBEREQUEST_H_
