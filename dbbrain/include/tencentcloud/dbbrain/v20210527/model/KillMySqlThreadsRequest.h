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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_KILLMYSQLTHREADSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_KILLMYSQLTHREADSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * KillMySqlThreads request structure.
                */
                class KillMySqlThreadsRequest : public AbstractModel
                {
                public:
                    KillMySqlThreadsRequest();
                    ~KillMySqlThreadsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取The stage of a session killing task. Valid values: `Prepare` (preparation stage), `Commit` (commit stage).
                     * @return Stage The stage of a session killing task. Valid values: `Prepare` (preparation stage), `Commit` (commit stage).
                     * 
                     */
                    std::string GetStage() const;

                    /**
                     * 设置The stage of a session killing task. Valid values: `Prepare` (preparation stage), `Commit` (commit stage).
                     * @param _stage The stage of a session killing task. Valid values: `Prepare` (preparation stage), `Commit` (commit stage).
                     * 
                     */
                    void SetStage(const std::string& _stage);

                    /**
                     * 判断参数 Stage 是否已赋值
                     * @return Stage 是否已赋值
                     * 
                     */
                    bool StageHasBeenSet() const;

                    /**
                     * 获取List of IDs of the MySQL sessions to be killed. This parameter is used in the `Prepare` stage.
                     * @return Threads List of IDs of the MySQL sessions to be killed. This parameter is used in the `Prepare` stage.
                     * 
                     */
                    std::vector<int64_t> GetThreads() const;

                    /**
                     * 设置List of IDs of the MySQL sessions to be killed. This parameter is used in the `Prepare` stage.
                     * @param _threads List of IDs of the MySQL sessions to be killed. This parameter is used in the `Prepare` stage.
                     * 
                     */
                    void SetThreads(const std::vector<int64_t>& _threads);

                    /**
                     * 判断参数 Threads 是否已赋值
                     * @return Threads 是否已赋值
                     * 
                     */
                    bool ThreadsHasBeenSet() const;

                    /**
                     * 获取Execution ID. This parameter is used in the `Commit` stage.
                     * @return SqlExecId Execution ID. This parameter is used in the `Commit` stage.
                     * 
                     */
                    std::string GetSqlExecId() const;

                    /**
                     * 设置Execution ID. This parameter is used in the `Commit` stage.
                     * @param _sqlExecId Execution ID. This parameter is used in the `Commit` stage.
                     * 
                     */
                    void SetSqlExecId(const std::string& _sqlExecId);

                    /**
                     * 判断参数 SqlExecId 是否已赋值
                     * @return SqlExecId 是否已赋值
                     * 
                     */
                    bool SqlExecIdHasBeenSet() const;

                    /**
                     * 获取Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @return Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @param _product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The stage of a session killing task. Valid values: `Prepare` (preparation stage), `Commit` (commit stage).
                     */
                    std::string m_stage;
                    bool m_stageHasBeenSet;

                    /**
                     * List of IDs of the MySQL sessions to be killed. This parameter is used in the `Prepare` stage.
                     */
                    std::vector<int64_t> m_threads;
                    bool m_threadsHasBeenSet;

                    /**
                     * Execution ID. This parameter is used in the `Commit` stage.
                     */
                    std::string m_sqlExecId;
                    bool m_sqlExecIdHasBeenSet;

                    /**
                     * Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_KILLMYSQLTHREADSREQUEST_H_
