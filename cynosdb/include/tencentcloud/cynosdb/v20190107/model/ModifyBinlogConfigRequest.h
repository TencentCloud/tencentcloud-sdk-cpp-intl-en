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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBINLOGCONFIGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBINLOGCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BinlogConfigInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyBinlogConfig request structure.
                */
                class ModifyBinlogConfigRequest : public AbstractModel
                {
                public:
                    ModifyBinlogConfigRequest();
                    ~ModifyBinlogConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Specifies the Binlog configuration message.
                     * @return BinlogConfig Specifies the Binlog configuration message.
                     * 
                     */
                    BinlogConfigInfo GetBinlogConfig() const;

                    /**
                     * 设置Specifies the Binlog configuration message.
                     * @param _binlogConfig Specifies the Binlog configuration message.
                     * 
                     */
                    void SetBinlogConfig(const BinlogConfigInfo& _binlogConfig);

                    /**
                     * 判断参数 BinlogConfig 是否已赋值
                     * @return BinlogConfig 是否已赋值
                     * 
                     */
                    bool BinlogConfigHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Specifies the Binlog configuration message.
                     */
                    BinlogConfigInfo m_binlogConfig;
                    bool m_binlogConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYBINLOGCONFIGREQUEST_H_
