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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SLOWLOGITEM_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SLOWLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Slow log details.
                */
                class SlowLogItem : public AbstractModel
                {
                public:
                    SlowLogItem();
                    ~SlowLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Slow log details.
                     * @return Log Slow log details.
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置Slow log details.
                     * @param _log Slow log details.
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取Node name.
                     * @return NodeName Node name.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name.
                     * @param _nodeName Node name.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Queries the hash value.
                     * @return QueryHash Queries the hash value.
                     * 
                     */
                    std::string GetQueryHash() const;

                    /**
                     * 设置Queries the hash value.
                     * @param _queryHash Queries the hash value.
                     * 
                     */
                    void SetQueryHash(const std::string& _queryHash);

                    /**
                     * 判断参数 QueryHash 是否已赋值
                     * @return QueryHash 是否已赋值
                     * 
                     */
                    bool QueryHashHasBeenSet() const;

                private:

                    /**
                     * Slow log details.
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * Node name.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Queries the hash value.
                     */
                    std::string m_queryHash;
                    bool m_queryHashHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SLOWLOGITEM_H_
