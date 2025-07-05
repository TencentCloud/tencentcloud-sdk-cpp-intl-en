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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEREDISBIGKEYANALYSISTASKREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEREDISBIGKEYANALYSISTASKREQUEST_H_

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
                * CreateRedisBigKeyAnalysisTask request structure.
                */
                class CreateRedisBigKeyAnalysisTaskRequest : public AbstractModel
                {
                public:
                    CreateRedisBigKeyAnalysisTaskRequest();
                    ~CreateRedisBigKeyAnalysisTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Service type. Valid value: `redis` (TencentDB for Redis).
                     * @return Product Service type. Valid value: `redis` (TencentDB for Redis).
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid value: `redis` (TencentDB for Redis).
                     * @param _product Service type. Valid value: `redis` (TencentDB for Redis).
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取The list of the serial numbers of shard nodes. When the list is empty, all shard nodes will be selected.
                     * @return ShardIds The list of the serial numbers of shard nodes. When the list is empty, all shard nodes will be selected.
                     * 
                     */
                    std::vector<int64_t> GetShardIds() const;

                    /**
                     * 设置The list of the serial numbers of shard nodes. When the list is empty, all shard nodes will be selected.
                     * @param _shardIds The list of the serial numbers of shard nodes. When the list is empty, all shard nodes will be selected.
                     * 
                     */
                    void SetShardIds(const std::vector<int64_t>& _shardIds);

                    /**
                     * 判断参数 ShardIds 是否已赋值
                     * @return ShardIds 是否已赋值
                     * 
                     */
                    bool ShardIdsHasBeenSet() const;

                    /**
                     * 获取The list of separators of top key prefixes.
Currently, the following separators are supported: ",", ";", ":", "_", "-", "+", "@", "=", "|", "#", ".". When the list is empty, all separators will be selected by default.
                     * @return KeyDelimiterList The list of separators of top key prefixes.
Currently, the following separators are supported: ",", ";", ":", "_", "-", "+", "@", "=", "|", "#", ".". When the list is empty, all separators will be selected by default.
                     * 
                     */
                    std::vector<std::string> GetKeyDelimiterList() const;

                    /**
                     * 设置The list of separators of top key prefixes.
Currently, the following separators are supported: ",", ";", ":", "_", "-", "+", "@", "=", "|", "#", ".". When the list is empty, all separators will be selected by default.
                     * @param _keyDelimiterList The list of separators of top key prefixes.
Currently, the following separators are supported: ",", ";", ":", "_", "-", "+", "@", "=", "|", "#", ".". When the list is empty, all separators will be selected by default.
                     * 
                     */
                    void SetKeyDelimiterList(const std::vector<std::string>& _keyDelimiterList);

                    /**
                     * 判断参数 KeyDelimiterList 是否已赋值
                     * @return KeyDelimiterList 是否已赋值
                     * 
                     */
                    bool KeyDelimiterListHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Service type. Valid value: `redis` (TencentDB for Redis).
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * The list of the serial numbers of shard nodes. When the list is empty, all shard nodes will be selected.
                     */
                    std::vector<int64_t> m_shardIds;
                    bool m_shardIdsHasBeenSet;

                    /**
                     * The list of separators of top key prefixes.
Currently, the following separators are supported: ",", ";", ":", "_", "-", "+", "@", "=", "|", "#", ".". When the list is empty, all separators will be selected by default.
                     */
                    std::vector<std::string> m_keyDelimiterList;
                    bool m_keyDelimiterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEREDISBIGKEYANALYSISTASKREQUEST_H_
