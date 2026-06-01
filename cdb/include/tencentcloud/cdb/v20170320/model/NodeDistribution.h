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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_NODEDISTRIBUTION_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_NODEDISTRIBUTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Node distribution of the dedicated cluster CDB instance
                */
                class NodeDistribution : public AbstractModel
                {
                public:
                    NodeDistribution();
                    ~NodeDistribution() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Host ID of the Master node of the primary instance or host ID of the read-only instance
                     * @return Node Host ID of the Master node of the primary instance or host ID of the read-only instance
                     * 
                     */
                    std::string GetNode() const;

                    /**
                     * 设置Host ID of the Master node of the primary instance or host ID of the read-only instance
                     * @param _node Host ID of the Master node of the primary instance or host ID of the read-only instance
                     * 
                     */
                    void SetNode(const std::string& _node);

                    /**
                     * 判断参数 Node 是否已赋值
                     * @return Node 是否已赋值
                     * 
                     */
                    bool NodeHasBeenSet() const;

                    /**
                     * 获取Host ID where the first Slave node of the primary instance resides
                     * @return SlaveNodeOne Host ID where the first Slave node of the primary instance resides
                     * 
                     */
                    std::string GetSlaveNodeOne() const;

                    /**
                     * 设置Host ID where the first Slave node of the primary instance resides
                     * @param _slaveNodeOne Host ID where the first Slave node of the primary instance resides
                     * 
                     */
                    void SetSlaveNodeOne(const std::string& _slaveNodeOne);

                    /**
                     * 判断参数 SlaveNodeOne 是否已赋值
                     * @return SlaveNodeOne 是否已赋值
                     * 
                     */
                    bool SlaveNodeOneHasBeenSet() const;

                    /**
                     * 获取Host ID where the second Slave node of the primary instance resides
                     * @return SlaveNodeTwo Host ID where the second Slave node of the primary instance resides
                     * 
                     */
                    std::string GetSlaveNodeTwo() const;

                    /**
                     * 设置Host ID where the second Slave node of the primary instance resides
                     * @param _slaveNodeTwo Host ID where the second Slave node of the primary instance resides
                     * 
                     */
                    void SetSlaveNodeTwo(const std::string& _slaveNodeTwo);

                    /**
                     * 判断参数 SlaveNodeTwo 是否已赋值
                     * @return SlaveNodeTwo 是否已赋值
                     * 
                     */
                    bool SlaveNodeTwoHasBeenSet() const;

                private:

                    /**
                     * Host ID of the Master node of the primary instance or host ID of the read-only instance
                     */
                    std::string m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * Host ID where the first Slave node of the primary instance resides
                     */
                    std::string m_slaveNodeOne;
                    bool m_slaveNodeOneHasBeenSet;

                    /**
                     * Host ID where the second Slave node of the primary instance resides
                     */
                    std::string m_slaveNodeTwo;
                    bool m_slaveNodeTwoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_NODEDISTRIBUTION_H_
