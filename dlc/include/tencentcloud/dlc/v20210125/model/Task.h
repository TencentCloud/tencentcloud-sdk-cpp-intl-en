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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TASK_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SQLTask.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Task type, such as SQL query.
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SQL query task
                     * @return SQLTask SQL query task
                     * 
                     */
                    SQLTask GetSQLTask() const;

                    /**
                     * 设置SQL query task
                     * @param _sQLTask SQL query task
                     * 
                     */
                    void SetSQLTask(const SQLTask& _sQLTask);

                    /**
                     * 判断参数 SQLTask 是否已赋值
                     * @return SQLTask 是否已赋值
                     * 
                     */
                    bool SQLTaskHasBeenSet() const;

                    /**
                     * 获取Spark SQL query task
                     * @return SparkSQLTask Spark SQL query task
                     * 
                     */
                    SQLTask GetSparkSQLTask() const;

                    /**
                     * 设置Spark SQL query task
                     * @param _sparkSQLTask Spark SQL query task
                     * 
                     */
                    void SetSparkSQLTask(const SQLTask& _sparkSQLTask);

                    /**
                     * 判断参数 SparkSQLTask 是否已赋值
                     * @return SparkSQLTask 是否已赋值
                     * 
                     */
                    bool SparkSQLTaskHasBeenSet() const;

                private:

                    /**
                     * SQL query task
                     */
                    SQLTask m_sQLTask;
                    bool m_sQLTaskHasBeenSet;

                    /**
                     * Spark SQL query task
                     */
                    SQLTask m_sparkSQLTask;
                    bool m_sparkSQLTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TASK_H_
