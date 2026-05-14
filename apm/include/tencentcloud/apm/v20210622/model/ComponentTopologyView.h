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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_COMPONENTTOPOLOGYVIEW_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_COMPONENTTOPOLOGYVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * Contains the quantity of node component types in the view.
                */
                class ComponentTopologyView : public AbstractModel
                {
                public:
                    ComponentTopologyView();
                    ~ComponentTopologyView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of nodes at the service level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Service Number of nodes at the service level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetService() const;

                    /**
                     * 设置Number of nodes at the service level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _service Number of nodes at the service level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetService(const int64_t& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取Node count of the database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Database Node count of the database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDatabase() const;

                    /**
                     * 设置Node count of the database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _database Node count of the database.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDatabase(const int64_t& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取Node count of the message queue.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MQ Node count of the message queue.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMQ() const;

                    /**
                     * 设置Node count of the message queue.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _mQ Node count of the message queue.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMQ(const int64_t& _mQ);

                    /**
                     * 判断参数 MQ 是否已赋值
                     * @return MQ 是否已赋值
                     * 
                     */
                    bool MQHasBeenSet() const;

                private:

                    /**
                     * Number of nodes at the service level.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * Node count of the database.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * Node count of the message queue.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_mQ;
                    bool m_mQHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_COMPONENTTOPOLOGYVIEW_H_
